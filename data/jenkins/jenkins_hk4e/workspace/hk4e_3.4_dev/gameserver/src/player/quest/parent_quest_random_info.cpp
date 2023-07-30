// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/quest/parent_quest_random_info.cpp

// Line 18: range 0000000016CDAEC4-0000000016CDB23E
int32_t __cdecl ParentQuestRandomInfo::fromBin(
        ParentQuestRandomInfo *const this,
        const proto::ParentQuestRandomInfoBin *proto_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  const unsigned int *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  const proto::ParentQuestRandomInfoBin *proto_bina; // [rsp+0h] [rbp-100h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-D8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+30h] [rbp-D0h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_config_id; // [rsp+38h] [rbp-C8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-C0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-80h] BYREF
  char v23[96]; // [rsp+A0h] [rbp-60h] BYREF

  proto_bina = proto_bin;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 factor_id:22";
  *(_QWORD *)(v2 + 16) = ParentQuestRandomInfo::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::ParentQuestRandomInfoBin::entrance_id(proto_bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto_bin) = v6 != 0;
    __asan_report_store4(this, proto_bin, v5);
  }
  this->entrance_id = v5;
  v7 = proto::ParentQuestRandomInfoBin::template_id(proto_bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000);
  LOBYTE(proto_bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->template_id, proto_bin, v9);
  this->template_id = v7;
  __for_range = proto::ParentQuestRandomInfoBin::factor_list(proto_bina);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::vector<unsigned int>::emplace_back<unsigned int &>(
      &this->factor_vec,
      (unsigned int *)(v2 + 32),
      (unsigned int *)&this->factor_vec);
    ++__for_begin;
  }
  __for_range_0 = proto::ParentQuestRandomInfoBin::quest_id_map(proto_bina);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_config_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    v11 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            &this->quest_id_map,
            (const unsigned int *)p_config_id,
            &p_config_id->second,
            (const unsigned int *)&this->quest_id_map,
            v10);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/quest/parent_quest_random_info.cpp",
        "fromBin",
        31);
      v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v22,
              (const char (*)[48])"duplicate config_id in quest_id_map, config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)p_config_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
      goto LABEL_19;
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  result = 0;
LABEL_19:
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

// Line 40: range 0000000016CDB240-0000000016CDB4C3
int32_t __cdecl ParentQuestRandomInfo::toBin(
        const ParentQuestRandomInfo *const this,
        proto::ParentQuestRandomInfoBin *proto_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v5; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v6; // rsi
  unsigned int *v7; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  char v9; // cl
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_quest_id_map; // [rsp+38h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *run_time_id; // [rsp+58h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ParentQuestRandomInfoBin::set_entrance_id(proto_bin, this->entrance_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->template_id);
  }
  proto::ParentQuestRandomInfoBin::set_template_id(proto_bin, this->template_id);
  __for_range = &this->factor_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->factor_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->factor_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::ParentQuestRandomInfoBin::add_factor_list(proto_bin, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  proto_quest_id_map = proto::ParentQuestRandomInfoBin::mutable_quest_id_map(proto_bin);
  __for_range_0 = &this->quest_id_map;
  __for_begin._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::begin(&this->quest_id_map)._M_node;
  __for_end._M_current = (const unsigned int *)std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v16 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    config_id = std::get<0ul,unsigned int const,unsigned int>(v16);
    v4 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
    run_time_id = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v5 = *run_time_id;
    v6 = config_id;
    v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_quest_id_map, config_id);
    v8 = v7;
    v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
    if ( v9 != 0 && (char)(((unsigned __int8)v7 & 7) + 3) >= v9 )
    {
      LOBYTE(v6) = v9 != 0;
      __asan_report_store4(v7, v6, v7);
    }
    *v8 = v5;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  return 0;
};

