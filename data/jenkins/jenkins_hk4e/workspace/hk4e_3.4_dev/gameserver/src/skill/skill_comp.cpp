// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/skill/skill_comp.cpp

// Line 35: range 000000001801AC1E-000000001801AD08
int32_t __cdecl SkillComp::onLogin(SkillComp *const this)
{
  Skill *v1; // rax
  std::map<unsigned int,std::shared_ptr<Skill>>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,std::shared_ptr<Skill>>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  uint64_t cur_client_time_ms; // [rsp+28h] [rbp-28h]
  std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Skill> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  cur_client_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
  __for_range = &this->skill_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin(&this->skill_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::end(&this->skill_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*(&__for_begin);
    skill_id = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(__in);
    skill_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(__in);
    v1 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    Skill::onLogin(v1, cur_client_time_ms);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 46: range 000000001801AD0A-000000001801ADB1
int32_t __cdecl SkillComp::onDisconnect(SkillComp *const this)
{
  Skill *v1; // rax
  std::map<unsigned int,std::shared_ptr<Skill>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Skill>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Skill> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->skill_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin(&this->skill_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::end(&this->skill_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*(&__for_begin);
    skill_id = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(__in);
    skill_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(__in);
    v1 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    Skill::onDisconnect(v1);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 56: range 000000001801ADB2-000000001801B0EB
int32_t __cdecl SkillComp::fromBin(SkillComp *const this, const proto::AvatarBin *bin)
{
  const proto::AvatarSkillBin *v2; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,proto::AvatarSkillBin>,false,false>,bool> v3; // rax
  common::milog::MiLogStream *v4; // rdx
  const google::protobuf::MapPair<unsigned int,unsigned int> *v5; // rax
  unsigned int v6; // ebx
  unsigned int *v7; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  unsigned int *v9; // rdx
  char v10; // cl
  const google::protobuf::Map<unsigned int,proto::AvatarSkillBin> *__for_range; // [rsp+18h] [rbp-E8h]
  const google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin> *__for_range_0; // [rsp+20h] [rbp-E0h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_reference p_depot_id; // [rsp+28h] [rbp-D8h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *skill_level_map; // [rsp+30h] [rbp-D0h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+38h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::const_reference p_skill_id; // [rsp+40h] [rbp-C0h]
  unsigned int skill_id[2]; // [rsp+48h] [rbp-B8h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator __for_begin_0; // [rsp+50h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator __for_end_0; // [rsp+70h] [rbp-90h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::const_iterator __for_begin; // [rsp+90h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::const_iterator __for_end; // [rsp+B0h] [rbp-50h] BYREF
  common::milog::MiLogStream v23; // [rsp+D0h] [rbp-30h] BYREF

  __for_range = proto::AvatarBin::skill_map(bin);
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_skill_id = google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::const_iterator::operator*(&__for_begin);
    v3 = std::unordered_map<unsigned int,proto::AvatarSkillBin>::emplace<unsigned int const&,proto::AvatarSkillBin const&>(
           &this->cached_skill_bin_map_,
           &p_skill_id->first,
           &p_skill_id->second,
           (const unsigned int *)&this->cached_skill_bin_map_,
           v2);
    if ( !v3.second )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/skill/skill_comp.cpp",
        "fromBin",
        62);
      v4 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v23,
             (const char (*)[48])"cached_skill_bin_map_ emplace failed, skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &p_skill_id->first);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::AvatarBin::depot_map(bin);
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_depot_id = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator::operator*(&__for_begin_0);
    skill_level_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                        &this->depot_skill_level_map_,
                        &p_depot_id->first);
    __for_range_1 = proto::AvatarSkillDepotBin::skill_level_map(&p_depot_id->second);
    google::protobuf::Map<unsigned int,unsigned int>::begin(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
      __for_range_1);
    google::protobuf::Map<unsigned int,unsigned int>::end(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end,
      __for_range_1);
    while ( google::protobuf::operator!=(
              (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
              (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end) )
    {
      v5 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
      google::protobuf::MapPair<unsigned int,unsigned int>::MapPair(
        (google::protobuf::MapPair<unsigned int,unsigned int> *const)skill_id,
        v5);
      v6 = skill_id[1];
      v7 = skill_id;
      v8 = std::map<unsigned int,unsigned int>::operator[](skill_level_map, skill_id);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(v7) = v10 != 0;
        __asan_report_store4(v8, v7, (_BYTE)v8);
      }
      *v9 = v6;
      google::protobuf::MapPair<unsigned int,unsigned int>::~MapPair((google::protobuf::MapPair<unsigned int,unsigned int> *const)skill_id);
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++((google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
    }
    google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::const_iterator::operator++(&__for_begin_0);
  }
  return 0;
};

// Line 80: range 000000001801B0EC-000000001801B4F9
int32_t __cdecl SkillComp::toBin(const SkillComp *const this, proto::AvatarBin *bin)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  proto::AvatarSkillDepotBin *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rax
  std::pair<unsigned int const,unsigned int> *v7; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v8; // ebx
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v9; // rsi
  unsigned int *v10; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v11; // rdx
  char v12; // cl
  uint32_t skill_cd_min_preserve_timea; // [rsp+18h] [rbp-C8h]
  uint32_t skill_cd_min_preserve_time; // [rsp+18h] [rbp-C8h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_begin_0; // [rsp+20h] [rbp-C0h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_end_0; // [rsp+28h] [rbp-B8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+30h] [rbp-B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_1; // [rsp+38h] [rbp-A8h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillBin> *skill_map; // [rsp+40h] [rbp-A0h]
  const std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+48h] [rbp-98h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin> *proto_depot_map; // [rsp+50h] [rbp-90h]
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range_0; // [rsp+58h] [rbp-88h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v24; // [rsp+60h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *depot_id; // [rsp+68h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *skill_level_map; // [rsp+70h] [rbp-70h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_skill_level_map; // [rsp+78h] [rbp-68h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+80h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id_0; // [rsp+88h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+90h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<Skill> > *v31; // [rsp+98h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_id; // [rsp+A0h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+A8h] [rbp-38h]
  proto::AvatarSkillBin *skill_bin; // [rsp+B0h] [rbp-30h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+B8h] [rbp-28h] BYREF
  std::shared_ptr<Config> v36[2]; // [rsp+C0h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v36);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v36);
  skill_cd_min_preserve_timea = ConstValueExcelConfigMgr::getSkillCdMinPreserveTime(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v36);
  skill_cd_min_preserve_time = 1000 * skill_cd_min_preserve_timea;
  skill_map = proto::AvatarBin::mutable_skill_map(bin);
  __for_range = &this->skill_map_;
  __for_end_1._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin(&this->skill_map_)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::shared_ptr<Skill>>::end(&this->skill_map_)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >::_Self *)&__for_end_1,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >::_Self *)&__for_end) )
  {
    v31 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > > *const)&__for_end_1);
    skill_id = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(v31);
    skill_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(v31);
    v3 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    if ( (unsigned int)Skill::getLeftCdTime(v3) >= skill_cd_min_preserve_time )
    {
      skill_bin = google::protobuf::Map<unsigned int,proto::AvatarSkillBin>::operator[](skill_map, skill_id);
      v4 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      Skill::toBin(v4, skill_bin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > > *const)&__for_end_1);
  }
  proto_depot_map = proto::AvatarBin::mutable_depot_map(bin);
  __for_range_0 = &this->depot_skill_level_map_;
  __for_begin_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->depot_skill_level_map_)._M_node;
  __for_end_0._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v24 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
    depot_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v24);
    skill_level_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v24);
    v5 = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::operator[](proto_depot_map, depot_id);
    proto_skill_level_map = proto::AvatarSkillDepotBin::mutable_skill_level_map(v5);
    __for_range_1 = skill_level_map;
    __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin(skill_level_map)._M_node;
    __for_end_1._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
    while ( std::operator!=(&__for_begin_1, &__for_end_1) )
    {
      v6 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
      v7 = v6;
      if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v6, 8LL);
      }
      __for_end = *v7;
      skill_id_0 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      skill_level = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v8 = *skill_level;
      v9 = skill_id_0;
      v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_skill_level_map, skill_id_0);
      v11 = v10;
      v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
      {
        LOBYTE(v9) = v12 != 0;
        __asan_report_store4(v10, v9, (_BYTE)v10);
      }
      *v11 = v8;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
  }
  return 0;
};

// Line 109: range 000000001801B4FA-000000001801B81F
int32_t __cdecl SkillComp::toSnapshot(const SkillComp *const this, proto::AvatarSnapshotBin *snapshot_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::AvatarSkillDepotBin *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rax
  std::pair<unsigned int const,unsigned int> *v7; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v8; // r13d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v9; // rsi
  unsigned int *v10; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v11; // rdx
  char v12; // cl
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  proto::AvatarBin *bin; // [rsp+20h] [rbp-A0h]
  const std::map<unsigned int,unsigned int> *skill_level_map_ptr; // [rsp+28h] [rbp-98h]
  google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin> *proto_depot_map; // [rsp+30h] [rbp-90h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_skill_level_map; // [rsp+38h] [rbp-88h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+48h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+50h] [rbp-70h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+58h] [rbp-68h] BYREF
  char v24[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 skill_depot_id:111";
  *(_QWORD *)(v2 + 16) = SkillComp::toSnapshot;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  bin = proto::AvatarSnapshotBin::mutable_avatar_bin(snapshot_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 32) = Avatar::getSkillDepotId(this->avatar_);
  skill_level_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,std::map<unsigned int,unsigned int>> const>(
                          &this->depot_skill_level_map_,
                          (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 32));
  if ( skill_level_map_ptr )
  {
    proto_depot_map = proto::AvatarBin::mutable_depot_map(bin);
    v5 = google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::operator[](
           proto_depot_map,
           (const google::protobuf::Map<unsigned int,proto::AvatarSkillDepotBin>::key_type *)(v2 + 32));
    proto_skill_level_map = proto::AvatarSkillDepotBin::mutable_skill_level_map(v5);
    __for_range = skill_level_map_ptr;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(skill_level_map_ptr)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(skill_level_map_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v7 = v6;
      if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v6, 8LL);
      }
      __in = *v7;
      skill_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      skill_level = std::get<1ul,unsigned int const,unsigned int>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v8 = *skill_level;
      v9 = skill_id;
      v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_skill_level_map, skill_id);
      v11 = v10;
      v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
      {
        LOBYTE(v9) = v12 != 0;
        __asan_report_store4(v10, v9, (_BYTE)v10);
      }
      *v11 = v8;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
  result = 0;
  if ( v24 == (char *)v2 )
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

// Line 127: range 000000001801B820-000000001801BB4C
int32_t __cdecl SkillComp::toClient(const SkillComp *const this, proto::SceneAvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::pair<unsigned int const,unsigned int> *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v7; // r13d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v8; // rsi
  unsigned int *v9; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v10; // rdx
  char v11; // cl
  int32_t result; // eax
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type __x; // [rsp+14h] [rbp-ACh] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *skill_level_map; // [rsp+28h] [rbp-98h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+38h] [rbp-88h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+40h] [rbp-80h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-78h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:129";
  *(_QWORD *)(v2 + 16) = SkillComp::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  skill_level_map = proto::SceneAvatarInfo::mutable_skill_level_map(avatar_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               &this->depot_skill_level_map_,
                                                                                               &__x);
  __in = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__in) )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 32))->second;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v5, 8LL);
      }
      __in = *v6;
      skill_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      skill_level = std::get<1ul,unsigned int const,unsigned int>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v7 = *skill_level;
      v8 = skill_id;
      v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](skill_level_map, skill_id);
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(v9, v8, (_BYTE)v9);
      }
      *v10 = v7;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
  result = 0;
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

