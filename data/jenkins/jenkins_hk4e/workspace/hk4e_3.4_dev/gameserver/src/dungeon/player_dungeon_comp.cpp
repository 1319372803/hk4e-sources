// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/dungeon/player_dungeon_comp.cpp

// Line 56: range 00000000141A0F64-00000000141A15B1
int32_t __cdecl PlayerDungeonComp::fromBin(PlayerDungeonComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const proto::PlayerDungeonCompBin *v5; // rax
  uint32_t enter_time; // ecx
  bool is_join_other_scene; // dl
  std::remove_reference<proto::PlayerDungeonRecordBin&>::type *v8; // rax
  uint32_t time_daily_item_add; // ecx
  uint32_t time_weekly_item_add; // edx
  uint32_t unsettled_dungeon_id; // ecx
  proto::DungeonSerialBossChestBin *v12; // rax
  bool has_quit_target_pos; // cl
  uint32_t v14; // edx
  const proto::VectorBin *v15; // rax
  const proto::VectorBin *v16; // rax
  int32_t result; // eax
  proto::PlayerDungeonRecordBin *record_bin; // [rsp+10h] [rbp-1A0h]
  const google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin> *__for_range; // [rsp+18h] [rbp-198h]
  google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::const_reference p_serial_id; // [rsp+20h] [rbp-190h]
  Vector3 v21; // [rsp+28h] [rbp-188h] BYREF
  Vector3 v22; // [rsp+34h] [rbp-17Ch] BYREF
  google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::const_iterator __for_begin; // [rsp+40h] [rbp-170h] BYREF
  google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::const_iterator __for_end; // [rsp+60h] [rbp-150h] BYREF
  char v25[304]; // [rsp+80h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 144 13 proto_comp:58";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862726] = -202116109;
  v4[536862727] = -202116109;
  v5 = proto::PlayerDataBin::dungeon_bin(player_data_bin);
  proto::PlayerDungeonCompBin::PlayerDungeonCompBin((proto::PlayerDungeonCompBin *const)(v2 + 48), v5);
  enter_time = proto::PlayerDungeonCompBin::last_enter_time((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_dungeon_enter_time_);
  }
  this->last_dungeon_enter_time_ = enter_time;
  is_join_other_scene = proto::PlayerDungeonCompBin::is_join_other_scene((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  if ( *(char *)(((unsigned __int64)&this->is_join_other_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_join_other_scene_);
  this->is_join_other_scene_ = is_join_other_scene;
  record_bin = proto::PlayerDungeonCompBin::mutable_record_bin((proto::PlayerDungeonCompBin *const)(v2 + 48));
  v8 = std::move<proto::PlayerDungeonRecordBin &>(record_bin);
  proto::PlayerDungeonRecordBin::operator=(&this->dungeon_record_bin_, v8);
  time_daily_item_add = proto::PlayerDungeonCompBin::last_time_daily_item_add((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_daily_item_add_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_time_daily_item_add_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_time_daily_item_add_);
  }
  this->last_time_daily_item_add_ = time_daily_item_add;
  time_weekly_item_add = proto::PlayerDungeonCompBin::last_time_weekly_item_add((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_weekly_item_add_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_time_weekly_item_add_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_time_weekly_item_add_);
  }
  this->last_time_weekly_item_add_ = time_weekly_item_add;
  unsettled_dungeon_id = proto::PlayerDungeonCompBin::last_unsettled_dungeon_id((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_unsettled_dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_unsettled_dungeon_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_unsettled_dungeon_id_);
  }
  this->last_unsettled_dungeon_id_ = unsettled_dungeon_id;
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::clear(&this->serial_boss_chest_map_);
  __for_range = proto::PlayerDungeonCompBin::serial_boss_chest_map((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_serial_id = google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::const_iterator::operator*(&__for_begin);
    v12 = std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::operator[](
            &this->serial_boss_chest_map_,
            &p_serial_id->first);
    proto::DungeonSerialBossChestBin::operator=(v12, &p_serial_id->second);
    google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::const_iterator::operator++(&__for_begin);
  }
  has_quit_target_pos = proto::PlayerDungeonCompBin::is_has_quit_target_pos((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_has_quit_target_pos_);
  }
  this->is_has_quit_target_pos_ = has_quit_target_pos;
  v14 = proto::PlayerDungeonCompBin::quit_scene_id((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quit_scene_id_);
  }
  this->quit_scene_id_ = v14;
  v15 = proto::PlayerDungeonCompBin::quit_pos((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  Vector3::Vector3(&v21, v15);
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->quit_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->quit_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->quit_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->quit_pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->quit_pos_, 12LL);
  }
  this->quit_pos_ = v21;
  v16 = proto::PlayerDungeonCompBin::quit_rot((const proto::PlayerDungeonCompBin *const)(v2 + 48));
  Vector3::Vector3(&v22, v16);
  if ( *(char *)(((unsigned __int64)&this->quit_rot_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->quit_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&this->quit_rot_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->quit_rot_, 12LL);
  }
  this->quit_rot_ = v22;
  proto::PlayerDungeonCompBin::~PlayerDungeonCompBin((proto::PlayerDungeonCompBin *const)(v2 + 48));
  result = 0;
  if ( v25 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 84: range 00000000141A15B2-00000000141A15C0
int32_t __cdecl PlayerDungeonComp::init(PlayerDungeonComp *const this)
{
  return 0;
};

// Line 90: range 00000000141A15C2-00000000141A15D0
int32_t __cdecl PlayerDungeonComp::onFirstLogin(PlayerDungeonComp *const this)
{
  return 0;
};

// Line 96: range 00000000141A15D2-00000000141A15E5
int32_t __cdecl PlayerDungeonComp::onLogin(PlayerDungeonComp *const this, bool is_new_player)
{
  return 0;
};

// Line 101: range 00000000141A15E6-00000000141A1973
int32_t __cdecl PlayerDungeonComp::onLogout(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t OwnerUid; // r14d
  char v6; // al
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  DungeonScene *v10; // rax
  GameserverService *v11; // rax
  DungeonMgr *p_dungeon_mgr; // r12
  uint32_t Uid; // eax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>> *__for_range; // [rsp+30h] [rbp-B0h]
  const std::pair<unsigned int const,std::weak_ptr<DungeonScene> > *v19; // [rsp+38h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::weak_ptr<DungeonScene> > >::type *inst_id; // [rsp+40h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<DungeonScene> > >::type *dungeon_scene_wtr; // [rsp+48h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-90h] BYREF
  char v23[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 dungeon_scene_ptr:104";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::onLogout;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->create_dungeon_scene_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::begin(&this->create_dungeon_scene_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::end(&this->create_dungeon_scene_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::weak_ptr<DungeonScene>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<DungeonScene>>,false,false>::operator*(&__for_begin);
    inst_id = std::get<0ul,unsigned int const,std::weak_ptr<DungeonScene>>(v19);
    dungeon_scene_wtr = (std::tuple_element<1,const std::pair<unsigned int const,std::weak_ptr<DungeonScene> > >::type *)std::get<1ul,unsigned int const,std::weak_ptr<DungeonScene>>(v19);
    std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v1 + 32));
    if ( !std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
      goto LABEL_11;
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    OwnerUid = Scene::getOwnerUid((const Scene *const)v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
      v6 = 1;
    else
LABEL_11:
      v6 = 0;
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onLogout",
        107);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v22,
             (const char (*)[31])"onLogout tryChangeOwner, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" ,inst_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, inst_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      DungeonScene::tryChangeOwner(v10);
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::weak_ptr<DungeonScene>>,false,false>::operator++(&__for_begin);
  }
  v11 = ServiceBox::findService<GameserverService>();
  p_dungeon_mgr = &GameserverService::getGameThreadLocal(v11)->dungeon_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  DungeonMgr::playerLogout(p_dungeon_mgr, Uid);
  result = 0;
  if ( v23 == (char *)v1 )
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

// Line 122: range 00000000141A1974-00000000141A1E7E
int32_t __cdecl PlayerDungeonComp::toBin(PlayerDungeonComp *const this, proto::PlayerDataBin *player_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  proto::DungeonSerialBossChestBin *v9; // rax
  proto::VectorBin *v10; // rax
  proto::VectorBin *v11; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  proto::PlayerDungeonCompBin *proto_comp; // [rsp+28h] [rbp-A8h]
  proto::PlayerDungeonRecordBin *record_bin; // [rsp+30h] [rbp-A0h]
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin> *__for_range; // [rsp+38h] [rbp-98h]
  const std::pair<unsigned int const,proto::DungeonSerialBossChestBin> *v18; // [rsp+40h] [rbp-90h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::DungeonSerialBossChestBin> >::type *serial_id; // [rsp+48h] [rbp-88h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::DungeonSerialBossChestBin> >::type *boss_chest_bin; // [rsp+50h] [rbp-80h]
  google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin> *serial_boss_chest_map; // [rsp+58h] [rbp-78h]
  char v22[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 dungeon_ptr:134";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::mutable_dungeon_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_dungeon_enter_time_);
  }
  proto::PlayerDungeonCompBin::set_last_enter_time(proto_comp, this->last_dungeon_enter_time_);
  if ( *(char *)(((unsigned __int64)&this->is_join_other_scene_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_join_other_scene_);
  proto::PlayerDungeonCompBin::set_is_join_other_scene(proto_comp, this->is_join_other_scene_);
  record_bin = proto::PlayerDungeonCompBin::mutable_record_bin(proto_comp);
  proto::PlayerDungeonRecordBin::operator=(record_bin, &this->dungeon_record_bin_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_daily_item_add_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_time_daily_item_add_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_time_daily_item_add_);
  }
  proto::PlayerDungeonCompBin::set_last_time_daily_item_add(proto_comp, this->last_time_daily_item_add_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_weekly_item_add_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_time_weekly_item_add_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_time_weekly_item_add_);
  }
  proto::PlayerDungeonCompBin::set_last_time_weekly_item_add(proto_comp, this->last_time_weekly_item_add_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 32));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::getDungeonResult(v5) == DUNGEON_RESULT_NONE )
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      DungeonId = DungeonScene::getDungeonId(v7);
      proto::PlayerDungeonCompBin::set_last_unsettled_dungeon_id(proto_comp, DungeonId);
    }
  }
  __for_range = &this->serial_boss_chest_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::begin(&this->serial_boss_chest_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::end(&this->serial_boss_chest_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,proto::DungeonSerialBossChestBin>,false>(
            &__for_begin,
            &__for_end) )
  {
    v18 = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::DungeonSerialBossChestBin>,false,false>::operator*(&__for_begin);
    serial_id = std::get<0ul,unsigned int const,proto::DungeonSerialBossChestBin>(v18);
    boss_chest_bin = (std::tuple_element<1,const std::pair<unsigned int const,proto::DungeonSerialBossChestBin> >::type *)std::get<1ul,unsigned int const,proto::DungeonSerialBossChestBin>(v18);
    serial_boss_chest_map = proto::PlayerDungeonCompBin::mutable_serial_boss_chest_map(proto_comp);
    v9 = google::protobuf::Map<unsigned int,proto::DungeonSerialBossChestBin>::operator[](
           serial_boss_chest_map,
           serial_id);
    proto::DungeonSerialBossChestBin::operator=(v9, boss_chest_bin);
    std::__detail::_Node_iterator<std::pair<unsigned int const,proto::DungeonSerialBossChestBin>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_quit_target_pos_);
  }
  proto::PlayerDungeonCompBin::set_is_has_quit_target_pos(proto_comp, this->is_has_quit_target_pos_);
  if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quit_scene_id_);
  }
  proto::PlayerDungeonCompBin::set_quit_scene_id(proto_comp, this->quit_scene_id_);
  v10 = proto::PlayerDungeonCompBin::mutable_quit_pos(proto_comp);
  Vector3::toBin(&this->quit_pos_, v10);
  v11 = proto::PlayerDungeonCompBin::mutable_quit_rot(proto_comp);
  Vector3::toBin(&this->quit_rot_, v11);
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  result = 0;
  if ( v22 == (char *)v2 )
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

// Line 161: range 00000000141A2014-00000000141A603C
std::pair<int,std::shared_ptr<DungeonScene> > *__fastcall PlayerDungeonComp::enterDungeon(
        std::pair<int,std::shared_ptr<DungeonScene> > *retstr,
        PlayerDungeonComp *const this,
        __int32 dungeon_id,
        __int32 enter_scene_id,
        __int32 enter_point_id,
        const std::map<unsigned int,unsigned int> *level_config_id_map,
        EnterDungeonOption enter_dungeon_opt)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isDungeonClosed; // r14
  common::milog::MiLogStream *v13; // rax
  std::pair<proto::Retcode,std::nullptr_t> v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::pair<int,std::nullptr_t> v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::pair<int,std::nullptr_t> v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::pair<int,std::nullptr_t> v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::pair<int,std::nullptr_t> v25; // rax
  PlayerBasicComp *v26; // rax
  uint32_t Level; // ecx
  std::pair<proto::Retcode,std::nullptr_t> v28; // rax
  PlayerMpComp *MpComp; // rax
  PlayerMpComp *v30; // rax
  char v31; // al
  std::pair<proto::Retcode,std::nullptr_t> v32; // rax
  common::milog::MiLogStream *v33; // rcx
  std::pair<int,std::nullptr_t> v34; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::pair<proto::Retcode,std::nullptr_t> v38; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v40; // rcx
  std::pair<proto::Retcode,std::nullptr_t> v41; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  bool isAvatarSystemClosed; // r14
  std::pair<proto::Retcode,std::nullptr_t> v44; // rax
  PlayerAvatarComp *AvatarComp; // r14
  std::pair<int,std::nullptr_t> v46; // rax
  PlayerWorld *v47; // rax
  common::milog::MiLogStream *v48; // r14
  std::pair<proto::Retcode,std::nullptr_t> v49; // rax
  const std::shared_ptr<Avatar> *v50; // rax
  common::milog::MiLogStream *v51; // r14
  std::pair<proto::Retcode,std::nullptr_t> v52; // rax
  int v53; // r14d
  FeatureSwitchMgr *p_feature_switch_mgr; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  std::pair<proto::Retcode,std::nullptr_t> v60; // rax
  int v61; // r14d
  const std::shared_ptr<Player> *v62; // rax
  int v64; // r14d
  Player *v65; // rax
  PlayerBasicComp *v66; // rax
  uint32_t v67; // ecx
  std::pair<proto::Retcode,std::nullptr_t> v68; // rax
  common::milog::MiLogStream *v69; // r14
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // r14
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  std::pair<proto::Retcode,std::nullptr_t> v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // r14
  std::pair<proto::Retcode,std::nullptr_t> v78; // rax
  int v79; // r14d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  uint32_t v81; // r14d
  common::milog::MiLogStream *v82; // r14
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v85; // rax
  std::pair<proto::Retcode,std::nullptr_t> v86; // rax
  std::pair<proto::Retcode,std::nullptr_t> v87; // rax
  std::pair<proto::Retcode,std::nullptr_t> v88; // rax
  char v89; // r14
  PlayerTrialAvatarComp *TrialAvatarComp; // r15
  char v91; // r15
  common::milog::MiLogStream *v92; // r14
  std::pair<int,std::nullptr_t> v93; // rax
  int v94; // r14d
  bool v95; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v96; // rax
  common::milog::MiLogStream *v97; // r14
  std::pair<proto::Retcode,std::nullptr_t> v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // r14
  std::pair<proto::Retcode,std::nullptr_t> v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // r14
  std::pair<proto::Retcode,std::nullptr_t> v106; // rax
  common::milog::MiLogStream *v107; // rax
  std::pair<int,std::nullptr_t> v108; // rax
  GameserverService *v109; // rax
  DungeonMgr *p_dungeon_mgr; // r14
  common::milog::MiLogStream *v111; // rax
  std::pair<proto::Retcode,std::nullptr_t> v112; // rax
  const std::shared_ptr<Player> *v113; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v114; // rax
  DungeonScene *v115; // rax
  common::milog::MiLogStream *v116; // rax
  DungeonScene *v117; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v118; // rax
  uint32_t SceneId; // esi
  char v120; // r14
  PlayerTrialAvatarComp *v121; // r15
  char v122; // r15
  common::milog::MiLogStream *v123; // r14
  std::pair<int,std::nullptr_t> v124; // rax
  int v125; // r14d
  bool v126; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v127; // rax
  std::pair<unsigned int const,unsigned int> *v128; // rax
  std::pair<unsigned int const,unsigned int> *v129; // rdx
  DungeonScene *v130; // rdi
  uint32_t v131; // ecx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v132; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v134; // r14
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  std::pair<int,std::nullptr_t> v137; // rax
  const std::shared_ptr<Player> *v138; // rax
  Player *v139; // rax
  PlayerDungeonComp *DungeonComp; // r14
  common::milog::MiLogStream *v141; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  char v145; // r14
  PlayerTrialAvatarComp *v146; // r15
  char v147; // r15
  common::milog::MiLogStream *v148; // r14
  std::pair<int,std::nullptr_t> v149; // rax
  int v150; // r14d
  bool v151; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v152; // rax
  uint32_t v153; // edi
  common::milog::MiLogStream *v154; // rax
  Player *v155; // rax
  PlayerDungeonComp *v156; // r14
  common::milog::MiLogStream *v157; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  std::string v162; // [rsp+0h] [rbp-5E0h]
  char *v163; // [rsp+0h] [rbp-5E0h]
  const std::map<unsigned int,unsigned int> *level_config_id_mapa; // [rsp+8h] [rbp-5D8h]
  uint32_t enter_point_ida; // [rsp+14h] [rbp-5CCh]
  uint32_t enter_scene_ida; // [rsp+18h] [rbp-5C8h]
  bool is_mul_enter; // [rsp+3Fh] [rbp-5A1h]
  proto::Retcode __x; // [rsp+40h] [rbp-5A0h] BYREF
  uint32_t player_count_0; // [rsp+44h] [rbp-59Ch]
  uint32_t player_count; // [rsp+48h] [rbp-598h]
  uint32_t uid; // [rsp+4Ch] [rbp-594h]
  std::vector<std::shared_ptr<Avatar>>::iterator __for_begin; // [rsp+50h] [rbp-590h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_begin_0; // [rsp+58h] [rbp-588h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+60h] [rbp-580h]
  DungeonCandidateTeam *dungeon_candidate_team; // [rsp+68h] [rbp-578h]
  const std::unordered_map<unsigned int,std::vector<long unsigned int>> *settle_team_avatar_map; // [rsp+70h] [rbp-570h]
  std::vector<std::shared_ptr<Avatar>> *__for_range; // [rsp+78h] [rbp-568h]
  std::vector<std::shared_ptr<Player>> *__for_range_0; // [rsp+80h] [rbp-560h]
  std::vector<std::shared_ptr<Player>> *__for_range_1; // [rsp+88h] [rbp-558h]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+90h] [rbp-550h]
  const std::unordered_map<unsigned int,std::vector<long unsigned int>> *settle_team_avatar_map_0; // [rsp+98h] [rbp-548h]
  const std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+A0h] [rbp-540h]
  const std::unordered_map<unsigned int,std::vector<long unsigned int>> *settle_team_avatar_map_1; // [rsp+A8h] [rbp-538h]
  const std::unordered_map<unsigned int,std::vector<long unsigned int>> *__for_range_4; // [rsp+B0h] [rbp-530h]
  const std::pair<unsigned int const,std::vector<long unsigned int> > *v187; // [rsp+B8h] [rbp-528h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<long unsigned int> > >::type *uid_0; // [rsp+C0h] [rbp-520h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<long unsigned int> > >::type *avatar_guid_vec; // [rsp+C8h] [rbp-518h]
  std::vector<std::shared_ptr<Player>> *__for_range_3; // [rsp+D0h] [rbp-510h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *dungeon_data_type; // [rsp+D8h] [rbp-508h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *level_config_id; // [rsp+E0h] [rbp-500h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+E8h] [rbp-4F8h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> __p; // [rsp+F0h] [rbp-4F0h] BYREF
  std::pair<int,std::nullptr_t> v195; // [rsp+100h] [rbp-4E0h] BYREF
  std::pair<int,std::nullptr_t> v196; // [rsp+110h] [rbp-4D0h] BYREF
  std::pair<int,std::nullptr_t> v197; // [rsp+120h] [rbp-4C0h] BYREF
  std::pair<int,std::nullptr_t> v198; // [rsp+130h] [rbp-4B0h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v199; // [rsp+140h] [rbp-4A0h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v200; // [rsp+150h] [rbp-490h] BYREF
  std::pair<int,std::nullptr_t> v201; // [rsp+160h] [rbp-480h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v202; // [rsp+170h] [rbp-470h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v203; // [rsp+180h] [rbp-460h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v204; // [rsp+190h] [rbp-450h] BYREF
  std::pair<int,std::nullptr_t> v205; // [rsp+1A0h] [rbp-440h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v206; // [rsp+1B0h] [rbp-430h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v207; // [rsp+1C0h] [rbp-420h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v208; // [rsp+1D0h] [rbp-410h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v209; // [rsp+1E0h] [rbp-400h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v210; // [rsp+1F0h] [rbp-3F0h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v211; // [rsp+200h] [rbp-3E0h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v212; // [rsp+210h] [rbp-3D0h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v213; // [rsp+220h] [rbp-3C0h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v214; // [rsp+230h] [rbp-3B0h] BYREF
  std::pair<int,std::nullptr_t> v215; // [rsp+240h] [rbp-3A0h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v216; // [rsp+250h] [rbp-390h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v217; // [rsp+260h] [rbp-380h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v218; // [rsp+270h] [rbp-370h] BYREF
  std::pair<int,std::nullptr_t> v219; // [rsp+280h] [rbp-360h] BYREF
  std::pair<proto::Retcode,std::nullptr_t> v220; // [rsp+290h] [rbp-350h] BYREF
  std::pair<int,std::nullptr_t> v221; // [rsp+2A0h] [rbp-340h] BYREF
  std::string v222; // [rsp+2B0h] [rbp-330h] BYREF
  std::unordered_map<unsigned int,std::vector<long unsigned int>> player_map; // [rsp+2D0h] [rbp-310h] BYREF
  char v224[720]; // [rsp+310h] [rbp-2D0h] BYREF

  *((_DWORD *)&v162._anon_0._M_allocated_capacity + 3) = dungeon_id;
  *((_DWORD *)&v162._anon_0._M_allocated_capacity + 2) = enter_scene_id;
  HIDWORD(v162._anon_0._M_allocated_capacity) = enter_point_id;
  v162._M_string_length = (std::string::size_type)level_config_id_map;
  v7 = (unsigned __int64)v224;
  v162._M_dataplus._M_p = v224;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_4(672LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "17 48 1 10 holder:162 64 4 14 switch_ret:226 80 4 7 ret:355 96 4 14 dungeon_id:158 112 16 17 cur"
                        "_scene_ptr:169 144 16 17 cur_world_ptr:175 176 16 18 cur_avatar_ptr:203 208 16 14 player_ptr:242"
                        " 240 16 21 dungeon_scene_ptr:364 272 16 13 event_ptr:423 304 16 25 cur_dungeon_scene_ptr:462 336"
                        " 16 24 candidate_player_ptr:473 368 16 24 candidate_player_ptr:275 400 24 18 player_ptr_vec:245 "
                        "464 24 18 avatar_ptr_vec:259 528 28 21 enter_dungeon_opt:160 592 48 16 team_uid_set:371";
  *(_QWORD *)(v7 + 16) = PlayerDungeonComp::enterDungeon;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -234556924;
  v9[536862723] = 61956;
  v9[536862724] = 62194;
  v9[536862725] = 62194;
  v9[536862726] = 62194;
  v9[536862727] = 62194;
  v9[536862728] = 62194;
  v9[536862729] = 62194;
  v9[536862730] = 62194;
  v9[536862731] = 62194;
  v9[536862732] = 62194;
  v9[536862733] = -218959360;
  v9[536862734] = 62194;
  v9[536862735] = -218959360;
  v9[536862736] = 62194;
  v9[536862737] = -219020288;
  v9[536862738] = 62194;
  v9[536862740] = -202116109;
  *(_DWORD *)(v7 + 96) = *((_DWORD *)&v162._anon_0._M_allocated_capacity + 3);
  *(EnterDungeonOption *)(v7 + 528) = enter_dungeon_opt;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v222, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v7 + 48), 0x579u, v162);
  std::string::~string(&v222);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v7 + 368));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368));
  isDungeonClosed = FeatureSwitchMgr::isDungeonClosed(&v11->feature_switch_mgr, *(_DWORD *)(v7 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 368));
  if ( isDungeonClosed )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v222,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "enterDungeon",
      165);
    v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            (common::milog::MiLogStream *const)&v222,
            (const char (*)[46])"[FEATURE_SWITCH] dungeon closed, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v7 + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
    __for_end = 0LL;
    __x = RET_FEATURE_CLOSED;
    v14 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
    __p.first = v14.first;
    __p.second = v14.second;
    std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &__p);
    goto LABEL_256;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v7 + 112));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v7 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v222,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "enterDungeon",
      172);
    v15 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)&v222,
            (const char (*)[25])"getCurScene failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)&__x);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
    __for_end = 0LL;
    __x = RET_FAIL;
    v16 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
    v195.first = v16.first;
    v195.second = v16.second;
    std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v195);
    goto LABEL_255;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v7 + 144));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v7 + 144), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v222,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "enterDungeon",
      178);
    v17 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)&v222,
            (const char (*)[25])"getCurWorld fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)&__x);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
    __for_end = 0LL;
    __x = RET_FAIL;
    v18 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
    v196.first = v18.first;
    v196.second = v18.second;
    std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v196);
    goto LABEL_254;
  }
  if ( PlayerDungeonComp::isDestSceneDungeon(this, *(_DWORD *)(v7 + 96)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v222,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "enterDungeon",
      185);
    v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            (common::milog::MiLogStream *const)&v222,
            (const char (*)[24])"duplicated enter, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __x = Player::getUid(this->player_);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)&__x);
    v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v20, (const char (*)[15])" ,dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v7 + 96));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
    __for_end = 0LL;
    __x = RET_SUCC;
    v22 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
    v197.first = v22.first;
    v197.second = v22.second;
    std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v197);
    goto LABEL_254;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v7 + 368));
  v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368));
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v23->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v7 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 368));
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v26 = Player::getBasicComp(this->player_);
    Level = PlayerBasicComp::getLevel(v26);
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->limit_level);
    }
    if ( Level < dungeon_config_ptr->limit_level )
    {
      __for_end = 0LL;
      __x = RET_DUNGEON_ENTER_LEVEL_LIMIT;
      v28 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
      v199.first = v28.first;
      v199.second = v28.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v199);
      goto LABEL_254;
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    if ( dungeon_config_ptr->type != DUNGEON_PLOT && dungeon_config_ptr->type != DUNGEON_DREAMLAND )
      goto LABEL_43;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    if ( PlayerMpComp::isInMpMode(MpComp) )
      goto LABEL_42;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v30 = Player::getMpComp(this->player_);
    if ( !PlayerMpComp::isAllowEnterPlayerEmpty(v30) )
LABEL_42:
      v31 = 1;
    else
LABEL_43:
      v31 = 0;
    if ( v31 )
    {
      __for_end = 0LL;
      __x = RET_DUNGEON_CANNOT_ENTER_PLOT_IN_MP;
      v32 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
      v200.first = v32.first;
      v200.second = v32.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v200);
      goto LABEL_254;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getCurAvatar((Player *const)(v7 + 176));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v7 + 176), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v222,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "enterDungeon",
        206);
      v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              (common::milog::MiLogStream *const)&v222,
              (const char (*)[19])"getCurAvatar fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v33, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
      __for_end = 0LL;
      __x = RET_FAIL;
      v34 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
      v201.first = v34.first;
      v201.second = v34.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v201);
      goto LABEL_253;
    }
    v35 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 176));
    if ( Creature::getLifeState(v35) != LIFE_ALIVE )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v222,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "enterDungeon",
        211);
      v36 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)&v222,
              (const char (*)[20])"avatar is not alive");
      v37 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 176));
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v36, v37);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
      __for_end = 0LL;
      __x = RET_AVATAR_NOT_ALIVE;
      v38 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
      v202.first = v38.first;
      v202.second = v38.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v202);
LABEL_253:
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v7 + 176));
      goto LABEL_254;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v222,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "enterDungeon",
        216);
      v40 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&v222,
              (const char (*)[37])off_252654C0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v40, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
      __for_end = 0LL;
      __x = RET_MP_IN_MP_MODE;
      v41 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
      v203.first = v41.first;
      v203.second = v41.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v203);
      goto LABEL_253;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v7 + 368));
    v42 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368));
    isAvatarSystemClosed = FeatureSwitchMgr::isAvatarSystemClosed(&v42->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 368));
    if ( isAvatarSystemClosed )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v222,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "enterDungeon",
        221);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)&v222,
        (const char (*)[37])"[FEATURE_SWITCH] AvatarSystem closed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
      __for_end = 0LL;
      __x = RET_FEATURE_CLOSED;
      v44 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
      v204.first = v44.first;
      v204.second = v44.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v204);
      goto LABEL_253;
    }
    *(_DWORD *)(v7 + 64) = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    std::function<ForeachPolicy ()(Avatar &)>::function<PlayerDungeonComp::enterDungeon(unsigned int,unsigned int,unsigned int,std::map<unsigned int,unsigned int> const&,EnterDungeonOption)::{lambda(Avatar &)#1},void,void>(
      (std::function<ForeachPolicy(Avatar&)> *const)&v222,
      (PlayerDungeonComp::enterDungeon::<lambda(Avatar&)>)(v7 + 64));
    PlayerAvatarComp::foreachAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v222);
    std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v222);
    if ( *(_DWORD *)(v7 + 64) == 142 )
    {
      __for_end = 0LL;
      v46 = std::make_pair<int &,decltype(nullptr)>((int *)(v7 + 64), &__for_end);
      v205.first = v46.first;
      v205.second = v46.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v205);
      goto LABEL_253;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    toThisPtr<Player>((Player *)(v7 + 208));
    is_mul_enter = 0;
    v47 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 144));
    dungeon_candidate_team = PlayerWorld::getDungeonCandidateTeam(v47);
    std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v7 + 400));
    DungeonCandidateTeam::getAllPlayerPtrVec(dungeon_candidate_team, (std::vector<std::shared_ptr<Player>> *)(v7 + 400));
    if ( DungeonCandidateTeam::isVaild(dungeon_candidate_team) )
    {
      player_count = DungeonCandidateTeam::getPlayerCount(dungeon_candidate_team);
      if ( !player_count )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v222,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "enterDungeon",
          252);
        v48 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                (common::milog::MiLogStream *const)&v222,
                (const char (*)[53])"dungeon_candidate_team player count = 0 player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __x = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)&__x);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
        __for_end = 0LL;
        __x = RET_FAIL;
        v49 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
        v206.first = v49.first;
        v206.second = v49.second;
        std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v206);
        goto LABEL_252;
      }
      if ( player_count > 1 )
      {
        is_mul_enter = 1;
        std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v7 + 464));
        DungeonCandidateTeam::getAllAvatarPtrVec(
          dungeon_candidate_team,
          (std::vector<std::shared_ptr<Avatar>> *)(v7 + 464));
        __for_range = (std::vector<std::shared_ptr<Avatar>> *)(v7 + 464);
        __for_begin._M_current = std::vector<std::shared_ptr<Avatar>>::begin((std::vector<std::shared_ptr<Avatar>> *const)(v7 + 464))._M_current;
        __for_begin_0._M_current = (std::shared_ptr<Player> *)std::vector<std::shared_ptr<Avatar>>::end((std::vector<std::shared_ptr<Avatar>> *const)(v7 + 464))._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>(
                  &__for_begin,
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar>*,std::vector<std::shared_ptr<Avatar>> > *)&__for_begin_0) )
        {
          v50 = __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator*(&__for_begin);
          std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)(v7 + 336), v50);
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v7 + 336)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v222,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "enterDungeon",
              265);
            v51 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)&v222,
                    (const char (*)[42])"candidate_avatar_ptr nullptr, player_uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            __x = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)&__x);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
            __for_end = 0LL;
            __x = RET_FAIL;
            v52 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
            v207.first = v52.first;
            v207.second = v52.second;
            std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v207);
            v53 = 0;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v7 + 368));
            p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368))->feature_switch_mgr;
            v55 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
            AvatarId = Avatar::getAvatarId(v55);
            LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isAvatarClosed(p_feature_switch_mgr, AvatarId);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v7 + 368));
            if ( (_BYTE)p_feature_switch_mgr )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v222,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/dungeon/player_dungeon_comp.cpp",
                "enterDungeon",
                270);
              v57 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)&v222,
                      (const char (*)[42])"[FEATURE_SWITCH] AvatarSystem avatar_id: ");
              v58 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
              __x = Avatar::getAvatarId(v58);
              v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v57,
                      (const unsigned int *)&__x);
              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v59, (const char (*)[8])" closed");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
              __for_end = 0LL;
              __x = RET_FEATURE_CLOSED;
              v60 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
              v208.first = v60.first;
              v208.second = v60.second;
              std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v208);
              v53 = 0;
            }
            else
            {
              v53 = 1;
            }
          }
          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v7 + 336));
          if ( v53 != 1 )
          {
            v61 = 0;
            goto LABEL_104;
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<Avatar> *,std::vector<std::shared_ptr<Avatar>>>::operator++(&__for_begin);
        }
        __for_range_0 = (std::vector<std::shared_ptr<Player>> *)(v7 + 400);
        __for_begin._M_current = (std::shared_ptr<Avatar> *)std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v7 + 400))._M_current;
        __for_begin_0._M_current = std::vector<std::shared_ptr<Player>>::end(__for_range_0)._M_current;
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_begin,
                  &__for_begin_0) )
          {
            v61 = 1;
            goto LABEL_104;
          }
          v62 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v7 + 368), v62);
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 368), 0LL)
            || std::operator==<Player,Player>(
                 (const std::shared_ptr<Player> *)(v7 + 368),
                 (const std::shared_ptr<Player> *)(v7 + 208)) )
          {
            v64 = 0;
          }
          else
          {
            v65 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368));
            v66 = Player::getBasicComp(v65);
            v67 = PlayerBasicComp::getLevel(v66);
            if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)dungeon_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&dungeon_config_ptr->limit_level);
            }
            if ( v67 >= dungeon_config_ptr->limit_level )
            {
              v64 = 2;
            }
            else
            {
              __for_end = 0LL;
              __x = RET_DUNGEON_CANDIDATE_TEAM_SOMEONE_LEVEL_LIMIT;
              v68 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
              v209.first = v68.first;
              v209.second = v68.second;
              std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v209);
              v64 = 1;
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 368));
          if ( v64 )
          {
            if ( v64 != 2 )
              break;
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin);
        }
        v61 = 0;