// Line 59: range 0000000016CDB4C4-0000000016CDB61D
int32_t __cdecl ParentQuestRandomInfo::toClient(
        const ParentQuestRandomInfo *const this,
        proto::ParentQuestRandomInfo *proto_random_info)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ParentQuestRandomInfo::set_entrance_id(proto_random_info, this->entrance_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->template_id);
  }
  proto::ParentQuestRandomInfo::set_template_id(proto_random_info, this->template_id);
  __for_range = &this->factor_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(&this->factor_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&this->factor_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::ParentQuestRandomInfo::add_factor_list(proto_random_info, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 72: range 0000000016CDB61E-0000000016CDB95F
int32_t __cdecl ParentQuestRandomInfo::init(ParentQuestRandomInfo *const this, uint32_t parent_quest_id)
{
  std::map<std::string,std::string> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (std::map<std::string,std::string> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<std::string,std::string> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 19 elem_content_map:73";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)ParentQuestRandomInfo::init;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  std::map<std::string,std::string>::map(v2 + 1);
  if ( ParentQuestRandomInfo::generateElemContentMap(this, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest_random_info.cpp",
      "init",
      76);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v10,
           (const char (*)[51])"generateElemContentMap failed, random template_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->template_id);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else if ( ParentQuestRandomInfo::initParentQuestConfig(this, parent_quest_id, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest_random_info.cpp",
      "init",
      84);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v10,
           (const char (*)[43])"initParentQuestConfig failed, template_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->template_id);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else if ( ParentQuestRandomInfo::initChildQuestConfig(this, parent_quest_id, v2 + 1) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest_random_info.cpp",
      "init",
      90);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v10,
           (const char (*)[42])"initChildQuestConfig failed, template_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->template_id);
    common::milog::MiLogStream::~MiLogStream(&v10);
    v6 = -1;
  }
  else
  {
    v6 = 0;
  }
  std::map<std::string,std::string>::~map(v2 + 1);
  result = v6;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 98: range 0000000016CDB960-0000000016CDC00F
int32_t __cdecl ParentQuestRandomInfo::initParentQuestConfig(
        ParentQuestRandomInfo *const this,
        uint32_t parent_quest_id,
        const std::map<std::string,std::string> *elem_content_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  __int64 template_id; // rsi
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  __int64 v10; // rsi
  data::QuestType type; // ecx
  char v12; // dl
  __int64 v13; // rdx
  uint32_t recommend_level; // ecx
  char v15; // al
  __int64 v16; // rsi
  bool repeatable; // cl
  char v18; // dl
  __int64 v19; // rdx
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-F9h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const data::RandomMainQuestExcelConfig *random_parent_quest_config_ptr; // [rsp+38h] [rbp-E8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::pair<unsigned int const,unsigned int> *v30; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *quest_id; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v33; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v34; // [rsp+70h] [rbp-B0h] BYREF
  char v35[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 17 reward_id_str:115";
  *(_QWORD *)(v3 + 16) = ParentQuestRandomInfo::initParentQuestConfig;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.quest_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->template_id);
  }
  template_id = this->template_id;
  random_parent_quest_config_ptr = data::QuestExcelConfigMgrBase::findRandomMainQuestExcelConfig(
                                     p_quest_config_mgr,
                                     template_id);
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( random_parent_quest_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_config.id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->parent_quest_config.id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->parent_quest_config.id, template_id, &this->parent_quest_config.id);
    }
    this->parent_quest_config.id = parent_quest_id;
    v10 = (((_BYTE)random_parent_quest_config_ptr + 12) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&random_parent_quest_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)random_parent_quest_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&random_parent_quest_config_ptr->type >> 3)
                                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&random_parent_quest_config_ptr->type);
    }
    type = random_parent_quest_config_ptr->type;
    v12 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_config.type >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v12 != 0;
    v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 100) & 7) + 3) >= v12);
    if ( (_BYTE)v13 )
      __asan_report_store4(&this->parent_quest_config.type, v10, v13);
    this->parent_quest_config.type = type;
    if ( *(_BYTE *)(((unsigned __int64)&random_parent_quest_config_ptr->recommend_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_parent_quest_config_ptr->recommend_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_parent_quest_config_ptr->recommend_level);
    }
    recommend_level = random_parent_quest_config_ptr->recommend_level;
    v15 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_config.recommend_level >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v10) = v15 != 0;
      __asan_report_store4(&this->parent_quest_config.recommend_level, v10, &this->parent_quest_config.recommend_level);
    }
    this->parent_quest_config.recommend_level = recommend_level;
    v16 = ((_BYTE)random_parent_quest_config_ptr + 52) & 7;
    if ( *(_BYTE *)(((unsigned __int64)&random_parent_quest_config_ptr->repeatable >> 3) + 0x7FFF8000) != 0
      && (char)v16 >= *(_BYTE *)(((unsigned __int64)&random_parent_quest_config_ptr->repeatable >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&random_parent_quest_config_ptr->repeatable);
    }
    repeatable = random_parent_quest_config_ptr->repeatable;
    v18 = *(_BYTE *)(((unsigned __int64)&this->parent_quest_config.repeatable >> 3) + 0x7FFF8000);
    LOBYTE(v16) = v18 != 0;
    v19 = (v18 != 0) & (unsigned __int8)((((unsigned __int8)this - 108) & 7) >= v18);
    if ( (_BYTE)v19 )
      __asan_report_store1(&this->parent_quest_config.repeatable, v16, v19);
    this->parent_quest_config.repeatable = repeatable;
    __for_range = &this->quest_id_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->quest_id_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->quest_id_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v30 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      config_id = std::get<0ul,unsigned int const,unsigned int>(v30);
      quest_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v30);
      std::vector<unsigned int>::emplace_back<unsigned int const&>(
        &this->parent_quest_config.child_quest_list,
        quest_id,
        (const unsigned int *)&this->parent_quest_config.child_quest_list);
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::clear(&this->parent_quest_config.reward_id_list);
    ParentQuestRandomInfo::replaceElemContent(
      (std::string *)(v3 + 32),
      this,
      &random_parent_quest_config_ptr->reward_id_list,
      elem_content_map);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v34, ",", &__a);
    v20 = common::tools::StringUtils::splitToList<unsigned int>(
            (const std::string *)(v3 + 32),
            (const std::string *)&v34,
            &this->parent_quest_config.reward_id_list,
            1) != 0;
    std::string::~string(&v34);
    std::allocator<char>::~allocator(&__a);
    if ( v20 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest_random_info.cpp",
        "initParentQuestConfig",
        118);
      v21 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v34,
              (const char (*)[36])"replaceTemplatefailed, template_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->template_id);
      common::milog::MiLogStream::~MiLogStream(&v34);
      v9 = -1;
    }
    else
    {
      v9 = 0;
    }
    std::string::~string((void *)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest_random_info.cpp",
      "initParentQuestConfig",
      102);
    v8 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v34,
           (const char (*)[52])"findRandomMainQuestExcelConfig failed, template_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->template_id);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v9 = -1;
  }
  result = v9;
  if ( v35 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 126: range 0000000016CDC010-0000000016CDEB65
int32_t __cdecl ParentQuestRandomInfo::initChildQuestConfig(
        ParentQuestRandomInfo *const this,
        uint32_t parent_quest_id,
        const std::map<std::string,std::string> *elem_content_map)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  uint32_t v10; // ecx
  char v11; // al
  __int64 v12; // rsi
  __int64 v13; // rdx
  int32_t order; // ecx
  char v15; // al
  data::LogicType accept_cond_comb; // ecx
  char v17; // al
  std::vector<data::RandomQuestCond>::const_iterator *p_for_end_0; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int v25; // r15d
  uint32_t v26; // eax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // r15d
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  int v40; // r15d
  int v41; // r15d
  data::LogicType finish_cond_comb; // ecx
  char v43; // al
  std::vector<data::RandomQuestContent>::const_iterator *p_for_end_2; // rsi
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  int v51; // r15d
  uint32_t v52; // eax
  _BOOL4 v53; // r15d
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  int v57; // r15d
  data::LogicType fail_cond_comb; // ecx
  char v59; // al
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  int v66; // r15d
  _BOOL4 v67; // r15d
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  int v71; // r15d
  std::vector<unsigned int> *p_exclusive_npc_list; // r15
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  _BOOL4 v76; // r15d
  std::vector<unsigned int> *p_shared_npc_list; // r15
  common::milog::MiLogStream *v78; // rsi
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  uint32_t exclusive_npc_priority; // ecx
  char v83; // al
  __int64 v84; // rsi
  bool finish_parent; // cl
  char v86; // dl
  __int64 v87; // rdx
  __int64 v88; // rsi
  bool fail_parent; // cl
  char v90; // dl
  __int64 v91; // rdx
  __int64 v92; // rsi
  bool is_rewind; // cl
  char v94; // dl
  __int64 v95; // rdx
  std::vector<unsigned int> *p_quest_item_id_list; // r15
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  int v100; // r15d
  std::vector<unsigned int> *p_quest_item_num_list; // r15
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  std::vector<unsigned int>::size_type v105; // r15
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v109; // rax
  LuaConfigMgr *v110; // r14
  common::milog::MiLogStream *v111; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v112; // rax
  bool v113; // r14
  common::milog::MiLogStream *v114; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v115; // rax
  bool v116; // r14
  common::milog::MiLogStream *v117; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-4E9h] BYREF
  uint32_t idx; // [rsp+28h] [rbp-4E8h]
  uint32_t idx_0; // [rsp+2Ch] [rbp-4E4h]
  uint32_t runtime_id_0; // [rsp+30h] [rbp-4E0h]
  uint32_t runtime_id; // [rsp+34h] [rbp-4DCh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-4D8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+40h] [rbp-4D0h] BYREF
  std::vector<data::RandomQuestCond>::const_iterator __for_begin_0; // [rsp+48h] [rbp-4C8h] BYREF
  std::vector<data::RandomQuestCond>::const_iterator __for_end_0; // [rsp+50h] [rbp-4C0h] BYREF
  std::vector<data::RandomQuestContent>::const_iterator __for_begin_2; // [rsp+58h] [rbp-4B8h] BYREF
  std::vector<data::RandomQuestContent>::const_iterator __for_end_2; // [rsp+60h] [rbp-4B0h] BYREF
  std::vector<data::RandomQuestContent>::const_iterator __for_begin_3; // [rsp+68h] [rbp-4A8h] BYREF
  std::vector<data::RandomQuestContent>::const_iterator __for_end_3; // [rsp+70h] [rbp-4A0h] BYREF
  std::vector<std::string>::const_iterator __for_begin_1; // [rsp+78h] [rbp-498h] BYREF
  std::vector<std::string>::const_iterator __for_end_1; // [rsp+80h] [rbp-490h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+88h] [rbp-488h]
  const std::string *quest_script_str_ptr; // [rsp+90h] [rbp-480h]
  const std::pair<unsigned int const,unsigned int> *v138; // [rsp+98h] [rbp-478h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+A0h] [rbp-470h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *quest_id; // [rsp+A8h] [rbp-468h]
  const data::RandomQuestExcelConfig *random_quest_config_ptr; // [rsp+B0h] [rbp-460h]
  data::QuestExcelConfig *quest_config; // [rsp+B8h] [rbp-458h]
  const std::vector<data::RandomQuestCond> *__for_range_0; // [rsp+C0h] [rbp-450h]
  const std::vector<data::RandomQuestContent> *__for_range_2; // [rsp+C8h] [rbp-448h]
  const std::vector<data::RandomQuestContent> *__for_range_4; // [rsp+D0h] [rbp-440h]
  const data::RandomQuestContent *random_fail_cond; // [rsp+D8h] [rbp-438h]
  const std::vector<std::string> *__for_range_5; // [rsp+E0h] [rbp-430h]
  const std::string *random_param_1; // [rsp+E8h] [rbp-428h]
  const data::RandomQuestContent *random_finish_cond; // [rsp+F0h] [rbp-420h]
  const std::vector<std::string> *__for_range_3; // [rsp+F8h] [rbp-418h]
  const std::string *random_param_0; // [rsp+100h] [rbp-410h]
  const data::RandomQuestCond *random_accept_cond; // [rsp+108h] [rbp-408h]
  const std::vector<std::string> *__for_range_1; // [rsp+110h] [rbp-400h]
  const std::string *random_param; // [rsp+118h] [rbp-3F8h]
  std::shared_ptr<Config> v155; // [rsp+120h] [rbp-3F0h] BYREF
  LuaScriptPtr v156; // [rsp+130h] [rbp-3E0h] BYREF
  common::milog::MiLogStream v157; // [rsp+140h] [rbp-3D0h] BYREF
  std::string v158; // [rsp+160h] [rbp-3B0h] BYREF
  std::string v159; // [rsp+180h] [rbp-390h] BYREF
  common::milog::MiLogStream v160; // [rsp+1A0h] [rbp-370h] BYREF
  char v161[848]; // [rsp+1C0h] [rbp-350h] BYREF

  v4 = (unsigned __int64)v161;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(800LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 32 4 9 param:218 48 16 18 lua_script_ptr:288 80 32 16 count_result:203 144 32 16 count_result"
                        ":222 208 32 21 exclusive_npc_str:230 272 32 18 shared_npc_str:231 336 32 19 real_script_str:287 "
                        "400 40 15 accept_cond:154 480 128 15 finish_cond:187 640 128 13 fail_cond:214";
  *(_QWORD *)(v4 + 16) = ParentQuestRandomInfo::initChildQuestConfig;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61956;
  v6[536862722] = 62194;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862725] = -219021312;
  v6[536862726] = 62194;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862729] = -219021312;
  v6[536862730] = 62194;
  v6[536862731] = -219021312;
  v6[536862732] = 62194;
  v6[536862733] = -234881024;
  v6[536862734] = -218959118;
  v6[536862739] = -218959118;
  v6[536862744] = -202116109;
  std::map<unsigned int,data::QuestExcelConfig>::clear(&this->quest_config_map);
  __for_range = &this->quest_id_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->quest_id_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->quest_id_map)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v156);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v156)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->template_id);
      }
      quest_script_str_ptr = LuaConfigMgr::findRandomParentQuestScriptStr[abi:cxx11](
                               p_lua_config_mgr,
                               this->template_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v156);
      if ( quest_script_str_ptr )
      {
        ParentQuestRandomInfo::replaceElemContent(
          (std::string *)(v4 + 336),
          this,
          quest_script_str_ptr,
          elem_content_map);
        std::string::basic_string(&v160, v4 + 336);
        LuaScriptMgr::createFromString((const std::string *)(v4 + 48));
        std::string::~string(&v160);
        if ( std::operator==<LuaScript>(0LL, (const std::shared_ptr<LuaScript> *)(v4 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v160,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest_random_info.cpp",
            "initChildQuestConfig",
            291);
          v109 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                   &v160,
                   (const char (*)[45])" createLuaScriptFromStr failed, template_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v109, &this->template_id);
          common::milog::MiLogStream::~MiLogStream(&v160);
          v3 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->parent_quest_script_config >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->parent_quest_script_config >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->parent_quest_script_config, v4 + 48, &this->parent_quest_script_config);
          }
          this->parent_quest_script_config.parent_quest_id = parent_quest_id;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v155);
          v110 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v155)->design_config.lua_config_mgr;
          std::shared_ptr<LuaScript>::shared_ptr(&v156, (const std::shared_ptr<LuaScript> *)(v4 + 48));
          LOBYTE(v110) = LuaConfigMgr::loadParentQuestScriptConfig(v110, &v156, &this->parent_quest_script_config) != 0;
          std::shared_ptr<LuaScript>::~shared_ptr(&v156);
          std::shared_ptr<Config>::~shared_ptr(&v155);
          if ( (_BYTE)v110 )
          {
            common::milog::MiLogStream::create(
              &v160,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest/parent_quest_random_info.cpp",
              "initChildQuestConfig",
              298);
            v111 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                     &v160,
                     (const char (*)[50])" loadParentQuestScriptConfig failed, template_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v111, &this->template_id);
            common::milog::MiLogStream::~MiLogStream(&v160);
            v3 = -1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v156);
            v112 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v156);
            v113 = ParentQuestScriptConfig::rewrite(&this->parent_quest_script_config, &v112->design_config) != 0;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v156);
            if ( v113 )
            {
              common::milog::MiLogStream::create(
                &v160,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/parent_quest_random_info.cpp",
                "initChildQuestConfig",
                304);
              v114 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                       &v160,
                       (const char (*)[54])" ParentQuestScriptConfig rewrite failed, template_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v114, &this->template_id);
              common::milog::MiLogStream::~MiLogStream(&v160);
              v3 = -1;
            }
            else
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v156);
              v115 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v156);
              v116 = ParentQuestScriptConfig::check(&this->parent_quest_script_config, &v115->design_config) != 0;
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v156);
              if ( v116 )
              {
                common::milog::MiLogStream::create(
                  &v160,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest/parent_quest_random_info.cpp",
                  "initChildQuestConfig",
                  310);
                v117 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                         &v160,
                         (const char (*)[52])" ParentQuestScriptConfig check failed, template_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v117, &this->template_id);
                common::milog::MiLogStream::~MiLogStream(&v160);
                v3 = -1;
              }
              else
              {
                v3 = 0;
              }
            }
          }
        }
        std::shared_ptr<LuaScript>::~shared_ptr((std::shared_ptr<LuaScript> *const)(v4 + 48));
        std::string::~string((void *)(v4 + 336));
      }
      else
      {
        v3 = 0;
      }
      goto LABEL_159;
    }
    v138 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    config_id = std::get<0ul,unsigned int const,unsigned int>(v138);
    quest_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v138);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v156);
    p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v156)->design_config.txt_config_mgr.quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    random_quest_config_ptr = data::QuestExcelConfigMgrBase::findRandomQuestExcelConfig(p_quest_config_mgr, *config_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v156);
    if ( !random_quest_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v157,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest_random_info.cpp",
        "initChildQuestConfig",
        143);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v157,
             (const char (*)[46])"findRandomQuestExcelConfig failed, config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, config_id);
      common::milog::MiLogStream::~MiLogStream(&v157);
      v3 = -1;
      goto LABEL_159;
    }
    quest_config = std::map<unsigned int,data::QuestExcelConfig>::operator[](&this->quest_config_map, quest_id);
    v9 = ((unsigned __int8)quest_id & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)quest_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)quest_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(quest_id);
    }
    v10 = *quest_id;
    v11 = *(_BYTE *)(((unsigned __int64)&quest_config->sub_id >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(&quest_config->sub_id, v9, &quest_config->sub_id);
    }
    quest_config->sub_id = v10;
    v12 = (((_BYTE)quest_config + 12) & 7u) + 3;
    v13 = (*(_BYTE *)(((unsigned __int64)&quest_config->main_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)quest_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&quest_config->main_id >> 3) + 0x7FFF8000));
    if ( (_BYTE)v13 )
      __asan_report_store4(&quest_config->main_id, v12, v13);
    quest_config->main_id = parent_quest_id;
    if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->order >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->order >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_quest_config_ptr->order);
    }
    order = random_quest_config_ptr->order;
    v15 = *(_BYTE *)(((unsigned __int64)&quest_config->order >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(&quest_config->order, v12, &quest_config->order);
    }
    quest_config->order = order;
    if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->accept_cond_comb >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->accept_cond_comb >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_quest_config_ptr->accept_cond_comb);
    }
    accept_cond_comb = random_quest_config_ptr->accept_cond_comb;
    v17 = *(_BYTE *)(((unsigned __int64)&quest_config->accept_cond_comb >> 3) + 0x7FFF8000);
    if ( v17 != 0 && v17 <= 3 )
    {
      LOBYTE(v12) = v17 != 0;
      __asan_report_store4(&quest_config->accept_cond_comb, v12, &quest_config->accept_cond_comb);
    }
    quest_config->accept_cond_comb = accept_cond_comb;
    __for_range_0 = &random_quest_config_ptr->accept_cond;
    __for_begin_0._M_current = std::vector<data::RandomQuestCond>::begin(&random_quest_config_ptr->accept_cond)._M_current;
    __for_end_0._M_current = std::vector<data::RandomQuestCond>::end(__for_range_0)._M_current;
