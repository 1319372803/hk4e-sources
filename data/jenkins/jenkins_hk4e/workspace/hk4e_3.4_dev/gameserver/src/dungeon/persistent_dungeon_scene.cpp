// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/persistent_dungeon_scene.cpp

// Line 23: range 000000001557489A-0000000015574C6B
int32_t __cdecl PersistentDungeonScene::fromBin(PersistentDungeonScene *const this, const proto::SceneBin *scene_bin)
{
  unsigned int *v3; // rcx
  unsigned int *v4; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v5; // rax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int *v11; // rcx
  unsigned int *v12; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v13; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int v19; // [rsp+10h] [rbp-70h] BYREF
  unsigned int val; // [rsp+14h] [rbp-6Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::WayPoint>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  google::protobuf::RepeatedPtrField<proto::WayPoint>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const proto::DungeonSceneBin *dungeon_scene_bin; // [rsp+28h] [rbp-58h]
  const google::protobuf::RepeatedPtrField<proto::WayPoint> *__for_range; // [rsp+30h] [rbp-50h]
  const google::protobuf::RepeatedPtrField<proto::WayPoint> *__for_range_0; // [rsp+38h] [rbp-48h]
  const proto::WayPoint *proto_slip_revive_point; // [rsp+40h] [rbp-40h]
  const proto::WayPoint *proto_way_point; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-30h] BYREF

  if ( Scene::fromBin((Scene *const)this, scene_bin) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "fromBin",
      26);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      &v28,
      (const char (*)[29])"DungeonScene::fromBin failed");
    common::milog::MiLogStream::~MiLogStream(&v28);
    return -1;
  }
  else
  {
    dungeon_scene_bin = proto::SceneBin::dungeon_scene_bin(scene_bin);
    __for_range = proto::DungeonSceneBin::activated_way_point_list(dungeon_scene_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WayPoint>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WayPoint>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::WayPoint const>::operator!=(&__for_begin, &__for_end) )
    {
      proto_way_point = google::protobuf::internal::RepeatedPtrIterator<proto::WayPoint const>::operator*(&__for_begin);
      val = proto::WayPoint::activate_time(proto_way_point);
      v19 = proto::WayPoint::point_id(proto_way_point);
      v5 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
             &this->activated_way_point_map_,
             &v19,
             &val,
             v3,
             v4);
      if ( !v5.second )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/persistent_dungeon_scene.cpp",
          "fromBin",
          34);
        v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
               &v28,
               (const char (*)[68])"PersistentDungeonScene fromBin activated_way_point exist. point_id:");
        val = proto::WayPoint::point_id(proto_way_point);
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
        v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])", dungeon_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->dungeon_id_);
        v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->create_player_uid_);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::WayPoint const>::operator++(&__for_begin);
    }
    __for_range_0 = proto::DungeonSceneBin::activated_slip_revive_list(dungeon_scene_bin);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WayPoint>::begin(__for_range_0).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WayPoint>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::WayPoint const>::operator!=(&__for_begin, &__for_end) )
    {
      proto_slip_revive_point = google::protobuf::internal::RepeatedPtrIterator<proto::WayPoint const>::operator*(&__for_begin);
      val = proto::WayPoint::activate_time(proto_slip_revive_point);
      v19 = proto::WayPoint::point_id(proto_slip_revive_point);
      v13 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
              &this->activated_slip_revive_map_,
              &v19,
              &val,
              v11,
              v12);
      if ( !v13.second )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/persistent_dungeon_scene.cpp",
          "fromBin",
          42);
        v14 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                &v28,
                (const char (*)[70])"PersistentDungeonScene fromBin activated_slip_revive exist. point_id:");
        val = proto::WayPoint::point_id(proto_slip_revive_point);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", dungeon_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->dungeon_id_);
        v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->create_player_uid_);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::WayPoint const>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 50: range 0000000015574C6C-0000000015575065