LABEL_104:
        std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v7 + 464));
        if ( v61 != 1 )
          goto LABEL_252;
      }
      if ( DungeonCandidateTeam::getDungeonId(dungeon_candidate_team) != *(_DWORD *)(v7 + 96) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v222,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "enterDungeon",
          289);
        v69 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)&v222,
                (const char (*)[31])"dungeon not match player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v7 + 80) = Player::getUid(this->player_);
        v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v69,
                (const unsigned int *)(v7 + 80));
        v71 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v70,
                (const char (*)[38])" dungeon_candiddate_team_dungeon_id: ");
        __x = DungeonCandidateTeam::getDungeonId(dungeon_candidate_team);
        v72 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v71, (const unsigned int *)&__x);
        v73 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v72,
                (const char (*)[24])" req_enter_dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, (const unsigned int *)(v7 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
        __for_end = 0LL;
        __x = RET_FAIL;
        v74 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
        v210.first = v74.first;
        v210.second = v74.second;
        std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v210);
        goto LABEL_252;
      }
      DungeonCandidateTeam::getLeaderPlayerPtr((DungeonCandidateTeam *const)(v7 + 368));
      if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 368), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v222,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "enterDungeon",
          295);
        v75 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                (common::milog::MiLogStream *const)&v222,
                (const char (*)[42])"dungeon team leader_ptr null dungeon_id: ");
        v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v75,
                (const unsigned int *)(v7 + 96));
        v77 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v76, (const char (*)[14])" palyer_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __x = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, (const unsigned int *)&__x);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
        __for_end = 0LL;
        __x = RET_FAIL;
        v78 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
        v211.first = v78.first;
        v211.second = v78.second;
        std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v211);
        v79 = 0;
      }
      else
      {
        v80 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368));
        v81 = Player::getUid(v80);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( v81 == Player::getUid(this->player_) )
        {
          if ( !DungeonCandidateTeam::isAllReady(dungeon_candidate_team) )
          {
            __for_end = 0LL;
            __x = RET_DUNGEON_CANDIDATE_TEAM_NOT_ALL_READY;
            v87 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
            v213.first = v87.first;
            v213.second = v87.second;
            std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v213);
            v79 = 0;
          }
          else if ( DungeonCandidateTeam::isHasRepeatAvatar(dungeon_candidate_team) )
          {
            __for_end = 0LL;
            __x = RET_DUNGEON_CANDIDATE_TEAM_HAS_REPEAT_AVATAR;
            v88 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
            v214.first = v88.first;
            v214.second = v88.second;
            std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v214);
            v79 = 0;
          }
          else
          {
            v79 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v222,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "enterDungeon",
            300);
          v82 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)&v222,
                  (const char (*)[34])"player is not leader player_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v7 + 80) = Player::getUid(this->player_);
          v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v82,
                  (const unsigned int *)(v7 + 80));
          v84 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v83,
                  (const char (*)[14])" leader_uid: ");
          v85 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368));
          __x = Player::getUid(v85);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, (const unsigned int *)&__x);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
          __for_end = 0LL;
          __x = RET_FAIL;
          v86 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
          v212.first = v86.first;
          v212.second = v86.second;
          std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v212);
          v79 = 0;
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 368));
      if ( v79 != 1 )
        goto LABEL_252;
      goto LABEL_148;
    }
    v89 = 0;
    if ( !PlayerDungeonComp::getIsRestartDungeon(this) )
      goto LABEL_131;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    TrialAvatarComp = Player::getTrialAvatarComp(this->player_);
    std::shared_ptr<Scene>::shared_ptr(
      (std::shared_ptr<Scene> *const)(v7 + 368),
      (const std::shared_ptr<Scene> *)(v7 + 112));
    v89 = 1;
    if ( !PlayerTrialAvatarComp::isTrialAvatarDungeon(TrialAvatarComp, (ScenePtr *)(v7 + 368)) )
      v91 = 1;
    else
LABEL_131:
      v91 = 0;
    if ( v89 )
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v7 + 368));
    if ( !v91 )
      goto LABEL_148;
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v7 + 336));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v7 + 336)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v222,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "enterDungeon",
        318);
      v92 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&v222,
              (const char (*)[33])off_25265860);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      __x = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v92, (const unsigned int *)&__x);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
      __for_end = 0LL;
      __x = RET_FAIL;
      v93 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
      v215.first = v93.first;
      v215.second = v93.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v215);
      v94 = 0;
      goto LABEL_147;
    }
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)(v7 + 368),
      (const std::shared_ptr<DungeonScene> *)(v7 + 336));
    v95 = !PlayerDungeonComp::isNeedSpecialRestartDungeon(this, (DungeonScenePtr *)(v7 + 368));
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 368));
    if ( v95 )
    {
      v96 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
      settle_team_avatar_map = (const std::unordered_map<unsigned int,std::vector<long unsigned int>> *)DungeonScene::getDungeonSettleSnapshot(v96);
      player_count_0 = std::unordered_map<unsigned int,std::vector<unsigned long>>::size(settle_team_avatar_map);
      if ( !player_count_0 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v222,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "enterDungeon",
          327);
        v97 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                (common::milog::MiLogStream *const)&v222,
                (const char (*)[53])"settle_team_avatar_map player count = 0 player_uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __x = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v97, (const unsigned int *)&__x);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
        __for_end = 0LL;
        __x = RET_FAIL;
        v98 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
        v216.first = v98.first;
        v216.second = v98.second;
        std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v216);
        v94 = 0;
LABEL_147:
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 336));
        if ( v94 != 1 )
        {
LABEL_252:
          std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v7 + 400));
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 208));
          goto LABEL_253;
        }
LABEL_148:
        if ( is_mul_enter )
        {
          if ( !PlayerDungeonComp::isCanMulEnter(this, dungeon_config_ptr) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v222,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "enterDungeon",
              341);
            v99 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)&v222,
                    (const char (*)[38])"dungeon cannot mul enter dungeon_id: ");
            v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v99,
                     (const unsigned int *)(v7 + 96));
            v101 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                     v100,
                     (const char (*)[14])" player_uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            __x = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v101, (const unsigned int *)&__x);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
            __for_end = 0LL;
            __x = RET_FAIL;
            v102 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
            v217.first = v102.first;
            v217.second = v102.second;
            std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v217);
            goto LABEL_252;
          }
        }
        else if ( !PlayerDungeonComp::isCanSingleEnter(this, dungeon_config_ptr) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v222,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "enterDungeon",
            349);
          v103 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                   (common::milog::MiLogStream *const)&v222,
                   (const char (*)[41])"dungeon cannot singel enter dungeon_id: ");
          v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v103,
                   (const unsigned int *)(v7 + 96));
          v105 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v104,
                   (const char (*)[14])" player_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __x = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v105, (const unsigned int *)&__x);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
          __for_end = 0LL;
          __x = RET_FAIL;
          v106 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
          v218.first = v106.first;
          v218.second = v106.second;
          std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v218);
          goto LABEL_252;
        }
        *(_DWORD *)(v7 + 80) = PlayerDungeonComp::checkEnterSpecialDungeon(
                                 this,
                                 dungeon_config_ptr,
                                 dungeon_candidate_team);
        if ( *(_DWORD *)(v7 + 80) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v222,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "enterDungeon",
            358);
          v107 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                   (common::milog::MiLogStream *const)&v222,
                   (const char (*)[40])"checkEnterSpecialDungeon fails, return ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v107, (const int *)(v7 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
          __for_end = 0LL;
          v108 = std::make_pair<int &,decltype(nullptr)>((int *)(v7 + 80), &__for_end);
          v219.first = v108.first;
          v219.second = v108.second;
          std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v219);
          goto LABEL_252;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        uid = Player::getUid(this->player_);
        v109 = ServiceBox::findService<GameserverService>();
        p_dungeon_mgr = &GameserverService::getGameThreadLocal(v109)->dungeon_mgr;
        std::shared_ptr<Player>::shared_ptr(
          (std::shared_ptr<Player> *const)(v7 + 368),
          (const std::shared_ptr<Player> *)(v7 + 208));
        DungeonMgr::createDungeon(
          (DungeonMgr *const)(v7 + 240),
          p_dungeon_mgr,
          (PlayerPtr *)*(unsigned int *)(v7 + 96),
          (const std::shared_ptr<Player> *)(v7 + 368));
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 368));
        if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v7 + 240), 0LL) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v222,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "enterDungeon",
            367);
          v111 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                   (common::milog::MiLogStream *const)&v222,
                   (const char (*)[34])"createDungeon failed dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v111, (const unsigned int *)(v7 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
          __for_end = 0LL;
          __x = RET_FAIL;
          v112 = std::make_pair<proto::Retcode,decltype(nullptr)>(&__x, &__for_end);
          v220.first = v112.first;
          v220.second = v112.second;
          std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,decltype(nullptr),true>(retstr, &v220);
LABEL_251:
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 240));
          goto LABEL_252;
        }
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v7 + 592));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __x = Player::getUid(this->player_);
        std::set<unsigned int>::insert(
          (std::set<unsigned int> *const)(v7 + 592),
          (std::set<unsigned int>::value_type *)&__x);
        __for_range_1 = (std::vector<std::shared_ptr<Player>> *)(v7 + 400);
        __for_begin_0._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v7 + 400))._M_current;
        __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<std::shared_ptr<Player>>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  &__for_begin_0,
                  (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end) )
        {
          v113 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin_0);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v7 + 368), v113);
          if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v7 + 368)) )
          {
            v114 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 368));
            __x = Player::getUid(v114);
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v7 + 592),
              (std::set<unsigned int>::value_type *)&__x);
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 368));
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin_0);
        }
        v115 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 240));
        DungeonScene::setTeamUidSet(v115, (const std::set<unsigned int> *)(v7 + 592));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v222,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "enterDungeon",
          382);
        v116 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                 (common::milog::MiLogStream *const)&v222,
                 (const char (*)[15])" team uid set:");
        common::milog::MiLogStream::operator<<<unsigned int>(v116, (const std::set<unsigned int> *)(v7 + 592));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
        v117 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 240));
        dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v117);
        v118 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 240));
        SceneId = Scene::getSceneId((const Scene *const)v118);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
        if ( DungeonCandidateTeam::isVaild(dungeon_candidate_team) )
        {
          DungeonCandidateTeam::getPlayerChooseAvatarMap(&player_map, dungeon_candidate_team);
          DungeonSceneTeam::setCandidateTeamPlayerMap(dungeon_scene_team, &player_map);
          std::unordered_map<unsigned int,std::vector<unsigned long>>::~unordered_map(&player_map);
          if ( is_mul_enter )
            DungeonSceneTeam::setSceneTeamIsInMpMode(dungeon_scene_team, 1);
        }
        else
        {
          v120 = 0;
          if ( !PlayerDungeonComp::getIsRestartDungeon(this) )
            goto LABEL_180;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v121 = Player::getTrialAvatarComp(this->player_);
          std::shared_ptr<Scene>::shared_ptr(
            (std::shared_ptr<Scene> *const)(v7 + 368),
            (const std::shared_ptr<Scene> *)(v7 + 112));
          v120 = 1;
          if ( !PlayerTrialAvatarComp::isTrialAvatarDungeon(v121, (ScenePtr *)(v7 + 368)) )
            v122 = 1;
          else
LABEL_180:
            v122 = 0;
          if ( v120 )
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v7 + 368));
          if ( v122 )
          {
            PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v7 + 336));
            if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v7 + 336)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v222,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/player_dungeon_comp.cpp",
                "enterDungeon",
                400);
              v123 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                       (common::milog::MiLogStream *const)&v222,
                       (const char (*)[33])off_25265860);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              __x = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v123, (const unsigned int *)&__x);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
              __for_end = 0LL;
              __x = RET_FAIL;
              v124 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
              v221.first = v124.first;
              v221.second = v124.second;
              std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v221);
              v125 = 0;
            }
            else
            {
              std::shared_ptr<DungeonScene>::shared_ptr(
                (std::shared_ptr<DungeonScene> *const)(v7 + 368),
                (const std::shared_ptr<DungeonScene> *)(v7 + 336));
              v126 = !PlayerDungeonComp::isNeedSpecialRestartDungeon(this, (DungeonScenePtr *)(v7 + 368));
              std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 368));
              if ( v126 )
              {
                v127 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
                settle_team_avatar_map_0 = (const std::unordered_map<unsigned int,std::vector<long unsigned int>> *)DungeonScene::getDungeonSettleSnapshot(v127);
                DungeonSceneTeam::setCandidateTeamPlayerMap(dungeon_scene_team, settle_team_avatar_map_0);
                if ( is_mul_enter )
                  DungeonSceneTeam::setSceneTeamIsInMpMode(dungeon_scene_team, 1);
              }
              v125 = 1;
            }
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 336));
            if ( v125 != 1 )
              goto LABEL_250;
          }
        }
        __for_range_2 = level_config_id_mapa;
        __for_begin._M_current = (std::shared_ptr<Avatar> *)std::map<unsigned int,unsigned int>::begin(level_config_id_mapa)._M_node;
        __for_begin_0._M_current = (std::shared_ptr<Player> *)std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0) )
        {
          v128 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          v129 = v128;
          if ( ((unsigned __int8)v128 & 7) >= *(_BYTE *)(((unsigned __int64)v128 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v128 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v128->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v128 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v128->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v128, 8LL);
          }
          __for_end = *v129;
          dungeon_data_type = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
          level_config_id = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
          v130 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 240));
          if ( *(_BYTE *)(((unsigned __int64)level_config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)level_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_config_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            v130 = (DungeonScene *)level_config_id;
            __asan_report_load4(level_config_id);
          }
          v131 = *level_config_id;
          if ( *(_BYTE *)(((unsigned __int64)dungeon_data_type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dungeon_data_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_data_type >> 3)
                                                                                + 0x7FFF8000) )
          {
            v130 = (DungeonScene *)dungeon_data_type;
            __asan_report_load4(dungeon_data_type);
          }
          DungeonScene::tryAddLevelConfigBeforeNotify(v130, *dungeon_data_type, v131);
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        }
        PlayerDungeonComp::tryResetLevelTagBeforeEnterDungeon(this, *(_DWORD *)(v7 + 96));
        v132 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 240));
        __x = DungeonScene::getInstId(v132);
        common::tools::perf::make_shared<CreateDungeonEvent,unsigned int>(
          (unsigned int *)(v7 + 304),
          (unsigned int *)&__x);
        std::shared_ptr<BaseEvent>::shared_ptr<CreateDungeonEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v7 + 272),
          (std::shared_ptr<CreateDungeonEvent> *)(v7 + 304));
        std::shared_ptr<CreateDungeonEvent>::~shared_ptr((std::shared_ptr<CreateDungeonEvent> *const)(v7 + 304));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)(v7 + 368),
          (const std::shared_ptr<BaseEvent> *)(v7 + 272));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v7 + 368));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v7 + 368));
        if ( *(_BYTE *)(((v7 + 528) >> 3) + 0x7FFF8000) != 0
          && (char)((v7 - 96 + 112) & 7) >= *(_BYTE *)(((v7 + 528) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(v7 + 528);
        }
        if ( *(_BYTE *)(v7 + 528) )
        {
          std::shared_ptr<DungeonScene>::shared_ptr(
            (std::shared_ptr<DungeonScene> *const)(v7 + 368),
            (const std::shared_ptr<DungeonScene> *)(v7 + 240));
          *(_DWORD *)(v7 + 80) = PlayerDungeonComp::enterDungeon(
                                   this,
                                   (DungeonScenePtr *)(v7 + 368),
                                   enter_scene_ida,
                                   enter_point_ida);
        }
        else
        {
          std::shared_ptr<DungeonScene>::shared_ptr(
            (std::shared_ptr<DungeonScene> *const)(v7 + 368),
            (const std::shared_ptr<DungeonScene> *)(v7 + 240));
          *(_DWORD *)(v7 + 80) = PlayerDungeonComp::enterDungeon(
                                   this,
                                   (DungeonScenePtr *)(v7 + 368),
                                   enter_scene_ida,
                                   enter_point_ida,
                                   (const Vector3 *)(v7 + 532),
                                   (const Vector3 *)(v7 + 544));
        }
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 368));
        if ( *(_DWORD *)(v7 + 80) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v222,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "enterDungeon",
            437);
          v134 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                   (common::milog::MiLogStream *const)&v222,
                   (const char (*)[41])"player enter dungeon failed player_uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          __x = Player::getUid(this->player_);
          v135 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v134,
                   (const unsigned int *)&__x);
          v136 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                   v135,
                   (const char (*)[14])" dungeon_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v136, (const unsigned int *)(v7 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
          __for_end = 0LL;
          v137 = std::make_pair<int &,decltype(nullptr)>((int *)(v7 + 80), &__for_end);
          *(_DWORD *)(v7 + 336) = v137.first;
          *(_QWORD *)(v7 + 344) = v137.second;
          std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(
            retstr,
            (std::pair<int,std::nullptr_t> *)(v7 + 336));
        }
        else
        {
          if ( DungeonCandidateTeam::isVaild(dungeon_candidate_team) )
          {
            __for_range_3 = (std::vector<std::shared_ptr<Player>> *)(v7 + 400);
            __for_begin_0._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v7 + 400))._M_current;
            __for_end = (std::pair<unsigned int const,unsigned int>)std::vector<std::shared_ptr<Player>>::end(__for_range_3)._M_current;
            while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                      &__for_begin_0,
                      (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end) )
            {
              v138 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin_0);
              std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v7 + 336), v138);
              if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v7 + 336), 0LL)
                && !std::operator==<Player,Player>(
                      (const std::shared_ptr<Player> *)(v7 + 336),
                      (const std::shared_ptr<Player> *)(v7 + 208)) )
              {
                v139 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
                DungeonComp = Player::getDungeonComp(v139);
                std::shared_ptr<DungeonScene>::shared_ptr(
                  (std::shared_ptr<DungeonScene> *const)(v7 + 368),
                  (const std::shared_ptr<DungeonScene> *)(v7 + 240));
                LOBYTE(DungeonComp) = PlayerDungeonComp::enterDungeon(
                                        DungeonComp,
                                        (DungeonScenePtr *)(v7 + 368),
                                        enter_scene_ida,
                                        enter_point_ida) != 0;
                std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 368));
                if ( (_BYTE)DungeonComp )
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&v222,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/dungeon/player_dungeon_comp.cpp",
                    "enterDungeon",
                    454);
                  v141 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                           (common::milog::MiLogStream *const)&v222,
                           (const char (*)[51])"candidate player enter dungeon failed player_uid: ");
                  v142 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
                  __x = Player::getUid(v142);
                  v143 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                           v141,
                           (const unsigned int *)&__x);
                  v144 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                           v143,
                           (const char (*)[14])" dungeon_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v144,
                    (const unsigned int *)(v7 + 96));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
                }
              }
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 336));
              __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin_0);
            }
            DungeonCandidateTeam::resetAll(dungeon_candidate_team, 0, 0, 0, 0);
          }
          else
          {
            v145 = 0;
            if ( !PlayerDungeonComp::getIsRestartDungeon(this) )
              goto LABEL_227;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v146 = Player::getTrialAvatarComp(this->player_);
            std::shared_ptr<Scene>::shared_ptr(
              (std::shared_ptr<Scene> *const)(v7 + 368),
              (const std::shared_ptr<Scene> *)(v7 + 112));
            v145 = 1;
            if ( !PlayerTrialAvatarComp::isTrialAvatarDungeon(v146, (ScenePtr *)(v7 + 368)) )
              v147 = 1;
            else
LABEL_227:
              v147 = 0;
            if ( v145 )
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v7 + 368));
            if ( v147 )
            {
              PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v7 + 304));
              if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v7 + 304)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&v222,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/player_dungeon_comp.cpp",
                  "enterDungeon",
                  465);
                v148 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                         (common::milog::MiLogStream *const)&v222,
                         (const char (*)[33])off_25265860);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                __x = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v148, (const unsigned int *)&__x);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
                __for_end = 0LL;
                __x = RET_FAIL;
                v149 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
                *(_DWORD *)(v7 + 368) = v149.first;
                *(_QWORD *)(v7 + 376) = v149.second;
                std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(
                  retstr,
                  (std::pair<int,std::nullptr_t> *)(v7 + 368));
                v150 = 0;
              }
              else
              {
                std::shared_ptr<DungeonScene>::shared_ptr(
                  (std::shared_ptr<DungeonScene> *const)(v7 + 368),
                  (const std::shared_ptr<DungeonScene> *)(v7 + 304));
                v151 = !PlayerDungeonComp::isNeedSpecialRestartDungeon(this, (DungeonScenePtr *)(v7 + 368));
                std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 368));
                if ( v151 )
                {
                  v152 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 304));
                  settle_team_avatar_map_1 = (const std::unordered_map<unsigned int,std::vector<long unsigned int>> *)DungeonScene::getDungeonSettleSnapshot(v152);
                  __for_range_4 = settle_team_avatar_map_1;
                  __for_begin_0._M_current = (std::shared_ptr<Player> *)std::unordered_map<unsigned int,std::vector<unsigned long>>::begin(settle_team_avatar_map_1)._M_cur;
                  __for_end = (std::pair<unsigned int const,unsigned int>)std::unordered_map<unsigned int,std::vector<unsigned long>>::end(__for_range_4)._M_cur;
                  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned long>>,false>(
                            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<long unsigned int> >,false> *)&__for_begin_0,
                            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<long unsigned int> >,false> *)&__for_end) )
                  {
                    v187 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned long>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<long unsigned int> >,false,false> *const)&__for_begin_0);
                    uid_0 = std::get<0ul,unsigned int const,std::vector<unsigned long>>(v187);
                    avatar_guid_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned long>>(v187);
                    v153 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 304));
                    if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3)
                                                                              + 0x7FFF8000) )
                    {
                      v153 = (unsigned int)uid_0;
                      __asan_report_load4(uid_0);
                    }
                    Scene::findPlayer((const Scene *const)(v7 + 336), v153);
                    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v7 + 336)) )
                    {
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)&v222,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/dungeon/player_dungeon_comp.cpp",
                        "enterDungeon",
                        476);
                      v154 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                               (common::milog::MiLogStream *const)&v222,
                               (const char (*)[45])"candidate_player_ptr leave cur dungeon, uid:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v154, uid_0);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
                    }
                    else if ( !std::operator==<Player,Player>(
                                 (const std::shared_ptr<Player> *)(v7 + 336),
                                 (const std::shared_ptr<Player> *)(v7 + 208)) )
                    {
                      v155 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
                      v156 = Player::getDungeonComp(v155);
                      std::shared_ptr<DungeonScene>::shared_ptr(
                        (std::shared_ptr<DungeonScene> *const)(v7 + 368),
                        (const std::shared_ptr<DungeonScene> *)(v7 + 240));
                      LOBYTE(v156) = PlayerDungeonComp::enterDungeon(
                                       v156,
                                       (DungeonScenePtr *)(v7 + 368),
                                       enter_scene_ida,
                                       enter_point_ida) != 0;
                      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 368));
                      if ( (_BYTE)v156 )
                      {
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)&v222,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/dungeon/player_dungeon_comp.cpp",
                          "enterDungeon",
                          485);
                        v157 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                 (common::milog::MiLogStream *const)&v222,
                                 (const char (*)[51])"candidate player enter dungeon failed player_uid: ");
                        v158 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 336));
                        __x = Player::getUid(v158);
                        v159 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                 v157,
                                 (const unsigned int *)&__x);
                        v160 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                                 v159,
                                 (const char (*)[14])" dungeon_id: ");
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v160,
                          (const unsigned int *)(v7 + 96));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
                      }
                    }
                    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v7 + 336));
                    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned long>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<long unsigned int> >,false,false> *const)&__for_begin_0);
                  }
                }
                v150 = 1;
              }
              std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v7 + 304));
              if ( v150 != 1 )
                goto LABEL_249;
            }
          }
          __x = RET_SUCC;
          std::make_pair<proto::Retcode,std::shared_ptr<DungeonScene> &>(
            (std::pair<proto::Retcode,std::shared_ptr<DungeonScene> > *)(v7 + 464),
            &__x,
            (std::shared_ptr<DungeonScene> *)(v7 + 240));
          std::pair<int,std::shared_ptr<DungeonScene>>::pair<proto::Retcode,std::shared_ptr<DungeonScene>,true>(
            retstr,
            (std::pair<proto::Retcode,std::shared_ptr<DungeonScene> > *)(v7 + 464));
          std::pair<proto::Retcode,std::shared_ptr<DungeonScene>>::~pair((std::pair<proto::Retcode,std::shared_ptr<DungeonScene> > *const)(v7 + 464));
        }
LABEL_249:
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v7 + 272));
LABEL_250:
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v7 + 592));
        goto LABEL_251;
      }
      if ( player_count_0 > 1 )
        is_mul_enter = 1;
    }
    v94 = 1;
    goto LABEL_147;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v222,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/dungeon/player_dungeon_comp.cpp",
    "enterDungeon",
    192);
  v24 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)&v222,
          (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v7 + 96));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v222);
  __for_end = 0LL;
  __x = RET_FAIL;
  v25 = std::make_pair<int,decltype(nullptr)>((int *)&__x, &__for_end);
  v198.first = v25.first;
  v198.second = v25.second;
  std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v198);
LABEL_254:
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v7 + 144));
LABEL_255:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v7 + 112));
LABEL_256:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v7 + 48));
  if ( v163 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v9 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v9 + 2147450880 - (((_DWORD)v9 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v7 >> 3) + 0x7FFF8050) = 0;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v7 >> 3) + 0x7FFF8050) = -168430091;
  }
  return retstr;
};

// Line 227: range 00000000141A1E80-00000000141A2013
ForeachPolicy __cdecl PlayerDungeonComp::enterDungeon(unsigned int,unsigned int,unsigned int,std::map<unsigned int,unsigned int> const&,EnterDungeonOption)::{lambda(Avatar &)#1}::operator()(
        const PlayerDungeonComp::enterDungeon::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  FeatureSwitchMgr *p_feature_switch_mgr; // rbx
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream *v5; // rax
  int32_t *switch_ret; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->feature_switch_mgr;
  AvatarId = Avatar::getAvatarId(avatar);
  LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isAvatarClosed(p_feature_switch_mgr, AvatarId);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( !(_BYTE)p_feature_switch_mgr )
    return 0;
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/player_dungeon_comp.cpp",
    "operator()",
    231);
  v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
         &v10,
         (const char (*)[42])"[FEATURE_SWITCH] AvatarSystem avatar_id: ");
  val = Avatar::getAvatarId(avatar);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v5, (const char (*)[8])" closed");
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  switch_ret = __closure->__switch_ret;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__switch_ret >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__switch_ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__switch_ret >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__switch_ret);
  }
  *switch_ret = 142;
  return 1;
};