LABEL_25:
    p_for_end_0 = &__for_end_0;
    if ( __gnu_cxx::operator!=<data::RandomQuestCond const*,std::vector<data::RandomQuestCond>>(
           &__for_begin_0,
           &__for_end_0) )
    {
      break;
    }
    if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->finish_cond_comb >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->finish_cond_comb >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_quest_config_ptr->finish_cond_comb);
    }
    finish_cond_comb = random_quest_config_ptr->finish_cond_comb;
    v43 = *(_BYTE *)(((unsigned __int64)&quest_config->finish_cond_comb >> 3) + 0x7FFF8000);
    if ( v43 != 0 && v43 <= 3 )
    {
      LOBYTE(p_for_end_0) = v43 != 0;
      __asan_report_store4(&quest_config->finish_cond_comb, p_for_end_0, &quest_config->finish_cond_comb);
    }
    quest_config->finish_cond_comb = finish_cond_comb;
    __for_range_2 = &random_quest_config_ptr->finish_cond;
    __for_begin_2._M_current = std::vector<data::RandomQuestContent>::begin(&random_quest_config_ptr->finish_cond)._M_current;
    __for_end_2._M_current = std::vector<data::RandomQuestContent>::end(__for_range_2)._M_current;
    while ( 1 )
    {
      p_for_end_2 = &__for_end_2;
      if ( !__gnu_cxx::operator!=<data::RandomQuestContent const*,std::vector<data::RandomQuestContent>>(
              &__for_begin_2,
              &__for_end_2) )
        break;
      random_finish_cond = __gnu_cxx::__normal_iterator<data::RandomQuestContent const*,std::vector<data::RandomQuestContent>>::operator*(&__for_begin_2);
      data::QuestContent::QuestContent((data::QuestContent *const)(v4 + 480));
      if ( *(_BYTE *)(((unsigned __int64)&random_finish_cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&random_finish_cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&random_finish_cond->type);
      }
      *(_DWORD *)(v4 + 488) = random_finish_cond->type;
      idx_0 = 0;
      __for_range_3 = &random_finish_cond->param;
      __for_begin_1._M_current = std::vector<std::string>::begin(&random_finish_cond->param)._M_current;
      __for_end_1._M_current = std::vector<std::string>::end(__for_range_3)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_1, &__for_end_1) )
      {
        random_param_0 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_1);
        ParentQuestRandomInfo::replaceElemContent((std::string *)(v4 + 336), this, random_param_0, elem_content_map);
        *(_DWORD *)(v4 + 32) = 0;
        if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v4 + 336), (int *)(v4 + 32), 1) )
        {
          common::milog::MiLogStream::create(
            &v160,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest_random_info.cpp",
            "initChildQuestConfig",
            192);
          v45 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v160,
                  (const char (*)[36])"replaceTemplatefailed, template_id:");
          v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &this->template_id);
          v47 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v46, (const char (*)[13])" finish_cond");
          v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v47,
                  (const char (*)[16])", random_param:");
          v49 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, random_param_0);
          v50 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v49, (const char (*)[9])" result:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v50, (const std::string *)(v4 + 336));
          common::milog::MiLogStream::~MiLogStream(&v160);
          v3 = -1;
          v51 = 0;
        }
        else
        {
          if ( (*(_DWORD *)(v4 + 488) == 136 || *(_DWORD *)(v4 + 488) == 137) && !idx_0 )
          {
            runtime_id_0 = ParentQuestRandomInfo::getRandomQuestRunTimeId(this, *(_DWORD *)(v4 + 32));
            if ( runtime_id_0 )
              v52 = runtime_id_0;
            else
              v52 = *(_DWORD *)(v4 + 32);
            *(_DWORD *)(v4 + 32) = v52;
          }
          std::vector<int>::emplace_back<int &>(
            (std::vector<int> *const)(v4 + 496),
            (int *)(v4 + 32),
            (int *)(v4 + 496));
          ++idx_0;
          v51 = 1;
        }
        std::string::~string((void *)(v4 + 336));
        if ( v51 != 1 )
        {
          v53 = 0;
          goto LABEL_83;
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_1);
      }
      ParentQuestRandomInfo::replaceElemContent(&v158, this, &random_finish_cond->param_str, elem_content_map);
      std::string::operator=(v4 + 520, &v158);
      std::string::~string(&v158);
      ParentQuestRandomInfo::replaceElemContent(
        (std::string *)(v4 + 80),
        this,
        &random_finish_cond->count,
        elem_content_map);
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             (const std::string *)(v4 + 80),
             (unsigned int *)(v4 + 552),
             1) )
      {
        common::milog::MiLogStream::create(
          &v160,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest_random_info.cpp",
          "initChildQuestConfig",
          206);
        v54 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v160,
                (const char (*)[36])"replaceTemplatefailed, template_id:");
        v55 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v54, &this->template_id);
        v56 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v55, (const char (*)[13])", count_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, &random_finish_cond->count);
        common::milog::MiLogStream::~MiLogStream(&v160);
        v3 = -1;
        v57 = 0;
      }
      else
      {
        std::vector<data::QuestContent>::emplace_back<data::QuestContent&>(
          &quest_config->finish_cond,
          (data::QuestContent *)(v4 + 480),
          (data::QuestContent *)&quest_config->finish_cond);
        v57 = 1;
      }
      std::string::~string((void *)(v4 + 80));
      v53 = v57 == 1;
