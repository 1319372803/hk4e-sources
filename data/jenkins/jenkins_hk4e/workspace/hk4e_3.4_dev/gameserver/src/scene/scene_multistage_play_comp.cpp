// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/scene/scene_multistage_play_comp.cpp

// Line 34: range 0000000015CE2C04-0000000015CE2F27
std::string *__cdecl SceneMultistagePlay::getDesc[abi:cxx11](
        std::string *retstr,
        const SceneMultistagePlay *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // r14
  const char *Description; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  char v17[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:35";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "<[MULTISTAGE] group:");
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->group_id_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " play_index:");
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->play_index_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " name:");
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, &this->current_stage_name_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, " type:");
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  Description = data::getDescription(this->stage_type_);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, Description);
  v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, " duration:");
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, this->duration_seconds_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, ">");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 45: range 0000000015CE2F28-0000000015CE32E9
void __cdecl SceneMultistagePlay::SceneMultistagePlay(
        SceneMultistagePlay *const this,
        Scene *scene,
        Group *group,
        uint32_t play_index)
{
  int (**v4)(...); // rdx
  uint32_t GroupId; // edx
  char v6; // al
  __int64 v7; // rsi
  bool v8; // dl
  std::enable_shared_from_this<Group> *v9; // rdx
  std::enable_shared_from_this<Group> *v10; // rsi
  __int64 v11; // rsi
  bool v12; // dl
  __int64 v13; // rsi
  __int64 v14; // rdx

  std::enable_shared_from_this<SceneMultistagePlay>::enable_shared_from_this(&this->std::enable_shared_from_this<SceneMultistagePlay>);
  common::milog::DescribalBase::DescribalBase(this);
  EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2u>::EcsBase(&this->EcsBase<SceneMultistagePlay,SceneMultistagePlayCompBase,2>);
  v4 = (int (**)(...))(&`vtable for'SceneMultistagePlay + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, scene);
  this->_vptr_DescribalBase = v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->scene_, scene);
  this->scene_ = scene;
  GroupId = Group::getGroupId(group);
  v6 = *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(scene) = v6 != 0;
    __asan_report_store4(&this->group_id_, scene, GroupId);
  }
  this->group_id_ = GroupId;
  v7 = (((_BYTE)this + 84) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->play_index_, v7, v8);
  this->play_index_ = play_index;
  v9 = &group->std::enable_shared_from_this<Group>;
  if ( *(_WORD *)(((unsigned __int64)&this->group_wtr_ >> 3) + 0x7FFF8000) )
    __asan_report_store16(&this->group_wtr_, v7);
  v10 = v9;
  std::enable_shared_from_this<Group>::weak_from_this((std::enable_shared_from_this<Group> *const)&this->group_wtr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->play_type_, v10, (_BYTE)this + 104);
  }
  this->play_type_ = MULTISTAGE_PLAY_TYPE_NON;
  std::string::basic_string(&this->current_stage_name_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_type_, v10, (_BYTE)this - 112);
  }
  this->stage_type_ = MULTISTAGE_STAGE_MECHANICUS_BUILD;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->stage_begin_time_ms_, v10);
  this->stage_begin_time_ms_ = 0LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_begin_scene_time_, v10, (_BYTE)this - 96);
  }
  this->stage_begin_scene_time_ = 0;
  v11 = (((_BYTE)this - 92) & 7u) + 3;
  v12 = *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
     && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000);
  if ( v12 )
    __asan_report_store4(&this->duration_seconds_, v11, v12);
  this->duration_seconds_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_stage_end_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_stage_end_, v11, &this->is_stage_end_);
  this->is_stage_end_ = 0;
  v13 = ((_BYTE)this - 87) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_store1(&this->is_play_end_, v13, v14);
  this->is_play_end_ = 0;
  std::shared_ptr<SceneTimer>::shared_ptr(&this->stage_timer_ptr_);
  std::unordered_map<std::string,std::function<void ()(unsigned int)>>::unordered_map(&this->value_setter_map_);
  std::unordered_map<unsigned int,std::map<std::string,int>>::unordered_map(&this->uid_value_map_);
  std::set<unsigned int>::set(&this->player_uid_set_);
};

// Line 50: range 0000000015CE32EA-0000000015CE33A9
int32_t __cdecl SceneMultistagePlay::init(
        SceneMultistagePlay *const this,
        const luabind::adl::object *param_table,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rax

  std::set<unsigned int>::operator=(&this->player_uid_set_, uid_set);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 8);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(SceneMultistagePlay *const, const luabind::adl::object *))v3)(this, param_table) )
    return -1;
  if ( SceneMultistagePlay::initTimer(this) )
    return -1;
  return 0;
};

// Line 66: range 0000000015CE33AA-0000000015CE3469
int32_t __cdecl SceneMultistagePlay::init(
        SceneMultistagePlay *const this,
        const std::unordered_map<std::string,unsigned int> *param_map,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v3; // rax

  std::set<unsigned int>::operator=(&this->player_uid_set_, uid_set);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v3 = (unsigned __int64)(this->_vptr_DescribalBase + 9);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(SceneMultistagePlay *const, const std::unordered_map<std::string,unsigned int> *))v3)(
         this,
         param_map) )
  {
    return -1;
  }
  if ( SceneMultistagePlay::initTimer(this) )
    return -1;
  return 0;
};

// Line 83: range 0000000015CE346A-0000000015CE37E1
__int64 __fastcall SceneMultistagePlay::setPlayValue(
        SceneMultistagePlay *const this,
        const std::string *key,
        uint32_t value)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::__detail::_Node_iterator<std::pair<const std::string,std::function<void(unsigned int)> >,false,true>::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::string,std::function<void(unsigned int)> >,true> __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-F0h] BYREF
  char v19[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 value:82 64 8 7 iter:84 96 32 9 setter:91";
  *(_QWORD *)(v3 + 16) = SceneMultistagePlay::setPlayValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = value;
  *(std::unordered_map<std::string,std::function<void(unsigned int)>>::iterator *)(v3 + 64) = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::find(
                                                                                                &this->value_setter_map_,
                                                                                                key);
  __y._M_cur = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::end(&this->value_setter_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::string const,std::function<void ()(unsigned int)>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::function<void(unsigned int)> >,true> *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "setPlayValue",
      87);
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v18, (const char (*)[6])" KEY ");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, key);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" NOT exist.");
    common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v18);
    v9 = -1;
  }
  else
  {
    v10 = std::__detail::_Node_iterator<std::pair<std::string const,std::function<void ()(unsigned int)>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::function<void(unsigned int)> >,false,true> *const)(v3 + 64));
    std::function<void ()(unsigned int)>::function((std::function<void(unsigned int)> *const)(v3 + 96), &v10->second);
    if ( std::operator!=<void,unsigned int>(0LL, (const std::function<void(unsigned int)> *)(v3 + 96)) )
    {
      std::function<void ()(unsigned int)>::operator()(
        (const std::function<void(unsigned int)> *const)(v3 + 96),
        *(_DWORD *)(v3 + 48));
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "setPlayValue",
        95);
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v18, (const char (*)[7])" set: ");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, key);
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" value to ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v14, this);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    v9 = 0;
    std::function<void ()(unsigned int)>::~function((std::function<void(unsigned int)> *const)(v3 + 96));
  }
  result = v9;
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 102: range 0000000015CE37E2-0000000015CE3CFA
int32_t __cdecl SceneMultistagePlay::setPlayValues(
        SceneMultistagePlay *const this,
        const std::map<std::string,unsigned int> *param_map)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  std::__detail::_Node_iterator<std::pair<const std::string,std::function<void(unsigned int)> >,false,true>::pointer v7; // rax
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  bool has_error; // [rsp+17h] [rbp-159h]
  std::map<std::string,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-158h] BYREF
  std::map<std::string,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-150h] BYREF
  std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>>::iterator __for_end_0; // [rsp+28h] [rbp-148h] BYREF
  const std::map<std::string,unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> *__for_range_0; // [rsp+38h] [rbp-138h]
  std::pair<std::function<void(unsigned int)>,unsigned int> *__in; // [rsp+40h] [rbp-130h]
  std::tuple_element<0,std::pair<std::function<void(unsigned int)>,unsigned int> >::type *setter; // [rsp+48h] [rbp-128h]
  std::tuple_element<1,std::pair<std::function<void(unsigned int)>,unsigned int> >::type *value_0; // [rsp+50h] [rbp-120h]
  const std::pair<const std::string,unsigned int> *v21; // [rsp+58h] [rbp-118h]
  std::tuple_element<0,const std::pair<const std::string,unsigned int> >::type *key; // [rsp+60h] [rbp-110h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *value; // [rsp+68h] [rbp-108h]
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-100h] BYREF
  std::pair<std::function<void(unsigned int)>,unsigned int> __x; // [rsp+90h] [rbp-E0h] BYREF
  char v26[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:107 64 24 14 setter_vec:104";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::setPlayValues;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  has_error = 0;
  std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>::vector((std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> *const)(v2 + 64));
  __for_range = param_map;
  __for_begin._M_node = std::map<std::string,unsigned int>::begin(param_map)._M_node;
  __for_end._M_node = std::map<std::string,unsigned int>::end(param_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v21 = std::_Rb_tree_const_iterator<std::pair<std::string const,unsigned int>>::operator*(&__for_begin);
    key = std::get<0ul,std::string const,unsigned int>(v21);
    value = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v21);
    *(std::unordered_map<std::string,std::function<void(unsigned int)>>::iterator *)(v2 + 32) = std::unordered_map<std::string,std::function<void ()(unsigned int)>>::find(
                                                                                                  &this->value_setter_map_,
                                                                                                  key);
    __for_end_0._M_current = (std::pair<std::function<void(unsigned int)>,unsigned int> *)std::unordered_map<std::string,std::function<void ()(unsigned int)>>::end(&this->value_setter_map_)._M_cur;
    if ( std::__detail::operator==<std::pair<std::string const,std::function<void ()(unsigned int)>>,true>(
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::function<void(unsigned int)> >,true> *)(v2 + 32),
           (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::function<void(unsigned int)> >,true> *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "setPlayValues",
        110);
      v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v24, (const char (*)[17])" KEY not found: ");
      v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, key);
      common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v24);
      has_error = 1;
    }
    else
    {
      v7 = std::__detail::_Node_iterator<std::pair<std::string const,std::function<void ()(unsigned int)>>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::string,std::function<void(unsigned int)> >,false,true> *const)(v2 + 32));
      std::pair<std::function<void ()(unsigned int)>,unsigned int>::pair<std::function<void ()(unsigned int)>&,true>(
        &__x,
        &v7->second,
        value);
      std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>::push_back(
        (std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> *const)(v2 + 64),
        &__x);
      std::pair<std::function<void ()(unsigned int)>,unsigned int>::~pair(&__x);
    }
    std::_Rb_tree_const_iterator<std::pair<std::string const,unsigned int>>::operator++(&__for_begin);
  }
  if ( has_error )
  {
    v8 = -1;
  }
  else
  {
    __for_range_0 = (std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> *)(v2 + 64);
    *(std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>>::iterator *)(v2 + 32) = std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>::begin((std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> *const)(v2 + 64));
    __for_end_0._M_current = std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<std::function<void ()(unsigned int)>,unsigned int> *,std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>>(
              (const __gnu_cxx::__normal_iterator<std::pair<std::function<void(unsigned int)>,unsigned int>*,std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> > *)(v2 + 32),
              &__for_end_0) )
    {
      __in = __gnu_cxx::__normal_iterator<std::pair<std::function<void ()(unsigned int)>,unsigned int> *,std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<std::pair<std::function<void(unsigned int)>,unsigned int>*,std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> > *const)(v2 + 32));
      setter = std::get<0ul,std::function<void ()(unsigned int)>,unsigned int>(__in);
      value_0 = std::get<1ul,std::function<void ()(unsigned int)>,unsigned int>(__in);
      if ( std::operator!=<void,unsigned int>(0LL, setter) )
      {
        if ( *(_BYTE *)(((unsigned __int64)value_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)value_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        std::function<void ()(unsigned int)>::operator()(setter, *value_0);
      }
      __gnu_cxx::__normal_iterator<std::pair<std::function<void ()(unsigned int)>,unsigned int> *,std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<std::pair<std::function<void(unsigned int)>,unsigned int>*,std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> > *const)(v2 + 32));
    }
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "setPlayValues",
      130);
    v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])off_259DDF00);
    v10 = common::milog::MiLogStream::operator<<<std::string,unsigned int>(v9, param_map);
    common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v10, this);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v8 = 0;
  }
  std::vector<std::pair<std::function<void ()(unsigned int)>,unsigned int>>::~vector((std::vector<std::pair<std::function<void(unsigned int)>,unsigned int>> *const)(v2 + 64));
  result = v8;
  if ( v26 == (char *)v2 )
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

// Line 136: range 0000000015CE3CFC-0000000015CE3F52
__int64 __fastcall SceneMultistagePlay::setPlayUidValue(
        SceneMultistagePlay *const this,
        const std::string *key,
        uint32_t uid,
        int32_t value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r13d
  std::map<std::string,int>::mapped_type *v13; // rax
  _DWORD *v14; // rdx
  char v15; // cl
  __int64 result; // rax
  std::unordered_map<unsigned int,std::map<std::string,int>>::mapped_type *value_map; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+50h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 7 uid:135 64 4 9 value:135";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlay::setPlayUidValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = uid;
  *(_DWORD *)(v4 + 64) = value;
  common::milog::MiLogStream::create(
    &v20,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_comp.cpp",
    "setPlayUidValue",
    138);
  v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v20,
         (const char (*)[42])"SceneMultistagePlay setPlayUidValue uid: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v8, (const char (*)[8])" ,key: ");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, key);
  v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" ,value: ");
  common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v4 + 64));
  common::milog::MiLogStream::~MiLogStream(&v20);
  value_map = std::unordered_map<unsigned int,std::map<std::string,int>>::operator[](
                &this->uid_value_map_,
                (const std::unordered_map<unsigned int,std::map<std::string,int>>::key_type *)(v4 + 48));
  v12 = *(_DWORD *)(v4 + 64);
  v13 = std::map<std::string,int>::operator[](value_map, key);
  v14 = v13;
  v15 = *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000);
  if ( v15 != 0 && (char)(((unsigned __int8)v13 & 7) + 3) >= v15 )
  {
    LOBYTE(key) = v15 != 0;
    __asan_report_store4(v13, key, (_BYTE)v13);
  }
  *v14 = v12;
  result = 0LL;
  if ( v21 == (char *)v4 )
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

// Line 147: range 0000000015CE3F54-0000000015CE416C
__int64 __fastcall SceneMultistagePlay::getPlayUidValue(
        SceneMultistagePlay *const this,
        const std::string *key,
        uint32_t uid)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false>::pointer v7; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false>::pointer v8; // rax
  __int64 v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<std::string,int> >,false> __y; // [rsp+28h] [rbp-A8h] BYREF
  char v12[160]; // [rsp+30h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 7 uid:146 64 8 8 iter:148 96 8 14 value_iter:154";
  *(_QWORD *)(v3 + 16) = SceneMultistagePlay::getPlayUidValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::unordered_map<unsigned int,std::map<std::string,int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<std::string,int>>::find(
                                                                                         &this->uid_value_map_,
                                                                                         (const std::unordered_map<unsigned int,std::map<std::string,int>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::map<std::string,int>>::end(&this->uid_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::map<std::string,int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<std::string,int> >,false> *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false> *const)(v3 + 64));
    *(std::map<std::string,int>::iterator *)(v3 + 96) = std::map<std::string,int>::find(&v7->second, key);
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false> *const)(v3 + 64));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<std::string,int> >,false>::__node_type *)std::map<std::string,int>::end(&v8->second)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,int> >::_Self *)(v3 + 96),
           (const std::_Rb_tree_iterator<std::pair<const std::string,int> >::_Self *)&__y) )
    {
      result = 0LL;
    }
    else
    {
      v9 = (__int64)std::_Rb_tree_iterator<std::pair<std::string const,int>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,int> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(v9 + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(v9 + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        v9 = __asan_report_load4();
      }
      result = *(unsigned int *)(v9 + 32);
    }
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
  return result;
};

// Line 164: range 0000000015CE416E-0000000015CE43BB
__int64 __fastcall SceneMultistagePlay::addPlayUidValue(
        SceneMultistagePlay *const this,
        const std::string *key,
        uint32_t uid,
        int32_t add_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false>::pointer v8; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false>::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<const std::string,int> >::pointer v10; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<std::string,int> >,false> __y; // [rsp+20h] [rbp-B0h] BYREF
  int *value; // [rsp+28h] [rbp-A8h]
  char v15[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 uid:163 64 8 8 iter:165 96 8 14 value_iter:171";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlay::addPlayUidValue;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = uid;
  *(std::unordered_map<unsigned int,std::map<std::string,int>>::iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::map<std::string,int>>::find(
                                                                                         &this->uid_value_map_,
                                                                                         (const std::unordered_map<unsigned int,std::map<std::string,int>>::key_type *)(v4 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::map<std::string,int>>::end(&this->uid_value_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::map<std::string,int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<std::string,int> >,false> *)(v4 + 64),
         &__y) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false> *const)(v4 + 64));
    *(std::map<std::string,int>::iterator *)(v4 + 96) = std::map<std::string,int>::find(&v8->second, key);
    v9 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<std::string,int> >,false,false> *const)(v4 + 64));
    __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<std::string,int> >,false>::__node_type *)std::map<std::string,int>::end(&v9->second)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,int> >::_Self *)(v4 + 96),
           (const std::_Rb_tree_iterator<std::pair<const std::string,int> >::_Self *)&__y) )
    {
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,int>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,int> > *const)(v4 + 96));
      value = &v10->second;
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *value += add_value;
      result = 0LL;
    }
  }
  if ( v15 == (char *)v4 )
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

// Line 185: range 0000000015CE458A-0000000015CE482E
int32_t __cdecl SceneMultistagePlay::initTimer(SceneMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rdx
  int32_t v5; // r14d
  int32_t result; // eax
  std::enable_shared_from_this<Scene> v7; // [rsp+10h] [rbp-C0h] BYREF
  std::weak_ptr<SceneMultistagePlay> v8; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<Scene> v9; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-90h] BYREF
  char v11[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 12 play_wtr:186";
  *(_QWORD *)(v1 + 16) = SceneMultistagePlay::initTimer;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  std::enable_shared_from_this<SceneMultistagePlay>::weak_from_this((std::enable_shared_from_this<SceneMultistagePlay> *const)(v1 + 32));
  std::weak_ptr<SceneMultistagePlay>::weak_ptr(&v8, (const std::weak_ptr<SceneMultistagePlay> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  std::enable_shared_from_this<Scene>::shared_from_this(&v7);
  common::tools::perf::make_shared<SceneTimer,std::shared_ptr<Scene>,SceneMultistagePlay::initTimer(void)::{lambda(unsigned long)#1}>(
    &v9,
    (SceneMultistagePlay::initTimer::<lambda(uint64_t)> *)&v7,
    (std::shared_ptr<Scene> *)&v8,
    (SceneMultistagePlay::initTimer::<lambda(uint64_t)> *)&v7);
  std::shared_ptr<SceneTimer>::operator=(&this->stage_timer_ptr_, (std::shared_ptr<SceneTimer> *)&v9);
  std::shared_ptr<SceneTimer>::~shared_ptr((std::shared_ptr<SceneTimer> *const)&v9);
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)&v7);
  SceneMultistagePlay::initTimer(void)::{lambda(unsigned long)#1}::~initTimer((SceneMultistagePlay::initTimer::<lambda(uint64_t)> *const)&v8);
  if ( std::operator==<SceneTimer>(&this->stage_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "initTimer",
      200);
    v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v10, (const char (*)[17])"initTimer failed");
    common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v4, this);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v5 = -1;
  }
  else
  {
    v5 = 0;
  }
  std::weak_ptr<SceneMultistagePlay>::~weak_ptr((std::weak_ptr<SceneMultistagePlay> *const)(v1 + 32));
  result = v5;
  if ( v11 == (char *)v1 )
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

// Line 187: range 0000000015D257DE-0000000015D25803
void __cdecl SceneMultistagePlay::initTimer(void)::{lambda(unsigned long)#1}::initTimer(
        SceneMultistagePlay::initTimer::<lambda(uint64_t)> *const this,
        SceneMultistagePlay::initTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<SceneMultistagePlay>::weak_ptr(&this->__play_wtr, &a2->__play_wtr);
};

// Line 187: range 0000000015D27148-0000000015D2716D
void __cdecl SceneMultistagePlay::initTimer(void)::{lambda(unsigned long)#1}::initTimer(
        SceneMultistagePlay::initTimer::<lambda(uint64_t)> *const this,
        const SceneMultistagePlay::initTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<SceneMultistagePlay>::weak_ptr(&this->__play_wtr, &a2->__play_wtr);
};

// Line 187: range 0000000015CE43BC-0000000015CE456D
void __cdecl SceneMultistagePlay::initTimer(void)::{lambda(unsigned long)#1}::operator()(
        const SceneMultistagePlay::initTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  SceneMultistagePlay *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 play_ptr:189";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::initTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<SceneMultistagePlay>::lock((const std::weak_ptr<SceneMultistagePlay> *const)(v2 + 32));
  if ( std::operator==<SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "operator()",
      192);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v6, (const char (*)[14])"play nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else
  {
    v5 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    SceneMultistagePlay::onStageTimer(v5, now_ms);
  }
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v2 + 32));
  if ( v7 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 187: range 0000000015CE456E-0000000015CE4588
void __cdecl SceneMultistagePlay::initTimer(void)::{lambda(unsigned long)#1}::~initTimer(
        SceneMultistagePlay::initTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<SceneMultistagePlay>::~weak_ptr(&this->__play_wtr);
};

// Line 208: range 0000000015CE48C4-0000000015CE4F28
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl SceneMultistagePlay::startStage(
        SceneMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int32_t result; // eax
  Scene *scene; // r14
  const char *v12; // rsi
  common::milog::MiLogStream *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  uint64_t NowMs; // rax
  uint32_t SceneTimeSeconds; // edx
  char v17; // al
  unsigned __int64 v18; // rax
  common::milog::MiLogStream *v19; // rdx
  int32_t ret; // [rsp+3Ch] [rbp-94h]
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-90h] BYREF
  char v25[112]; // [rsp+60h] [rbp-70h] BYREF

  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_0(64LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "1 32 1 17 is_press_mode:218";
  *(_QWORD *)(v5 + 16) = SceneMultistagePlay::startStage;
  v7 = v5 >> 3;
  *(_DWORD *)(v7 + 2147450880) = -235802127;
  *(_DWORD *)(v7 + 2147450884) = -202116351;
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->stage_type_, *(_QWORD *)&stage_type, (_BYTE)this - 112);
  }
  this->stage_type_ = stage_type;
  std::string::operator=(&this->current_stage_name_, stage_name);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_DescribalBase + 10);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(SceneMultistagePlay *const, _QWORD, uint32_t *, const std::string *, const luabind::adl::object *))v8)(
          this,
          (unsigned int)stage_type,
          duration,
          stage_name,
          param_table);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "startStage",
      214);
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v24, (const char (*)[19])"initStage failed. ");
    common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v9, this);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = ret;
  }
  else
  {
    *(_BYTE *)(v5 + 32) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    scene = this->scene_;
    std::function<ForeachPolicy ()(Player &)>::function<SceneMultistagePlay::startStage(data::MultistageStageType,unsigned int &,std::string const&,luabind::adl::object const&)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v24,
      (SceneMultistagePlay::startStage::<lambda(Player&)>)(v5 + 32));
    Scene::foreachPlayer(scene, (std::function<ForeachPolicy(Player&)> *)&v24);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v24);
    v12 = (const char *)(((unsigned __int8)duration & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)duration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *duration )
    {
      if ( *(_BYTE *)(v5 + 32) )
        *duration = 2;
      if ( *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)duration & 7) + 3) >= *(_BYTE *)(((unsigned __int64)duration >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v12 = (const char *)*duration;
      if ( SceneMultistagePlay::startStageTimer(this, (uint32_t)v12) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "startStage",
          236);
        v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v24, (const char (*)[5])"play");
        v14 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v13, this);
        v12 = " start stage timer failed";
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          v14,
          (const char (*)[26])" start stage timer failed");
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
    if ( *(char *)(((unsigned __int64)&this->is_stage_end_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_stage_end_, v12, &this->is_stage_end_);
    this->is_stage_end_ = 0;
    NowMs = common::tools::TimeUtils::getNowMs();
    if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_time_ms_ >> 3) + 0x7FFF8000) )
      NowMs = __asan_report_store8(&this->stage_begin_time_ms_, v12);
    this->stage_begin_time_ms_ = NowMs;
    if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneTimeSeconds = Scene::getSceneTimeSeconds(this->scene_);
    v17 = *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000);
    if ( v17 != 0 && v17 <= 3 )
    {
      LOBYTE(v12) = v17 != 0;
      __asan_report_store4(&this->stage_begin_scene_time_, v12, SceneTimeSeconds);
    }
    this->stage_begin_scene_time_ = SceneTimeSeconds;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = (unsigned __int64)(this->_vptr_DescribalBase + 16);
    if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
      v18 = __asan_report_load8();
    (*(void (__fastcall **)(SceneMultistagePlay *const))v18)(this);
    SceneMultistagePlay::notifyStage(this);
    SceneMultistagePlay::notifyLuaStageStartEvent(this);
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "startStage",
      245);
    v19 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v24, (const char (*)[18])"start Stage done:");
    common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v19, this);
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0;
  }
  if ( v25 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 219: range 0000000015CE4830-0000000015CE48C2
ForeachPolicy __cdecl SceneMultistagePlay::startStage(data::MultistageStageType,unsigned int &,std::string const&,luabind::adl::object const&)::{lambda(Player &)#1}::operator()(
        const SceneMultistagePlay::startStage::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerGmComp *GmComp; // rax
  __int64 v3; // rsi
  bool *is_press_mode; // rdx
  char v5; // cl

  GmComp = Player::getGmComp(player);
  v3 = 8LL;
  if ( PlayerGmComp::getGmSetValue<bool>(GmComp, 8u) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    is_press_mode = __closure->__is_press_mode;
    v5 = *(_BYTE *)(((unsigned __int64)__closure->__is_press_mode >> 3) + 0x7FFF8000);
    if ( v5 != 0 && ((__int64)__closure->__is_press_mode & 7) >= v5 )
    {
      LOBYTE(v3) = v5 != 0;
      __asan_report_store1(__closure->__is_press_mode, v3, is_press_mode);
    }
    *is_press_mode = 1;
  }
  return 0;
};

// Line 250: range 0000000015CE4F2A-0000000015CE5246
int32_t __cdecl SceneMultistagePlay::startStageTimer(SceneMultistagePlay *const this, uint32_t duration)
{
  common::milog::MiLogStream *v2; // rdx
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rdx
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  SceneTimer *v8; // rax
  common::milog::MiLogStream *v10; // rdx
  bool v11; // dl
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-30h] BYREF

  if ( std::operator==<SceneTimer>(&this->stage_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "startStageTimer",
      253);
    v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v13,
           (const char (*)[29])"stage_timer_ptr_ is nullptr.");
    common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v13);
    return -1;
  }
  else
  {
    v4 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v4) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "startStageTimer",
        259);
      v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v13,
             (const char (*)[25])"start timer when active.");
      common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v5, this);
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
      common::tools::MiTimer::cancel(v6);
    }
    v7 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
    if ( !common::tools::MiTimer::isActive(v7)
      && (v8 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_),
          SceneTimer::startS(v8, duration, 0, "./src/scene/scene_multistage_play_comp.cpp", "startStageTimer", 263)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "startStageTimer",
        265);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v13,
              (const char (*)[30])"stage_timer_ptr_ start failed");
      common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v10, this);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return -1;
    }
    else
    {
      v11 = *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
         && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3)
                                                             + 0x7FFF8000);
      if ( v11 )
        __asan_report_store4(&this->duration_seconds_, (((_BYTE)this - 92) & 7u) + 3, v11);
      this->duration_seconds_ = duration;
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "startStageTimer",
        270);
      v12 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v13, this);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])" timer started.");
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 0;
    }
  }
};

// Line 275: range 0000000015CE5248-0000000015CE5567
void __fastcall SceneMultistagePlay::rewriteStageTime(SceneMultistagePlay *const this, uint32_t seconds)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  SceneTimer *v11; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream v14; // [rsp+10h] [rbp-80h] BYREF
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 seconds:274";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::rewriteStageTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = seconds;
  if ( std::operator==<SceneTimer>(&this->stage_timer_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "rewriteStageTime",
      278);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v14,
      (const char (*)[28])"stage_timer_ptr_ is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    v5 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v5) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "rewriteStageTime",
        284);
      v6 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v14, this);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v6,
             (const char (*)[20])", rewrite stage by ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v8,
        (const char (*)[31])"'s and cancel remaining timer.");
      common::milog::MiLogStream::~MiLogStream(&v14);
      v9 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
      common::tools::MiTimer::cancel(v9);
    }
    v10 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
    if ( !common::tools::MiTimer::isActive(v10) )
    {
      v11 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
      if ( SceneTimer::startS(
             v11,
             *(_DWORD *)(v2 + 32),
             0,
             "./src/scene/scene_multistage_play_comp.cpp",
             "rewriteStageTime",
             288) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "rewriteStageTime",
          290);
        v13 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v14, this);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          v13,
          (const char (*)[35])", rewrite stage start timer failed");
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 296: range 0000000015CE5568-0000000015CE55F0
void __cdecl SceneMultistagePlay::onStageEndByTimer(SceneMultistagePlay *const this)
{
  unsigned __int64 v1; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 11);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  (*(void (__fastcall **)(SceneMultistagePlay *const, __int64))v1)(this, 1LL);
  SceneMultistagePlay::notifyStageEnd(this);
  SceneMultistagePlay::notifyLuaStageEndEvent(this, 1);
};

// Line 304: range 0000000015CE55F2-0000000015CE589A
void __cdecl SceneMultistagePlay::onStageTimer(SceneMultistagePlay *const this, uint64_t scene_time_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-80h] BYREF
  char v9[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 10 is_end:310";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::onStageTimer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  if ( *(char *)(((unsigned __int64)&this->is_stage_end_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_stage_end_);
  if ( this->is_stage_end_ )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "onStageTimer",
      307);
    v5 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v8, this);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v5, (const char (*)[22])" stage already ended.");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    *(_BYTE *)(v2 + 32) = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    (*(void (__fastcall **)(SceneMultistagePlay *const, unsigned __int64))v6)(this, v2 + 32);
    if ( *(_BYTE *)(v2 + 32) )
    {
      if ( *(char *)(((unsigned __int64)&this->is_stage_end_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_stage_end_, v2 + 32, &this->is_stage_end_);
      this->is_stage_end_ = 1;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v7 = (unsigned __int64)(this->_vptr_DescribalBase + 14);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(SceneMultistagePlay *const))v7)(this);
    }
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 320: range 0000000015CE589C-0000000015CE5E06
void __cdecl SceneMultistagePlay::notifyLuaStageStartEvent(SceneMultistagePlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int64 v13; // rsi
  uint32_t play_index; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rdx
  char v16; // cl
  unsigned __int64 v17; // rax
  int v18; // r14d
  __int64 v19; // rax
  char v20; // dl
  bool v21; // dl
  Group *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream v26; // [rsp+10h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 group_ptr:322 64 16 13 event_ptr:329";
  *(_QWORD *)(v1 + 16) = SceneMultistagePlay::notifyLuaStageStartEvent;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v1 + 32));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "notifyLuaStageStartEvent",
      325);
    v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v26, (const char (*)[6])"play ");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->play_index_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" group: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->group_id_);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v26);
  }
  else
  {
    EventUtil::createEvent((data::EventType)(v1 + 64));
    if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "notifyLuaStageStartEvent",
        332);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v26, (const char (*)[6])"play ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_index_);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" group: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->group_id_);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v11,
        (const char (*)[27])" stage start event nullptr");
      common::milog::MiLogStream::~MiLogStream(&v26);
    }
    else
    {
      v12 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      std::string::operator=(&v12->source_name, &this->current_stage_name_);
      v13 = (((_BYTE)this + 84) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      play_index = this->play_index_;
      v15 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v16 = *(_BYTE *)(((unsigned __int64)&v15->param1 >> 3) + 0x7FFF8000);
      if ( v16 != 0 && (char)((((_BYTE)v15 + 44) & 7) + 3) >= v16 )
      {
        LOBYTE(v13) = v16 != 0;
        __asan_report_store4(&v15->param1, v13, (_BYTE)v15);
      }
      v15->param1 = play_index;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = (unsigned __int64)(this->_vptr_DescribalBase + 15);
      if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
        v17 = __asan_report_load8();
      v18 = (*(__int64 (__fastcall **)(SceneMultistagePlay *const))v17)(this);
      v19 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v20 = *(_BYTE *)(((unsigned __int64)(v19 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v13) = v20 != 0;
      v21 = v20 != 0 && v20 <= 3;
      if ( v21 )
        v19 = __asan_report_store4(v19 + 48, v13, v21);
      *(_DWORD *)(v19 + 48) = v18;
      v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( Group::handleEvent(v22, (EventPtr *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "notifyLuaStageStartEvent",
          341);
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v26, (const char (*)[10])"group_id:");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->group_id_);
        v25 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                v24,
                (const char (*)[68])" handleEvent EVENT_SCENE_MULTISTAGE_PLAY_STAGE_START fails. @play: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->play_index_);
        common::milog::MiLogStream::~MiLogStream(&v26);
      }
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 64));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v1 + 32));
  if ( v27 == (char *)v1 )
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

// Line 346: range 0000000015CE5E08-0000000015CE63CD
void __cdecl SceneMultistagePlay::notifyLuaStageEndEvent(SceneMultistagePlay *const this, bool is_succ)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __int64 v14; // rsi
  uint32_t play_index; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  char v17; // cl
  unsigned __int64 v18; // rax
  int v19; // r14d
  __int64 v20; // rax
  char v21; // dl
  bool v22; // dl
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rdx
  char v24; // cl
  Group *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream v30; // [rsp+10h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 group_ptr:348 64 16 13 event_ptr:355";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::notifyLuaStageEndEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v2 + 32));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "notifyLuaStageEndEvent",
      351);
    v5 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])"play ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->play_index_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" group: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->group_id_);
    common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])" nullptr.");
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    EventUtil::createEvent((data::EventType)(v2 + 64));
    if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "notifyLuaStageEndEvent",
        358);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])"play ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->play_index_);
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" group: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->group_id_);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v12,
        (const char (*)[25])" stage end event nullptr");
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::string::operator=(&v13->source_name, &this->current_stage_name_);
      v14 = (((_BYTE)this + 84) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      play_index = this->play_index_;
      v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v17 = *(_BYTE *)(((unsigned __int64)&v16->param1 >> 3) + 0x7FFF8000);
      if ( v17 != 0 && (char)((((_BYTE)v16 + 44) & 7) + 3) >= v17 )
      {
        LOBYTE(v14) = v17 != 0;
        __asan_report_store4(&v16->param1, v14, (_BYTE)v16);
      }
      v16->param1 = play_index;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (unsigned __int64)(this->_vptr_DescribalBase + 15);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      v19 = (*(__int64 (__fastcall **)(SceneMultistagePlay *const))v18)(this);
      v20 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v21 = *(_BYTE *)(((unsigned __int64)(v20 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v14) = v21 != 0;
      v22 = v21 != 0 && v21 <= 3;
      if ( v22 )
        v20 = __asan_report_store4(v20 + 48, v14, v22);
      *(_DWORD *)(v20 + 48) = v19;
      v23 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v24 = *(_BYTE *)(((unsigned __int64)&v23->param3 >> 3) + 0x7FFF8000);
      if ( v24 != 0 && (char)((((_BYTE)v23 + 52) & 7) + 3) >= v24 )
      {
        LOBYTE(v14) = v24 != 0;
        __asan_report_store4(&v23->param3, v14, (_BYTE)v23);
      }
      v23->param3 = is_succ;
      v25 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( Group::handleEvent(v25, (EventPtr *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "notifyLuaStageEndEvent",
          368);
        v26 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v30, (const char (*)[10])"group_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->group_id_);
        v28 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                v27,
                (const char (*)[66])" handleEvent EVENT_SCENE_MULTISTAGE_PLAY_STAGE_END fails. @play: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->play_index_);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  if ( v31 == (char *)v2 )
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

// Line 373: range 0000000015CE63CE-0000000015CE65D3
int32_t __cdecl SceneMultistagePlay::toClient(const SceneMultistagePlay *const this, proto::MultistagePlayInfo *info)
{
  unsigned __int64 v2; // rax
  google::protobuf::uint32 v3; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayInfo::set_play_index(info, this->play_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayInfo::set_group_id(info, this->group_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayInfo::set_stage_type(info, this->stage_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->stage_begin_scene_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayInfo::set_begin_time(info, this->stage_begin_scene_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration_seconds_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayInfo::set_duration(info, this->duration_seconds_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  v3 = (*(__int64 (__fastcall **)(const SceneMultistagePlay *const))v2)(this);
  proto::MultistagePlayInfo::set_play_type(info, v3);
  return 0;
};

// Line 385: range 0000000015CE65D4-0000000015CE66B1
int32_t __cdecl SceneMultistagePlay::initStage(
        SceneMultistagePlay *const this,
        data::MultistageStageType stage_type,
        uint32_t *duration,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  char *val; // [rsp+38h] [rbp-38h] BYREF
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  if ( stage_type != MULTISTAGE_STAGE_IDLE )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "initStage",
      392);
    v5 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v10, this);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" stage type: ");
    val = (char *)data::getDescription(stage_type);
    v7 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)&val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])" not supported.");
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  return 0;
};

// Line 400: range 0000000015CE66B2-0000000015CE68F1
void __cdecl SceneMultistagePlay::notifyStage(const SceneMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  unsigned __int64 v4; // rax
  common::milog::MiLogStream *v5; // rax
  proto::MultistagePlayInfo *info; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:401";
  *(_QWORD *)(v1 + 16) = SceneMultistagePlay::notifyStage;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::MultistagePlayInfoNotify::MultistagePlayInfoNotify((proto::MultistagePlayInfoNotify *const)(v1 + 32));
  info = proto::MultistagePlayInfoNotify::mutable_info((proto::MultistagePlayInfoNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_DescribalBase + 6);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(const SceneMultistagePlay *const, proto::MultistagePlayInfo *))v4)(this, info) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "notifyStage",
      405);
    v5 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v7, this);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])off_259DEB40);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  }
  proto::MultistagePlayInfoNotify::~MultistagePlayInfoNotify((proto::MultistagePlayInfoNotify *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 413: range 0000000015CE68F2-0000000015CE6B21
void __cdecl SceneMultistagePlay::notifyPlayerStage(const SceneMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  proto::MultistagePlayInfo *info; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:414";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::notifyPlayerStage;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::MultistagePlayInfoNotify::MultistagePlayInfoNotify((proto::MultistagePlayInfoNotify *const)(v2 + 32));
  info = proto::MultistagePlayInfoNotify::mutable_info((proto::MultistagePlayInfoNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 6);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(const SceneMultistagePlay *const, proto::MultistagePlayInfo *))v5)(this, info) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "notifyPlayerStage",
      418);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v7,
      (const char (*)[43])"MultistagePlayInfoNotify to client failed.");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    Player::sendProto(player, (const google::protobuf::Message *)(v2 + 32));
  }
  proto::MultistagePlayInfoNotify::~MultistagePlayInfoNotify((proto::MultistagePlayInfoNotify *const)(v2 + 32));
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 426: range 0000000015CE6B22-0000000015CE6CE6
void __cdecl SceneMultistagePlay::notifyStageEnd(const SceneMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:427";
  *(_QWORD *)(v1 + 16) = SceneMultistagePlay::notifyStageEnd;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::MultistagePlayStageEndNotify::MultistagePlayStageEndNotify((proto::MultistagePlayStageEndNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayStageEndNotify::set_play_index(
    (proto::MultistagePlayStageEndNotify *const)(v1 + 32),
    this->play_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayStageEndNotify::set_group_id(
    (proto::MultistagePlayStageEndNotify *const)(v1 + 32),
    this->group_id_);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  proto::MultistagePlayStageEndNotify::~MultistagePlayStageEndNotify((proto::MultistagePlayStageEndNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 435: range 0000000015CE6CE8-0000000015CE6EAC
void __cdecl SceneMultistagePlay::notifyEnd(const SceneMultistagePlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:436";
  *(_QWORD *)(v1 + 16) = SceneMultistagePlay::notifyEnd;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::MultistagePlayEndNotify::MultistagePlayEndNotify((proto::MultistagePlayEndNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayEndNotify::set_play_index((proto::MultistagePlayEndNotify *const)(v1 + 32), this->play_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->group_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MultistagePlayEndNotify::set_group_id((proto::MultistagePlayEndNotify *const)(v1 + 32), this->group_id_);
  SceneMultistagePlay::notifyPlayMsg(this, (const google::protobuf::Message *)(v1 + 32), 0);
  proto::MultistagePlayEndNotify::~MultistagePlayEndNotify((proto::MultistagePlayEndNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 444: range 0000000015CE6F98-0000000015CE7057
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneMultistagePlay::notifyPlayMsg(
        const SceneMultistagePlay *const this,
        const google::protobuf::Message *proto,
        uint32_t exclude_uid)
{
  Scene *scene; // r12
  uint32_t v4; // edx
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->scene_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  scene = this->scene_;
  v4 = exclude_uid;
  std::function<ForeachPolicy ()(Player &)>::function<SceneMultistagePlay::notifyPlayMsg(google::protobuf::Message const&,unsigned int)::{lambda(Player &)#1},void,void>(
    &p_func,
    *(SceneMultistagePlay::notifyPlayMsg::<lambda(Player&)> *)&proto);
  Scene::foreachPlayer(scene, &p_func);
  std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
};

// Line 445: range 0000000015CE6EAE-0000000015CE6F96
ForeachPolicy __cdecl SceneMultistagePlay::notifyPlayMsg(google::protobuf::Message const&,unsigned int)const::{lambda(Player &)#1}::operator()(
        const SceneMultistagePlay::notifyPlayMsg::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  char v3; // al

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !__closure->__exclude_uid )
    goto LABEL_7;
  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__exclude_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__exclude_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Uid == __closure->__exclude_uid )
    v3 = 0;
  else
LABEL_7:
    v3 = 1;
  if ( v3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(player, __closure->__proto);
  }
  return 0;
};

// Line 456: range 0000000015CE7058-0000000015CE71F7
void __cdecl SceneMultistagePlay::end(SceneMultistagePlay *const this, bool is_succ)
{
  common::milog::MiLogStream *v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_play_end_);
  }
  if ( this->is_play_end_ )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      off_259DEC80,
      459);
    v2 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v7, this);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v2, (const char (*)[21])" play already ended.");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    v3 = ((_BYTE)this - 87) & 7;
    v4 = (*(_BYTE *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_play_end_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v4 )
      __asan_report_store1(&this->is_play_end_, v3, v4);
    this->is_play_end_ = 1;
    SceneMultistagePlay::endStage(this, is_succ);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(this->_vptr_DescribalBase + 12);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(SceneMultistagePlay *const, bool))v5)(this, is_succ);
    SceneMultistagePlay::notifyEnd(this);
  }
};

// Line 469: range 0000000015CE71F8-0000000015CE73C2
// local variable allocation has failed, the output may be wrong!
void __cdecl SceneMultistagePlay::endStage(SceneMultistagePlay *const this, bool is_succ)
{
  common::milog::MiLogStream *v2; // rax
  std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_stage_end_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_stage_end_);
  if ( this->is_stage_end_ )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "endStage",
      472);
    v2 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v5, this);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v2, (const char (*)[22])" stage already ended.");
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_stage_end_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_stage_end_, is_succ, &this->is_stage_end_);
    this->is_stage_end_ = 1;
    if ( std::operator!=<SceneTimer>(&this->stage_timer_ptr_, 0LL) )
    {
      v3 = std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->stage_timer_ptr_);
      common::tools::MiTimer::cancel(v3);
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = (unsigned __int64)(this->_vptr_DescribalBase + 11);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      v4 = __asan_report_load8();
    (*(void (__fastcall **)(SceneMultistagePlay *const, bool))v4)(this, is_succ);
    SceneMultistagePlay::notifyStageEnd(this);
    SceneMultistagePlay::notifyLuaStageEndEvent(this, is_succ);
  }
};

// Line 486: range 0000000015CE73C4-0000000015CE78F9
int32_t __cdecl SceneMultistagePlay::onFinishStageReq(SceneMultistagePlay *const this, Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  __int64 v11; // rsi
  uint32_t play_index; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  char v14; // cl
  data::MultistageStageType stage_type; // r14d
  __int64 v16; // rax
  char v17; // dl
  bool v18; // dl
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  char v21; // cl
  Group *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int32_t result; // eax
  common::milog::MiLogStream v27; // [rsp+10h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 group_ptr:487 64 16 13 event_ptr:494";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlay::onFinishStageReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  SceneMultistagePlay::getGroupPtr((SceneMultistagePlay *const)(v2 + 32));
  if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "onFinishStageReq",
      490);
    v5 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v27, this);
    v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v5,
           (const char (*)[24])" group nullptr. player:");
    operator<<(v6, player);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v7 = -1;
  }
  else
  {
    EventUtil::createEvent((data::EventType)(v2 + 64));
    if ( std::operator==<Event>((const std::shared_ptr<Event> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "onFinishStageReq",
        497);
      v8 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v27, this);
      v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             v8,
             (const char (*)[31])" REQ stage end event nullptr. ");
      operator<<(v9, player);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v7 = -1;
    }
    else
    {
      v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      std::string::operator=(&v10->source_name, &this->current_stage_name_);
      v11 = (((_BYTE)this + 84) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->play_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      play_index = this->play_index_;
      v13 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v14 = *(_BYTE *)(((unsigned __int64)&v13->param1 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)((((_BYTE)v13 + 44) & 7) + 3) >= v14 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(&v13->param1, v11, (_BYTE)v13);
      }
      v13->param1 = play_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->stage_type_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      stage_type = this->stage_type_;
      v16 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v17 = *(_BYTE *)(((unsigned __int64)(v16 + 48) >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v17 != 0;
      v18 = v17 != 0 && v17 <= 3;
      if ( v18 )
        v16 = __asan_report_store4(v16 + 48, v11, v18);
      *(_DWORD *)(v16 + 48) = stage_type;
      Uid = Player::getUid(player);
      v20 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v21 = *(_BYTE *)(((unsigned __int64)&v20->uid >> 3) + 0x7FFF8000);
      if ( v21 != 0 && (char)((((_BYTE)v20 + 60) & 7) + 3) >= v21 )
      {
        LOBYTE(v11) = v21 != 0;
        __asan_report_store4(&v20->uid, v11, (_BYTE)v20);
      }
      v20->uid = Uid;
      v22 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( Group::handleEvent(v22, (EventPtr *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "onFinishStageReq",
          507);
        v23 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(&v27, this);
        v24 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v23,
                (const char (*)[37])" handle REQ stage end event failed. ");
        operator<<(v24, player);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v7 = -1;
      }
      else
      {
        v7 = 0;
      }
    }
    std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v2 + 64));
  }
  std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 32));
  result = v7;
  if ( v28 == (char *)v2 )
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

// Line 514: range 0000000015CE78FA-0000000015CE790F
int32_t __cdecl SceneMultistagePlay::checkJumpToSceneValid(
        SceneMultistagePlay *const this,
        uint32_t uid,
        TransferReason *p_reason)
{
  return 0;
};

// Line 517: range 0000000015CE7910-0000000015CE7991
int32_t __cdecl SceneMultistagePlayComp::start(SceneMultistagePlayComp *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v2,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_comp.cpp",
    "start",
    518);
  common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v2, (const char (*)[24])"[MULTISTAGE] comp start");
  common::milog::MiLogStream::~MiLogStream(&v2);
  return 0;
};

// Line 523: range 0000000015CE7992-0000000015CE7F54
SceneMultistagePlayComp *__fastcall SceneMultistagePlayComp::createPlay(
        SceneMultistagePlayComp *const this,
        Group *group,
        unsigned int *play_index,
        proto::MultistagePlayType play_type,
        Group *param_table,
        std::set<unsigned int> *uid_set,
        const std::set<unsigned int> *uid_seta)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  common::milog::MiLogStream *v10; // rax
  SceneMultistagePlay *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v16; // [rsp+10h] [rbp-120h]
  std::shared_ptr<MechanicusMultistagePlay> __r; // [rsp+30h] [rbp-100h] BYREF
  std::shared_ptr<FleurFairMultistagePlay> v20; // [rsp+40h] [rbp-F0h] BYREF
  std::shared_ptr<BounceConjuringMultistagePlay> v21; // [rsp+50h] [rbp-E0h] BYREF
  std::shared_ptr<ChessMultistagePlay> v22; // [rsp+60h] [rbp-D0h] BYREF
  std::shared_ptr<IrodoriChessMultistagePlay> v23; // [rsp+70h] [rbp-C0h] BYREF
  std::shared_ptr<CharAmusementMultistagePlay> v24; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+B0h] [rbp-80h] BYREF

  v16 = (int)param_table;
  v7 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 4 14 play_index:522 48 4 13 play_type:522 64 16 12 play_ptr:529";
  *(_QWORD *)(v7 + 16) = SceneMultistagePlayComp::createPlay;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -202178560;
  *(_DWORD *)(v7 + 32) = play_type;
  *(_DWORD *)(v7 + 48) = v16;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  switch ( *(_DWORD *)(v7 + 48) )
  {
    case 1:
      if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<MechanicusMultistagePlay,Scene &,Group &,unsigned int &>(
        (Scene *)&__r,
        group->_M_weak_this._M_ptr,
        play_index,
        (Scene *)(v7 + 32),
        param_table,
        (unsigned int *)uid_set);
      std::shared_ptr<SceneMultistagePlay>::operator=<MechanicusMultistagePlay>(
        (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
        &__r);
      std::shared_ptr<MechanicusMultistagePlay>::~shared_ptr(&__r);
      goto LABEL_24;
    case 2:
      if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<FleurFairMultistagePlay,Scene &,Group &,unsigned int &>(
        (Scene *)&v20,
        group->_M_weak_this._M_ptr,
        play_index,
        (Scene *)(v7 + 32),
        param_table,
        (unsigned int *)uid_set);
      std::shared_ptr<SceneMultistagePlay>::operator=<FleurFairMultistagePlay>(
        (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
        &v20);
      std::shared_ptr<FleurFairMultistagePlay>::~shared_ptr(&v20);
      goto LABEL_24;
    case 4:
      if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<BounceConjuringMultistagePlay,Scene &,Group &,unsigned int &>(
        (Scene *)&v21,
        group->_M_weak_this._M_ptr,
        play_index,
        (Scene *)(v7 + 32),
        param_table,
        (unsigned int *)uid_set);
      std::shared_ptr<SceneMultistagePlay>::operator=<BounceConjuringMultistagePlay>(
        (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
        &v21);
      std::shared_ptr<BounceConjuringMultistagePlay>::~shared_ptr(&v21);
      goto LABEL_24;
    case 5:
      if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<ChessMultistagePlay,Scene &,Group &,unsigned int &>(
        (Scene *)&v22,
        group->_M_weak_this._M_ptr,
        play_index,
        (Scene *)(v7 + 32),
        param_table,
        (unsigned int *)uid_set);
      std::shared_ptr<SceneMultistagePlay>::operator=<ChessMultistagePlay>(
        (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
        &v22);
      std::shared_ptr<ChessMultistagePlay>::~shared_ptr(&v22);
      goto LABEL_24;
    case 6:
      if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<IrodoriChessMultistagePlay,Scene &,Group &,unsigned int &>(
        (Scene *)&v23,
        group->_M_weak_this._M_ptr,
        play_index,
        (Scene *)(v7 + 32),
        param_table,
        (unsigned int *)uid_set);
      std::shared_ptr<SceneMultistagePlay>::operator=<IrodoriChessMultistagePlay>(
        (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
        &v23);
      std::shared_ptr<IrodoriChessMultistagePlay>::~shared_ptr(&v23);
      goto LABEL_24;
    case 7:
      if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<CharAmusementMultistagePlay,Scene &,Group &,unsigned int &>(
        (Scene *)&v24,
        group->_M_weak_this._M_ptr,
        play_index,
        (Scene *)(v7 + 32),
        param_table,
        (unsigned int *)uid_set);
      std::shared_ptr<SceneMultistagePlay>::operator=<CharAmusementMultistagePlay>(
        (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
        &v24);
      std::shared_ptr<CharAmusementMultistagePlay>::~shared_ptr(&v24);
LABEL_24:
      if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v7 + 64))
        || (v11 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64)),
            SceneMultistagePlay::init(v11, (const luabind::adl::object *)uid_set, uid_seta)) )
      {
        std::shared_ptr<SceneMultistagePlay>::shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)this, 0LL);
      }
      else
      {
        v12 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        v13 = *(_QWORD *)v12 + 56LL;
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64))v13)(v12);
        std::shared_ptr<SceneMultistagePlay>::shared_ptr(
          (std::shared_ptr<SceneMultistagePlay> *const)this,
          (std::shared_ptr<SceneMultistagePlay> *)(v7 + 64));
      }
      break;
    default:
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "createPlay",
        539);
      v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v25,
              (const char (*)[38])"multistage play type not implemented:");
      common::milog::MiLogStream::operator<<<proto::MultistagePlayType,(proto::MultistagePlayType*)0>(
        v10,
        (const proto::MultistagePlayType *)(v7 + 48));
      common::milog::MiLogStream::~MiLogStream(&v25);
      std::shared_ptr<SceneMultistagePlay>::shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)this, 0LL);
      break;
  }
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64));
  if ( v26 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 556: range 0000000015CE7F56-0000000015CE8436
SceneMultistagePlayComp *__fastcall SceneMultistagePlayComp::createPlay(
        SceneMultistagePlayComp *const this,
        Group *group,
        unsigned int *play_index,
        proto::MultistagePlayType play_type,
        Group *param_map,
        std::set<unsigned int> *uid_set,
        const std::set<unsigned int> *uid_seta)
{
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  _DWORD *v9; // r13
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  SceneMultistagePlay *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  int v17; // [rsp+10h] [rbp-100h]
  std::shared_ptr<HideAndSeekMultistagePlay> __r; // [rsp+30h] [rbp-E0h] BYREF
  std::shared_ptr<CoinCollectMultistagePlay> v21; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<BrickBreakerMultistagePlay> v22; // [rsp+50h] [rbp-C0h] BYREF
  std::shared_ptr<LanV3BoatMultistagePlay> v23; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-A0h] BYREF
  char v25[128]; // [rsp+90h] [rbp-80h] BYREF

  v17 = (int)param_map;
  v7 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_1(96LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "3 32 4 14 play_index:555 48 4 13 play_type:555 64 16 12 play_ptr:562";
  *(_QWORD *)(v7 + 16) = SceneMultistagePlayComp::createPlay;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -202178560;
  *(_DWORD *)(v7 + 32) = play_type;
  *(_DWORD *)(v7 + 48) = v17;
  *(_QWORD *)(v7 + 64) = 0LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  v10 = *(_DWORD *)(v7 + 48);
  if ( v10 == 10 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::perf::make_shared<LanV3BoatMultistagePlay,Scene &,Group &,unsigned int &>(
      (Scene *)&v23,
      group->_M_weak_this._M_ptr,
      play_index,
      (Scene *)(v7 + 32),
      param_map,
      (unsigned int *)uid_set);
    std::shared_ptr<SceneMultistagePlay>::operator=<LanV3BoatMultistagePlay>(
      (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
      &v23);
    std::shared_ptr<LanV3BoatMultistagePlay>::~shared_ptr(&v23);
  }
  else
  {
    if ( v10 > 10 )
    {
LABEL_22:
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "createPlay",
        571);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v24,
              (const char (*)[38])"multistage play type not implemented:");
      common::milog::MiLogStream::operator<<<proto::MultistagePlayType,(proto::MultistagePlayType*)0>(
        v11,
        (const proto::MultistagePlayType *)(v7 + 48));
      common::milog::MiLogStream::~MiLogStream(&v24);
      std::shared_ptr<SceneMultistagePlay>::shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)this, 0LL);
      goto LABEL_31;
    }
    switch ( v10 )
    {
      case 9:
        if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<CoinCollectMultistagePlay,Scene &,Group &,unsigned int &>(
          (Scene *)&v21,
          group->_M_weak_this._M_ptr,
          play_index,
          (Scene *)(v7 + 32),
          param_map,
          (unsigned int *)uid_set);
        std::shared_ptr<SceneMultistagePlay>::operator=<CoinCollectMultistagePlay>(
          (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
          &v21);
        std::shared_ptr<CoinCollectMultistagePlay>::~shared_ptr(&v21);
        break;
      case 3:
        if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<HideAndSeekMultistagePlay,Scene &,Group &,unsigned int &>(
          (Scene *)&__r,
          group->_M_weak_this._M_ptr,
          play_index,
          (Scene *)(v7 + 32),
          param_map,
          (unsigned int *)uid_set);
        std::shared_ptr<SceneMultistagePlay>::operator=<HideAndSeekMultistagePlay>(
          (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
          &__r);
        std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr(&__r);
        break;
      case 8:
        if ( *(_BYTE *)(((unsigned __int64)&group->std::enable_shared_from_this<Group> >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::tools::perf::make_shared<BrickBreakerMultistagePlay,Scene &,Group &,unsigned int &>(
          (Scene *)&v22,
          group->_M_weak_this._M_ptr,
          play_index,
          (Scene *)(v7 + 32),
          param_map,
          (unsigned int *)uid_set);
        std::shared_ptr<SceneMultistagePlay>::operator=<BrickBreakerMultistagePlay>(
          (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64),
          &v22);
        std::shared_ptr<BrickBreakerMultistagePlay>::~shared_ptr(&v22);
        break;
      default:
        goto LABEL_22;
    }
  }
  if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v7 + 64))
    || (v12 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64)),
        SceneMultistagePlay::init(v12, (const std::unordered_map<std::string,unsigned int> *)uid_set, uid_seta)) )
  {
    std::shared_ptr<SceneMultistagePlay>::shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)this, 0LL);
  }
  else
  {
    v13 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 64));
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    v14 = *(_QWORD *)v13 + 56LL;
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v13 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64))v14)(v13);
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)this,
      (std::shared_ptr<SceneMultistagePlay> *)(v7 + 64));
  }
LABEL_31:
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v7 + 64));
  if ( v25 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8008) = -168430091;
  }
  return this;
};

// Line 588: range 0000000015CE8438-0000000015CE87F3
void __fastcall SceneMultistagePlayComp::onGroupRemove(
        SceneMultistagePlayComp *const this,
        uint32_t group_id,
        const std::set<long unsigned int> *play_keys_set)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::set<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+30h] [rbp-F0h] BYREF
  const std::set<long unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-E0h] BYREF
  char v19[192]; // [rsp+60h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 group_id:587 64 8 12 play_key:589 96 8 8 iter:591 128 16 12 play_ptr:597";
  *(_QWORD *)(v3 + 16) = SceneMultistagePlayComp::onGroupRemove;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = group_id;
  __for_range = play_keys_set;
  __for_begin._M_node = std::set<unsigned long>::begin(play_keys_set)._M_node;
  __for_end._M_node = std::set<unsigned long>::end(play_keys_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned __int64)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
    if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
      v6 = __asan_report_load8();
    *(_QWORD *)(v3 + 64) = *(_QWORD *)v6;
    *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v3 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v3 + 64));
    __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v3 + 96),
            &__y) )
    {
      v7 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v3 + 96));
      std::shared_ptr<SceneMultistagePlay>::shared_ptr(
        (std::shared_ptr<SceneMultistagePlay> *const)(v3 + 128),
        &v7->second);
      if ( std::operator!=<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v3 + 128)) )
      {
        v8 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        v9 = *(_QWORD *)v8 + 224LL;
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v8 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64))v9)(v8);
      }
      std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::erase(
        &this->group_muiltistage_play_map_,
        (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v3 + 64));
      std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v3 + 128));
    }
    std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/scene/scene_multistage_play_comp.cpp",
    "onGroupRemove",
    604);
  v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          &v18,
          (const char (*)[25])" before removing group: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
  v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v11,
          (const char (*)[23])". clear play by keys: ");
  common::milog::MiLogStream::operator<<<unsigned long>(v12, play_keys_set);
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( v19 == (char *)v3 )
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
};

// Line 608: range 0000000015CE87F4-0000000015CE8D3F
__int64 __fastcall SceneMultistagePlayComp::initPlay(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        proto::MultistagePlayType play_type,
        std::set<unsigned int> *param_table,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  const std::string *v14; // rax
  unsigned int v15; // r14d
  uint32_t v16; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  const std::string *v26; // rax
  std::shared_ptr<SceneMultistagePlay> *v27; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-FCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+60h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 14 play_index:607 64 8 12 play_key:617 96 8 8 iter:618 128 16 12 play_ptr:625";
  *(_QWORD *)(v6 + 16) = SceneMultistagePlayComp::initPlay;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 48) = play_index;
  if ( std::set<unsigned int>::empty(uid_set) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "initPlay",
      611);
    v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v35,
           (const char (*)[58])"[MULTISTAGE] createPlay failed. empty uid_set. group_id: ");
    val = Group::getGroupId(group);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" play_index: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v6 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" type: ");
    v14 = proto::MultistagePlayType_Name[abi:cxx11](play_type);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v15 = -1;
  }
  else
  {
    v16 = *(_DWORD *)(v6 + 48);
    GroupId = Group::getGroupId(group);
    *(_QWORD *)(v6 + 64) = SceneMultistagePlayComp::toKey(GroupId, v16);
    *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v6 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v6 + 64));
    __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v6 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "initPlay",
        621);
      v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v35,
              (const char (*)[40])"[MULTISTAGE] duplicate play: group_id: ");
      val = Group::getGroupId(group);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" play_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream(&v35);
      v15 = -1;
    }
    else
    {
      SceneMultistagePlayComp::createPlay(
        (SceneMultistagePlayComp *const)(v6 + 128),
        (Group *)this,
        (unsigned int *)group,
        *(proto::MultistagePlayType *)(v6 + 48),
        (Group *)(unsigned int)play_type,
        param_table,
        uid_set);
      if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v6 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "initPlay",
          628);
        v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v35,
                (const char (*)[44])"[MULTISTAGE] createPlay nullptr. group_id: ");
        val = Group::getGroupId(group);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" play_index: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v6 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" type: ");
        v26 = proto::MultistagePlayType_Name[abi:cxx11](play_type);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, v26);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v15 = -1;
      }
      else
      {
        v27 = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::operator[](
                &this->group_muiltistage_play_map_,
                (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v6 + 64));
        std::shared_ptr<SceneMultistagePlay>::operator=(v27, (const std::shared_ptr<SceneMultistagePlay> *)(v6 + 128));
        Group::addMultistagePlay(group, *(_QWORD *)(v6 + 64));
        v15 = 0;
      }
      std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v6 + 128));
    }
  }
  result = v15;
  if ( v36 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 640: range 0000000015CE8D40-0000000015CE928B
__int64 __fastcall SceneMultistagePlayComp::initPlay(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        proto::MultistagePlayType play_type,
        std::set<unsigned int> *param_map,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  const std::string *v14; // rax
  unsigned int v15; // r14d
  uint32_t v16; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  const std::string *v26; // rax
  std::shared_ptr<SceneMultistagePlay> *v27; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-FCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v35; // [rsp+40h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+60h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 14 play_index:639 64 8 12 play_key:649 96 8 8 iter:650 128 16 12 play_ptr:657";
  *(_QWORD *)(v6 + 16) = SceneMultistagePlayComp::initPlay;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 48) = play_index;
  if ( std::set<unsigned int>::empty(uid_set) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "initPlay",
      643);
    v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v35,
           (const char (*)[58])"[MULTISTAGE] createPlay failed. empty uid_set. group_id: ");
    val = Group::getGroupId(group);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" play_index: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v6 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" type: ");
    v14 = proto::MultistagePlayType_Name[abi:cxx11](play_type);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v15 = -1;
  }
  else
  {
    v16 = *(_DWORD *)(v6 + 48);
    GroupId = Group::getGroupId(group);
    *(_QWORD *)(v6 + 64) = SceneMultistagePlayComp::toKey(GroupId, v16);
    *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v6 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v6 + 64));
    __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v6 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "initPlay",
        653);
      v18 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v35,
              (const char (*)[40])"[MULTISTAGE] duplicate play: group_id: ");
      val = Group::getGroupId(group);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" play_index: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream(&v35);
      v15 = -1;
    }
    else
    {
      SceneMultistagePlayComp::createPlay(
        (SceneMultistagePlayComp *const)(v6 + 128),
        (Group *)this,
        (unsigned int *)group,
        *(proto::MultistagePlayType *)(v6 + 48),
        (Group *)(unsigned int)play_type,
        param_map,
        uid_set);
      if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v6 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "initPlay",
          660);
        v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v35,
                (const char (*)[44])"[MULTISTAGE] createPlay nullptr. group_id: ");
        val = Group::getGroupId(group);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" play_index: ");
        v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v23,
                (const unsigned int *)(v6 + 48));
        v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])" type: ");
        v26 = proto::MultistagePlayType_Name[abi:cxx11](play_type);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, v26);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v15 = -1;
      }
      else
      {
        v27 = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::operator[](
                &this->group_muiltistage_play_map_,
                (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v6 + 64));
        std::shared_ptr<SceneMultistagePlay>::operator=(v27, (const std::shared_ptr<SceneMultistagePlay> *)(v6 + 128));
        Group::addMultistagePlay(group, *(_QWORD *)(v6 + 64));
        v15 = 0;
      }
      std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v6 + 128));
    }
  }
  result = v15;
  if ( v36 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 672: range 0000000015CE928C-0000000015CE9823
__int64 __fastcall SceneMultistagePlayComp::setPlayValues(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        const luabind::adl::object *param_table,
        bool is_notify)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t v8; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int v14; // r14d
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v19; // rax
  SceneMultistagePlay *v20; // rax
  common::milog::MiLogStream *v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-13Ch] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+28h] [rbp-138h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-130h] BYREF
  char v32[272]; // [rsp+50h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 32 4 14 play_index:671 48 8 12 play_key:673 80 8 8 iter:674 112 16 12 play_ptr:690 144 48 13 param_map:682";
  *(_QWORD *)(v5 + 16) = SceneMultistagePlayComp::setPlayValues;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862721] = -234881024;
  v7[536862722] = 62194;
  v7[536862722] = -234881024;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 32) = play_index;
  v8 = *(_DWORD *)(v5 + 32);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v5 + 48) = SceneMultistagePlayComp::toKey(GroupId, v8);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v5 + 80) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v5 + 48));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v5 + 80),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "setPlayValues",
      677);
    v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v31,
            (const char (*)[30])"[MULTISTAGE] play @group_id: ");
    val = Group::getGroupId(group);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" play_index: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" not exists.");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v14 = -1;
  }
  else
  {
    std::map<std::string,unsigned int>::map((std::map<std::string,unsigned int> *const)(v5 + 144));
    if ( ScriptUtil::getTableValueAsMap<std::string,unsigned int>(
           &ScriptUtil::no_exception_instance,
           param_table,
           (std::map<std::string,unsigned int> *)(v5 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "setPlayValues",
        685);
      v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v31,
              (const char (*)[30])"[MULTISTAGE] play @group_id: ");
      val = Group::getGroupId(group);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" play_index: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 32));
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v18,
        (const char (*)[25])" parse param_map failed.");
      common::milog::MiLogStream::~MiLogStream(&v31);
      v14 = -1;
    }
    else
    {
      v19 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v5 + 80));
      std::shared_ptr<SceneMultistagePlay>::shared_ptr(
        (std::shared_ptr<SceneMultistagePlay> *const)(v5 + 112),
        &v19->second);
      if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v5 + 112)) )
      {
        v14 = -1;
      }
      else
      {
        v20 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        if ( SceneMultistagePlay::setPlayValues(v20, (const std::map<std::string,unsigned int> *)(v5 + 144)) )
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/scene/scene_multistage_play_comp.cpp",
            "setPlayValues",
            697);
          v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v31,
                  (const char (*)[30])"[MULTISTAGE] play @group_id: ");
          val = Group::getGroupId(group);
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v22,
                  (const char (*)[14])" play_index: ");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v5 + 32));
          v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  v24,
                  (const char (*)[30])" setPlayValues failed. param:");
          common::milog::MiLogStream::operator<<<std::string,unsigned int>(
            v25,
            (const std::map<std::string,unsigned int> *)(v5 + 144));
          common::milog::MiLogStream::~MiLogStream(&v31);
          v14 = -1;
        }
        else
        {
          v14 = 0;
        }
      }
      std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v5 + 112));
    }
    std::map<std::string,unsigned int>::~map((std::map<std::string,unsigned int> *const)(v5 + 144));
  }
  result = v14;
  if ( v32 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 705: range 0000000015CE9824-0000000015CE9C75
__int64 __fastcall SceneMultistagePlayComp::setPlayValue(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        const std::string *name,
        uint32_t value,
        bool is_notify)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  uint32_t v9; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v16; // rax
  SceneMultistagePlay *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-FCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+60h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "5 32 4 14 play_index:704 48 4 9 value:704 64 8 12 play_key:706 96 8 8 iter:707 128 16 12 play_ptr:715";
  *(_QWORD *)(v6 + 16) = SceneMultistagePlayComp::setPlayValue;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 32) = play_index;
  *(_DWORD *)(v6 + 48) = value;
  v9 = *(_DWORD *)(v6 + 32);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v6 + 64) = SceneMultistagePlayComp::toKey(GroupId, v9);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v6 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v6 + 64));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v6 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v31,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "setPlayValue",
      710);
    v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v31,
            (const char (*)[30])"[MULTISTAGE] play @group_id: ");
    val = Group::getGroupId(group);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" play_index: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 32));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" not exists.");
    common::milog::MiLogStream::~MiLogStream(&v31);
    v15 = -1;
  }
  else
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v6 + 96));
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)(v6 + 128),
      &v16->second);
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v6 + 128)) )
    {
      v15 = -1;
    }
    else
    {
      v17 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
      if ( (unsigned int)SceneMultistagePlay::setPlayValue(v17, name, *(_DWORD *)(v6 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "setPlayValue",
          722);
        v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v31,
                (const char (*)[30])"[MULTISTAGE] play @group_id: ");
        val = Group::getGroupId(group);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" play_index: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v6 + 32));
        v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                v21,
                (const char (*)[30])" setPlayValues failed. name: ");
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, name);
        v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" value: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream(&v31);
        v15 = -1;
      }
      else
      {
        v15 = 0;
      }
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v6 + 128));
  }
  result = v15;
  if ( v32 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 730: range 0000000015CE9C76-0000000015CEA10D
__int64 __fastcall SceneMultistagePlayComp::setPlayUidValue(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        const std::string *name,
        uint32_t uid,
        int32_t value)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  uint32_t v9; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v16; // rax
  SceneMultistagePlay *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-11Ch] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+38h] [rbp-118h] BYREF
  common::milog::MiLogStream v34; // [rsp+40h] [rbp-110h] BYREF
  char v35[240]; // [rsp+60h] [rbp-F0h] BYREF

  v6 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 4 14 play_index:729 64 4 7 uid:729 80 4 9 value:729 96 8 12 play_key:731 128 8 8 iter:732 1"
                        "60 16 12 play_ptr:739";
  *(_QWORD *)(v6 + 16) = SceneMultistagePlayComp::setPlayUidValue;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -234556924;
  v8[536862723] = -218959360;
  v8[536862724] = -218959360;
  v8[536862725] = -202178560;
  *(_DWORD *)(v6 + 48) = play_index;
  *(_DWORD *)(v6 + 64) = uid;
  *(_DWORD *)(v6 + 80) = value;
  v9 = *(_DWORD *)(v6 + 48);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v6 + 96) = SceneMultistagePlayComp::toKey(GroupId, v9);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v6 + 128) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v6 + 96));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v6 + 128),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "setPlayUidValue",
      735);
    v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v34,
            (const char (*)[30])"[MULTISTAGE] play @group_id: ");
    val = Group::getGroupId(group);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" play_index: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" not exists.");
    common::milog::MiLogStream::~MiLogStream(&v34);
    v15 = -1;
  }
  else
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v6 + 128));
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)(v6 + 160),
      &v16->second);
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v6 + 160)) )
    {
      v15 = -1;
    }
    else
    {
      v17 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
      if ( (unsigned int)SceneMultistagePlay::setPlayUidValue(v17, name, *(_DWORD *)(v6 + 64), *(_DWORD *)(v6 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "setPlayUidValue",
          747);
        v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v34,
                (const char (*)[30])"[MULTISTAGE] play @group_id: ");
        val = Group::getGroupId(group);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" play_index: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v6 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                v21,
                (const char (*)[31])" setPlayUidValue failed. uid: ");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v6 + 64));
        v24 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v23, (const char (*)[8])" name: ");
        v25 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, name);
        v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" value: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v26, (const int *)(v6 + 80));
        common::milog::MiLogStream::~MiLogStream(&v34);
        v15 = -1;
      }
      else
      {
        v15 = 0;
      }
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v6 + 160));
  }
  result = v15;
  if ( v35 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 756: range 0000000015CEA10E-0000000015CEA436
__int64 __fastcall SceneMultistagePlayComp::getPlayUidValue(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        const std::string *name,
        uint32_t uid)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t v8; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int PlayUidValue; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v15; // rax
  SceneMultistagePlay *v16; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+50h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 14 play_index:755 64 8 12 play_key:757 96 8 8 iter:758 128 16 12 play_ptr:765";
  *(_QWORD *)(v5 + 16) = SceneMultistagePlayComp::getPlayUidValue;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 48) = play_index;
  v8 = *(_DWORD *)(v5 + 48);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v5 + 64) = SceneMultistagePlayComp::toKey(GroupId, v8);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v5 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v5 + 64));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v5 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "getPlayUidValue",
      761);
    v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v23,
            (const char (*)[30])"[MULTISTAGE] play @group_id: ");
    val = Group::getGroupId(group);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" play_index: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" not exists.");
    common::milog::MiLogStream::~MiLogStream(&v23);
    PlayUidValue = 0;
  }
  else
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v5 + 96));
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)(v5 + 128),
      &v15->second);
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v5 + 128)) )
    {
      PlayUidValue = 0;
    }
    else
    {
      v16 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      PlayUidValue = SceneMultistagePlay::getPlayUidValue(v16, name, uid);
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v5 + 128));
  }
  result = PlayUidValue;
  if ( v24 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 775: range 0000000015CEA438-0000000015CEA76A
__int64 __fastcall SceneMultistagePlayComp::addPlayUidValue(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        const std::string *name,
        uint32_t uid,
        int32_t delta)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  uint32_t v9; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int v15; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v16; // rax
  SceneMultistagePlay *v17; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-FCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-F0h] BYREF
  char v26[208]; // [rsp+60h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 14 play_index:774 64 8 12 play_key:776 96 8 8 iter:777 128 16 12 play_ptr:784";
  *(_QWORD *)(v6 + 16) = SceneMultistagePlayComp::addPlayUidValue;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -218959360;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 48) = play_index;
  v9 = *(_DWORD *)(v6 + 48);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v6 + 64) = SceneMultistagePlayComp::toKey(GroupId, v9);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v6 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v6 + 64));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v6 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "addPlayUidValue",
      780);
    v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v25,
            (const char (*)[30])"[MULTISTAGE] play @group_id: ");
    val = Group::getGroupId(group);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" play_index: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" not exists.");
    common::milog::MiLogStream::~MiLogStream(&v25);
    v15 = -1;
  }
  else
  {
    v16 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v6 + 96));
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)(v6 + 128),
      &v16->second);
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v6 + 128)) )
    {
      v15 = -1;
    }
    else
    {
      v17 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 128));
      v15 = SceneMultistagePlay::addPlayUidValue(v17, name, uid, delta);
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v6 + 128));
  }
  result = v15;
  if ( v26 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 794: range 0000000015CEA76C-0000000015CEAC4A
__int64 __fastcall SceneMultistagePlayComp::startStage(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        uint32_t duration,
        data::MultistageStageType stage_type,
        const std::string *stage_name,
        const luabind::adl::object *param_table)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  uint32_t v10; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned int v16; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v17; // rax
  SceneMultistagePlay *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // r14
  std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-FCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+38h] [rbp-F8h] BYREF
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-F0h] BYREF
  char v37[208]; // [rsp+60h] [rbp-D0h] BYREF

  v7 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_2(160LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "5 32 4 14 play_index:793 48 4 12 duration:793 64 8 12 play_key:795 96 8 8 iter:796 128 16 12 play_ptr:802";
  *(_QWORD *)(v7 + 16) = SceneMultistagePlayComp::startStage;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234556924;
  v9[536862722] = -218959360;
  v9[536862723] = -218959360;
  v9[536862724] = -202178560;
  *(_DWORD *)(v7 + 32) = play_index;
  *(_DWORD *)(v7 + 48) = duration;
  v10 = *(_DWORD *)(v7 + 32);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v7 + 64) = SceneMultistagePlayComp::toKey(GroupId, v10);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v7 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v7 + 64));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v7 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "startStage",
      799);
    v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v36,
            (const char (*)[30])"[MULTISTAGE] play @group_id: ");
    val = Group::getGroupId(group);
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" play_index: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v7 + 32));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])" not exists.");
    common::milog::MiLogStream::~MiLogStream(&v36);
    v16 = -1;
  }
  else
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v7 + 96));
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)(v7 + 128),
      &v17->second);
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v7 + 128)) )
    {
      v16 = -1;
    }
    else
    {
      v18 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
      if ( SceneMultistagePlay::startStage(v18, stage_type, (uint32_t *)(v7 + 48), stage_name, param_table) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "startStage",
          810);
        v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v36, (const char (*)[5])"play");
        v20 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
        v21 = common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v19, v20);
        v22 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v21,
                (const char (*)[26])" startStage failed. type:");
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false>::__node_type *)data::getDescription(stage_type);
        v23 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v22, (const char *const *)&__y);
        v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])" duration: ");
        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v7 + 48));
        v26 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v25, (const char (*)[13])" stage_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, stage_name);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v16 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/scene/scene_multistage_play_comp.cpp",
          "startStage",
          815);
        v27 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v36,
                (const char (*)[18])"start stage done:");
        v28 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 128));
        common::milog::MiLogStream::operator<<<SceneMultistagePlay,(SceneMultistagePlay*)0>(v27, v28);
        common::milog::MiLogStream::~MiLogStream(&v36);
        v16 = 0;
      }
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v7 + 128));
  }
  result = v16;
  if ( v37 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 820: range 0000000015CEAC4C-0000000015CEB061
__int64 __fastcall SceneMultistagePlayComp::endStage(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        const std::string *stage_name,
        bool is_succ)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  uint32_t v8; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int v14; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v15; // rax
  SceneMultistagePlay *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+50h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 14 play_index:819 64 8 12 play_key:821 96 8 8 iter:822 128 16 12 play_ptr:829";
  *(_QWORD *)(v5 + 16) = SceneMultistagePlayComp::endStage;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -202178560;
  *(_DWORD *)(v5 + 48) = play_index;
  v8 = *(_DWORD *)(v5 + 48);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v5 + 64) = SceneMultistagePlayComp::toKey(GroupId, v8);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v5 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v5 + 64));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v5 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "endStage",
      825);
    v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v30,
            (const char (*)[30])"[MULTISTAGE] play @group_id: ");
    val = Group::getGroupId(group);
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" play_index: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" not exists.");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v14 = -1;
  }
  else
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v5 + 96));
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)(v5 + 128),
      &v15->second);
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v5 + 128)) )
    {
      v14 = -1;
    }
    else
    {
      v16 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
      SceneMultistagePlay::endStage(v16, is_succ);
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "endStage",
        836);
      v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v30,
              (const char (*)[27])"[MULTISTAGE] play @group: ");
      v18 = operator<<(v17, group);
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" play_index: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" stage:");
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, stage_name);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])" ended. is_succ");
      common::milog::MiLogStream::operator<<(v23, is_succ);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v14 = 0;
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v5 + 128));
  }
  result = v14;
  if ( v31 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 841: range 0000000015CEB062-0000000015CEB4C3
__int64 __fastcall SceneMultistagePlayComp::endPlay(
        SceneMultistagePlayComp *const this,
        Group *group,
        uint32_t play_index,
        bool is_succ)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t v7; // r14d
  uint32_t GroupId; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int v14; // r14d
  std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false>::pointer v15; // rax
  SceneMultistagePlay *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 result; // rax
  std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+50h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 14 play_index:840 64 8 12 play_key:842 96 8 8 iter:843 128 16 12 play_ptr:850";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::endPlay;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = play_index;
  v7 = *(_DWORD *)(v4 + 48);
  GroupId = Group::getGroupId(group);
  *(_QWORD *)(v4 + 64) = SceneMultistagePlayComp::toKey(GroupId, v7);
  *(std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator *)(v4 + 96) = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::find(&this->group_muiltistage_play_map_, (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v4 + 64));
  __y._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false> *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "endPlay",
      846);
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v28,
           (const char (*)[27])"[MULTISTAGE] play @group: ");
    v10 = operator<<(v9, group);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" play_index: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 48));
    v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v12,
            (const char (*)[21])" not exists. is_succ");
    common::milog::MiLogStream::operator<<(v13, is_succ);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v14 = -1;
  }
  else
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> >,false,false> *const)(v4 + 96));
    std::shared_ptr<SceneMultistagePlay>::shared_ptr(
      (std::shared_ptr<SceneMultistagePlay> *const)(v4 + 128),
      &v15->second);
    if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v4 + 128)) )
    {
      v14 = -1;
    }
    else
    {
      v16 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      SceneMultistagePlay::end(v16, is_succ);
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/scene/scene_multistage_play_comp.cpp",
        "endPlay",
        857);
      v17 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v28,
              (const char (*)[27])"[MULTISTAGE] play @group: ");
      v18 = operator<<(v17, group);
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" play_index: ");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v20, (const char (*)[16])" ended. is_succ");
      common::milog::MiLogStream::operator<<(v21, is_succ);
      common::milog::MiLogStream::~MiLogStream(&v28);
      v22 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8();
      v23 = *(_QWORD *)v22 + 224LL;
      if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
        v22 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64))v23)(v22);
      std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::erase(
        &this->group_muiltistage_play_map_,
        (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)(v4 + 64));
      v14 = 0;
    }
    std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v4 + 128));
  }
  result = v14;
  if ( v29 == (char *)v4 )
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
  return result;
};

// Line 865: range 0000000015CEB4C4-0000000015CEB731
void __cdecl SceneMultistagePlayComp::onPlayerEnter(SceneMultistagePlayComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 12 play_map:866";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::onPlayerEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v2 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(_QWORD *)v5 + 136LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *))v6)(v5, player);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 878: range 0000000015CEB732-0000000015CEB9AE
void __cdecl SceneMultistagePlayComp::onMonsterDie(
        SceneMultistagePlayComp *const this,
        ChangeHpContext *context,
        Monster *monster)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+30h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+48h] [rbp-A8h]
  char v15[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 12 play_map:879";
  *(_QWORD *)(v3 + 16) = SceneMultistagePlayComp::onMonsterDie;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v3 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v6 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      v7 = *(_QWORD *)v6 + 144LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, ChangeHpContext *, Monster *))v7)(v6, context, monster);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32));
  if ( v15 == (char *)v3 )
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

// Line 891: range 0000000015CEB9B0-0000000015CEBC42
void __cdecl SceneMultistagePlayComp::onMonsterHurt(
        SceneMultistagePlayComp *const this,
        Monster *monster,
        Creature *attacker,
        float final_damage)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+30h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+48h] [rbp-A8h]
  char v16[160]; // [rsp+50h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 56 12 play_map:892";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::onMonsterHurt;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(_QWORD *)v7 + 152LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Monster *, Creature *, double))v8)(
        v7,
        monster,
        attacker,
        *(double *)_mm_cvtsi32_si128(LODWORD(final_damage)).m128i_i64);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32));
  if ( v16 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 904: range 0000000015CEBC44-0000000015CEBEC7
void __cdecl SceneMultistagePlayComp::onDungeonSettle(
        SceneMultistagePlayComp *const this,
        Player *player,
        uint32_t result,
        uint32_t use_time)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+30h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+48h] [rbp-A8h]
  char v17[160]; // [rsp+50h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 56 12 play_map:905";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::onDungeonSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(_QWORD *)v7 + 160LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *, _QWORD, _QWORD))v8)(v7, player, result, use_time);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32));
  if ( v17 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 917: range 0000000015CEBEC8-0000000015CEC14D
void __cdecl SceneMultistagePlayComp::onSelectWorktopOption(
        SceneMultistagePlayComp *const this,
        Player *player,
        Gadget *gadget,
        uint32_t option_id)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+30h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+48h] [rbp-A8h]
  char v17[160]; // [rsp+50h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 56 12 play_map:918";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::onSelectWorktopOption;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v4 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v7 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      v8 = *(_QWORD *)v7 + 168LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v7 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *, Gadget *, _QWORD))v8)(v7, player, gadget, option_id);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v4 + 32));
  if ( v17 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 930: range 0000000015CEC14E-0000000015CEC3BB
void __cdecl SceneMultistagePlayComp::onPostEnterScene(SceneMultistagePlayComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 12 play_map:931";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::onPostEnterScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v2 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(_QWORD *)v5 + 176LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *))v6)(v5, player);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 943: range 0000000015CEC3BC-0000000015CEC629
void __cdecl SceneMultistagePlayComp::onLeaveScene(SceneMultistagePlayComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 12 play_map:945";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::onLeaveScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v2 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(_QWORD *)v5 + 184LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *))v6)(v5, player);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 957: range 0000000015CEC62A-0000000015CEC8A4
void __cdecl SceneMultistagePlayComp::onPlayerLeaveWorld(
        SceneMultistagePlayComp *const this,
        Player *player,
        proto::LeaveWorldReason leave_world_reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+30h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+48h] [rbp-A8h]
  char v15[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 56 12 play_map:959";
  *(_QWORD *)(v3 + 16) = SceneMultistagePlayComp::onPlayerLeaveWorld;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v3 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v6 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      v7 = *(_QWORD *)v6 + 192LL;
      if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *, _QWORD))v7)(v6, player, (unsigned int)leave_world_reason);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v3 + 32));
  if ( v15 == (char *)v3 )
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

// Line 971: range 0000000015CEC8A6-0000000015CECB13
void __cdecl SceneMultistagePlayComp::onPlayerDisconnect(SceneMultistagePlayComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 12 play_map:972";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::onPlayerDisconnect;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v2 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(_QWORD *)v5 + 200LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, Player *))v6)(v5, player);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 984: range 0000000015CECB14-0000000015CECC79
HideAndSeekMultistagePlayPtr __cdecl SceneMultistagePlayComp::findHideAndSeekPlay(SceneMultistagePlayComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  HideAndSeekMultistagePlayPtr result; // rax
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v1 + 24);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v1 + 24))._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
    {
      std::shared_ptr<HideAndSeekMultistagePlay>::shared_ptr(
        (std::shared_ptr<HideAndSeekMultistagePlay> *const)this,
        0LL);
      goto LABEL_14;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v2 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      v3 = *(_QWORD *)v2 + 40LL;
      v4 = *(unsigned __int8 *)((v3 >> 3) + 0x7FFF8000);
      if ( (_BYTE)v4 )
        v2 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v3)(v2) == 3 )
        break;
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v4);
  result = std::dynamic_pointer_cast<HideAndSeekMultistagePlay,SceneMultistagePlay>((const std::shared_ptr<SceneMultistagePlay> *)this);
LABEL_14:
  result._M_ptr = (std::__shared_ptr<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1000: range 0000000015CECC7A-0000000015CECD9E
int32_t __cdecl SceneMultistagePlayComp::checkMpSceneEnterable(SceneMultistagePlayComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *v9; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+48h] [rbp-8h]

  __for_range = &this->group_muiltistage_play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin(&this->group_muiltistage_play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v9 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v9);
    play_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v9);
    if ( !std::operator==<SceneMultistagePlay>(play_ptr, 0LL) )
    {
      v2 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      v3 = *(_QWORD *)v2 + 232LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      ret = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))v3)(v2, uid);
      if ( ret )
        return ret;
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1015: range 0000000015CECDA0-0000000015CECF69
int32_t __cdecl SceneMultistagePlayComp::findPlayerPosAndRot(
        SceneMultistagePlayComp *const this,
        uint32_t uid,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t PlayerBornPos; // r14d
  HideAndSeekMultistagePlay *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 play_ptr:1016";
  *(_QWORD *)(v4 + 16) = SceneMultistagePlayComp::findPlayerPosAndRot;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  SceneMultistagePlayComp::findHideAndSeekPlay((SceneMultistagePlayComp *const)(v4 + 32));
  if ( std::operator==<HideAndSeekMultistagePlay>((const std::shared_ptr<HideAndSeekMultistagePlay> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "findPlayerPosAndRot",
      1019);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v12,
      (const char (*)[34])"findCurrentHideAndSeekPlay failed");
    common::milog::MiLogStream::~MiLogStream(&v12);
    PlayerBornPos = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    PlayerBornPos = HideAndSeekMultistagePlay::findPlayerBornPos(v8, uid, born_pos, born_rot);
  }
  std::shared_ptr<HideAndSeekMultistagePlay>::~shared_ptr((std::shared_ptr<HideAndSeekMultistagePlay> *const)(v4 + 32));
  result = PlayerBornPos;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1026: range 0000000015CECF6A-0000000015CED104
int32_t __cdecl SceneMultistagePlayComp::checkJumpToSceneValid(
        SceneMultistagePlayComp *const this,
        uint32_t uid,
        TransferReason *p_reason)
{
  std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rbx
  unsigned __int64 v4; // rax
  __int64 (__fastcall *v5)(std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, TransferReason *); // r12
  int32_t ret; // [rsp+2Ch] [rbp-84h]
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+40h] [rbp-70h]
  const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *v12; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+58h] [rbp-58h]
  TransferReason v15; // [rsp+60h] [rbp-50h] BYREF

  __for_range = &this->group_muiltistage_play_map_;
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin(&this->group_muiltistage_play_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end(&this->group_muiltistage_play_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v12 = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v12);
    play_ptr = (std::tuple_element<1,const std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *)std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(v12);
    if ( !std::operator==<SceneMultistagePlay>(play_ptr, 0LL) )
    {
      v3 = std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v4 = (unsigned __int64)(v3->_vptr_DescribalBase + 30);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8();
      v5 = *(__int64 (__fastcall **)(std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, TransferReason *))v4;
      TransferReason::TransferReason(&v15, p_reason);
      ret = v5(v3, uid, &v15);
      TransferReason::~TransferReason(&v15);
      if ( ret )
        return ret;
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1041: range 0000000015CED106-0000000015CED370
void __cdecl SceneMultistagePlayComp::onAvatarDie(SceneMultistagePlayComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *__for_range; // [rsp+20h] [rbp-C0h]
  std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *_; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<long unsigned int const,std::shared_ptr<SceneMultistagePlay> > >::type *play_ptr; // [rsp+38h] [rbp-A8h]
  char v13[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 13 play_map:1042";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::onAvatarDie;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::unordered_map(
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32),
    &this->group_muiltistage_play_map_);
  __for_range = (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v2 + 32);
  __for_begin._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::begin((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::end((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32))._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    play_ptr = std::get<1ul,unsigned long const,std::shared_ptr<SceneMultistagePlay>>(__in);
    if ( !std::operator==<SceneMultistagePlay>(0LL, play_ptr) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      v6 = *(_QWORD *)v5 + 216LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, _QWORD))v6)(v5, uid);
    }
    std::__detail::_Node_iterator<std::pair<unsigned long const,std::shared_ptr<SceneMultistagePlay>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>::~unordered_map((std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1054: range 0000000015CED372-0000000015CED715
__int64 __fastcall SceneMultistagePlayComp::isPlayCanUnloadMainGroup(
        const SceneMultistagePlayComp *const this,
        uint64_t play_key)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int is_main_group_can_unload; // r14d
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  proto::MultistagePlayType v9; // eax
  const std::string *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  __int64 result; // rax
  const data::MultistageExcelConfig *multistage_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<SceneMultistagePlay> v14; // [rsp+20h] [rbp-E0h] BYREF
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 13 play_key:1053 64 16 18 base_play_ptr:1055 96 32 13 type_str:1062";
  *(_QWORD *)(v2 + 16) = SceneMultistagePlayComp::isPlayCanUnloadMainGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  *(_QWORD *)(v2 + 32) = play_key;
  std::shared_ptr<SceneMultistagePlay>::shared_ptr(&v14, 0LL);
  common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned long,std::shared_ptr<SceneMultistagePlay>>>(
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>> *)(v2 + 64),
    (const std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::key_type *)&this->group_muiltistage_play_map_,
    (std::unordered_map<long unsigned int,std::shared_ptr<SceneMultistagePlay>>::mapped_type *)(v2 + 32));
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr(&v14);
  if ( std::operator==<SceneMultistagePlay>(0LL, (const std::shared_ptr<SceneMultistagePlay> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/scene/scene_multistage_play_comp.cpp",
      "isPlayCanUnloadMainGroup",
      1058);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 96),
           (const char (*)[16])" play nullptr: ");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, (const unsigned __int64 *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    is_main_group_can_unload = 1;
  }
  else
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneMultistagePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v8 = *(_QWORD *)v7 + 40LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8();
    v9 = (*(unsigned int (__fastcall **)(unsigned __int64))v8)(v7);
    v10 = proto::MultistagePlayType_Name[abi:cxx11](v9);
    std::string::basic_string(v2 + 96, v10);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    multistage_config_ptr = data::MultistageExcelConfigMgrBase::findMultistageExcelConfig(
                              &v11->design_config.txt_config_mgr.multistage_config_mgr,
                              (const std::string *)(v2 + 96));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v14);
    if ( multistage_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&multistage_config_ptr->is_main_group_can_unload >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&multistage_config_ptr->is_main_group_can_unload);
      is_main_group_can_unload = multistage_config_ptr->is_main_group_can_unload;
    }
    else
    {
      is_main_group_can_unload = 0;
    }
    std::string::~string((void *)(v2 + 96));
  }
  std::shared_ptr<SceneMultistagePlay>::~shared_ptr((std::shared_ptr<SceneMultistagePlay> *const)(v2 + 64));
  result = is_main_group_can_unload;
  if ( v15 == (char *)v2 )
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