// Line 495: range 00000000141A60A4-00000000141A6C9B
int32_t __cdecl PlayerDungeonComp::enterDungeon(
        PlayerDungeonComp *const this,
        DungeonScenePtr *p_dungeon_scene_ptr,
        uint32_t enter_scene_id,
        uint32_t enter_point_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  int32_t v8; // r14d
  DungeonScene *v9; // rax
  bool v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  GameserverService *v25; // rax
  DungeonMgr *p_dungeon_mgr; // r15
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t v28; // r14d
  uint32_t Uid; // eax
  Scene *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  DungeonScene *v35; // rax
  const std::string *v36; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::pair<unsigned int const,unsigned int> *v40; // rax
  std::pair<unsigned int const,unsigned int> *v41; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  PlayerAvatarComp *AvatarComp; // r14
  Player *player; // r14
  int32_t result; // eax
  std::string v46; // [rsp+0h] [rbp-1F0h]
  char *v47; // [rsp+8h] [rbp-1E8h]
  uint32_t inst_id; // [rsp+14h] [rbp-1DCh]
  uint32_t enter_point_ida; // [rsp+18h] [rbp-1D8h]
  uint32_t enter_scene_ida; // [rsp+1Ch] [rbp-1D4h]
  bool is_join_other_scene; // [rsp+3Bh] [rbp-1B5h]
  unsigned int val; // [rsp+3Ch] [rbp-1B4h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-1B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-1A8h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+50h] [rbp-1A0h]
  PlayerSceneComp *scene_comp; // [rsp+58h] [rbp-198h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+60h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+68h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *level_config_id; // [rsp+70h] [rbp-180h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+78h] [rbp-178h] BYREF
  std::shared_ptr<Player> __a; // [rsp+80h] [rbp-170h] BYREF
  std::shared_ptr<Player> __b; // [rsp+90h] [rbp-160h] BYREF
  std::string v63; // [rsp+A0h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+C0h] [rbp-130h] BYREF
  char v65[240]; // [rsp+100h] [rbp-F0h] BYREF

  *((_DWORD *)&v46._anon_0._M_allocated_capacity + 3) = enter_scene_id;
  *((_DWORD *)&v46._anon_0._M_allocated_capacity + 2) = enter_point_id;
  v4 = (unsigned __int64)v65;
  v46._M_string_length = (std::string::size_type)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 1 10 holder:496 64 4 14 dungeon_id:511 80 4 17 exit_point_id:513 96 12 7 pos:514 128 12 7 r"
                        "ot:514 160 16 25 enter_dungeon_log_ptr:543";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::enterDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v63, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x579u, v46);
  std::string::~string(&v63);
  if ( std::operator==<DungeonScene>(p_dungeon_scene_ptr, 0LL) )
  {
    v8 = -1;
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    dungeon_config_ptr = DungeonScene::getDungeonConfig(v9);
    if ( dungeon_config_ptr )
    {
      is_join_other_scene = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toThisPtr<Player>((Player *)&__b);
      std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      Scene::getOwnPlayer((const Scene *const)&__a);
      v10 = std::operator!=<Player,Player>(&__a, &__b);
      std::shared_ptr<Player>::~shared_ptr(&__a);
      std::shared_ptr<Player>::~shared_ptr(&__b);
      if ( v10 )
        is_join_other_scene = 1;
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      *(_DWORD *)(v4 + 64) = DungeonScene::getDungeonId(v11);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__b);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__b);
      *(_DWORD *)(v4 + 80) = JsonConfigMgr::findDungeonExitPointId(
                               &v12->design_config.json_config_mgr,
                               enter_scene_ida,
                               enter_point_ida);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__b);
      Vector3::Vector3((Vector3 *const)(v4 + 96), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v4 + 128), 0.0, 0.0, 0.0);
      if ( *(_DWORD *)(v4 + 80)
        && !PlayerDungeonComp::getQuitPosRotByPointId(
              this,
              enter_scene_ida,
              *(_DWORD *)(v4 + 80),
              (Vector3 *)(v4 + 96),
              (Vector3 *)(v4 + 128)) )
      {
        PlayerDungeonComp::setQuitPosRot(this, enter_scene_ida, (const Vector3 *)(v4 + 96), (const Vector3 *)(v4 + 128));
        PlayerDungeonComp::setEnterPointId(this, enter_point_ida);
      }
      else
      {
        PlayerDungeonComp::clearQuitPosRot(this);
        PlayerDungeonComp::setEnterPointId(this, 0);
      }
      PlayerDungeonComp::setIsJoinOtherScene(this, is_join_other_scene);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "enterDungeon",
        527);
      v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&v63,
              (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" enterDungeon: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v4 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])", quit_scene: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->quit_scene_id_);
      v20 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v19, (const char (*)[17])" exit_point_id: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v4 + 80));
      v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])", quit_pos: ");
      v23 = operator<<(v22, &this->quit_pos_);
      v24 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v23, (const char (*)[12])", quit_rot:");
      operator<<(v24, &this->quit_rot_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
      v25 = ServiceBox::findService<GameserverService>();
      p_dungeon_mgr = &GameserverService::getGameThreadLocal(v25)->dungeon_mgr;
      v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      inst_id = DungeonScene::getInstId(v27);
      v28 = *(_DWORD *)(v4 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      DungeonMgr::addPlayerToDungeon(p_dungeon_mgr, Uid, v28, inst_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene_comp = Player::getSceneComp(this->player_);
      if ( !is_join_other_scene )
        PlayerSceneComp::recordMySceneInfo(scene_comp);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_DUNGEON_ENTER);
      v30 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      v31 = PlayerSceneComp::jumpToSceneBornPosition(scene_comp, v30, &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( v31 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "enterDungeon",
          539);
        v32 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                (common::milog::MiLogStream *const)&v63,
                (const char (*)[43])"jumpToSceneBornPosition fails, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v63);
        v8 = 1101;
      }
      else
      {
        common::tools::perf::make_shared<proto_log::PlayerLogBodyDungeonEnter>();
        v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        proto_log::PlayerLogBodyDungeonEnter::set_dungeon_id(v33, *(_DWORD *)(v4 + 64));
        v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        v35 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        v36 = DungeonScene::getTransaction[abi:cxx11](v35);
        proto_log::PlayerLogBodyDungeonEnter::set_transaction(v34, v36);
        v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        proto_log::PlayerLogBodyDungeonEnter::set_dungeon_type(v37, dungeon_config_ptr->type);
        v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&dungeon_config_ptr->involve_type);
        }
        proto_log::PlayerLogBodyDungeonEnter::set_dungeon_mp(v38, dungeon_config_ptr->involve_type);
        v39 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        __for_range = DungeonScene::getLevelConfigIdMap(v39);
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v40 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v41 = v40;
          if ( ((unsigned __int8)v40 & 7) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v40 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v40, 8LL);
          }
          __in = *v41;
          _ = std::get<0ul,unsigned int const,unsigned int>(&__in);
          level_config_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
          v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
          if ( *(_BYTE *)(((unsigned __int64)level_config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)level_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_config_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(level_config_id);
          }
          proto_log::PlayerLogBodyDungeonEnter::add_level_config_id_list(v42, *level_config_id);
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        std::function<ForeachPolicy ()(Avatar &)>::function<PlayerDungeonComp::enterDungeon(std::shared_ptr<DungeonScene>,unsigned int,unsigned int)::{lambda(Avatar &)#1},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v63,
          (PlayerDungeonComp::enterDungeon::<lambda(Avatar&)>_0)(v4 + 160));
        PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v63);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v63);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)&__b,
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDungeonEnter,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&__a,
          (const std::shared_ptr<proto_log::PlayerLogBodyDungeonEnter> *)(v4 + 160));
        Player::printStatLog(player, (MessagePtr *)&__a, (MessagePtr *)&__b, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__a);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__b);
        v8 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyDungeonEnter>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDungeonEnter> *const)(v4 + 160));
      }
    }
    else
    {
      v8 = -1;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v8;
  if ( v47 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 553: range 00000000141A603E-00000000141A60A3
ForeachPolicy __cdecl PlayerDungeonComp::enterDungeon(std::shared_ptr<DungeonScene>,unsigned int,unsigned int)::{lambda(Avatar &)#1}::operator()(
        const PlayerDungeonComp::enterDungeon::<lambda(Avatar&)>_0 *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__enter_dungeon_log_ptr);
  v3 = proto_log::PlayerLogBodyDungeonEnter::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 568: range 00000000141A6D02-00000000141A791E
int32_t __cdecl PlayerDungeonComp::enterDungeon(
        PlayerDungeonComp *const this,
        DungeonScenePtr *p_dungeon_scene_ptr,
        uint32_t entry_scene_id,
        uint32_t entry_point_id,
        const Vector3 *enter_pos,
        const Vector3 *enter_rot)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  PlayerBasicComp *BasicComp; // rax
  int32_t v10; // r14d
  DungeonScene *v11; // rax
  bool v12; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  GameserverService *v27; // rax
  DungeonMgr *p_dungeon_mgr; // r15
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  uint32_t v30; // r14d
  uint32_t Uid; // eax
  Scene *v32; // rax
  bool v33; // r14
  common::milog::MiLogStream *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // r14
  DungeonScene *v37; // rax
  const std::string *v38; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rcx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::pair<unsigned int const,unsigned int> *v42; // rax
  std::pair<unsigned int const,unsigned int> *v43; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rcx
  PlayerAvatarComp *AvatarComp; // r14
  Player *player; // r14
  int32_t result; // eax
  std::string v48; // [rsp+0h] [rbp-200h]
  char *v49; // [rsp+8h] [rbp-1F8h]
  uint32_t inst_id; // [rsp+14h] [rbp-1ECh]
  const Vector3 *enter_rota; // [rsp+18h] [rbp-1E8h]
  bool is_join_other_scene; // [rsp+4Bh] [rbp-1B5h]
  unsigned int val; // [rsp+4Ch] [rbp-1B4h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-1B0h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-1A8h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+60h] [rbp-1A0h]
  PlayerSceneComp *scene_comp; // [rsp+68h] [rbp-198h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+70h] [rbp-190h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+78h] [rbp-188h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *level_config_id; // [rsp+80h] [rbp-180h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+88h] [rbp-178h] BYREF
  std::shared_ptr<Player> __a; // [rsp+90h] [rbp-170h] BYREF
  std::shared_ptr<Player> __b; // [rsp+A0h] [rbp-160h] BYREF
  std::string v67; // [rsp+B0h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+D0h] [rbp-130h] BYREF
  char v69[240]; // [rsp+110h] [rbp-F0h] BYREF

  *(&v48._anon_0._M_allocated_capacity + 1) = (std::string::size_type)enter_rot;
  v6 = (unsigned __int64)v69;
  v48._M_string_length = (std::string::size_type)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(192LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 48 1 10 holder:569 64 4 14 dungeon_id:584 80 4 17 exit_point_id:586 96 12 7 pos:587 128 12 7 r"
                        "ot:587 160 16 25 enter_dungeon_log_ptr:616";
  *(_QWORD *)(v6 + 16) = PlayerDungeonComp::enterDungeon;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753551;
  v8[536862722] = -234556924;
  v8[536862723] = -219020288;
  v8[536862724] = -219020288;
  v8[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v67, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48), 0x579u, v48);
  std::string::~string(&v67);
  if ( std::operator==<DungeonScene>(p_dungeon_scene_ptr, 0LL) )
  {
    v10 = -1;
  }
  else
  {
    v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    dungeon_config_ptr = DungeonScene::getDungeonConfig(v11);
    if ( dungeon_config_ptr )
    {
      is_join_other_scene = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toThisPtr<Player>((Player *)&__b);
      std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      Scene::getOwnPlayer((const Scene *const)&__a);
      v12 = std::operator!=<Player,Player>(&__a, &__b);
      std::shared_ptr<Player>::~shared_ptr(&__a);
      std::shared_ptr<Player>::~shared_ptr(&__b);
      if ( v12 )
        is_join_other_scene = 1;
      v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      *(_DWORD *)(v6 + 64) = DungeonScene::getDungeonId(v13);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__b);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__b);
      *(_DWORD *)(v6 + 80) = JsonConfigMgr::findDungeonExitPointId(
                               &v14->design_config.json_config_mgr,
                               entry_scene_id,
                               entry_point_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__b);
      Vector3::Vector3((Vector3 *const)(v6 + 96), 0.0, 0.0, 0.0);
      Vector3::Vector3((Vector3 *const)(v6 + 128), 0.0, 0.0, 0.0);
      if ( *(_DWORD *)(v6 + 80)
        && !PlayerDungeonComp::getQuitPosRotByPointId(
              this,
              entry_scene_id,
              *(_DWORD *)(v6 + 80),
              (Vector3 *)(v6 + 96),
              (Vector3 *)(v6 + 128)) )
      {
        PlayerDungeonComp::setQuitPosRot(this, entry_scene_id, (const Vector3 *)(v6 + 96), (const Vector3 *)(v6 + 128));
        PlayerDungeonComp::setEnterPointId(this, entry_point_id);
      }
      else
      {
        PlayerDungeonComp::clearQuitPosRot(this);
        PlayerDungeonComp::setEnterPointId(this, 0);
      }
      PlayerDungeonComp::setIsJoinOtherScene(this, is_join_other_scene);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v67,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "enterDungeon",
        600);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(
              (common::milog::MiLogStream *const)&v67,
              (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v17, (const char (*)[16])" enterDungeon: ");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v6 + 64));
      v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])", quit_scene: ");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->quit_scene_id_);
      v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v21, (const char (*)[17])" exit_point_id: ");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v6 + 80));
      v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v23, (const char (*)[13])", quit_pos: ");
      v25 = operator<<(v24, &this->quit_pos_);
      v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])", quit_rot:");
      operator<<(v26, &this->quit_rot_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v67);
      v27 = ServiceBox::findService<GameserverService>();
      p_dungeon_mgr = &GameserverService::getGameThreadLocal(v27)->dungeon_mgr;
      v29 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      inst_id = DungeonScene::getInstId(v29);
      v30 = *(_DWORD *)(v6 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      DungeonMgr::addPlayerToDungeon(p_dungeon_mgr, Uid, v30, inst_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      scene_comp = Player::getSceneComp(this->player_);
      if ( !is_join_other_scene )
        PlayerSceneComp::recordMySceneInfo(scene_comp);
      TransferReason::TransferReason(&p_reason, ENTER_REASON_DUNGEON_ENTER);
      v32 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      v33 = PlayerSceneComp::jumpToScene(scene_comp, v32, enter_pos, enter_rota, 0, &p_reason) != 0;
      TransferReason::~TransferReason(&p_reason);
      if ( v33 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v67,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "enterDungeon",
          612);
        v34 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                (common::milog::MiLogStream *const)&v67,
                (const char (*)[43])"jumpToSceneBornPosition fails, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v6 + 64));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v67);
        v10 = 1101;
      }
      else
      {
        common::tools::perf::make_shared<proto_log::PlayerLogBodyDungeonEnter>();
        v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
        proto_log::PlayerLogBodyDungeonEnter::set_dungeon_id(v35, *(_DWORD *)(v6 + 64));
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
        v37 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        v38 = DungeonScene::getTransaction[abi:cxx11](v37);
        proto_log::PlayerLogBodyDungeonEnter::set_transaction(v36, v38);
        v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        proto_log::PlayerLogBodyDungeonEnter::set_dungeon_type(v39, dungeon_config_ptr->type);
        v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&dungeon_config_ptr->involve_type);
        }
        proto_log::PlayerLogBodyDungeonEnter::set_dungeon_mp(v40, dungeon_config_ptr->involve_type);
        v41 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        __for_range = DungeonScene::getLevelConfigIdMap(v41);
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(__for_range)._M_node;
        __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v42 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v43 = v42;
          if ( ((unsigned __int8)v42 & 7) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v42->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v42 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v42->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v42, 8LL);
          }
          __in = *v43;
          _ = std::get<0ul,unsigned int const,unsigned int>(&__in);
          level_config_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
          v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 160));
          if ( *(_BYTE *)(((unsigned __int64)level_config_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)level_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_config_id >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4(level_config_id);
          }
          proto_log::PlayerLogBodyDungeonEnter::add_level_config_id_list(v44, *level_config_id);
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(this->player_);
        std::function<ForeachPolicy ()(Avatar &)>::function<PlayerDungeonComp::enterDungeon(std::shared_ptr<DungeonScene>,unsigned int,unsigned int,Vector3 const&,Vector3 const&)::{lambda(Avatar &)#1},void,void>(
          (std::function<ForeachPolicy(Avatar&)> *const)&v67,
          (PlayerDungeonComp::enterDungeon::<lambda(Avatar&)>_0)(v6 + 160));
        PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, (std::function<ForeachPolicy(Avatar&)> *)&v67);
        std::function<ForeachPolicy ()(Avatar &)>::~function((std::function<ForeachPolicy(Avatar&)> *const)&v67);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)&__b,
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDungeonEnter,void>(
          (std::shared_ptr<google::protobuf::Message> *const)&__a,
          (const std::shared_ptr<proto_log::PlayerLogBodyDungeonEnter> *)(v6 + 160));
        Player::printStatLog(player, (MessagePtr *)&__a, (MessagePtr *)&__b, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__a);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__b);
        v10 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyDungeonEnter>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDungeonEnter> *const)(v6 + 160));
      }
    }
    else
    {
      v10 = -1;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v6 + 48));
  result = v10;
  if ( v49 == (char *)v6 )
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

// Line 626: range 00000000141A6C9C-00000000141A6D01
ForeachPolicy __cdecl PlayerDungeonComp::enterDungeon(std::shared_ptr<DungeonScene>,unsigned int,unsigned int,Vector3 const&,Vector3 const&)::{lambda(Avatar &)#1}::operator()(
        const PlayerDungeonComp::enterDungeon::<lambda(Avatar&)>_0 *const __closure,
        Avatar *avatar)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  proto_log::AvatarLog *v3; // rdx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDungeonEnter,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure->__enter_dungeon_log_ptr);
  v3 = proto_log::PlayerLogBodyDungeonEnter::add_avatar_list(v2);
  Avatar::getAvatarLog(avatar, v3);
  return 0;
};

// Line 641: range 00000000141A7920-00000000141A83DC
int32_t __cdecl PlayerDungeonComp::checkEnterSpecialDungeon(
        const PlayerDungeonComp *const this,
        const data::DungeonExcelConfig *dungeon_excel_config,
        DungeonCandidateTeam *dungeon_candidate_team)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const std::shared_ptr<Player> *v8; // rax
  int v9; // r15d
  Player *v10; // rax
  PlayerMechanicusComp *MechanicusComp; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  PlayerMechanicusComp *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const std::shared_ptr<Player> *v21; // rax
  int v22; // r15d
  Player *v23; // rax
  PlayerActivityComp *ActivityComp; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int v29; // r15d
  PlayerActivityComp *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-124h] BYREF
  int32_t ret_0; // [rsp+30h] [rbp-120h]
  int32_t ret; // [rsp+34h] [rbp-11Ch]
  uint32_t difficult_level; // [rsp+38h] [rbp-118h]
  uint32_t player_count; // [rsp+3Ch] [rbp-114h]
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+40h] [rbp-110h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+48h] [rbp-108h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range_0; // [rsp+50h] [rbp-100h]
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v45; // [rsp+60h] [rbp-F0h] BYREF
  char v46[208]; // [rsp+80h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 14 dungeon_id:642 48 4 7 ret:672 64 16 24 candidate_player_ptr:699 96 24 18 player_ptr_vec:697";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::checkEnterSpecialDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -219021312;
  v6[536862723] = -218103808;
  v6[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_excel_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_excel_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_excel_config->id);
  }
  *(_DWORD *)(v4 + 32) = dungeon_excel_config->id;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_excel_config->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_excel_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_excel_config->type >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&dungeon_excel_config->type);
  }
  switch ( dungeon_excel_config->type )
  {
    case DUNGEON_THEATRE_MECHANICUS:
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 64));
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      difficult_level = TreatreMechanicusExcelConfigMgr::findDungeonDifficultLevel(
                          &v7->design_config.txt_config_mgr.mechanicus_config_mgr,
                          *(_DWORD *)(v4 + 32));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
      if ( DungeonCandidateTeam::isVaild(dungeon_candidate_team) )
      {
        std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 96));
        DungeonCandidateTeam::getAllPlayerPtrVec(
          dungeon_candidate_team,
          (std::vector<std::shared_ptr<Player>> *)(v4 + 96));
        player_count = DungeonCandidateTeam::getPlayerCount(dungeon_candidate_team);
        __for_range = (std::vector<std::shared_ptr<Player>> *)(v4 + 96);
        __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v4 + 96))._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v4 + 96))._M_current;
        while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  &__for_begin,
                  &__for_end) )
        {
          v8 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v4 + 64), v8);
          if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "checkEnterSpecialDungeon",
              658);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v45,
              (const char (*)[22])"player_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v45);
            v9 = 0;
          }
          else
          {
            v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            MechanicusComp = Player::getMechanicusComp(v10);
            *(_DWORD *)(v4 + 48) = PlayerMechanicusComp::checkEnterDungeon(
                                     MechanicusComp,
                                     difficult_level,
                                     player_count);
            if ( *(_DWORD *)(v4 + 48) )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/player_dungeon_comp.cpp",
                "checkEnterSpecialDungeon",
                664);
              v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v45, (const char (*)[5])"uid:");
              v13 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              val = Player::getUid(v13);
              v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
              v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      v14,
                      (const char (*)[24])" checkEnterDungeon ret:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v4 + 48));
              common::milog::MiLogStream::~MiLogStream(&v45);
              v3 = *(_DWORD *)(v4 + 48);
              v9 = 1;
            }
            else
            {
              v9 = 2;
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
          if ( v9 && v9 != 2 )
          {
            v16 = 0;
            goto LABEL_22;
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
        }
        v16 = 1;
LABEL_22:
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 96));
        if ( v16 == 1 )
          goto LABEL_30;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = Player::getMechanicusComp(this->player_);
        *(_DWORD *)(v4 + 48) = PlayerMechanicusComp::checkEnterDungeon(v17, difficult_level, 1u);
        if ( !*(_DWORD *)(v4 + 48) )
        {
LABEL_30:
          v3 = 0;
          goto LABEL_53;
        }
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "checkEnterSpecialDungeon",
          675);
        v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v45, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v19,
                (const char (*)[24])" checkEnterDungeon ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v45);
        v3 = *(_DWORD *)(v4 + 48);
      }
LABEL_53:
      result = v3;
      if ( v46 == (char *)v4 )
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
    case DUNGEON_FLEUR_FAIR:
    case DUNGEON_CHANNELLER_SLAB_LOOP:
    case DUNGEON_CHANNELLER_SLAB_ONE_OFF:
    case DUNGEON_BLITZ_RUSH:
    case DUNGEON_CHESS:
    case DUNGEON_HACHI:
    case DUNGEON_MINI_ELDRITCH:
    case DUNGEON_IRODORI_CHESS:
    case DUNGEON_SUMMER_V2:
    case DUNGEON_WIND_FIELD:
    case DUNGEON_EFFIGY_CHALLENGE_V2:
    case DUNGEON_TEAM_CHAIN:
      if ( DungeonCandidateTeam::isVaild(dungeon_candidate_team) )
      {
        std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 96));
        DungeonCandidateTeam::getAllPlayerPtrVec(
          dungeon_candidate_team,
          (std::vector<std::shared_ptr<Player>> *)(v4 + 96));
        __for_range_0 = (std::vector<std::shared_ptr<Player>> *)(v4 + 96);
        __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v4 + 96))._M_current;
        __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v4 + 96))._M_current;
        while ( 1 )
        {
          if ( !__gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                  &__for_begin,
                  &__for_end) )
          {
            v29 = 1;
            goto LABEL_44;
          }
          v21 = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
          std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v4 + 64), v21);
          if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "checkEnterSpecialDungeon",
              703);
            common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v45,
              (const char (*)[22])"player_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v45);
            v22 = 0;
          }
          else
          {
            v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
            ActivityComp = Player::getActivityComp(v23);
            ret = PlayerActivityComp::checkEnterActivityDungeon(ActivityComp, *(_DWORD *)(v4 + 32));
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/player_dungeon_comp.cpp",
                "checkEnterSpecialDungeon",
                710);
              v25 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                      &v45,
                      (const char (*)[40])"checkEnterActivityDungeon failed, uid: ");
              v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
              val = Player::getUid(v26);
              v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
              v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v27,
                      (const char (*)[15])" ,dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v4 + 32));
              common::milog::MiLogStream::~MiLogStream(&v45);
              v3 = ret;
              v22 = 1;
            }
            else
            {
              v22 = 2;
            }
          }
          std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
          if ( v22 )
          {
            if ( v22 != 2 )
              break;
          }
          __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
        }
        v29 = 0;
LABEL_44:
        std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v4 + 96));
        if ( v29 == 1 )
          goto LABEL_52;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v30 = Player::getActivityComp(this->player_);
        ret_0 = PlayerActivityComp::checkEnterActivityDungeon(v30, *(_DWORD *)(v4 + 32));
        if ( !ret_0 )
          goto LABEL_52;
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "checkEnterSpecialDungeon",
          720);
        v31 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v45,
                (const char (*)[40])"checkEnterActivityDungeon failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
        v33 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v32, (const char (*)[15])" ,dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v45);
        v3 = ret_0;
      }
      goto LABEL_53;
    default:
LABEL_52:
      v3 = 0;
      goto LABEL_53;
  }
};

// Line 734: range 00000000141A83DE-00000000141A84CA
uint32_t __cdecl PlayerDungeonComp::getDungeonEnterCount(PlayerDungeonComp *const this, uint32_t dungeon_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  time_t v3; // rcx
  uint32_t now; // [rsp+10h] [rbp-20h]
  uint32_t time_offset; // [rsp+14h] [rbp-1Ch]
  proto::DungeonRecordBin *dungeon_record_bin_ptr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-10h] BYREF

  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  v3 = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_dungeon_enter_time_);
  }
  if ( common::tools::TimeUtils::isSameDay(this->last_dungeon_enter_time_, v3, time_offset)
    && (dungeon_record_bin_ptr = PlayerDungeonComp::getDungeonDailyRecord(this, dungeon_id)) != 0LL )
  {
    return proto::DungeonRecordBin::enter_count(dungeon_record_bin_ptr);
  }
  else
  {
    return 0;
  }
};

// Line 750: range 00000000141A84CC-00000000141A85C4
bool __cdecl PlayerDungeonComp::isNeedSpecialRestartDungeon(
        PlayerDungeonComp *const this,
        DungeonScenePtr *p_dungeon_scene_ptr)
{
  DungeonScene *v3; // rax
  DungeonScene *v4; // rax
  DungeonScene *v5; // rax
  DungeonScene *v6; // rax
  DungeonScene *v7; // rax
  DungeonScene *v8; // rax
  DungeonScene *v9; // rax
  bool v10; // al

  if ( std::operator==<DungeonScene>(0LL, p_dungeon_scene_ptr) )
    return 0;
  v3 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
  v10 = 1;
  if ( !DungeonScene::isEnterBySumoActivity(v3) )
  {
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    if ( !DungeonScene::isEnterByMistTrialActivity(v4) )
    {
      v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      if ( !DungeonScene::isEnterByPotionActivity(v5) )
      {
        v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        if ( !DungeonScene::isEnterByCrystalLinkActivity(v6) )
        {
          v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
          if ( !DungeonScene::isEnterByMuqadasPotionActivity(v7) )
          {
            v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
            if ( !DungeonScene::isEnterByDuelHeartActivity(v8) )
            {
              v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
              if ( !DungeonScene::isEnterByTeamChainActivity(v9) )
                return 0;
            }
          }
        }
      }
    }
  }
  return v10;
};

// Line 771: range 00000000141A85C6-00000000141A872C
bool __cdecl PlayerDungeonComp::isInDungeon(const PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  data::SceneType SceneType; // eax
  bool isDungeonScene; // r14
  bool result; // al
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:772";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::isInDungeon;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 32), 0LL) )
  {
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SceneType = Scene::getSceneType(v4);
    isDungeonScene = SceneExcelConfigMgr::isDungeonScene(SceneType);
  }
  else
  {
    isDungeonScene = 0;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 32));
  result = isDungeonScene;
  if ( v8 == (char *)v1 )
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

// Line 782: range 00000000141A872E-00000000141A883E
bool __cdecl PlayerDungeonComp::isDungeonSceneUnSettled(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool v4; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool result; // al
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 dungeon_scene_ptr:783";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::isDungeonSceneUnSettled;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 32)) )
  {
    v4 = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v4 = DungeonScene::getDungeonResult(v5) == DUNGEON_RESULT_NONE;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = v4;
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

// Line 794: range 00000000141A8840-00000000141A8AC0
DungeonScenePtr __cdecl PlayerDungeonComp::getCurDungeon(PlayerDungeonComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  DungeonScenePtr result; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-A0h] BYREF
  char v8[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 scene_ptr:795 64 16 21 dungeon_scene_ptr:796";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::getCurDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(*(Player *const *)(v1 + 24));
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getCurDungeon",
      799);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v7,
           (const char (*)[26])"dungeon_scene_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, *(const Player **)(v1 + 24));
    common::milog::MiLogStream::~MiLogStream(&v7);
    std::shared_ptr<DungeonScene>::shared_ptr((std::shared_ptr<DungeonScene> *const)this, 0LL);
  }
  else
  {
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)this,
      (std::shared_ptr<DungeonScene> *)(v2 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  if ( v8 == (char *)v2 )
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
  result._M_ptr = (std::__shared_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 806: range 00000000141A8AC2-00000000141A8BCF
uint32_t __cdecl PlayerDungeonComp::getCurDungeonId(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t DungeonId; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t result; // eax
  char v7[112]; // [rsp+10h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 dungeon_ptr:807";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::getCurDungeonId;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    DungeonId = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonId = DungeonScene::getDungeonId(v5);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = DungeonId;
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

// Line 819: range 00000000141A8BD0-00000000141A96F5
int32_t __cdecl PlayerDungeonComp::quitToOtherScene(
        PlayerDungeonComp *const this,
        DungeonScenePtr *p_dungeon_scene_ptr,
        proto_log::DungeonQuitReason quit_dungeon_reason)
{
  int first; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int32 enter_point_id; // r8d
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // r15d
  int v23; // r15d
  Scene *v24; // rax
  bool v25; // r14
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-214h] BYREF
  const data::DungeonExcelConfig *dungeon_excel_config_ptr; // [rsp+30h] [rbp-210h]
  PlayerSceneComp *scene_comp; // [rsp+38h] [rbp-208h]
  std::pair<int,std::shared_ptr<DungeonScene> > v34; // [rsp+40h] [rbp-200h] BYREF
  EnterDungeonOption v35; // [rsp+60h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v36; // [rsp+80h] [rbp-1C0h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+A0h] [rbp-1A0h] BYREF
  TransferReason p_reason; // [rsp+D0h] [rbp-170h] BYREF
  char v39[304]; // [rsp+110h] [rbp-130h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 14 dungeon_id:822 64 4 16 next_dungeon:832 80 4 17 dest_scene_id:860 96 12 12 quit_pos:84"
                        "2 128 12 12 quit_rot:843 160 16 18 quit_scene_ptr:841 192 16 18 dest_scene_ptr:857 224 16 26 des"
                        "t_dungeon_scene_ptr:861";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::quitToOtherScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219020288;
  v6[536862724] = -219020288;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  if ( std::operator==<DungeonScene>(p_dungeon_scene_ptr, 0LL) )
  {
    first = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    *(_DWORD *)(v4 + 48) = DungeonScene::getDungeonId(v7);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 224));
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
    dungeon_excel_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                                 &v8->design_config.txt_config_mgr.dungeon_config_mgr,
                                 *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 224));
    if ( dungeon_excel_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_excel_config_ptr->pass_jump_dungeon >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_excel_config_ptr->pass_jump_dungeon >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_excel_config_ptr->pass_jump_dungeon);
      }
      *(_DWORD *)(v4 + 64) = dungeon_excel_config_ptr->pass_jump_dungeon;
      if ( !*(_DWORD *)(v4 + 64) )
        goto LABEL_16;
      v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
      if ( DungeonScene::getDungeonResult(v10) != DUNGEON_RESULT_SUCCEED )
        goto LABEL_16;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_excel_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_excel_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_excel_config_ptr->involve_type);
      }
      if ( dungeon_excel_config_ptr->involve_type == INVOLVE_ONLY_SINGLE )
        v11 = 1;
      else
LABEL_16:
        v11 = 0;
      if ( v11 )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "quitToOtherScene",
          835);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v36, (const char (*)[14])"enterDungeon ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v4 + 64));
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          v13,
          (const char (*)[30])" because of pass_jump_dungeon");
        common::milog::MiLogStream::~MiLogStream(&v36);
        memset(&v35, 0, sizeof(v35));
        EnterDungeonOption::EnterDungeonOption(&v35);
        memset(&level_config_id_map, 0, sizeof(level_config_id_map));
        std::map<unsigned int,unsigned int>::map(&level_config_id_map);
        if ( *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->enter_point_id_);
        }
        enter_point_id = this->enter_point_id_;
        if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->quit_scene_id_);
        }
        PlayerDungeonComp::enterDungeon(
          &v34,
          this,
          *(_DWORD *)(v4 + 64),
          this->quit_scene_id_,
          enter_point_id,
          &level_config_id_map,
          v35);
        first = v34.first;
        std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&v34);
        std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        scene_comp = Player::getSceneComp(this->player_);
        std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)(v4 + 160), 0LL);
        Vector3::Vector3((Vector3 *const)(v4 + 96), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v4 + 128), 0.0, 0.0, 0.0);
        PlayerDungeonComp::getQuitScenePosRot(
          (PlayerDungeonComp *const)(v4 + 224),
          (Vector3 *)this,
          (Vector3 *)(v4 + 96));
        std::shared_ptr<Scene>::operator=(
          (std::shared_ptr<Scene> *const)(v4 + 160),
          (std::shared_ptr<Scene> *)(v4 + 224));
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 224));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 160), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "quitToOtherScene",
            847);
          v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  &v36,
                  (const char (*)[32])"getQuitScenePosRot failed uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v16, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream(&v36);
          first = -1;
        }
        else
        {
          PlayerDungeonComp::clearQuitPosRot(this);
          PlayerDungeonComp::setEnterPointId(this, 0);
          PlayerDungeonComp::setIsJoinOtherScene(this, 0);
          if ( !PlayerSceneComp::isInTransfer(scene_comp) || quit_dungeon_reason != DUNGEON_QUIT_REASON_TIMEOUT )
            goto LABEL_44;
          PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v4 + 192));
          if ( !std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v4 + 192)) )
            goto LABEL_42;
          v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
          *(_DWORD *)(v4 + 80) = Scene::getSceneId(v18);
          std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 224));
          if ( std::operator!=<DungeonScene,DungeonScene>(
                 (const std::shared_ptr<DungeonScene> *)(v4 + 224),
                 p_dungeon_scene_ptr) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "quitToOtherScene",
              864);
            v19 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    &v36,
                    (const char (*)[50])"quitToOtherScene when player is in transfer uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
            v21 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v20,
                    (const char (*)[17])", dest_scene_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v36);
            first = 0;
            v22 = 0;
          }
          else
          {
            v22 = 1;
          }
          std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 224));
          if ( v22 == 1 )