LABEL_83:
      data::QuestContent::~QuestContent((data::QuestContent *const)(v4 + 480));
      if ( !v53 )
        goto LABEL_159;
      __gnu_cxx::__normal_iterator<data::RandomQuestContent const*,std::vector<data::RandomQuestContent>>::operator++(&__for_begin_2);
    }
    if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->fail_cond_comb >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->fail_cond_comb >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_quest_config_ptr->fail_cond_comb);
    }
    fail_cond_comb = random_quest_config_ptr->fail_cond_comb;
    v59 = *(_BYTE *)(((unsigned __int64)&quest_config->fail_cond_comb >> 3) + 0x7FFF8000);
    if ( v59 != 0 && v59 <= 3 )
    {
      LOBYTE(p_for_end_2) = v59 != 0;
      __asan_report_store4(&quest_config->fail_cond_comb, p_for_end_2, &quest_config->fail_cond_comb);
    }
    quest_config->fail_cond_comb = fail_cond_comb;
    __for_range_4 = &random_quest_config_ptr->fail_cond;
    __for_begin_3._M_current = std::vector<data::RandomQuestContent>::begin(&random_quest_config_ptr->fail_cond)._M_current;
    __for_end_3._M_current = std::vector<data::RandomQuestContent>::end(__for_range_4)._M_current;
    while ( __gnu_cxx::operator!=<data::RandomQuestContent const*,std::vector<data::RandomQuestContent>>(
              &__for_begin_3,
              &__for_end_3) )
    {
      random_fail_cond = __gnu_cxx::__normal_iterator<data::RandomQuestContent const*,std::vector<data::RandomQuestContent>>::operator*(&__for_begin_3);
      data::QuestContent::QuestContent((data::QuestContent *const)(v4 + 640));
      if ( *(_BYTE *)(((unsigned __int64)&random_fail_cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&random_fail_cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&random_fail_cond->type);
      }
      *(_DWORD *)(v4 + 648) = random_fail_cond->type;
      __for_range_5 = &random_fail_cond->param;
      __for_begin_1._M_current = std::vector<std::string>::begin(&random_fail_cond->param)._M_current;
      __for_end_1._M_current = std::vector<std::string>::end(__for_range_5)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_1, &__for_end_1) )
      {
        random_param_1 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_1);
        ParentQuestRandomInfo::replaceElemContent((std::string *)(v4 + 336), this, random_param_1, elem_content_map);
        *(_DWORD *)(v4 + 32) = 0;
        if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v4 + 336), (int *)(v4 + 32), 1) )
        {
          common::milog::MiLogStream::create(
            &v160,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest_random_info.cpp",
            "initChildQuestConfig",
            218);
          v60 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v160,
                  (const char (*)[36])"replaceTemplatefailed, template_id:");
          v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &this->template_id);
          v62 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v61, (const char (*)[11])" fail_cond");
          v63 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v62,
                  (const char (*)[16])", random_param:");
          v64 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, random_param_1);
          v65 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v64, (const char (*)[9])" result:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v65, (const std::string *)(v4 + 336));
          common::milog::MiLogStream::~MiLogStream(&v160);
          v3 = -1;
          v66 = 0;
        }
        else
        {
          std::vector<int>::emplace_back<int &>(
            (std::vector<int> *const)(v4 + 656),
            (int *)(v4 + 32),
            (int *)(v4 + 656));
          v66 = 1;
        }
        std::string::~string((void *)(v4 + 336));
        if ( v66 != 1 )
        {
          v67 = 0;
          goto LABEL_105;
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_1);
      }
      ParentQuestRandomInfo::replaceElemContent(&v159, this, &random_fail_cond->param_str, elem_content_map);
      std::string::operator=(v4 + 680, &v159);
      std::string::~string(&v159);
      ParentQuestRandomInfo::replaceElemContent(
        (std::string *)(v4 + 144),
        this,
        &random_fail_cond->count,
        elem_content_map);
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             (const std::string *)(v4 + 144),
             (unsigned int *)(v4 + 712),
             1) )
      {
        common::milog::MiLogStream::create(
          &v160,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest_random_info.cpp",
          "initChildQuestConfig",
          225);
        v68 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v160,
                (const char (*)[36])"replaceTemplatefailed, template_id:");
        v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, &this->template_id);
        v70 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v69, (const char (*)[13])", count_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v70, &random_fail_cond->count);
        common::milog::MiLogStream::~MiLogStream(&v160);
        v3 = -1;
        v71 = 0;
      }
      else
      {
        std::vector<data::QuestContent>::emplace_back<data::QuestContent&>(
          &quest_config->fail_cond,
          (data::QuestContent *)(v4 + 640),
          (data::QuestContent *)&quest_config->fail_cond);
        v71 = 1;
      }
      std::string::~string((void *)(v4 + 144));
      v67 = v71 == 1;