// Line 143: range 000000001801BB4E-000000001801BFD2
int32_t __cdecl SkillComp::toClient(const SkillComp *const this, proto::AvatarInfo *avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::pair<unsigned int const,unsigned int> *v8; // rax
  std::pair<unsigned int const,unsigned int> *v9; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v10; // r13d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v11; // rsi
  unsigned int *v12; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v13; // rdx
  char v14; // cl
  int32_t result; // eax
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type __x; // [rsp+1Ch] [rbp-E4h] BYREF
  uint32_t left_cd_time_ms; // [rsp+20h] [rbp-E0h]
  int32_t max_charge_count_delta; // [rsp+24h] [rbp-DCh]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillInfo> *skill_map; // [rsp+38h] [rbp-C8h]
  const std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+40h] [rbp-C0h]
  google::protobuf::Map<unsigned int,unsigned int> *skill_level_map; // [rsp+48h] [rbp-B8h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-B0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id_0; // [rsp+58h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+60h] [rbp-A0h]
  const std::pair<unsigned int const,std::shared_ptr<Skill> > *v27; // [rsp+68h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_id; // [rsp+70h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+78h] [rbp-88h]
  proto::AvatarSkillInfo *skill_info; // [rsp+80h] [rbp-80h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+88h] [rbp-78h] BYREF
  char v32[112]; // [rsp+90h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:157";
  *(_QWORD *)(v2 + 16) = SkillComp::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  skill_map = proto::AvatarInfo::mutable_skill_map(avatar_info);
  __for_range = &this->skill_map_;
  __for_end_0._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin(&this->skill_map_)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::shared_ptr<Skill>>::end(&this->skill_map_)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >::_Self *)&__for_end_0,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >::_Self *)&__for_end) )
  {
    v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > > *const)&__for_end_0);
    skill_id = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(v27);
    skill_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(v27);
    v5 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    left_cd_time_ms = Skill::getLeftCdTime(v5);
    v6 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    max_charge_count_delta = Skill::getMaxChargeCountDelta(v6);
    if ( left_cd_time_ms || max_charge_count_delta )
    {
      skill_info = google::protobuf::Map<unsigned int,proto::AvatarSkillInfo>::operator[](skill_map, skill_id);
      v7 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      Skill::toClient(v7, skill_info);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > > *const)&__for_end_0);
  }
  skill_level_map = proto::AvatarInfo::mutable_skill_level_map(avatar_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               &this->depot_skill_level_map_,
                                                                                               &__x);
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__for_end) )
  {
    __for_range_0 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 32))->second;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(__for_range_0)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v8 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v9 = v8;
      if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v8, 8LL);
      }
      __for_end = *v9;
      skill_id_0 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      skill_level = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v10 = *skill_level;
      v11 = skill_id_0;
      v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](skill_level_map, skill_id_0);
      v13 = v12;
      v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
      if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
      {
        LOBYTE(v11) = v14 != 0;
        __asan_report_store4(v12, v11, (_BYTE)v12);
      }
      *v13 = v10;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
  }
  result = 0;
  if ( v32 == (char *)v2 )
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

// Line 171: range 000000001801BFD4-000000001801C300
int32_t __cdecl SkillComp::toShowAvatarInfo(const SkillComp *const this, proto::ShowAvatarInfo *show_avatar_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::pair<unsigned int const,unsigned int> *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v7; // r13d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v8; // rsi
  unsigned int *v9; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v10; // rdx
  char v11; // cl
  int32_t result; // eax
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type __x; // [rsp+14h] [rbp-ACh] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *skill_level_map; // [rsp+28h] [rbp-98h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-90h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+38h] [rbp-88h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+40h] [rbp-80h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-78h] BYREF
  char v21[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 8 iter:173";
  *(_QWORD *)(v2 + 16) = SkillComp::toShowAvatarInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  skill_level_map = proto::ShowAvatarInfo::mutable_skill_level_map(show_avatar_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v2 + 32) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                               &this->depot_skill_level_map_,
                                                                                               &__x);
  __in = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 32),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__in) )
  {
    __for_range = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 32))->second;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v6 = v5;
      if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v5->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v5, 8LL);
      }
      __in = *v6;
      skill_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      skill_level = std::get<1ul,unsigned int const,unsigned int>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v7 = *skill_level;
      v8 = skill_id;
      v9 = google::protobuf::Map<unsigned int,unsigned int>::operator[](skill_level_map, skill_id);
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(v9, v8, (_BYTE)v9);
      }
      *v10 = v7;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
  result = 0;
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

// Line 186: range 000000001801C302-000000001801C817
int32_t __cdecl SkillComp::init(SkillComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v5; // rdx
  common::milog::MiLogStream *v6; // rdx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  Skill *v8; // rax
  std::unordered_map<unsigned int,proto::AvatarSkillBin>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_map<unsigned int,proto::AvatarSkillBin>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,proto::AvatarSkillBin> *__for_range; // [rsp+28h] [rbp-B8h]
  std::pair<unsigned int const,proto::AvatarSkillBin> *__in; // [rsp+30h] [rbp-B0h]
  std::tuple_element<0,std::pair<unsigned int const,proto::AvatarSkillBin> >::type *skill_id; // [rsp+38h] [rbp-A8h]
  std::tuple_element<1,std::pair<unsigned int const,proto::AvatarSkillBin> >::type *skill_bin; // [rsp+40h] [rbp-A0h]
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+60h] [rbp-80h] BYREF
  char v18[96]; // [rsp+80h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 skill_ptr:217";
  *(_QWORD *)(v1 + 16) = SkillComp::init;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Avatar::getSkillDepotId(this->avatar_) )
  {
    if ( SkillComp::checkOpenSkillDepot(this) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "init",
        196);
      v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v17,
             (const char (*)[45])"avatar skill_comp checkOpenSkillDepot failed");
      common::milog::MiLogStream::operator<<<SkillComp,(SkillComp*)0>(v5, this);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
    else if ( SkillComp::initSkillDepot(this) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "init",
        203);
      v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v17,
             (const char (*)[40])"avatar skill_comp initSkillDepot failed");
      common::milog::MiLogStream::operator<<<SkillComp,(SkillComp*)0>(v6, this);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = -1;
    }
    else
    {
      if ( !std::unordered_map<unsigned int,proto::AvatarSkillBin>::empty(&this->cached_skill_bin_map_) )
      {
        __for_range = &this->cached_skill_bin_map_;
        __for_begin._M_cur = std::unordered_map<unsigned int,proto::AvatarSkillBin>::begin(&this->cached_skill_bin_map_)._M_cur;
        __for_end._M_cur = std::unordered_map<unsigned int,proto::AvatarSkillBin>::end(&this->cached_skill_bin_map_)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,proto::AvatarSkillBin>,false>(
                  &__for_begin,
                  &__for_end) )
        {
          __in = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::AvatarSkillBin>,false,false>::operator*(&__for_begin);
          skill_id = std::get<0ul,unsigned int const,proto::AvatarSkillBin>(__in);
          skill_bin = std::get<1ul,unsigned int const,proto::AvatarSkillBin>(__in);
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v16);
          p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.avatar_skill_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                               p_avatar_skill_config_mgr,
                               *skill_id);
          std::shared_ptr<Config>::~shared_ptr(&v16);
          if ( skill_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->need_store >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)skill_config_ptr - 12) & 7) >= *(_BYTE *)(((unsigned __int64)&skill_config_ptr->need_store >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load1(&skill_config_ptr->need_store);
            }
            if ( skill_config_ptr->need_store )
            {
              if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              SkillComp::findSkill((const SkillComp *const)(v1 + 32), (uint32_t)this);
              if ( std::operator!=<Skill>((const std::shared_ptr<Skill> *)(v1 + 32), 0LL) )
              {
                v8 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
                Skill::fromBin(v8, skill_bin);
              }
              std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v1 + 32));
            }
          }
          std::__detail::_Node_iterator<std::pair<unsigned int const,proto::AvatarSkillBin>,false,false>::operator++(&__for_begin);
        }
        std::unordered_map<unsigned int,proto::AvatarSkillBin>::clear(&this->cached_skill_bin_map_);
      }
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
  if ( v18 == (char *)v1 )
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