LABEL_42:
            v23 = 1;
          else
            v23 = 0;
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 192));
          if ( v23 == 1 )
          {
LABEL_44:
            TransferReason::TransferReason(&p_reason, ENTER_REASON_DUNGEON_QUIT);
            v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            v25 = PlayerSceneComp::jumpToScene(
                    scene_comp,
                    v24,
                    (const Vector3 *)(v4 + 96),
                    (const Vector3 *)(v4 + 128),
                    0,
                    &p_reason) != 0;
            TransferReason::~TransferReason(&p_reason);
            if ( v25 )
            {
              common::milog::MiLogStream::create(
                &v36,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/dungeon/player_dungeon_comp.cpp",
                "quitToOtherScene",
                872);
              v26 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      &v36,
                      (const char (*)[19])"jumpToScene fails:");
              v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
              v28 = common::milog::MiLogStream::operator<<<Scene,(Scene*)0>(v26, v27);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              operator<<(v28, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v36);
              first = 1102;
            }
            else
            {
              first = 0;
            }
          }
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 160));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "quitToOtherScene",
        827);
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v36,
             (const char (*)[32])"findDungeonExcelConfig failed: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v36);
      first = -1;
    }
  }
  result = first;
  if ( v39 == (char *)v4 )
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

// Line 882: range 00000000141A96F6-00000000141A9AF3
int32_t __cdecl PlayerDungeonComp::quitCurDungeon(
        PlayerDungeonComp *const this,
        proto_log::DungeonQuitReason quit_dungeon_reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v6; // rcx
  int32_t v7; // r14d
  GameserverService *v8; // rax
  DungeonMgr *p_dungeon_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t DungeonId; // r15d
  uint32_t Uid; // eax
  DungeonScene *v13; // r15
  uint32_t v14; // eax
  int32_t result; // eax
  std::string v16; // [rsp+0h] [rbp-E0h]
  char *v17; // [rsp+8h] [rbp-D8h]
  signed int quit_dungeon_reasona; // [rsp+14h] [rbp-CCh]
  PlayerDungeonComp *thisa; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<DungeonScene> p_dungeon_scene_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&v16._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v16._anon_0._M_allocated_capacity) = quit_dungeon_reason;
  v2 = (unsigned __int64)v22;
  v16._M_string_length = (std::string::size_type)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:883 64 16 21 dungeon_scene_ptr:884";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::quitCurDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x57Au, v16);
  std::string::~string(&v21);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 64));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "quitCurDungeon",
      887);
    v6 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           (common::milog::MiLogStream *const)&v21,
           (const char (*)[20])"getCurDungeon fails");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v6, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v21);
    v7 = -1;
  }
  else
  {
    v8 = ServiceBox::findService<GameserverService>();
    p_dungeon_mgr = &GameserverService::getGameThreadLocal(v8)->dungeon_mgr;
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    DungeonId = DungeonScene::getDungeonId(v10);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(thisa->player_);
    DungeonMgr::delPlayerFromDungeon(p_dungeon_mgr, Uid, DungeonId, 0);
    v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = Player::getUid(thisa->player_);
    DungeonScene::setPlayerQuitReason(v13, v14, quit_dungeon_reasona);
    PlayerDungeonComp::procAvatars(thisa);
    std::shared_ptr<DungeonScene>::shared_ptr(&p_dungeon_scene_ptr, (const std::shared_ptr<DungeonScene> *)(v2 + 64));
    v7 = PlayerDungeonComp::quitToOtherScene(
           thisa,
           &p_dungeon_scene_ptr,
           (proto_log::DungeonQuitReason)quit_dungeon_reasona);
    std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_scene_ptr);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = v7;
  if ( v17 == (char *)v2 )
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

// Line 902: range 00000000141A9AF4-00000000141A9E70
ScenePtr __cdecl PlayerDungeonComp::getQuitScene(PlayerDungeonComp *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  Scene *v6; // r14
  uint32_t Uid; // eax
  ScenePtr result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-130h] BYREF
  char v10[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 12 12 quit_pos:903 80 12 12 quit_rot:904 112 16 18 quit_scene_ptr:905 144 48 19 player_location:912";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::getQuitScene;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862722] = 0x4000000;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  Vector3::Vector3((Vector3 *const)(v2 + 48), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v2 + 80), 0.0, 0.0, 0.0);
  PlayerDungeonComp::getQuitScenePosRot((PlayerDungeonComp *const)(v2 + 112), (Vector3 *)v1, (Vector3 *)(v2 + 48));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 112), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getQuitScene",
      908);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v9,
           (const char (*)[32])"findScene fails, quit_scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 40));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
  }
  else
  {
    ScenePlayerLocation::ScenePlayerLocation((ScenePlayerLocation *const)(v2 + 144));
    *(_QWORD *)(v2 + 144) = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 152) = *(_DWORD *)(v2 + 56);
    *(_QWORD *)(v2 + 156) = *(_QWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 164) = *(_DWORD *)(v2 + 88);
    *(_QWORD *)(v2 + 168) = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 176) = *(_DWORD *)(v2 + 56);
    *(_QWORD *)(v2 + 180) = *(_QWORD *)(v2 + 80);
    *(_DWORD *)(v2 + 188) = *(_DWORD *)(v2 + 88);
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(*(const Player *const *)(v1 + 24));
    Scene::setPlayerLocation(v6, Uid, (const ScenePlayerLocation *)(v2 + 144));
    std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, (std::shared_ptr<Scene> *)(v2 + 112));
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 112));
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 924: range 00000000141A9E72-00000000141AAB8A
ScenePtr __cdecl PlayerDungeonComp::getQuitScenePosRot(
        PlayerDungeonComp *const this,
        Vector3 *quit_pos,
        Vector3 *quit_rot)
{
  Vector3 *v3; // rcx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerSceneComp *SceneComp; // rax
  uint32_t v10; // eax
  uint32_t v12; // ecx
  PlayerSceneComp *v13; // rax
  char v14; // al
  uint32_t v15; // eax
  Player *v17; // rax
  uint32_t v18; // eax
  Player *v20; // rax
  uint32_t v21; // ecx
  PlayerSceneComp *v22; // rax
  uint32_t v23; // eax
  ScenePtr result; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  Vector3 *quit_rota; // [rsp+0h] [rbp-160h]
  const DungeonJsonConfig *dungeon_json_config_ptr; // [rsp+28h] [rbp-138h]
  std::shared_ptr<Scene> __r; // [rsp+30h] [rbp-130h] BYREF
  std::shared_ptr<Scene> v32; // [rsp+40h] [rbp-120h] BYREF
  std::shared_ptr<Scene> v33; // [rsp+50h] [rbp-110h] BYREF
  std::shared_ptr<Scene> v34; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+90h] [rbp-D0h] BYREF

  quit_rota = v3;
  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 12 scene_id:925 64 4 18 cur_dungeon_id:927 80 4 17 quit_scene_id:942 96 16 13 world_ptr:9"
                        "53 128 16 18 own_player_ptr:958";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::getQuitScenePosRot;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = 0;
  std::shared_ptr<Scene>::shared_ptr((std::shared_ptr<Scene> *const)this, 0LL);
  *(_DWORD *)(v4 + 64) = PlayerDungeonComp::getCurDungeonId((PlayerDungeonComp *const)quit_pos);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 128));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
  dungeon_json_config_ptr = JsonConfigMgr::findDungeonJsonConfig(
                              &v7->design_config.json_config_mgr,
                              *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
  if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    if ( !PlayerDungeonComp::getQuitPosRot(
            (const PlayerDungeonComp *const)quit_pos,
            (uint32_t *)(v4 + 48),
            quit_rot,
            quit_rota)
      && *(_DWORD *)(v4 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = (unsigned int)Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
      PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)&__r, v10);
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)this, &__r);
      std::shared_ptr<Scene>::~shared_ptr(&__r);
    }
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)this, 0LL) && dungeon_json_config_ptr )
    {
      if ( ((unsigned __int8)quit_rot & 7) >= *(_BYTE *)(((unsigned __int64)quit_rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)quit_rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&quit_rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)quit_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&quit_rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(quit_rot, 12LL);
      }
      if ( (((unsigned __int8)dungeon_json_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_pos >> 3)
                                                                            + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dungeon_json_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_pos.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load_n(&dungeon_json_config_ptr->exit_pos, 12LL);
      }
      *(_QWORD *)&quit_rot->x = *(_QWORD *)&dungeon_json_config_ptr->exit_pos.x;
      quit_rot->z = dungeon_json_config_ptr->exit_pos.z;
      if ( ((unsigned __int8)quit_rota & 7) >= *(_BYTE *)(((unsigned __int64)quit_rota >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)quit_rota >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&quit_rota->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)quit_rota + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&quit_rota->z + 3) >> 3)
                                                               + 0x7FFF8000) )
      {
        __asan_report_store_n(quit_rota, 12LL);
      }
      if ( (((unsigned __int8)dungeon_json_config_ptr + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_rot >> 3)
                                                                             + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dungeon_json_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_rot.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load_n(&dungeon_json_config_ptr->exit_rot, 12LL);
      }
      *(_QWORD *)&quit_rota->x = *(_QWORD *)&dungeon_json_config_ptr->exit_rot.x;
      quit_rota->z = dungeon_json_config_ptr->exit_rot.z;
      if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = (unsigned int)Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
      if ( *(_BYTE *)(((unsigned __int64)dungeon_json_config_ptr >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_json_config_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_json_config_ptr >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(dungeon_json_config_ptr);
      }
      PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)&v32, v12);
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)this, &v32);
      std::shared_ptr<Scene>::~shared_ptr(&v32);
    }
    *(_DWORD *)(v4 + 80) = 0;
    if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)this, 0LL) )
      goto LABEL_38;
    if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
    if ( PlayerSceneComp::getMyPrevSceneInfo(v13, (uint32_t *)(v4 + 80), quit_rot, quit_rota) )
LABEL_38:
      v14 = 0;
    else
      v14 = 1;
    if ( v14 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = (unsigned int)Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
      PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v4 + 96), v15);
      std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)this, (std::shared_ptr<Scene> *)(v4 + 96));
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 96));
    if ( !std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 96), 0LL) )
    {
      std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v4 + 128));
      if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 128), 0LL) )
      {
        if ( !PlayerDungeonComp::getQuitPosRot(
                (const PlayerDungeonComp *const)quit_pos,
                (uint32_t *)(v4 + 48),
                quit_rot,
                quit_rota)
          && *(_DWORD *)(v4 + 48) )
        {
          v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v18 = (unsigned int)Player::getSceneComp(v17);
          PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)&v33, v18);
          std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)this, &v33);
          std::shared_ptr<Scene>::~shared_ptr(&v33);
        }
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)this, 0LL) && dungeon_json_config_ptr )
        {
          if ( ((unsigned __int8)quit_rot & 7) >= *(_BYTE *)(((unsigned __int64)quit_rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)quit_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&quit_rot->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)quit_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&quit_rot->z + 3) >> 3)
                                                                  + 0x7FFF8000) )
          {
            __asan_report_store_n(quit_rot, 12LL);
          }
          if ( (((unsigned __int8)dungeon_json_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_pos >> 3)
                                                                                + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)dungeon_json_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&dungeon_json_config_ptr->exit_pos, 12LL);
          }
          *(_QWORD *)&quit_rot->x = *(_QWORD *)&dungeon_json_config_ptr->exit_pos.x;
          quit_rot->z = dungeon_json_config_ptr->exit_pos.z;
          if ( ((unsigned __int8)quit_rota & 7) >= *(_BYTE *)(((unsigned __int64)quit_rota >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)quit_rota >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&quit_rota->z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)quit_rota + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&quit_rota->z + 3) >> 3)
                                                                   + 0x7FFF8000) )
          {
            __asan_report_store_n(quit_rota, 12LL);
          }
          if ( (((unsigned __int8)dungeon_json_config_ptr + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_rot >> 3)
                                                                                 + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&dungeon_json_config_ptr->exit_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)dungeon_json_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&dungeon_json_config_ptr->exit_rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&dungeon_json_config_ptr->exit_rot, 12LL);
          }
          *(_QWORD *)&quit_rota->x = *(_QWORD *)&dungeon_json_config_ptr->exit_rot.x;
          quit_rota->z = dungeon_json_config_ptr->exit_rot.z;
          v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          v21 = (unsigned int)Player::getSceneComp(v20);
          if ( *(_BYTE *)(((unsigned __int64)dungeon_json_config_ptr >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dungeon_json_config_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_json_config_ptr >> 3)
                                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4(dungeon_json_config_ptr);
          }
          PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)&v34, v21);
          std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)this, &v34);
          std::shared_ptr<Scene>::~shared_ptr(&v34);
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 128));
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 96));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)this, 0LL) )
    {
      *(_DWORD *)(v4 + 80) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
      if ( !PlayerSceneComp::getMyPrevSceneInfo(v22, (uint32_t *)(v4 + 80), quit_rot, quit_rota) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v23 = (unsigned int)Player::getSceneComp(*(Player *const *)&quit_pos[2].x);
        PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v4 + 128), v23);
        std::shared_ptr<Scene>::operator=((std::shared_ptr<Scene> *const)this, (std::shared_ptr<Scene> *)(v4 + 128));
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
      }
    }
  }
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)this, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getQuitScenePosRot",
      989);
    v25 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v35,
            (const char (*)[29])" get quit scene failed uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&quit_pos[2] >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 80) = Player::getUid(*(const Player *const *)&quit_pos[2].x);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 80));
    v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])" dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 64));
    common::milog::MiLogStream::~MiLogStream(&v35);
  }
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 995: range 00000000141AAB8C-00000000141AB11E
__int64 __fastcall PlayerDungeonComp::getQuitPosRotByPointId(
        const PlayerDungeonComp *const this,
        uint32_t scene_id,
        uint32_t point_id,
        Vector3 *pos,
        Vector3 *rot)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  unsigned int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 result; // rax
  Vector3 v23; // [rsp+24h] [rbp-CCh] BYREF
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+60h] [rbp-90h] BYREF

  v5 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 12 scene_id:994 48 4 12 point_id:994 64 16 14 point_ptr:1001";
  *(_QWORD *)(v5 + 16) = PlayerDungeonComp::getQuitPosRotByPointId;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -202178560;
  *(_DWORD *)(v5 + 32) = scene_id;
  *(_DWORD *)(v5 + 48) = point_id;
  if ( *(_DWORD *)(v5 + 32) && *(_DWORD *)(v5 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v9 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    JsonConfigMgr::findScenePoint((const JsonConfigMgr *const)(v5 + 64), v9 + 93080, *(_DWORD *)(v5 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( std::operator==<data::ConfigScenePoint>((const std::shared_ptr<data::ConfigScenePoint> *)(v5 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "getQuitPosRotByPointId",
        1004);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v25, (const char (*)[16])"findScenePoint ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v11, (const char (*)[2])":");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v13, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v25);
      v8 = -1;
    }
    else
    {
      v14 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      Vector3::Vector3(&v23, &v14->tran_pos);
      if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(pos, 12LL);
      }
      *pos = v23;
      v15 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      Vector3::Vector3(&v23, &v15->tran_rot);
      if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(rot, 12LL);
      }
      *rot = v23;
      v16 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      if ( *(char *)(((unsigned __int64)&v16->tran_pos.is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        v16 = (std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v16->tran_pos.is_json_loaded);
      if ( !v16->tran_pos.is_json_loaded )
      {
        v17 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        Vector3::Vector3(&v23, &v17->pos);
        if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(pos, 12LL);
        }
        *pos = v23;
        v18 = std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigScenePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
        Vector3::Vector3(&v23, &v18->rot);
        if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(rot, 12LL);
        }
        *rot = v23;
      }
      v8 = 0;
    }
    std::shared_ptr<data::ConfigScenePoint>::~shared_ptr((std::shared_ptr<data::ConfigScenePoint> *const)(v5 + 64));
  }
  else
  {
    v8 = -1;
  }
  result = v8;
  if ( v26 == (char *)v5 )
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

// Line 1018: range 00000000141AB120-00000000141AB391
int32_t __cdecl PlayerDungeonComp::setQuitPosRot(
        PlayerDungeonComp *const this,
        uint32_t scene_id,
        const Vector3 *position,
        const Vector3 *rotation)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_has_quit_target_pos_);
  }
  this->is_has_quit_target_pos_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quit_scene_id_);
  }
  this->quit_scene_id_ = scene_id;
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->quit_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->quit_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->quit_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->quit_pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->quit_pos_, 12LL);
  }
  if ( ((unsigned __int8)position & 7) >= *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)position >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)position + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&position->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(position, 12LL);
  }
  this->quit_pos_ = *position;
  if ( *(char *)(((unsigned __int64)&this->quit_rot_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->quit_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&this->quit_rot_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(&this->quit_rot_, 12LL);
  }
  if ( ((unsigned __int8)rotation & 7) >= *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)rotation >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&rotation->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)rotation + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rotation->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(rotation, 12LL);
  }
  this->quit_rot_ = *rotation;
  return 0;
};

// Line 1027: range 00000000141AB392-00000000141AB43E
void __cdecl PlayerDungeonComp::clearQuitPosRot(PlayerDungeonComp *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_has_quit_target_pos_);
  }
  this->is_has_quit_target_pos_ = 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->quit_scene_id_);
  }
  this->quit_scene_id_ = 0;
  Vector3::reset(&this->quit_pos_);
  Vector3::reset(&this->quit_rot_);
};

// Line 1035: range 00000000141AB440-00000000141AB6FE
int32_t __cdecl PlayerDungeonComp::getQuitPosRot(
        const PlayerDungeonComp *const this,
        uint32_t *scene_id,
        Vector3 *quit_pos,
        Vector3 *quit_rot)
{
  uint32_t quit_scene_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_has_quit_target_pos_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_has_quit_target_pos_);
  }
  if ( !this->is_has_quit_target_pos_ )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quit_scene_id_);
  }
  quit_scene_id = this->quit_scene_id_;
  if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(scene_id);
  }
  *scene_id = quit_scene_id;
  if ( ((unsigned __int8)quit_pos & 7) >= *(_BYTE *)(((unsigned __int64)quit_pos >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)quit_pos >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&quit_pos->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)quit_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&quit_pos->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(quit_pos, 12LL);
  }
  if ( (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->quit_pos_ >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->quit_pos_ >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->quit_pos_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)((((unsigned __int64)&this->quit_pos_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->quit_pos_, 12LL);
  }
  *quit_pos = this->quit_pos_;
  if ( ((unsigned __int8)quit_rot & 7) >= *(_BYTE *)(((unsigned __int64)quit_rot >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)quit_rot >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&quit_rot->z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)quit_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&quit_rot->z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(quit_rot, 12LL);
  }
  if ( *(char *)(((unsigned __int64)&this->quit_rot_ >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&this->quit_rot_.z + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 67) & 7) >= *(_BYTE *)((((unsigned __int64)&this->quit_rot_.z + 3) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load_n(&this->quit_rot_, 12LL);
  }
  *quit_rot = this->quit_rot_;
  return 0;
};

// Line 1048: range 00000000141AB700-00000000141AB7C6
int32_t __cdecl PlayerDungeonComp::clear(PlayerDungeonComp *const this)
{
  GameserverService *v1; // rax
  DungeonMgr *p_dungeon_mgr; // rbx
  uint32_t Uid; // eax

  v1 = ServiceBox::findService<GameserverService>();
  p_dungeon_mgr = &GameserverService::getGameThreadLocal(v1)->dungeon_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  DungeonMgr::delPlayerFromAllDungeon(p_dungeon_mgr, Uid, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_dungeon_enter_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->last_dungeon_enter_time_);
  }
  this->last_dungeon_enter_time_ = 0;
  proto::PlayerDungeonRecordBin::Clear(&this->dungeon_record_bin_);
  return 0;
};

// Line 1057: range 00000000141AB7C8-00000000141AC158
int32_t __cdecl PlayerDungeonComp::onAllAvatarDie(
        PlayerDungeonComp *const this,
        proto::PlayerDieType die_type,
        uint32_t murderer_entity_id)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerAvatarComp *AvatarComp; // rax
  DungeonScene *v9; // r15
  uint32_t Uid; // eax
  DungeonScene *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  DungeonScene *v16; // rax
  int v17; // r15d
  RogueDiaryActivity *v18; // rax
  RogueDiaryRuntimeMgr *RuntimeMgr; // rax
  std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  uint32_t CurDungeonId; // eax
  std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  DungeonScene *v23; // rax
  std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  Entity *v28; // rcx
  PlayerMpComp *MpComp; // rax
  DungeonScene *v30; // r14
  std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  google::protobuf::Map<unsigned int,proto::StrengthenPointData> *v32; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  Player *player; // r14
  int32_t result; // eax
  bool is_need_die_notify; // [rsp+27h] [rbp-D9h]
  google::protobuf::uint32 revive_count; // [rsp+28h] [rbp-D8h]
  google::protobuf::uint32 revive_wait_time; // [rsp+2Ch] [rbp-D4h]
  common::milog::MiLogStream v41; // [rsp+30h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 16 22 dungeon_scene_ptr:1058 64 16 15 notify_ptr:1123 96 16 29 rogue_diary_activity_ptr:1111";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::onAllAvatarDie;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v4 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onAllAvatarDie",
      1061);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v41,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v3 = -1;
    goto LABEL_49;
  }
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( DungeonScene::getDungeonResult(v7) )
  {
    v3 = 0;
    goto LABEL_49;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::isRevivableAfterAllDead(AvatarComp) )
  {
    v3 = 0;
    goto LABEL_49;
  }
  v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  DungeonScene::onPlayerAllAvatarDie(v9, Uid);
  is_need_die_notify = 1;
  v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( !DungeonScene::isAllAvatarDead(v11) )
    goto LABEL_30;
  v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( DungeonScene::getDungeonType(v12) == DUNGEON_EFFIGY )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onAllAvatarDie",
      1087);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v41,
      (const char (*)[45])"effigy dungeon scene team avatar all dead!!!");
    common::milog::MiLogStream::~MiLogStream(&v41);
    is_need_die_notify = 0;
LABEL_30:
    if ( is_need_die_notify )
    {
      common::tools::perf::make_shared<proto::DungeonPlayerDieNotify>();
      v20 = std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      CurDungeonId = PlayerDungeonComp::getCurDungeonId(this);
      proto::DungeonPlayerDieNotify::set_dungeon_id(v20, CurDungeonId);
      v22 = std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto::DungeonPlayerDieNotify::set_die_type(v22, die_type);
      v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      revive_count = DungeonScene::getAllPlayerReviveCount(v23);
      v24 = std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto::DungeonPlayerDieNotify::set_revive_count(v24, revive_count);
      if ( murderer_entity_id )
      {
        v25 = (unsigned __int64)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8();
        v26 = *(_QWORD *)v25 + 120LL;
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v26)(v4 + 96, v25, murderer_entity_id);
        if ( std::operator!=<Entity>((const std::shared_ptr<Entity> *)(v4 + 96), 0LL) )
        {
          v27 = std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v28 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          PlayerDungeonComp::setMurdererEntityProtoInfo(this, v28, v27);
        }
        std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 96));
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      if ( !PlayerMpComp::isInMpMode(MpComp) )
      {
        v30 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v31 = std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        v32 = proto::DungeonPlayerDieNotify::mutable_strengthen_point_data_map(v31);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        DungeonScene::getDungeonStrengthenPointData(v30, this->player_, v32);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v4 + 96));
      v33 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      revive_wait_time = ConstValueExcelConfigMgr::getDungeonReviveWaitTime(&v33->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
      v34 = std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonPlayerDieNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto::DungeonPlayerDieNotify::set_wait_time(v34, revive_wait_time);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonPlayerDieNotify>((const std::shared_ptr<proto::DungeonPlayerDieNotify> *)(v4 + 96));
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v4 + 96), 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v4 + 96));
      std::shared_ptr<proto::DungeonPlayerDieNotify>::~shared_ptr((std::shared_ptr<proto::DungeonPlayerDieNotify> *const)(v4 + 64));
    }
    v3 = 0;
    goto LABEL_49;
  }
  v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( DungeonScene::getDungeonType(v13) == DUNGEON_FLEUR_FAIR )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onAllAvatarDie",
      1093);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      &v41,
      (const char (*)[49])"fleur fair dungeon scene team avatar all dead!!!");
    common::milog::MiLogStream::~MiLogStream(&v41);
    is_need_die_notify = 0;
    goto LABEL_30;
  }
  v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( DungeonScene::getDungeonType(v14) == DUNGEON_CHANNELLER_SLAB_LOOP )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onAllAvatarDie",
      1099);
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      &v41,
      (const char (*)[59])"channeller slab loop dungeon scene team avatar all dead!!!");
    common::milog::MiLogStream::~MiLogStream(&v41);
    is_need_die_notify = 0;
    goto LABEL_30;
  }
  v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( DungeonScene::getDungeonType(v15) == DUNGEON_WIND_FIELD )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onAllAvatarDie",
      1105);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      &v41,
      (const char (*)[62])"[WIND_FIELD] wind field dungeon scene team avatar all dead!!!");
    common::milog::MiLogStream::~MiLogStream(&v41);
    is_need_die_notify = 0;
    goto LABEL_30;
  }
  v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  if ( !DungeonScene::isEnterByRogueDiaryActivity(v16) )
    goto LABEL_30;
  is_need_die_notify = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<RogueDiaryActivity>((PlayerActivityComp *const)(v4 + 96));
  if ( std::operator==<RogueDiaryActivity>(0LL, (const std::shared_ptr<RogueDiaryActivity> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onAllAvatarDie",
      1114);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v41,
      (const char (*)[36])"rogue_diary_activity_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v41);
    v3 = -1;
    v17 = 0;
  }
  else
  {
    v18 = std::__shared_ptr_access<RogueDiaryActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RogueDiaryActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    RuntimeMgr = RogueDiaryActivity::getRuntimeMgr(v18);
    RogueDiaryRuntimeMgr::onAllAvatarDie(RuntimeMgr);
    v17 = 1;
  }
  std::shared_ptr<RogueDiaryActivity>::~shared_ptr((std::shared_ptr<RogueDiaryActivity> *const)(v4 + 96));
  if ( v17 == 1 )
    goto LABEL_30;
LABEL_49:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 32));
  result = v3;
  if ( v42 == (char *)v4 )
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

// Line 1150: range 00000000141AC15A-00000000141AC4DC
void __cdecl PlayerDungeonComp::setMurdererEntityProtoInfo(
        PlayerDungeonComp *const this,
        Entity *murderer_entity,
        proto::DungeonPlayerDieNotify *notify)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t EntityId; // edx
  unsigned __int64 v7; // rax
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t MonsterId; // edx
  unsigned __int64 v10; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t GadgetId; // edx
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 gadget_ptr:1166";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::setMurdererEntityProtoInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  EntityId = Entity::getEntityId(murderer_entity);
  proto::DungeonPlayerDieNotify::set_murderer_entity_id(notify, EntityId);
  if ( *(_BYTE *)(((unsigned __int64)murderer_entity >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(murderer_entity->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(Entity *))v7)(murderer_entity) == 2 )
  {
    toPtr<Monster,Entity>((Entity *)(v3 + 32));
    if ( std::operator!=<Monster>(0LL, (const std::shared_ptr<Monster> *)(v3 + 32)) )
    {
      v8 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      MonsterId = Monster::getMonsterId(v8);
      proto::DungeonPlayerDieNotify::set_monster_id(notify, MonsterId);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "setMurdererEntityProtoInfo",
        1161);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        &v14,
        (const char (*)[36])"dynamic_pointer_cast monster failed");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v3 + 32));
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)murderer_entity >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = (unsigned __int64)(murderer_entity->_vptr_DescribalBase + 3);
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(Entity *))v10)(murderer_entity) == 4 )
    {
      toPtr<Gadget,Entity>((Entity *)(v3 + 32));
      if ( std::operator!=<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v3 + 32)) )
      {
        v11 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        GadgetId = Gadget::getGadgetId(v11);
        proto::DungeonPlayerDieNotify::set_gadget_id(notify, GadgetId);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "setMurdererEntityProtoInfo",
          1173);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          &v14,
          (const char (*)[35])"dynamic_pointer_cast Gadget failed");
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v3 + 32));
    }
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1179: range 00000000141AC58A-00000000141AC97E
int32_t __cdecl PlayerDungeonComp::revivePlayer(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rcx
  int32_t result; // eax
  PlayerAvatarComp *avatar_comp; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Avatar> p_reborn_avatar_ptr__out; // [rsp+20h] [rbp-C0h] BYREF
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v11[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 19 cur_avatar_ptr:1190 64 16 22 reborn_avatar_ptr:1196";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::revivePlayer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  avatar_comp = Player::getAvatarComp(this->player_);
  std::function<ForeachPolicy ()(Avatar &)>::function<PlayerDungeonComp::revivePlayer(void)::{lambda(Avatar &)#1},void,void>(
    &p_func,
    (PlayerDungeonComp::revivePlayer::<lambda(Avatar&)>)this);
  PlayerAvatarComp::foreachMyAvatarInSceneTeam(avatar_comp, &p_func);
  std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
  PlayerAvatarComp::setIsAllDieEnterScene(avatar_comp, 1);
  PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v1 + 32));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "revivePlayer",
      1193);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[19])"getCurAvatar fails");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    v5 = -1;
  }
  else
  {
    PlayerAvatarComp::getMyFirstAvatarInSceneTeam((PlayerAvatarComp *const)(v1 + 64));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "revivePlayer",
        1199);
      v6 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             (common::milog::MiLogStream *const)&p_func,
             (const char (*)[29])"getCurAvatarTeamLeader fails");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
      v5 = -1;
    }
    else
    {
      std::shared_ptr<Avatar>::shared_ptr(&p_reborn_avatar_ptr__out, (const std::shared_ptr<Avatar> *)(v1 + 64));
      PlayerAvatarComp::setRebornAvatar(avatar_comp, &p_reborn_avatar_ptr__out);
      std::shared_ptr<Avatar>::~shared_ptr(&p_reborn_avatar_ptr__out);
      v5 = 0;
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 64));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
  result = v5;
  if ( v11 == (char *)v1 )
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

// Line 1181: range 00000000141AC4DE-00000000141AC588
ForeachPolicy __cdecl PlayerDungeonComp::revivePlayer(void)::{lambda(Avatar &)#1}::operator()(
        const PlayerDungeonComp::revivePlayer::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  float ReviveHpPercent; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ReviveHpPercent = (float)(int)PlayerDungeonComp::getReviveHpPercent(__closure->__this);
  Creature::setCurHpPercent(avatar, ReviveHpPercent, CHANGE_HP_ADD_REVIVE, 1);
  Avatar::clearSpeed(avatar);
  Avatar::setLifeAlive(avatar, 0x66u, 0LL, 1);
  return 0;
};