int32_t __cdecl PersistentDungeonScene::toBin(const PersistentDungeonScene *const this, proto::SceneBin *scene_bin)
{
  common::milog::MiLogStream *v2; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  proto::DungeonSceneBin *dungeon_scene_bin; // [rsp+28h] [rbp-88h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-80h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-78h]
  const std::pair<unsigned int const,unsigned int> *v9; // [rsp+40h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *point_id_0; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *activate_time_0; // [rsp+50h] [rbp-60h]
  proto::WayPoint *proto_slip_revive_point; // [rsp+58h] [rbp-58h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+60h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *point_id; // [rsp+68h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *activate_time; // [rsp+70h] [rbp-40h]
  proto::WayPoint *proto_way_point; // [rsp+78h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+80h] [rbp-30h] BYREF

  if ( PersistentDungeonScene::getIsMarkReset(this) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "toBin",
      53);
    v2 = common::milog::MiLogStream::operator<<<PersistentDungeonScene,(PersistentDungeonScene*)0>(&v17, this);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v2, (const char (*)[25])off_25807F20);
    common::milog::MiLogStream::~MiLogStream(&v17);
    return 0;
  }
  else if ( Scene::toBin((const Scene *const)this, scene_bin) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "toBin",
      58);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v17,
      (const char (*)[27])"DungeonScene::toBin failed");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    dungeon_scene_bin = proto::SceneBin::mutable_dungeon_scene_bin(scene_bin);
    __for_range = &this->activated_way_point_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->activated_way_point_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->activated_way_point_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      point_id = std::get<0ul,unsigned int const,unsigned int>(v13);
      activate_time = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
      proto_way_point = proto::DungeonSceneBin::add_activated_way_point_list(dungeon_scene_bin);
      if ( *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(point_id);
      }
      proto::WayPoint::set_point_id(proto_way_point, *point_id);
      if ( *(_BYTE *)(((unsigned __int64)activate_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)activate_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activate_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(activate_time);
      }
      proto::WayPoint::set_activate_time(proto_way_point, *activate_time);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->activated_slip_revive_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->activated_slip_revive_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      point_id_0 = std::get<0ul,unsigned int const,unsigned int>(v9);
      activate_time_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v9);
      proto_slip_revive_point = proto::DungeonSceneBin::add_activated_slip_revive_list(dungeon_scene_bin);
      if ( *(_BYTE *)(((unsigned __int64)point_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)point_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(point_id_0);
      }
      proto::WayPoint::set_point_id(proto_slip_revive_point, *point_id_0);
      if ( *(_BYTE *)(((unsigned __int64)activate_time_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)activate_time_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activate_time_0 >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(activate_time_0);
      }
      proto::WayPoint::set_activate_time(proto_slip_revive_point, *activate_time_0);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 79: range 0000000015575066-00000000155752A8
int32_t __cdecl PersistentDungeonScene::init(PersistentDungeonScene *const this, const SceneInitParam *init_param)
{
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)init_param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)init_param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)init_param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(init_param);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         p_dungeon_config_mgr,
                         init_param->dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->involve_type);
    }
    if ( dungeon_config_ptr->involve_type == INVOLVE_ONLY_SINGLE )
    {
      return DungeonScene::init(this, init_param);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/persistent_dungeon_scene.cpp",
        "init",
        89);
      v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v10,
             (const char (*)[53])"init persistent dungeon fails, invalid involve_type:");
      v6 = common::milog::MiLogStream::operator<<<data::InvolveType,(data::InvolveType*)0>(
             v5,
             &dungeon_config_ptr->involve_type);
      v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])", dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &init_param->dungeon_id);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "init",
      83);
    v3 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v10,
           (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &init_param->dungeon_id);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 96: range 00000000155752AA-00000000155757D8