// Line 231: range 000000001801C818-000000001801CD2B
int32_t __cdecl SkillComp::clearSkill(SkillComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  std::pair<unsigned int const,unsigned int> *v7; // rax
  std::pair<unsigned int const,unsigned int> *v8; // rdx
  uint32_t TalentComp; // ecx
  bool v10; // r13
  TalentComp *v11; // rcx
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type __x; // [rsp+14h] [rbp-DCh] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+28h] [rbp-C8h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+38h] [rbp-B8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+40h] [rbp-B0h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-A8h] BYREF
  std::shared_ptr<BaseTalent> __a; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-90h] BYREF
  char v22[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 depot_iter:234";
  *(_QWORD *)(v1 + 16) = SkillComp::clearSkill;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::map<unsigned int,std::shared_ptr<Skill>>::clear(&this->skill_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __x = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v1 + 32) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                         &this->depot_skill_level_map_,
                                                                                         &__x);
  __in = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v1 + 32),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__in) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "clearSkill",
      237);
    v4 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v21,
           (const char (*)[33])"skill depot not found, depot_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Avatar::getSkillDepotId(this->avatar_);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &__x);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = -1;
  }
  else
  {
    skill_level_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v1 + 32))->second;
    __for_range = skill_level_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(skill_level_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v7, 8LL);
      }
      __in = *v8;
      skill_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      _ = std::get<1ul,unsigned int const,unsigned int>(&__in);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      TalentComp = (unsigned int)Avatar::getTalentComp(this->avatar_);
      if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      TalentComp::findSkillTalent((const TalentComp *const)&__a, TalentComp);
      v10 = std::operator!=<BaseTalent>(0LL, &__a);
      std::shared_ptr<BaseTalent>::~shared_ptr(&__a);
      if ( v10 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Avatar::getTalentComp(this->avatar_);
        if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        TalentComp::removeSkillTalent(v11, *skill_id);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
  if ( v22 == (char *)v1 )
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

// Line 255: range 000000001801D010-000000001801D3BF
int32_t __cdecl SkillComp::checkOpenSkillDepot(SkillComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t *v7; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const data::AvatarSkillDepotExcelConfig *skill_depot_config_ptr; // [rsp+28h] [rbp-C8h]
  std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+30h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v13; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+70h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 12 depot_id:256 64 8 26 add_skill_level_record:271";
  *(_QWORD *)(v1 + 16) = SkillComp::checkOpenSkillDepot;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 48) = Avatar::getSkillDepotId(this->avatar_);
  if ( *(_DWORD *)(v1 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                               &v5->design_config.txt_config_mgr.avatar_skill_config_mgr,
                               *(_DWORD *)(v1 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( skill_depot_config_ptr )
    {
      skill_level_map = std::map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                          &this->depot_skill_level_map_,
                          (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v1 + 48));
      *(_QWORD *)(v1 + 64) = skill_level_map;
      if ( *(_BYTE *)(((unsigned __int64)&skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_depot_config_ptr->energy_skill >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( skill_depot_config_ptr->energy_skill )
        SkillComp::checkOpenSkillDepot(void)::{lambda(unsigned int)#1}::operator()(
          (const SkillComp::checkOpenSkillDepot::<lambda(uint32_t)> *const)(v1 + 64),
          skill_depot_config_ptr->energy_skill);
      __for_range = &skill_depot_config_ptr->skills;
      __for_begin._M_current = std::vector<unsigned int>::begin(&skill_depot_config_ptr->skills)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&skill_depot_config_ptr->skills)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v7 = (uint32_t *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        SkillComp::checkOpenSkillDepot(void)::{lambda(unsigned int)#1}::operator()(
          (const SkillComp::checkOpenSkillDepot::<lambda(uint32_t)> *const)(v1 + 64),
          *v7);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "checkOpenSkillDepot",
        265);
      v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v14,
             (const char (*)[49])"findAvatarSkillDepotExcelConfig fails, depot_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
    }
  }
  else
  {
    result = 0;
  }
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

// Line 271: range 000000001801CD2C-000000001801D00E
void __fastcall SkillComp::checkOpenSkillDepot(void)::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t skill_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  char *v7; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 skill_id:271";
  *(_QWORD *)(v2 + 16) = SkillComp::checkOpenSkillDepot(void)::{lambda(unsigned int)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = skill_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                              &v5->design_config.txt_config_mgr.avatar_skill_config_mgr,
                              *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( avatar_skill_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( avatar_skill_config_ptr->proud_skill_group_id )
    {
      if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
              *(std::map<unsigned int,unsigned int> **)__closure,
              (const unsigned int *)(v2 + 32)) )
      {
        if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v7 = (char *)(v2 + 32);
        v8 = std::map<unsigned int,unsigned int>::operator[](
               *(std::map<unsigned int,unsigned int> *const *)__closure,
               (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
        v9 = v8;
        v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
        if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
        {
          LOBYTE(v7) = v10 != 0;
          __asan_report_store4(v8, v7, (_BYTE)v8);
        }
        *v9 = 1;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/skill/skill_comp.cpp",
      "operator()",
      276);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v13,
           (const char (*)[43])"findAvatarSkillExcelConfig fail, skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 311: range 000000001801D3C0-000000001801DA34
int32_t __cdecl SkillComp::initSkillDepot(SkillComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // r14
  uint32_t SkillDepotId; // eax
  common::milog::MiLogStream *v6; // r14
  int32_t result; // eax
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::const_reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rdx
  common::milog::MiLogStream *v13; // rax
  uint32_t i; // [rsp+18h] [rbp-C8h]
  SkillType skill_type; // [rsp+1Ch] [rbp-C4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const data::AvatarSkillDepotExcelConfig *avatar_skill_depot_config_ptr; // [rsp+30h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-90h] BYREF
  char v22[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 skill_id:346";
  *(_QWORD *)(v1 + 16) = SkillComp::initSkillDepot;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.avatar_skill_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SkillDepotId = Avatar::getSkillDepotId(this->avatar_);
  avatar_skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    SkillDepotId);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( avatar_skill_depot_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)avatar_skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_skill_depot_config_ptr->energy_skill >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( avatar_skill_depot_config_ptr->energy_skill
      && SkillComp::addSkill(this, avatar_skill_depot_config_ptr->energy_skill, SKILL_ENERGY, 5u) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "initSkillDepot",
        322);
      v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v21,
             (const char (*)[26])"addSkill fails, skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        &avatar_skill_depot_config_ptr->energy_skill);
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
    }
    else
    {
      for ( i = 0; i < std::vector<unsigned int>::size(&avatar_skill_depot_config_ptr->skills); ++i )
      {
        v10 = std::vector<unsigned int>::operator[](&avatar_skill_depot_config_ptr->skills, i);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v10;
        skill_type = SKILL_NONE;
        if ( i )
        {
          if ( i == 1 )
            skill_type = SKILL_SMALL;
        }
        else
        {
          skill_type = SKILL_NORMAL;
        }
        if ( SkillComp::addSkill(this, *(_DWORD *)(v1 + 32), skill_type, i + 1) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/skill/skill_comp.cpp",
            "initSkillDepot",
            342);
          v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v21,
                  (const char (*)[26])"addSkill fails, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
          result = -1;
          goto LABEL_38;
        }
      }
      __for_range = &avatar_skill_depot_config_ptr->sub_skills;
      __for_begin._M_current = std::vector<unsigned int>::begin(&avatar_skill_depot_config_ptr->sub_skills)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&avatar_skill_depot_config_ptr->sub_skills)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v12;
        if ( SkillComp::addSkill(this, *(_DWORD *)(v1 + 32), SKILL_NONE, 0) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/skill/skill_comp.cpp",
            "initSkillDepot",
            350);
          v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v21,
                  (const char (*)[26])"addSkill fails, skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
          result = -1;
          goto LABEL_38;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "initSkillDepot",
      315);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v21,
           (const char (*)[55])"findAvatarSkillDepotExcelConfig fails, skill_depot_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 32) = Avatar::getSkillDepotId(this->avatar_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = -1;
  }
LABEL_38:
  if ( v22 == (char *)v1 )
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

// Line 362: range 000000001801DA36-000000001801E21A
__int64 __fastcall SkillComp::addSkill(SkillComp *const this, uint32_t skill_id, SkillType type, uint32_t slot)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rcx
  unsigned int v9; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  Skill *v13; // rax
  Skill *v14; // rax
  std::shared_ptr<Skill> *v15; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  TalentComp *TalentComp; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self __y; // [rsp+28h] [rbp-108h] BYREF
  const std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+30h] [rbp-100h]
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 15 skill_level:372 48 4 12 skill_id:361 64 8 14 depot_iter:364 96 8 14 skill_iter:373 128"
                        " 16 13 skill_ptr:387";
  *(_QWORD *)(v4 + 16) = SkillComp::addSkill;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = skill_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 32) = Avatar::getSkillDepotId(this->avatar_);
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v4 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                         &this->depot_skill_level_map_,
                                                                                         (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 32));
  __y._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v4 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "addSkill",
      367);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v28,
           (const char (*)[33])"skill depot not found, depot_id:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 32) = Avatar::getSkillDepotId(this->avatar_);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v8, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v9 = -1;
  }
  else
  {
    skill_level_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v4 + 64))->second;
    *(_DWORD *)(v4 + 32) = 1;
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v4 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                          skill_level_map,
                                                                          (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 48));
    __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Base_ptr)std::map<unsigned int,unsigned int>::end(skill_level_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 96),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__y) )
    {
      v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = v10->second;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 128));
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                         &v11->design_config.txt_config_mgr.avatar_skill_config_mgr,
                         *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
    if ( skill_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::tools::perf::make_shared<Skill,unsigned int &,Avatar &>(
        (unsigned int *)(v4 + 128),
        (Avatar *)(v4 + 48),
        (unsigned int *)this->avatar_,
        (Avatar *)(v4 + 48));
      if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v4 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/skill/skill_comp.cpp",
          "addSkill",
          390);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v28, (const char (*)[18])"skill_ptr is null");
        common::milog::MiLogStream::~MiLogStream(&v28);
        v9 = -1;
      }
      else
      {
        v13 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Skill::setType(v13, type);
        v14 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        Skill::setSlot(v14, slot);
        v16 = std::map<unsigned int,std::shared_ptr<Skill>>::emplace<unsigned int &,std::shared_ptr<Skill>&>(
                &this->skill_map_,
                (unsigned int *)(v4 + 48),
                (std::shared_ptr<Skill> *)(v4 + 128),
                (unsigned int *)&this->skill_map_,
                v15);
        if ( !v16.second )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/skill/skill_comp.cpp",
            "addSkill",
            397);
          v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v28,
                  (const char (*)[20])"duplicate skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v28);
          v9 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( !skill_config_ptr->proud_skill_group_id )
            goto LABEL_31;
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          TalentComp = Avatar::getTalentComp(this->avatar_);
          if ( TalentComp::setSkillTalent(TalentComp, *(_DWORD *)(v4 + 48), *(_DWORD *)(v4 + 32)) )
          {
            common::milog::MiLogStream::create(
              &v28,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/skill/skill_comp.cpp",
              "addSkill",
              407);
            v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v28,
                    (const char (*)[31])"setSkillTalent fail, skill_id:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v19,
                    (const unsigned int *)(v4 + 48));
            v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v20,
                    (const char (*)[14])" skill_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 32));
            common::milog::MiLogStream::~MiLogStream(&v28);
            v9 = -1;
          }
          else
          {
LABEL_31:
            v9 = 0;
          }
        }
      }
      std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v4 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "addSkill",
        383);
      v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v28,
              (const char (*)[44])"findAvatarSkillExcelConfig fails, skill_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v9 = -1;
    }
  }
  result = v9;
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