LABEL_105:
      data::QuestContent::~QuestContent((data::QuestContent *const)(v4 + 640));
      if ( !v67 )
        goto LABEL_159;
      __gnu_cxx::__normal_iterator<data::RandomQuestContent const*,std::vector<data::RandomQuestContent>>::operator++(&__for_begin_3);
    }
    ParentQuestRandomInfo::replaceElemContent(
      (std::string *)(v4 + 208),
      this,
      &random_quest_config_ptr->exclusive_npc_list,
      elem_content_map);
    ParentQuestRandomInfo::replaceElemContent(
      (std::string *)(v4 + 272),
      this,
      &random_quest_config_ptr->shared_npc_list,
      elem_content_map);
    p_exclusive_npc_list = &quest_config->exclusive_npc_list;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v160, ",", &__a);
    LOBYTE(p_exclusive_npc_list) = common::tools::StringUtils::splitToList<unsigned int>(
                                     (const std::string *)(v4 + 208),
                                     (const std::string *)&v160,
                                     p_exclusive_npc_list,
                                     1) != 0;
    std::string::~string(&v160);
    std::allocator<char>::~allocator(&__a);
    if ( (_BYTE)p_exclusive_npc_list )
    {
      common::milog::MiLogStream::create(
        &v160,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest_random_info.cpp",
        "initChildQuestConfig",
        234);
      v73 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v160,
              (const char (*)[36])"replaceTemplatefailed, template_id:");
      v74 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &this->template_id);
      v75 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v74,
              (const char (*)[21])", exclusive_npc_str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v75, (const std::string *)(v4 + 208));
      common::milog::MiLogStream::~MiLogStream(&v160);
      v3 = -1;
      v76 = 0;
    }
    else
    {
      p_shared_npc_list = &quest_config->shared_npc_list;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v160, ",", &__a);
      v78 = &v160;
      LOBYTE(p_shared_npc_list) = common::tools::StringUtils::splitToList<unsigned int>(
                                    (const std::string *)(v4 + 272),
                                    (const std::string *)&v160,
                                    p_shared_npc_list,
                                    1) != 0;
      std::string::~string(&v160);
      std::allocator<char>::~allocator(&__a);
      if ( (_BYTE)p_shared_npc_list )
      {
        common::milog::MiLogStream::create(
          &v160,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest_random_info.cpp",
          "initChildQuestConfig",
          239);
        v79 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v160,
                (const char (*)[36])"replaceTemplatefailed, template_id:");
        v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, &this->template_id);
        v81 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v80,
                (const char (*)[18])", shared_npc_str:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v81, (const std::string *)(v4 + 272));
        common::milog::MiLogStream::~MiLogStream(&v160);
        v3 = -1;
        v76 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->exclusive_npc_priority >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->exclusive_npc_priority >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&random_quest_config_ptr->exclusive_npc_priority);
        }
        exclusive_npc_priority = random_quest_config_ptr->exclusive_npc_priority;
        v83 = *(_BYTE *)(((unsigned __int64)&quest_config->exclusive_npc_priority >> 3) + 0x7FFF8000);
        if ( v83 != 0 && v83 <= 3 )
        {
          LOBYTE(v78) = v83 != 0;
          __asan_report_store4(&quest_config->exclusive_npc_priority, v78, &quest_config->exclusive_npc_priority);
        }
        quest_config->exclusive_npc_priority = exclusive_npc_priority;
        v84 = ((_BYTE)random_quest_config_ptr - 76) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->finish_parent >> 3) + 0x7FFF8000) != 0
          && (char)v84 >= *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->finish_parent >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&random_quest_config_ptr->finish_parent);
        }
        finish_parent = random_quest_config_ptr->finish_parent;
        v86 = *(_BYTE *)(((unsigned __int64)&quest_config->finish_parent >> 3) + 0x7FFF8000);
        LOBYTE(v84) = v86 != 0;
        v87 = (v86 != 0) & (unsigned __int8)((((unsigned __int8)quest_config - 68) & 7) >= v86);
        if ( (_BYTE)v87 )
          __asan_report_store1(&quest_config->finish_parent, v84, v87);
        quest_config->finish_parent = finish_parent;
        v88 = ((_BYTE)random_quest_config_ptr - 75) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->fail_parent >> 3) + 0x7FFF8000) != 0
          && (char)v88 >= *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->fail_parent >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&random_quest_config_ptr->fail_parent);
        }
        fail_parent = random_quest_config_ptr->fail_parent;
        v90 = *(_BYTE *)(((unsigned __int64)&quest_config->fail_parent >> 3) + 0x7FFF8000);
        LOBYTE(v88) = v90 != 0;
        v91 = (v90 != 0) & (unsigned __int8)((((unsigned __int8)quest_config - 67) & 7) >= v90);
        if ( (_BYTE)v91 )
          __asan_report_store1(&quest_config->fail_parent, v88, v91);
        quest_config->fail_parent = fail_parent;
        v92 = ((_BYTE)random_quest_config_ptr - 74) & 7;
        if ( *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->is_rewind >> 3) + 0x7FFF8000) != 0
          && (char)v92 >= *(_BYTE *)(((unsigned __int64)&random_quest_config_ptr->is_rewind >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&random_quest_config_ptr->is_rewind);
        }
        is_rewind = random_quest_config_ptr->is_rewind;
        v94 = *(_BYTE *)(((unsigned __int64)&quest_config->is_rewind >> 3) + 0x7FFF8000);
        LOBYTE(v92) = v94 != 0;
        v95 = (v94 != 0) & (unsigned __int8)((((unsigned __int8)quest_config - 66) & 7) >= v94);
        if ( (_BYTE)v95 )
          __asan_report_store1(&quest_config->is_rewind, v92, v95);
        quest_config->is_rewind = is_rewind;
        ParentQuestRandomInfo::replaceElemContent(
          (std::string *)(v4 + 336),
          this,
          &random_quest_config_ptr->quest_item_id_list,
          elem_content_map);
        p_quest_item_id_list = &quest_config->quest_item_id_list;
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v160, ",", &__a);
        LOBYTE(p_quest_item_id_list) = common::tools::StringUtils::splitToList<unsigned int>(
                                         (const std::string *)(v4 + 336),
                                         (const std::string *)&v160,
                                         p_quest_item_id_list,
                                         1) != 0;
        std::string::~string(&v160);
        std::allocator<char>::~allocator(&__a);
        if ( (_BYTE)p_quest_item_id_list )
        {
          common::milog::MiLogStream::create(
            &v160,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest_random_info.cpp",
            "initChildQuestConfig",
            249);
          v97 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                  &v160,
                  (const char (*)[36])"replaceTemplatefailed, template_id:");
          v98 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v97, &this->template_id);
          v99 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v98,
                  (const char (*)[28])" quest_item_id_list result:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v99, (const std::string *)(v4 + 336));
          common::milog::MiLogStream::~MiLogStream(&v160);
          v3 = -1;
          v100 = 0;
        }
        else
        {
          ParentQuestRandomInfo::replaceElemContent(
            (std::string *)&v160,
            this,
            &random_quest_config_ptr->quest_item_num_list,
            elem_content_map);
          std::string::operator=(v4 + 336, &v160);
          std::string::~string(&v160);
          p_quest_item_num_list = &quest_config->quest_item_num_list;
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v160, ",", &__a);
          LOBYTE(p_quest_item_num_list) = common::tools::StringUtils::splitToList<unsigned int>(
                                            (const std::string *)(v4 + 336),
                                            (const std::string *)&v160,
                                            p_quest_item_num_list,
                                            1) != 0;
          std::string::~string(&v160);
          std::allocator<char>::~allocator(&__a);
          if ( (_BYTE)p_quest_item_num_list )
          {
            common::milog::MiLogStream::create(
              &v160,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest/parent_quest_random_info.cpp",
              "initChildQuestConfig",
              255);
            v102 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                     &v160,
                     (const char (*)[36])"replaceTemplatefailed, template_id:");
            v103 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v102, &this->template_id);
            v104 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                     v103,
                     (const char (*)[29])" quest_item_num_list result:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v104, (const std::string *)(v4 + 336));
            common::milog::MiLogStream::~MiLogStream(&v160);
            v3 = -1;
            v100 = 0;
          }
          else
          {
            v105 = std::vector<unsigned int>::size(&quest_config->quest_item_id_list);
            if ( v105 == std::vector<unsigned int>::size(&quest_config->quest_item_id_list) )
            {
              if ( ParentQuestRandomInfo::initExecVecParam(
                     this,
                     &random_quest_config_ptr->begin_exec,
                     elem_content_map,
                     &quest_config->begin_exec) )
              {
                common::milog::MiLogStream::create(
                  &v160,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest/parent_quest_random_info.cpp",
                  "initChildQuestConfig",
                  265);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v160,
                  (const char (*)[34])"initExecVecParam begin_exec fails");
                common::milog::MiLogStream::~MiLogStream(&v160);
                v3 = -1;
                v100 = 0;
              }
              else if ( ParentQuestRandomInfo::initExecVecParam(
                          this,
                          &random_quest_config_ptr->finish_exec,
                          elem_content_map,
                          &quest_config->finish_exec) )
              {
                common::milog::MiLogStream::create(
                  &v160,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest/parent_quest_random_info.cpp",
                  "initChildQuestConfig",
                  270);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v160,
                  (const char (*)[35])"initExecVecParam finish_exec fails");
                common::milog::MiLogStream::~MiLogStream(&v160);
                v3 = -1;
                v100 = 0;
              }
              else if ( ParentQuestRandomInfo::initExecVecParam(
                          this,
                          &random_quest_config_ptr->fail_exec,
                          elem_content_map,
                          &quest_config->fail_exec) )
              {
                common::milog::MiLogStream::create(
                  &v160,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/quest/parent_quest_random_info.cpp",
                  "initChildQuestConfig",
                  275);
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v160,
                  (const char (*)[33])"initExecVecParam fail_exec fails");
                common::milog::MiLogStream::~MiLogStream(&v160);
                v3 = -1;
                v100 = 0;
              }
              else
              {
                v100 = 1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v160,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/quest/parent_quest_random_info.cpp",
                "initChildQuestConfig",
                260);
              v106 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                       &v160,
                       (const char (*)[35])"replaceTemplatefailed template_id:");
              v107 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v106, &this->template_id);
              common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                v107,
                (const char (*)[58])" quest_item_id_list size not equal to quest_item_num_list");
              common::milog::MiLogStream::~MiLogStream(&v160);
              v3 = -1;
              v100 = 0;
            }
          }
        }
        std::string::~string((void *)(v4 + 336));
        v76 = v100 == 1;
      }
    }
    std::string::~string((void *)(v4 + 272));
    std::string::~string((void *)(v4 + 208));
    if ( !v76 )
      goto LABEL_159;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  random_accept_cond = __gnu_cxx::__normal_iterator<data::RandomQuestCond const*,std::vector<data::RandomQuestCond>>::operator*(&__for_begin_0);
  data::QuestCond::QuestCond((data::QuestCond *const)(v4 + 400));
  if ( *(_BYTE *)(((unsigned __int64)&random_accept_cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&random_accept_cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&random_accept_cond->type);
  }
  *(_DWORD *)(v4 + 408) = random_accept_cond->type;
  idx = 0;
  __for_range_1 = &random_accept_cond->param;
  __for_begin_1._M_current = std::vector<std::string>::begin(&random_accept_cond->param)._M_current;
  __for_end_1._M_current = std::vector<std::string>::end(__for_range_1)._M_current;
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_1, &__for_end_1) )
    {
      std::vector<data::QuestCond>::emplace_back<data::QuestCond&>(
        &quest_config->accept_cond,
        (data::QuestCond *)(v4 + 400),
        (data::QuestCond *)&quest_config->accept_cond);
      v41 = 1;
      goto LABEL_54;
    }
    random_param = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_1);
    if ( *(_DWORD *)(v4 + 408) == 1 || *(_DWORD *)(v4 + 408) == 2 )
      break;
    ParentQuestRandomInfo::replaceElemContent((std::string *)(v4 + 336), this, random_param, elem_content_map);
    *(_DWORD *)(v4 + 32) = 0;
    if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v4 + 336), (int *)(v4 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v160,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest_random_info.cpp",
        "initChildQuestConfig",
        177);
      v34 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v160,
              (const char (*)[36])"replaceTemplatefailed, template_id:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &this->template_id);
      v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])" acceept_cond");
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v36, (const char (*)[16])", random_param:");
      v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v37, random_param);
      v39 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v38, (const char (*)[9])" result:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, (const std::string *)(v4 + 336));
      common::milog::MiLogStream::~MiLogStream(&v160);
      v3 = -1;
      v40 = 0;
    }
    else
    {
      std::vector<int>::emplace_back<int &>((std::vector<int> *const)(v4 + 416), (int *)(v4 + 32), (int *)(v4 + 416));
      v40 = 1;
    }
    std::string::~string((void *)(v4 + 336));
    if ( v40 != 1 )
      goto LABEL_53;