int32_t __cdecl PersistentDungeonScene::saveGroupToBin(PersistentDungeonScene *const this, GroupPtr *p_group_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  SceneBlockGroupComp *BlockGroupComp; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t GroupId; // eax
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  Player *v25; // rax
  uint32_t SceneId; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  BlockDataMgr *block_data_mgr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Group> v30; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-90h] BYREF
  char v32[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 player_ptr:99";
  *(_QWORD *)(v2 + 16) = PersistentDungeonScene::saveGroupToBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( std::operator==<Group>(p_group_ptr, 0LL) )
  {
    v5 = -1;
  }
  else
  {
    DungeonScene::getCreatePlayer((const DungeonScene *const)(v2 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/persistent_dungeon_scene.cpp",
        "saveGroupToBin",
        102);
      v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v31, (const char (*)[17])"player not exist");
      val = Scene::getSceneId((const Scene *const)this);
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->create_player_uid_);
      common::milog::MiLogStream::~MiLogStream(&v31);
      v5 = -1;
    }
    else
    {
      BlockGroupComp = Scene::getBlockGroupComp((Scene *const)this);
      v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
      GroupId = Group::getGroupId(v10);
      if ( SceneBlockGroupComp::isGroupDelayUnregister(BlockGroupComp, GroupId) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/dungeon/persistent_dungeon_scene.cpp",
          "saveGroupToBin",
          109);
        v12 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
        v13 = common::milog::MiLogStream::operator<<<Group,(Group*)0>(&v31, v12);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v13, (const char (*)[36])off_258080A0);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v5 = 0;
      }
      else if ( PersistentDungeonScene::getIsMarkReset(this) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/persistent_dungeon_scene.cpp",
          "saveGroupToBin",
          115);
        v14 = common::milog::MiLogStream::operator<<<PersistentDungeonScene,(PersistentDungeonScene*)0>(&v31, this);
        v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v14, (const char (*)[27])off_25808100);
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        operator<<(v15, v16);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v5 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/persistent_dungeon_scene.cpp",
          "saveGroupToBin",
          118);
        v17 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v31,
                (const char (*)[46])"[PERSISTENT_DUNGEON] saveGroupToBin group_id:");
        v18 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_group_ptr);
        val = Group::getGroupId(v18);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v20 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v19, (const char (*)[12])", inst_id: ");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->inst_id_);
        v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])", dungeon_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->dungeon_id_);
        v24 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v23, (const char (*)[7])", uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->create_player_uid_);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        block_data_mgr = Player::getBlockDataMgr(v25);
        std::shared_ptr<Group>::shared_ptr(&v30, p_group_ptr);
        SceneId = Scene::getSceneId((const Scene *const)this);
        v5 = BlockDataMgr::saveGroupBin(block_data_mgr, SceneId, &v30);
        std::shared_ptr<Group>::~shared_ptr(&v30);
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 32));
  }
  result = v5;
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

// Line 125: range 00000000155757DA-0000000015575AA6
std::pair<int,proto::GroupBin*> __cdecl PersistentDungeonScene::findGroupBin(
        PersistentDungeonScene *const this,
        uint32_t group_id)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  common::milog::MiLogStream *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::pair<int,std::nullptr_t> v7; // rax
  int first; // r12d
  proto::GroupBin *second; // r13
  Player *v10; // rax
  uint32_t SceneId; // eax
  std::pair<int,proto::GroupBin*> GroupBin; // rax
  proto::GroupBin *v13; // rdx
  int v14; // eax
  unsigned __int64 v15; // [rsp+8h] [rbp-E8h]
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  __int64 __y; // [rsp+30h] [rbp-C0h] BYREF
  BlockDataMgr *block_data_mgr; // [rsp+38h] [rbp-B8h]
  std::pair<int,std::nullptr_t> __p; // [rsp+40h] [rbp-B0h] BYREF
  std::pair<int,proto::GroupBin*> v20; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-90h] BYREF
  char v22[112]; // [rsp+80h] [rbp-70h] BYREF
  std::pair<int,proto::GroupBin*> result; // 0:eax.4,8:rdx.8

  v15 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v15 = v2;
  }
  *(_QWORD *)v15 = 1102416563LL;
  *(_QWORD *)(v15 + 8) = "1 32 16 14 player_ptr:126";
  *(_QWORD *)(v15 + 16) = PersistentDungeonScene::findGroupBin;
  v3 = v15 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  DungeonScene::getCreatePlayer((const DungeonScene *const)(v15 + 32));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v15 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "findGroupBin",
      129);
    v4 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"player not exist");
    val = Scene::getSceneId((const Scene *const)this);
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->create_player_uid_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    __y = 0LL;
    val = -1;
    v7 = std::make_pair<int,decltype(nullptr)>((int *)&val, &__y);
    __p.first = v7.first;
    __p.second = v7.second;
    std::pair<int,proto::GroupBin *>::pair<int,decltype(nullptr),true>(&v20, &__p);
    first = v20.first;
    second = v20.second;
  }
  else
  {
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v15 + 32));
    block_data_mgr = Player::getBlockDataMgr(v10);
    SceneId = Scene::getSceneId((const Scene *const)this);
    GroupBin = BlockDataMgr::findGroupBin(block_data_mgr, SceneId, group_id);
    first = GroupBin.first;
    second = GroupBin.second;
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v15 + 32));
  v13 = second;
  if ( v22 == (char *)v15 )
  {
    *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v15 = 1172321806LL;
    *(_QWORD *)((v15 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  v14 = first;
  result.second = v13;
  result.first = v14;
  return result;
};

// Line 137: range 0000000015575AA8-0000000015575E01
__int64 __fastcall PersistentDungeonScene::clearGroupBin(PersistentDungeonScene *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Player *v16; // rax
  uint32_t v17; // r14d
  uint32_t SceneId; // eax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  BlockDataMgr *block_data_mgr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:136 64 16 14 player_ptr:138";
  *(_QWORD *)(v2 + 16) = PersistentDungeonScene::clearGroupBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  DungeonScene::getCreatePlayer((const DungeonScene *const)(v2 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "clearGroupBin",
      141);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v22, (const char (*)[17])"player not exist");
    val = Scene::getSceneId((const Scene *const)this);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->create_player_uid_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v8 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "clearGroupBin",
      144);
    v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v22,
           (const char (*)[45])"[PERSISTENT_DUNGEON] clearGroupBin group_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])", inst_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->inst_id_);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])", dungeon_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->dungeon_id_);
    v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &this->create_player_uid_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    block_data_mgr = Player::getBlockDataMgr(v16);
    v17 = *(_DWORD *)(v2 + 48);
    SceneId = Scene::getSceneId((const Scene *const)this);
    v8 = BlockDataMgr::clearGroupBin(block_data_mgr, SceneId, v17);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v8;
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
  return result;
};