// Line 417: range 000000001801E21C-000000001801E3D4
int32_t __fastcall SkillComp::delSkill(SkillComp *const this, uint32_t skill_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  TalentComp *TalentComp; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 skill_id:416";
  *(_QWORD *)(v2 + 16) = SkillComp::delSkill;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = skill_id;
  if ( std::map<unsigned int,std::shared_ptr<Skill>>::erase(
         &this->skill_map_,
         (const std::map<unsigned int,std::shared_ptr<Skill>>::key_type *)(v2 + 32)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TalentComp = Avatar::getTalentComp(this->avatar_);
    result = TalentComp::removeSkillTalent(TalentComp, *(_DWORD *)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "delSkill",
      420);
    v5 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v8, (const char (*)[21])off_2649E260);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = -1;
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
  return result;
};

// Line 428: range 000000001801E3D6-000000001801EA83
__int64 __fastcall SkillComp::onSkillStart(SkillComp *const this, uint32_t skill_id, const SkillStartParam *param)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  unsigned int v7; // r14d
  Skill *v8; // rax
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v11; // rax
  Player *v12; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // r14
  std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  const std::string *v20; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  const std::string *v23; // rax
  Entity *v24; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  proto_log::EntityLog *v26; // rax
  Entity *v27; // r14
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  proto_log::EntityLog *v29; // rax
  std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t Uid; // eax
  Player *v33; // r14
  Player *v34; // rax
  PlayerWatcherComp *WatcherComp; // rax
  __int64 result; // rax
  google::protobuf::uint32 last_used_skill_id; // [rsp+28h] [rbp-108h]
  uint32_t energy_skill_id; // [rsp+2Ch] [rbp-104h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v41; // [rsp+40h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 skill_id:427 64 16 13 skill_ptr:429 96 16 14 player_ptr:438 128 16 11 log_ptr:443";
  *(_QWORD *)(v3 + 16) = SkillComp::onSkillStart;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = skill_id;
  SkillComp::findSkill((const SkillComp *const)(v3 + 64), (uint32_t)this);
  if ( std::operator==<Skill>((const std::shared_ptr<Skill> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/skill/skill_comp.cpp",
      "onSkillStart",
      432);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v41,
           (const char (*)[27])"findSkill fails, skill_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    Skill::onSkillStart(v8, param);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_used_skill_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    last_used_skill_id = this->last_used_skill_id_;
    this->last_used_skill_id_ = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar = this->avatar_;
    baseclass_0 = avatar->baseclass_0;
    if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
      baseclass_0 = (_QWORD *)__asan_report_load8();
    v11 = *baseclass_0 + 152LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, Avatar *))v11)(v3 + 96, avatar);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      AvatarComp = Player::getAvatarComp(v12);
      if ( !PlayerAvatarComp::getIsAllowUseSkill(AvatarComp) )
      {
        common::tools::perf::make_shared<proto_log::AntiCheatBodyUseNotAllowedSkill>();
        v14 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarId = Avatar::getAvatarId(this->avatar_);
        proto_log::AntiCheatBodyUseNotAllowedSkill::set_avatar_id(v14, AvatarId);
        v16 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        proto_log::AntiCheatBodyUseNotAllowedSkill::set_skill_id(v16, *(_DWORD *)(v3 + 48));
        v17 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        proto_log::AntiCheatBodyUseNotAllowedSkill::set_last_used_skill_id(v17, last_used_skill_id);
        if ( std::operator!=<ActorAbility>(0LL, &param->ability_action_param.ability_ptr) )
        {
          v18 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v19 = std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorAbility,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param);
          v20 = ActorAbility::getName[abi:cxx11](v19);
          proto_log::AntiCheatBodyUseNotAllowedSkill::set_ability_name(v18, v20);
        }
        if ( std::operator!=<ActorModifier>(0LL, &param->ability_action_param.modifier_ptr) )
        {
          v21 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v22 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.modifier_ptr);
          v23 = ActorModifier::getName[abi:cxx11](v22);
          proto_log::AntiCheatBodyUseNotAllowedSkill::set_modifier_name(v21, v23);
        }
        if ( std::operator!=<Creature>(0LL, &param->ability_action_param.source_ptr) )
        {
          v24 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.source_ptr);
          v25 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v26 = proto_log::AntiCheatBodyUseNotAllowedSkill::mutable_source_entity(v25);
          Entity::getEntityLog(v24, v26);
        }
        if ( std::operator!=<Creature>(0LL, &param->ability_action_param.target_ptr) )
        {
          v27 = (Entity *)std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.target_ptr);
          v28 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v29 = proto_log::AntiCheatBodyUseNotAllowedSkill::mutable_target_entity(v28);
          Entity::getEntityLog(v27, v29);
        }
        if ( std::operator!=<Player>(0LL, &param->ability_action_param.from_player_ptr) )
        {
          v30 = std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::AntiCheatBodyUseNotAllowedSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          v31 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)&param->ability_action_param.from_player_ptr);
          Uid = Player::getUid(v31);
          proto_log::AntiCheatBodyUseNotAllowedSkill::set_from_player_uid(v30, Uid);
        }
        v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::AntiCheatBodyUseNotAllowedSkill,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::AntiCheatBodyUseNotAllowedSkill> *)(v3 + 128));
        Player::printAntiCheatLog(v33, ANTI_CHEAT_ACTION_USE_NOT_ALLOWED_SKILL, &p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<proto_log::AntiCheatBodyUseNotAllowedSkill>::~shared_ptr((std::shared_ptr<proto_log::AntiCheatBodyUseNotAllowedSkill> *const)(v3 + 128));
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      energy_skill_id = Avatar::getEnergySkill(this->avatar_);
      v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      WatcherComp = Player::getWatcherComp(v34);
      PlayerWatcherComp::triggerSkill(WatcherComp, *(_DWORD *)(v3 + 48), energy_skill_id == *(_DWORD *)(v3 + 48));
    }
    v7 = 0;
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  }
  std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v3 + 64));
  result = v7;
  if ( v42 == (char *)v3 )
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