LABEL_51:
    ++idx;
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_1);
  }
  if ( idx )
  {
    if ( idx == 1 )
    {
      ParentQuestRandomInfo::replaceElemContent((std::string *)(v4 + 336), this, random_param, elem_content_map);
      *(_DWORD *)(v4 + 32) = 0;
      if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v4 + 336), (int *)(v4 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v160,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/quest/parent_quest_random_info.cpp",
          "initChildQuestConfig",
          171);
        v27 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v160,
                (const char (*)[36])"replaceTemplatefailed, template_id:");
        v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->template_id);
        v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v28, (const char (*)[14])" acceept_cond");
        v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v29,
                (const char (*)[16])", random_param:");
        v31 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, random_param);
        v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" result:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)(v4 + 336));
        common::milog::MiLogStream::~MiLogStream(&v160);
        v3 = -1;
        v33 = 0;
      }
      else
      {
        std::vector<int>::emplace_back<int &>((std::vector<int> *const)(v4 + 416), (int *)(v4 + 32), (int *)(v4 + 416));
        v33 = 1;
      }
      std::string::~string((void *)(v4 + 336));
      if ( v33 != 1 )
        goto LABEL_53;
    }
    goto LABEL_51;
  }
  ParentQuestRandomInfo::replaceElemContent((std::string *)(v4 + 336), this, random_param, elem_content_map);
  *(_DWORD *)(v4 + 32) = 0;
  if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v4 + 336), (int *)(v4 + 32), 1) )
  {
    common::milog::MiLogStream::create(
      &v160,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest_random_info.cpp",
      "initChildQuestConfig",
      163);
    v19 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v160,
            (const char (*)[36])"replaceTemplatefailed, template_id:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->template_id);
    v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" accept_cond");
    v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])", random_param:");
    v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, random_param);
    v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" result:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v4 + 336));
    common::milog::MiLogStream::~MiLogStream(&v160);
    v3 = -1;
    v25 = 0;
  }
  else
  {
    runtime_id = ParentQuestRandomInfo::getRandomQuestRunTimeId(this, *(_DWORD *)(v4 + 32));
    if ( runtime_id )
      v26 = runtime_id;
    else
      v26 = *(_DWORD *)(v4 + 32);
    *(_DWORD *)(v4 + 32) = v26;
    std::vector<int>::emplace_back<int &>((std::vector<int> *const)(v4 + 416), (int *)(v4 + 32), (int *)(v4 + 416));
    v25 = 1;
  }
  std::string::~string((void *)(v4 + 336));
  if ( v25 == 1 )
    goto LABEL_51;