// Line 1208: range 00000000141AC980-00000000141ACC33
int32_t __cdecl PlayerDungeonComp::reviveAndTransferPlayer(
        PlayerDungeonComp *const this,
        DungeonScene *dungeon_scene,
        const Vector3 *revive_pos,
        const Vector3 *revive_rot,
        proto::EnterReason enter_reason)
{
  common::milog::MiLogStream *v5; // rbx
  Player *player; // rbx
  common::milog::MiLogStream *v8; // rbx
  unsigned int val; // [rsp+30h] [rbp-60h] BYREF
  proto::VisionType vision_type; // [rsp+34h] [rbp-5Ch]
  proto::EnterType enter_scene_type; // [rsp+38h] [rbp-58h]
  int32_t ret; // [rsp+3Ch] [rbp-54h]
  std::shared_ptr<DungeonScene> __r; // [rsp+40h] [rbp-50h] BYREF
  std::shared_ptr<Scene> p_dest_scene_ptr; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-30h] BYREF

  ret = PlayerDungeonComp::revivePlayer(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "reviveAndTransferPlayer",
      1212);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v18,
           (const char (*)[26])"revivePlayer failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return ret;
  }
  else
  {
    vision_type = VISION_WAYPOINT_REBORN;
    enter_scene_type = ENTER_GOTO;
    if ( enter_reason == ENTER_REASON_DUNGEON_REPLAY )
    {
      enter_scene_type = ENTER_DUNGEON_REPLAY;
      vision_type = VISION_REBORN;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    toThisPtr<DungeonScene>((DungeonScene *)&__r);
    std::shared_ptr<Scene>::shared_ptr<DungeonScene,void>(&p_dest_scene_ptr, &__r);
    ret = Player::beginEnterScene(
            player,
            &p_dest_scene_ptr,
            revive_pos,
            revive_rot,
            enter_scene_type,
            vision_type,
            0,
            0,
            enter_reason);
    std::shared_ptr<Scene>::~shared_ptr(&p_dest_scene_ptr);
    std::shared_ptr<DungeonScene>::~shared_ptr(&__r);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "reviveAndTransferPlayer",
        1225);
      v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v18,
             (const char (*)[33])"beginTransToScenePos fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      return ret;
    }
    else
    {
      return 0;
    }
  }
};

// Line 1234: range 00000000141ACC34-00000000141AD59D
int32_t __cdecl PlayerDungeonComp::reviveBySlip(PlayerDungeonComp *const this, uint32_t die_type)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  DungeonScene *v7; // rax
  DungeonScene *v8; // rax
  uint32_t v9; // eax
  uint32_t v10; // eax
  DungeonScene *v11; // rax
  int v12; // r15d
  RogueDiaryActivity *v13; // rax
  RogueDiaryRuntimeMgr *RuntimeMgr; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  DungeonScene *v19; // rax
  DungeonScene *v20; // r14
  uint32_t Uid; // eax
  Player *player; // r14
  int32_t result; // eax
  uint32_t last_activate_point_id; // [rsp+28h] [rbp-158h]
  uint32_t scene_id; // [rsp+2Ch] [rbp-154h]
  uint32_t p; // [rsp+30h] [rbp-150h]
  int32_t ret; // [rsp+34h] [rbp-14Ch]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-148h]
  std::shared_ptr<DungeonScene> __r; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-130h] BYREF
  char v31[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 30 way_point_point_time_pair:1246 64 8 27 slip_revive_point_pair:1247 96 12 15 revive_pos"
                        ":1243 128 12 15 revive_rot:1244 160 16 22 dungeon_scene_ptr:1235 192 16 29 rogue_diary_activity_ptr:1262";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::reviveBySlip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219020288;
  v5[536862724] = -219020288;
  v5[536862725] = -219021312;
  v5[536862726] = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 160));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "reviveBySlip",
      1238);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v30,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v2 = -1;
    goto LABEL_43;
  }
  Vector3::Vector3((Vector3 *const)(v3 + 96), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v3 + 128), 0.0, 0.0, 0.0);
  v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  scene_id = Scene::getSceneId((const Scene *const)v6);
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  *(std::pair<unsigned int,unsigned int> *)(v3 + 32) = DungeonScene::findLastestActivatedWayPoint(v7);
  v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = DungeonScene::findLastestActivatedSlipRevivePoint(v8);
  if ( *(_DWORD *)(v3 + 32) && *(_DWORD *)(v3 + 64) )
  {
    if ( *(_DWORD *)(v3 + 36) <= *(_DWORD *)(v3 + 68) )
      v9 = *(_DWORD *)(v3 + 64);
    else
      v9 = *(_DWORD *)(v3 + 32);
    last_activate_point_id = v9;
  }
  else
  {
    if ( *(_DWORD *)(v3 + 32) )
      v10 = *(_DWORD *)(v3 + 32);
    else
      v10 = *(_DWORD *)(v3 + 64);
    last_activate_point_id = v10;
  }
  v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  if ( !DungeonScene::isEnterByRogueDiaryActivity(v11) )
  {
    if ( last_activate_point_id )
    {
      if ( PlayerDungeonComp::getAndProcDungeonRevivePoint(
             this,
             scene_id,
             last_activate_point_id,
             (Vector3 *)(v3 + 96),
             (Vector3 *)(v3 + 128)) )
      {
        v2 = -1;
        goto LABEL_43;
      }
    }
    else
    {
      v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      scene_script_config_ptr = Scene::getScriptConfig((const Scene *const)v15);
      if ( !scene_script_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "reviveBySlip",
          1287);
        v16 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                &v30,
                (const char (*)[22])"getScriptConfig fails");
        v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v16, v17);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v2 = -1;
        goto LABEL_43;
      }
      if ( (((unsigned __int8)scene_script_config_ptr - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3)
                                                                             + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)scene_script_config_ptr - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load_n(&scene_script_config_ptr->born_pos, 12LL);
      }
      *(_QWORD *)(v3 + 96) = *(_QWORD *)&scene_script_config_ptr->born_pos.x;
      *(float *)(v3 + 104) = scene_script_config_ptr->born_pos.z;
      if ( *(char *)(((unsigned __int64)&scene_script_config_ptr->born_rot >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)scene_script_config_ptr - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load_n(&scene_script_config_ptr->born_rot, 12LL);
      }
      *(_QWORD *)(v3 + 128) = *(_QWORD *)&scene_script_config_ptr->born_rot.x;
      *(float *)(v3 + 136) = scene_script_config_ptr->born_rot.z;
    }
    goto LABEL_36;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<RogueDiaryActivity>((PlayerActivityComp *const)(v3 + 192));
  if ( std::operator==<RogueDiaryActivity>(0LL, (const std::shared_ptr<RogueDiaryActivity> *)(v3 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "reviveBySlip",
      1265);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v30,
      (const char (*)[36])"rogue_diary_activity_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v2 = -1;
    v12 = 0;
  }
  else
  {
    v13 = std::__shared_ptr_access<RogueDiaryActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RogueDiaryActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
    RuntimeMgr = RogueDiaryActivity::getRuntimeMgr(v13);
    if ( RogueDiaryRuntimeMgr::getRogueDiaryRevivePoint(RuntimeMgr, (Vector3 *)(v3 + 96), (Vector3 *)(v3 + 128)) )
    {
      v2 = -1;
      v12 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "reviveBySlip",
        1272);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v30,
        (const char (*)[38])"revive pos and rot set by rogue diary");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v12 = 1;
    }
  }
  std::shared_ptr<RogueDiaryActivity>::~shared_ptr((std::shared_ptr<RogueDiaryActivity> *const)(v3 + 192));
  if ( v12 == 1 )
  {
LABEL_36:
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "reviveBySlip",
      1293);
    v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v30,
            (const char (*)[24])"[REVIVE] reviveBySlip: ");
    operator<<(v18, (const Vector3 *)(v3 + 96));
    common::milog::MiLogStream::~MiLogStream(&v30);
    v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    p = PlayerDungeonComp::getPeerNumber(this, v19);
    v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    DungeonScene::onAvatarSlipDie(v20, Uid, last_activate_point_id, p, die_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    toThisPtr<DungeonScene>((DungeonScene *)&__r);
    std::shared_ptr<Scene>::shared_ptr<DungeonScene,void>((std::shared_ptr<Scene> *const)(v3 + 192), &__r);
    ret = Player::beginEnterScene(
            player,
            (ScenePtr *)(v3 + 192),
            (const Vector3 *)(v3 + 96),
            (const Vector3 *)(v3 + 128),
            ENTER_GOTO,
            VISION_REBORN,
            0,
            0,
            ENTER_REASON_REVIVAL);
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 192));
    std::shared_ptr<DungeonScene>::~shared_ptr(&__r);
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "reviveBySlip",
        1302);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v30,
        (const char (*)[27])"beginTransToScenePos fails");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v2 = ret;
    }
    else
    {
      v2 = 0;
    }
  }
LABEL_43:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 160));
  result = v2;
  if ( v31 == (char *)v3 )
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

// Line 1311: range 00000000141AD59E-00000000141ADE0D
int32_t __cdecl PlayerDungeonComp::reviveOnWayPoint(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rcx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  DungeonScene *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  DungeonScene *v12; // rsi
  common::milog::MiLogStream *v13; // rcx
  PlayerAvatarComp *AvatarComp; // rax
  DungeonScene *v15; // rdx
  DungeonScene *v16; // r14
  uint32_t Uid; // eax
  int32_t result; // eax
  std::string v19; // [rsp+0h] [rbp-160h]
  char *v20; // [rsp+0h] [rbp-160h]
  PlayerDungeonComp *thisa; // [rsp+8h] [rbp-158h]
  uint32_t scene_id; // [rsp+18h] [rbp-148h]
  uint32_t point_id; // [rsp+1Ch] [rbp-144h]
  uint32_t die_type; // [rsp+20h] [rbp-140h]
  uint32_t p; // [rsp+24h] [rbp-13Ch]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+28h] [rbp-138h]
  std::string v27; // [rsp+30h] [rbp-130h] BYREF
  char v28[272]; // [rsp+50h] [rbp-110h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v28;
  v19._M_dataplus._M_p = v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 1 11 holder:1312 64 8 20 point_time_pair:1328 96 12 15 revive_pos:1325 128 12 15 revive_rot"
                        ":1326 160 16 22 dungeon_scene_ptr:1313 192 16 15 avatar_ptr:1319";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::reviveOnWayPoint;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -219020288;
  v3[536862724] = -219020288;
  v3[536862725] = -219021312;
  v3[536862726] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v27, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0x57Bu, v19);
  std::string::~string(&v27);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 160));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "reviveOnWayPoint",
      1316);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)&v27,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
    v5 = -1;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getCurAvatar((Player *const)(v1 + 192));
  if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 192), 0LL) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "reviveOnWayPoint",
      1322);
    v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
           (common::milog::MiLogStream *const)&v27,
           (const char (*)[19])"avatar_ptr is null");
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v6, thisa->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
    v5 = 104;
    goto LABEL_33;
  }
  Vector3::Vector3((Vector3 *const)(v1 + 96), 0.0, 0.0, 0.0);
  Vector3::Vector3((Vector3 *const)(v1 + 128), 0.0, 0.0, 0.0);
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
  scene_id = Scene::getSceneId((const Scene *const)v7);
  v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
  *(std::pair<unsigned int,unsigned int> *)(v1 + 64) = DungeonScene::findLastestActivatedWayPoint(v8);
  point_id = *(_DWORD *)(v1 + 64);
  if ( !point_id )
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
    scene_script_config_ptr = Scene::getScriptConfig((const Scene *const)v9);
    if ( !scene_script_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "reviveOnWayPoint",
        1343);
      v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)&v27,
              (const char (*)[22])"getScriptConfig fails");
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v10, v11);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
      v5 = -1;
      goto LABEL_33;
    }
    if ( (((unsigned __int8)scene_script_config_ptr - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3)
                                                                           + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&scene_script_config_ptr->born_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)scene_script_config_ptr - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_pos.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load_n(&scene_script_config_ptr->born_pos, 12LL);
    }
    *(_QWORD *)(v1 + 96) = *(_QWORD *)&scene_script_config_ptr->born_pos.x;
    *(float *)(v1 + 104) = scene_script_config_ptr->born_pos.z;
    if ( *(char *)(((unsigned __int64)&scene_script_config_ptr->born_rot >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)scene_script_config_ptr - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z
                                                                             + 3) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load_n(&scene_script_config_ptr->born_rot, 12LL);
    }
    *(_QWORD *)(v1 + 128) = *(_QWORD *)&scene_script_config_ptr->born_rot.x;
    *(float *)(v1 + 136) = scene_script_config_ptr->born_rot.z;
LABEL_24:
    v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
    if ( PlayerDungeonComp::reviveAndTransferPlayer(
           thisa,
           v12,
           (const Vector3 *)(v1 + 96),
           (const Vector3 *)(v1 + 128),
           ENTER_REASON_DUNGEON_REVIVE_ON_WAYPOINT) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "reviveOnWayPoint",
        1354);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&v27,
              (const char (*)[30])"reviveAndTransferPlayer fails");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v13, thisa->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v27);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(thisa->player_);
      die_type = PlayerAvatarComp::getDieType(AvatarComp);
      v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      p = PlayerDungeonComp::getPeerNumber(thisa, v15);
      v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(thisa->player_);
      DungeonScene::onPlayerRevive(v16, Uid, point_id, p, die_type);
      v5 = 0;
    }
    goto LABEL_33;
  }
  if ( !PlayerDungeonComp::getAndProcDungeonRevivePoint(
          thisa,
          scene_id,
          point_id,
          (Vector3 *)(v1 + 96),
          (Vector3 *)(v1 + 128)) )
    goto LABEL_24;
  v5 = -1;
LABEL_33:
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 192));
LABEL_34:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 160));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  result = v5;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1366: range 00000000141ADE0E-00000000141AE11C
uint32_t __cdecl PlayerDungeonComp::getPeerNumber(PlayerDungeonComp *const this, DungeonScene *dungeon_scene)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  uint32_t v6; // r14d
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v9; // rax
  std::vector<unsigned int>::const_iterator v10; // rax
  uint32_t result; // eax
  unsigned int __val; // [rsp+18h] [rbp-C8h] BYREF
  uint32_t p; // [rsp+1Ch] [rbp-C4h]
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+20h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *uid_vec; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 13 vec_iter:1374 64 16 19 scene_team_ptr:1367";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::getPeerNumber;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)dungeon_scene >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = *(_QWORD *)dungeon_scene->baseclass_0 + 280LL;
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  (*(void (__fastcall **)(unsigned __int64, DungeonScene *))v5)(v2 + 64, dungeon_scene);
  if ( std::operator==<SceneTeam>(0LL, (const std::shared_ptr<SceneTeam> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getPeerNumber",
      1370);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v16, (const char (*)[23])"scene_team_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v6 = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    uid_vec = SceneTeam::getPlayerUidVec(v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __val = Player::getUid(this->player_);
    M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
    v9._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 32) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   v9,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   &__val);
    p = 0;
    __rhs._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
    if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 32),
           &__rhs) )
    {
      v10._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
      p = std::distance<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
            v10,
            *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 32));
    }
    v6 = p;
  }
  std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v2 + 64));
  result = v6;
  if ( v17 == (char *)v2 )
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

// Line 1384: range 00000000141AE11E-00000000141AE4DA
__int64 __fastcall PlayerDungeonComp::getAndProcDungeonRevivePoint(
        PlayerDungeonComp *const this,
        uint32_t scene_id,
        uint32_t point_id,
        Vector3 *revive_pos,
        Vector3 *revive_rot)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned int v8; // eax
  unsigned int v9; // r14d
  unsigned int v10; // eax
  common::milog::MiLogStream *v11; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 48 4 13 point_id:1383 64 16 18 way_point_ptr:1385 96 16 26 slip_revive_point_ptr:1391";
  *(_QWORD *)(v5 + 16) = PlayerDungeonComp::getAndProcDungeonRevivePoint;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -219021312;
  v7[536862723] = -202178560;
  *(_DWORD *)(v5 + 48) = point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v8 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  JsonConfigMgr::findScenePoint<data::DungeonWayPoint>((const JsonConfigMgr *const)(v5 + 64), v8 + 93080, scene_id);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( std::operator!=<data::DungeonWayPoint>(0LL, (const std::shared_ptr<data::DungeonWayPoint> *)(v5 + 64)) )
  {
    std::shared_ptr<data::DungeonWayPoint>::shared_ptr(
      (std::shared_ptr<data::DungeonWayPoint> *const)&v16,
      (const std::shared_ptr<data::DungeonWayPoint> *)(v5 + 64));
    v9 = PlayerDungeonComp::getAndProcDungeonRevivePoint(this, (data::DungeonWayPointPtr *)&v16, revive_pos, revive_rot);
    std::shared_ptr<data::DungeonWayPoint>::~shared_ptr((std::shared_ptr<data::DungeonWayPoint> *const)&v16);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v10 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    JsonConfigMgr::findScenePoint<data::DungeonSlipRevivePoint>(
      (const JsonConfigMgr *const)(v5 + 96),
      v10 + 93080,
      scene_id);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( std::operator!=<data::DungeonSlipRevivePoint>(
           0LL,
           (const std::shared_ptr<data::DungeonSlipRevivePoint> *)(v5 + 96)) )
    {
      std::shared_ptr<data::DungeonSlipRevivePoint>::shared_ptr(
        (std::shared_ptr<data::DungeonSlipRevivePoint> *const)&v16,
        (const std::shared_ptr<data::DungeonSlipRevivePoint> *)(v5 + 96));
      v9 = PlayerDungeonComp::getAndProcDungeonRevivePoint(
             this,
             (data::DungeonSlipRevivePointPtr *)&v16,
             revive_pos,
             revive_rot);
      std::shared_ptr<data::DungeonSlipRevivePoint>::~shared_ptr((std::shared_ptr<data::DungeonSlipRevivePoint> *const)&v16);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "getAndProcDungeonRevivePoint",
        1397);
      v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v17,
              (const char (*)[30])"revive point type incorrect: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v9 = -1;
    }
    std::shared_ptr<data::DungeonSlipRevivePoint>::~shared_ptr((std::shared_ptr<data::DungeonSlipRevivePoint> *const)(v5 + 96));
  }
  std::shared_ptr<data::DungeonWayPoint>::~shared_ptr((std::shared_ptr<data::DungeonWayPoint> *const)(v5 + 64));
  result = v9;
  if ( v18 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1402: range 00000000141AE4DC-00000000141AEDB3
int32_t __cdecl PlayerDungeonComp::getAndProcDungeonRevivePoint(
        PlayerDungeonComp *const this,
        data::DungeonWayPointPtr *p_way_point_ptr,
        Vector3 *revive_pos,
        Vector3 *revive_rot)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  DungeonScene *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  uint32_t v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Group *v19; // rax
  Group *v20; // r14
  Group *v21; // rax
  uint32_t SuiteIndex; // eax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-210h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-208h]
  Vector3 v29; // [rsp+44h] [rbp-1FCh] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-1F0h] BYREF
  char v31[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 group_id:1424 64 16 22 dungeon_scene_ptr:1403 96 16 14 group_ptr:1426 128 28 16 log_co"
                        "ntext:1435 192 160 19 script_context:1436";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::getAndProcDungeonRevivePoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = 0x4000000;
  v6[536862725] = -218959118;
  v6[536862731] = -202116109;
  v6[536862732] = -202116109;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v4 + 64));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getAndProcDungeonRevivePoint",
      1406);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v30,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else if ( std::operator==<data::DungeonWayPoint>(p_way_point_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getAndProcDungeonRevivePoint",
      1412);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])"point_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_way_point_ptr);
    Vector3::Vector3(&v29, &v8->tran_pos);
    if ( ((unsigned __int8)revive_pos & 7) >= *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)revive_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store_n(revive_pos, 12LL);
    }
    *revive_pos = v29;
    v9 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_way_point_ptr);
    Vector3::Vector3(&v29, &v9->tran_rot);
    if ( ((unsigned __int8)revive_rot & 7) >= *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)revive_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store_n(revive_rot, 12LL);
    }
    *revive_rot = v29;
    if ( Vector3::isZero(revive_pos) )
    {
      v10 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_way_point_ptr);
      Vector3::Vector3(&v29, &v10->pos);
      if ( ((unsigned __int8)revive_pos & 7) >= *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)revive_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_store_n(revive_pos, 12LL);
      }
      *revive_pos = v29;
      v11 = std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_way_point_ptr);
      Vector3::Vector3(&v29, &v11->rot);
      if ( ((unsigned __int8)revive_rot & 7) >= *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)revive_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_store_n(revive_rot, 12LL);
      }
      *revive_rot = v29;
    }
    v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( !DungeonScene::isMpDungeonMode(v12) )
    {
      __for_range = &std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonWayPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_way_point_ptr)->group_ids;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v4 + 48) = *v14;
        v15 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Scene::findGroup((Scene *const)(v4 + 96), v15);
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "getAndProcDungeonRevivePoint",
            1429);
          v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])off_25267540);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v4 + 48));
          v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v17, v18);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( Group::getMonsterCount(v19, 0) )
          {
            *(_QWORD *)(v4 + 128) = 0LL;
            *(_QWORD *)(v4 + 136) = 0LL;
            *(_QWORD *)(v4 + 144) = 0LL;
            *(_DWORD *)(v4 + 152) = 0;
            ScriptContext::ScriptContext((ScriptContext *const)(v4 + 192));
            v20 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            SuiteIndex = Group::getSuiteIndex(v21);
            Group::refresh(v20, (const ScriptContext *)(v4 + 192), *(SuiteLogContext *)(v4 + 128), SuiteIndex, 0, 1);
            ScriptContext::~ScriptContext((ScriptContext *const)(v4 + 192));
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 96));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    v7 = 0;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
  result = v7;
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1446: range 00000000141AEDB4-00000000141AF68B
int32_t __cdecl PlayerDungeonComp::getAndProcDungeonRevivePoint(
        PlayerDungeonComp *const this,
        data::DungeonSlipRevivePointPtr *p_slip_revive_point_ptr,
        Vector3 *revive_pos,
        Vector3 *revive_rot)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  DungeonScene *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  uint32_t v15; // eax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Group *v19; // rax
  Group *v20; // r14
  Group *v21; // rax
  uint32_t SuiteIndex; // eax
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-218h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-210h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-208h]
  Vector3 v29; // [rsp+44h] [rbp-1FCh] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-1F0h] BYREF
  char v31[464]; // [rsp+70h] [rbp-1D0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(416LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 group_id:1468 64 16 22 dungeon_scene_ptr:1447 96 16 14 group_ptr:1470 128 28 16 log_co"
                        "ntext:1479 192 160 19 script_context:1480";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::getAndProcDungeonRevivePoint;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = 0x4000000;
  v6[536862725] = -218959118;
  v6[536862731] = -202116109;
  v6[536862732] = -202116109;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v4 + 64));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getAndProcDungeonRevivePoint",
      1450);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v30,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else if ( std::operator==<data::DungeonSlipRevivePoint>(p_slip_revive_point_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getAndProcDungeonRevivePoint",
      1456);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])"point_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_slip_revive_point_ptr);
    Vector3::Vector3(&v29, &v8->tran_pos);
    if ( ((unsigned __int8)revive_pos & 7) >= *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)revive_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store_n(revive_pos, 12LL);
    }
    *revive_pos = v29;
    v9 = std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_slip_revive_point_ptr);
    Vector3::Vector3(&v29, &v9->tran_rot);
    if ( ((unsigned __int8)revive_rot & 7) >= *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)revive_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store_n(revive_rot, 12LL);
    }
    *revive_rot = v29;
    if ( Vector3::isZero(revive_pos) )
    {
      v10 = std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_slip_revive_point_ptr);
      Vector3::Vector3(&v29, &v10->pos);
      if ( ((unsigned __int8)revive_pos & 7) >= *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)revive_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)revive_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_pos->z + 3) >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_store_n(revive_pos, 12LL);
      }
      *revive_pos = v29;
      v11 = std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_slip_revive_point_ptr);
      Vector3::Vector3(&v29, &v11->rot);
      if ( ((unsigned __int8)revive_rot & 7) >= *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)revive_rot >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)revive_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&revive_rot->z + 3) >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_store_n(revive_rot, 12LL);
      }
      *revive_rot = v29;
    }
    v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( !DungeonScene::isMpDungeonMode(v12) )
    {
      __for_range = &std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonSlipRevivePoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_slip_revive_point_ptr)->group_ids;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v4 + 48) = *v14;
        v15 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        Scene::findGroup((Scene *const)(v4 + 96), v15);
        if ( std::operator==<Group>((const std::shared_ptr<Group> *)(v4 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "getAndProcDungeonRevivePoint",
            1473);
          v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])off_25267540);
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v4 + 48));
          v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v17, v18);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          v19 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          if ( Group::getMonsterCount(v19, 0) )
          {
            *(_QWORD *)(v4 + 128) = 0LL;
            *(_QWORD *)(v4 + 136) = 0LL;
            *(_QWORD *)(v4 + 144) = 0LL;
            *(_DWORD *)(v4 + 152) = 0;
            ScriptContext::ScriptContext((ScriptContext *const)(v4 + 192));
            v20 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v21 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            SuiteIndex = Group::getSuiteIndex(v21);
            Group::refresh(v20, (const ScriptContext *)(v4 + 192), *(SuiteLogContext *)(v4 + 128), SuiteIndex, 0, 1);
            ScriptContext::~ScriptContext((ScriptContext *const)(v4 + 192));
          }
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 96));
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
    v7 = 0;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
  result = v7;
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF802C) = 0LL;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 1491: range 00000000141AF894-00000000141AFB25
int32_t __cdecl PlayerDungeonComp::replayCurDungeon(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t v4; // r14d
  Scene *v5; // r14
  DungeonScene *v6; // rax
  DungeonScene *v7; // rax
  DungeonScene *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 22 dungeon_scene_ptr:1493";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::replayCurDungeon;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "replayCurDungeon",
      1496);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v10,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v4 = -1;
  }
  else
  {
    v5 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    std::function<ForeachPolicy ()(Group &)>::function<PlayerDungeonComp::replayCurDungeon(void)::{lambda(Group &)#1},void,void>(
      (std::function<ForeachPolicy(Group&)> *const)&v10,
      0);
    Scene::foreachGroup(v5, (std::function<ForeachPolicy(Group&)> *)&v10);
    std::function<ForeachPolicy ()(Group &)>::~function((std::function<ForeachPolicy(Group&)> *const)&v10);
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonScene::resetDungeon(v6);
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "replayCurDungeon",
      1508);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v10,
      (const char (*)[27])"[REVIVIE] replayCurDungeon");
    common::milog::MiLogStream::~MiLogStream(&v10);
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonScene::reviveAllDeathPlayer(v7, 1);
    v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    DungeonScene::notifyDungeonDataToAll(v8);
    v4 = 0;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = v4;
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

// Line 1500: range 00000000141AF68C-00000000141AF893
ForeachPolicy __cdecl PlayerDungeonComp::replayCurDungeon(void)::{lambda(Group &)#1}::operator()(
        const PlayerDungeonComp::replayCurDungeon::<lambda(Group&)> *const __closure,
        Group *group)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  ForeachPolicy result; // eax
  char v6[368]; // [rsp+10h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 28 16 log_context:1502 96 160 19 script_context:1503";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::replayCurDungeon(void)::{lambda(Group &)#1}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 0x4000000;
  v4[536862722] = -218959118;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 0LL;
  *(_DWORD *)(v2 + 56) = 0;
  ScriptContext::ScriptContext((ScriptContext *const)(v2 + 96));
  Group::refresh(group, (const ScriptContext *)(v2 + 96), *(SuiteLogContext *)(v2 + 32), 0, 0, 1);
  ScriptContext::~ScriptContext((ScriptContext *const)(v2 + 96));
  result = FOREACH_CONTINUE;
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1517: range 00000000141AFB26-00000000141B00F3
int32_t __cdecl PlayerDungeonComp::settleCurDungeon(
        PlayerDungeonComp *const this,
        proto_log::DungeonQuitReason quit_dungeon_reason,
        DungeonResult dungeon_result)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  int32_t v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // r14d
  bool v14; // r14
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  DungeonScene *v19; // r15
  uint32_t Uid; // eax
  DungeonScene *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-A8h] BYREF
  unsigned int DungeonId; // [rsp+2Ch] [rbp-A4h] BYREF
  std::shared_ptr<Player> __a; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-90h] BYREF
  char v31[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 22 dungeon_scene_ptr:1518";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::settleCurDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "settleCurDungeon",
      1521);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v30,
      (const char (*)[26])"dungeon_scene_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
    v6 = -1;
  }
  else
  {
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( DungeonScene::getDungeonResult(v7) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "settleCurDungeon",
        1526);
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" dungeon: ");
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      DungeonId = DungeonScene::getDungeonId(v11);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &DungeonId);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])off_252677C0);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v6 = -1;
    }
    else
    {
      v13 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getUid(this->player_);
      Scene::findPlayer((const Scene *const)&__a, v13);
      v14 = std::operator==<Player>(&__a, 0LL);
      std::shared_ptr<Player>::~shared_ptr(&__a);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "settleCurDungeon",
          1531);
        v15 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v30, (const char (*)[6])"uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        v17 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v16,
                (const char (*)[18])" not in dungeon: ");
        v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        DungeonId = DungeonScene::getDungeonId(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &DungeonId);
        common::milog::MiLogStream::~MiLogStream(&v30);
        v6 = -1;
      }
      else
      {
        v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        DungeonScene::setPlayerQuitReason(v19, Uid, quit_dungeon_reason);
        v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( (unsigned int)DungeonScene::settle(v21, dungeon_result) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "settleCurDungeon",
            1538);
          v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                  &v30,
                  (const char (*)[13])"settle fails");
          v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
          v24 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v22, v23);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v24, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v30);
          v6 = -1;
        }
        else
        {
          v6 = 0;
        }
      }
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  result = v6;
  if ( v31 == (char *)v3 )
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