// Line 151: range 0000000015575E02-0000000015576203
__int64 __fastcall PersistentDungeonScene::saveGroupByMUIP(PersistentDungeonScene *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Player *v19; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  BlockDataMgr *block_data_mgr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v23; // [rsp+20h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 group_id:150 64 16 14 player_ptr:152";
  *(_QWORD *)(v2 + 16) = PersistentDungeonScene::saveGroupByMUIP;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = group_id;
  DungeonScene::getCreatePlayer((const DungeonScene *const)(v2 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "saveGroupByMUIP",
      155);
    v5 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v23, (const char (*)[17])"player not exist");
    val = Scene::getSceneId((const Scene *const)this);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->create_player_uid_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = -1;
  }
  else if ( PersistentDungeonScene::getIsMarkReset(this) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "saveGroupByMUIP",
      160);
    v9 = common::milog::MiLogStream::operator<<<PersistentDungeonScene,(PersistentDungeonScene*)0>(&v23, this);
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v9, (const char (*)[27])off_25808100);
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    operator<<(v10, v11);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v8 = -1;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "saveGroupByMUIP",
      163);
    v12 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            &v23,
            (const char (*)[47])"[PERSISTENT_DUNGEON] saveGroupByMUIP group_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])", inst_id: ");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->inst_id_);
    v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v15, (const char (*)[14])", dungeon_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->dungeon_id_);
    v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->create_player_uid_);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    block_data_mgr = Player::getBlockDataMgr(v19);
    v8 = BlockDataMgr::forceSaveGroupBinByMUIP(block_data_mgr, *(_DWORD *)(v2 + 48));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v8;
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
  return result;
};

// Line 170: range 0000000015576204-0000000015576643
std::pair<Vector3,Vector3> *__cdecl PersistentDungeonScene::getBornPoint(
        std::pair<Vector3,Vector3> *retstr,
        PersistentDungeonScene *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rbx
  uint32_t v6; // esi
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int v11; // r14d
  unsigned int val; // [rsp+10h] [rbp-120h] BYREF
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+18h] [rbp-118h]
  Vector3 v17; // [rsp+24h] [rbp-10Ch] BYREF
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 18 way_point_pair:178 64 12 12 born_pos:185 96 12 12 born_rot:186 128 16 17 way_point_ptr:182";
  *(_QWORD *)(v2 + 16) = PersistentDungeonScene::getBornPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -202178560;
  scene_script_config_ptr = Scene::getScriptConfig((const Scene *const)this);
  if ( scene_script_config_ptr )
  {
    *(std::pair<unsigned int,unsigned int> *)(v2 + 32) = DungeonScene::findLastestActivatedWayPoint(this);
    if ( !*(_DWORD *)(v2 + 32) )
      goto LABEL_15;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v6 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)
       + 93080;
    if ( *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->baseclass_0[120] >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->baseclass_0[120]);
    }
    JsonConfigMgr::findScenePoint<data::DungeonWayPoint>(
      (const JsonConfigMgr *const)(v2 + 128),
      v6,
      *(_DWORD *)&this->baseclass_0[120]);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( std::operator!=<data::DungeonWayPoint>(0LL, (const std::shared_ptr<data::DungeonWayPoint> *)(v2 + 128)) )
    {
      v7 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      Vector3::Vector3((Vector3 *const)(v2 + 64), &v7->tran_pos);
      v8 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      Vector3::Vector3((Vector3 *const)(v2 + 96), &v8->tran_rot);
      if ( Vector3::isZero((const Vector3 *const)(v2 + 64)) )
      {
        v9 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Vector3::Vector3(&v17, &v9->pos);
        *(Vector3 *)(v2 + 64) = v17;
        v10 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        Vector3::Vector3(&v17, &v10->rot);
        *(Vector3 *)(v2 + 96) = v17;
      }
      std::make_pair<Vector3 &,Vector3 &>(retstr, (Vector3 *)(v2 + 64), (Vector3 *)(v2 + 96));
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    std::shared_ptr<data::DungeonWayPoint>::~shared_ptr((std::shared_ptr<data::DungeonWayPoint> *const)(v2 + 128));
    if ( v11 == 1 )
LABEL_15:
      std::make_pair<Vector3 const&,Vector3 const&>(
        retstr,
        &scene_script_config_ptr->born_pos,
        &scene_script_config_ptr->born_rot);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/persistent_dungeon_scene.cpp",
      "getBornPoint",
      174);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v19,
           (const char (*)[40])"fail to find script_config, dungeon_id:");
    val = DungeonScene::getDungeonId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::pair<Vector3,Vector3>::pair<Vector3,Vector3,true>(retstr);
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return retstr;
};