// Line 477: range 000000001801EA84-000000001801EC0C
const SkillComp *__fastcall SkillComp::findSkill(const SkillComp *const this, __int64 skill_id, int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 skill_id:476 64 8 6 it:478";
  *(_QWORD *)(v3 + 16) = SkillComp::findSkill;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<Skill>>::find(
                                                                                  (const std::map<unsigned int,std::shared_ptr<Skill>> *const)(skill_id + 24),
                                                                                  (const std::map<unsigned int,std::shared_ptr<Skill>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::end((const std::map<unsigned int,std::shared_ptr<Skill>> *const)(skill_id + 24))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Skill>::shared_ptr((std::shared_ptr<Skill> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill> > > *const)(v3 + 64));
    std::shared_ptr<Skill>::shared_ptr((std::shared_ptr<Skill> *const)this, &v6->second);
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

// Line 485: range 000000001801EC0E-000000001801ECEE
// local variable allocation has failed, the output may be wrong!
SkillPtr __cdecl SkillComp::findSkill(const SkillComp *const this, SkillType skill_type)
{
  SkillType v2; // edx
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  SkillPtr result; // rax
  SkillType skill_typea; // [rsp+Ch] [rbp-44h]
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<Skill> > *v9; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+48h] [rbp-8h]

  skill_typea = v2;
  __for_range = (const std::map<unsigned int,std::shared_ptr<Skill>> *)(*(_QWORD *)&skill_type + 24LL);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin((const std::map<unsigned int,std::shared_ptr<Skill>> *const)(*(_QWORD *)&skill_type + 24LL))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::end((const std::map<unsigned int,std::shared_ptr<Skill>> *const)(*(_QWORD *)&skill_type + 24LL))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*(&__for_begin);
    skill_id = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(v9);
    skill_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(v9);
    v3 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    if ( skill_typea == Skill::getType(v3) )
    {
      std::shared_ptr<Skill>::shared_ptr((std::shared_ptr<Skill> *const)this, skill_ptr);
      goto LABEL_7;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Skill>::shared_ptr((std::shared_ptr<Skill> *const)this, 0LL);
LABEL_7:
  result._M_ptr = (std::__shared_ptr<Skill,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 497: range 000000001801ECF0-000000001801EDF4
// local variable allocation has failed, the output may be wrong!
SkillPtr __cdecl SkillComp::findSkillBySlot(const SkillComp *const this, uint32_t slot)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  SkillPtr result; // rax
  uint32_t slota; // [rsp+Ch] [rbp-44h]
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<Skill> > *v10; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+48h] [rbp-8h]

  slota = v2;
  __for_range = (const std::map<unsigned int,std::shared_ptr<Skill>> *)(*(_QWORD *)&slot + 24LL);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin((const std::map<unsigned int,std::shared_ptr<Skill>> *const)(*(_QWORD *)&slot + 24LL))._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::end((const std::map<unsigned int,std::shared_ptr<Skill>> *const)(*(_QWORD *)&slot + 24LL))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(v10);
    skill_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(v10);
    if ( std::operator!=<Skill>(0LL, skill_ptr) )
    {
      v3 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      if ( slota == Skill::getSlot(v3) )
      {
        std::shared_ptr<Skill>::shared_ptr((std::shared_ptr<Skill> *const)this, skill_ptr);
        goto LABEL_11;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Skill>::shared_ptr((std::shared_ptr<Skill> *const)this, 0LL);
LABEL_11:
  result._M_ptr = (std::__shared_ptr<Skill,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 509: range 000000001801EDF6-000000001801F1ED
void __cdecl SkillComp::getSkillsOnSameSlot(
        const SkillComp *const this,
        uint32_t skill_id,
        std::vector<std::shared_ptr<Skill>> *skill_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const AvatarSkillExcelConfigMgr *v6; // rcx
  uint32_t cd_slot; // ecx
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  const AvatarSkillExcelConfigMgr *skill_config_mgr; // [rsp+38h] [rbp-98h]
  const data::AvatarSkillExcelConfig *target_config_ptr; // [rsp+40h] [rbp-90h]
  const std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+48h] [rbp-88h]
  const std::pair<unsigned int const,std::shared_ptr<Skill> > *v14; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *id; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+60h] [rbp-70h]
  const data::AvatarSkillExcelConfig *skill_config_ptr; // [rsp+68h] [rbp-68h]
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 skill_ptr:514";
  *(_QWORD *)(v3 + 16) = SkillComp::getSkillsOnSameSlot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 32));
  skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->design_config.txt_config_mgr.avatar_skill_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 32));
  target_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(skill_config_mgr, skill_id);
  if ( !target_config_ptr )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->cd_slot >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&target_config_ptr->cd_slot >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( target_config_ptr->cd_slot )
  {
    __for_range = &this->skill_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin(&this->skill_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::end(&this->skill_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(v14);
      skill_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(v14);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( skill_id == *id )
        goto LABEL_24;
      v6 = skill_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(v6, *id);
      if ( skill_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cd_slot >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&skill_config_ptr->cd_slot >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        cd_slot = skill_config_ptr->cd_slot;
        if ( *(_BYTE *)(((unsigned __int64)&target_config_ptr->cd_slot >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&target_config_ptr->cd_slot >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( cd_slot == target_config_ptr->cd_slot )
LABEL_24:
          std::vector<std::shared_ptr<Skill>>::push_back(skill_vec, skill_ptr);
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++(&__for_begin);
    }
  }
  else
  {
LABEL_8:
    SkillComp::findSkill((const SkillComp *const)(v3 + 32), (__int64)this, skill_id);
    if ( std::operator!=<Skill>(0LL, (const std::shared_ptr<Skill> *)(v3 + 32)) )
      std::vector<std::shared_ptr<Skill>>::push_back(
        skill_vec,
        (const std::vector<std::shared_ptr<Skill>>::value_type *)(v3 + 32));
    std::shared_ptr<Skill>::~shared_ptr((std::shared_ptr<Skill> *const)(v3 + 32));
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 538: range 000000001801F1EE-000000001801F545
int32_t __cdecl SkillComp::notifySkillInfo(const SkillComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::AvatarSkillInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  uint64_t Guid; // rax
  std::__shared_ptr_access<proto::AvatarSkillInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  Skill *v7; // rax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t v11; // r14d
  Avatar *avatar; // r14
  int32_t result; // eax
  uint32_t left_cd_time_ms; // [rsp+18h] [rbp-C8h]
  int32_t max_charge_count_delta; // [rsp+1Ch] [rbp-C4h]
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::map<unsigned int,std::shared_ptr<Skill>>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarSkillInfo> *skill_map; // [rsp+30h] [rbp-B0h]
  const std::map<unsigned int,std::shared_ptr<Skill>> *__for_range; // [rsp+38h] [rbp-A8h]
  const std::pair<unsigned int const,std::shared_ptr<Skill> > *v20; // [rsp+40h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_id; // [rsp+48h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *skill_ptr; // [rsp+50h] [rbp-90h]
  proto::AvatarSkillInfo *skill_info; // [rsp+58h] [rbp-88h]
  std::shared_ptr<proto::AvatarSkillInfoNotify> __r; // [rsp+60h] [rbp-80h] BYREF
  char v25[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:539";
  *(_QWORD *)(v1 + 16) = SkillComp::notifySkillInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::AvatarSkillInfoNotify>();
  v4 = std::__shared_ptr_access<proto::AvatarSkillInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Guid = Avatar::getGuid(this->avatar_);
  proto::AvatarSkillInfoNotify::set_guid(v4, Guid);
  v6 = std::__shared_ptr_access<proto::AvatarSkillInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  skill_map = proto::AvatarSkillInfoNotify::mutable_skill_map(v6);
  __for_range = &this->skill_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::begin(&this->skill_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<Skill>>::end(&this->skill_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v20 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator*(&__for_begin);
    skill_id = std::get<0ul,unsigned int const,std::shared_ptr<Skill>>(v20);
    skill_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Skill> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Skill>>(v20);
    v7 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    Skill::updateCdTime(v7);
    v8 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    left_cd_time_ms = Skill::getLeftCdTime(v8);
    v9 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
    max_charge_count_delta = Skill::getMaxChargeCountDelta(v9);
    if ( left_cd_time_ms || max_charge_count_delta )
    {
      skill_info = google::protobuf::Map<unsigned int,proto::AvatarSkillInfo>::operator[](skill_map, skill_id);
      v10 = std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Skill,(__gnu_cxx::_Lock_policy)2,false,false> *const)skill_ptr);
      Skill::toClient(v10, skill_info);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Skill>>>::operator++(&__for_begin);
  }
  if ( google::protobuf::Map<unsigned int,proto::AvatarSkillInfo>::empty(skill_map) )
  {
    v11 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    avatar = this->avatar_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::AvatarSkillInfoNotify>(&__r);
    v11 = Avatar::sendMessage(avatar, (common::minet::ConstMessagePtr *)&__r);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::AvatarSkillInfoNotify>::~shared_ptr((std::shared_ptr<proto::AvatarSkillInfoNotify> *const)(v1 + 32));
  result = v11;
  if ( v25 == (char *)v1 )
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

// Line 562: range 000000001801F546-0000000018020EBA
__int64 __fastcall SkillComp::upgradeAvatarSkill(
        SkillComp *const this,
        Player *player,
        uint32_t skill_id,
        uint32_t old_level,
        uint32_t *cur_level)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // r14
  unsigned int v10; // r14d
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  AvatarTalentExcelConfigMgr *p_avatar_talent_config_mgr; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rcx
  common::milog::MiLogStream *v34; // rcx
  uint32_t PromoteLevel; // ecx
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v39; // rax
  common::milog::MiLogStream *v40; // rcx
  TalentComp *TalentComp; // rcx
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // r14
  uint64_t Guid; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // r14
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // r14
  uint32_t SkillDepotId; // eax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rcx
  __int64 v51; // rsi
  uint32_t v52; // ecx
  char v53; // dl
  bool v54; // dl
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // r14
  uint32_t AvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // r14
  uint32_t v62; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // r14
  Avatar *avatar; // rdx
  _QWORD *baseclass_0; // rax
  unsigned __int64 v66; // rax
  google::protobuf::uint32 v67; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rcx
  __int64 result; // rax
  std::string cur_levela; // [rsp+0h] [rbp-230h]
  uint32_t *cur_levelb; // [rsp+0h] [rbp-230h]
  Player *playera; // [rsp+10h] [rbp-220h]
  SkillComp *thisa; // [rsp+18h] [rbp-218h]
  unsigned int val; // [rsp+20h] [rbp-210h] BYREF
  int32_t ret; // [rsp+24h] [rbp-20Ch]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-208h] BYREF
  std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+30h] [rbp-200h]
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+38h] [rbp-1F8h]
  uint32_t *level; // [rsp+40h] [rbp-1F0h]
  const data::ProudSkillExcelConfig *proud_skill_config_ptr; // [rsp+48h] [rbp-1E8h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+50h] [rbp-1E0h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-1D8h]
  std::shared_ptr<AvatarSkillOrProudSkillLevelupEvent> __r; // [rsp+60h] [rbp-1D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v85; // [rsp+70h] [rbp-1C0h] BYREF
  std::string v86; // [rsp+80h] [rbp-1B0h] BYREF
  char v87[400]; // [rsp+A0h] [rbp-190h] BYREF

  *(&cur_levela._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  cur_levela._anon_0._M_allocated_capacity = (std::string::size_type)player;
  cur_levela._M_string_length = __PAIR64__(skill_id, old_level);
  cur_levela._M_dataplus._M_p = (std::string::pointer)cur_level;
  v5 = (unsigned __int64)v87;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(352LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "11 48 1 10 holder:563 64 4 12 depot_id:572 80 4 24 proud_skill_group_id:601 96 4 12 skill_id:561"
                        " 112 4 13 old_level:561 128 8 14 depot_iter:579 160 8 14 skill_iter:587 192 8 10 reason:650 224 "
                        "16 14 notify_ptr:664 256 16 11 log_ptr:679 288 24 18 item_param_vec:633";
  *(_QWORD *)(v5 + 16) = SkillComp::upgradeAvatarSkill;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -219021312;
  v7[536862728] = -219021312;
  v7[536862729] = -218103808;
  v7[536862730] = -202116109;
  *(_DWORD *)(v5 + 96) = HIDWORD(cur_levela._M_string_length);
  *(_DWORD *)(v5 + 112) = cur_levela._M_string_length;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v86, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x650u, cur_levela);
  std::string::~string(&v86);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Avatar::isFormal(thisa->avatar_) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "upgradeAvatarSkill",
      567);
    v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           (common::milog::MiLogStream *const)&v86,
           (const char (*)[22])"avatar is trial. uid:");
    val = Player::getUid(playera);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
    v10 = -1;
    goto LABEL_105;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v5 + 64) = Avatar::getSkillDepotId(thisa->avatar_);
  if ( !*(_DWORD *)(v5 + 64) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "upgradeAvatarSkill",
      575);
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
            (common::milog::MiLogStream *const)&v86,
            (const char (*)[14])"depot_id is 0");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_21:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, thisa->avatar_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
    v10 = -1;
    goto LABEL_105;
  }
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v5 + 128) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                          &thisa->depot_skill_level_map_,
                                                                                          (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v5 + 64));
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v5 + 192) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&thisa->depot_skill_level_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v5 + 128),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v5 + 192)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "upgradeAvatarSkill",
      582);
    v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)&v86,
            (const char (*)[30])"depot_id not found, depot_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_21;
  }
  skill_level_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v5 + 128))->second;
  *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 160) = std::map<unsigned int,unsigned int>::find(
                                                                   skill_level_map,
                                                                   (const std::map<unsigned int,unsigned int>::key_type *)(v5 + 96));
  *(std::map<unsigned int,unsigned int>::iterator *)(v5 + 192) = std::map<unsigned int,unsigned int>::end(skill_level_map);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 160),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v5 + 192)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "upgradeAvatarSkill",
      590);
    v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)&v86,
            (const char (*)[26])"skill not find, skill_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_21;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v85);
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v85);
  avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                              &v14->design_config.txt_config_mgr.avatar_skill_config_mgr,
                              *(_DWORD *)(v5 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v85);
  if ( !avatar_skill_config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "upgradeAvatarSkill",
      597);
    v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)&v86,
            (const char (*)[43])"findAvatarSkillExcelConfig fail, skill_id:");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_25:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v16, thisa->avatar_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
    v10 = -1;
    goto LABEL_105;
  }
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 80) = avatar_skill_config_ptr->proud_skill_group_id;
  v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v5 + 160));
  level = &v17->second;
  if ( *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v17 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v17->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( *level != *(_DWORD *)(v5 + 112) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v86,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/skill/skill_comp.cpp",
      "upgradeAvatarSkill",
      605);
    v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)&v86,
            (const char (*)[34])"skill level not match! old_level:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 112));
    v20 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" level:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, level);
    v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" skill_id:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 96));
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v5 + 112) = *level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v85);
  v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v85);
  v25 = ConstValueExcelConfigMgr::getActiveSkillMaxLevel(&v24->design_config.txt_config_mgr.const_value_config_mgr) <= *(_DWORD *)(v5 + 112);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v85);
  if ( v25 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v86,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "upgradeAvatarSkill",
      613);
    v26 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)&v86,
            (const char (*)[29])"skill is max level, skill_id");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v5 + 96));
    v28 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])" level:");
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, level);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v29, thisa->avatar_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
    v10 = 907;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v85);
    p_avatar_talent_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v85)->design_config.txt_config_mgr.avatar_talent_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proud_skill_config_ptr = AvatarTalentExcelConfigMgr::findProudSkillConfig(
                               p_avatar_talent_config_mgr,
                               *(_DWORD *)(v5 + 80),
                               *level + 1);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v85);
    if ( proud_skill_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PromoteLevel = Avatar::getPromoteLevel(thisa->avatar_);
      if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->break_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->break_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( PromoteLevel >= proud_skill_config_ptr->break_level )
      {
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v5 + 288));
        if ( *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->coin_cost >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&proud_skill_config_ptr->coin_cost >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( proud_skill_config_ptr->coin_cost )
        {
          LODWORD(v85._M_ptr) = 202;
          HIDWORD(v85._M_ptr) = proud_skill_config_ptr->coin_cost;
          v85._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::push_back(
            (std::vector<ItemParam> *const)(v5 + 288),
            (std::vector<ItemParam>::value_type *)&v85);
        }
        __for_range = &proud_skill_config_ptr->cost_items;
        __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&proud_skill_config_ptr->cost_items)._M_current;
        *(std::vector<data::IdCountConfig>::const_iterator *)(v5 + 192) = std::vector<data::IdCountConfig>::end(&proud_skill_config_ptr->cost_items);
        while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                  &__for_begin,
                  (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v5 + 192)) )
        {
          id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          LODWORD(v85._M_ptr) = id_count_config->id;
          if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          HIDWORD(v85._M_ptr) = id_count_config->count;
          v85._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::push_back(
            (std::vector<ItemParam> *const)(v5 + 288),
            (std::vector<ItemParam>::value_type *)&v85);
          __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
        }
        ItemComp = Player::getItemComp(playera);
        ret = PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v5 + 288));
        if ( ret )
        {
          v10 = ret;
        }
        else
        {
          SubItemReason::SubItemReason((SubItemReason *const)(v5 + 192), ACTION_REASON_UPGRADE_SKILL);
          v39 = Player::getItemComp(playera);
          ret = PlayerItemComp::subItemBatch(
                  v39,
                  (const std::vector<ItemParam> *)(v5 + 288),
                  (const SubItemReason *)(v5 + 192));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v86,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/skill/skill_comp.cpp",
              "upgradeAvatarSkill",
              654);
            v40 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                    (common::milog::MiLogStream *const)&v86,
                    (const char (*)[27])"subItemBatch fail, avatar:");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v40, thisa->avatar_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
            v10 = ret;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++*level;
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            TalentComp = Avatar::getTalentComp(thisa->avatar_);
            if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            TalentComp::setSkillTalent(TalentComp, *(_DWORD *)(v5 + 96), *level);
            common::tools::perf::make_shared<proto::AvatarSkillChangeNotify>();
            v42 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Guid = Avatar::getGuid(thisa->avatar_);
            proto::AvatarSkillChangeNotify::set_avatar_guid(v42, Guid);
            v44 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EntityId = Entity::getEntityId((const Entity *const)thisa->avatar_);
            proto::AvatarSkillChangeNotify::set_entity_id(v44, EntityId);
            v46 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SkillDepotId = Avatar::getSkillDepotId(thisa->avatar_);
            proto::AvatarSkillChangeNotify::set_skill_depot_id(v46, SkillDepotId);
            v48 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
            proto::AvatarSkillChangeNotify::set_avatar_skill_id(v48, *(_DWORD *)(v5 + 96));
            v49 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
            proto::AvatarSkillChangeNotify::set_old_level(v49, *(_DWORD *)(v5 + 112));
            v50 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 224));
            if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::AvatarSkillChangeNotify::set_cur_level(v50, *level);
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::AvatarSkillChangeNotify>((const std::shared_ptr<proto::AvatarSkillChangeNotify> *)&v85);
            Player::sendMessage(playera, (common::minet::ConstMessagePtr *)&v85, 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v85);
            v51 = ((unsigned __int8)level & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v52 = *level;
            v53 = *(_BYTE *)(((unsigned __int64)cur_levelb >> 3) + 0x7FFF8000);
            LOBYTE(v51) = v53 != 0;
            v54 = v53 != 0 && (char)(((unsigned __int8)cur_levelb & 7) + 3) >= v53;
            if ( v54 )
              __asan_report_store4(cur_levelb, v51, v54);
            *cur_levelb = v52;
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v86,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/skill/skill_comp.cpp",
              "upgradeAvatarSkill",
              674);
            v55 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    (common::milog::MiLogStream *const)&v86,
                    (const char (*)[32])"avatar skill upgrade, skill_id:");
            v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v55,
                    (const unsigned int *)(v5 + 96));
            v57 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v56,
                    (const char (*)[12])" cur_level:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, cur_levelb);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
            EventComp = Player::getEventComp(playera);
            common::tools::perf::make_shared<AvatarSkillOrProudSkillLevelupEvent>();
            std::shared_ptr<BaseEvent>::shared_ptr<AvatarSkillOrProudSkillLevelupEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v85,
              &__r);
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v85);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v85);
            std::shared_ptr<AvatarSkillOrProudSkillLevelupEvent>::~shared_ptr(&__r);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill>();
            v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AvatarId = Avatar::getAvatarId(thisa->avatar_);
            proto_log::PlayerLogBodyAvatarUpgradeActiveSkill::set_avatar_id(v59, AvatarId);
            v61 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v62 = Creature::getLevel(thisa->avatar_);
            proto_log::PlayerLogBodyAvatarUpgradeActiveSkill::set_avatar_level(v61, v62);
            v63 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            avatar = thisa->avatar_;
            baseclass_0 = avatar->baseclass_0;
            if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
              baseclass_0 = (_QWORD *)__asan_report_load8();
            v66 = *baseclass_0 + 280LL;
            if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
              v66 = __asan_report_load8();
            v67 = (*(__int64 (__fastcall **)(Avatar *))v66)(avatar);
            proto_log::PlayerLogBodyAvatarUpgradeActiveSkill::set_element_type(v63, v67);
            v68 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
            proto_log::PlayerLogBodyAvatarUpgradeActiveSkill::set_skill_id(v68, *(_DWORD *)(v5 + 96));
            v69 = std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 256));
            if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyAvatarUpgradeActiveSkill::set_skill_level(v69, *level);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v85, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill,void>(
              (std::shared_ptr<google::protobuf::Message> *const)&__r,
              (const std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill> *)(v5 + 256));
            Player::printStatLog(playera, (MessagePtr *)&__r, &v85, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v85);
            v10 = 0;
            std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyAvatarUpgradeActiveSkill> *const)(v5 + 256));
            std::shared_ptr<proto::AvatarSkillChangeNotify>::~shared_ptr((std::shared_ptr<proto::AvatarSkillChangeNotify> *const)(v5 + 224));
          }
        }
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v5 + 288));
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v86,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/skill/skill_comp.cpp",
          "upgradeAvatarSkill",
          628);
        v36 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)&v86,
                (const char (*)[10])"skill_id:");
        v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v36,
                (const unsigned int *)(v5 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v37, thisa->avatar_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
        v10 = 110;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v86,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "upgradeAvatarSkill",
        621);
      v31 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              (common::milog::MiLogStream *const)&v86,
              (const char (*)[49])"findProudSkillConfig fail, proud_skill_group_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v5 + 80));
      v33 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v32, (const char (*)[8])" level:");
      if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      val = *level + 1;
      v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v34, thisa->avatar_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v86);
      v10 = -1;
    }
  }