// Line 1547: range 00000000141B00F4-00000000141B027A
proto::DungeonRecordBin *__fastcall PlayerDungeonComp::findDungeonDailyRecord(
        PlayerDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::DungeonRecordBin *result; // rax
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin> *dungeon_map; // [rsp+18h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator b; // [rsp+20h] [rbp-C0h] BYREF
  char v8[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:1546 64 24 7 it:1549";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::findDungeonDailyRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  dungeon_map = proto::PlayerDungeonRecordBin::mutable_dungeon_daily_map(&this->dungeon_record_bin_);
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::find(
    (google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator *)(v2 + 64),
    dungeon_map,
    (const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::key_type *)(v2 + 48));
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::end(&b, dungeon_map);
  if ( google::protobuf::operator!=(
         (const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator *)(v2 + 64),
         &b) )
  {
    result = &google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator::operator->((const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 1557: range 00000000141B027C-00000000141B0421
proto::DungeonRecordBin *__fastcall PlayerDungeonComp::getDungeonDailyRecord(
        PlayerDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::DungeonRecordBin *result; // rax
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin> *dungeon_map; // [rsp+10h] [rbp-D0h]
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator b; // [rsp+20h] [rbp-C0h] BYREF
  char v8[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:1556 64 24 7 it:1559";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::getDungeonDailyRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  dungeon_map = proto::PlayerDungeonRecordBin::mutable_dungeon_daily_map(&this->dungeon_record_bin_);
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::find(
    (google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator *)(v2 + 64),
    dungeon_map,
    (const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::key_type *)(v2 + 48));
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::end(&b, dungeon_map);
  if ( google::protobuf::operator!=(
         (const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator *)(v2 + 64),
         &b) )
  {
    result = &google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator::operator->((const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator *const)(v2 + 64))->second;
  }
  else
  {
    result = google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::operator[](
               dungeon_map,
               (const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::key_type *)(v2 + 48));
  }
  if ( v8 == (char *)v2 )
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

// Line 1567: range 00000000141B0422-00000000141B05C7
proto::DungeonDurableRecordBin *__fastcall PlayerDungeonComp::getDungeonDurableRecord(
        PlayerDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::DungeonDurableRecordBin *result; // rax
  google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin> *dungeon_durable_map; // [rsp+10h] [rbp-D0h]
  google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::iterator b; // [rsp+20h] [rbp-C0h] BYREF
  char v8[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:1566 64 24 7 it:1569";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::getDungeonDurableRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  dungeon_durable_map = proto::PlayerDungeonRecordBin::mutable_dungeon_durable_map(&this->dungeon_record_bin_);
  google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::find(
    (google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::iterator *)(v2 + 64),
    dungeon_durable_map,
    (const google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::key_type *)(v2 + 48));
  google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::end(&b, dungeon_durable_map);
  if ( google::protobuf::operator!=(
         (const google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::iterator *)(v2 + 64),
         &b) )
  {
    result = &google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::iterator::operator->((const google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::iterator *const)(v2 + 64))->second;
  }
  else
  {
    result = google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::operator[](
               dungeon_durable_map,
               (const google::protobuf::Map<unsigned int,proto::DungeonDurableRecordBin>::key_type *)(v2 + 48));
  }
  if ( v8 == (char *)v2 )
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

// Line 1580: range 00000000141B05C8-00000000141B0610
bool __cdecl PlayerDungeonComp::isDungeonPassed(PlayerDungeonComp *const this, uint32_t dungeon_id)
{
  proto::DungeonDurableRecordBin *record_bin_ptr; // [rsp+18h] [rbp-8h]

  record_bin_ptr = PlayerDungeonComp::getDungeonDurableRecord(this, dungeon_id);
  return record_bin_ptr && proto::DungeonDurableRecordBin::is_passed(record_bin_ptr);
};

// Line 1587: range 00000000141B0612-00000000141B06F7
void __fastcall PlayerDungeonComp::clearDungeonRecord(PlayerDungeonComp *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin> *dungeon_map; // [rsp+18h] [rbp-68h]
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 dungeon_id:1586";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::clearDungeonRecord;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  dungeon_map = proto::PlayerDungeonRecordBin::mutable_dungeon_daily_map(&this->dungeon_record_bin_);
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::erase(
    dungeon_map,
    (const google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::key_type *)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1594: range 00000000141B06F8-00000000141B0716
void __cdecl PlayerDungeonComp::clearAllDungeonRecord(PlayerDungeonComp *const this)
{
  proto::PlayerDungeonRecordBin::Clear(&this->dungeon_record_bin_);
};

// Line 1600: range 00000000141B0718-00000000141B0A5B
void __fastcall PlayerDungeonComp::setDungeonLeftTimes(
        PlayerDungeonComp *const this,
        uint32_t dungeon_id,
        uint32_t left_times)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  proto::DungeonRecordBin *record_ptr; // [rsp+10h] [rbp-A0h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 dungeon_id:1599";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::setDungeonLeftTimes;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dungeon_id;
  record_ptr = PlayerDungeonComp::findDungeonDailyRecord(this, *(_DWORD *)(v3 + 32));
  if ( record_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &v7->design_config.txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->day_enter_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->day_enter_count >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->day_enter_count);
      }
      if ( left_times <= dungeon_config_ptr->day_enter_count )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->day_enter_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->day_enter_count >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->day_enter_count);
        }
        proto::DungeonRecordBin::set_enter_count(record_ptr, dungeon_config_ptr->day_enter_count - left_times);
      }
      else
      {
        proto::DungeonRecordBin::set_enter_count(record_ptr, 0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "setDungeonLeftTimes",
        1610);
      v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v13, (const char (*)[31])off_252679C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "setDungeonLeftTimes",
      1604);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(&v13, (const char (*)[31])off_25267980);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1625: range 00000000141B0A5C-00000000141B0C47
void __cdecl PlayerDungeonComp::setAllDungeonLeftTimes(PlayerDungeonComp *const this, uint32_t left_times)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const google::protobuf::MapPair<unsigned int,proto::DungeonRecordBin> *v5; // rax
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin> *__for_range; // [rsp+18h] [rbp-E8h]
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator __for_end; // [rsp+40h] [rbp-C0h] BYREF
  char v9[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 9 iter:1627";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::setAllDungeonLeftTimes;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  __for_range = proto::PlayerDungeonRecordBin::mutable_dungeon_daily_map(&this->dungeon_record_bin_);
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    v5 = google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator::operator*(&__for_begin);
    google::protobuf::MapPair<unsigned int,proto::DungeonRecordBin>::MapPair(
      (google::protobuf::MapPair<unsigned int,proto::DungeonRecordBin> *const)(v2 + 48),
      v5);
    PlayerDungeonComp::setDungeonLeftTimes(this, *(_DWORD *)(v2 + 48), left_times);
    google::protobuf::MapPair<unsigned int,proto::DungeonRecordBin>::~MapPair((google::protobuf::MapPair<unsigned int,proto::DungeonRecordBin> *const)(v2 + 48));
    google::protobuf::Map<unsigned int,proto::DungeonRecordBin>::iterator::operator++(&__for_begin);
  }
  if ( v9 == (char *)v2 )
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

// Line 1634: range 00000000141B0C48-00000000141B19A3
void __fastcall PlayerDungeonComp::onDungeonSucceed(
        PlayerDungeonComp *const this,
        __int32 dungeon_id,
        __int32 owner_uid,
        __int8 is_mp_mode)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9; // al
  PlayerItemComp *ItemComp; // rdi
  PlayerBasicComp *BasicComp; // rax
  PlayerEventComp *EventComp; // r14
  PlayerWatcherComp *WatcherComp; // rax
  uint32_t Uid; // eax
  DungeonScene *v16; // rcx
  PlayerWatcherComp *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  bool isWeeklyBossDungeon; // r14
  int *v20; // r8
  bool *v21; // r9
  PlayerEventComp *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  std::string v25; // [rsp+0h] [rbp-210h]
  int v26; // [rsp+2Ch] [rbp-1E4h] BYREF
  bool v27[4]; // [rsp+30h] [rbp-1E0h] BYREF
  uint32_t enter_count; // [rsp+34h] [rbp-1DCh]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-1D8h]
  proto::DungeonRecordBin *dungeon_daily_record_bin_ptr; // [rsp+40h] [rbp-1D0h]
  proto::DungeonDurableRecordBin *durable_record_ptr; // [rsp+48h] [rbp-1C8h]
  std::shared_ptr<Scene> v32; // [rsp+50h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-1B0h] BYREF
  char v34[400]; // [rsp+80h] [rbp-190h] BYREF

  *(&v25._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v25._anon_0._M_allocated_capacity) = dungeon_id;
  *(_DWORD *)v25._anon_0._M_local_buf = owner_uid;
  BYTE4(v25._M_string_length) = is_mp_mode;
  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 1 18 is_first_pass:1653 64 1 11 holder:1681 80 4 15 dungeon_id:1633 96 16 14 event_ptr:1686"
                        " 128 16 22 dungeon_scene_ptr:1693 160 16 12 evt_ptr:1708 192 24 18 action_reason:1663 256 56 22 "
                        "element_count_map:1700";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::onDungeonSucceed;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -234881024;
  v6[536862727] = -218959118;
  v6[536862729] = -218103808;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 80) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v7->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v4 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
  if ( dungeon_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->involve_type);
    }
    if ( dungeon_config_ptr->involve_type != INVOLVE_DYNAMIC_MULTIPLE )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( *(_DWORD *)v25._anon_0._M_local_buf != Player::getUid(this->player_) )
      v9 = 0;
    else
LABEL_12:
      v9 = 1;
    if ( v9 )
    {
      dungeon_daily_record_bin_ptr = PlayerDungeonComp::getDungeonDailyRecord(this, *(_DWORD *)(v4 + 80));
      if ( dungeon_daily_record_bin_ptr )
      {
        enter_count = PlayerDungeonComp::getDungeonEnterCount(this, *(_DWORD *)(v4 + 80));
        proto::DungeonRecordBin::set_enter_count(dungeon_daily_record_bin_ptr, enter_count + 1);
      }
    }
    *(_BYTE *)(v4 + 48) = 0;
    durable_record_ptr = PlayerDungeonComp::getDungeonDurableRecord(this, *(_DWORD *)(v4 + 80));
    if ( durable_record_ptr
      && !proto::DungeonDurableRecordBin::is_passed(durable_record_ptr)
      && BYTE4(v25._M_string_length) != 1 )
    {
      proto::DungeonDurableRecordBin::set_is_passed(durable_record_ptr, 1);
      *(_BYTE *)(v4 + 48) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config_ptr->first_pass_reward_id);
      }
      if ( dungeon_config_ptr->first_pass_reward_id )
      {
        ActionReason::ActionReason(
          (ActionReason *const)(v4 + 192),
          ACTION_REASON_DUNGEON_FIRST_PASS,
          ITEM_LIMIT_DUNGEON_FIRST_PASS_REWARD);
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&dungeon_config_ptr->type);
        }
        if ( dungeon_config_ptr->type == DUNGEON_ELEMENT_CHALLENGE )
        {
          *(_BYTE *)(v4 + 205) = 1;
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&dungeon_config_ptr->first_pass_reward_id);
          }
          if ( PlayerDungeonComp::grantElementChallengeFirstPassReward(
                 this,
                 dungeon_config_ptr->first_pass_reward_id,
                 (const ActionReason *)(v4 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "onDungeonSucceed",
              1669);
            common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v33,
              (const char (*)[44])"grantElementChallengeFirstPassReward failed");
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->first_pass_reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            ItemComp = (PlayerItemComp *)&dungeon_config_ptr->first_pass_reward_id;
            __asan_report_load4(&dungeon_config_ptr->first_pass_reward_id);
          }
          PlayerItemComp::grantReward(
            ItemComp,
            dungeon_config_ptr->first_pass_reward_id,
            (const ActionReason *)(v4 + 192),
            0LL);
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->type);
      }
      if ( dungeon_config_ptr->type == DUNGEON_ELEMENT_CHALLENGE )
      {
        if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(*(Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v33, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 64), 0xBFEu, v25);
        std::string::~string(&v33);
        PlayerDungeonComp::logElementChallengeDungeonSuccess(*((PlayerDungeonComp *const *)&v25._anon_0._M_allocated_capacity
                                                             + 1));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 64));
      }
    }
    common::tools::perf::make_shared<FinishDungeonEvent,unsigned int &,bool &>(
      (unsigned int *)&v32,
      (bool *)(v4 + 80),
      (unsigned int *)(v4 + 48),
      (bool *)(v4 + 80));
    std::shared_ptr<BaseEvent>::shared_ptr<FinishDungeonEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v4 + 96),
      (std::shared_ptr<FinishDungeonEvent> *)&v32);
    std::shared_ptr<FinishDungeonEvent>::~shared_ptr((std::shared_ptr<FinishDungeonEvent> *const)&v32);
    if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(*(Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
    std::shared_ptr<BaseEvent>::shared_ptr(
      (std::shared_ptr<BaseEvent> *const)&v32,
      (const std::shared_ptr<BaseEvent> *)(v4 + 96));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v32);
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v32);
    if ( BYTE4(v25._M_string_length) )
    {
      if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = Player::getWatcherComp(*(Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
      PlayerWatcherComp::triggerMpDungeonSucceed(WatcherComp, *(_DWORD *)(v4 + 80));
    }
    if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(*(Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&v32);
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 128));
    std::shared_ptr<Scene>::~shared_ptr(&v32);
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onDungeonSucceed",
        1696);
      if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(*(const Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
      common::milog::MiLogStream::operator()(&v33, "dungeon_scene nullptr for player uid=%u", Uid);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      std::unordered_map<data::ElementType,unsigned int>::unordered_map((std::unordered_map<data::ElementType,unsigned int> *const)(v4 + 256));
      v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
      if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      DungeonScene::countPlayerAvatarsByElementType(
        v16,
        *(Player **)(*(&v25._anon_0._M_allocated_capacity + 1) + 24),
        (std::unordered_map<data::ElementType,unsigned int> *)(v4 + 256));
      if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = Player::getWatcherComp(*(Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
      PlayerWatcherComp::triggerDoneDungeonWithSameElementAvatars(
        v17,
        (const std::unordered_map<data::ElementType,unsigned int> *)(v4 + 256));
      std::unordered_map<data::ElementType,unsigned int>::~unordered_map((std::unordered_map<data::ElementType,unsigned int> *const)(v4 + 256));
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    isWeeklyBossDungeon = DungeonEntryExcelConfigMgr::isWeeklyBossDungeon(
                            &v18->design_config.txt_config_mgr.dungeon_entry_config_mgr,
                            *(_DWORD *)(v4 + 80));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
    if ( isWeeklyBossDungeon )
    {
      *(_BYTE *)(v4 + 64) = 1;
      *(_DWORD *)v27 = 0;
      v26 = 0;
      common::tools::perf::make_shared<WeeklyBossKillEvent,int,int,bool>(
        (int *)(v4 + 160),
        &v26,
        v27,
        (int *)(v4 + 64),
        v20,
        v21);
      if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v22 = Player::getEventComp(*(Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
      std::shared_ptr<BaseEvent>::shared_ptr<WeeklyBossKillEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v32,
        (const std::shared_ptr<WeeklyBossKillEvent> *)(v4 + 160));
      PlayerEventComp::notifyEvent(v22, (BaseEventPtr *)&v32);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v32);
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onDungeonSucceed",
        1710);
      if ( *(_BYTE *)(((*(&v25._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)v27 = Player::getUid(*(const Player *const *)(*(&v25._anon_0._M_allocated_capacity + 1) + 24));
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v33, (const unsigned int *)v27);
      v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v23,
              (const char (*)[20])" done boss dungeon:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v33);
      std::shared_ptr<WeeklyBossKillEvent>::~shared_ptr((std::shared_ptr<WeeklyBossKillEvent> *const)(v4 + 160));
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 128));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 96));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onDungeonSucceed",
      1638);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v33,
           (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 1715: range 00000000141B19A4-00000000141B1B8A
void __fastcall PlayerDungeonComp::onDungeonFail(PlayerDungeonComp *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<FailDungeonEvent> __r; // [rsp+10h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 dungeon_id:1714 64 16 14 event_ptr:1716";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::onDungeonFail;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  common::tools::perf::make_shared<FailDungeonEvent,unsigned int &>((unsigned int *)&__r, (unsigned int *)(v2 + 48));
  std::shared_ptr<BaseEvent>::shared_ptr<FailDungeonEvent,void>((std::shared_ptr<BaseEvent> *const)(v2 + 64), &__r);
  std::shared_ptr<FailDungeonEvent>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr(
    (std::shared_ptr<BaseEvent> *const)&__r,
    (const std::shared_ptr<BaseEvent> *)(v2 + 64));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 64));
  if ( v7 == (char *)v2 )
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

// Line 1721: range 00000000141B1B8C-00000000141B220E
__int64 __fastcall PlayerDungeonComp::fillDungeonEntryInfo(
        PlayerDungeonComp *const this,
        uint32_t dungeon_id,
        proto::DungeonEntryInfo *entry_info)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  bool isDungeonPassed; // al
  google::protobuf::uint32 started; // eax
  google::protobuf::uint32 v11; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  google::protobuf::uint32 BossChestTakeNum; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  bool isWeeklyBossDungeon; // r12
  PlayerSceneComp *SceneComp; // r12
  proto::WeeklyBossResinDiscountInfo *v18; // rcx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  uint32_t now; // [rsp+2Ch] [rbp-B4h]
  uint32_t time_offset; // [rsp+30h] [rbp-B0h]
  uint32_t next_refresh_time; // [rsp+34h] [rbp-ACh]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+38h] [rbp-A8h]
  proto::DungeonRecordBin *record_bin_ptr; // [rsp+40h] [rbp-A0h]
  const data::DungeonSerialConfig *serial_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-80h] BYREF
  char v31[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 dungeon_id:1720";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::fillDungeonEntryInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v6->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( dungeon_config_ptr )
  {
    proto::DungeonEntryInfo::set_dungeon_id(entry_info, *(_DWORD *)(v3 + 32));
    isDungeonPassed = PlayerDungeonComp::isDungeonPassed(this, *(_DWORD *)(v3 + 32));
    proto::DungeonEntryInfo::set_is_passed(entry_info, isDungeonPassed);
    record_bin_ptr = PlayerDungeonComp::findDungeonDailyRecord(this, *(_DWORD *)(v3 + 32));
    if ( record_bin_ptr )
    {
      started = proto::DungeonRecordBin::start_time(record_bin_ptr);
      proto::DungeonEntryInfo::set_start_time(entry_info, started);
      v11 = proto::DungeonRecordBin::end_time(record_bin_ptr);
      proto::DungeonEntryInfo::set_end_time(entry_info, v11);
    }
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_config_ptr->type);
    }
    if ( dungeon_config_ptr->type == DUNGEON_BOSS )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.dungeon_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&dungeon_config_ptr->serial_id);
      }
      serial_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonSerialConfig(
                            p_dungeon_config_mgr,
                            dungeon_config_ptr->serial_id);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( serial_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&serial_config_ptr->max_take_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)serial_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&serial_config_ptr->max_take_num >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&serial_config_ptr->max_take_num);
        }
        proto::DungeonEntryInfo::set_max_boss_chest_num(entry_info, serial_config_ptr->max_take_num);
        BossChestTakeNum = PlayerDungeonComp::refreshAndGetBossChestTakeNum(this, *(_DWORD *)(v3 + 32));
        proto::DungeonEntryInfo::set_boss_chest_num(entry_info, BossChestTakeNum);
        now = common::tools::TimeUtils::getNow();
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v14->design_config.txt_config_mgr.const_value_config_mgr);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        next_refresh_time = common::tools::TimeUtils::getWeekTime(now, time_offset) + 604800;
        proto::DungeonEntryInfo::set_next_refresh_time(entry_info, next_refresh_time);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        isWeeklyBossDungeon = DungeonEntryExcelConfigMgr::isWeeklyBossDungeon(
                                &v15->design_config.txt_config_mgr.dungeon_entry_config_mgr,
                                *(_DWORD *)(v3 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( isWeeklyBossDungeon )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          v18 = proto::DungeonEntryInfo::mutable_weekly_boss_resin_discount_info(entry_info);
          if ( *(_BYTE *)(((unsigned __int64)&serial_config_ptr->take_cost >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&serial_config_ptr->take_cost >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&serial_config_ptr->take_cost);
          }
          PlayerSceneComp::fillWeeklyBossResinDiscountInfo(SceneComp, serial_config_ptr->take_cost, v18);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "fillDungeonEntryInfo",
          1758);
        v19 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v30,
                (const char (*)[44])"findDungeonSerialConfig fails, dungeon_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 32));
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" serial_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &dungeon_config_ptr->serial_id);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "fillDungeonEntryInfo",
      1725);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v30,
           (const char (*)[43])"findDungeonExcelConfig fails, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0xFFFFFFFFLL;
  }
  if ( v31 == (char *)v3 )
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

// Line 1765: range 00000000141B2210-00000000141B2396
proto::DungeonRandomRecordBin *__fastcall PlayerDungeonComp::findRandomDungeonRecord(
        PlayerDungeonComp *const this,
        uint32_t random_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::DungeonRandomRecordBin *result; // rax
  google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin> *dungeon_map; // [rsp+18h] [rbp-C8h]
  google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::iterator b; // [rsp+20h] [rbp-C0h] BYREF
  char v8[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 random_id:1764 64 24 7 it:1767";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::findRandomDungeonRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = random_id;
  dungeon_map = proto::PlayerDungeonRecordBin::mutable_dungeon_random_map(&this->dungeon_record_bin_);
  google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::find(
    (google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::iterator *)(v2 + 64),
    dungeon_map,
    (const google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::key_type *)(v2 + 48));
  google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::end(&b, dungeon_map);
  if ( google::protobuf::operator!=(
         (const google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::iterator *)(v2 + 64),
         &b) )
  {
    result = &google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::iterator::operator->((const google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::iterator *const)(v2 + 64))->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 1774: range 00000000141B2398-00000000141B247C
proto::DungeonRandomRecordBin *__fastcall PlayerDungeonComp::getRandomDungeonRecord(
        PlayerDungeonComp *const this,
        uint32_t random_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::DungeonRandomRecordBin *result; // rax
  google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin> *dungeon_map; // [rsp+18h] [rbp-68h]
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 random_id:1773";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::getRandomDungeonRecord;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = random_id;
  dungeon_map = proto::PlayerDungeonRecordBin::mutable_dungeon_random_map(&this->dungeon_record_bin_);
  result = google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::operator[](
             dungeon_map,
             (const google::protobuf::Map<unsigned int,proto::DungeonRandomRecordBin>::key_type *)(v2 + 32));
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

// Line 1780: range 00000000141B247E-00000000141B289F
__int64 __fastcall PlayerDungeonComp::isDungeonInRandomList(
        PlayerDungeonComp *const this,
        uint32_t entry_scene_id,
        uint32_t entry_point_id,
        uint32_t dungeon_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v12; // rax
  uint32_t *v13; // rdx
  __int64 result; // rax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-E8h]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-E0h]
  proto::DungeonRandomRecordBin *random_record_bin; // [rsp+48h] [rbp-D8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-D0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v24; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+90h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 19 entry_scene_id:1779 48 4 19 entry_point_id:1779 64 16 22 dungeon_entry_ptr:1781";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::isDungeonInRandomList;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = entry_scene_id;
  *(_DWORD *)(v4 + 48) = entry_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  JsonConfigMgr::findScenePoint<data::DungeonEntry>(
    (const JsonConfigMgr *const)(v4 + 64),
    v7 + 93080,
    *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "isDungeonInRandomList",
      1784);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v25,
           (const char (*)[36])"findScenePoint fails, cur_scene_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v25);
    v11 = 0;
  }
  else
  {
    __for_range = &std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->dungeon_random_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v12 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      random_record_bin = PlayerDungeonComp::findRandomDungeonRecord(this, *v13);
      if ( random_record_bin )
      {
        __for_range_0 = proto::DungeonRandomRecordBin::dungeon_list(random_record_bin);
        __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
        __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
        while ( __for_begin_0 != __for_end_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4(__for_begin_0);
          }
          if ( *__for_begin_0 == dungeon_id )
          {
            v11 = 1;
            goto LABEL_20;
          }
          ++__for_begin_0;
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v11 = 0;
  }
LABEL_20:
  std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v4 + 64));
  result = v11;
  if ( v26 == (char *)v4 )
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

// Line 1807: range 00000000141B28A0-00000000141B2F1F
__int64 __fastcall PlayerDungeonComp::checkRandomDungeonRefresh(PlayerDungeonComp *const this, uint32_t random_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  google::protobuf::uint32 refreshed; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t now; // [rsp+14h] [rbp-10Ch]
  uint32_t time_offset; // [rsp+18h] [rbp-108h]
  uint32_t time_day; // [rsp+1Ch] [rbp-104h]
  uint32_t start_time; // [rsp+20h] [rbp-100h]
  uint32_t end_time; // [rsp+24h] [rbp-FCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  proto::DungeonRandomRecordBin *random_record_bin_ptr; // [rsp+38h] [rbp-E8h]
  const data::DailyDungeonConfig *daily_dungeon_config_ptr; // [rsp+40h] [rbp-E0h]
  const std::set<unsigned int> *dungeon_set_ptr; // [rsp+48h] [rbp-D8h]
  const std::set<unsigned int> *__for_range; // [rsp+50h] [rbp-D0h]
  proto::DungeonRecordBin *record_bin_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v31; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v32; // [rsp+70h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 13 week_day:1827 48 4 15 dungeon_id:1840 64 4 14 random_id:1806";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::checkRandomDungeonRefresh;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = random_id;
  random_record_bin_ptr = PlayerDungeonComp::getRandomDungeonRecord(this, *(_DWORD *)(v2 + 64));
  if ( random_record_bin_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v31);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
    daily_dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDailyDungeonConfig(
                                 &v6->design_config.txt_config_mgr.dungeon_config_mgr,
                                 *(_DWORD *)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v31);
    if ( daily_dungeon_config_ptr )
    {
      now = common::tools::TimeUtils::getNow();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
      time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v8->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v31);
      refreshed = proto::DungeonRandomRecordBin::refresh_time(random_record_bin_ptr);
      if ( common::tools::TimeUtils::isSameDay(now, refreshed, time_offset) )
      {
        result = 0LL;
      }
      else
      {
        *(_DWORD *)(v2 + 32) = common::tools::TimeUtils::getTimeWeekDay(now, time_offset);
        time_day = common::tools::TimeUtils::getTimeDay(now, time_offset);
        proto::DungeonRandomRecordBin::clear_dungeon_list(random_record_bin_ptr);
        proto::DungeonRandomRecordBin::set_refresh_time(random_record_bin_ptr, now);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
        dungeon_set_ptr = DungeonExcelConfigMgr::findDailyDungeonSet(
                            &v10->design_config.txt_config_mgr.dungeon_config_mgr,
                            *(_DWORD *)(v2 + 64),
                            *(_DWORD *)(v2 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v31);
        if ( dungeon_set_ptr )
        {
          __for_range = dungeon_set_ptr;
          __for_begin._M_node = std::set<unsigned int>::begin(dungeon_set_ptr)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(dungeon_set_ptr)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v14 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            v15 = v14;
            if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v14);
            }
            *(_DWORD *)(v2 + 48) = *v15;
            record_bin_ptr = PlayerDungeonComp::getDungeonDailyRecord(this, *(_DWORD *)(v2 + 48));
            if ( record_bin_ptr )
            {
              start_time = common::tools::TimeUtils::getDailyStartTime(time_day, time_offset);
              end_time = common::tools::TimeUtils::getDailyStartTime(time_day + 1, time_offset);
              proto::DungeonRecordBin::set_start_time(record_bin_ptr, start_time);
              proto::DungeonRecordBin::set_end_time(record_bin_ptr, end_time);
              proto::DungeonRandomRecordBin::add_dungeon_list(random_record_bin_ptr, *(_DWORD *)(v2 + 48));
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/dungeon/player_dungeon_comp.cpp",
                "checkRandomDungeonRefresh",
                1852);
              v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                      &v32,
                      (const char (*)[27])"random dungeon, random id:");
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v16,
                      (const unsigned int *)(v2 + 64));
              v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v17,
                      (const char (*)[14])", dungeon_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v32);
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "checkRandomDungeonRefresh",
            1836);
          v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v32,
                  (const char (*)[38])"find findDailyDungeonSet , random id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 64));
          v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" week day:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v32);
          result = 5LL;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "checkRandomDungeonRefresh",
        1817);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v32,
             (const char (*)[41])"find findDailyDungeonConfig , random id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v32);
      result = 5LL;
    }
  }
  else
  {
    result = 0xFFFFFFFFLL;
  }
  if ( v33 == (char *)v2 )
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

// Line 1875: range 00000000141B2F20-00000000141B3429
__int64 __fastcall PlayerDungeonComp::getRandomDungeonList(
        PlayerDungeonComp *const this,
        uint32_t entry_scene_id,
        uint32_t entry_point_id,
        std::vector<unsigned int> *dungeon_id_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+24h] [rbp-11Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-108h]
  std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  proto::DungeonRandomRecordBin *random_record_bin_ptr; // [rsp+48h] [rbp-F8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-F0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<Config> v27; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-D0h] BYREF
  char v29[176]; // [rsp+90h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 14 random_id:1888 48 4 15 dungeon_id:1900 64 4 19 entry_scene_id:1874 80 4 19 entry_point"
                        "_id:1874 96 16 22 dungeon_entry_ptr:1876";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::getRandomDungeonList;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 64) = entry_scene_id;
  *(_DWORD *)(v4 + 80) = entry_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  JsonConfigMgr::findScenePoint<data::DungeonEntry>(
    (const JsonConfigMgr *const)(v4 + 96),
    v7 + 93080,
    *(_DWORD *)(v4 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getRandomDungeonList",
      1879);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v28,
           (const char (*)[36])"findScenePoint fails, cur_scene_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v28);
    v11 = 5;
  }
  else
  {
    v12 = std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
    if ( std::vector<unsigned int>::size(&v12->dungeon_random_list) )
    {
      __for_range = &std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->dungeon_random_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v13 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v4 + 32) = *v14;
        ret = PlayerDungeonComp::checkRandomDungeonRefresh(this, *(_DWORD *)(v4 + 32));
        if ( ret )
        {
          v11 = ret;
          goto LABEL_23;
        }
        random_record_bin_ptr = PlayerDungeonComp::findRandomDungeonRecord(this, *(_DWORD *)(v4 + 32));
        if ( random_record_bin_ptr )
        {
          __for_range_0 = proto::DungeonRandomRecordBin::dungeon_list(random_record_bin_ptr);
          __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
          __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
          while ( __for_begin_0 != __for_end_0 )
          {
            if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(__for_begin_0);
            }
            *(_DWORD *)(v4 + 48) = *__for_begin_0;
            std::vector<unsigned int>::push_back(
              dungeon_id_vec,
              (const std::vector<unsigned int>::value_type *)(v4 + 48));
            ++__for_begin_0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "getRandomDungeonList",
            1897);
          v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v28,
                  (const char (*)[45])"cannot find random dungeon record,random id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v28);
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v11 = 0;
    }
    else
    {
      v11 = 0;
    }
  }
LABEL_23:
  std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v4 + 96));
  result = v11;
  if ( v29 == (char *)v4 )
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

// Line 1909: range 00000000141B342A-00000000141B3AD5
void __fastcall PlayerDungeonComp::getDungeonSetByRosterID(
        const PlayerDungeonComp *const this,
        uint32_t roster_id,
        std::set<unsigned int> *dungeon_id_set)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // ecx
  uint32_t v14; // ecx
  unsigned __int64 v15; // r14
  std::vector<data::DungeonList>::size_type v16; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v17; // rax
  _DWORD *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rbx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  const data::DungeonRosterConfig *dungeon_roster_config_ptr; // [rsp+38h] [rbp-F8h]
  const data::DungeonList *roster_pool; // [rsp+40h] [rbp-F0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v32; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 8 now:1910 48 4 19 passed_minutes:1930 64 4 15 pool_index:1931 80 4 15 dungeon_id:1935 96"
                        " 4 14 roster_id:1908";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::getDungeonSetByRosterID;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -202116348;
  *(_DWORD *)(v3 + 96) = roster_id;
  *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  dungeon_roster_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonRosterConfig(
                                &v6->design_config.txt_config_mgr.dungeon_config_mgr,
                                *(_DWORD *)(v3 + 96));
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( dungeon_roster_config_ptr )
  {
    if ( !std::vector<data::DungeonList>::empty(&dungeon_roster_config_ptr->roster_pool) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->cycle_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_roster_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->cycle_time >> 3)
                                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_roster_config_ptr->cycle_time);
      }
      if ( dungeon_roster_config_ptr->cycle_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->open_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->open_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&dungeon_roster_config_ptr->open_time);
        }
        if ( dungeon_roster_config_ptr->open_time <= *(_DWORD *)(v3 + 32) )
        {
          v13 = *(_DWORD *)(v3 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->open_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->open_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&dungeon_roster_config_ptr->open_time);
          }
          v14 = v13 - dungeon_roster_config_ptr->open_time;
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->cycle_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_roster_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_roster_config_ptr->cycle_time >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&dungeon_roster_config_ptr->cycle_time);
          }
          *(_DWORD *)(v3 + 48) = v14 / (60 * dungeon_roster_config_ptr->cycle_time);
          v15 = *(unsigned int *)(v3 + 48);
          *(_DWORD *)(v3 + 64) = v15 % std::vector<data::DungeonList>::size(&dungeon_roster_config_ptr->roster_pool);
          v16 = *(unsigned int *)(v3 + 64);
          if ( v16 < std::vector<data::DungeonList>::size(&dungeon_roster_config_ptr->roster_pool) )
          {
            roster_pool = std::vector<data::DungeonList>::operator[](
                            &dungeon_roster_config_ptr->roster_pool,
                            *(unsigned int *)(v3 + 64));
            __for_range = &roster_pool->dungeon_list;
            __for_begin._M_current = std::vector<unsigned int>::begin(&roster_pool->dungeon_list)._M_current;
            __for_end._M_current = std::vector<unsigned int>::end(&roster_pool->dungeon_list)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
            {
              v17 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
              v18 = v17;
              if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v17);
              }
              *(_DWORD *)(v3 + 80) = *v18;
              std::set<unsigned int>::insert(dungeon_id_set, (const std::set<unsigned int>::value_type *)(v3 + 80));
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
            }
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "getDungeonSetByRosterID",
              1939);
            v19 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    &v33,
                    (const char (*)[21])"merged dungeon pool:");
            v20 = common::milog::MiLogStream::operator<<<unsigned int>(v19, &roster_pool->dungeon_list);
            v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])"@index");
            v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v21,
                    (const unsigned int *)(v3 + 64));
            v23 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v22,
                    (const char (*)[14])", passed min:");
            v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v23,
                    (const unsigned int *)(v3 + 48));
            v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v24,
                    (const char (*)[12])" pool size:");
            __for_end._M_current = (const unsigned int *)std::vector<data::DungeonList>::size(&dungeon_roster_config_ptr->roster_pool);
            common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v25,
              (const unsigned __int64 *)&__for_end);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "getDungeonSetByRosterID",
            1927);
          v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v33, (const char (*)[12])" roster_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v3 + 96));
          v10 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v9,
                  (const char (*)[22])" not open. open time:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  &dungeon_roster_config_ptr->open_time);
          v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", now:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getDungeonSetByRosterID",
      1914);
    v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v33,
           (const char (*)[42])"find findDungeonRosterConfig , roster id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 96));
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  if ( v34 == (char *)v3 )
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
};