// Line 200: range 0000000015576644-0000000015576A91
void __fastcall PersistentDungeonScene::resetPlayerWayPointByMuip(
        PersistentDungeonScene *const this,
        const uint32_t way_point_id,
        const std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *way_point_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // r14d
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  unsigned int *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int *v13; // rax
  unsigned int v14; // ecx
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::const_iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::const_iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  unsigned int *way_point_ts; // [rsp+30h] [rbp-F0h]
  const std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>> *__for_range; // [rsp+38h] [rbp-E8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::type *point_id; // [rsp+40h] [rbp-E0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > >::type *way_point_ptr; // [rsp+48h] [rbp-D8h]
  std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint> > __in; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 now:201 64 4 16 way_point_id:199";
  *(_QWORD *)(v3 + 16) = PersistentDungeonScene::resetPlayerWayPointByMuip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = way_point_id;
  *(_DWORD *)(v3 + 48) = common::tools::TimeUtils::getNow();
  if ( *(_DWORD *)(v3 + 64) )
  {
    v13 = std::map<unsigned int,unsigned int>::operator[](
            &this->activated_way_point_map_,
            (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
    way_point_ts = v13;
    v14 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v13);
    }
    *way_point_ts = v14;
  }
  else
  {
    std::map<unsigned int,unsigned int>::clear(&this->activated_way_point_map_);
    __for_range = way_point_map;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::begin(way_point_map)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<data::DungeonWayPoint>>::end(way_point_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>>::operator*(&__for_begin);
      std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>::pair(&__in, v6);
      point_id = std::get<0ul,unsigned int const,std::shared_ptr<data::DungeonWayPoint>>(&__in);
      way_point_ptr = std::get<1ul,unsigned int const,std::shared_ptr<data::DungeonWayPoint>>(&__in);
      if ( std::operator==<data::DungeonWayPoint>(way_point_ptr, 0LL) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/persistent_dungeon_scene.cpp",
          "resetPlayerWayPointByMuip",
          211);
        v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v23, (const char (*)[24])off_258085A0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, point_id);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v8 = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)way_point_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&v9->is_active >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v9 - 99) & 7) >= *(_BYTE *)(((unsigned __int64)&v9->is_active >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&v9->is_active);
        }
        if ( !v9->is_active )
        {
          v8 = 0;
        }
        else
        {
          v11 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
                  &this->activated_way_point_map_,
                  point_id,
                  (unsigned int *)(v3 + 48),
                  (const unsigned int *)&this->activated_way_point_map_,
                  v10);
          if ( !v11.second )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/persistent_dungeon_scene.cpp",
              "resetPlayerWayPointByMuip",
              218);
            v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v23,
                    (const char (*)[40])off_258085E0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, point_id);
            common::milog::MiLogStream::~MiLogStream(&v23);
            v8 = 1;
          }
          else
          {
            v8 = 2;
          }
        }
      }
      std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>::~pair(&__in);
      if ( v8 )
      {
        if ( v8 != 2 )
          break;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<data::DungeonWayPoint>>>::operator++(&__for_begin);
    }
  }
  if ( v24 == (char *)v3 )
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