LABEL_105:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  result = v10;
  if ( v87 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 692: range 0000000018020EBC-0000000018021BF8
__int64 __fastcall SkillComp::forceSetAllSkillLevel(SkillComp *const this, Player *player, uint32_t level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  AvatarSkillExcelConfigMgr *p_avatar_skill_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > >::pointer v14; // rdx
  uint32_t *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  TalentComp *TalentComp; // rdi
  uint32_t v20; // ecx
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  uint64_t Guid; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  uint32_t SkillDepotId; // eax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t new_level; // [rsp+20h] [rbp-1F0h]
  uint32_t old_level; // [rsp+24h] [rbp-1ECh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-1E8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-1E0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self __y; // [rsp+38h] [rbp-1D8h] BYREF
  std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+40h] [rbp-1D0h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-1C8h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+50h] [rbp-1C0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+60h] [rbp-1B0h]
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+68h] [rbp-1A8h]
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *proud_skill_level_map; // [rsp+70h] [rbp-1A0h]
  const std::map<unsigned int,unsigned int> *skill_level_map_0; // [rsp+78h] [rbp-198h]
  std::shared_ptr<Config> v45; // [rsp+80h] [rbp-190h] BYREF
  std::shared_ptr<const google::protobuf::Message> v46; // [rsp+90h] [rbp-180h] BYREF
  common::milog::MiLogStream v47; // [rsp+A0h] [rbp-170h] BYREF
  common::milog::MiLogStream v48; // [rsp+C0h] [rbp-150h] BYREF
  common::milog::MiLogStream v49; // [rsp+E0h] [rbp-130h] BYREF
  common::milog::MiLogStream v50; // [rsp+100h] [rbp-110h] BYREF
  char v51[240]; // [rsp+120h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 12 depot_id:693 48 4 24 proud_skill_group_id:718 64 4 13 max_level:739 80 4 9 level:691 9"
                        "6 8 14 depot_iter:700 128 8 8 iter:725 160 16 14 notify_ptr:757";
  *(_QWORD *)(v3 + 16) = SkillComp::forceSetAllSkillLevel;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 80) = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 32) = Avatar::getSkillDepotId(this->avatar_);
  if ( *(_DWORD *)(v3 + 32) )
  {
    *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v3 + 96) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                           &this->depot_skill_level_map_,
                                                                                           (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 32));
    __y._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v3 + 96),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "forceSetAllSkillLevel",
        703);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v50,
             (const char (*)[30])"depot_id not found, depot_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v50);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      skill_level_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v3 + 96))->second;
      __for_range = skill_level_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(skill_level_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        skill_id = std::get<0ul,unsigned int const,unsigned int>(__in);
        skill_level = std::get<1ul,unsigned int const,unsigned int>(__in);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v45);
        p_avatar_skill_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.avatar_skill_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                                    p_avatar_skill_config_mgr,
                                    *skill_id);
        std::shared_ptr<Config>::~shared_ptr(&v45);
        if ( avatar_skill_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = avatar_skill_config_ptr->proud_skill_group_id;
          if ( *(_DWORD *)(v3 + 48) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v46);
            proud_skill_level_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_skill_level_map;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
            *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(proud_skill_level_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
            __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(proud_skill_level_map)._M_cur;
            if ( !std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 128),
                    (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)&__y) )
            {
              skill_level_map_0 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 128))->second;
              if ( std::map<unsigned int,unsigned int>::empty(skill_level_map_0) )
              {
                common::milog::MiLogStream::create(
                  &v48,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/skill/skill_comp.cpp",
                  "forceSetAllSkillLevel",
                  734);
                v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                        &v48,
                        (const char (*)[48])"skill_level_map is empty, proud_skill_group_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v48);
              }
              else
              {
                std::map<unsigned int,unsigned int>::rbegin((const std::map<unsigned int,unsigned int> *const)&__y);
                v14 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > > *const)&__y);
                if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v3 + 64) = v14->first;
                v15 = (uint32_t *)std::min<unsigned int>(
                                    (const unsigned int *)(v3 + 80),
                                    (const unsigned int *)(v3 + 64));
                if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                new_level = *v15;
                if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( new_level != *skill_level )
                {
                  if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  old_level = *skill_level;
                  *skill_level = new_level;
                  common::milog::MiLogStream::create(
                    &v49,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/skill/skill_comp.cpp",
                    "forceSetAllSkillLevel",
                    748);
                  v16 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          &v49,
                          (const char (*)[40])"force set avatar skill level, skill_id:");
                  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, skill_id);
                  v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v17,
                          (const char (*)[14])" skill_level:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, skill_level);
                  common::milog::MiLogStream::~MiLogStream(&v49);
                  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  TalentComp = Avatar::getTalentComp(this->avatar_);
                  if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3)
                                                                                  + 0x7FFF8000) )
                  {
                    TalentComp = (TalentComp *)skill_level;
                    __asan_report_load4();
                  }
                  v20 = *skill_level;
                  if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3)
                                                                               + 0x7FFF8000) )
                  {
                    TalentComp = (TalentComp *)skill_id;
                    __asan_report_load4();
                  }
                  if ( TalentComp::setSkillTalent(TalentComp, *skill_id, v20) )
                  {
                    common::milog::MiLogStream::create(
                      &v50,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/skill/skill_comp.cpp",
                      "forceSetAllSkillLevel",
                      751);
                    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      &v50,
                      (const char (*)[20])"setSkillTalent fail");
                    common::milog::MiLogStream::~MiLogStream(&v50);
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  if ( Avatar::isInited(this->avatar_) )
                  {
                    common::tools::perf::make_shared<proto::AvatarSkillChangeNotify>();
                    v21 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    Guid = Avatar::getGuid(this->avatar_);
                    proto::AvatarSkillChangeNotify::set_avatar_guid(v21, Guid);
                    v23 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    EntityId = Entity::getEntityId((const Entity *const)this->avatar_);
                    proto::AvatarSkillChangeNotify::set_entity_id(v23, EntityId);
                    v25 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    SkillDepotId = Avatar::getSkillDepotId(this->avatar_);
                    proto::AvatarSkillChangeNotify::set_skill_depot_id(v25, SkillDepotId);
                    v27 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    if ( *(_BYTE *)(((unsigned __int64)skill_id >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)skill_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_id >> 3)
                                                                                 + 0x7FFF8000) )
                    {
                      __asan_report_load4();
                    }
                    proto::AvatarSkillChangeNotify::set_avatar_skill_id(v27, *skill_id);
                    v28 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    proto::AvatarSkillChangeNotify::set_old_level(v28, old_level);
                    v29 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    proto::AvatarSkillChangeNotify::set_cur_level(v29, *(_DWORD *)(v3 + 80));
                    std::dynamic_pointer_cast<google::protobuf::Message const,proto::AvatarSkillChangeNotify>((const std::shared_ptr<proto::AvatarSkillChangeNotify> *)&v46);
                    Player::sendMessage(player, &v46, 0LL);
                    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v46);
                    std::shared_ptr<proto::AvatarSkillChangeNotify>::~shared_ptr((std::shared_ptr<proto::AvatarSkillChangeNotify> *const)(v3 + 160));
                  }
                }
              }
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/skill/skill_comp.cpp",
            "forceSetAllSkillLevel",
            714);
          v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                  &v47,
                  (const char (*)[43])"findAvatarSkillExcelConfig fail, skill_id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, skill_id);
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v12, this->avatar_);
          common::milog::MiLogStream::~MiLogStream(&v47);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v50,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "forceSetAllSkillLevel",
      696);
    v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v50, (const char (*)[14])"depot_id is 0");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v6, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v50);
    result = 0xFFFFFFFFLL;
  }
  if ( v51 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 773: range 0000000018021BFA-0000000018022F6B
__int64 __fastcall SkillComp::forceSetSkillLevel(SkillComp *const this, Player *player, uint32_t level, int skill_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::const_reference v14; // rdx
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::const_reference v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > >::pointer v29; // rdx
  uint32_t *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  TalentComp *TalentComp; // rcx
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // r14
  uint64_t Guid; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // r14
  uint32_t EntityId; // eax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // r14
  uint32_t SkillDepotId; // eax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  uint32_t new_level; // [rsp+20h] [rbp-1A0h]
  google::protobuf::uint32 old_level; // [rsp+24h] [rbp-19Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self __y; // [rsp+28h] [rbp-198h] BYREF
  std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+30h] [rbp-190h]
  const data::AvatarSkillDepotExcelConfig *skill_depot_config_ptr; // [rsp+38h] [rbp-188h]
  uint32_t *skill_level; // [rsp+40h] [rbp-180h]
  const data::AvatarSkillExcelConfig *avatar_skill_config_ptr; // [rsp+48h] [rbp-178h]
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *proud_skill_level_map; // [rsp+50h] [rbp-170h]
  const std::map<unsigned int,unsigned int> *config_skill_level_map; // [rsp+58h] [rbp-168h]
  std::shared_ptr<const google::protobuf::Message> v55; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v56; // [rsp+70h] [rbp-150h] BYREF
  char v57[304]; // [rsp+90h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 48 4 12 depot_id:774 64 4 12 skill_id:793 80 4 24 proud_skill_group_id:841 96 4 13 max_level:8"
                        "61 112 4 9 level:772 128 8 14 depot_iter:780 160 8 14 skill_iter:827 192 8 8 iter:848 224 16 14 notify_ptr:877";
  *(_QWORD *)(v4 + 16) = SkillComp::forceSetSkillLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -202178560;
  *(_DWORD *)(v4 + 112) = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 48) = Avatar::getSkillDepotId(this->avatar_);
  if ( !*(_DWORD *)(v4 + 48) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      777);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v56, (const char (*)[14])"depot_id is 0");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    result = 0xFFFFFFFFLL;
    goto LABEL_80;
  }
  *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v4 + 128) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                          &this->depot_skill_level_map_,
                                                                                          (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 48));
  __y._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v4 + 128),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      783);
    v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v56,
           (const char (*)[30])"depot_id not found, depot_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_13:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    result = 0xFFFFFFFFLL;
    goto LABEL_80;
  }
  skill_level_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v4 + 128))->second;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
  skill_depot_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillDepotExcelConfig(
                             &v11->design_config.txt_config_mgr.avatar_skill_config_mgr,
                             *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
  if ( !skill_depot_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      790);
    v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v56,
            (const char (*)[49])"findAvatarSkillDepotExcelConfig fails, depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    result = 0xFFFFFFFFLL;
    goto LABEL_80;
  }
  *(_DWORD *)(v4 + 64) = 0;
  if ( skill_type == 3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&skill_depot_config_ptr->energy_skill >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)skill_depot_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&skill_depot_config_ptr->energy_skill >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 64) = skill_depot_config_ptr->energy_skill;
  }
  else
  {
    if ( skill_type > 3 )
    {
LABEL_34:
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "forceSetSkillLevel",
        823);
      v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v56,
              (const char (*)[20])"invalid skill_type:");
      *(_DWORD *)(v4 + 96) = skill_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 96));
      common::milog::MiLogStream::~MiLogStream(&v56);
      result = 0xFFFFFFFFLL;
      goto LABEL_80;
    }
    if ( skill_type == 1 )
    {
      if ( !std::vector<unsigned int>::size(&skill_depot_config_ptr->skills) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/skill/skill_comp.cpp",
          "forceSetSkillLevel",
          800);
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v56,
                (const char (*)[34])"SKILL_NORMAL not found, depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v56);
        result = 0xFFFFFFFFLL;
        goto LABEL_80;
      }
      v14 = std::vector<unsigned int>::operator[](&skill_depot_config_ptr->skills, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = *v14;
    }
    else
    {
      if ( skill_type != 2 )
        goto LABEL_34;
      if ( std::vector<unsigned int>::size(&skill_depot_config_ptr->skills) <= 1 )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/skill/skill_comp.cpp",
          "forceSetSkillLevel",
          810);
        v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v56,
                (const char (*)[33])"SKILL_SMALL not found, depot_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v56);
        result = 0xFFFFFFFFLL;
        goto LABEL_80;
      }
      v16 = std::vector<unsigned int>::operator[](&skill_depot_config_ptr->skills, 1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 64) = *v16;
    }
  }
  *(std::map<unsigned int,unsigned int>::iterator *)(v4 + 160) = std::map<unsigned int,unsigned int>::find(
                                                                   skill_level_map,
                                                                   (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
  __y._M_node = std::map<unsigned int,unsigned int>::end(skill_level_map)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v4 + 160),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__y) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      830);
    v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v56, (const char (*)[18])"invalid skill_id:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 64));
    v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", depot_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v56);
    result = 0xFFFFFFFFLL;
    goto LABEL_80;
  }
  skill_level = &std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v4 + 160))->second;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
  avatar_skill_config_ptr = data::AvatarSkillExcelConfigMgrBase::findAvatarSkillExcelConfig(
                              &v21->design_config.txt_config_mgr.avatar_skill_config_mgr,
                              *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
  if ( !avatar_skill_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      838);
    v22 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            &v56,
            (const char (*)[43])"findAvatarSkillExcelConfig fail, skill_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_13;
  }
  if ( *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&avatar_skill_config_ptr->proud_skill_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 80) = avatar_skill_config_ptr->proud_skill_group_id;
  if ( !*(_DWORD *)(v4 + 80) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      844);
    v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v56,
            (const char (*)[37])"proud_skill_group_id is 0, skill_id:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_46:
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v24, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v56);
    result = 0LL;
    goto LABEL_80;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  proud_skill_level_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_skill_level_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v4 + 192) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(proud_skill_level_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v4 + 80));
  __y._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Base_ptr)std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(proud_skill_level_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v4 + 192),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)&__y) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      851);
    v25 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v56,
            (const char (*)[54])"proud_skill_group_id not found, proud_skill_group_id:");
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 80));
    v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])", skill_id:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_46;
  }
  config_skill_level_map = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v4 + 192))->second;
  if ( std::map<unsigned int,unsigned int>::empty(config_skill_level_map) )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "forceSetSkillLevel",
      857);
    v28 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v56,
            (const char (*)[55])"config_skill_level_map is empty, proud_skill_group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v56);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::map<unsigned int,unsigned int>::rbegin((const std::map<unsigned int,unsigned int> *const)&__y);
    v29 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > > *const)&__y);
    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v4 + 96) = v29->first;
    v30 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v4 + 112), (const unsigned int *)(v4 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    new_level = *v30;
    if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( new_level == *skill_level )
    {
      result = 0LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      old_level = *skill_level;
      *skill_level = new_level;
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/skill/skill_comp.cpp",
        "forceSetSkillLevel",
        869);
      v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v56,
              (const char (*)[40])"force set avatar skill level, skill_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 64));
      v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])" skill_level:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, skill_level);
      common::milog::MiLogStream::~MiLogStream(&v56);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      TalentComp = Avatar::getTalentComp(this->avatar_);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( TalentComp::setSkillTalent(TalentComp, *(_DWORD *)(v4 + 64), *skill_level) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/skill/skill_comp.cpp",
          "forceSetSkillLevel",
          872);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v56, (const char (*)[20])"setSkillTalent fail");
        common::milog::MiLogStream::~MiLogStream(&v56);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Avatar::isInited(this->avatar_) )
      {
        common::tools::perf::make_shared<proto::AvatarSkillChangeNotify>();
        v35 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Guid = Avatar::getGuid(this->avatar_);
        proto::AvatarSkillChangeNotify::set_avatar_guid(v35, Guid);
        v37 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EntityId = Entity::getEntityId((const Entity *const)this->avatar_);
        proto::AvatarSkillChangeNotify::set_entity_id(v37, EntityId);
        v39 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SkillDepotId = Avatar::getSkillDepotId(this->avatar_);
        proto::AvatarSkillChangeNotify::set_skill_depot_id(v39, SkillDepotId);
        v41 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        proto::AvatarSkillChangeNotify::set_avatar_skill_id(v41, *(_DWORD *)(v4 + 64));
        v42 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        proto::AvatarSkillChangeNotify::set_old_level(v42, old_level);
        v43 = std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::AvatarSkillChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        proto::AvatarSkillChangeNotify::set_cur_level(v43, *(_DWORD *)(v4 + 112));
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::AvatarSkillChangeNotify>((const std::shared_ptr<proto::AvatarSkillChangeNotify> *)&v55);
        Player::sendMessage(player, &v55, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v55);
        std::shared_ptr<proto::AvatarSkillChangeNotify>::~shared_ptr((std::shared_ptr<proto::AvatarSkillChangeNotify> *const)(v4 + 224));
      }
      result = 0LL;
    }
  }