LABEL_53:
  v41 = 0;
LABEL_54:
  data::QuestCond::~QuestCond((data::QuestCond *const)(v4 + 400));
  if ( v41 == 1 )
  {
    __gnu_cxx::__normal_iterator<data::RandomQuestCond const*,std::vector<data::RandomQuestCond>>::operator++(&__for_begin_0);
    goto LABEL_25;
  }
LABEL_159:
  result = v3;
  if ( v161 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8060) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 319: range 0000000016CDEB66-0000000016CDEC31
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl ParentQuestRandomInfo::initRandomInfo(
        ParentQuestRandomInfo *const this,
        uint32_t entrance_id,
        uint32_t template_id,
        const std::vector<unsigned int> *factor_vec,
        const std::map<unsigned int,unsigned int> *quest_id_map)
{
  __int64 v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, *(_QWORD *)&entrance_id, this);
  }
  this->entrance_id = entrance_id;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->template_id, (((_BYTE)this + 4) & 7u) + 3, v5);
  this->template_id = template_id;
  std::vector<unsigned int>::operator=(&this->factor_vec, factor_vec);
  std::map<unsigned int,unsigned int>::operator=(&this->quest_id_map, quest_id_map);
  return 0;
};

// Line 329: range 0000000016CDEC32-0000000016CDF45D
int32_t __cdecl ParentQuestRandomInfo::generateElemContentMap(
        ParentQuestRandomInfo *const this,
        std::map<std::string,std::string> *elem_content_map)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  std::vector<data::RandomQuestElem>::size_type v8; // r15
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  std::vector<unsigned int>::reference v14; // rax
  _DWORD *v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference v20; // rax
  const data::QuestElemSample *M_current; // r15
  std::vector<data::QuestElemSample>::const_iterator v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // r15d
  std::string *p_content; // r15
  std::map<std::string,std::string>::mapped_type *v30; // rax
  int32_t result; // eax
  uint32_t idx; // [rsp+24h] [rbp-13Ch]
  std::vector<std::string>::const_iterator __for_begin; // [rsp+28h] [rbp-138h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+30h] [rbp-130h] BYREF
  unsigned __int64 val; // [rsp+38h] [rbp-128h] BYREF
  const data::RandomQuestTemplateExcelConfig *template_config_ptr; // [rsp+40h] [rbp-120h]
  const data::RandomQuestElem *elem; // [rsp+48h] [rbp-118h]
  const data::RandomQuestElemPoolExcelConfig *factor_pool_config_ptr; // [rsp+50h] [rbp-110h]
  const std::vector<std::string> *__for_range; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Config> v40; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 factor_id:347 64 8 13 elem_iter:359 96 32 13 elem_name:357";
  *(_QWORD *)(v3 + 16) = ParentQuestRandomInfo::generateElemContentMap;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v40);
  p_quest_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.quest_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->template_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->template_id);
  }
  template_config_ptr = data::QuestExcelConfigMgrBase::findRandomQuestTemplateExcelConfig(
                          p_quest_config_mgr,
                          this->template_id);
  std::shared_ptr<Config>::~shared_ptr(&v40);
  if ( template_config_ptr )
  {
    v8 = std::vector<data::RandomQuestElem>::size(&template_config_ptr->elem_list);
    if ( v8 == std::vector<unsigned int>::size(&this->factor_vec) )
    {
      for ( idx = 0; idx < std::vector<data::RandomQuestElem>::size(&template_config_ptr->elem_list); ++idx )
      {
        elem = std::vector<data::RandomQuestElem>::operator[](&template_config_ptr->elem_list, idx);
        v14 = std::vector<unsigned int>::operator[](&this->factor_vec, idx);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v14);
        }
        *(_DWORD *)(v3 + 48) = *v15;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v40);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40);
        factor_pool_config_ptr = data::QuestExcelConfigMgrBase::findRandomQuestElemPoolExcelConfig(
                                   &v16->design_config.txt_config_mgr.quest_config_mgr,
                                   *(_DWORD *)(v3 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v40);
        if ( !factor_pool_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest_random_info.cpp",
            "generateElemContentMap",
            353);
          v17 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v41,
                  (const char (*)[56])"findRandomQuestElemPoolExcelConfig failed, template_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->template_id);
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" factor_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v41);
          v2 = -1;
          goto LABEL_25;
        }
        __for_range = &elem->name;
        __for_begin._M_current = std::vector<std::string>::begin(&elem->name)._M_current;
        __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
        while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
        {
          v20 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
          std::string::basic_string(v3 + 96, v20);
          M_current = std::vector<data::QuestElemSample>::end(&factor_pool_config_ptr->sample_list)._M_current;
          v22._M_current = std::vector<data::QuestElemSample>::begin(&factor_pool_config_ptr->sample_list)._M_current;
          *(__gnu_cxx::__normal_iterator<const data::QuestElemSample*,std::vector<data::QuestElemSample> > *)(v3 + 64) = std::find_if<__gnu_cxx::__normal_iterator<data::QuestElemSample const*,std::vector<data::QuestElemSample>>,ParentQuestRandomInfo::generateElemContentMap(std::map<std::string,std::string> &)::{lambda(__gnu_cxx::__normal_iterator<data::QuestElemSample const*,std::vector<data::QuestElemSample>> const&)#1}>(v22, (__gnu_cxx::__normal_iterator<const data::QuestElemSample*,std::vector<data::QuestElemSample> >)M_current, (ParentQuestRandomInfo::generateElemContentMap::<lambda(const auto:27&)>)(v3 + 96));
          val = (unsigned __int64)std::vector<data::QuestElemSample>::end(&factor_pool_config_ptr->sample_list)._M_current;
          if ( __gnu_cxx::operator==<data::QuestElemSample const*,std::vector<data::QuestElemSample>>(
                 (const __gnu_cxx::__normal_iterator<const data::QuestElemSample*,std::vector<data::QuestElemSample> > *)(v3 + 64),
                 (const __gnu_cxx::__normal_iterator<const data::QuestElemSample*,std::vector<data::QuestElemSample> > *)&val) )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/quest/parent_quest_random_info.cpp",
              "generateElemContentMap",
              366);
            v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v41,
                    (const char (*)[39])"No factor in factor pool, tempalte_id:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->template_id);
            v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v24,
                    (const char (*)[12])" factor_id:");
            v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v3 + 48));
            v27 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])" name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v41);
            v2 = -1;
            v28 = 0;
          }
          else
          {
            p_content = &__gnu_cxx::__normal_iterator<data::QuestElemSample const*,std::vector<data::QuestElemSample>>::operator->((const __gnu_cxx::__normal_iterator<const data::QuestElemSample*,std::vector<data::QuestElemSample> > *const)(v3 + 64))->content;
            v30 = std::map<std::string,std::string>::operator[](
                    elem_content_map,
                    (const std::map<std::string,std::string>::key_type *)(v3 + 96));
            std::string::operator=(v30, p_content);
            v28 = 1;
          }
          std::string::~string((void *)(v3 + 96));
          if ( v28 != 1 )
            goto LABEL_25;
          __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
        }
      }
      v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/quest/parent_quest_random_info.cpp",
        "generateElemContentMap",
        339);
      v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v41,
             (const char (*)[46])"RandomQuest elem_size not match, template_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->template_id);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" config_size:");
      *(_QWORD *)(v3 + 64) = std::vector<data::RandomQuestElem>::size(&template_config_ptr->elem_list);
      v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v11,
              (const unsigned __int64 *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" bin_size:");
      val = std::vector<unsigned int>::size(&this->factor_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v2 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/quest/parent_quest_random_info.cpp",
      "generateElemContentMap",
      333);
    v7 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v41,
           (const char (*)[62])"findRandomQuestTemplateExcelConfig failed, quest_template_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->template_id);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v2 = -1;
  }