// Line 1945: range 00000000141B3AD6-00000000141B3E2F
void __fastcall PlayerDungeonComp::getDungeonRosterSet(
        const PlayerDungeonComp *const this,
        uint32_t entry_scene_id,
        uint32_t entry_point_id,
        std::set<unsigned int> *dungeon_id_set)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rax
  uint32_t *v12; // rdx
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 19 entry_scene_id:1944 48 4 19 entry_point_id:1944 64 16 22 dungeon_entry_ptr:1946";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::getDungeonRosterSet;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = entry_scene_id;
  *(_DWORD *)(v4 + 48) = entry_point_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  v7 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
  JsonConfigMgr::findScenePoint<data::DungeonEntry>(
    (const JsonConfigMgr *const)(v4 + 64),
    v7 + 93080,
    *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( std::operator==<data::DungeonEntry>((const std::shared_ptr<data::DungeonEntry> *)(v4 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "getDungeonRosterSet",
      1949);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v19,
           (const char (*)[36])"findScenePoint fails, cur_scene_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", point_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    __for_range = &std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::DungeonEntry,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64))->dungeon_roster_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      PlayerDungeonComp::getDungeonSetByRosterID(this, *v12, dungeon_id_set);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<data::DungeonEntry>::~shared_ptr((std::shared_ptr<data::DungeonEntry> *const)(v4 + 64));
  if ( v20 == (char *)v4 )
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

// Line 1959: range 00000000141B3E30-00000000141B3EB2
bool __cdecl PlayerDungeonComp::isCanSingleEnter(
        PlayerDungeonComp *const this,
        const data::DungeonExcelConfig *dungeon_config_ptr)
{
  if ( !dungeon_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_config_ptr->involve_type);
  }
  return dungeon_config_ptr->involve_type == INVOLVE_ONLY_SINGLE
      || dungeon_config_ptr->involve_type == INVOLVE_SINGLE_MULTIPLE
      || dungeon_config_ptr->involve_type == INVOLVE_DYNAMIC_MULTIPLE;
};

// Line 1974: range 00000000141B3EB4-00000000141B3F95
bool __cdecl PlayerDungeonComp::isCanMulEnter(
        PlayerDungeonComp *const this,
        const data::DungeonExcelConfig *dungeon_config_ptr)
{
  char v3; // al

  if ( !dungeon_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->involve_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_config_ptr->involve_type);
  }
  if ( dungeon_config_ptr->involve_type == INVOLVE_ONLY_MULTIPLE
    || dungeon_config_ptr->involve_type == INVOLVE_SINGLE_MULTIPLE )
  {
    goto LABEL_11;
  }
  if ( dungeon_config_ptr->involve_type != INVOLVE_DYNAMIC_MULTIPLE )
    goto LABEL_12;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_config_ptr->id);
  }
  if ( PlayerDungeonComp::isDungeonPassed(this, dungeon_config_ptr->id) )
LABEL_11:
    v3 = 1;
  else
LABEL_12:
    v3 = 0;
  return v3 != 0;
};

// Line 1989: range 00000000141B3F96-00000000141B4684
std::pair<int,std::vector<unsigned int> > *__cdecl PlayerDungeonComp::checkMpModeAvailability(
        std::pair<int,std::vector<unsigned int> > *retstr,
        const PlayerDungeonComp *const this)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  DungeonExcelConfigMgr *v17; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t v19; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::vector<unsigned int>::value_type __x; // [rsp+1Ch] [rbp-164h] BYREF
  std::shared_ptr<Scene> v23; // [rsp+20h] [rbp-160h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > __p; // [rsp+30h] [rbp-150h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > v25; // [rsp+50h] [rbp-130h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > v26; // [rsp+70h] [rbp-110h] BYREF
  std::pair<proto::Retcode,std::vector<unsigned int> > v27; // [rsp+90h] [rbp-F0h] BYREF
  char v28[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 26 cur_dungeon_scene_ptr:1990 64 16 27 dest_dungeon_scene_ptr:2007 96 24 14 param_vec:1991";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::checkMpModeAvailability;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)&v23);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 32));
  std::shared_ptr<Scene>::~shared_ptr(&v23);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::getDungeonType(v5) == DUNGEON_PLOT
      || (v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32)),
          DungeonScene::getDungeonType(v6) == DUNGEON_DREAMLAND) )
    {
      v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __x = DungeonScene::getDungeonId(v8);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 96), &__x);
      __x = 1217;
      std::make_pair<proto::Retcode,std::vector<unsigned int> &>(
        &__p,
        (proto::Retcode *)&__x,
        (std::vector<unsigned int> *)(v2 + 96));
      std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &__p);
      std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&__p);
      goto LABEL_30;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.dungeon_config_mgr;
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    DungeonId = DungeonScene::getDungeonId(v10);
    LOBYTE(p_dungeon_config_mgr) = DungeonExcelConfigMgr::isBanMpModeDungeon(p_dungeon_config_mgr, DungeonId);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
    if ( (_BYTE)p_dungeon_config_mgr )
    {
      v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      __x = DungeonScene::getDungeonId(v12);
      std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 96), &__x);
      __x = 1236;
      std::make_pair<proto::Retcode,std::vector<unsigned int> &>(
        &v25,
        (proto::Retcode *)&__x,
        (std::vector<unsigned int> *)(v2 + 96));
      std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &v25);
      std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&v25);
      goto LABEL_30;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&v23);
  std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
  std::shared_ptr<Scene>::~shared_ptr(&v23);
  if ( !std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL) )
    goto LABEL_26;
  v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( DungeonScene::getDungeonType(v13) != DUNGEON_PLOT )
  {
    v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( DungeonScene::getDungeonType(v14) != DUNGEON_DREAMLAND )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      v17 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.dungeon_config_mgr;
      v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      v19 = DungeonScene::getDungeonId(v18);
      LOBYTE(v17) = DungeonExcelConfigMgr::isBanMpModeDungeon(v17, v19);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v23);
      if ( (_BYTE)v17 )
      {
        v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        __x = DungeonScene::getDungeonId(v20);
        std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 96), &__x);
        __x = 1236;
        std::make_pair<proto::Retcode,std::vector<unsigned int> &>(
          &v27,
          (proto::Retcode *)&__x,
          (std::vector<unsigned int> *)(v2 + 96));
        std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &v27);
        std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&v27);
        goto LABEL_29;
      }
LABEL_26:
      __x = 0;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_impl._M_end_of_storage
                                                              + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      std::make_pair<int,std::vector<unsigned int> &>(retstr, (int *)&__x, (std::vector<unsigned int> *)(v2 + 96));
      goto LABEL_29;
    }
  }
  v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  __x = DungeonScene::getDungeonId(v16);
  std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 96), &__x);
  __x = 1217;
  std::make_pair<proto::Retcode,std::vector<unsigned int> &>(
    &v26,
    (proto::Retcode *)&__x,
    (std::vector<unsigned int> *)(v2 + 96));
  std::pair<int,std::vector<unsigned int>>::pair<proto::Retcode,std::vector<unsigned int>,true>(retstr, &v26);
  std::pair<proto::Retcode,std::vector<unsigned int>>::~pair(&v26);
LABEL_29:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
LABEL_30:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v28 == (char *)v2 )
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

// Line 2027: range 00000000141B4686-00000000141B4AE6
uint32_t __fastcall PlayerDungeonComp::refreshAndGetBossChestTakeNum(
        PlayerDungeonComp *const this,
        uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  google::protobuf::uint32 v11; // eax
  uint32_t now; // [rsp+10h] [rbp-C0h]
  uint32_t time_offset; // [rsp+14h] [rbp-BCh]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-B8h]
  const data::DungeonSerialConfig *serial_config_ptr; // [rsp+20h] [rbp-B0h]
  proto::DungeonSerialBossChestBin *boss_chest_bin; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-90h] BYREF
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 dungeon_id:2026";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::refreshAndGetBossChestTakeNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v5->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( !dungeon_config_ptr )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_config_ptr->serial_id);
  }
  if ( dungeon_config_ptr->serial_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->serial_id);
    }
    serial_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonSerialConfig(
                          p_dungeon_config_mgr,
                          dungeon_config_ptr->serial_id);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( serial_config_ptr )
    {
      boss_chest_bin = std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::operator[](
                         &this->serial_boss_chest_map_,
                         &dungeon_config_ptr->serial_id);
      now = common::tools::TimeUtils::getNow();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
      time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v10->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v17);
      v11 = proto::DungeonSerialBossChestBin::take_time(boss_chest_bin);
      if ( !common::tools::TimeUtils::isSameWeek(v11, now, time_offset) )
        proto::DungeonSerialBossChestBin::set_take_num(boss_chest_bin, 0);
      result = proto::DungeonSerialBossChestBin::take_num(boss_chest_bin);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "refreshAndGetBossChestTakeNum",
        2037);
      v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v18,
             (const char (*)[43])"findDungeonSerialConfig fails, serail_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &dungeon_config_ptr->serial_id);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = std::numeric_limits<unsigned int>::max();
    }
  }
  else
  {
LABEL_8:
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "refreshAndGetBossChestTakeNum",
      2031);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v18,
           (const char (*)[43])"findDungeonExcelConfig fails, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = std::numeric_limits<unsigned int>::max();
  }
  if ( v19 == (char *)v2 )
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

// Line 2053: range 00000000141B4AE8-00000000141B4EBA
void __fastcall PlayerDungeonComp::addBossChestTakeNum(PlayerDungeonComp *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  google::protobuf::uint32 v9; // eax
  google::protobuf::uint32 Now; // eax
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+18h] [rbp-A8h]
  const data::DungeonSerialConfig *serial_config_ptr; // [rsp+20h] [rbp-A0h]
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::mapped_type *boss_chest_bin; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 dungeon_id:2052";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::addBossChestTakeNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = dungeon_id;
  PlayerDungeonComp::refreshAndGetBossChestTakeNum(this, *(_DWORD *)(v2 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         &v5->design_config.txt_config_mgr.dungeon_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( !dungeon_config_ptr )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dungeon_config_ptr->serial_id);
  }
  if ( dungeon_config_ptr->serial_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->serial_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&dungeon_config_ptr->serial_id);
    }
    serial_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonSerialConfig(
                          p_dungeon_config_mgr,
                          dungeon_config_ptr->serial_id);
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( serial_config_ptr )
    {
      boss_chest_bin = std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::operator[](
                         &this->serial_boss_chest_map_,
                         &dungeon_config_ptr->serial_id);
      v9 = proto::DungeonSerialBossChestBin::take_num(boss_chest_bin);
      proto::DungeonSerialBossChestBin::set_take_num(boss_chest_bin, v9 + 1);
      Now = common::tools::TimeUtils::getNow();
      proto::DungeonSerialBossChestBin::set_take_time(boss_chest_bin, Now);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "addBossChestTakeNum",
        2066);
      v8 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             &v15,
             (const char (*)[43])"findDungeonSerialConfig fails, serail_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &dungeon_config_ptr->serial_id);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
  else
  {
LABEL_8:
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "addBossChestTakeNum",
      2060);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v15,
           (const char (*)[43])"findDungeonExcelConfig fails, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2077: range 00000000141B4EBC-00000000141B4F4A
void __cdecl PlayerDungeonComp::clearBossChestByGm(PlayerDungeonComp *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v1,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/player_dungeon_comp.cpp",
    aClearbosschest_0[0],
    2078);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v1, "clearBossChestByGm");
  common::milog::MiLogStream::~MiLogStream(&v1);
  std::unordered_map<unsigned int,proto::DungeonSerialBossChestBin>::clear(&this->serial_boss_chest_map_);
};

// Line 2083: range 00000000141B4F4C-00000000141B511E
uint32_t __cdecl PlayerDungeonComp::getReviveHpPercent(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4; // r14
  bool v5; // r15
  uint32_t HurtReviveHpPercent; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t result; // eax
  std::shared_ptr<Scene> p_dest_scene_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v10[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 cur_dungeon_ptr:2084";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::getReviveHpPercent;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  v4 = 0;
  v5 = 0;
  if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    std::shared_ptr<Scene>::shared_ptr<DungeonScene,void>(
      &p_dest_scene_ptr,
      (const std::shared_ptr<DungeonScene> *)(v1 + 32));
    v4 = 1;
    if ( TrialAvatarActivity::isTrialAvatarActivityDungeon(&p_dest_scene_ptr) )
      v5 = 1;
  }
  if ( v4 )
    std::shared_ptr<Scene>::~shared_ptr(&p_dest_scene_ptr);
  if ( v5 )
  {
    HurtReviveHpPercent = 100;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&p_dest_scene_ptr);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&p_dest_scene_ptr);
    HurtReviveHpPercent = ConstValueExcelConfigMgr::getHurtReviveHpPercent(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&p_dest_scene_ptr);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = HurtReviveHpPercent;
  if ( v10 == (char *)v1 )
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

// Line 2098: range 00000000141B5120-00000000141B52A9
void __cdecl PlayerDungeonComp::procAvatars(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-90h] BYREF
  char v5[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 20 cur_dungeon_ptr:2099";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::procAvatars;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v1 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "procAvatars",
      2102);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v4, (const char (*)[24])"cur_dungeon_ptr nullptr");
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2116: range 00000000141B52AA-00000000141B57E9
int32_t __cdecl PlayerDungeonComp::trySettleCurDungeonBeforeTransfer(
        PlayerDungeonComp *const this,
        Avatar *avatar,
        DungeonScenePtr *p_dungeon_scene_ptr,
        uint32_t scene_id,
        const Vector3 *quit_pos,
        const Vector3 *quit_rot,
        int32_t *ret)
{
  common::milog::MiLogStream *v7; // rcx
  char v9; // bl
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t v11; // r12d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  char v13; // r12
  int32_t v14; // ecx
  common::milog::MiLogStream *v15; // rcx
  DungeonScene *v16; // rbx
  uint32_t Uid; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  DungeonScene *v19; // rbx
  uint32_t v20; // eax
  DungeonScene *v21; // rbx
  uint32_t v22; // eax
  std::shared_ptr<Player> __a; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(ret);
  }
  *ret = -1;
  if ( std::operator==<DungeonScene>(p_dungeon_scene_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "trySettleCurDungeonBeforeTransfer",
      2120);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v28,
           (const char (*)[38])"dungeon_scene_ptr is nullptr, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    return *ret;
  }
  else
  {
    v9 = 0;
    v10 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    if ( Scene::getPlayerCount((const Scene *const)v10) != 1 )
      goto LABEL_15;
    v11 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getUid(this->player_);
    Scene::findPlayer((const Scene *const)&__a, v11);
    v9 = 1;
    if ( std::operator!=<Player>(&__a, 0LL)
      && (v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr),
          DungeonScene::getDungeonResult(v12) == DUNGEON_RESULT_NONE) )
    {
      v13 = 1;
    }
    else
    {
LABEL_15:
      v13 = 0;
    }
    if ( v9 )
      std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( v13 )
    {
      v14 = PlayerDungeonComp::settleCurDungeon(this, DUNGEON_QUIT_REASON_TRANSFER, DUNGEON_RESULT_CANCEL);
      if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(ret);
      }
      *ret = v14;
      if ( *ret )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "trySettleCurDungeonBeforeTransfer",
          2130);
        v15 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v28,
                (const char (*)[23])"settleCurDungeon fails");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v15, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v28);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(ret);
        }
        return *ret;
      }
      else
      {
        PlayerDungeonComp::setQuitPosRot(this, scene_id, quit_pos, quit_rot);
        v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        DungeonScene::setPlayerQuitReason(v16, Uid, 1u);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(ret);
        }
        *ret = 0;
        return -1;
      }
    }
    else
    {
      if ( Creature::getLifeState(avatar) == LIFE_ALIVE )
      {
        v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
        if ( DungeonScene::getDungeonResult(v18) == DUNGEON_RESULT_SUCCEED )
        {
          v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v20 = Player::getUid(this->player_);
          DungeonScene::setPlayerQuitReason(v19, v20, 3u);
        }
        else
        {
          v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v22 = Player::getUid(this->player_);
          DungeonScene::setPlayerQuitReason(v21, v22, 1u);
        }
      }
      return 0;
    }
  }
};

// Line 2155: range 00000000141B57EA-00000000141B6CA7
int32_t __cdecl PlayerDungeonComp::checkRestartDungeon(
        PlayerDungeonComp *const this,
        proto::DungeonRestartReason restart_reason)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isDungeonClosed; // r15
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t OwnerUid; // r15d
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  DungeonScene *v30; // rax
  std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  const std::vector<unsigned int> *PlayerUidVec; // rax
  std::unordered_map<unsigned int,std::vector<long unsigned int>>::size_type v33; // r15
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  const std::pair<unsigned int const,std::vector<long unsigned int> > *v37; // rax
  common::milog::MiLogStream *v38; // rax
  _BOOL4 v39; // r15d
  uint32_t v40; // edi
  int v41; // r15d
  Player *v42; // rax
  PlayerBasicComp *v43; // rax
  uint32_t v44; // ecx
  unsigned __int64 v45; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  bool isAvatarSystemClosed; // r15
  Player *v48; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  int v53; // r15d
  FeatureSwitchMgr *p_feature_switch_mgr; // r15
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rax
  uint32_t AvatarId; // eax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  int32_t result; // eax
  unsigned int v61; // [rsp+28h] [rbp-1F8h] BYREF
  unsigned int val; // [rsp+2Ch] [rbp-1F4h] BYREF
  std::unordered_map<unsigned int,std::vector<long unsigned int>>::const_iterator __for_begin; // [rsp+30h] [rbp-1F0h] BYREF
  std::unordered_map<unsigned int,std::vector<long unsigned int>>::const_iterator __for_end; // [rsp+38h] [rbp-1E8h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-1E0h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-1D8h] BYREF
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+50h] [rbp-1D0h]
  const DungeonSettleSnapshot *settle_snapshot; // [rsp+58h] [rbp-1C8h]
  const std::unordered_map<unsigned int,std::vector<long unsigned int>> *__for_range; // [rsp+60h] [rbp-1C0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<long unsigned int> > >::type *uid; // [rsp+68h] [rbp-1B8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<long unsigned int> > >::type *avatar_guid_vec; // [rsp+70h] [rbp-1B0h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+78h] [rbp-1A8h]
  std::shared_ptr<Config> v73; // [rsp+80h] [rbp-1A0h] BYREF
  std::pair<unsigned int const,std::vector<long unsigned int> > v74; // [rsp+90h] [rbp-190h] BYREF
  common::milog::MiLogStream v75; // [rsp+B0h] [rbp-170h] BYREF
  char v76[336]; // [rsp+D0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v76;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 48 4 15 dungeon_id:2167 64 8 9 guid:2257 96 16 22 dungeon_scene_ptr:2161 128 16 19 scene_team_"
                        "ptr:2228 160 16 25 candidate_player_ptr:2247 192 16 21 scene_avatar_ptr:2264 224 24 21 cur_team_uid_vec:2227";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::checkRestartDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  if ( restart_reason == DUNGEON_RESTART_REASON_NONE )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "checkRestartDungeon",
      2158);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v75,
      (const char (*)[27])"unsupported restart reason");
    common::milog::MiLogStream::~MiLogStream(&v75);
    v2 = -1;
    goto LABEL_80;
  }
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 96));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "checkRestartDungeon",
      2164);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v75, (const char (*)[33])off_25265860);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v75);
    v2 = -1;
    goto LABEL_79;
  }
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  *(_DWORD *)(v3 + 48) = DungeonScene::getDungeonId(v7);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v73);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
  isDungeonClosed = FeatureSwitchMgr::isDungeonClosed(&v8->feature_switch_mgr, *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v73);
  if ( isDungeonClosed )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "checkRestartDungeon",
      2170);
    v10 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v75,
            (const char (*)[46])"[FEATURE_SWITCH] dungeon closed, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v75);
    v2 = 142;
  }
  else
  {
    v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    OwnerUid = Scene::getOwnerUid((const Scene *const)v11);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid != Player::getUid(this->player_) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "checkRestartDungeon",
        2175);
      v13 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v75,
              (const char (*)[38])"owner can restart dungeon, owner_uid:");
      v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      v61 = Scene::getOwnerUid((const Scene *const)v14);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v61);
      v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v75);
      v2 = -1;
      goto LABEL_79;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v73);
    v17 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
    dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                           &v17->design_config.txt_config_mgr.dungeon_config_mgr,
                           *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v73);
    if ( dungeon_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      Level = PlayerBasicComp::getLevel(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)dungeon_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&dungeon_config_ptr->limit_level);
      }
      if ( Level >= dungeon_config_ptr->limit_level )
      {
        v22 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( DungeonScene::getIsForceQuit(v22) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "checkRestartDungeon",
            2191);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            &v75,
            (const char (*)[39])"dungeon timeout force all players quit");
          common::milog::MiLogStream::~MiLogStream(&v75);
          v2 = 1123;
        }
        else
        {
          v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( !DungeonScene::getIsInRestartProcess(v23) )
          {
            if ( restart_reason == DUNGEON_RESTART_REASON_DAILY_RESTART )
            {
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_config_ptr->type);
              }
              if ( dungeon_config_ptr->type != DUNGEON_DAILY_FIGHT
                && dungeon_config_ptr->type != DUNGEON_BLITZ_RUSH
                && dungeon_config_ptr->type != DUNGEON_MINI_ELDRITCH
                && dungeon_config_ptr->type != DUNGEON_SUMMER_V2
                && dungeon_config_ptr->type != DUNGEON_WIND_FIELD )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/player_dungeon_comp.cpp",
                  "checkRestartDungeon",
                  2209);
                v24 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                        &v75,
                        (const char (*)[37])"dungeon can not restart, dungeon_id:");
                v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v24,
                        (const unsigned int *)(v3 + 48));
                v26 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v25,
                        (const char (*)[15])", DungeonType:");
                common::milog::MiLogStream::operator<<<data::DungeonType,(data::DungeonType*)0>(
                  v26,
                  &dungeon_config_ptr->type);
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = -1;
                goto LABEL_79;
              }
              v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              if ( DungeonScene::getDungeonResult(v27) != DUNGEON_RESULT_SUCCEED )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/dungeon/player_dungeon_comp.cpp",
                  "checkRestartDungeon",
                  2215);
                v28 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                        &v75,
                        (const char (*)[73])"dungeon result is not DUNGEON_RESULT_SUCCEED restart failed, dungeon_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v28,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = -1;
                goto LABEL_79;
              }
            }
            v29 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            settle_snapshot = DungeonScene::getDungeonSettleSnapshot(v29);
            if ( std::unordered_map<unsigned int,std::vector<unsigned long>>::empty(&settle_snapshot->settle_team_avatar_map) )
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/dungeon/player_dungeon_comp.cpp",
                "checkRestartDungeon",
                2224);
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v75,
                (const char (*)[30])"settle_team_avatar_map size 0");
              common::milog::MiLogStream::~MiLogStream(&v75);
              v2 = -1;
            }
            else
            {
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 224));
              v30 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              DungeonScene::getDungeonSceneTeam(v30);
              DungeonSceneTeam::getSceneTeam((DungeonSceneTeam *const)(v3 + 128));
              if ( std::operator!=<SceneTeam>((const std::shared_ptr<SceneTeam> *)(v3 + 128), 0LL) )
              {
                v31 = std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTeam,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                PlayerUidVec = SceneTeam::getPlayerUidVec(v31);
                std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v3 + 224), PlayerUidVec);
              }
              v33 = std::unordered_map<unsigned int,std::vector<unsigned long>>::size(&settle_snapshot->settle_team_avatar_map);
              if ( v33 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 224)) )
              {
                __for_range = &settle_snapshot->settle_team_avatar_map;
                __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<unsigned long>>::begin(&settle_snapshot->settle_team_avatar_map)._M_cur;
                __for_end._M_cur = std::unordered_map<unsigned int,std::vector<unsigned long>>::end(&settle_snapshot->settle_team_avatar_map)._M_cur;
                while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned long>>,false>(
                          &__for_begin,
                          &__for_end) )
                {
                  v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned long>>,false,false>::operator*(&__for_begin);
                  std::pair<unsigned int const,std::vector<unsigned long>>::pair(&v74, v37);
                  uid = std::get<0ul,unsigned int const,std::vector<unsigned long>>(&v74);
                  avatar_guid_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<long unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned long>>(&v74);
                  if ( !common::tools::MiscUtils::isContains<unsigned int>((std::vector<unsigned int> *)(v3 + 224), uid) )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/dungeon/player_dungeon_comp.cpp",
                      "checkRestartDungeon",
                      2243);
                    v38 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            &v75,
                            (const char (*)[45])"player is not in cur scene team player, uid:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, uid);
                    common::milog::MiLogStream::~MiLogStream(&v75);
                    v2 = 1124;
                    v39 = 0;
                  }
                  else
                  {
                    v40 = (unsigned int)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
                    {
                      v40 = (unsigned int)uid;
                      __asan_report_load4(uid);
                    }
                    Scene::findPlayer((const Scene *const)(v3 + 160), v40);
                    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 160)) )
                    {
                      common::milog::MiLogStream::create(
                        &v75,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/dungeon/player_dungeon_comp.cpp",
                        "checkRestartDungeon",
                        2250);
                      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        &v75,
                        (const char (*)[29])"candidate_player_ptr nullptr");
                      common::milog::MiLogStream::~MiLogStream(&v75);
                      v2 = -1;
                      v41 = 0;
                    }
                    else
                    {
                      v42 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                      v43 = Player::getBasicComp(v42);
                      v44 = PlayerBasicComp::getLevel(v43);
                      if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)dungeon_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->limit_level >> 3)
                                                                                          + 0x7FFF8000) )
                      {
                        __asan_report_load4(&dungeon_config_ptr->limit_level);
                      }
                      if ( v44 >= dungeon_config_ptr->limit_level )
                      {
                        __for_range_0 = avatar_guid_vec;
                        __for_begin_0._M_current = std::vector<unsigned long>::begin(avatar_guid_vec)._M_current;
                        __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
                        while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                                  &__for_begin_0,
                                  &__for_end_0) )
                        {
                          v45 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
                          if ( *(_BYTE *)((v45 >> 3) + 0x7FFF8000) )
                            v45 = __asan_report_load8();
                          *(_QWORD *)(v3 + 64) = *(_QWORD *)v45;
                          ServiceBox::findService<GameserverService>();
                          GameserverService::getConfig((GameserverService *const)&v73);
                          v46 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73);
                          isAvatarSystemClosed = FeatureSwitchMgr::isAvatarSystemClosed(&v46->feature_switch_mgr);
                          std::shared_ptr<Config>::~shared_ptr(&v73);
                          if ( isAvatarSystemClosed )
                          {
                            common::milog::MiLogStream::create(
                              &v75,
                              &common::milog::MiLogDefault::default_log_obj_,
                              1u,
                              "./src/dungeon/player_dungeon_comp.cpp",
                              "checkRestartDungeon",
                              2261);
                            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                              &v75,
                              (const char (*)[37])"[FEATURE_SWITCH] AvatarSystem closed");
                            common::milog::MiLogStream::~MiLogStream(&v75);
                            v2 = 142;
LABEL_72:
                            v41 = 0;
                            goto LABEL_74;
                          }
                          v48 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                          AvatarComp = Player::getAvatarComp(v48);
                          PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 192), (uint64_t)AvatarComp);
                          if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 192), 0LL) )
                          {
                            common::milog::MiLogStream::create(
                              &v75,
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/dungeon/player_dungeon_comp.cpp",
                              "checkRestartDungeon",
                              2267);
                            v50 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                    &v75,
                                    (const char (*)[25])"findAvatar failed, guid:");
                            v51 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                                    v50,
                                    (const unsigned __int64 *)(v3 + 64));
                            v52 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                                    v51,
                                    (const char (*)[7])", uid:");
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, uid);
                            common::milog::MiLogStream::~MiLogStream(&v75);
                            v2 = -1;
                            v53 = 0;
                          }
                          else
                          {
                            ServiceBox::findService<GameserverService>();
                            GameserverService::getConfig((GameserverService *const)&v73);
                            p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73)->feature_switch_mgr;
                            v55 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                            AvatarId = Avatar::getAvatarId(v55);
                            LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isAvatarClosed(
                                                             p_feature_switch_mgr,
                                                             AvatarId);
                            std::shared_ptr<Config>::~shared_ptr(&v73);
                            if ( (_BYTE)p_feature_switch_mgr )
                            {
                              common::milog::MiLogStream::create(
                                &v75,
                                &common::milog::MiLogDefault::default_log_obj_,
                                1u,
                                "./src/dungeon/player_dungeon_comp.cpp",
                                "checkRestartDungeon",
                                2272);
                              v57 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                      &v75,
                                      (const char (*)[42])"[FEATURE_SWITCH] AvatarSystem avatar_id: ");
                              v58 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
                              val = Avatar::getAvatarId(v58);
                              v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &val);
                              common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                v59,
                                (const char (*)[8])" closed");
                              common::milog::MiLogStream::~MiLogStream(&v75);
                              v2 = 142;
                              v53 = 0;
                            }
                            else
                            {
                              v53 = 1;
                            }
                          }
                          std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 192));
                          if ( v53 != 1 )
                            goto LABEL_72;
                          __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
                        }
                        v41 = 1;
                      }
                      else
                      {
                        v2 = 1122;
                        v41 = 0;
                      }
                    }
LABEL_74:
                    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
                    v39 = v41 == 1;
                  }
                  std::pair<unsigned int const,std::vector<unsigned long>>::~pair(&v74);
                  if ( !v39 )
                    goto LABEL_78;
                  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned long>>,false,false>::operator++(&__for_begin);
                }
                v2 = 0;
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/dungeon/player_dungeon_comp.cpp",
                  "checkRestartDungeon",
                  2235);
                v34 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                        &v75,
                        (const char (*)[77])"dungeon settle TeamPlayerNum not equal cur TeamPlayerNum, settle_player_num:");
                __for_begin_0._M_current = (const unsigned __int64 *)std::unordered_map<unsigned int,std::vector<unsigned long>>::size(&settle_snapshot->settle_team_avatar_map);
                v35 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v34,
                        (const unsigned __int64 *)&__for_begin_0);
                v36 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                        v35,
                        (const char (*)[18])", cur_player_num:");
                __for_end_0._M_current = (const unsigned __int64 *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 224));
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v36,
                  (const unsigned __int64 *)&__for_end_0);
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = 1124;
              }