LABEL_80:
  if ( v57 == (char *)v4 )
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

// Line 891: range 0000000018022F6C-000000001802344E
void __cdecl SkillComp::getProtoSkillLevelMap(
        SkillComp *const this,
        google::protobuf::Map<unsigned int,unsigned int> *proto_skill_level_map)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::pair<unsigned int const,unsigned int> *v8; // rax
  std::pair<unsigned int const,unsigned int> *v9; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v10; // r13d
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *v11; // rsi
  unsigned int *v12; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v13; // rdx
  char v14; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const std::map<unsigned int,unsigned int> *skill_level_map; // [rsp+28h] [rbp-C8h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-C0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *skill_id; // [rsp+38h] [rbp-B8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *level; // [rsp+40h] [rbp-B0h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-A8h] BYREF
  common::milog::MiLogStream v23; // [rsp+50h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 depot_id:892 64 8 14 depot_iter:899";
  *(_QWORD *)(v2 + 16) = SkillComp::getProtoSkillLevelMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Avatar::getSkillDepotId(this->avatar_);
  if ( *(_DWORD *)(v2 + 48) )
  {
    *(std::map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::map<unsigned int,unsigned int>>::find(
                                                                                           &this->depot_skill_level_map_,
                                                                                           (const std::map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v2 + 48));
    __in = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)(v2 + 64),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::_Self *)&__in) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/skill/skill_comp.cpp",
        "getProtoSkillLevelMap",
        902);
      v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v23,
             (const char (*)[30])"depot_id not found, depot_id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v7, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      skill_level_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> > > *const)(v2 + 64))->second;
      __for_range = skill_level_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(skill_level_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(skill_level_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v8 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        v9 = v8;
        if ( ((unsigned __int8)v8 & 7) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v8 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v8, 8LL);
        }
        __in = *v9;
        skill_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
        level = std::get<1ul,unsigned int const,unsigned int>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v10 = *level;
        v11 = skill_id;
        v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_skill_level_map, skill_id);
        v13 = v12;
        v14 = *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000);
        if ( v14 != 0 && (char)(((unsigned __int8)v12 & 7) + 3) >= v14 )
        {
          LOBYTE(v11) = v14 != 0;
          __asan_report_store4(v12, v11, (_BYTE)v12);
        }
        *v13 = v10;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/skill/skill_comp.cpp",
      "getProtoSkillLevelMap",
      895);
    v5 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v23, (const char (*)[14])"depot_id is 0");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v2 )
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

// Line 915: range 0000000018023450-00000000180235C7
uint32_t __cdecl SkillComp::getTotalLevelupCount(const SkillComp *const this)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v1; // eax
  uint32_t total_levelup_count; // [rsp+1Ch] [rbp-64h]
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-50h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-48h] BYREF
  const std::map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+40h] [rbp-40h]
  const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > *v9; // [rsp+48h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *_; // [rsp+50h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *skill_level_map; // [rsp+58h] [rbp-28h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-20h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+68h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *__0; // [rsp+70h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *skill_level; // [rsp+78h] [rbp-8h]

  total_levelup_count = 0;
  __for_range = &this->depot_skill_level_map_;
  __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::begin(&this->depot_skill_level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::map<unsigned int,unsigned int>>::end(&this->depot_skill_level_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v9);
    skill_level_map = (std::tuple_element<1,const std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v9);
    __for_range_0 = skill_level_map;
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(skill_level_map)._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      __0 = std::get<0ul,unsigned int const,unsigned int>(v13);
      skill_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
      if ( *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)skill_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)skill_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *skill_level )
        v1 = *skill_level - 1;
      else
        v1 = 0;
      total_levelup_count += v1;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  return total_levelup_count;
};