LABEL_25:
  result = v2;
  if ( v42 == (char *)v3 )
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

// Line 359: range 0000000016D3A7CE-0000000016D3A81A
bool __cdecl ParentQuestRandomInfo::generateElemContentMap::_lambda_const_auto_27___::operator()_data::QuestElemSample_(
        const ParentQuestRandomInfo::generateElemContentMap::<lambda(const auto:27&)> *const __closure,
        const data::QuestElemSample *factor)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return std::operator==<char>(&factor->type, __closure->__elem_name);
};

// Line 378: range 0000000016CDF45E-0000000016CDF545
std::string *__cdecl ParentQuestRandomInfo::replaceElemContent(
        std::string *retstr,
        ParentQuestRandomInfo *const this,
        const std::string *str,
        const std::map<std::string,std::string> *elem_content_map)
{
  std::map<std::string,std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<std::string,std::string>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::map<std::string,std::string> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const std::string,std::string > *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const std::string,std::string > >::type *from; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const std::string,std::string > >::type *to; // [rsp+48h] [rbp-18h]

  std::string::basic_string(retstr, str);
  __for_range = elem_content_map;
  __for_begin._M_node = std::map<std::string,std::string>::begin(elem_content_map)._M_node;
  __for_end._M_node = std::map<std::string,std::string>::end(elem_content_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator*(&__for_begin);
    from = std::get<0ul,std::string const,std::string>(v9);
    to = (std::tuple_element<1,const std::pair<const std::string,std::string > >::type *)std::get<1ul,std::string const,std::string>(v9);
    common::tools::StringUtils::replaceAll(retstr, from, to);
    std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 390: range 0000000016CDF546-0000000016CDF6D3
__int64 __fastcall ParentQuestRandomInfo::getRandomQuestRunTimeId(
        ParentQuestRandomInfo *const this,
        uint32_t config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 config_id:389 64 8 8 iter:391";
  *(_QWORD *)(v2 + 16) = ParentQuestRandomInfo::getRandomQuestRunTimeId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = config_id;
  *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &this->quest_id_map,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->quest_id_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v6->second;
  }
  if ( v9 == (char *)v2 )
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

// Line 403: range 0000000016CDF6D4-0000000016CDFBDE
int32_t __cdecl ParentQuestRandomInfo::initExecVecParam(
        ParentQuestRandomInfo *const this,
        const std::vector<data::QuestExec> *random_exec_vec,
        const std::map<std::string,std::string> *elem_content_map,
        std::vector<data::QuestExec> *exec_vec)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // r15d
  int v13; // r15d
  int32_t result; // eax
  std::vector<data::QuestExec>::const_iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::vector<data::QuestExec>::const_iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  std::vector<std::string>::const_iterator __for_begin_0; // [rsp+40h] [rbp-140h] BYREF
  std::vector<std::string>::const_iterator __for_end_0; // [rsp+48h] [rbp-138h] BYREF
  const std::vector<data::QuestExec> *__for_range; // [rsp+50h] [rbp-130h]
  const data::QuestExec *random_exec; // [rsp+58h] [rbp-128h]
  const std::vector<std::string> *__for_range_0; // [rsp+60h] [rbp-120h]
  const std::string *random_param; // [rsp+68h] [rbp-118h]
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-110h] BYREF
  char v26[240]; // [rsp+90h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 9 param:413 48 32 10 result:410 112 40 8 exec:406";
  *(_QWORD *)(v5 + 16) = ParentQuestRandomInfo::initExecVecParam;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862722] = -219021312;
  v7[536862723] = 62194;
  v7[536862724] = -218103808;
  v7[536862725] = -202116109;
  __for_range = random_exec_vec;
  __for_begin._M_current = std::vector<data::QuestExec>::begin(random_exec_vec)._M_current;
  __for_end._M_current = std::vector<data::QuestExec>::end(random_exec_vec)._M_current;
  while ( 2 )
  {
    if ( !__gnu_cxx::operator!=<data::QuestExec const*,std::vector<data::QuestExec>>(&__for_begin, &__for_end) )
    {
      v4 = 0;
      break;
    }
    random_exec = __gnu_cxx::__normal_iterator<data::QuestExec const*,std::vector<data::QuestExec>>::operator*(&__for_begin);
    data::QuestExec::QuestExec((data::QuestExec *const)(v5 + 112));
    if ( *(_BYTE *)(((unsigned __int64)&random_exec->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&random_exec->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&random_exec->type);
    }
    *(_DWORD *)(v5 + 120) = random_exec->type;
    __for_range_0 = &random_exec->param;
    __for_begin_0._M_current = std::vector<std::string>::begin(&random_exec->param)._M_current;
    __for_end_0._M_current = std::vector<std::string>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin_0, &__for_end_0) )
    {
      random_param = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin_0);
      ParentQuestRandomInfo::replaceElemContent((std::string *)(v5 + 48), this, random_param, elem_content_map);
      if ( *(_DWORD *)(v5 + 120) == 14 && (unsigned __int8)std::string::empty(v5 + 48) != 1 )
      {
        *(_DWORD *)(v5 + 32) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(
               (const std::string *)(v5 + 48),
               (unsigned int *)(v5 + 32),
               1) )
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/quest/parent_quest_random_info.cpp",
            "initExecVecParam",
            416);
          v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 &v25,
                 (const char (*)[30])"strToNum failed, template_id:");
          v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->template_id);
          v11 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v10, (const char (*)[8])" param:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v25);
          v4 = -1;
          v12 = 0;
          goto LABEL_20;
        }
        if ( *(_DWORD *)(v5 + 32) )
        {
          *(_DWORD *)(v5 + 32) = ParentQuestRandomInfo::getRandomQuestRunTimeId(this, *(_DWORD *)(v5 + 32));
          std::to_string((std::string *)&v25, *(_DWORD *)(v5 + 32));
          std::string::operator=(v5 + 48, &v25);
          std::string::~string(&v25);
        }
      }
      std::vector<std::string>::emplace_back<std::string&>(
        (std::vector<std::string> *const)(v5 + 128),
        (std::string *)(v5 + 48),
        (std::string *)(v5 + 128));
      v12 = 1;
LABEL_20:
      std::string::~string((void *)(v5 + 48));
      if ( v12 != 1 )
      {
        v13 = 0;
        goto LABEL_24;
      }
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin_0);
    }
    std::vector<data::QuestExec>::emplace_back<data::QuestExec&>(
      exec_vec,
      (data::QuestExec *)(v5 + 112),
      (data::QuestExec *)(v5 + 112));
    v13 = 1;
LABEL_24:
    data::QuestExec::~QuestExec((data::QuestExec *const)(v5 + 112));
    if ( v13 == 1 )
    {
      __gnu_cxx::__normal_iterator<data::QuestExec const*,std::vector<data::QuestExec>>::operator++(&__for_begin);
      continue;
    }
    break;
  }
  result = v4;
  if ( v26 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