LABEL_78:
              std::shared_ptr<SceneTeam>::~shared_ptr((std::shared_ptr<SceneTeam> *const)(v3 + 128));
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 224));
            }
            goto LABEL_79;
          }
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/dungeon/player_dungeon_comp.cpp",
            "checkRestartDungeon",
            2197);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v75,
            (const char (*)[36])"dungeon scene is in restart process");
          common::milog::MiLogStream::~MiLogStream(&v75);
          v2 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "checkRestartDungeon",
          2186);
        v21 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v75,
                (const char (*)[51])"player meet dungeon limit_level fails, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v75);
        v2 = 1117;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "checkRestartDungeon",
        2181);
      v18 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              &v75,
              (const char (*)[42])"findDungeonExcelConfig fails, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v75);
      v2 = -1;
    }
  }
LABEL_79:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 96));
LABEL_80:
  result = v2;
  if ( v76 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2285: range 00000000141B6CA8-00000000141B75F8
std::pair<int,std::shared_ptr<DungeonScene> > *__fastcall PlayerDungeonComp::restartDungeon(
        std::pair<int,std::shared_ptr<DungeonScene> > *retstr,
        PlayerDungeonComp *const this,
        const std::map<unsigned int,unsigned int> *level_config_id_map,
        EnterDungeonOption enter_dungeon_opt)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  std::pair<int,std::nullptr_t> v8; // rax
  DungeonScene *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::pair<int,std::nullptr_t> v11; // rax
  __int32 quit_scene_id; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  __int32 DungeonId; // eax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::pair<int,std::nullptr_t> v19; // rax
  DungeonScene *v20; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  const std::function<int(DungeonScene&,std::vector<std::shared_ptr<Avatar>>&,std::shared_ptr<Avatar>&)> *DungeonInitEnterSceneAvatarCallback; // rax
  DungeonScene *v23; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  const std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *DungeonSettleCallback; // rax
  DungeonScene *v26; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  const std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *ChallengeSettleCallback; // rax
  DungeonScene *v29; // rax
  __int32 enter_point_id; // [rsp+14h] [rbp-17Ch]
  unsigned int val; // [rsp+34h] [rbp-15Ch] BYREF
  __int64 __y; // [rsp+38h] [rbp-158h] BYREF
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *retcode; // [rsp+40h] [rbp-150h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *next_dungeon_scene_ptr; // [rsp+48h] [rbp-148h]
  std::pair<int,std::nullptr_t> __p; // [rsp+50h] [rbp-140h] BYREF
  std::pair<int,std::nullptr_t> v38; // [rsp+60h] [rbp-130h] BYREF
  std::pair<int,std::nullptr_t> v39; // [rsp+70h] [rbp-120h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+80h] [rbp-110h] BYREF
  common::milog::MiLogStream v41; // [rsp+A0h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+C0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 8 ret:2293 64 16 22 dungeon_scene_ptr:2286 96 28 22 enter_dungeon_opt:2284";
  *(_QWORD *)(v4 + 16) = PlayerDungeonComp::restartDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = 0x4000000;
  v6[536862724] = -202116109;
  *(EnterDungeonOption *)(v4 + 96) = enter_dungeon_opt;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v4 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "restartDungeon",
      2289);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v41, (const char (*)[33])off_25265860);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    __y = 0LL;
    val = -1;
    v8 = std::make_pair<int,decltype(nullptr)>((int *)&val, &__y);
    __p.first = v8.first;
    __p.second = v8.second;
    std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &__p);
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    *(_DWORD *)(v4 + 48) = DungeonScene::reviveAllDeathPlayer(v9, 0);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "restartDungeon",
        2296);
      v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v41,
              (const char (*)[34])"reviveAllDeathPlayer failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      __y = 0LL;
      v11 = std::make_pair<int &,decltype(nullptr)>((int *)(v4 + 48), &__y);
      v38.first = v11.first;
      v38.second = v11.second;
      std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v38);
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_restart_dungeon_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_restart_dungeon_);
      this->is_restart_dungeon_ = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->enter_point_id_);
      }
      enter_point_id = this->enter_point_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->quit_scene_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->quit_scene_id_);
      }
      quit_scene_id = this->quit_scene_id_;
      v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      DungeonId = DungeonScene::getDungeonId(v13);
      PlayerDungeonComp::enterDungeon(
        &__in,
        this,
        DungeonId,
        quit_scene_id,
        enter_point_id,
        level_config_id_map,
        *(EnterDungeonOption *)(v4 + 96));
      retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
      next_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
      if ( *(char *)(((unsigned __int64)&this->is_restart_dungeon_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_restart_dungeon_);
      this->is_restart_dungeon_ = 0;
      if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(retcode);
      }
      if ( *retcode )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "restartDungeon",
          2307);
        v15 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v41,
                (const char (*)[30])"enterDungeon failed, retcode:");
        v16 = common::milog::MiLogStream::operator<<<int,(int *)0>(v15, retcode);
        v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" dungeon_id");
        v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        val = DungeonScene::getDungeonId(v18);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        __y = 0LL;
        v19 = std::make_pair<int &,decltype(nullptr)>(retcode, &__y);
        v39.first = v19.first;
        v39.second = v19.second;
        std::pair<int,std::shared_ptr<DungeonScene>>::pair<int,decltype(nullptr),true>(retstr, &v39);
      }
      else
      {
        if ( std::operator!=<DungeonScene>(0LL, next_dungeon_scene_ptr) )
        {
          v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
          v21 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          DungeonInitEnterSceneAvatarCallback = DungeonScene::getDungeonInitEnterSceneAvatarCallback(v21);
          std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::function(
            (std::function<int(DungeonScene&,std::vector<std::shared_ptr<Avatar>>&,std::shared_ptr<Avatar>&)> *const)&v41,
            DungeonInitEnterSceneAvatarCallback);
          DungeonScene::registerDungeonInitEnterSceneAvatarCallback(v20, (DungeonInitEnterSceneAvatarCallback *)&v41);
          std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::~function((std::function<int(DungeonScene&,std::vector<std::shared_ptr<Avatar>>&,std::shared_ptr<Avatar>&)> *const)&v41);
          v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
          v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          DungeonSettleCallback = DungeonScene::getDungeonSettleCallback(v24);
          std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function(
            (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v41,
            DungeonSettleCallback);
          DungeonScene::registerDungeonSettleCallback(v23, (DungeonSettleCallback *)&v41);
          std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v41);
          v26 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)next_dungeon_scene_ptr);
          v27 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          ChallengeSettleCallback = DungeonScene::getChallengeSettleCallback(v27);
          std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::function(
            (std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v41,
            ChallengeSettleCallback);
          DungeonScene::registerChallengeSettleCallback(v26, (ChallengeSettleCallback *)&v41);
          std::function<void ()(Player &,DungeonScene &,Challenge &,proto::DungeonChallengeFinishNotify &)>::~function((std::function<void(Player&,DungeonScene&,Challenge&,proto::DungeonChallengeFinishNotify&)> *const)&v41);
        }
        v29 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        DungeonScene::setIsInRestartProcess(v29, 1);
        val = 0;
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->second._M_refcount._M_pi + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->second._M_refcount._M_pi + 7) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 24LL);
        }
        std::make_pair<int,std::shared_ptr<DungeonScene> &>(retstr, (int *)&val, next_dungeon_scene_ptr);
      }
      std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
  if ( v42 == (char *)v4 )
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
  return retstr;
};

// Line 2322: range 00000000141B764C-00000000141B7CC9
int32_t __cdecl PlayerDungeonComp::startRestartInviteFlow(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // r14
  int32_t v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // edx
  uint32_t v11; // ecx
  Scene *v12; // rax
  int32_t result; // eax
  Scene *v14; // [rsp+10h] [rbp-180h]
  google::protobuf::uint32 cd; // [rsp+2Ch] [rbp-164h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-160h] BYREF
  PlayerDungeonComp::RestartInviteInfo v17; // [rsp+40h] [rbp-150h] BYREF
  char v18[272]; // [rsp+80h] [rbp-110h] BYREF
  PlayerDungeonComp::startRestartInviteFlow::<lambda(Player&)> v19; // 0:rsi.8,8:edx.4

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 14 owner_uid:2331 48 16 22 dungeon_scene_ptr:2323 80 32 17 reply_notify:2349 144 40 11 notify:2332";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::startRestartInviteFlow;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862722] = 62194;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 48));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 80),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "startRestartInviteFlow",
      2326);
    v4 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)(v1 + 80),
           (const char (*)[33])off_25265860);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 80));
    v5 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    cd = ConstValueExcelConfigMgr::getDungeonRestartInviteValidTimeSec(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v1 + 32) = Player::getUid(this->player_);
    proto::DungeonRestartInviteNotify::DungeonRestartInviteNotify((proto::DungeonRestartInviteNotify *const)(v1 + 144));
    proto::DungeonRestartInviteNotify::set_player_uid(
      (proto::DungeonRestartInviteNotify *const)(v1 + 144),
      *(_DWORD *)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->enter_point_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->enter_point_id_);
    }
    proto::DungeonRestartInviteNotify::set_point_id(
      (proto::DungeonRestartInviteNotify *const)(v1 + 144),
      this->enter_point_id_);
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    DungeonId = DungeonScene::getDungeonId(v7);
    proto::DungeonRestartInviteNotify::set_dungeon_id((proto::DungeonRestartInviteNotify *const)(v1 + 144), DungeonId);
    proto::DungeonRestartInviteNotify::set_cd((proto::DungeonRestartInviteNotify *const)(v1 + 144), cd);
    v14 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    v19.__owner_uid = *(_DWORD *)(v1 + 32);
    v19.__notify = (proto::DungeonRestartInviteNotify *)(v1 + 144);
    std::function<ForeachPolicy ()(Player &)>::function<PlayerDungeonComp::startRestartInviteFlow(void)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)(v1 + 80),
      v19);
    Scene::foreachPlayer(v14, (std::function<ForeachPolicy(Player&)> *)(v1 + 80));
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)(v1 + 80));
    memset(&v17, 0, sizeof(v17));
    PlayerDungeonComp::RestartInviteInfo::RestartInviteInfo(&v17);
    PlayerDungeonComp::RestartInviteInfo::operator=(&this->restart_invite_info_, &v17);
    PlayerDungeonComp::RestartInviteInfo::~RestartInviteInfo(&v17);
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    v10 = DungeonScene::getDungeonId(v9);
    if ( *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->restart_invite_info_.dungeon_id);
    }
    this->restart_invite_info_.dungeon_id = v10;
    v11 = common::tools::TimeUtils::getNow() + cd + 5;
    if ( *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.deadline_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.deadline_time >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->restart_invite_info_.deadline_time);
    }
    this->restart_invite_info_.deadline_time = v11;
    std::vector<unsigned int>::push_back(
      &this->restart_invite_info_.agree_uid_vec,
      (const std::vector<unsigned int>::value_type *)(v1 + 32));
    proto::DungeonRestartInviteReplyNotify::DungeonRestartInviteReplyNotify((proto::DungeonRestartInviteReplyNotify *const)(v1 + 80));
    proto::DungeonRestartInviteReplyNotify::set_player_uid(
      (proto::DungeonRestartInviteReplyNotify *const)(v1 + 80),
      *(_DWORD *)(v1 + 32));
    proto::DungeonRestartInviteReplyNotify::set_is_accept((proto::DungeonRestartInviteReplyNotify *const)(v1 + 80), 1);
    v12 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    Scene::notifyAllPlayer<proto::DungeonRestartInviteReplyNotify>(
      v12,
      (proto::DungeonRestartInviteReplyNotify *)(v1 + 80),
      *(_DWORD *)(v1 + 32));
    v5 = 0;
    proto::DungeonRestartInviteReplyNotify::~DungeonRestartInviteReplyNotify((proto::DungeonRestartInviteReplyNotify *const)(v1 + 80));
    proto::DungeonRestartInviteNotify::~DungeonRestartInviteNotify((proto::DungeonRestartInviteNotify *const)(v1 + 144));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 48));
  result = v5;
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2337: range 00000000141B75FA-00000000141B764A
ForeachPolicy __cdecl PlayerDungeonComp::startRestartInviteFlow(void)::{lambda(Player &)#1}::operator()(
        const PlayerDungeonComp::startRestartInviteFlow::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 2358: range 00000000141B7CCA-00000000141B8B75
__int64 __fastcall PlayerDungeonComp::onRestartGuestReply(
        PlayerDungeonComp *const this,
        uint32_t guest_uid,
        bool is_accept)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  unsigned int v7; // r14d
  uint32_t CurDungeonId; // ecx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  Scene *v18; // rax
  std::vector<unsigned int>::size_type v19; // r14
  Scene *v20; // rax
  common::milog::MiLogStream *v21; // r14
  Scene *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  Scene *v25; // rax
  Scene *v26; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+10h] [rbp-240h] BYREF
  const DungeonSettleSnapshot *settle_snapshot; // [rsp+18h] [rbp-238h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *retcode; // [rsp+20h] [rbp-230h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dest_dungeon_scene_ptr; // [rsp+28h] [rbp-228h]
  EnterDungeonOption v34; // [rsp+30h] [rbp-220h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+50h] [rbp-200h] BYREF
  PlayerDungeonComp::RestartInviteInfo v36; // [rsp+80h] [rbp-1D0h] BYREF
  char v37[400]; // [rsp+C0h] [rbp-190h] BYREF

  v3 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(352LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 4 8 now:2377 48 4 14 guest_uid:2357 64 16 22 dungeon_scene_ptr:2359 96 24 15 res_notify:240"
                        "7 160 24 15 res_notify:2450 224 32 11 notify:2400 288 32 11 notify:2445";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::onRestartGuestReply;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -234881024;
  v5[536862724] = -218959118;
  v5[536862725] = -234881024;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -202116109;
  *(_DWORD *)(v3 + 48) = guest_uid;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v3 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "onRestartGuestReply",
      2362);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)(v3 + 288),
           (const char (*)[33])off_25265860);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
    v7 = -1;
  }
  else
  {
    CurDungeonId = PlayerDungeonComp::getCurDungeonId(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->restart_invite_info_.dungeon_id);
    }
    if ( CurDungeonId != this->restart_invite_info_.dungeon_id )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onRestartGuestReply",
        2368);
      v9 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
             (common::milog::MiLogStream *const)(v3 + 288),
             (const char (*)[63])off_25269300);
      val = PlayerDungeonComp::getCurDungeonId(this);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v10,
              (const char (*)[20])", invite dungeon_id");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v11,
        &this->restart_invite_info_.dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v7 = -1;
      goto LABEL_43;
    }
    v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    settle_snapshot = DungeonScene::getDungeonSettleSnapshot(v12);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned long>> const,unsigned int>(
            &settle_snapshot->settle_team_avatar_map,
            (const unsigned int *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onRestartGuestReply",
        2374);
      v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[52])"guest is not in dungeon settle_snapshot, guest_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v7 = -1;
      goto LABEL_43;
    }
    *(_DWORD *)(v3 + 32) = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.deadline_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->restart_invite_info_.deadline_time >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->restart_invite_info_.deadline_time);
    }
    if ( this->restart_invite_info_.deadline_time < *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onRestartGuestReply",
        2380);
      v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[5])"now:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v15, (const char (*)[16])" deadline_time:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v16,
        &this->restart_invite_info_.deadline_time);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v7 = -1;
      goto LABEL_43;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    if ( !common::tools::MiscUtils::isContains<unsigned int>(&this->restart_invite_info_.agree_uid_vec, &val) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onRestartGuestReply",
        2386);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v3 + 288),
        (const char (*)[29])"RestartInviteFlow has settle");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v7 = -1;
      goto LABEL_43;
    }
    if ( is_accept )
    {
      if ( common::tools::MiscUtils::isContains<unsigned int>(
             &this->restart_invite_info_.agree_uid_vec,
             (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "onRestartGuestReply",
          2394);
        v17 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[60])"duplicated accept the invite of restart dungeon, guest_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v7 = -1;
        goto LABEL_43;
      }
      std::vector<unsigned int>::push_back(
        &this->restart_invite_info_.agree_uid_vec,
        (const std::vector<unsigned int>::value_type *)(v3 + 48));
      proto::DungeonRestartInviteReplyNotify::DungeonRestartInviteReplyNotify((proto::DungeonRestartInviteReplyNotify *const)(v3 + 224));
      proto::DungeonRestartInviteReplyNotify::set_is_accept(
        (proto::DungeonRestartInviteReplyNotify *const)(v3 + 224),
        is_accept);
      proto::DungeonRestartInviteReplyNotify::set_player_uid(
        (proto::DungeonRestartInviteReplyNotify *const)(v3 + 224),
        *(_DWORD *)(v3 + 48));
      v18 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Scene::notifyAllPlayer<proto::DungeonRestartInviteReplyNotify>(
        v18,
        (proto::DungeonRestartInviteReplyNotify *)(v3 + 224),
        *(_DWORD *)(v3 + 48));
      v19 = std::vector<unsigned int>::size(&this->restart_invite_info_.agree_uid_vec);
      if ( v19 == std::unordered_map<unsigned int,std::vector<unsigned long>>::size(&settle_snapshot->settle_team_avatar_map) )
      {
        proto::DungeonRestartResultNotify::DungeonRestartResultNotify((proto::DungeonRestartResultNotify *const)(v3 + 96));
        if ( PlayerDungeonComp::checkRestartDungeon(this, DUNGEON_RESTART_REASON_DAILY_RESTART) )
        {
          proto::DungeonRestartResultNotify::set_is_add_accpet((proto::DungeonRestartResultNotify *const)(v3 + 96), 0);
          v22 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Scene::notifyAllPlayer<proto::DungeonRestartResultNotify>(
            v22,
            (proto::DungeonRestartResultNotify *)(v3 + 96),
            0);
        }
        else
        {
          proto::DungeonRestartResultNotify::set_is_add_accpet((proto::DungeonRestartResultNotify *const)(v3 + 96), 1);
          v20 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          Scene::notifyAllPlayer<proto::DungeonRestartResultNotify>(
            v20,
            (proto::DungeonRestartResultNotify *)(v3 + 96),
            0);
          memset(&v34, 0, sizeof(v34));
          EnterDungeonOption::EnterDungeonOption(&v34);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          PlayerDungeonComp::restartDungeon(
            (std::pair<int,std::shared_ptr<DungeonScene> > *)(v3 + 160),
            this,
            &level_config_id_map,
            v34);
          std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
          retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>((std::pair<int,std::shared_ptr<DungeonScene> > *)(v3 + 160));
          dest_dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>((std::pair<int,std::shared_ptr<DungeonScene> > *)(v3 + 160));
          if ( *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)retcode >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(retcode);
          }
          if ( *retcode )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 288),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/dungeon/player_dungeon_comp.cpp",
              "onRestartGuestReply",
              2417);
            v21 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    (common::milog::MiLogStream *const)(v3 + 288),
                    (const char (*)[34])"restartDungeon failed, owner_uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
          }
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair((std::pair<int,std::shared_ptr<DungeonScene> > *const)(v3 + 160));
        }
        memset(&v36, 0, sizeof(v36));
        PlayerDungeonComp::RestartInviteInfo::RestartInviteInfo(&v36);
        PlayerDungeonComp::RestartInviteInfo::operator=(&this->restart_invite_info_, &v36);
        PlayerDungeonComp::RestartInviteInfo::~RestartInviteInfo(&v36);
        proto::DungeonRestartResultNotify::~DungeonRestartResultNotify((proto::DungeonRestartResultNotify *const)(v3 + 96));
      }
      proto::DungeonRestartInviteReplyNotify::~DungeonRestartInviteReplyNotify((proto::DungeonRestartInviteReplyNotify *const)(v3 + 224));
    }
    else
    {
      if ( common::tools::MiscUtils::isContains<unsigned int>(
             &this->restart_invite_info_.agree_uid_vec,
             (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "onRestartGuestReply",
          2436);
        v23 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[48])"player can not reply more than once, guest_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v7 = -1;
        goto LABEL_43;
      }
      if ( common::tools::MiscUtils::isContains<unsigned int>(
             &this->restart_invite_info_.disagree_uid_vec,
             (const unsigned int *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/dungeon/player_dungeon_comp.cpp",
          "onRestartGuestReply",
          2441);
        v24 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[48])"player can not reply more than once, guest_uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        v7 = -1;
        goto LABEL_43;
      }
      std::vector<unsigned int>::push_back(
        &this->restart_invite_info_.disagree_uid_vec,
        (const std::vector<unsigned int>::value_type *)(v3 + 48));
      proto::DungeonRestartInviteReplyNotify::DungeonRestartInviteReplyNotify((proto::DungeonRestartInviteReplyNotify *const)(v3 + 288));
      proto::DungeonRestartInviteReplyNotify::set_is_accept(
        (proto::DungeonRestartInviteReplyNotify *const)(v3 + 288),
        0);
      proto::DungeonRestartInviteReplyNotify::set_player_uid(
        (proto::DungeonRestartInviteReplyNotify *const)(v3 + 288),
        *(_DWORD *)(v3 + 48));
      v25 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Scene::notifyAllPlayer<proto::DungeonRestartInviteReplyNotify>(
        v25,
        (proto::DungeonRestartInviteReplyNotify *)(v3 + 288),
        *(_DWORD *)(v3 + 48));
      proto::DungeonRestartResultNotify::DungeonRestartResultNotify((proto::DungeonRestartResultNotify *const)(v3 + 160));
      proto::DungeonRestartResultNotify::set_is_add_accpet((proto::DungeonRestartResultNotify *const)(v3 + 160), 0);
      v26 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Scene::notifyAllPlayer<proto::DungeonRestartResultNotify>(v26, (proto::DungeonRestartResultNotify *)(v3 + 160), 0);
      memset(&v36, 0, sizeof(v36));
      PlayerDungeonComp::RestartInviteInfo::RestartInviteInfo(&v36);
      PlayerDungeonComp::RestartInviteInfo::operator=(&this->restart_invite_info_, &v36);
      PlayerDungeonComp::RestartInviteInfo::~RestartInviteInfo(&v36);
      proto::DungeonRestartResultNotify::~DungeonRestartResultNotify((proto::DungeonRestartResultNotify *const)(v3 + 160));
      proto::DungeonRestartInviteReplyNotify::~DungeonRestartInviteReplyNotify((proto::DungeonRestartInviteReplyNotify *const)(v3 + 288));
    }
    v7 = 0;
  }
LABEL_43:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  result = v7;
  if ( v37 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 2462: range 00000000141B8B76-00000000141B8CB3
std::vector<unsigned int> *__cdecl PlayerDungeonComp::getElementTrialDungeonIdVec(
        std::vector<unsigned int> *retstr,
        PlayerDungeonComp *const this)
{
  const std::pair<unsigned int const,std::vector<unsigned int> > *v2; // rax
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+28h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *dungeon_id; // [rsp+30h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *trial_vec; // [rsp+38h] [rbp-48h]
  std::shared_ptr<Config> v9; // [rsp+40h] [rbp-40h] BYREF
  std::pair<unsigned int const,std::vector<unsigned int> > v10; // [rsp+50h] [rbp-30h] BYREF

  std::vector<unsigned int>::vector(retstr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.dungeon_element_challenge_config_mgr.dungeon_id_to_trial_map;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            &__for_begin,
            &__for_end) )
  {
    v2 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,std::vector<unsigned int>>::pair(&v10, v2);
    dungeon_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(&v10);
    trial_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(&v10);
    std::vector<unsigned int>::push_back(retstr, dungeon_id);
    std::pair<unsigned int const,std::vector<unsigned int>>::~pair(&v10);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 2473: range 00000000141B8CB4-00000000141B8FAD
void __cdecl PlayerDungeonComp::logElementChallengeDungeonSuccess(PlayerDungeonComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyElementChallengeDungeonSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  uint32_t CurDungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyElementChallengeDungeonSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  DungeonScene *v7; // rax
  const std::string *v8; // rax
  Player *player; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+10h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 16 dungeon_ptr:2474 64 16 12 log_ptr:2480";
  *(_QWORD *)(v1 + 16) = PlayerDungeonComp::logElementChallengeDungeonSuccess;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v1 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "logElementChallengeDungeonSuccess",
      2477);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v12, (const char (*)[22])"getCurDungeon nullptr");
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else
  {
    common::tools::perf::make_shared<proto_log::PlayerLogBodyElementChallengeDungeonSuccess>();
    v4 = std::__shared_ptr_access<proto_log::PlayerLogBodyElementChallengeDungeonSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyElementChallengeDungeonSuccess,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    CurDungeonId = PlayerDungeonComp::getCurDungeonId(this);
    proto_log::PlayerLogBodyElementChallengeDungeonSuccess::set_dungeon_id(v4, CurDungeonId);
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyElementChallengeDungeonSuccess,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyElementChallengeDungeonSuccess,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v8 = DungeonScene::getTransaction[abi:cxx11](v7);
    proto_log::PlayerLogBodyElementChallengeDungeonSuccess::set_transaction(v6, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyElementChallengeDungeonSuccess,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyElementChallengeDungeonSuccess> *)(v1 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyElementChallengeDungeonSuccess>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyElementChallengeDungeonSuccess> *const)(v1 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  if ( v13 == (char *)v1 )
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

// Line 2487: range 00000000141B8FAE-00000000141B95B5
int32_t __cdecl PlayerDungeonComp::trySubDungeonTicket(
        PlayerDungeonComp *const this,
        DungeonScenePtr *p_dungeon_scene_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  uint32_t Uid; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerMechanicusComp *MechanicusComp; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  DungeonScene *v20; // r14
  uint32_t v21; // eax
  common::milog::MiLogStream *v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v27; // [rsp+20h] [rbp-90h] BYREF
  char v28[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 dungeon_id:2493";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::trySubDungeonTicket;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::operator==<DungeonScene>(0LL, p_dungeon_scene_ptr) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "trySubDungeonTicket",
      2490);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      v6,
      (const char (*)[30])" dungeon_scene_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
    goto LABEL_27;
  }
  v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
  *(_DWORD *)(v2 + 32) = DungeonScene::getDungeonId(v8);
  v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  if ( DungeonScene::isPlayerPayedTicket(v9, Uid) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "trySubDungeonTicket",
      2497);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            v12,
            (const char (*)[34])" isPlayerPayedTicket, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0;
    goto LABEL_27;
  }
  v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
  if ( DungeonScene::getDungeonType(v14) != DUNGEON_THEATRE_MECHANICUS )
  {
LABEL_26:
    result = 0;
    goto LABEL_27;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MechanicusComp = Player::getMechanicusComp(this->player_);
  ret = PlayerMechanicusComp::trySubDungeonTicket(MechanicusComp, *(_DWORD *)(v2 + 32));
  if ( !ret )
  {
    v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_dungeon_scene_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = Player::getUid(this->player_);
    DungeonScene::addPayedTicketPlayer(v20, v21);
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/dungeon/player_dungeon_comp.cpp",
      "trySubDungeonTicket",
      2509);
    v22 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
    v24 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v23,
            (const char (*)[21])" pay for dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_26;
  }
  common::milog::MiLogStream::create(
    &v27,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/dungeon/player_dungeon_comp.cpp",
    "trySubDungeonTicket",
    2505);
  v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v27, (const char (*)[5])"uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
  v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v17, (const char (*)[19])" subDungeonTicket:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" fails");
  common::milog::MiLogStream::~MiLogStream(&v27);
  result = ret;
LABEL_27:
  if ( v28 == (char *)v2 )
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

// Line 2518: range 00000000141B95B6-00000000141B9615
int32_t __cdecl PlayerDungeonComp::grantElementChallengeFirstPassReward(
        PlayerDungeonComp *const this,
        uint32_t reward_id,
        const ActionReason *reason)
{
  PlayerItemComp *ItemComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  return PlayerItemComp::grantReward(ItemComp, reward_id, reason, 0LL);
};

// Line 2523: range 00000000141B9616-00000000141B97EA
bool __cdecl PlayerDungeonComp::isDestSceneDungeon(PlayerDungeonComp *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  int v6; // r14d
  bool result; // al
  bool v8; // [rsp+3h] [rbp-9Dh]
  char v9[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 19 dest_scene_ptr:2524 64 16 27 dest_dungeon_scene_ptr:2527";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::isDestSceneDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v2 + 32), 0LL)
    || ((std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64)),
         !std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 64), 0LL))
     || (v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
         dungeon_id != DungeonScene::getDungeonId(v5))
      ? (v6 = 1)
      : (v8 = 1, v6 = 0),
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64)),
        v6 == 1) )
  {
    v8 = 0;
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  result = v8;
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

// Line 2540: range 00000000141B97EC-00000000141B9A60
void __fastcall PlayerDungeonComp::onCreateDungeon(
        PlayerDungeonComp *const this,
        uint32_t inst_id,
        std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *p_dungeon_scene_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::shared_ptr<DungeonScene> *v14; // r8
  unsigned int val; // [rsp+28h] [rbp-98h] BYREF
  unsigned int DungeonId; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-90h] BYREF
  char v19[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 inst_id:2539";
  *(_QWORD *)(v3 + 16) = PlayerDungeonComp::onCreateDungeon;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = inst_id;
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)p_dungeon_scene_ptr) )
  {
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_dungeon_scene_ptr);
    if ( DungeonScene::getInstId(v6) == *(_DWORD *)(v3 + 32) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/dungeon/player_dungeon_comp.cpp",
        "onCreateDungeon",
        2546);
      v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v18,
             (const char (*)[23])"onCreateDungeon, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" ,inst_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" ,dungeon_id: ");
      v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(p_dungeon_scene_ptr);
      DungeonId = DungeonScene::getDungeonId(v13);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &DungeonId);
      common::milog::MiLogStream::~MiLogStream(&v18);
      std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::emplace<unsigned int &,std::shared_ptr<DungeonScene> &>(
        &this->create_dungeon_scene_map_,
        (unsigned int *)(v3 + 32),
        (std::shared_ptr<DungeonScene> *)p_dungeon_scene_ptr,
        (unsigned int *)&this->create_dungeon_scene_map_,
        v14);
    }
  }
  if ( v19 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2551: range 00000000141B9A62-00000000141B9C3B
void __fastcall PlayerDungeonComp::onDestroyDungeon(PlayerDungeonComp *const this, uint32_t inst_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-90h] BYREF
  char v10[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 inst_id:2550";
  *(_QWORD *)(v2 + 16) = PlayerDungeonComp::onDestroyDungeon;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = inst_id;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/player_dungeon_comp.cpp",
    "onDestroyDungeon",
    2552);
  v5 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v9,
         (const char (*)[24])"onDestroyDungeon, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,inst_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::erase(
    &this->create_dungeon_scene_map_,
    (const std::unordered_map<unsigned int,std::weak_ptr<DungeonScene>>::key_type *)(v2 + 32));
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

// Line 2557: range 00000000141B9C3C-00000000141B9D04
void __cdecl PlayerDungeonComp::tryResetLevelTagBeforeEnterDungeon(PlayerDungeonComp *const this, uint32_t dungeon_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  PlayerSceneComp *SceneComp; // rdx
  const std::vector<unsigned int> *series_id_vec; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  series_id_vec = LevelTagExcelConfigMgr::getLevelTagResetSeriesIdVec(
                    &v2->design_config.txt_config_mgr.level_tag_config_mgr,
                    dungeon_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  PlayerSceneComp::resetLevelTagSeriesIdVec(SceneComp, series_id_vec);
};

// Line 2563: range 00000000141B9D06-00000000141B9E41
void __cdecl PlayerDungeonComp::updateLastDungeonId(PlayerDungeonComp *const this)
{
  uint32_t CurDungeonId; // edx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  CurDungeonId = PlayerDungeonComp::getCurDungeonId(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_dungeon_id_);
  }
  this->last_dungeon_id_ = CurDungeonId;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/dungeon/player_dungeon_comp.cpp",
    "updateLastDungeonId",
    2565);
  v2 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v6, (const char (*)[17])"last_dungeon_id:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->last_dungeon_id_);
  v4 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v3, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
};
