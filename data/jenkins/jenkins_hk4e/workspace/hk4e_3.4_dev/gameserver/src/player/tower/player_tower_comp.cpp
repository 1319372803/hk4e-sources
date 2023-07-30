// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/tower/player_tower_comp.cpp

// Line 39: range 000000001436A3D4-000000001436A453
int32_t __cdecl TowerTeam::fromBin(TowerTeam *const this, const proto::TowerTeamBin *tower_team_bin)
{
  uint32_t v2; // edx
  char v3; // al
  const google::protobuf::RepeatedField<long unsigned int> *v4; // rax
  const proto::TowerTeamBin *tower_team_bina; // [rsp+0h] [rbp-20h]

  tower_team_bina = tower_team_bin;
  v2 = proto::TowerTeamBin::tower_team_id(tower_team_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(tower_team_bin) = v3 != 0;
    __asan_report_store4(this, tower_team_bin, v2);
  }
  this->tower_team_id = v2;
  v4 = proto::TowerTeamBin::avatar_guid_list(tower_team_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(v4, &this->mirror_avatar_guid_vec);
  return 0;
};

// Line 46: range 000000001436A454-000000001436A4CF
int32_t __cdecl TowerTeam::toBin(const TowerTeam *const this, proto::TowerTeamBin *tower_team_bin)
{
  google::protobuf::RepeatedField<long unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerTeamBin::set_tower_team_id(tower_team_bin, this->tower_team_id);
  v2 = proto::TowerTeamBin::mutable_avatar_guid_list(tower_team_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->mirror_avatar_guid_vec, v2);
  return 0;
};

// Line 53: range 000000001436A4D0-000000001436A54B
int32_t __cdecl TowerTeam::toClient(const TowerTeam *const this, proto::TowerTeam *proto)
{
  google::protobuf::RepeatedField<long unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerTeam::set_tower_team_id(proto, this->tower_team_id);
  v2 = proto::TowerTeam::mutable_avatar_guid_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned long,unsigned long>(&this->mirror_avatar_guid_vec, v2);
  return 0;
};

// Line 61: range 000000001436A54C-000000001436A66D
int32_t __cdecl LevelRecord::fromBin(LevelRecord *const this, const proto::TowerLevelRecordBin *tower_level_record_bin)
{
  uint32_t v2; // edx
  char v3; // al
  common::milog::MiLogStream *v4; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v5; // rax
  const proto::TowerLevelRecordBin *tower_level_record_bina; // [rsp+0h] [rbp-40h]
  common::milog::MiLogStream v8; // [rsp+10h] [rbp-30h] BYREF

  tower_level_record_bina = tower_level_record_bin;
  v2 = proto::TowerLevelRecordBin::level_id(tower_level_record_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(tower_level_record_bin) = v3 != 0;
    __asan_report_store4(this, tower_level_record_bin, v2);
  }
  this->level_id = v2;
  if ( !std::vector<unsigned int>::empty(&this->satisfied_cond_vec) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/tower/player_tower_comp.cpp",
      "fromBin",
      65);
    v4 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v8,
           (const char (*)[43])"satisfied_cond_vec is not empty, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->level_id);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  std::vector<unsigned int>::clear(&this->satisfied_cond_vec);
  v5 = proto::TowerLevelRecordBin::satisfied_cond_list(tower_level_record_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v5, &this->satisfied_cond_vec);
  return 0;
};

// Line 73: range 000000001436A66E-000000001436A6E9
int32_t __cdecl LevelRecord::toBin(const LevelRecord *const this, proto::TowerLevelRecordBin *tower_level_record_bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerLevelRecordBin::set_level_id(tower_level_record_bin, this->level_id);
  v2 = proto::TowerLevelRecordBin::mutable_satisfied_cond_list(tower_level_record_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->satisfied_cond_vec, v2);
  return 0;
};

// Line 80: range 000000001436A6EA-000000001436A765
int32_t __cdecl LevelRecord::toClient(const LevelRecord *const this, proto::TowerLevelRecord *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerLevelRecord::set_level_id(proto, this->level_id);
  v2 = proto::TowerLevelRecord::mutable_satisfied_cond_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->satisfied_cond_vec, v2);
  return 0;
};

// Line 88: range 000000001436A766-000000001436A84A
int32_t __cdecl TowerFloorRecord::fromBin(TowerFloorRecord *const this, const proto::TowerFloorRecordBin *bin)
{
  uint32_t v2; // edx
  char v3; // al
  const google::protobuf::RepeatedPtrField<proto::TowerLevelRecordBin> *v4; // rsi
  uint32_t v5; // edx
  char v6; // al
  const proto::TowerFloorRecordBin *bina; // [rsp+0h] [rbp-20h]

  bina = bin;
  v2 = proto::TowerFloorRecordBin::floor_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->floor_id = v2;
  v4 = proto::TowerFloorRecordBin::passed_level_record_list(bina);
  common::tools::MiscUtils::fromRepeated<LevelRecord,proto::TowerLevelRecordBin,int (LevelRecord::*)(proto::TowerLevelRecordBin const&)>(
    &this->passed_level_record_vec,
    v4,
    (int (*)(LevelRecord *, const proto::TowerLevelRecordBin *))LevelRecord::fromBin);
  v5 = proto::TowerFloorRecordBin::floor_star_reward_progress(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v4) = v6 != 0;
    __asan_report_store4(&this->floor_star_reward_progress, v4, v5);
  }
  this->floor_star_reward_progress = v5;
  return 0;
};

// Line 96: range 000000001436A84C-000000001436A92E
int32_t __cdecl TowerFloorRecord::toBin(const TowerFloorRecord *const this, proto::TowerFloorRecordBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::TowerLevelRecordBin> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerFloorRecordBin::set_floor_id(bin, this->floor_id);
  v2 = proto::TowerFloorRecordBin::mutable_passed_level_record_list(bin);
  common::tools::MiscUtils::toRepeated<LevelRecord,proto::TowerLevelRecordBin,int (LevelRecord::*)(proto::TowerLevelRecordBin&)const>(
    &this->passed_level_record_vec,
    v2,
    (int (*)(const LevelRecord *, proto::TowerLevelRecordBin *))LevelRecord::toBin);
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->floor_star_reward_progress);
  }
  proto::TowerFloorRecordBin::set_floor_star_reward_progress(bin, this->floor_star_reward_progress);
  return 0;
};

// Line 104: range 000000001436A930-000000001436AC5E
int32_t __cdecl TowerFloorRecord::toClient(const TowerFloorRecord *const this, proto::TowerFloorRecord *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::RepeatedPtrField<proto::TowerLevelRecord> *v5; // rax
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  std::vector<LevelRecord>::const_reference v7; // rax
  int v8; // r14d
  char *v9; // rsi
  unsigned int *v10; // rax
  _DWORD *v11; // rdx
  char v12; // cl
  int32_t result; // eax
  size_t idx; // [rsp+20h] [rbp-90h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_passed_level_map; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-80h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:111";
  *(_QWORD *)(v2 + 16) = TowerFloorRecord::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerFloorRecord::set_floor_id(proto, this->floor_id);
  v5 = proto::TowerFloorRecord::mutable_passed_level_record_list(proto);
  common::tools::MiscUtils::toRepeated<LevelRecord,proto::TowerLevelRecord,int (LevelRecord::*)(proto::TowerLevelRecord&)const>(
    &this->passed_level_record_vec,
    v5,
    (int (*)(const LevelRecord *, proto::TowerLevelRecord *))LevelRecord::toClient);
  if ( *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->floor_star_reward_progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->floor_star_reward_progress);
  }
  proto::TowerFloorRecord::set_floor_star_reward_progress(proto, this->floor_star_reward_progress);
  proto_passed_level_map = proto::TowerFloorRecord::mutable_passed_level_map(proto);
  for ( idx = 0LL; idx < std::vector<LevelRecord>::size(&this->passed_level_record_vec); ++idx )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    *(_DWORD *)(v2 + 32) = TowerExcelConfigMgr::findTowerLevelId(p_tower_config_mgr, this->floor_id, idx + 1);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    v7 = std::vector<LevelRecord>::operator[](&this->passed_level_record_vec, idx);
    v8 = std::vector<unsigned int>::size(&v7->satisfied_cond_vec);
    v9 = (char *)(v2 + 32);
    v10 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
            proto_passed_level_map,
            (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(v9) = v12 != 0;
      __asan_report_store4(v10, v9, (_BYTE)v10);
    }
    *v11 = v8;
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 118: range 000000001436AC60-000000001436ACEB
uint32_t __cdecl TowerFloorRecord::getTotalStarNum(const TowerFloorRecord *const this)
{
  uint32_t total_star_num; // [rsp+1Ch] [rbp-24h]
  std::vector<LevelRecord>::const_iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::vector<LevelRecord>::const_iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  const std::vector<LevelRecord> *__for_range; // [rsp+30h] [rbp-10h]
  const LevelRecord *level_record; // [rsp+38h] [rbp-8h]

  total_star_num = 0;
  __for_range = &this->passed_level_record_vec;
  __for_begin._M_current = std::vector<LevelRecord>::begin(&this->passed_level_record_vec)._M_current;
  __for_end._M_current = std::vector<LevelRecord>::end(&this->passed_level_record_vec)._M_current;
  while ( __gnu_cxx::operator!=<LevelRecord const*,std::vector<LevelRecord>>(&__for_begin, &__for_end) )
  {
    level_record = __gnu_cxx::__normal_iterator<LevelRecord const*,std::vector<LevelRecord>>::operator*(&__for_begin);
    total_star_num += std::vector<unsigned int>::size(&level_record->satisfied_cond_vec);
    __gnu_cxx::__normal_iterator<LevelRecord const*,std::vector<LevelRecord>>::operator++(&__for_begin);
  }
  return total_star_num;
};

// Line 129: range 000000001436ACEC-000000001436B2CD
int32_t __cdecl TowerCurLevelRecord::fromBin(TowerCurLevelRecord *const this, const proto::TowerCurLevelRecordBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  bool v9; // dl
  const google::protobuf::RepeatedPtrField<proto::TowerTeamBin> *v10; // rax
  const google::protobuf::MapPair<unsigned int,float> *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  std::map<data::FightPropType,float>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  char v16; // cl
  google::protobuf::Map<unsigned int,float>::const_iterator *p_for_end_0; // rsi
  unsigned int *p_second; // rax
  unsigned int second; // r13d
  google::protobuf::Map<unsigned int,unsigned int>::const_reference v20; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rax
  unsigned int *v22; // rdx
  char v23; // cl
  unsigned int v24; // eax
  __int64 v25; // rdx
  char v26; // al
  int32_t result; // eax
  unsigned int v28; // [rsp+Ch] [rbp-164h]
  const proto::TowerCurLevelRecordBin *bina; // [rsp+10h] [rbp-160h]
  const google::protobuf::Map<long unsigned int,proto::TowerAvatarRecordBin> *__for_range; // [rsp+28h] [rbp-148h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+30h] [rbp-140h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_buff_uid; // [rsp+38h] [rbp-138h]
  google::protobuf::Map<long unsigned int,proto::TowerAvatarRecordBin>::const_reference p_guid; // [rsp+40h] [rbp-130h]
  std::map<long unsigned int,std::map<data::FightPropType,float>>::mapped_type *cur_prop_map; // [rsp+48h] [rbp-128h]
  const google::protobuf::Map<unsigned int,float> *__for_range_0; // [rsp+50h] [rbp-120h]
  unsigned int key[2]; // [rsp+58h] [rbp-118h] BYREF
  google::protobuf::Map<long unsigned int,proto::TowerAvatarRecordBin>::const_iterator __for_begin; // [rsp+60h] [rbp-110h] BYREF
  google::protobuf::Map<long unsigned int,proto::TowerAvatarRecordBin>::const_iterator __for_end; // [rsp+80h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,float>::const_iterator __for_begin_0; // [rsp+A0h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,float>::const_iterator __for_end_0; // [rsp+C0h] [rbp-B0h] BYREF
  common::milog::MiLogStream v41; // [rsp+E0h] [rbp-90h] BYREF
  char v42[112]; // [rsp+100h] [rbp-70h] BYREF

  bina = bin;
  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 19 fight_prop_type:139";
  *(_QWORD *)(v2 + 16) = TowerCurLevelRecord::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::TowerCurLevelRecordBin::cur_floor_index(bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(this, bin, v5);
  }
  this->cur_floor_index = v5;
  v7 = proto::TowerCurLevelRecordBin::cur_level_index(bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = v8 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v8;
  if ( v9 )
    __asan_report_store4(&this->cur_level_index, bin, v9);
  this->cur_level_index = v7;
  v10 = proto::TowerCurLevelRecordBin::tower_team_list(bina);
  common::tools::MiscUtils::fromRepeated<TowerTeam,proto::TowerTeamBin,int (TowerTeam::*)(proto::TowerTeamBin const&)>(
    &this->tower_team_vec,
    v10,
    (int (*)(TowerTeam *, const proto::TowerTeamBin *))TowerTeam::fromBin);
  __for_range = proto::TowerCurLevelRecordBin::avatar_record_map(bina);
  google::protobuf::Map<unsigned long,proto::TowerAvatarRecordBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned long,proto::TowerAvatarRecordBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_guid = google::protobuf::Map<unsigned long,proto::TowerAvatarRecordBin>::const_iterator::operator*(&__for_begin);
    cur_prop_map = std::map<unsigned long,std::map<data::FightPropType,float>>::operator[](
                     &this->mirror_avatar_prop_map,
                     &p_guid->first);
    __for_range_0 = proto::TowerAvatarRecordBin::cur_fight_prop_map(&p_guid->second);
    google::protobuf::Map<unsigned int,float>::begin(&__for_begin_0, __for_range_0);
    google::protobuf::Map<unsigned int,float>::end(&__for_end_0, __for_range_0);
    while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v11 = google::protobuf::Map<unsigned int,float>::const_iterator::operator*(&__for_begin_0);
      google::protobuf::MapPair<unsigned int,float>::MapPair(
        (google::protobuf::MapPair<unsigned int,float> *const)key,
        v11);
      *(_DWORD *)(v2 + 32) = key[0];
      if ( !FightPropComp::isCurPropType(*(data::FightPropType *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "fromBin",
          142);
        v12 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v41,
                (const char (*)[33])"fight_prop_type is not cur prop:");
        common::milog::MiLogStream::operator<<<data::FightPropType,(data::FightPropType*)0>(
          v12,
          (const data::FightPropType *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v41);
      }
      else
      {
        v28 = key[1];
        v13 = (char *)(v2 + 32);
        v14 = std::map<data::FightPropType,float>::operator[](
                cur_prop_map,
                (const std::map<data::FightPropType,float>::key_type *)(v2 + 32));
        v15 = (unsigned int *)v14;
        v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
        {
          LOBYTE(v13) = v16 != 0;
          __asan_report_store4(v14, v13, (_BYTE)v14);
        }
        *v15 = v28;
      }
      google::protobuf::MapPair<unsigned int,float>::~MapPair((google::protobuf::MapPair<unsigned int,float> *const)key);
      google::protobuf::Map<unsigned int,float>::const_iterator::operator++(&__for_begin_0);
    }
    google::protobuf::Map<unsigned long,proto::TowerAvatarRecordBin>::const_iterator::operator++(&__for_begin);
  }
  __for_range_1 = proto::TowerCurLevelRecordBin::tower_buff_map(bina);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin_0,
    __for_range_1);
  google::protobuf::Map<unsigned int,unsigned int>::end(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end_0,
    __for_range_1);
  while ( 1 )
  {
    p_for_end_0 = &__for_end_0;
    if ( !google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin_0,
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end_0) )
      break;
    p_buff_uid = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin_0);
    p_second = &p_buff_uid->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = p_buff_uid->second;
    v20 = p_buff_uid;
    v21 = std::map<unsigned int,unsigned int>::operator[](
            &this->tower_buff_map,
            (const std::map<unsigned int,unsigned int>::key_type *)p_buff_uid);
    v22 = v21;
    v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
    if ( v23 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v23 )
    {
      LOBYTE(v20) = v23 != 0;
      __asan_report_store4(v21, v20, (_BYTE)v21);
    }
    *v22 = second;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++((google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin_0);
  }
  LOBYTE(v24) = proto::TowerCurLevelRecordBin::is_floor_finished(bina);
  v25 = v24;
  v26 = *(_BYTE *)(((unsigned __int64)&this->is_floor_finished >> 3) + 0x7FFF8000);
  if ( v26 < 0 )
  {
    LOBYTE(p_for_end_0) = v26 != 0;
    __asan_report_store1(&this->is_floor_finished, p_for_end_0, v25);
  }
  this->is_floor_finished = v25;
  result = 0;
  if ( v42 == (char *)v2 )
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

// Line 157: range 000000001436B2CE-000000001436B840
int32_t __cdecl TowerCurLevelRecord::toBin(const TowerCurLevelRecord *const this, proto::TowerCurLevelRecordBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::TowerTeamBin> *v2; // rax
  proto::TowerAvatarRecordBin *v3; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr *v4; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr *v5; // rdx
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *v6; // rax
  google::protobuf::Map<unsigned int,float>::key_type *p_key; // rsi
  float *v8; // rax
  _DWORD *v9; // rdx
  char v10; // cl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v12; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v13; // rsi
  unsigned int *v14; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v15; // rdx
  char v16; // cl
  int v18; // [rsp+Ch] [rbp-D4h]
  google::protobuf::Map<unsigned int,float>::key_type key; // [rsp+24h] [rbp-BCh] BYREF
  std::map<long unsigned int,std::map<data::FightPropType,float>>::const_iterator __for_begin; // [rsp+28h] [rbp-B8h] BYREF
  std::map<long unsigned int,std::map<data::FightPropType,float>>::const_iterator __for_end; // [rsp+30h] [rbp-B0h] BYREF
  std::map<data::FightPropType,float>::const_iterator __for_begin_0; // [rsp+38h] [rbp-A8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-A0h] BYREF
  google::protobuf::Map<long unsigned int,proto::TowerAvatarRecordBin> *proto_avatar_record_map; // [rsp+48h] [rbp-98h]
  const std::map<long unsigned int,std::map<data::FightPropType,float>> *__for_range; // [rsp+50h] [rbp-90h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_tower_buff_map; // [rsp+58h] [rbp-88h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+60h] [rbp-80h]
  const std::pair<unsigned int const,unsigned int> *v29; // [rsp+68h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *buff_uid; // [rsp+70h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+78h] [rbp-68h]
  const std::pair<long unsigned int const,std::map<data::FightPropType,float> > *v32; // [rsp+80h] [rbp-60h]
  std::tuple_element<0,const std::pair<long unsigned int const,std::map<data::FightPropType,float> > >::type *guid; // [rsp+88h] [rbp-58h]
  std::tuple_element<1,const std::pair<long unsigned int const,std::map<data::FightPropType,float> > >::type *cur_prop_map; // [rsp+90h] [rbp-50h]
  google::protobuf::Map<unsigned int,float> *proto_prop_map; // [rsp+98h] [rbp-48h]
  const std::map<data::FightPropType,float> *__for_range_0; // [rsp+A0h] [rbp-40h]
  std::tuple_element<0,const std::pair<const data::FightPropType,float> >::type *fight_prop_type; // [rsp+A8h] [rbp-38h]
  std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *prop_value; // [rsp+B0h] [rbp-30h]
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+B8h] [rbp-28h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerCurLevelRecordBin::set_cur_floor_index(bin, this->cur_floor_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_level_index);
  }
  proto::TowerCurLevelRecordBin::set_cur_level_index(bin, this->cur_level_index);
  v2 = proto::TowerCurLevelRecordBin::mutable_tower_team_list(bin);
  common::tools::MiscUtils::toRepeated<TowerTeam,proto::TowerTeamBin,int (TowerTeam::*)(proto::TowerTeamBin&)const>(
    &this->tower_team_vec,
    v2,
    (int (*)(const TowerTeam *, proto::TowerTeamBin *))TowerTeam::toBin);
  proto_avatar_record_map = proto::TowerCurLevelRecordBin::mutable_avatar_record_map(bin);
  __for_range = &this->mirror_avatar_prop_map;
  __for_begin._M_node = std::map<unsigned long,std::map<data::FightPropType,float>>::begin(&this->mirror_avatar_prop_map)._M_node;
  __for_end._M_node = std::map<unsigned long,std::map<data::FightPropType,float>>::end(&this->mirror_avatar_prop_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v32 = std::_Rb_tree_const_iterator<std::pair<unsigned long const,std::map<data::FightPropType,float>>>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned long const,std::map<data::FightPropType,float>>(v32);
    cur_prop_map = (std::tuple_element<1,const std::pair<long unsigned int const,std::map<data::FightPropType,float> > >::type *)std::get<1ul,unsigned long const,std::map<data::FightPropType,float>>(v32);
    v3 = google::protobuf::Map<unsigned long,proto::TowerAvatarRecordBin>::operator[](proto_avatar_record_map, guid);
    proto_prop_map = proto::TowerAvatarRecordBin::mutable_cur_fight_prop_map(v3);
    __for_range_0 = cur_prop_map;
    __for_begin_0._M_node = std::map<data::FightPropType,float>::begin(cur_prop_map)._M_node;
    __for_begin_1._M_node = std::map<data::FightPropType,float>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              &__for_begin_0,
              (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__for_begin_1) )
    {
      v4 = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr *)std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator*(&__for_begin_0);
      v5 = v4;
      if ( ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)v4 + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v4 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)v4 + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4, 8LL);
      }
      __for_end_0._M_node = *v5;
      fight_prop_type = std::get<0ul,data::FightPropType const,float>((const std::pair<const data::FightPropType,float> *)&__for_end_0);
      v6 = (std::tuple_element<1,const std::pair<const data::FightPropType,float> >::type *)std::get<1ul,data::FightPropType const,float>((const std::pair<const data::FightPropType,float> *)&__for_end_0);
      prop_value = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      v18 = *(_DWORD *)prop_value;
      if ( *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fight_prop_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fight_prop_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(fight_prop_type);
      }
      key = *fight_prop_type;
      p_key = &key;
      v8 = google::protobuf::Map<unsigned int,float>::operator[](proto_prop_map, &key);
      v9 = v8;
      v10 = *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000);
      if ( v10 != 0 && (char)(((unsigned __int8)v8 & 7) + 3) >= v10 )
      {
        LOBYTE(p_key) = v10 != 0;
        __asan_report_store4(v8, p_key, (_BYTE)v8);
      }
      *v9 = v18;
      std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned long const,std::map<data::FightPropType,float>>>::operator++(&__for_begin);
  }
  proto_tower_buff_map = proto::TowerCurLevelRecordBin::mutable_tower_buff_map(bin);
  __for_range_1 = &this->tower_buff_map;
  __for_begin_1._M_node = std::map<unsigned int,unsigned int>::begin(&this->tower_buff_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin_1, &__for_end_0) )
  {
    v29 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_1);
    buff_uid = std::get<0ul,unsigned int const,unsigned int>(v29);
    v11 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v29);
    buff_id = v11;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v11);
    }
    v12 = *buff_id;
    v13 = buff_uid;
    v14 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_tower_buff_map, buff_uid);
    v15 = v14;
    v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
    if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(v14, v13, (_BYTE)v14);
    }
    *v15 = v12;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_1);
  }
  if ( *(char *)(((unsigned __int64)&this->is_floor_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_floor_finished);
  proto::TowerCurLevelRecordBin::set_is_floor_finished(bin, this->is_floor_finished);
  return 0;
};

// Line 181: range 000000001436B842-000000001436BD1C
__int64 __fastcall TowerCurLevelRecord::toClient(
        const TowerCurLevelRecord *const this,
        uint32_t tower_schedule_id,
        proto::TowerCurLevelRecord *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __int64 result; // rax
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  google::protobuf::RepeatedPtrField<proto::TowerTeam> *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rax
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+38h] [rbp-C8h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-C0h]
  const std::pair<unsigned int const,unsigned int> *v18; // [rsp+48h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+50h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+70h] [rbp-90h] BYREF
  char v23[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 21 tower_schedule_id:180";
  *(_QWORD *)(v3 + 16) = TowerCurLevelRecord::toClient;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = tower_schedule_id;
  if ( TowerCurLevelRecord::isEmpty(this) )
  {
    proto::TowerCurLevelRecord::set_is_empty(proto, 1);
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(
                         p_tower_config_mgr,
                         *(_DWORD *)(v3 + 32),
                         this->cur_floor_index);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( floor_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&floor_config_ptr->floor_id);
      }
      proto::TowerCurLevelRecord::set_cur_floor_id(proto, floor_config_ptr->floor_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_level_index);
      }
      proto::TowerCurLevelRecord::set_cur_level_index(proto, this->cur_level_index);
      v11 = proto::TowerCurLevelRecord::mutable_tower_team_list(proto);
      common::tools::MiscUtils::toRepeated<TowerTeam,proto::TowerTeam,int (TowerTeam::*)(proto::TowerTeam&)const>(
        &this->tower_team_vec,
        v11,
        (int (*)(const TowerTeam *, proto::TowerTeam *))TowerTeam::toClient);
      __for_range = &this->tower_buff_map;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->tower_buff_map)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->tower_buff_map)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        _ = std::get<0ul,unsigned int const,unsigned int>(v18);
        v12 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v18);
        buff_id = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        proto::TowerCurLevelRecord::add_buff_id_list(proto, *buff_id);
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_tower_team_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_tower_team_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_tower_team_id);
      }
      proto::TowerCurLevelRecord::set_is_upper_part(proto, this->cur_tower_team_id <= 1);
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "toClient",
        190);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v22,
             (const char (*)[46])"findTowerFloorConfig fail, tower_schedule_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v9, (const char (*)[14])" floor_index:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->cur_floor_index);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v23 == (char *)v3 )
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

// Line 205: range 000000001436BD1E-000000001436BD65
bool __cdecl TowerCurLevelRecord::isEmpty(const TowerCurLevelRecord *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  return this->cur_floor_index == 0;
};

// Line 210: range 000000001436BD66-000000001436BF56
void __cdecl TowerCurLevelRecord::reset(TowerCurLevelRecord *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl
  __int64 v4; // rsi
  bool v5; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->cur_floor_index = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_index >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->cur_level_index, v2, v3);
  this->cur_level_index = 0;
  std::vector<TowerTeam>::clear(&this->tower_team_vec);
  std::map<unsigned long,std::map<data::FightPropType,float>>::clear(&this->mirror_avatar_prop_map);
  std::map<unsigned int,unsigned int>::clear(&this->tower_buff_map);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tower_buff_uid, v2, (_BYTE)this - 120);
  }
  this->cur_tower_buff_uid = 0;
  v4 = (((_BYTE)this - 124) & 7u) + 3;
  v5 = *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_tower_buff_id >> 3) + 0x7FFF8000);
  if ( v5 )
    __asan_report_store4(&this->cur_tower_buff_id, v4, v5);
  this->cur_tower_buff_id = 0;
  std::string::clear(&this->cur_tower_level_transaction);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_tower_team_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_tower_team_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_tower_team_id, v4, (_BYTE)this - 80);
  }
  this->cur_tower_team_id = 1;
  if ( *(char *)(((unsigned __int64)&this->is_floor_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_floor_finished, v4, &this->is_floor_finished);
  this->is_floor_finished = 0;
  std::unordered_set<unsigned int>::clear(&this->failed_cond_set);
};

// Line 225: range 000000001436BF58-000000001436C551
int32_t __cdecl TowerFightStatistic::fromBin(
        TowerFightStatistic *const this,
        const proto::TowerFightStatisticBin *statistic_bin)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  const unsigned int *v4; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v5; // rax
  unsigned int *v6; // rdx
  char v7; // cl
  unsigned __int64 v8; // rax
  unsigned int v9; // ebx
  const unsigned int *v10; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  unsigned int *v12; // rdx
  char v13; // cl
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  const unsigned int *v16; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  unsigned int *v18; // rdx
  char v19; // cl
  unsigned __int64 v20; // rax
  unsigned int v21; // ebx
  const unsigned int *v22; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  unsigned int *v24; // rdx
  char v25; // cl
  unsigned __int64 v26; // rax
  unsigned int v27; // ebx
  const unsigned int *v28; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v29; // rax
  unsigned int *v30; // rdx
  char v31; // cl
  unsigned int __x; // [rsp+10h] [rbp-B0h] BYREF
  unsigned int __y; // [rsp+14h] [rbp-ACh] BYREF
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+18h] [rbp-A8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+20h] [rbp-A0h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+28h] [rbp-98h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_2; // [rsp+30h] [rbp-90h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_3; // [rsp+38h] [rbp-88h]
  const unsigned int *p_avatar_id_3; // [rsp+40h] [rbp-80h]
  const unsigned int *p_avatar_id_2; // [rsp+48h] [rbp-78h]
  const unsigned int *p_avatar_id_1; // [rsp+50h] [rbp-70h]
  const unsigned int *p_avatar_id_0; // [rsp+58h] [rbp-68h]
  const unsigned int *p_avatar_id; // [rsp+60h] [rbp-60h]
  std::pair<unsigned int,unsigned int> __p; // [rsp+68h] [rbp-58h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+70h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+90h] [rbp-30h] BYREF

  __for_range = proto::TowerFightStatisticBin::avatar_reveal_count_map(statistic_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_avatar_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v2 = (unsigned __int64)(p_avatar_id + 1);
    if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) != 0 && (char)((v2 & 7) + 3) >= *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v2);
    v3 = p_avatar_id[1];
    v4 = p_avatar_id;
    v5 = std::map<unsigned int,unsigned int>::operator[](&this->avatar_reveal_count_map, p_avatar_id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, (_BYTE)v5);
    }
    *v6 = v3;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::TowerFightStatisticBin::kill_count_map(statistic_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_avatar_id_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v8 = (unsigned __int64)(p_avatar_id_0 + 1);
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) != 0 && (char)((v8 & 7) + 3) >= *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v8);
    v9 = p_avatar_id_0[1];
    v10 = p_avatar_id_0;
    v11 = std::map<unsigned int,unsigned int>::operator[](&this->kill_count_map, p_avatar_id_0);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10, (_BYTE)v11);
    }
    *v12 = v9;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __y = proto::TowerFightStatisticBin::max_single_damage_value(statistic_bin);
  __x = proto::TowerFightStatisticBin::max_single_damage_avatar_id(statistic_bin);
  __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=(&this->max_single_damage_pair, &__p);
  __for_range_1 = proto::TowerFightStatisticBin::take_damage_count_map(statistic_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_1);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_1);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_avatar_id_1 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v14 = (unsigned __int64)(p_avatar_id_1 + 1);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)((v14 & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v14);
    v15 = p_avatar_id_1[1];
    v16 = p_avatar_id_1;
    v17 = std::map<unsigned int,unsigned int>::operator[](&this->take_damage_count_map, p_avatar_id_1);
    v18 = v17;
    v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
    {
      LOBYTE(v16) = v19 != 0;
      __asan_report_store4(v17, v16, (_BYTE)v17);
    }
    *v18 = v15;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __for_range_2 = proto::TowerFightStatisticBin::normal_skill_count_map(statistic_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_2);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_2);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_avatar_id_2 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v20 = (unsigned __int64)(p_avatar_id_2 + 1);
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) != 0 && (char)((v20 & 7) + 3) >= *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v20);
    v21 = p_avatar_id_2[1];
    v22 = p_avatar_id_2;
    v23 = std::map<unsigned int,unsigned int>::operator[](&this->normal_skill_count_map, p_avatar_id_2);
    v24 = v23;
    v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
    {
      LOBYTE(v22) = v25 != 0;
      __asan_report_store4(v23, v22, (_BYTE)v23);
    }
    *v24 = v21;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  __for_range_3 = proto::TowerFightStatisticBin::energy_skill_count_map(statistic_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range_3);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range_3);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_avatar_id_3 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v26 = (unsigned __int64)(p_avatar_id_3 + 1);
    if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) != 0 && (char)((v26 & 7) + 3) >= *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v26);
    v27 = p_avatar_id_3[1];
    v28 = p_avatar_id_3;
    v29 = std::map<unsigned int,unsigned int>::operator[](&this->energy_skill_count_map, p_avatar_id_3);
    v30 = v29;
    v31 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
    if ( v31 != 0 && (char)(((unsigned __int8)v29 & 7) + 3) >= v31 )
    {
      LOBYTE(v28) = v31 != 0;
      __asan_report_store4(v29, v28, (_BYTE)v29);
    }
    *v30 = v27;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 252: range 000000001436C552-000000001436CCA4
int32_t __cdecl TowerFightStatistic::toBin(
        TowerFightStatistic *const this,
        proto::TowerFightStatisticBin *statistic_bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v8; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v9; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v10; // rsi
  unsigned int *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rdx
  char v13; // cl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v14; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v15; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v16; // rsi
  unsigned int *v17; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v18; // rdx
  char v19; // cl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v20; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v21; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v22; // rsi
  unsigned int *v23; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v24; // rdx
  char v25; // cl
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v26; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v27; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v28; // rsi
  unsigned int *v29; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v30; // rdx
  char v31; // cl
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *bin_avatar_reveal_count_map; // [rsp+28h] [rbp-D8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_kill_count_map; // [rsp+38h] [rbp-C8h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-C0h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_take_damage_count_map; // [rsp+48h] [rbp-B8h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-B0h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_normal_skill_count_map; // [rsp+58h] [rbp-A8h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+60h] [rbp-A0h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_energy_skill_count_map; // [rsp+68h] [rbp-98h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+70h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *v46; // [rsp+78h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id_3; // [rsp+80h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *data_3; // [rsp+88h] [rbp-78h]
  const std::pair<unsigned int const,unsigned int> *v49; // [rsp+90h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id_2; // [rsp+98h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *data_2; // [rsp+A0h] [rbp-60h]
  const std::pair<unsigned int const,unsigned int> *v52; // [rsp+A8h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id_1; // [rsp+B0h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *data_1; // [rsp+B8h] [rbp-48h]
  const std::pair<unsigned int const,unsigned int> *v55; // [rsp+C0h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id_0; // [rsp+C8h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *data_0; // [rsp+D0h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v58; // [rsp+D8h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id; // [rsp+E0h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *data; // [rsp+E8h] [rbp-18h]

  bin_avatar_reveal_count_map = proto::TowerFightStatisticBin::mutable_avatar_reveal_count_map(statistic_bin);
  __for_range = &this->avatar_reveal_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->avatar_reveal_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->avatar_reveal_count_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v58 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    avatar_id = std::get<0ul,unsigned int const,unsigned int>(v58);
    v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v58);
    data = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    v3 = *data;
    v4 = avatar_id;
    v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_avatar_reveal_count_map, avatar_id);
    v6 = v5;
    v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
    if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(v5, v4, (_BYTE)v5);
    }
    *v6 = v3;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  bin_kill_count_map = proto::TowerFightStatisticBin::mutable_kill_count_map(statistic_bin);
  __for_range_0 = &this->kill_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->kill_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v55 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    avatar_id_0 = std::get<0ul,unsigned int const,unsigned int>(v55);
    v8 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v55);
    data_0 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    v9 = *data_0;
    v10 = avatar_id_0;
    v11 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_kill_count_map, avatar_id_0);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10, (_BYTE)v11);
    }
    *v12 = v9;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->max_single_damage_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_single_damage_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_single_damage_pair);
  }
  proto::TowerFightStatisticBin::set_max_single_damage_avatar_id(statistic_bin, this->max_single_damage_pair.first);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_single_damage_pair.second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_single_damage_pair.second >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_single_damage_pair.second);
  }
  proto::TowerFightStatisticBin::set_max_single_damage_value(statistic_bin, this->max_single_damage_pair.second);
  bin_take_damage_count_map = proto::TowerFightStatisticBin::mutable_take_damage_count_map(statistic_bin);
  __for_range_1 = &this->take_damage_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->take_damage_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v52 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    avatar_id_1 = std::get<0ul,unsigned int const,unsigned int>(v52);
    v14 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v52);
    data_1 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v14);
    }
    v15 = *data_1;
    v16 = avatar_id_1;
    v17 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_take_damage_count_map, avatar_id_1);
    v18 = v17;
    v19 = *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000);
    if ( v19 != 0 && (char)(((unsigned __int8)v17 & 7) + 3) >= v19 )
    {
      LOBYTE(v16) = v19 != 0;
      __asan_report_store4(v17, v16, (_BYTE)v17);
    }
    *v18 = v15;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  bin_normal_skill_count_map = proto::TowerFightStatisticBin::mutable_normal_skill_count_map(statistic_bin);
  __for_range_2 = &this->normal_skill_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->normal_skill_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v49 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    avatar_id_2 = std::get<0ul,unsigned int const,unsigned int>(v49);
    v20 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v49);
    data_2 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    v21 = *data_2;
    v22 = avatar_id_2;
    v23 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_normal_skill_count_map, avatar_id_2);
    v24 = v23;
    v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
    if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
    {
      LOBYTE(v22) = v25 != 0;
      __asan_report_store4(v23, v22, (_BYTE)v23);
    }
    *v24 = v21;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  bin_energy_skill_count_map = proto::TowerFightStatisticBin::mutable_energy_skill_count_map(statistic_bin);
  __for_range_3 = &this->energy_skill_count_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->energy_skill_count_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v46 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    avatar_id_3 = std::get<0ul,unsigned int const,unsigned int>(v46);
    v26 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v46);
    data_3 = v26;
    if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v26);
    }
    v27 = *data_3;
    v28 = avatar_id_3;
    v29 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_energy_skill_count_map, avatar_id_3);
    v30 = v29;
    v31 = *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000);
    if ( v31 != 0 && (char)(((unsigned __int8)v29 & 7) + 3) >= v31 )
    {
      LOBYTE(v28) = v31 != 0;
      __asan_report_store4(v29, v28, (_BYTE)v29);
    }
    *v30 = v27;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 284: range 000000001436CCA6-000000001436CD40
void __cdecl TowerFightStatistic::clear(TowerFightStatistic *const this)
{
  int __x; // [rsp+10h] [rbp-10h] BYREF
  int __y; // [rsp+14h] [rbp-Ch] BYREF
  std::pair<int,int> __p; // [rsp+18h] [rbp-8h] BYREF

  std::map<unsigned int,unsigned int>::clear(&this->avatar_reveal_count_map);
  std::map<unsigned int,unsigned int>::clear(&this->kill_count_map);
  __y = 0;
  __x = 0;
  __p = std::make_pair<int,int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=<int,int>(&this->max_single_damage_pair, &__p);
  std::map<unsigned int,unsigned int>::clear(&this->take_damage_count_map);
  std::map<unsigned int,unsigned int>::clear(&this->normal_skill_count_map);
  std::map<unsigned int,unsigned int>::clear(&this->energy_skill_count_map);
};

// Line 294: range 000000001436CD42-000000001436CFD7
int32_t __cdecl TowerMonthlyCombatRecord::fromBin(
        TowerMonthlyCombatRecord *const this,
        const proto::TowerMonthlyCombatSummaryBin *combat_summary)
{
  std::pair<unsigned int,unsigned int> *v2; // rdx
  const proto::TowerFightSummaryPair *v3; // rax
  const proto::TowerFightSummaryPair *v4; // rax
  const proto::TowerFightSummaryPair *v5; // rax
  const proto::TowerFightSummaryPair *v6; // rax
  const proto::TowerFightSummaryPair *v7; // rax
  const proto::TowerFightSummaryPair *v8; // rax
  const proto::TowerFightSummaryPair *v9; // rax
  const proto::TowerFightSummaryPair *v10; // rax
  const proto::TowerFightSummaryPair *v11; // rax
  const proto::TowerFightSummaryPair *v12; // rax
  unsigned int __x; // [rsp+10h] [rbp-40h] BYREF
  unsigned int __y; // [rsp+14h] [rbp-3Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::TowerFightSummaryPair>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  google::protobuf::RepeatedPtrField<proto::TowerFightSummaryPair>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const google::protobuf::RepeatedPtrField<proto::TowerFightSummaryPair> *__for_range; // [rsp+28h] [rbp-28h]
  const proto::TowerFightSummaryPair *summary_pair; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int,unsigned int> __p; // [rsp+38h] [rbp-18h] BYREF

  __for_range = proto::TowerMonthlyCombatSummaryBin::most_reveal_avatar_list(combat_summary);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TowerFightSummaryPair>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TowerFightSummaryPair>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TowerFightSummaryPair const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    summary_pair = google::protobuf::internal::RepeatedPtrIterator<proto::TowerFightSummaryPair const>::operator*(&__for_begin);
    __y = proto::TowerFightSummaryPair::data(summary_pair);
    __x = proto::TowerFightSummaryPair::avatar_id(summary_pair);
    __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
    std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
      &this->most_reveal_avatar_vec,
      &__p,
      v2);
    google::protobuf::internal::RepeatedPtrIterator<proto::TowerFightSummaryPair const>::operator++(&__for_begin);
  }
  v3 = proto::TowerMonthlyCombatSummaryBin::most_kill_avatar_pair(combat_summary);
  __y = proto::TowerFightSummaryPair::data(v3);
  v4 = proto::TowerMonthlyCombatSummaryBin::most_kill_avatar_pair(combat_summary);
  __x = proto::TowerFightSummaryPair::avatar_id(v4);
  __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=(&this->most_kill_avatar_pair, &__p);
  v5 = proto::TowerMonthlyCombatSummaryBin::highest_dps_avatr_pair(combat_summary);
  __y = proto::TowerFightSummaryPair::data(v5);
  v6 = proto::TowerMonthlyCombatSummaryBin::highest_dps_avatr_pair(combat_summary);
  __x = proto::TowerFightSummaryPair::avatar_id(v6);
  __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=(&this->highest_dps_avatr_pair, &__p);
  v7 = proto::TowerMonthlyCombatSummaryBin::most_take_damage_avatar_pair(combat_summary);
  __y = proto::TowerFightSummaryPair::data(v7);
  v8 = proto::TowerMonthlyCombatSummaryBin::most_take_damage_avatar_pair(combat_summary);
  __x = proto::TowerFightSummaryPair::avatar_id(v8);
  __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=(&this->most_take_damage_avatar_pair, &__p);
  v9 = proto::TowerMonthlyCombatSummaryBin::most_cast_normal_skill_avatar_pair(combat_summary);
  __y = proto::TowerFightSummaryPair::data(v9);
  v10 = proto::TowerMonthlyCombatSummaryBin::most_cast_normal_skill_avatar_pair(combat_summary);
  __x = proto::TowerFightSummaryPair::avatar_id(v10);
  __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=(&this->most_cast_normal_skill_avatar_pair, &__p);
  v11 = proto::TowerMonthlyCombatSummaryBin::most_cast_energy_skill_avatar_pair(combat_summary);
  __y = proto::TowerFightSummaryPair::data(v11);
  v12 = proto::TowerMonthlyCombatSummaryBin::most_cast_energy_skill_avatar_pair(combat_summary);
  __x = proto::TowerFightSummaryPair::avatar_id(v12);
  __p = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
  std::pair<unsigned int,unsigned int>::operator=(&this->most_cast_energy_skill_avatar_pair, &__p);
  return 0;
};

// Line 310: range 000000001436D08A-000000001436D37A
int32_t __cdecl TowerMonthlyCombatRecord::toBin(
        TowerMonthlyCombatRecord *const this,
        proto::TowerMonthlyCombatSummaryBin *combat_summary)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  proto::TowerFightSummaryPair *v5; // rax
  proto::TowerFightSummaryPair *v6; // rax
  proto::TowerFightSummaryPair *v7; // rax
  proto::TowerFightSummaryPair *v8; // rax
  proto::TowerFightSummaryPair *v9; // rax
  int32_t result; // eax
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-88h]
  std::pair<unsigned int,unsigned int> *__in; // [rsp+30h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *avatar_id; // [rsp+38h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *count; // [rsp+40h] [rbp-70h]
  proto::TowerFightSummaryPair *summary_pair; // [rsp+48h] [rbp-68h]
  char v18[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 13 proc_func:318";
  *(_QWORD *)(v2 + 16) = TowerMonthlyCombatRecord::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  __for_range = &this->most_reveal_avatar_vec;
  __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(&this->most_reveal_avatar_vec)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(&this->most_reveal_avatar_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    __in = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
    avatar_id = std::get<0ul,unsigned int,unsigned int>(__in);
    count = std::get<1ul,unsigned int,unsigned int>(__in);
    summary_pair = proto::TowerMonthlyCombatSummaryBin::add_most_reveal_avatar_list(combat_summary);
    if ( *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)avatar_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)avatar_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(avatar_id);
    }
    proto::TowerFightSummaryPair::set_avatar_id(summary_pair, *avatar_id);
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(count);
    }
    proto::TowerFightSummaryPair::set_data(summary_pair, *count);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  v5 = proto::TowerMonthlyCombatSummaryBin::mutable_most_kill_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toBin(proto::TowerMonthlyCombatSummaryBin &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightSummaryPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toBin::<lambda(const AvatarFightDataPair&, proto::TowerFightSummaryPair&)> *const)(v2 + 32),
    &this->most_kill_avatar_pair,
    v5);
  v6 = proto::TowerMonthlyCombatSummaryBin::mutable_highest_dps_avatr_pair(combat_summary);
  TowerMonthlyCombatRecord::toBin(proto::TowerMonthlyCombatSummaryBin &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightSummaryPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toBin::<lambda(const AvatarFightDataPair&, proto::TowerFightSummaryPair&)> *const)(v2 + 32),
    &this->highest_dps_avatr_pair,
    v6);
  v7 = proto::TowerMonthlyCombatSummaryBin::mutable_most_take_damage_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toBin(proto::TowerMonthlyCombatSummaryBin &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightSummaryPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toBin::<lambda(const AvatarFightDataPair&, proto::TowerFightSummaryPair&)> *const)(v2 + 32),
    &this->most_take_damage_avatar_pair,
    v7);
  v8 = proto::TowerMonthlyCombatSummaryBin::mutable_most_cast_normal_skill_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toBin(proto::TowerMonthlyCombatSummaryBin &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightSummaryPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toBin::<lambda(const AvatarFightDataPair&, proto::TowerFightSummaryPair&)> *const)(v2 + 32),
    &this->most_cast_normal_skill_avatar_pair,
    v8);
  v9 = proto::TowerMonthlyCombatSummaryBin::mutable_most_cast_energy_skill_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toBin(proto::TowerMonthlyCombatSummaryBin &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightSummaryPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toBin::<lambda(const AvatarFightDataPair&, proto::TowerFightSummaryPair&)> *const)(v2 + 32),
    &this->most_cast_energy_skill_avatar_pair,
    v9);
  result = 0;
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

// Line 318: range 000000001436CFD8-000000001436D089
void __cdecl TowerMonthlyCombatRecord::toBin(proto::TowerMonthlyCombatSummaryBin &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightSummaryPair &)#1}::operator()(
        const TowerMonthlyCombatRecord::toBin::<lambda(const AvatarFightDataPair&, proto::TowerFightSummaryPair&)> *const __closure,
        const AvatarFightDataPair *summary_pair,
        proto::TowerFightSummaryPair *bin_pair)
{
  if ( *(_BYTE *)(((unsigned __int64)summary_pair >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)summary_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)summary_pair >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(summary_pair);
  }
  proto::TowerFightSummaryPair::set_avatar_id(bin_pair, summary_pair->first);
  if ( *(_BYTE *)(((unsigned __int64)&summary_pair->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)summary_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&summary_pair->second >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&summary_pair->second);
  }
  proto::TowerFightSummaryPair::set_data(bin_pair, summary_pair->second);
};

// Line 334: range 000000001436D37C-000000001436D9A4
void __cdecl TowerMonthlyCombatRecord::updateAllData(
        TowerMonthlyCombatRecord *const this,
        const TowerFightStatistic *tower_fight_statistic)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr M_node; // r14
  std::map<unsigned int,unsigned int>::const_iterator v6; // rax
  std::pair<unsigned int,unsigned int> *M_current; // r14
  std::vector<std::pair<unsigned int,unsigned int>>::iterator v8; // rax
  TowerMonthlyCombatRecord::updateAllData::<lambda(auto:23&, auto:24&)> v9; // dl
  int32_t *v10; // rax
  int32_t *v11; // rdx
  std::pair<unsigned int,unsigned int> *v12; // r14
  std::vector<std::pair<unsigned int,unsigned int>>::iterator v13; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr v14; // r14
  std::map<unsigned int,unsigned int>::const_iterator v15; // rax
  TowerMonthlyCombatRecord::updateAllData::<lambda(auto:25&, auto:26&)> v16; // dl
  unsigned int *p_second; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v18; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr v19; // r14
  std::map<unsigned int,unsigned int>::const_iterator v20; // rax
  TowerMonthlyCombatRecord::updateAllData::<lambda(auto:25&, auto:26&)> v21; // dl
  unsigned int *v22; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v23; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr v24; // r14
  std::map<unsigned int,unsigned int>::const_iterator v25; // rax
  TowerMonthlyCombatRecord::updateAllData::<lambda(auto:25&, auto:26&)> v26; // dl
  unsigned int *v27; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v28; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr v29; // r14
  std::map<unsigned int,unsigned int>::const_iterator v30; // rax
  TowerMonthlyCombatRecord::updateAllData::<lambda(auto:25&, auto:26&)> v31; // dl
  unsigned int *v32; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v33; // rax
  int __a; // [rsp+14h] [rbp-15Ch] BYREF
  int __b; // [rsp+18h] [rbp-158h] BYREF
  int32_t avtar_reveal_vec_size; // [rsp+1Ch] [rbp-154h]
  std::pair<unsigned int,unsigned int> __p; // [rsp+20h] [rbp-150h] BYREF
  std::pair<unsigned int,unsigned int> v38; // [rsp+28h] [rbp-148h] BYREF
  std::pair<unsigned int,unsigned int> v39; // [rsp+30h] [rbp-140h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+38h] [rbp-138h] BYREF
  char v41[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 13 pair_comp:345 64 8 18 most_kill_iter:347 96 8 25 most_take_damage_iter:353 128 8 31 mo"
                        "st_cast_normal_skill_iter:359 160 8 31 most_cast_energy_skill_iter:365 192 24 27 whole_avatar_reveal_vec:336";
  *(_QWORD *)(v2 + 16) = TowerMonthlyCombatRecord::updateAllData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::vector<std::pair<unsigned int,unsigned int>>::clear(&this->most_reveal_avatar_vec);
  std::allocator<std::pair<unsigned int,unsigned int>>::allocator((std::allocator<std::pair<unsigned int,unsigned int> > *const)(v2 + 48));
  M_node = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->avatar_reveal_count_map)._M_node;
  v6._M_node = std::map<unsigned int,unsigned int>::begin(&tower_fight_statistic->avatar_reveal_count_map)._M_node;
  std::vector<std::pair<unsigned int,unsigned int>>::vector<std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>,void>(
    (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 192),
    v6,
    (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)M_node,
    (const std::vector<std::pair<unsigned int,unsigned int>>::allocator_type *)(v2 + 48));
  std::allocator<std::pair<unsigned int,unsigned int>>::~allocator((std::allocator<std::pair<unsigned int,unsigned int> > *const)(v2 + 48));
  M_current = std::vector<std::pair<unsigned int,unsigned int>>::end((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 192))._M_current;
  v8._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 192))._M_current;
  std::sort___gnu_cxx::__normal_iterator_std::pair_unsigned_int_unsigned_int___std::vector_std::pair_unsigned_int_unsigned_int______TowerMonthlyCombatRecord::updateAllData_const_TowerFightStatistic__::_lambda_auto_23__auto_24_____(
    v8,
    (__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)M_current,
    v9);
  __b = 4;
  __a = std::vector<std::pair<unsigned int,unsigned int>>::size((const std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 192));
  v10 = (int32_t *)std::min<int>(&__a, &__b);
  v11 = v10;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v10);
  }
  avtar_reveal_vec_size = *v11;
  std::vector<std::pair<unsigned int,unsigned int>>::resize(&this->most_reveal_avatar_vec, avtar_reveal_vec_size);
  v12 = std::vector<std::pair<unsigned int,unsigned int>>::begin(&this->most_reveal_avatar_vec)._M_current;
  v13._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 192))._M_current;
  std::copy_n<__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>,int,__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>>(
    v13,
    avtar_reveal_vec_size,
    (__gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >)v12);
  std::pair<unsigned int,unsigned int>::operator=(
    &this->highest_dps_avatr_pair,
    &tower_fight_statistic->max_single_damage_pair);
  v14 = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->kill_count_map)._M_node;
  v15._M_node = std::map<unsigned int,unsigned int>::begin(&tower_fight_statistic->kill_count_map)._M_node;
  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 64) = std::max_element_std::_Rb_tree_const_iterator_std::pair_unsigned_int_const_unsigned_int____TowerMonthlyCombatRecord::updateAllData_const_TowerFightStatistic__::_lambda_auto_25__auto_26_____(
                                                                                              v15,
                                                                                              (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)v14,
                                                                                              v16);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->kill_count_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64))->second;
    v18 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    __p = std::make_pair<unsigned int const&,unsigned int const&>((const unsigned int *)v18, p_second);
    std::pair<unsigned int,unsigned int>::operator=(&this->most_kill_avatar_pair, &__p);
  }
  v19 = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->take_damage_count_map)._M_node;
  v20._M_node = std::map<unsigned int,unsigned int>::begin(&tower_fight_statistic->take_damage_count_map)._M_node;
  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 96) = std::max_element_std::_Rb_tree_const_iterator_std::pair_unsigned_int_const_unsigned_int____TowerMonthlyCombatRecord::updateAllData_const_TowerFightStatistic__::_lambda_auto_25__auto_26_____(
                                                                                              v20,
                                                                                              (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)v19,
                                                                                              v21);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->take_damage_count_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
         &__y) )
  {
    v22 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96))->second;
    v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
    v38 = std::make_pair<unsigned int const&,unsigned int const&>((const unsigned int *)v23, v22);
    std::pair<unsigned int,unsigned int>::operator=(&this->most_take_damage_avatar_pair, &v38);
  }
  v24 = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->normal_skill_count_map)._M_node;
  v25._M_node = std::map<unsigned int,unsigned int>::begin(&tower_fight_statistic->normal_skill_count_map)._M_node;
  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 128) = std::max_element_std::_Rb_tree_const_iterator_std::pair_unsigned_int_const_unsigned_int____TowerMonthlyCombatRecord::updateAllData_const_TowerFightStatistic__::_lambda_auto_25__auto_26_____(
                                                                                               v25,
                                                                                               (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)v24,
                                                                                               v26);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->normal_skill_count_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128),
         &__y) )
  {
    v27 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 128))->second;
    v28 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 128));
    v39 = std::make_pair<unsigned int const&,unsigned int const&>((const unsigned int *)v28, v27);
    std::pair<unsigned int,unsigned int>::operator=(&this->most_cast_normal_skill_avatar_pair, &v39);
  }
  v29 = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->energy_skill_count_map)._M_node;
  v30._M_node = std::map<unsigned int,unsigned int>::begin(&tower_fight_statistic->energy_skill_count_map)._M_node;
  *(std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *)(v2 + 160) = std::max_element_std::_Rb_tree_const_iterator_std::pair_unsigned_int_const_unsigned_int____TowerMonthlyCombatRecord::updateAllData_const_TowerFightStatistic__::_lambda_auto_25__auto_26_____(
                                                                                               v30,
                                                                                               (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >)v29,
                                                                                               v31);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&tower_fight_statistic->energy_skill_count_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 160),
         &__y) )
  {
    v32 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 160))->second;
    v33 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 160));
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::make_pair<unsigned int const&,unsigned int const&>((const unsigned int *)v33, v32);
    std::pair<unsigned int,unsigned int>::operator=(
      &this->most_cast_energy_skill_avatar_pair,
      (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__y);
  }
  std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 192));
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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
};

// Line 337: range 00000000143EEDA8-00000000143EEE47
bool __cdecl TowerMonthlyCombatRecord::updateAllData::_lambda_auto_23___auto_24___::operator()_std::pair_unsigned_int_unsigned_int__std::pair_unsigned_int_unsigned_int___(
        const TowerMonthlyCombatRecord::updateAllData::<lambda(auto:23&, auto:24&)> *const __closure,
        std::pair<unsigned int,unsigned int> *p1,
        std::pair<unsigned int,unsigned int> *p2)
{
  unsigned int second; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&p1->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p1->second);
  }
  second = p1->second;
  if ( *(_BYTE *)(((unsigned __int64)&p2->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p2->second);
  }
  return second > p2->second;
};

// Line 345: range 00000000143EBDA2-00000000143EBE41
bool __cdecl TowerMonthlyCombatRecord::updateAllData::_lambda_auto_25___auto_26___::operator()_const_std::pair_unsigned_int_const_unsigned_int__const_std::pair_unsigned_int_const_unsigned_int___(
        const TowerMonthlyCombatRecord::updateAllData::<lambda(auto:25&, auto:26&)> *const __closure,
        const std::pair<unsigned int const,unsigned int> *p1,
        const std::pair<unsigned int const,unsigned int> *p2)
{
  unsigned int second; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&p1->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p1 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p1->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p1->second);
  }
  second = p1->second;
  if ( *(_BYTE *)(((unsigned __int64)&p2->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)p2 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p2->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&p2->second);
  }
  return second < p2->second;
};

// Line 373: range 000000001436DA58-000000001436DC79
void __cdecl TowerMonthlyCombatRecord::toClient(
        TowerMonthlyCombatRecord *const this,
        proto::TowerMonthlyCombatRecord *combat_summary)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  proto::TowerFightRecordPair *v5; // rax
  proto::TowerFightRecordPair *v6; // rax
  proto::TowerFightRecordPair *v7; // rax
  proto::TowerFightRecordPair *v8; // rax
  proto::TowerFightRecordPair *v9; // rax
  proto::TowerFightRecordPair *v10; // rax
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+20h] [rbp-70h]
  std::pair<unsigned int,unsigned int> *pair; // [rsp+28h] [rbp-68h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 1 13 proc_func:374";
  *(_QWORD *)(v2 + 16) = TowerMonthlyCombatRecord::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116351;
  __for_range = &this->most_reveal_avatar_vec;
  __for_begin._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(&this->most_reveal_avatar_vec)._M_current;
  __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(&this->most_reveal_avatar_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
            &__for_begin,
            &__for_end) )
  {
    pair = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin);
    v5 = proto::TowerMonthlyCombatRecord::add_most_reveal_avatar_list(combat_summary);
    TowerMonthlyCombatRecord::toClient(proto::TowerMonthlyCombatRecord &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightRecordPair &)#1}::operator()(
      (const TowerMonthlyCombatRecord::toClient::<lambda(const AvatarFightDataPair&, proto::TowerFightRecordPair&)> *const)(v2 + 32),
      pair,
      v5);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin);
  }
  v6 = proto::TowerMonthlyCombatRecord::mutable_most_kill_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toClient(proto::TowerMonthlyCombatRecord &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightRecordPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toClient::<lambda(const AvatarFightDataPair&, proto::TowerFightRecordPair&)> *const)(v2 + 32),
    &this->most_kill_avatar_pair,
    v6);
  v7 = proto::TowerMonthlyCombatRecord::mutable_highest_dps_avatr_pair(combat_summary);
  TowerMonthlyCombatRecord::toClient(proto::TowerMonthlyCombatRecord &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightRecordPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toClient::<lambda(const AvatarFightDataPair&, proto::TowerFightRecordPair&)> *const)(v2 + 32),
    &this->highest_dps_avatr_pair,
    v7);
  v8 = proto::TowerMonthlyCombatRecord::mutable_most_take_damage_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toClient(proto::TowerMonthlyCombatRecord &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightRecordPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toClient::<lambda(const AvatarFightDataPair&, proto::TowerFightRecordPair&)> *const)(v2 + 32),
    &this->most_take_damage_avatar_pair,
    v8);
  v9 = proto::TowerMonthlyCombatRecord::mutable_most_cast_normal_skill_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toClient(proto::TowerMonthlyCombatRecord &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightRecordPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toClient::<lambda(const AvatarFightDataPair&, proto::TowerFightRecordPair&)> *const)(v2 + 32),
    &this->most_cast_normal_skill_avatar_pair,
    v9);
  v10 = proto::TowerMonthlyCombatRecord::mutable_most_cast_energy_skill_avatar_pair(combat_summary);
  TowerMonthlyCombatRecord::toClient(proto::TowerMonthlyCombatRecord &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightRecordPair &)#1}::operator()(
    (const TowerMonthlyCombatRecord::toClient::<lambda(const AvatarFightDataPair&, proto::TowerFightRecordPair&)> *const)(v2 + 32),
    &this->most_cast_energy_skill_avatar_pair,
    v10);
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

// Line 374: range 000000001436D9A6-000000001436DA57
void __cdecl TowerMonthlyCombatRecord::toClient(proto::TowerMonthlyCombatRecord &)::{lambda(std::pair<unsigned int,unsigned int> const&,proto::TowerFightRecordPair &)#1}::operator()(
        const TowerMonthlyCombatRecord::toClient::<lambda(const AvatarFightDataPair&, proto::TowerFightRecordPair&)> *const __closure,
        const AvatarFightDataPair *summary_pair,
        proto::TowerFightRecordPair *bin_pair)
{
  if ( *(_BYTE *)(((unsigned __int64)summary_pair >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)summary_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)summary_pair >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(summary_pair);
  }
  proto::TowerFightRecordPair::set_avatar_id(bin_pair, summary_pair->first);
  if ( *(_BYTE *)(((unsigned __int64)&summary_pair->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)summary_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&summary_pair->second >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&summary_pair->second);
  }
  proto::TowerFightRecordPair::set_data(bin_pair, summary_pair->second);
};

// Line 393: range 000000001436DC7A-000000001436DE76
int32_t __cdecl TowerMonthlySummary::fromBin(TowerMonthlySummary *const this, const proto::TowerMonthlySummaryBin *bin)
{
  uint32_t v2; // edx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  bool v6; // dl
  uint32_t v7; // edx
  char v8; // al
  uint32_t v9; // ecx
  char v10; // dl
  bool v11; // dl
  uint32_t passed_floor_index; // edx
  char v13; // al
  const proto::TowerMonthlyCombatSummaryBin *v14; // rsi
  unsigned int v15; // eax
  __int64 v16; // rdx
  char v17; // al
  const proto::TowerMonthlySummaryBin *bina; // [rsp+0h] [rbp-20h]

  bina = bin;
  v2 = proto::TowerMonthlySummaryBin::tower_schedule_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->tower_schedule_id = v2;
  v4 = proto::TowerMonthlySummaryBin::best_floor_index(bina);
  v5 = *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v5 != 0;
  v6 = v5 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v5;
  if ( v6 )
    __asan_report_store4(&this->best_floor_index, bin, v6);
  this->best_floor_index = v4;
  v7 = proto::TowerMonthlySummaryBin::best_level_index(bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(bin) = v8 != 0;
    __asan_report_store4(&this->best_level_index, bin, v7);
  }
  this->best_level_index = v7;
  v9 = proto::TowerMonthlySummaryBin::total_star_count(bina);
  v10 = *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v10 != 0;
  v11 = v10 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v10;
  if ( v11 )
    __asan_report_store4(&this->total_star_count, bin, v11);
  this->total_star_count = v9;
  passed_floor_index = proto::TowerMonthlySummaryBin::last_passed_floor_index(bina);
  v13 = *(_BYTE *)(((unsigned __int64)&this->last_passed_floor_index >> 3) + 0x7FFF8000);
  if ( v13 != 0 && v13 <= 3 )
  {
    LOBYTE(bin) = v13 != 0;
    __asan_report_store4(&this->last_passed_floor_index, bin, passed_floor_index);
  }
  this->last_passed_floor_index = passed_floor_index;
  v14 = proto::TowerMonthlySummaryBin::monthly_combat_summary(bina);
  TowerMonthlyCombatRecord::fromBin(&this->monthly_combat_record, v14);
  LOBYTE(v15) = proto::TowerMonthlySummaryBin::is_interact(bina);
  v16 = v15;
  v17 = *(_BYTE *)(((unsigned __int64)&this->is_interact >> 3) + 0x7FFF8000);
  if ( v17 < 0 )
  {
    LOBYTE(v14) = v17 != 0;
    __asan_report_store1(&this->is_interact, v14, v16);
  }
  this->is_interact = v16;
  return 0;
};

// Line 405: range 000000001436DE78-000000001436E074
int32_t __cdecl TowerMonthlySummary::toBin(TowerMonthlySummary *const this, proto::TowerMonthlySummaryBin *bin)
{
  proto::TowerMonthlyCombatSummaryBin *combat_summary; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerMonthlySummaryBin::set_tower_schedule_id(bin, this->tower_schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->best_floor_index);
  }
  proto::TowerMonthlySummaryBin::set_best_floor_index(bin, this->best_floor_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->best_level_index);
  }
  proto::TowerMonthlySummaryBin::set_best_level_index(bin, this->best_level_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_star_count);
  }
  proto::TowerMonthlySummaryBin::set_total_star_count(bin, this->total_star_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_passed_floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_passed_floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_passed_floor_index);
  }
  proto::TowerMonthlySummaryBin::set_last_passed_floor_index(bin, this->last_passed_floor_index);
  combat_summary = proto::TowerMonthlySummaryBin::mutable_monthly_combat_summary(bin);
  TowerMonthlyCombatRecord::toBin(&this->monthly_combat_record, combat_summary);
  if ( *(char *)(((unsigned __int64)&this->is_interact >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_interact);
  proto::TowerMonthlySummaryBin::set_is_interact(bin, this->is_interact);
  return 0;
};

// Line 418: range 000000001436E076-000000001436E1B3
void __cdecl TowerMonthlySummary::toClientBrief(
        TowerMonthlySummary *const this,
        proto::TowerMonthlyBrief *monthly_brief)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::TowerMonthlyBrief::set_tower_schedule_id(monthly_brief, this->tower_schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_floor_index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->best_floor_index);
  }
  proto::TowerMonthlyBrief::set_best_floor_index(monthly_brief, this->best_floor_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_level_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->best_level_index);
  }
  proto::TowerMonthlyBrief::set_best_level_index(monthly_brief, this->best_level_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_star_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_star_count);
  }
  proto::TowerMonthlyBrief::set_total_star_count(monthly_brief, this->total_star_count);
};

// Line 426: range 000000001436E1B4-000000001436E209
void __cdecl TowerMonthlySummary::toClientDetail(
        TowerMonthlySummary *const this,
        proto::TowerMonthlyDetail *monthly_detail)
{
  proto::TowerMonthlyBrief *v2; // rdx
  proto::TowerMonthlyCombatRecord *v3; // rax

  v2 = proto::TowerMonthlyDetail::mutable_monthly_brief(monthly_detail);
  TowerMonthlySummary::toClientBrief(this, v2);
  v3 = proto::TowerMonthlyDetail::mutable_monthly_combat_record(monthly_detail);
  TowerMonthlyCombatRecord::toClient(&this->monthly_combat_record, v3);
};

// Line 432: range 000000001436E20A-000000001436E29D
common::milog::MiLogStream *__cdecl operator<<(
        common::milog::MiLogStream *stream,
        const TowerCurLevelRecord *cur_level_record)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax

  if ( TowerCurLevelRecord::isEmpty(cur_level_record) )
  {
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(stream, (const char (*)[8])"[empty]");
  }
  else
  {
    v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           stream,
           (const char (*)[18])"[cur_floor_index:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &cur_level_record->cur_floor_index);
    v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v3, (const char (*)[18])" cur_level_index:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &cur_level_record->cur_level_index);
    common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v5, (const char (*)[2])"]");
  }
  return stream;
};

// Line 446: range 000000001436E29E-000000001436E2D7
int32_t __cdecl PlayerTowerComp::fromBin(PlayerTowerComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  const proto::PlayerTowerCompBin *v2; // rdx

  v2 = proto::PlayerDataBin::tower_bin(player_data_bin);
  PlayerTowerComp::fromBin(this, v2);
  return 0;
};

// Line 454: range 000000001436E2D8-000000001436E311
int32_t __cdecl PlayerTowerComp::toBin(PlayerTowerComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::PlayerTowerCompBin *v2; // rdx

  v2 = proto::PlayerDataBin::mutable_tower_bin(player_data_bin);
  PlayerTowerComp::toBin(this, v2);
  return 0;
};

// Line 461: range 000000001436E312-000000001436EC06
void __cdecl PlayerTowerComp::fromBin(PlayerTowerComp *const this, const proto::PlayerTowerCompBin *proto_comp)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // edx
  char v6; // al
  TowerFloorRecord *v7; // rax
  google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin>::const_iterator *p_for_end; // rsi
  common::milog::MiLogStream *v9; // rax
  uint32_t v10; // edx
  common::milog::MiLogStream *v11; // rax
  TowerFloorRecord *v12; // rax
  uint32_t daily_reward_time; // edx
  char v14; // al
  uint32_t v15; // ecx
  char v16; // dl
  bool v17; // dl
  uint32_t v18; // edx
  char v19; // al
  std::vector<unsigned int> *v20; // rbx
  const google::protobuf::RepeatedField<unsigned int> *v21; // rax
  const proto::TowerCurLevelRecordBin *v22; // rax
  google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::const_iterator *p_for_end_0; // rsi
  TowerMonthlySummary *v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rdx
  char v27; // al
  const proto::TowerFightStatisticBin *v28; // rax
  const proto::PlayerTowerCompBin *proto_compa; // [rsp+0h] [rbp-160h]
  google::protobuf::uint32 floor_id; // [rsp+14h] [rbp-14Ch]
  google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin>::const_iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin>::const_iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  const TowerExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-138h]
  const google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin> *__for_range; // [rsp+30h] [rbp-130h]
  const google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin> *__for_range_0; // [rsp+38h] [rbp-128h]
  const google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin> *__for_range_1; // [rsp+40h] [rbp-120h]
  const google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin> *__for_range_2; // [rsp+48h] [rbp-118h]
  const unsigned int *p_schedule_id; // [rsp+50h] [rbp-110h]
  const unsigned int *p_level_id; // [rsp+58h] [rbp-108h]
  const proto::TowerFloorRecordBin *tower_floor_record_bin_0; // [rsp+60h] [rbp-100h]
  const proto::TowerFloorRecordBin *tower_floor_record_bin; // [rsp+68h] [rbp-F8h]
  std::shared_ptr<Config> v42; // [rsp+70h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::const_iterator __for_begin_0; // [rsp+80h] [rbp-E0h] BYREF
  google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::const_iterator __for_end_0; // [rsp+A0h] [rbp-C0h] BYREF
  common::milog::MiLogStream v45; // [rsp+C0h] [rbp-A0h] BYREF
  char v46[128]; // [rsp+E0h] [rbp-80h] BYREF

  proto_compa = proto_comp;
  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 floor_id:479 64 4 15 floor_index:484";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  v5 = proto::PlayerTowerCompBin::tower_schedule_id(proto_comp);
  v6 = *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto_comp) = v6 != 0;
    __asan_report_store4(&this->tower_schedule_id_, proto_comp, v5);
  }
  this->tower_schedule_id_ = v5;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v42);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.tower_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v42);
  __for_range = proto::PlayerTowerCompBin::tower_floor_record_list(proto_compa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::TowerFloorRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    tower_floor_record_bin = google::protobuf::internal::RepeatedPtrIterator<proto::TowerFloorRecordBin const>::operator*(&__for_begin);
    floor_id = proto::TowerFloorRecordBin::floor_id(tower_floor_record_bin);
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tower_schedule_id_);
    }
    if ( !this->tower_schedule_id_ )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/tower/player_tower_comp.cpp",
        "fromBin",
        470);
      common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
        &v45,
        (const char (*)[58])"tower_schedule_id_ is 0, should not have any floor_record");
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tower_schedule_id_);
    }
    *(_DWORD *)(v2 + 64) = TowerExcelConfigMgr::findTowerFloorIndex(config_mgr, this->tower_schedule_id_, floor_id);
    v7 = std::map<unsigned int,TowerFloorRecord>::operator[](
           &this->tower_floor_record_map_,
           (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v2 + 64));
    TowerFloorRecord::fromBin(v7, tower_floor_record_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::TowerFloorRecordBin const>::operator++(&__for_begin);
  }
  __for_range_0 = proto::PlayerTowerCompBin::tower_entrance_floor_record_list(proto_compa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::TowerFloorRecordBin>::end(__for_range_0).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::TowerFloorRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    tower_floor_record_bin_0 = google::protobuf::internal::RepeatedPtrIterator<proto::TowerFloorRecordBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::TowerFloorRecordBin::floor_id(tower_floor_record_bin_0);
    if ( !TowerExcelConfigMgr::isIdEntranceFloor(config_mgr, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/tower/player_tower_comp.cpp",
        "fromBin",
        482);
      v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v45,
             (const char (*)[42])"floor id is not entrance floor, floor_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
    v10 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tower_schedule_id_);
    }
    *(_DWORD *)(v2 + 64) = TowerExcelConfigMgr::findTowerFloorIndex(config_mgr, this->tower_schedule_id_, v10);
    if ( !*(_DWORD *)(v2 + 64) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/tower/player_tower_comp.cpp",
        "fromBin",
        487);
      v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v45,
              (const char (*)[48])"entrance floor_index should not be 0, floor_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v45);
    }
    v12 = std::map<unsigned int,TowerFloorRecord>::operator[](
            &this->tower_floor_record_map_,
            (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v2 + 64));
    TowerFloorRecord::fromBin(v12, tower_floor_record_bin_0);
    google::protobuf::internal::RepeatedPtrIterator<proto::TowerFloorRecordBin const>::operator++(&__for_begin);
  }
  daily_reward_time = proto::PlayerTowerCompBin::last_daily_reward_time(proto_compa);
  v14 = *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000);
  if ( v14 != 0 && v14 <= 3 )
  {
    LOBYTE(p_for_end) = v14 != 0;
    __asan_report_store4(&this->last_daily_reward_time_, p_for_end, daily_reward_time);
  }
  this->last_daily_reward_time_ = daily_reward_time;
  v15 = proto::PlayerTowerCompBin::daily_floor_index(proto_compa);
  v16 = *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v16 != 0;
  v17 = v16 != 0 && (char)((((_BYTE)this + 92) & 7) + 3) >= v16;
  if ( v17 )
    __asan_report_store4(&this->daily_floor_index_, p_for_end, v17);
  this->daily_floor_index_ = v15;
  v18 = proto::PlayerTowerCompBin::daily_level_index(proto_compa);
  v19 = *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000);
  if ( v19 != 0 && v19 <= 3 )
  {
    LOBYTE(p_for_end) = v19 != 0;
    __asan_report_store4(&this->daily_level_index_, p_for_end, v18);
  }
  this->daily_level_index_ = v18;
  __for_range_1 = proto::PlayerTowerCompBin::daily_level_buff_map(proto_compa);
  google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::begin(&__for_begin_0, __for_range_1);
  google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::end(&__for_end_0, __for_range_1);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_level_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::const_iterator::operator*(&__for_begin_0);
    v20 = std::map<unsigned int,std::vector<unsigned int>>::operator[](&this->daily_level_buff_map_, p_level_id);
    v21 = proto::TowerLevelBuffListBin::tower_buff_id_list((const proto::TowerLevelBuffListBin *const)(p_level_id + 2));
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v21, v20);
    google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::const_iterator::operator++(&__for_begin_0);
  }
  v22 = proto::PlayerTowerCompBin::cur_level_record(proto_compa);
  TowerCurLevelRecord::fromBin(&this->cur_level_record_, v22);
  __for_range_2 = proto::PlayerTowerCompBin::tower_monthly_summary_map(proto_compa);
  google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::begin(
    (google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator *)&__for_begin_0,
    __for_range_2);
  google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::end(
    (google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator *)&__for_end_0,
    __for_range_2);
  while ( 1 )
  {
    p_for_end_0 = &__for_end_0;
    if ( !google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator *)&__for_begin_0,
            (const google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator *)&__for_end_0) )
      break;
    p_schedule_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator *const)&__for_begin_0);
    v24 = std::map<unsigned int,TowerMonthlySummary>::operator[](&this->tower_monthly_summary_map_, p_schedule_id);
    TowerMonthlySummary::fromBin(v24, (const proto::TowerMonthlySummaryBin *)(p_schedule_id + 2));
    google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::const_iterator *const)&__for_begin_0);
  }
  LOBYTE(v25) = proto::PlayerTowerCompBin::is_interact_this_schedule(proto_compa);
  v26 = v25;
  v27 = *(_BYTE *)(((unsigned __int64)&this->is_interact_this_schedule_ >> 3) + 0x7FFF8000);
  if ( v27 < 0 )
  {
    LOBYTE(p_for_end_0) = v27 != 0;
    __asan_report_store1(&this->is_interact_this_schedule_, p_for_end_0, v26);
  }
  this->is_interact_this_schedule_ = v26;
  v28 = proto::PlayerTowerCompBin::fight_statistic(proto_compa);
  TowerFightStatistic::fromBin(&this->tower_fight_statisic_, v28);
  if ( v46 == (char *)v2 )
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

// Line 510: range 000000001436EC08-000000001436F173
void __cdecl PlayerTowerComp::toBin(PlayerTowerComp *const this, proto::PlayerTowerCompBin *proto_comp)
{
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  bool isIndexEntranceFloor; // bl
  proto::TowerFloorRecordBin *v4; // rax
  proto::TowerLevelBuffListBin *v5; // rax
  google::protobuf::RepeatedField<unsigned int> *v6; // rax
  proto::TowerCurLevelRecordBin *v7; // rax
  proto::TowerFightStatisticBin *v8; // rax
  std::map<unsigned int,TowerFloorRecord>::iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,TowerFloorRecord>::iterator __for_end; // [rsp+20h] [rbp-A0h] BYREF
  std::map<unsigned int,TowerFloorRecord> *__for_range; // [rsp+28h] [rbp-98h]
  google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin> *proto_level_buff_map; // [rsp+30h] [rbp-90h]
  std::map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+38h] [rbp-88h]
  google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin> *tower_monthly_summary_map; // [rsp+40h] [rbp-80h]
  std::map<unsigned int,TowerMonthlySummary> *__for_range_1; // [rsp+48h] [rbp-78h]
  std::pair<unsigned int const,TowerMonthlySummary> *__in; // [rsp+50h] [rbp-70h]
  std::tuple_element<0,std::pair<unsigned int const,TowerMonthlySummary> >::type *schedule_id; // [rsp+58h] [rbp-68h]
  std::tuple_element<1,std::pair<unsigned int const,TowerMonthlySummary> >::type *monthly_summary; // [rsp+60h] [rbp-60h]
  proto::TowerMonthlySummaryBin *summary_bin; // [rsp+68h] [rbp-58h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v20; // [rsp+70h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *level_id; // [rsp+78h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *buff_id_vec; // [rsp+80h] [rbp-40h]
  const std::pair<unsigned int const,TowerFloorRecord> *v23; // [rsp+88h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_index; // [rsp+90h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *tower_floor_record; // [rsp+98h] [rbp-28h]
  std::shared_ptr<Config> v26[2]; // [rsp+A0h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  proto::PlayerTowerCompBin::set_tower_schedule_id(proto_comp, this->tower_schedule_id_);
  __for_range = &this->tower_floor_record_map_;
  __for_begin._M_node = std::map<unsigned int,TowerFloorRecord>::begin(&this->tower_floor_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator*(&__for_begin);
    floor_index = std::get<0ul,unsigned int const,TowerFloorRecord>(v23);
    tower_floor_record = (std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *)std::get<1ul,unsigned int const,TowerFloorRecord>(v23);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v26);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v26)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(floor_index);
    }
    isIndexEntranceFloor = TowerExcelConfigMgr::isIndexEntranceFloor(p_tower_config_mgr, *floor_index);
    std::shared_ptr<Config>::~shared_ptr(v26);
    if ( isIndexEntranceFloor )
      v4 = proto::PlayerTowerCompBin::add_tower_entrance_floor_record_list(proto_comp);
    else
      v4 = proto::PlayerTowerCompBin::add_tower_floor_record_list(proto_comp);
    TowerFloorRecord::toBin(tower_floor_record, v4);
    std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_daily_reward_time_);
  }
  proto::PlayerTowerCompBin::set_last_daily_reward_time(proto_comp, this->last_daily_reward_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_floor_index_);
  }
  proto::PlayerTowerCompBin::set_daily_floor_index(proto_comp, this->daily_floor_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->daily_level_index_);
  }
  proto::PlayerTowerCompBin::set_daily_level_index(proto_comp, this->daily_level_index_);
  proto_level_buff_map = proto::PlayerTowerCompBin::mutable_daily_level_buff_map(proto_comp);
  __for_range_0 = &this->daily_level_buff_map_;
  __for_begin._M_node = std::map<unsigned int,std::vector<unsigned int>>::begin(&this->daily_level_buff_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end) )
  {
    v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
    level_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v20);
    buff_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v20);
    v5 = google::protobuf::Map<unsigned int,proto::TowerLevelBuffListBin>::operator[](proto_level_buff_map, level_id);
    v6 = proto::TowerLevelBuffListBin::mutable_tower_buff_id_list(v5);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(buff_id_vec, v6);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
  }
  v7 = proto::PlayerTowerCompBin::mutable_cur_level_record(proto_comp);
  TowerCurLevelRecord::toBin(&this->cur_level_record_, v7);
  tower_monthly_summary_map = proto::PlayerTowerCompBin::mutable_tower_monthly_summary_map(proto_comp);
  __for_range_1 = &this->tower_monthly_summary_map_;
  __for_begin._M_node = std::map<unsigned int,TowerMonthlySummary>::begin(&this->tower_monthly_summary_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerMonthlySummary>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >::_Self *)&__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > *const)&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,TowerMonthlySummary>(__in);
    monthly_summary = std::get<1ul,unsigned int const,TowerMonthlySummary>(__in);
    summary_bin = google::protobuf::Map<unsigned int,proto::TowerMonthlySummaryBin>::operator[](
                    tower_monthly_summary_map,
                    schedule_id);
    TowerMonthlySummary::toBin(monthly_summary, summary_bin);
    std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_interact_this_schedule_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_interact_this_schedule_);
  proto::PlayerTowerCompBin::set_is_interact_this_schedule(proto_comp, this->is_interact_this_schedule_);
  v8 = proto::PlayerTowerCompBin::mutable_fight_statistic(proto_comp);
  TowerFightStatistic::toBin(&this->tower_fight_statisic_, v8);
};

// Line 548: range 000000001436F174-000000001436F5F2
int32_t __cdecl PlayerTowerComp::init(PlayerTowerComp *const this)
{
  unsigned __int64 p_M_last; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t v4; // r14d
  int32_t result; // eax
  std::weak_ptr<PlayerTowerComp> *EventComp; // [rsp+10h] [rbp-110h]
  std::weak_ptr<PlayerTowerComp> *v7; // [rsp+20h] [rbp-100h]
  std::weak_ptr<PlayerTowerComp> *p_this_wtr; // [rsp+30h] [rbp-F0h]
  PlayerEventComp v9; // [rsp+40h] [rbp-E0h] BYREF

  p_M_last = (unsigned __int64)&v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_last = v2;
  }
  *(_QWORD *)p_M_last = 1102416563LL;
  *(_QWORD *)(p_M_last + 8) = "2 32 16 12 this_ptr:549 64 16 12 this_wtr:555";
  *(_QWORD *)(p_M_last + 16) = PlayerTowerComp::init;
  v3 = (_DWORD *)(p_M_last >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<PlayerTowerComp>((PlayerTowerComp *)(p_M_last + 32));
  if ( std::operator==<PlayerTowerComp>(0LL, (const std::shared_ptr<PlayerTowerComp> *)(p_M_last + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v9.event_center_.context_.pending_que_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "init",
      552);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)&v9.event_center_.context_.pending_que_,
      (const char (*)[47])"dynamic_pointer_cast to PlayerTowerComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v9.event_center_.context_.pending_que_);
    v4 = -1;
  }
  else
  {
    std::weak_ptr<PlayerTowerComp>::weak_ptr<PlayerTowerComp,void>(
      (std::weak_ptr<PlayerTowerComp> *const)(p_M_last + 64),
      (const std::shared_ptr<PlayerTowerComp> *)(p_M_last + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    p_this_wtr = (std::weak_ptr<PlayerTowerComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerTowerComp>::weak_ptr(
      (std::weak_ptr<PlayerTowerComp> *const)&v9.event_center_,
      (const std::weak_ptr<PlayerTowerComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerTowerComp,OpenStateChangeEvent>(
      &v9,
      p_this_wtr,
      (void (*)(PlayerTowerComp *, const OpenStateChangeEvent *))&v9.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9);
    std::weak_ptr<PlayerTowerComp>::~weak_ptr((std::weak_ptr<PlayerTowerComp> *const)&v9.event_center_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = (std::weak_ptr<PlayerTowerComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerTowerComp>::weak_ptr(
      (std::weak_ptr<PlayerTowerComp> *const)&v9.event_center_,
      (const std::weak_ptr<PlayerTowerComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerTowerComp,PostEnterSceneEvent>(
      (PlayerEventComp *const)&v9._M_weak_this._M_refcount,
      EventComp,
      (void (*)(PlayerTowerComp *, const PostEnterSceneEvent *))&v9.event_center_);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9._M_weak_this._M_refcount);
    std::weak_ptr<PlayerTowerComp>::~weak_ptr((std::weak_ptr<PlayerTowerComp> *const)&v9.event_center_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v7 = (std::weak_ptr<PlayerTowerComp> *)Player::getEventComp(this->player_);
    std::weak_ptr<PlayerTowerComp>::weak_ptr(
      (std::weak_ptr<PlayerTowerComp> *const)&v9._M_weak_this._M_refcount,
      (const std::weak_ptr<PlayerTowerComp> *)(p_M_last + 64));
    PlayerEventComp::registerObserver<PlayerTowerComp,LeaveSceneEvent>(
      (PlayerEventComp *const)&v9.event_center_,
      v7,
      (void (*)(PlayerTowerComp *, const LeaveSceneEvent *))&v9._M_weak_this._M_refcount);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v9.event_center_);
    std::weak_ptr<PlayerTowerComp>::~weak_ptr((std::weak_ptr<PlayerTowerComp> *const)&v9._M_weak_this._M_refcount);
    v4 = 0;
    std::weak_ptr<PlayerTowerComp>::~weak_ptr((std::weak_ptr<PlayerTowerComp> *const)(p_M_last + 64));
  }
  std::shared_ptr<PlayerTowerComp>::~shared_ptr((std::shared_ptr<PlayerTowerComp> *const)(p_M_last + 32));
  result = v4;
  if ( &v9.event_center_.context_.pending_que_.c._M_impl._M_start._M_last == (std::_Deque_iterator<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >&,std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >*>::_Elt_pointer *)p_M_last )
  {
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_last = 1172321806LL;
    *(_QWORD *)((p_M_last >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_last >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 564: range 000000001436F5F4-000000001436F667
int32_t __cdecl PlayerTowerComp::onLogin(PlayerTowerComp *const this, bool is_new_player)
{
  if ( *(char *)(((unsigned __int64)&this->cur_level_record_.is_floor_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->cur_level_record_.is_floor_finished);
  if ( this->cur_level_record_.is_floor_finished )
    PlayerTowerComp::internalResetCurLevelRecord(this);
  PlayerTowerComp::checkAndRefresh(this);
  return 0;
};

// Line 577: range 000000001436F668-000000001436F8FE
uint32_t __cdecl PlayerTowerComp::getNextScheduleChangeTime(const PlayerTowerComp *const this)
{
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::vector<data::TowerSchedule>::const_reference v6; // rax
  uint32_t now; // [rsp+18h] [rbp-38h]
  uint32_t next_schedule_id; // [rsp+1Ch] [rbp-34h]
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+20h] [rbp-30h]
  const data::TowerScheduleExcelConfig *next_schedule_config_ptr; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( !this->tower_schedule_id_ )
    goto LABEL_10;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(p_tower_config_mgr, this->tower_schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(v11);
  if ( schedule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->close_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->close_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&schedule_config_ptr->close_timestamp);
    }
    return schedule_config_ptr->close_timestamp;
  }
  else
  {
LABEL_10:
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
    next_schedule_id = TowerExcelConfigMgr::findNextTowerScheduleConfigIdByTimestamp(
                         &v3->design_config.txt_config_mgr.tower_config_mgr,
                         now);
    std::shared_ptr<Config>::~shared_ptr(v11);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
    next_schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(
                                 &v4->design_config.txt_config_mgr.tower_config_mgr,
                                 next_schedule_id);
    std::shared_ptr<Config>::~shared_ptr(v11);
    if ( next_schedule_config_ptr && !std::vector<data::TowerSchedule>::empty(&next_schedule_config_ptr->schedules) )
    {
      v6 = std::vector<data::TowerSchedule>::operator[](&next_schedule_config_ptr->schedules, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)&v6->open_timestamp >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v6->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
      {
        v6 = (std::vector<data::TowerSchedule>::const_reference)__asan_report_load4(&v6->open_timestamp);
      }
      return v6->open_timestamp;
    }
    else
    {
      return 0;
    }
  }
};

// Line 600: range 000000001436F900-000000001436FF78
int32_t __cdecl PlayerTowerComp::notifyAllData(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  unsigned int v5; // ecx
  std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > >::pointer v6; // rax
  std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  uint32_t v9; // eax
  std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > >::pointer v11; // rax
  std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  unsigned __int64 v13; // rax
  std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  google::protobuf::uint32 v15; // eax
  std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  bool isFinishEntranceFloor; // al
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  std::vector<data::TowerSchedule>::const_reference v21; // rax
  Player *player; // r14
  int32_t result; // eax
  uint32_t total_star_num; // [rsp+1Ch] [rbp-D4h]
  std::map<unsigned int,TowerFloorRecord> v25; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<const google::protobuf::Message> v26; // [rsp+50h] [rbp-A0h] BYREF
  char v27[144]; // [rsp+60h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 7 rit:618 64 16 14 notify_ptr:614";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  total_star_num = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  TowerExcelConfigMgr::getTowerEntranceFloorConfig((const TowerExcelConfigMgr *const)&v25._M_t._M_impl._M_node_count);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
  *(_QWORD *)&v25._M_t._M_impl._M_header._M_color = std::get<0ul,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int> *)&v25._M_t._M_impl._M_node_count);
  v25._M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)std::get<1ul,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int> *)&v25._M_t._M_impl._M_node_count);
  std::map<unsigned int,TowerFloorRecord>::rbegin((std::map<unsigned int,TowerFloorRecord> *const)(v1 + 32));
  while ( 1 )
  {
    std::map<unsigned int,TowerFloorRecord>::rend(&v25);
    if ( !std::operator!=<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>(
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *)(v1 + 32),
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *)&v25) )
      break;
    v4 = (unsigned __int64)std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(v1 + 32));
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v4 >> 3) + 0x7FFF8000) <= 3 )
      v4 = __asan_report_load4(v4);
    v5 = *(_DWORD *)v4;
    if ( *(_BYTE *)((*(_QWORD *)&v25._M_t._M_impl._M_header._M_color >> 3) + 0x7FFF8000LL) != 0
      && (char)((v25._M_t._M_impl._M_header._M_color & 7) + 3) >= *(_BYTE *)((*(_QWORD *)&v25._M_t._M_impl._M_header._M_color >> 3)
                                                                           + 0x7FFF8000LL) )
    {
      __asan_report_load4(*(_QWORD *)&v25._M_t._M_impl._M_header._M_color);
    }
    if ( v5 <= **(_DWORD **)&v25._M_t._M_impl._M_header._M_color )
      break;
    v6 = std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(v1 + 32));
    total_star_num += TowerFloorRecord::getTotalStarNum(&v6->second);
    std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator++((std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(v1 + 32));
  }
  common::tools::perf::make_shared<proto::TowerBriefDataNotify>();
  v7 = std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  proto::TowerBriefDataNotify::set_tower_schedule_id(v7, this->tower_schedule_id_);
  v8 = std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  v9 = PlayerTowerComp::getNextScheduleChangeTime(this);
  proto::TowerBriefDataNotify::set_next_schedule_change_time(v8, v9);
  v10 = std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  proto::TowerBriefDataNotify::set_total_star_num(v10, total_star_num);
  std::map<unsigned int,TowerFloorRecord>::rbegin((std::map<unsigned int,TowerFloorRecord> *const)(v1 + 32));
  while ( 1 )
  {
    std::map<unsigned int,TowerFloorRecord>::rend(&v25);
    if ( !std::operator!=<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>(
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *)(v1 + 32),
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *)&v25) )
      break;
    v11 = std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(v1 + 32));
    v25._M_t._M_impl._M_header._M_left = (std::_Rb_tree_node_base::_Base_ptr)&v11->second;
    if ( !std::vector<LevelRecord>::empty(&v11->second.passed_level_record_vec) )
    {
      v12 = std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v13 = (unsigned __int64)std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(v1 + 32));
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v13 >> 3) + 0x7FFF8000) <= 3 )
        v13 = __asan_report_load4(v13);
      proto::TowerBriefDataNotify::set_last_floor_index(v12, *(_DWORD *)v13);
      v14 = std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      v15 = std::vector<LevelRecord>::size((const std::vector<LevelRecord> *const)&v25._M_t._M_impl._M_header._M_left->_M_parent);
      proto::TowerBriefDataNotify::set_last_level_index(v14, v15);
      break;
    }
    std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator++((std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(v1 + 32));
  }
  v16 = std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  isFinishEntranceFloor = PlayerTowerComp::isFinishEntranceFloor(this);
  proto::TowerBriefDataNotify::set_is_finished_entrance_floor(v16, isFinishEntranceFloor);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  v25._M_t._M_impl._M_header._M_right = (std::_Rb_tree_node_base::_Base_ptr)TowerExcelConfigMgr::findTowerScheduleConfig(
                                                                              p_tower_config_mgr,
                                                                              this->tower_schedule_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
  if ( v25._M_t._M_impl._M_header._M_right
    && !std::vector<data::TowerSchedule>::empty((const std::vector<data::TowerSchedule> *const)&v25._M_t._M_impl._M_header._M_right[1]._M_parent) )
  {
    v20 = std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerBriefDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v21 = std::vector<data::TowerSchedule>::operator[](
            (const std::vector<data::TowerSchedule> *const)&v25._M_t._M_impl._M_header._M_right[1]._M_parent,
            0LL);
    if ( *(_BYTE *)(((unsigned __int64)&v21->open_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v21->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      v21 = (std::vector<data::TowerSchedule>::const_reference)__asan_report_load4(&v21->open_timestamp);
    }
    proto::TowerBriefDataNotify::set_schedule_start_time(v20, v21->open_timestamp);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::TowerBriefDataNotify>((const std::shared_ptr<proto::TowerBriefDataNotify> *)&v26);
  Player::sendMessage(player, &v26, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v26);
  std::shared_ptr<proto::TowerBriefDataNotify>::~shared_ptr((std::shared_ptr<proto::TowerBriefDataNotify> *const)(v1 + 64));
  result = 0;
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
  return result;
};

// Line 642: range 000000001436FF7A-000000001436FF94
void __cdecl PlayerTowerComp::onDailyRefresh(PlayerTowerComp *const this)
{
  PlayerTowerComp::checkAndRefresh(this);
};

// Line 647: range 000000001436FF96-00000000143704F8
int32_t __cdecl PlayerTowerComp::trySkipFloorAndGrantReward(PlayerTowerComp *const this, proto::TowerAllDataRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t result; // eax
  std::map<unsigned int,TowerMonthlySummary>::iterator v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >::pointer v7; // rax
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  PlayerItemComp *ItemComp; // rax
  uint32_t mail_config_id; // [rsp+10h] [rbp-F0h]
  uint32_t commemorative_reward_id; // [rsp+14h] [rbp-ECh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >::_Self __y; // [rsp+18h] [rbp-E8h] BYREF
  TowerMonthlySummary *last_month_summary; // [rsp+20h] [rbp-E0h]
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-C0h] BYREF
  char v19[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 13 last_iter:653 64 24 17 action_reason:684";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::trySkipFloorAndGrantReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( std::map<unsigned int,TowerMonthlySummary>::empty(&this->tower_monthly_summary_map_) )
  {
    result = 0;
  }
  else
  {
    v6._M_node = std::map<unsigned int,TowerMonthlySummary>::end(&this->tower_monthly_summary_map_)._M_node;
    *(std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > *)(v2 + 32) = std::prev<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>>(
                                                                                                 v6,
                                                                                                 1LL);
    __y._M_node = std::map<unsigned int,TowerMonthlySummary>::end(&this->tower_monthly_summary_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >::_Self *)(v2 + 32),
           &__y) )
    {
      result = 0;
    }
    else
    {
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > *const)(v2 + 32));
      last_month_summary = &v7->second;
      if ( *(char *)(((unsigned __int64)&v7->second.is_interact >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&v7->second.is_interact);
      if ( last_month_summary->is_interact )
      {
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&last_month_summary->is_interact >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&last_month_summary->is_interact, &__y, &last_month_summary->is_interact);
        last_month_summary->is_interact = 1;
        if ( *(_BYTE *)(((unsigned __int64)&last_month_summary->best_floor_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)last_month_summary + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&last_month_summary->best_floor_index >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(&last_month_summary->best_floor_index);
        }
        if ( !last_month_summary->best_floor_index )
          goto LABEL_20;
        if ( *(_BYTE *)(((unsigned __int64)&last_month_summary->best_level_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&last_month_summary->best_level_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&last_month_summary->best_level_index);
        }
        if ( last_month_summary->best_level_index )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v17);
          p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.tower_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)last_month_summary >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)last_month_summary >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(last_month_summary);
          }
          schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(
                                  p_tower_config_mgr,
                                  last_month_summary->tower_schedule_id);
          std::shared_ptr<Config>::~shared_ptr(&v17);
          if ( schedule_config_ptr )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v17);
            v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
            mail_config_id = ConstValueExcelConfigMgr::getTowerOverflowMailId(&v10->design_config.txt_config_mgr.const_value_config_mgr);
            std::shared_ptr<Config>::~shared_ptr(&v17);
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->commemorative_reward >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->commemorative_reward >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&schedule_config_ptr->commemorative_reward);
            }
            if ( schedule_config_ptr->commemorative_reward )
            {
              commemorative_reward_id = schedule_config_ptr->commemorative_reward;
              ActionReason::ActionReason(
                (ActionReason *const)(v2 + 64),
                ACTION_REASON_TOWER_COMMEMORATIVE_REWARD,
                ITEM_LIMIT_TOWER_MONTHLY);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              ItemComp = Player::getItemComp(this->player_);
              PlayerItemComp::grantRewardOrSendMail(
                ItemComp,
                commemorative_reward_id,
                mail_config_id,
                (const ActionReason *)(v2 + 64));
              proto::TowerAllDataRsp::set_commemorative_reward_id(rsp_0, commemorative_reward_id);
            }
            PlayerTowerComp::logTowerMonthlySummary(this, last_month_summary);
            result = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v18,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/tower/player_tower_comp.cpp",
              "trySkipFloorAndGrantReward",
              675);
            v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                   &v18,
                   (const char (*)[49])"findTowerScheduleConfig fail, tower_schedule_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v9,
              &last_month_summary->tower_schedule_id);
            common::milog::MiLogStream::~MiLogStream(&v18);
            result = -1;
          }
        }
        else
        {
LABEL_20:
          result = 0;
        }
      }
    }
  }
  if ( v19 == (char *)v2 )
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

// Line 696: range 00000000143704FA-00000000143713AC
int32_t __cdecl PlayerTowerComp::requestAllData(
        PlayerTowerComp *const this,
        proto::TowerAllDataRsp *rsp_0,
        bool is_interact)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int32_t result; // eax
  proto::TowerMonthlyBrief *v7; // rax
  std::map<unsigned int,TowerMonthlySummary> *p_tower_monthly_summary_map; // rcx
  TowerMonthlySummary *p_second; // r14
  proto::TowerMonthlyBrief *schedule_monthly_brief; // rax
  std::map<unsigned int,TowerFloorRecord>::iterator v11; // rax
  unsigned __int64 v12; // rax
  proto::TowerFloorRecord *v13; // rax
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t daily_floor_index; // edx
  proto::TowerCurLevelRecord *v16; // rcx
  uint32_t v17; // edx
  TowerExcelConfigMgr *v18; // rcx
  std::vector<data::TowerSchedule>::const_reference v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v23; // rax
  _DWORD *v24; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  bool *p_is_gm_talk_open; // rax
  PlayerGmComp *GmComp; // rax
  char v28; // r15
  char *v29; // rsi
  unsigned int *v30; // rax
  _DWORD *v31; // rdx
  char v32; // cl
  uint32_t open_timestamp; // r14d
  char *v34; // rsi
  unsigned int *v35; // rax
  uint32_t *v36; // rdx
  char v37; // cl
  google::protobuf::uint32 v38; // edx
  bool isFinishEntranceFloor; // dl
  uint32_t last_floor_index; // [rsp+2Ch] [rbp-154h]
  uint32_t floor_id; // [rsp+30h] [rbp-150h]
  uint32_t now; // [rsp+34h] [rbp-14Ch]
  uint32_t next_schedule_id; // [rsp+38h] [rbp-148h]
  std::vector<data::TowerSchedule>::const_iterator __for_begin; // [rsp+40h] [rbp-140h] BYREF
  std::map<unsigned int,TowerFloorRecord>::iterator __for_end; // [rsp+48h] [rbp-138h] BYREF
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+50h] [rbp-130h]
  TowerMonthlySummary *last_month_summary; // [rsp+58h] [rbp-128h]
  std::map<unsigned int,TowerFloorRecord> *__for_range; // [rsp+60h] [rbp-120h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_floor_open_time_map; // [rsp+68h] [rbp-118h]
  const std::vector<data::TowerSchedule> *__for_range_0; // [rsp+70h] [rbp-110h]
  const data::TowerSchedule *config_schedule; // [rsp+78h] [rbp-108h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+80h] [rbp-100h]
  const std::pair<unsigned int const,TowerFloorRecord> *v56; // [rsp+88h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_index; // [rsp+90h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *tower_floor_record; // [rsp+98h] [rbp-E8h]
  std::shared_ptr<Config> v59; // [rsp+A0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v60; // [rsp+B0h] [rbp-D0h] BYREF
  char v61[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 floor_id:782 64 8 13 last_iter:716 96 8 13 prev_iter:722";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::requestAllData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  PlayerTowerComp::checkAndRefresh(this);
  if ( is_interact )
  {
    if ( *(char *)(((unsigned __int64)&this->is_interact_this_schedule_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_interact_this_schedule_);
    if ( !this->is_interact_this_schedule_ )
    {
      proto::TowerAllDataRsp::set_is_first_interact(rsp_0, 1);
      if ( PlayerTowerComp::trySkipFloorAndGrantReward(this, rsp_0) )
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "requestAllData",
          707);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v60,
          (const char (*)[33])"trySkipFloorAndGrantReward fails");
        common::milog::MiLogStream::~MiLogStream(&v60);
        result = -1;
        goto LABEL_84;
      }
    }
    if ( *(char *)(((unsigned __int64)&this->is_interact_this_schedule_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_interact_this_schedule_, rsp_0, &this->is_interact_this_schedule_);
    this->is_interact_this_schedule_ = 1;
  }
  std::map<unsigned int,TowerMonthlySummary>::rbegin((std::map<unsigned int,TowerMonthlySummary> *const)(v3 + 64));
  std::map<unsigned int,TowerMonthlySummary>::rend((std::map<unsigned int,TowerMonthlySummary> *const)&__for_end);
  if ( std::operator!=<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>>(
         (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > > *)(v3 + 64),
         (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > > *)&__for_end) )
  {
    last_month_summary = &std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > > *const)(v3 + 64))->second;
    v7 = proto::TowerAllDataRsp::mutable_monthly_brief(rsp_0);
    TowerMonthlySummary::toClientBrief(last_month_summary, v7);
  }
  p_tower_monthly_summary_map = &this->tower_monthly_summary_map_;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  *(_DWORD *)(v3 + 48) = this->tower_schedule_id_ - 1;
  *(std::map<unsigned int,TowerMonthlySummary>::iterator *)(v3 + 96) = std::map<unsigned int,TowerMonthlySummary>::find(
                                                                         p_tower_monthly_summary_map,
                                                                         (const std::map<unsigned int,TowerMonthlySummary>::key_type *)(v3 + 48));
  __for_end._M_node = std::map<unsigned int,TowerMonthlySummary>::end(&this->tower_monthly_summary_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >::_Self *)(v3 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >::_Self *)&__for_end) )
  {
    p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> > *const)(v3 + 96))->second;
    schedule_monthly_brief = proto::TowerAllDataRsp::mutable_last_schedule_monthly_brief(rsp_0);
    TowerMonthlySummary::toClientBrief(p_second, schedule_monthly_brief);
  }
  last_floor_index = 0;
  if ( !std::map<unsigned int,TowerFloorRecord>::empty(&this->tower_floor_record_map_) )
  {
    v11._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    *(std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *)(v3 + 96) = std::prev<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>(
                                                                                              v11,
                                                                                              1LL);
    __for_end._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v3 + 96),
           &__for_end) )
    {
      v12 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v3 + 96));
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v12 >> 3) + 0x7FFF8000) <= 3 )
        v12 = __asan_report_load4(v12);
      last_floor_index = *(_DWORD *)v12;
    }
  }
  if ( !PlayerTowerComp::checkFloorEnterable(this, last_floor_index + 1) )
    PlayerTowerComp::findOrAddTowerFloorRecord(this, last_floor_index + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  proto::TowerAllDataRsp::set_tower_schedule_id(rsp_0, this->tower_schedule_id_);
  __for_range = &this->tower_floor_record_map_;
  *(std::map<unsigned int,TowerFloorRecord>::iterator *)(v3 + 96) = std::map<unsigned int,TowerFloorRecord>::begin(&this->tower_floor_record_map_);
  __for_end._M_node = std::map<unsigned int,TowerFloorRecord>::end(__for_range)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v3 + 96),
            &__for_end) )
  {
    v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v3 + 96));
    floor_index = std::get<0ul,unsigned int const,TowerFloorRecord>(v56);
    tower_floor_record = (std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *)std::get<1ul,unsigned int const,TowerFloorRecord>(v56);
    v13 = proto::TowerAllDataRsp::add_tower_floor_record_list(rsp_0);
    TowerFloorRecord::toClient(tower_floor_record, v13);
    std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v3 + 96));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_floor_index_);
  }
  if ( this->daily_floor_index_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v59);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3)
                                                          + 0x7FFF8000) )
    {
      p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->daily_floor_index_;
      __asan_report_load4(&this->daily_floor_index_);
    }
    daily_floor_index = this->daily_floor_index_;
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
      __asan_report_load4(&this->tower_schedule_id_);
    }
    floor_id = TowerExcelConfigMgr::findTowerFloorId(p_tower_config_mgr, this->tower_schedule_id_, daily_floor_index);
    std::shared_ptr<Config>::~shared_ptr(&v59);
    proto::TowerAllDataRsp::set_daily_floor_id(rsp_0, floor_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->daily_level_index_);
    }
  }
  else
  {
    proto::TowerAllDataRsp::set_daily_floor_id(rsp_0, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->daily_level_index_);
    }
  }
  proto::TowerAllDataRsp::set_daily_level_index(rsp_0, this->daily_level_index_);
  v16 = proto::TowerAllDataRsp::mutable_cur_level_record(rsp_0);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  TowerCurLevelRecord::toClient(&this->cur_level_record_, this->tower_schedule_id_, v16);
  v17 = PlayerTowerComp::getNextScheduleChangeTime(this);
  proto::TowerAllDataRsp::set_next_schedule_change_time(rsp_0, v17);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v59);
  v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(v18, this->tower_schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v59);
  if ( schedule_config_ptr && !std::vector<data::TowerSchedule>::empty(&schedule_config_ptr->schedules) )
  {
    v20 = std::vector<data::TowerSchedule>::operator[](&schedule_config_ptr->schedules, 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&v20->open_timestamp >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v20->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
    {
      v20 = (std::vector<data::TowerSchedule>::const_reference)__asan_report_load4(&v20->open_timestamp);
    }
    proto::TowerAllDataRsp::set_schedule_start_time(rsp_0, v20->open_timestamp);
  }
  if ( !schedule_config_ptr )
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v59);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
    next_schedule_id = TowerExcelConfigMgr::findNextTowerScheduleConfigIdByTimestamp(
                         &v21->design_config.txt_config_mgr.tower_config_mgr,
                         now);
    std::shared_ptr<Config>::~shared_ptr(&v59);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v59);
    v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
    schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(
                            &v22->design_config.txt_config_mgr.tower_config_mgr,
                            next_schedule_id);
    std::shared_ptr<Config>::~shared_ptr(&v59);
  }
  if ( schedule_config_ptr )
  {
    proto_floor_open_time_map = proto::TowerAllDataRsp::mutable_floor_open_time_map(rsp_0);
    __for_range_0 = &schedule_config_ptr->schedules;
    __for_begin._M_current = std::vector<data::TowerSchedule>::begin(&schedule_config_ptr->schedules)._M_current;
    *(std::vector<data::TowerSchedule>::const_iterator *)(v3 + 64) = std::vector<data::TowerSchedule>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::TowerSchedule const*,std::vector<data::TowerSchedule>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<const data::TowerSchedule*,std::vector<data::TowerSchedule> > *)(v3 + 64)) )
    {
      config_schedule = __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator*(&__for_begin);
      __for_range_1 = &config_schedule->floor_list;
      *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(&config_schedule->floor_list);
      __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
      {
        v23 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        *(_DWORD *)(v3 + 48) = *v24;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v59);
        v25 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v59);
        p_is_gm_talk_open = &v25->is_gm_talk_open;
        if ( *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_gm_talk_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_gm_talk_open);
        }
        if ( !v25->is_gm_talk_open )
          goto LABEL_71;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        GmComp = Player::getGmComp(this->player_);
        if ( PlayerGmComp::getGmSetValue<unsigned int>(GmComp, 9u) )
          v28 = 1;
        else
LABEL_71:
          v28 = 0;
        std::shared_ptr<Config>::~shared_ptr(&v59);
        if ( v28 )
        {
          v29 = (char *)(v3 + 48);
          v30 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  proto_floor_open_time_map,
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 48));
          v31 = v30;
          v32 = *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
          if ( v32 != 0 && (char)(((unsigned __int8)v30 & 7) + 3) >= v32 )
          {
            LOBYTE(v29) = v32 != 0;
            __asan_report_store4(v30, v29, (_BYTE)v30);
          }
          *v31 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&config_schedule->open_timestamp >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_schedule->open_timestamp >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_schedule->open_timestamp);
          }
          open_timestamp = config_schedule->open_timestamp;
          v34 = (char *)(v3 + 48);
          v35 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  proto_floor_open_time_map,
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 48));
          v36 = v35;
          v37 = *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000);
          if ( v37 != 0 && (char)(((unsigned __int8)v35 & 7) + 3) >= v37 )
          {
            LOBYTE(v34) = v37 != 0;
            __asan_report_store4(v35, v34, (_BYTE)v35);
          }
          *v36 = open_timestamp;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
      }
      __gnu_cxx::__normal_iterator<data::TowerSchedule const*,std::vector<data::TowerSchedule>>::operator++(&__for_begin);
    }
  }
  v38 = std::map<unsigned int,TowerMonthlySummary>::size(&this->tower_monthly_summary_map_);
  proto::TowerAllDataRsp::set_valid_tower_record_num(rsp_0, v38);
  isFinishEntranceFloor = PlayerTowerComp::isFinishEntranceFloor(this);
  proto::TowerAllDataRsp::set_is_finished_entrance_floor(rsp_0, isFinishEntranceFloor);
  result = 0;
LABEL_84:
  if ( v61 == (char *)v3 )
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

// Line 802: range 00000000143713AE-0000000014372762
__int64 __fastcall PlayerTowerComp::selectTowerTeam(
        PlayerTowerComp *const this,
        uint32_t floor_id,
        std::vector<std::vector<long unsigned int>> *p_tower_team_vec)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rcx
  common::milog::MiLogStream *v9; // rcx
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t v11; // edx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v16; // rax
  char v17; // al
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  std::vector<std::vector<long unsigned int>>::size_type v27; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  const unsigned __int64 *M_current; // r15
  std::vector<long unsigned int>::const_iterator v35; // rax
  unsigned __int64 v36; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rcx
  int v41; // r15d
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rcx
  std::vector<TowerTeam>::size_type v45; // rax
  PlayerAvatarComp *v46; // rax
  common::milog::MiLogStream *v47; // rcx
  int v48; // r15d
  std::vector<TowerTeam>::value_type *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rcx
  __int64 result; // rax
  uint32_t total_avatar_count; // [rsp+24h] [rbp-22Ch]
  uint32_t team_id; // [rsp+28h] [rbp-228h]
  int32_t ret; // [rsp+2Ch] [rbp-224h]
  int32_t reta; // [rsp+2Ch] [rbp-224h]
  std::vector<std::vector<long unsigned int>>::iterator __for_begin; // [rsp+30h] [rbp-220h] BYREF
  std::vector<std::vector<long unsigned int>>::iterator __for_end; // [rsp+38h] [rbp-218h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-210h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-208h] BYREF
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+50h] [rbp-200h]
  std::vector<std::vector<long unsigned int>> *__for_range; // [rsp+58h] [rbp-1F8h]
  std::vector<std::vector<long unsigned int>> *__for_range_1; // [rsp+60h] [rbp-1F0h]
  const std::vector<long unsigned int> *guid_vec_0; // [rsp+68h] [rbp-1E8h]
  const std::vector<long unsigned int> *guid_vec; // [rsp+70h] [rbp-1E0h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+78h] [rbp-1D8h]
  common::milog::MiLogStream v70; // [rsp+80h] [rbp-1D0h] BYREF
  char v71[432]; // [rsp+A0h] [rbp-1B0h] BYREF

  v4 = (unsigned __int64)v71;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(384LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 4 15 floor_index:816 48 4 7 ret:841 64 4 12 floor_id:801 80 8 8 guid:874 112 16 25 cur_towe"
                        "r_dungeon_ptr:833 144 16 21 formal_avatar_ptr:877 176 24 23 temp_tower_team_vec:892 240 32 14 to"
                        "wer_team:898 304 48 18 total_guid_set:863";
  *(_QWORD *)(v4 + 16) = PlayerTowerComp::selectTowerTeam;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = -218959360;
  v6[536862727] = 62194;
  v6[536862728] = -219021312;
  v6[536862729] = 62194;
  v6[536862731] = -202116109;
  *(_DWORD *)(v4 + 64) = floor_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x2Au) )
  {
    common::milog::MiLogStream::create(
      &v70,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerTeam",
      806);
    v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v70,
           (const char (*)[29])"open state not open. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v70);
    v3 = 141;
    goto LABEL_101;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( !this->tower_schedule_id_ )
  {
    common::milog::MiLogStream::create(
      &v70,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerTeam",
      812);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v70,
           (const char (*)[24])"tower not open. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v70);
    v3 = 1521;
    goto LABEL_101;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 144));
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144))->design_config.txt_config_mgr.tower_config_mgr;
  v11 = *(_DWORD *)(v4 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  *(_DWORD *)(v4 + 32) = TowerExcelConfigMgr::findTowerFloorIndex(p_tower_config_mgr, this->tower_schedule_id_, v11);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
  if ( *(_DWORD *)(v4 + 32) )
  {
    ret = PlayerTowerComp::checkFloorEnterable(this, *(_DWORD *)(v4 + 32));
    if ( ret )
    {
      v3 = ret;
      goto LABEL_101;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInTransfer(SceneComp) )
      goto LABEL_31;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v16 = Player::getSceneComp(this->player_);
    if ( PlayerSceneComp::getEnterSceneState(v16) > ENTER_SCENE_NOTIFY )
      v17 = 1;
    else
LABEL_31:
      v17 = 0;
    if ( v17 )
    {
      v3 = 170;
      goto LABEL_101;
    }
    std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v4 + 112));
    if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 112)) )
    {
      v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
      if ( DungeonScene::getDungeonResult(v18) == DUNGEON_RESULT_NONE )
      {
        v3 = 158;
LABEL_100:
        std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 112));
        goto LABEL_101;
      }
    }
    if ( !TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
    {
      *(_DWORD *)(v4 + 48) = PlayerTowerComp::internalResetCurLevelRecord(this);
      if ( *(_DWORD *)(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "selectTowerTeam",
          844);
        v20 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                &v70,
                (const char (*)[39])"internalResetCurLevelRecord fail, ret:");
        v21 = common::milog::MiLogStream::operator<<<int,(int *)0>(v20, (const int *)(v4 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v22, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v70);
        v3 = *(_DWORD *)(v4 + 48);
        goto LABEL_100;
      }
      PlayerTowerComp::notifyTowerCurLevelRecord(this);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 144));
    v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(
                         &v23->design_config.txt_config_mgr.tower_config_mgr,
                         *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 144));
    if ( floor_config_ptr )
    {
      v27 = std::vector<std::vector<unsigned long>>::size(p_tower_team_vec);
      if ( *(_BYTE *)(((unsigned __int64)&floor_config_ptr->team_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&floor_config_ptr->team_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&floor_config_ptr->team_num);
      }
      if ( v27 == floor_config_ptr->team_num )
      {
        total_avatar_count = 0;
        std::set<unsigned long>::set((std::set<long unsigned int> *const)(v4 + 304));
        __for_range = p_tower_team_vec;
        __for_begin._M_current = std::vector<std::vector<unsigned long>>::begin(p_tower_team_vec)._M_current;
        __for_end._M_current = std::vector<std::vector<unsigned long>>::end(p_tower_team_vec)._M_current;
        while ( __gnu_cxx::operator!=<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>(
                  &__for_begin,
                  &__for_end) )
        {
          guid_vec = __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator*(&__for_begin);
          if ( std::vector<unsigned long>::empty(guid_vec) || std::vector<unsigned long>::size(guid_vec) > 4 )
          {
            common::milog::MiLogStream::create(
              &v70,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/tower/player_tower_comp.cpp",
              "selectTowerTeam",
              869);
            common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v70,
              (const char (*)[25])"avatar num in team error");
            common::milog::MiLogStream::~MiLogStream(&v70);
            v3 = -1;
            goto LABEL_99;
          }
          total_avatar_count += std::vector<unsigned long>::size(guid_vec);
          M_current = std::vector<unsigned long>::end(guid_vec)._M_current;
          v35._M_current = std::vector<unsigned long>::begin(guid_vec)._M_current;
          std::set<unsigned long>::insert<__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>>(
            (std::set<long unsigned int> *const)(v4 + 304),
            v35,
            (__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> >)M_current);
          __for_range_0 = guid_vec;
          __for_begin_0._M_current = std::vector<unsigned long>::begin(guid_vec)._M_current;
          __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
          {
            v36 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
            if ( *(_BYTE *)((v36 >> 3) + 0x7FFF8000) )
              v36 = __asan_report_load8(v36);
            *(_QWORD *)(v4 + 80) = *(_QWORD *)v36;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            AvatarComp = Player::getAvatarComp(this->player_);
            PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v4 + 144), (uint64_t)AvatarComp);
            if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 144)) )
            {
              common::milog::MiLogStream::create(
                &v70,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/tower/player_tower_comp.cpp",
                "selectTowerTeam",
                880);
              v38 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v70,
                      (const char (*)[31])"formal avatar not found. guid:");
              v39 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v38,
                      (const unsigned __int64 *)(v4 + 80));
              v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v40, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v70);
              v3 = 104;
              v41 = 0;
            }
            else
            {
              v41 = 1;
            }
            std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 144));
            if ( v41 != 1 )
              goto LABEL_99;
            __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
          }
          __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator++(&__for_begin);
        }
        if ( total_avatar_count == std::set<unsigned long>::size((const std::set<long unsigned int> *const)(v4 + 304)) )
        {
          std::vector<TowerTeam>::vector((std::vector<TowerTeam> *const)(v4 + 176));
          v45 = std::vector<std::vector<unsigned long>>::size(p_tower_team_vec);
          std::vector<TowerTeam>::reserve((std::vector<TowerTeam> *const)(v4 + 176), v45);
          team_id = 0;
          __for_range_1 = p_tower_team_vec;
          __for_begin_0._M_current = (const unsigned __int64 *)std::vector<std::vector<unsigned long>>::begin(p_tower_team_vec)._M_current;
          __for_end_0._M_current = (const unsigned __int64 *)std::vector<std::vector<unsigned long>>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>(
                    (const __gnu_cxx::__normal_iterator<std::vector<long unsigned int>*,std::vector<std::vector<long unsigned int>> > *)&__for_begin_0,
                    (const __gnu_cxx::__normal_iterator<std::vector<long unsigned int>*,std::vector<std::vector<long unsigned int>> > *)&__for_end_0) )
          {
            guid_vec_0 = __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator*((const __gnu_cxx::__normal_iterator<std::vector<long unsigned int>*,std::vector<std::vector<long unsigned int>> > *const)&__for_begin_0);
            ++team_id;
            TowerTeam::TowerTeam((TowerTeam *const)(v4 + 240));
            *(_DWORD *)(v4 + 240) = team_id;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            v46 = Player::getAvatarComp(this->player_);
            if ( PlayerAvatarComp::addMirrorAvatars(
                   v46,
                   guid_vec_0,
                   (std::vector<long unsigned int> *)(v4 + 248),
                   AVATAR_SNAPSHOT_TYPE_NONE) )
            {
              common::milog::MiLogStream::create(
                &v70,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/tower/player_tower_comp.cpp",
                "selectTowerTeam",
                902);
              v47 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      &v70,
                      (const char (*)[31])"addMirrorAvatars fail, player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v47, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v70);
              PlayerTowerComp::internalResetCurLevelRecord(this);
              v3 = -1;
              v48 = 0;
            }
            else
            {
              v49 = std::move<TowerTeam &>((TowerTeam *)(v4 + 240));
              std::vector<TowerTeam>::push_back((std::vector<TowerTeam> *const)(v4 + 176), v49);
              v48 = 1;
            }
            TowerTeam::~TowerTeam((TowerTeam *const)(v4 + 240));
            if ( v48 != 1 )
              goto LABEL_98;
            __gnu_cxx::__normal_iterator<std::vector<unsigned long> *,std::vector<std::vector<unsigned long>>>::operator++((__gnu_cxx::__normal_iterator<std::vector<long unsigned int>*,std::vector<std::vector<long unsigned int>> > *const)&__for_begin_0);
          }
          reta = PlayerTowerComp::internalCreateCurLevelRecord(
                   this,
                   *(_DWORD *)(v4 + 32),
                   (std::vector<TowerTeam> *)(v4 + 176));
          if ( reta )
          {
            common::milog::MiLogStream::create(
              &v70,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/tower/player_tower_comp.cpp",
              "selectTowerTeam",
              912);
            v50 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v70,
                    (const char (*)[48])"internalCreateCurLevelRecord fail, floor_index:");
            v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v50,
                    (const unsigned int *)(v4 + 32));
            v52 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v51, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v52, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v70);
            PlayerTowerComp::internalResetCurLevelRecord(this);
            v3 = reta;
          }
          else
          {
            PlayerTowerComp::notifyTowerCurLevelRecord(this);
            v3 = 0;
          }
LABEL_98:
          std::vector<TowerTeam>::~vector((std::vector<TowerTeam> *const)(v4 + 176));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v70,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "selectTowerTeam",
            888);
          v42 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  &v70,
                  (const char (*)[34])"duplicate avatar, tower_team_vec:");
          v43 = common::milog::MiLogStream::operator<<<std::vector<unsigned long>>(v42, p_tower_team_vec);
          v44 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v43, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v44, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v70);
          v3 = 106;
        }
LABEL_99:
        std::set<unsigned long>::~set((std::set<long unsigned int> *const)(v4 + 304));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v70,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "selectTowerTeam",
          859);
        v28 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v70,
                (const char (*)[27])"invalid team num floor_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v4 + 64));
        v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])" team_num:");
        __for_end_0._M_current = (const unsigned __int64 *)std::vector<std::vector<unsigned long>>::size(p_tower_team_vec);
        v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v30,
                (const unsigned __int64 *)&__for_end_0);
        v32 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v32, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v70);
        v3 = 1525;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v70,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "selectTowerTeam",
        853);
      v24 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v70,
              (const char (*)[18])"invalid floor_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 64));
      v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v26, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v70);
      v3 = 5;
    }
    goto LABEL_100;
  }
  common::milog::MiLogStream::create(
    &v70,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/tower/player_tower_comp.cpp",
    "selectTowerTeam",
    819);
  v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v70,
          (const char (*)[34])"floor config not found, floor_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
  v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v14, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v70);
  v3 = 5;
LABEL_101:
  result = v3;
  if ( v71 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 922: range 0000000014372764-00000000143729D2
int32_t __cdecl PlayerTowerComp::surrenderTowerProgress(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  DungeonScene *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 21 dungeon_scene_ptr:923";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::surrenderTowerProgress;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  PlayerTowerComp::getCurDungeonScene((const PlayerTowerComp *const)(v1 + 32));
  if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 32)) )
  {
    v4 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( DungeonScene::getDungeonResult(v4) == DUNGEON_RESULT_NONE )
    {
      v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      DungeonScene::settle(v6, DUNGEON_RESULT_CANCEL);
    }
  }
  ret = PlayerTowerComp::internalResetCurLevelRecord(this);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "surrenderTowerProgress",
      931);
    v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v13,
           (const char (*)[52])"internalResetCurLevelRecord fail, cur_level_record:");
    v8 = operator<<(v7, &this->cur_level_record_);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v13);
    v10 = ret;
  }
  else
  {
    PlayerTowerComp::notifyTowerCurLevelRecord(this);
    v10 = 0;
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 32));
  result = v10;
  if ( v14 == (char *)v1 )
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

// Line 940: range 0000000014372A22-00000000143744DD
int32_t __cdecl PlayerTowerComp::enterTowerLevelDungeon(
        PlayerTowerComp *const this,
        uint32_t scene_id,
        uint32_t enter_point_id,
        proto::TowerEnterLevelRsp *rsp_0)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  char v7; // al
  common::milog::MiLogStream *v8; // rbx
  bool isEmpty; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  int32_t v14; // r14d
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  PlayerBasicComp *BasicComp; // rax
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t cur_floor_index; // edx
  google::protobuf::uint32 TowerFloorId; // eax
  FeatureSwitchMgr *p_feature_switch_mgr; // rdi
  uint32_t cur_level_index; // edx
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  const TowerExcelConfigMgr *p_cur_level_record; // rdi
  uint32_t v30; // edx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rcx
  const TowerExcelConfigMgr *p_cur_level_index; // rdi
  uint32_t v37; // ecx
  uint32_t v38; // edx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rcx
  google::protobuf::RepeatedField<unsigned int> *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rcx
  PlayerDungeonComp *v51; // r14
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rcx
  PlayerTowerComp::enterTowerLevelDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> v57; // si
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  DungeonScene *v60; // rax
  DungeonScene *v61; // r14
  common::milog::MiLogStream *v62; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rcx
  __int64 v66; // rsi
  __int64 v67; // rdx
  DungeonScene *v68; // rcx
  DungeonScene *v69; // r14
  TowerExcelConfigMgr *v70; // rcx
  bool isIndexEntranceFloor; // al
  uint32_t Uid; // eax
  __int64 v73; // rax
  __int64 v74; // r14
  time_t Now; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rsi
  uint32_t tower_schedule_id; // ecx
  char v80; // al
  int32_t result; // eax
  std::string v82; // [rsp+0h] [rbp-3F0h]
  bool isTowerFloorClosed; // [rsp+17h] [rbp-3D9h]
  std::less<unsigned int> __comp; // [rsp+3Ah] [rbp-3B6h] BYREF
  std::allocator<std::pair<unsigned int const,unsigned int> > __a; // [rsp+3Bh] [rbp-3B5h] BYREF
  proto::DungeonDataType __x; // [rsp+3Ch] [rbp-3B4h] BYREF
  unsigned int __y; // [rsp+40h] [rbp-3B0h] BYREF
  proto::DungeonDataType v90; // [rsp+44h] [rbp-3ACh] BYREF
  unsigned int FloorLevelConfigId; // [rsp+48h] [rbp-3A8h] BYREF
  int32_t ret; // [rsp+4Ch] [rbp-3A4h]
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+50h] [rbp-3A0h]
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+58h] [rbp-398h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+60h] [rbp-390h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+68h] [rbp-388h]
  std::shared_ptr<Config> v97; // [rsp+70h] [rbp-380h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+80h] [rbp-370h] BYREF
  EnterDungeonOption v99; // [rsp+A0h] [rbp-350h] BYREF
  common::milog::MiLogStream v100; // [rsp+C0h] [rbp-330h] BYREF
  char v101[784]; // [rsp+E0h] [rbp-310h] BYREF

  *(&v82._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v101;
  v82._M_string_length = (std::string::size_type)v101;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_4(736LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "7 48 1 10 holder:954 64 4 14 dungeon_id:979 80 4 12 level_id:986 96 16 26 old_dungeon_scene_ptr:"
                        "1008 128 24 30 candiate_tower_buff_id_vec:987 192 48 24 level_config_id_map:1003 272 392 7 ss:1043";
  *(_QWORD *)(v4 + 16) = PlayerTowerComp::enterTowerLevelDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -234881024;
  v6[536862725] = -218959118;
  v6[536862727] = -219021312;
  v6[536862728] = 62194;
  v6[536862740] = -218103808;
  v6[536862741] = -202116109;
  v6[536862742] = -202116109;
  if ( TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&this->cur_level_record_.is_floor_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->cur_level_record_.is_floor_finished);
  if ( this->cur_level_record_.is_floor_finished )
LABEL_8:
    v7 = 1;
  else
    v7 = 0;
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v100,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "enterTowerLevelDungeon",
      943);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v100,
           (const char (*)[31])"no cur level record, is_empty:");
    isEmpty = TowerCurLevelRecord::isEmpty(&this->cur_level_record_);
    v10 = common::milog::MiLogStream::operator<<(v8, isEmpty);
    v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v10,
            (const char (*)[20])" is_floor_finished:");
    if ( *(char *)(((unsigned __int64)&this->cur_level_record_.is_floor_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->cur_level_record_.is_floor_finished);
    v12 = common::milog::MiLogStream::operator<<(v11, this->cur_level_record_.is_floor_finished);
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_15:
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v100);
    v14 = 1523;
    goto LABEL_115;
  }
  if ( !PlayerTowerComp::isInTowerLevel(this) )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_before_enter_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->schedule_id_before_enter_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->schedule_id_before_enter_level_);
  }
  if ( !this->schedule_id_before_enter_level_ )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( this->tower_schedule_id_ != this->schedule_id_before_enter_level_ )
    v15 = 1;
  else
LABEL_24:
    v15 = 0;
  if ( v15 )
  {
    common::milog::MiLogStream::create(
      &v100,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "enterTowerLevelDungeon",
      950);
    v16 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v100,
            (const char (*)[20])"tower_schedule_id_:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->tower_schedule_id_);
    v18 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v17,
            (const char (*)[33])" schedule_id_before_enter_level:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v18,
            &this->schedule_id_before_enter_level_);
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v100, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x974u, v82);
  std::string::~string(&v100);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v97);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v97)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->cur_level_record_;
    __asan_report_load4(&this->cur_level_record_);
  }
  cur_floor_index = this->cur_level_record_.cur_floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  TowerFloorId = TowerExcelConfigMgr::findTowerFloorId(p_tower_config_mgr, this->tower_schedule_id_, cur_floor_index);
  proto::TowerEnterLevelRsp::set_floor_id(
    *((proto::TowerEnterLevelRsp *const *)&v82._anon_0._M_allocated_capacity + 1),
    TowerFloorId);
  std::shared_ptr<Config>::~shared_ptr(&v97);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_level_record_.cur_level_index);
  }
  proto::TowerEnterLevelRsp::set_level_index(
    *((proto::TowerEnterLevelRsp *const *)&v82._anon_0._M_allocated_capacity + 1),
    this->cur_level_record_.cur_level_index);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v97);
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v97)->feature_switch_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                         + 0x7FFF8000) )
  {
    p_feature_switch_mgr = (FeatureSwitchMgr *)&this->cur_level_record_.cur_level_index;
    __asan_report_load4(&this->cur_level_record_.cur_level_index);
  }
  cur_level_index = this->cur_level_record_.cur_level_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_feature_switch_mgr = (FeatureSwitchMgr *)&this->cur_level_record_;
    __asan_report_load4(&this->cur_level_record_);
  }
  isTowerFloorClosed = FeatureSwitchMgr::isTowerFloorClosed(
                         p_feature_switch_mgr,
                         this->cur_level_record_.cur_floor_index,
                         cur_level_index);
  std::shared_ptr<Config>::~shared_ptr(&v97);
  if ( isTowerFloorClosed )
  {
    common::milog::MiLogStream::create(
      &v100,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "enterTowerLevelDungeon",
      961);
    v26 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            &v100,
            (const char (*)[53])"[FEATURE_SWITCH] tower feature closed, floor_index: ");
    v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v26,
            &this->cur_level_record_.cur_floor_index);
    v28 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v27, (const char (*)[15])" level_index: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v28,
      &this->cur_level_record_.cur_level_index);
    common::milog::MiLogStream::~MiLogStream(&v100);
    v14 = 142;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v97);
    p_cur_level_record = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v97)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_cur_level_record = (const TowerExcelConfigMgr *)&this->cur_level_record_;
      __asan_report_load4(&this->cur_level_record_);
    }
    v30 = this->cur_level_record_.cur_floor_index;
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_cur_level_record = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
      __asan_report_load4(&this->tower_schedule_id_);
    }
    floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(p_cur_level_record, this->tower_schedule_id_, v30);
    std::shared_ptr<Config>::~shared_ptr(&v97);
    if ( floor_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v97);
      p_cur_level_index = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v97)->design_config.txt_config_mgr.tower_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                             + 0x7FFF8000) )
      {
        p_cur_level_index = (const TowerExcelConfigMgr *)&this->cur_level_record_.cur_level_index;
        __asan_report_load4(&this->cur_level_record_.cur_level_index);
      }
      v37 = this->cur_level_record_.cur_level_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_cur_level_index = (const TowerExcelConfigMgr *)&this->cur_level_record_;
        __asan_report_load4(&this->cur_level_record_);
      }
      v38 = this->cur_level_record_.cur_floor_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_cur_level_index = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
        __asan_report_load4(&this->tower_schedule_id_);
      }
      level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(
                           p_cur_level_index,
                           this->tower_schedule_id_,
                           v38,
                           v37);
      std::shared_ptr<Config>::~shared_ptr(&v97);
      if ( level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->dungeon_id);
        }
        *(_DWORD *)(v4 + 64) = level_config_ptr->dungeon_id;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        DungeonComp = Player::getDungeonComp(this->player_);
        if ( PlayerDungeonComp::isDestSceneDungeon(DungeonComp, *(_DWORD *)(v4 + 64)) )
        {
          v14 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&level_config_ptr->level_id);
          }
          *(_DWORD *)(v4 + 80) = level_config_ptr->level_id;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 128));
          if ( PlayerTowerComp::getRandomLevelBuffs(this, *(_DWORD *)(v4 + 80), (std::vector<unsigned int> *)(v4 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v100,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/tower/player_tower_comp.cpp",
              "enterTowerLevelDungeon",
              990);
            v44 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v100,
                    (const char (*)[36])"getRandomLevelBuffs fail, level_id:");
            v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v44,
                    (const unsigned int *)(v4 + 80));
            v46 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v46, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v100);
            v14 = -1;
          }
          else
          {
            v47 = proto::TowerEnterLevelRsp::mutable_tower_buff_id_list(*((proto::TowerEnterLevelRsp *const *)&v82._anon_0._M_allocated_capacity
                                                                        + 1));
            common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
              (const std::vector<unsigned int> *)(v4 + 128),
              v47);
            ret = PlayerTowerComp::resetCurLevelMirrorAvatarBeforeEnterLevel(this);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v100,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/tower/player_tower_comp.cpp",
                "enterTowerLevelDungeon",
                999);
              v48 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                      &v100,
                      (const char (*)[66])"resetCurLevelMirrorAvatarBeforeEnterLevel fail, cur_level_record:");
              v49 = operator<<(v48, &this->cur_level_record_);
              v50 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v49, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              operator<<(v50, this->player_);
              common::milog::MiLogStream::~MiLogStream(&v100);
              v14 = ret;
            }
            else
            {
              __x = DUNGEON_DATA_TOWER_MONTHLY_LEVEL_CONFIG_ID;
              __y = PlayerTowerComp::getMonthlyLevelConfigId(this);
              std::pair<unsigned int const,unsigned int>::pair<proto::DungeonDataType,unsigned int,true>(
                (std::pair<unsigned int const,unsigned int> *const)&v97,
                &__x,
                &__y);
              v90 = DUNGEON_DATA_TOWER_FLOOR_LEVEL_CONFIG_ID;
              FloorLevelConfigId = PlayerTowerComp::getFloorLevelConfigId(this);
              std::pair<unsigned int const,unsigned int>::pair<proto::DungeonDataType,unsigned int,true>(
                (std::pair<unsigned int const,unsigned int> *const)&v97._M_refcount,
                &v90,
                &FloorLevelConfigId);
              std::allocator<std::pair<unsigned int const,unsigned int>>::allocator(&__a);
              std::map<unsigned int,unsigned int>::map(
                (std::map<unsigned int,unsigned int> *const)(v4 + 192),
                (std::initializer_list<std::pair<unsigned int const,unsigned int> >)__PAIR128__(2LL, &v97),
                &__comp,
                &__a);
              std::allocator<std::pair<unsigned int const,unsigned int>>::~allocator(&__a);
              PlayerTowerComp::getCurDungeonScene((const PlayerTowerComp *const)(v4 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v51 = Player::getDungeonComp(this->player_);
              memset(&v99, 0, sizeof(v99));
              EnterDungeonOption::EnterDungeonOption(&v99);
              PlayerDungeonComp::enterDungeon(
                &__in,
                v51,
                *(_DWORD *)(v4 + 64),
                scene_id,
                enter_point_id,
                (const std::map<unsigned int,unsigned int> *)(v4 + 192),
                v99);
              enter_dungeon_retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
              dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
              if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4(enter_dungeon_retcode);
              }
              if ( *enter_dungeon_retcode )
              {
                common::milog::MiLogStream::create(
                  &v100,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/tower/player_tower_comp.cpp",
                  "enterTowerLevelDungeon",
                  1013);
                v52 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        &v100,
                        (const char (*)[31])"enterDungeon fail, dungeon_id:");
                v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v52,
                        (const unsigned int *)(v4 + 64));
                v54 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v53,
                        (const char (*)[24])" enter_dungeon_retcode:");
                v55 = common::milog::MiLogStream::operator<<<int,(int *)0>(v54, enter_dungeon_retcode);
                v56 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v55, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v56, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v100);
                if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                          + 0x7FFF8000) )
                {
                  __asan_report_load4(enter_dungeon_retcode);
                }
                v14 = *enter_dungeon_retcode;
              }
              else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr) )
              {
                v14 = 0;
              }
              else
              {
                v57.gap0[0] = v4 + 96;
                if ( std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 96)) )
                {
                  v58 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  if ( DungeonScene::getDungeonResult(v58) == DUNGEON_RESULT_NONE )
                  {
                    v60 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                    v57.gap0[0] = 3;
                    DungeonScene::settle(v60, DUNGEON_RESULT_CANCEL);
                  }
                }
                v61 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<PlayerTowerComp::enterTowerLevelDungeon(unsigned int,unsigned int,proto::TowerEnterLevelRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1},void,void>(
                  (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v100,
                  v57);
                DungeonScene::registerDungeonSettleCallback(v61, (DungeonSettleCallback *)&v100);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v100);
                std::weak_ptr<DungeonScene>::operator=<DungeonScene>(&this->cur_dungeon_scene_wtr_, dungeon_scene_ptr);
                common::milog::MiLogStream::create(
                  &v100,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/tower/player_tower_comp.cpp",
                  "enterTowerLevelDungeon",
                  1034);
                v62 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v100,
                        (const char (*)[19])"enter tower level:");
                v63 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                v64 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v62, v63);
                v65 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v64, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v65, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v100);
                v66 = ((_BYTE)this - 52) & 7;
                v67 = (*(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v66 >= *(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000));
                if ( (_BYTE)v67 )
                  __asan_report_store1(&this->is_hurt_, v66, v67);
                this->is_hurt_ = 0;
                std::unordered_set<unsigned int>::clear(&this->gadget_hurt_set_);
                v68 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->monster_level >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&level_config_ptr->monster_level >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&level_config_ptr->monster_level);
                }
                DungeonScene::setReviseLevel(v68, level_config_ptr->monster_level);
                v69 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                ServiceBox::findService<GameserverService>();
                GameserverService::getConfig((GameserverService *const)&v97);
                v70 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v97)->design_config.txt_config_mgr.tower_config_mgr;
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->cur_level_record_);
                }
                isIndexEntranceFloor = TowerExcelConfigMgr::isIndexEntranceFloor(
                                         v70,
                                         this->cur_level_record_.cur_floor_index);
                DungeonScene::setEnableFightStatistics(v69, !isIndexEntranceFloor);
                std::shared_ptr<Config>::~shared_ptr(&v97);
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 272);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                Uid = Player::getUid(this->player_);
                v73 = std::ostream::operator<<(v4 + 288, Uid);
                v74 = std::operator<<<std::char_traits<char>>(v73, "-");
                Now = common::tools::TimeUtils::getNow();
                v76 = std::ostream::operator<<(v74, Now);
                v77 = std::operator<<<std::char_traits<char>>(v76, "-");
                std::ostream::operator<<(
                  v77,
                  ++PlayerTowerComp::enterTowerLevelDungeon(unsigned int,unsigned int,proto::TowerEnterLevelRsp &)::transaction_id);
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v100, v4 + 272);
                std::string::operator=(&this->cur_level_record_.cur_tower_level_transaction, &v100);
                std::string::~string(&v100);
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_team_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_team_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_store4(&this->cur_level_record_.cur_tower_team_id, &v100, (_BYTE)this + 72);
                }
                this->cur_level_record_.cur_tower_team_id = 1;
                std::unordered_set<unsigned int>::clear(&this->cur_level_record_.failed_cond_set);
                v78 = 0LL;
                PlayerTowerComp::logTowerLevelEnter(this, 0);
                if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->tower_schedule_id_);
                }
                tower_schedule_id = this->tower_schedule_id_;
                v80 = *(_BYTE *)(((unsigned __int64)&this->schedule_id_before_enter_level_ >> 3) + 0x7FFF8000);
                if ( v80 != 0 && v80 <= 3 )
                {
                  LOBYTE(v78) = v80 != 0;
                  __asan_report_store4(&this->schedule_id_before_enter_level_, v78, (_BYTE)this - 56);
                }
                this->schedule_id_before_enter_level_ = tower_schedule_id;
                v14 = 0;
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 272);
              }
              std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
              std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 96));
              std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 192));
            }
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 128));
        }
        goto LABEL_114;
      }
      common::milog::MiLogStream::create(
        &v100,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "enterTowerLevelDungeon",
        975);
      v39 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v100,
              (const char (*)[49])"tower_level_config not found! tower_schedule_id:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &this->tower_schedule_id_);
      v41 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v40,
              (const char (*)[19])" cur_level_record:");
      v42 = operator<<(v41, &this->cur_level_record_);
      v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v100,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "enterTowerLevelDungeon",
        968);
      v31 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v100,
              (const char (*)[43])"floor_config not found! tower_schedule_id:");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->tower_schedule_id_);
      v33 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v32,
              (const char (*)[19])" cur_level_record:");
      v34 = operator<<(v33, &this->cur_level_record_);
      v35 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v34, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v35, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v100);
    v14 = -1;
  }
LABEL_114:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
LABEL_115:
  result = v14;
  if ( v82._M_string_length == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = 0;
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
    *(_DWORD *)((v4 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 1027: range 00000000143729D4-0000000014372A21
void __cdecl PlayerTowerComp::enterTowerLevelDungeon(unsigned int,unsigned int,proto::TowerEnterLevelRsp &)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#1}::operator()(
        const PlayerTowerComp::enterTowerLevelDungeon::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  PlayerTowerComp *TowerComp; // rbx
  proto::TowerLevelEndNotify *v5; // rdx

  TowerComp = Player::getTowerComp(player);
  v5 = proto::DungeonSettleNotify::mutable_tower_level_end_notify(notify);
  PlayerTowerComp::onDungeonSettle(TowerComp, dungeon_scene, v5);
};

// Line 1056: range 00000000143744DE-0000000014374F70
__int64 __fastcall PlayerTowerComp::selectTowerBuff(PlayerTowerComp *const this, uint32_t tower_buff_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t cur_level_index; // ecx
  uint32_t cur_floor_index; // edx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  __int64 v25; // rsi
  common::milog::MiLogStream *v26; // rax
  uint32_t v27; // ecx
  char v28; // dl
  bool v29; // dl
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t NextServerBuffUid; // edx
  char v32; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const std::vector<unsigned int> *candiate_tower_buff_id_vec; // [rsp+20h] [rbp-C0h]
  const data::TowerBuffExcelConfig *tower_buff_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v37; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-A0h] BYREF
  char v39[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 17 cur_level_id:1072 48 4 18 tower_buff_id:1055 64 8 9 iter:1078";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::selectTowerBuff;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = tower_buff_id;
  if ( !PlayerTowerComp::isInTowerLevel(this) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerBuff",
      1059);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v38, (const char (*)[28])off_25320420);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 1530LL;
    goto LABEL_45;
  }
  if ( TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerBuff",
      1064);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v38,
           (const char (*)[29])"no cur level record, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 1523LL;
    goto LABEL_45;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_level_record_.cur_tower_buff_id);
  }
  if ( this->cur_level_record_.cur_tower_buff_id )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerBuff",
      1069);
    v8 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v38,
           (const char (*)[42])"already has tower buff, cur_level_record:");
    v9 = operator<<(v8, &this->cur_level_record_);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 1528LL;
    goto LABEL_45;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                         + 0x7FFF8000) )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->cur_level_record_.cur_level_index;
    __asan_report_load4(&this->cur_level_record_.cur_level_index);
  }
  cur_level_index = this->cur_level_record_.cur_level_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->cur_level_record_;
    __asan_report_load4(&this->cur_level_record_);
  }
  cur_floor_index = this->cur_level_record_.cur_floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  *(_DWORD *)(v2 + 32) = TowerExcelConfigMgr::findTowerLevelId(
                           p_tower_config_mgr,
                           this->tower_schedule_id_,
                           cur_floor_index,
                           cur_level_index);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( !*(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerBuff",
      1075);
    v14 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            &v38,
            (const char (*)[42])"cur_level_id not found, cur_level_record:");
    v15 = operator<<(v14, &this->cur_level_record_);
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v16, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 0xFFFFFFFFLL;
    goto LABEL_45;
  }
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                               &this->daily_level_buff_map_,
                                                                               (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
  __y._M_node = std::map<unsigned int,std::vector<unsigned int>>::end(&this->daily_level_buff_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerBuff",
      1081);
    v17 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v38,
            (const char (*)[40])"getRandomLevelBuffs fail, cur_level_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
    v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_31:
    operator<<(v19, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 0xFFFFFFFFLL;
    goto LABEL_45;
  }
  candiate_tower_buff_id_vec = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v2 + 64))->second;
  if ( !common::tools::MiscUtils::isContains<unsigned int>(candiate_tower_buff_id_vec, (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerBuff",
      1087);
    v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v38, (const char (*)[15])"tower_buff_id:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v21, (const char (*)[41])off_25320600);
    v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, candiate_tower_buff_id_vec);
    v19 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_31;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
  v25 = *(unsigned int *)(v2 + 48);
  tower_buff_config_ptr = data::TowerExcelConfigMgrBase::findTowerBuffExcelConfig(
                            &v24->design_config.txt_config_mgr.tower_config_mgr,
                            v25);
  std::shared_ptr<Config>::~shared_ptr(&v37);
  if ( tower_buff_config_ptr )
  {
    v27 = *(_DWORD *)(v2 + 48);
    v28 = *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3) + 0x7FFF8000);
    LOBYTE(v25) = v28 != 0;
    v29 = v28 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v28;
    if ( v29 )
      __asan_report_store4(&this->cur_level_record_.cur_tower_buff_id, v25, v29);
    this->cur_level_record_.cur_tower_buff_id = v27;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    NextServerBuffUid = PlayerAvatarComp::getNextServerBuffUid(AvatarComp);
    v32 = *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_uid >> 3) + 0x7FFF8000);
    if ( v32 != 0 && v32 <= 3 )
    {
      LOBYTE(v25) = v32 != 0;
      __asan_report_store4(&this->cur_level_record_.cur_tower_buff_uid, v25, NextServerBuffUid);
    }
    this->cur_level_record_.cur_tower_buff_uid = NextServerBuffUid;
    PlayerTowerComp::addTowerTeamBuff(this, *(_DWORD *)(v2 + 48));
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "selectTowerBuff",
      1093);
    v26 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v38,
            (const char (*)[46])"findTowerBuffExcelConfig fail, tower_buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v38);
    result = 5LL;
  }
LABEL_45:
  if ( v39 == (char *)v2 )
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

// Line 1105: range 0000000014374F72-00000000143768EF
int32_t __cdecl PlayerTowerComp::onDungeonSettle(
        PlayerTowerComp *const this,
        DungeonScene *dungeon_scene,
        proto::TowerLevelEndNotify *notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  int32_t v10; // r14d
  bool v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  DungeonResult DungeonResult; // eax
  TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t v19; // edx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // r15d
  uint32_t v24; // r14d
  DungeonScene *v25; // rsi
  common::milog::MiLogStream *v26; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::vector<unsigned int>::size_type v32; // r14
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rdx
  common::milog::MiLogStream *v36; // rax
  std::vector<unsigned int>::const_reference v37; // rax
  _DWORD *v38; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  __int64 v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  __int64 v43; // r14
  char *v44; // rsi
  PlayerBasicComp *v45; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v46; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  bool isIdEntranceFloor; // r14
  TowerExcelConfigMgr *v49; // rdi
  uint32_t v50; // ecx
  uint32_t v51; // edx
  PlayerItemComp *ItemComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  Player *v58; // r14
  char v59; // cl
  char v60; // dl
  __int64 v61; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  bool v63; // r14
  const DungeonFightStatistic *DungeonFightStatistic; // rdx
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v67; // [rsp+0h] [rbp-360h]
  std::string v68; // [rsp+0h] [rbp-360h]
  bool is_win; // [rsp+27h] [rbp-339h]
  data::ItemLimitType item_limit_type; // [rsp+28h] [rbp-338h]
  uint32_t floor_id; // [rsp+2Ch] [rbp-334h]
  uint32_t config_id; // [rsp+30h] [rbp-330h]
  uint32_t first_pass_reward_id; // [rsp+34h] [rbp-32Ch]
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+38h] [rbp-328h]
  const std::vector<unsigned int> *config_level_vec_ptr; // [rsp+40h] [rbp-320h]
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+48h] [rbp-318h]
  std::shared_ptr<Config> v77; // [rsp+50h] [rbp-310h] BYREF
  std::shared_ptr<google::protobuf::Message> v78; // [rsp+60h] [rbp-300h] BYREF
  std::string v79; // [rsp+70h] [rbp-2F0h] BYREF
  char v80[720]; // [rsp+90h] [rbp-2D0h] BYREF

  *(&v67._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v67._anon_0._M_allocated_capacity = (std::string::size_type)dungeon_scene;
  v67._M_string_length = (std::string::size_type)notify;
  v3 = (unsigned __int64)v80;
  v67._M_dataplus._M_p = v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 1 11 holder:1106 64 1 18 is_first_pass:1214 80 1 11 holder:1219 96 4 16 floor_index:1155 1"
                        "12 4 16 level_index:1167 128 4 13 level_id:1187 144 16 26 cur_dungeon_scene_ptr:1112 176 16 30 f"
                        "irst_pass_reward_log_ptr:1234 208 16 14 event_ptr:1260 240 24 23 satisfied_cond_vec:1168 304 24 "
                        "18 action_reason:1228 368 240 25 log_cur_level_record:1156";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::onDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234753535;
  v5[536862723] = -234556924;
  v5[536862724] = 61956;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862739] = -202116109;
  v5[536862740] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v79, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0x975u, v67);
  std::string::~string(&v79);
  if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
  AvatarComp = Player::getAvatarComp(*(Player *const *)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
  PlayerAvatarComp::delAllBuffs(AvatarComp);
  if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
  v8 = Player::getAvatarComp(*(Player *const *)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
  PlayerAvatarComp::triggerCombatEnd(v8, COMBAT_END_TOWER_LEVEL_END);
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v3 + 144));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 144)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v79,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "onDungeonSettle",
      1115);
    v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&v79,
           (const char (*)[28])off_25320420);
    if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
    operator<<(v9, *(const Player **)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v79);
    v10 = 1530;
    goto LABEL_95;
  }
  toThisPtr<DungeonScene>((DungeonScene *)(v3 + 176));
  v11 = std::operator!=<DungeonScene,DungeonScene>(
          (const std::shared_ptr<DungeonScene> *)(v3 + 176),
          (const std::shared_ptr<DungeonScene> *)(v3 + 144));
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 176));
  if ( v11 )
  {
    v10 = 1530;
    goto LABEL_95;
  }
  if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 712) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 712) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(*(&v68._anon_0._M_allocated_capacity + 1) + 712);
  }
  if ( !*(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 712) )
    goto LABEL_22;
  if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(*(&v68._anon_0._M_allocated_capacity + 1) + 32);
  }
  if ( *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32) != *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity
                                                                                  + 1)
                                                                                + 712) )
  {
LABEL_22:
    PlayerTowerComp::internalResetCurLevelRecord(*((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1));
    PlayerTowerComp::notifyTowerCurLevelRecord(*((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1));
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v79,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "onDungeonSettle",
      1130);
    v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            (common::milog::MiLogStream *const)&v79,
            (const char (*)[20])"tower_schedule_id_:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v12,
            (const unsigned int *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32));
    v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v13,
            (const char (*)[33])" schedule_id_before_enter_level:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v14,
            (const unsigned int *)(*(&v68._anon_0._M_allocated_capacity + 1) + 712));
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
LABEL_24:
    operator<<(v16, *(const Player **)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v79);
    v10 = -1;
    goto LABEL_95;
  }
  if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 712) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 712) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(*(&v68._anon_0._M_allocated_capacity + 1) + 712, v3 + 144, v68._anon_0._M_local_buf[8] - 56);
  }
  *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 712) = 0;
  if ( TowerCurLevelRecord::isEmpty((const TowerCurLevelRecord *const)(*(&v68._anon_0._M_allocated_capacity + 1) + 152)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v79,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "onDungeonSettle",
      1138);
    v16 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)&v79,
            (const char (*)[29])"no cur level record, player:");
    if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
    goto LABEL_24;
  }
  DungeonResult = DungeonScene::getDungeonResult((const DungeonScene *const)v68._anon_0._M_allocated_capacity);
  is_win = DungeonResult == DUNGEON_RESULT_SUCCEED;
  if ( DungeonResult == DUNGEON_RESULT_SUCCEED )
  {
    if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 152) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 152) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(*(&v68._anon_0._M_allocated_capacity + 1) + 152);
    }
    *(_DWORD *)(v3 + 96) = *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 152);
    TowerCurLevelRecord::TowerCurLevelRecord(
      (TowerCurLevelRecord *const)(v3 + 368),
      (const TowerCurLevelRecord *)(*(&v68._anon_0._M_allocated_capacity + 1) + 152));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v78);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78)->design_config.txt_config_mgr.tower_config_mgr;
    v19 = *(_DWORD *)(v3 + 96);
    if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      p_tower_config_mgr = (TowerExcelConfigMgr *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32);
      __asan_report_load4(*(&v68._anon_0._M_allocated_capacity + 1) + 32);
    }
    floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(
                         p_tower_config_mgr,
                         *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32),
                         v19);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
    if ( !floor_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v79,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "onDungeonSettle",
        1161);
      v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              (common::milog::MiLogStream *const)&v79,
              (const char (*)[46])"findTowerFloorConfig fail, tower_schedule_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v20,
              (const unsigned int *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32));
      v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v21,
              (const char (*)[19])" cur_level_record:");
      operator<<(v22, (const TowerCurLevelRecord *)(*(&v68._anon_0._M_allocated_capacity + 1) + 152));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v79);
      v10 = -1;
LABEL_94:
      TowerCurLevelRecord::~TowerCurLevelRecord((TowerCurLevelRecord *const)(v3 + 368));
      goto LABEL_95;
    }
    if ( *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&floor_config_ptr->floor_id);
    }
    floor_id = floor_config_ptr->floor_id;
    if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 156) >> 3) + 0x7FFF8000) != 0
      && (char)(((v68._anon_0._M_local_buf[8] - 100) & 7) + 3) >= *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1)
                                                                             + 156) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(*(&v68._anon_0._M_allocated_capacity + 1) + 156);
    }
    *(_DWORD *)(v3 + 112) = *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 156);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
    v23 = *(_DWORD *)(v3 + 112);
    v24 = *(_DWORD *)(v3 + 96);
    v25 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    if ( PlayerTowerComp::calcCurLevelStarNum(
           *((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1),
           v25,
           v24,
           v23,
           (std::vector<unsigned int> *)(v3 + 240)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v79,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "onDungeonSettle",
        1171);
      v26 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&v79,
              (const char (*)[34])"calcCurLevelStarNum fail, player:");
      if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v78);
      v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
      config_level_vec_ptr = TowerExcelConfigMgr::findTowerFloorLevelVec(
                               &v27->design_config.txt_config_mgr.tower_config_mgr,
                               floor_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
      if ( config_level_vec_ptr )
      {
        v32 = (unsigned int)(*(_DWORD *)(v3 + 112) - 1);
        if ( v32 < std::vector<unsigned int>::size(config_level_vec_ptr) )
        {
          v37 = std::vector<unsigned int>::at(config_level_vec_ptr, (unsigned int)(*(_DWORD *)(v3 + 112) - 1));
          v38 = v37;
          if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v37);
          }
          *(_DWORD *)(v3 + 128) = *v38;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v78);
          v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
          v40 = *(unsigned int *)(v3 + 128);
          level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(
                               &v39->design_config.txt_config_mgr.tower_config_mgr,
                               v40);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
          if ( level_config_ptr )
          {
            v43 = *(unsigned int *)(v3 + 112);
            if ( v43 == std::vector<unsigned int>::size(config_level_vec_ptr) )
            {
              if ( *(char *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 280) >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(
                  *(&v68._anon_0._M_allocated_capacity + 1) + 280,
                  v40,
                  *(&v68._anon_0._M_allocated_capacity + 1) + 280);
              *(_BYTE *)(*(&v68._anon_0._M_allocated_capacity + 1) + 280) = 1;
            }
            else if ( PlayerTowerComp::internalUpdateCurLevelRecord(
                        *((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1),
                        *(_DWORD *)(v3 + 96),
                        *(_DWORD *)(v3 + 112) + 1) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&v79,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/tower/player_tower_comp.cpp",
                "onDungeonSettle",
                1207);
              v26 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                      (common::milog::MiLogStream *const)&v79,
                      (const char (*)[43])"internalUpdateCurLevelRecord fail, player:");
              if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
              goto LABEL_70;
            }
            PlayerTowerComp::notifyTowerCurLevelRecord(*((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1));
            *(_BYTE *)(v3 + 64) = 0;
            v44 = (char *)*(unsigned int *)(v3 + 96);
            if ( !PlayerTowerComp::updateTowerFloorRecordOnFinishLevel(
                    *((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1),
                    (uint32_t)v44,
                    *(_DWORD *)(v3 + 112),
                    (const std::vector<unsigned int> *)(v3 + 240),
                    (bool *)(v3 + 64))
              && *(_BYTE *)(v3 + 64) )
            {
              if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
              v45 = Player::getBasicComp(*(Player *const *)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
              PlayerBasicComp::getNextTransNo[abi:cxx11](&v79, v45);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 80), 0x977u, v68);
              std::string::~string(&v79);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v77);
              v46 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
              config_id = ConstValueExcelConfigMgr::getTowerOverflowMailId(&v46->design_config.txt_config_mgr.const_value_config_mgr);
              std::shared_ptr<Config>::~shared_ptr(&v77);
              item_limit_type = ITEM_LIMIT_TOWER_MONTHLY;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v78);
              v47 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
              isIdEntranceFloor = TowerExcelConfigMgr::isIdEntranceFloor(
                                    &v47->design_config.txt_config_mgr.tower_config_mgr,
                                    floor_id);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
              if ( isIdEntranceFloor )
                item_limit_type = ITEM_LIMIT_TOWER_REWARD;
              ActionReason::ActionReason(
                (ActionReason *const)(v3 + 304),
                ACTION_REASON_TOWER_FIRST_PASS_REWARD,
                item_limit_type);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v78);
              v49 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78)->design_config.txt_config_mgr.tower_config_mgr;
              v50 = *(_DWORD *)(v3 + 112);
              v51 = *(_DWORD *)(v3 + 96);
              if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
              {
                v49 = (TowerExcelConfigMgr *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32);
                __asan_report_load4(*(&v68._anon_0._M_allocated_capacity + 1) + 32);
              }
              first_pass_reward_id = TowerExcelConfigMgr::findLevelFirstPassRewardId(
                                       v49,
                                       *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32),
                                       v51,
                                       v50);
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
              if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
              ItemComp = Player::getItemComp(*(Player *const *)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
              PlayerItemComp::grantRewardOrSendMail(
                ItemComp,
                first_pass_reward_id,
                config_id,
                (const ActionReason *)(v3 + 304));
              common::tools::perf::make_shared<proto_log::PlayerLogBodyTowerFirstPassReward>();
              v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyTowerFirstPassReward::set_reason(v53, *(_DWORD *)(v3 + 304));
              v54 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyTowerFirstPassReward::set_reward_id(v54, first_pass_reward_id);
              v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(*(&v68._anon_0._M_allocated_capacity + 1) + 32);
              }
              proto_log::PlayerLogBodyTowerFirstPassReward::set_schedule_id(
                v55,
                *(_DWORD *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32));
              v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyTowerFirstPassReward::set_floor_index(v56, *(_DWORD *)(v3 + 96));
              v57 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFirstPassReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              proto_log::PlayerLogBodyTowerFirstPassReward::set_level_index(v57, *(_DWORD *)(v3 + 112));
              if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
              v58 = *(Player **)(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v78, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTowerFirstPassReward,void>(
                (std::shared_ptr<google::protobuf::Message> *const)(v3 + 208),
                (const std::shared_ptr<proto_log::PlayerLogBodyTowerFirstPassReward> *)(v3 + 176));
              v44 = (char *)(v3 + 208);
              Player::printStatLog(v58, (MessagePtr *)(v3 + 208), &v78, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 208));
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v78);
              std::shared_ptr<proto_log::PlayerLogBodyTowerFirstPassReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTowerFirstPassReward> *const)(v3 + 176));
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 80));
            }
            v59 = *(_BYTE *)(v3 + 64);
            v60 = *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 717) >> 3) + 0x7FFF8000);
            LOBYTE(v44) = v60 != 0;
            v61 = (v60 != 0) & (unsigned __int8)(((v68._anon_0._M_local_buf[8] - 51) & 7) >= v60);
            if ( (_BYTE)v61 )
              __asan_report_store1(*(&v68._anon_0._M_allocated_capacity + 1) + 717, v44, v61);
            *(_BYTE *)(*(&v68._anon_0._M_allocated_capacity + 1) + 717) = v59;
            PlayerTowerComp::composeSettleInfoOnFinishLevel(
              *((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1),
              *(_DWORD *)(v3 + 96),
              *(_DWORD *)(v3 + 112),
              (const std::vector<unsigned int> *)(v3 + 240),
              *(_BYTE *)(v3 + 64),
              (proto::TowerLevelEndNotify *)v68._M_string_length);
            PlayerTowerComp::logTowerLevelSettle(
              *((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1),
              (const TowerCurLevelRecord *)(v3 + 368),
              is_win,
              (const std::vector<unsigned int> *)(v3 + 240));
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v78);
            v62 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v78);
            v63 = !TowerExcelConfigMgr::isIdEntranceFloor(&v62->design_config.txt_config_mgr.tower_config_mgr, floor_id);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v78);
            if ( v63 )
            {
              DungeonFightStatistic = DungeonScene::getDungeonFightStatistic((const DungeonScene *const)v68._anon_0._M_allocated_capacity);
              PlayerTowerComp::updateFightStatistic(
                *((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1),
                DungeonFightStatistic);
            }
            common::tools::perf::make_shared<FinishTowerLevelEvent,unsigned int const&,unsigned int &>(
              (const unsigned int *)&v78,
              (unsigned int *)(v3 + 96),
              (const unsigned int *)(v3 + 112),
              (unsigned int *)(v3 + 96));
            std::shared_ptr<BaseEvent>::shared_ptr<FinishTowerLevelEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v3 + 208),
              (std::shared_ptr<FinishTowerLevelEvent> *)&v78);
            std::shared_ptr<FinishTowerLevelEvent>::~shared_ptr((std::shared_ptr<FinishTowerLevelEvent> *const)&v78);
            if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
            EventComp = Player::getEventComp(*(Player *const *)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)&v78,
              (const std::shared_ptr<BaseEvent> *)(v3 + 208));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v78);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v78);
            v10 = 0;
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 208));
            goto LABEL_93;
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v79,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "onDungeonSettle",
            1192);
          v41 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)&v79,
                  (const char (*)[37])"findTowerLevelConfig fail, level_id:");
          v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v41,
                  (const unsigned int *)(v3 + 128));
          v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v79,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "onDungeonSettle",
            1183);
          v33 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  (common::milog::MiLogStream *const)&v79,
                  (const char (*)[17])"level_index - 1:");
          *(_DWORD *)(v3 + 128) = *(_DWORD *)(v3 + 112) - 1;
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v3 + 128));
          v35 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v34,
                  (const char (*)[19])" config_level_vec:");
          v36 = common::milog::MiLogStream::operator<<<unsigned int>(v35, config_level_vec_ptr);
          v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v79,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "onDungeonSettle",
          1178);
        v28 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)&v79,
                (const char (*)[46])"config_level_vec_ptr fail, tower_schedule_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(*(&v68._anon_0._M_allocated_capacity + 1) + 32));
        v30 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v29,
                (const char (*)[19])" cur_level_record:");
        v31 = operator<<(v30, (const TowerCurLevelRecord *)(*(&v68._anon_0._M_allocated_capacity + 1) + 152));
        v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v31, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((*(&v68._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(&v68._anon_0._M_allocated_capacity + 1) + 24);
      }
    }
LABEL_70:
    operator<<(v26, *(const Player **)(*(&v68._anon_0._M_allocated_capacity + 1) + 24));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v79);
    v10 = -1;
LABEL_93:
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 240));
    goto LABEL_94;
  }
  if ( DungeonScene::getDungeonResult((const DungeonScene *const)v68._anon_0._M_allocated_capacity) != DUNGEON_RESULT_CANCEL )
  {
    proto::TowerLevelEndNotify::set_is_success((proto::TowerLevelEndNotify *const)v68._M_string_length, 0);
    proto::TowerLevelEndNotify::set_continue_state((proto::TowerLevelEndNotify *const)v68._M_string_length, 0);
  }
  *(_QWORD *)(v3 + 304) = 0LL;
  *(_QWORD *)(v3 + 312) = 0LL;
  *(_QWORD *)(v3 + 320) = 0LL;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 304));
  PlayerTowerComp::logTowerLevelSettle(
    *((PlayerTowerComp *const *)&v68._anon_0._M_allocated_capacity + 1),
    (const TowerCurLevelRecord *)(*(&v68._anon_0._M_allocated_capacity + 1) + 152),
    is_win,
    (const std::vector<unsigned int> *)(v3 + 304));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 304));
  v10 = 0;
LABEL_95:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 144));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v10;
  if ( v68._M_dataplus._M_p == (std::string::pointer)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return result;
};

// Line 1267: range 00000000143768F0-0000000014377342
int32_t __cdecl PlayerTowerComp::updateFightStatistic(
        PlayerTowerComp *const this,
        const DungeonFightStatistic *dungeon_fight_statistic)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned __int64 v6; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  int v11; // r14d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  int v15; // esi
  unsigned int second; // ecx
  unsigned __int64 v17; // rax
  int v18; // esi
  unsigned __int64 v19; // rax
  int v20; // esi
  unsigned __int64 v21; // rax
  int v22; // esi
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+24h] [rbp-16Ch] BYREF
  std::vector<TowerTeam>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::vector<TowerTeam>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-158h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-150h] BYREF
  std::vector<TowerTeam> *__for_range; // [rsp+48h] [rbp-148h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+50h] [rbp-140h]
  const std::map<unsigned int,float> *__for_range_2; // [rsp+58h] [rbp-138h]
  const std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+60h] [rbp-130h]
  const std::map<unsigned int,unsigned int> *__for_range_4; // [rsp+68h] [rbp-128h]
  const std::pair<unsigned int const,unsigned int> *v35; // [rsp+70h] [rbp-120h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id_2; // [rsp+78h] [rbp-118h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+80h] [rbp-110h]
  const std::pair<unsigned int const,unsigned int> *v38; // [rsp+88h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id_1; // [rsp+90h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+98h] [rbp-F8h]
  const std::pair<unsigned int const,float> *v41; // [rsp+A0h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,float> >::type *avatar_id_0; // [rsp+A8h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,float> >::type *damage; // [rsp+B0h] [rbp-E0h]
  const std::pair<unsigned int const,unsigned int> *v44; // [rsp+B8h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *avatar_id; // [rsp+C0h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *kill_count; // [rsp+C8h] [rbp-C8h]
  const TowerTeam *tower_team; // [rsp+D0h] [rbp-C0h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+D8h] [rbp-B8h]
  common::milog::MiLogStream v49; // [rsp+E0h] [rbp-B0h] BYREF
  char v50[144]; // [rsp+100h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 guid:1270 64 16 22 mirror_avatar_ptr:1272";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::updateFightStatistic;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  __for_range = &this->cur_level_record_.tower_team_vec;
  __for_begin._M_current = std::vector<TowerTeam>::begin(&this->cur_level_record_.tower_team_vec)._M_current;
  __for_end._M_current = std::vector<TowerTeam>::end(&this->cur_level_record_.tower_team_vec)._M_current;
  while ( __gnu_cxx::operator!=<TowerTeam *,std::vector<TowerTeam>>(&__for_begin, &__for_end) )
  {
    tower_team = __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator*(&__for_begin);
    __for_range_0 = &tower_team->mirror_avatar_guid_vec;
    __for_begin_0._M_current = std::vector<unsigned long>::begin(&tower_team->mirror_avatar_guid_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
    {
      v6 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6);
      *(_QWORD *)(v3 + 32) = *(_QWORD *)v6;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 64), (uint64_t)AvatarComp);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v49,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "updateFightStatistic",
          1275);
        v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               &v49,
               (const char (*)[20])"mirror avatar guid:");
        v9 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v8,
               (const unsigned __int64 *)(v3 + 32));
        v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v9,
                (const char (*)[20])" not found! player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v10, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v49);
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        __k = Avatar::getAvatarId(v12);
        v13 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                  &this->tower_fight_statisic_.avatar_reveal_count_map,
                                  &__k);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) != 0 && (char)((v13 & 7) + 3) >= *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load4(v13);
        ++*(_DWORD *)v13;
        v11 = 1;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 64));
      if ( v11 != 1 )
        goto LABEL_57;
      __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator++(&__for_begin);
  }
  __for_range_1 = &dungeon_fight_statistic->kill_count_map;
  __for_begin_0._M_current = (const unsigned __int64 *)std::map<unsigned int,unsigned int>::begin(&dungeon_fight_statistic->kill_count_map)._M_node;
  __for_end_0._M_current = (const unsigned __int64 *)std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v44 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    avatar_id = std::get<0ul,unsigned int const,unsigned int>(v44);
    kill_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v44);
    v14 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              &this->tower_fight_statisic_.kill_count_map,
                              avatar_id);
    if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) != 0 && (char)((v14 & 7) + 3) >= *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
      v14 = __asan_report_load4(v14);
    v15 = *(_DWORD *)v14;
    if ( *(_BYTE *)(((unsigned __int64)kill_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)kill_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)kill_count >> 3) + 0x7FFF8000) )
    {
      v14 = __asan_report_load4(kill_count);
    }
    *(_DWORD *)v14 = v15 + *kill_count;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_fight_statistic->max_single_damage_pair.second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_fight_statistic + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_fight_statistic->max_single_damage_pair.second >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&dungeon_fight_statistic->max_single_damage_pair.second);
  }
  second = dungeon_fight_statistic->max_single_damage_pair.second;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_fight_statisic_.max_single_damage_pair.second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tower_fight_statisic_.max_single_damage_pair.second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->tower_fight_statisic_.max_single_damage_pair.second);
  }
  if ( second > this->tower_fight_statisic_.max_single_damage_pair.second )
    std::pair<unsigned int,unsigned int>::operator=(
      &this->tower_fight_statisic_.max_single_damage_pair,
      &dungeon_fight_statistic->max_single_damage_pair);
  __for_range_2 = &dungeon_fight_statistic->take_damage_count_map;
  __for_begin_0._M_current = (const unsigned __int64 *)std::map<unsigned int,float>::begin(&dungeon_fight_statistic->take_damage_count_map)._M_node;
  __for_end_0._M_current = (const unsigned __int64 *)std::map<unsigned int,float>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)&__for_end_0) )
  {
    v41 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)&__for_begin_0);
    avatar_id_0 = std::get<0ul,unsigned int const,float>(v41);
    damage = (std::tuple_element<1,const std::pair<unsigned int const,float> >::type *)std::get<1ul,unsigned int const,float>(v41);
    v17 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              &this->tower_fight_statisic_.take_damage_count_map,
                              avatar_id_0);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) != 0 && (char)((v17 & 7) + 3) >= *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load4(v17);
    v18 = *(_DWORD *)v17;
    if ( *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)damage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)damage >> 3) + 0x7FFF8000) )
    {
      v17 = __asan_report_load4(damage);
    }
    *(_DWORD *)v17 = v18 + (int)*damage;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)&__for_begin_0);
  }
  __for_range_3 = &dungeon_fight_statistic->normal_skill_count_map;
  __for_begin_0._M_current = (const unsigned __int64 *)std::map<unsigned int,unsigned int>::begin(&dungeon_fight_statistic->normal_skill_count_map)._M_node;
  __for_end_0._M_current = (const unsigned __int64 *)std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v38 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    avatar_id_1 = std::get<0ul,unsigned int const,unsigned int>(v38);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v38);
    v19 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              &this->tower_fight_statisic_.normal_skill_count_map,
                              avatar_id_1);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) != 0 && (char)((v19 & 7) + 3) >= *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load4(v19);
    v20 = *(_DWORD *)v19;
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      v19 = __asan_report_load4(count);
    }
    *(_DWORD *)v19 = v20 + *count;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  __for_range_4 = &dungeon_fight_statistic->energy_skill_count_map;
  __for_begin_0._M_current = (const unsigned __int64 *)std::map<unsigned int,unsigned int>::begin(&dungeon_fight_statistic->energy_skill_count_map)._M_node;
  __for_end_0._M_current = (const unsigned __int64 *)std::map<unsigned int,unsigned int>::end(__for_range_4)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_0,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v35 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
    avatar_id_2 = std::get<0ul,unsigned int const,unsigned int>(v35);
    count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v35);
    v21 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                              &this->tower_fight_statisic_.energy_skill_count_map,
                              avatar_id_2);
    if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) != 0 && (char)((v21 & 7) + 3) >= *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
      v21 = __asan_report_load4(v21);
    v22 = *(_DWORD *)v21;
    if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
    {
      v21 = __asan_report_load4(count_0);
    }
    *(_DWORD *)v21 = v22 + *count_0;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_0);
  }
  v2 = 0;
LABEL_57:
  result = v2;
  if ( v50 == (char *)v3 )
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

// Line 1312: range 0000000014377344-0000000014378622
__int64 __fastcall PlayerTowerComp::getFloorStarReward(PlayerTowerComp *const this, __int32 floor_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  unsigned int v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t v12; // edx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  TowerExcelConfigMgr *v18; // rdi
  uint32_t v19; // edx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  uint32_t index; // ecx
  const unsigned int *v26; // rax
  _DWORD *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rcx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  PlayerItemComp *ItemComp; // rax
  char *v45; // rsi
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rcx
  uint32_t v49; // ecx
  char v50; // al
  PlayerItemComp *v51; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  google::protobuf::RepeatedField<unsigned int> *v54; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  Player *v58; // r14
  __int64 result; // rax
  std::string v60; // [rsp+0h] [rbp-250h]
  std::less<unsigned int> __comp; // [rsp+2Ah] [rbp-226h] BYREF
  std::allocator<unsigned int> __a; // [rsp+2Bh] [rbp-225h] BYREF
  _DWORD __l[5]; // [rsp+2Ch] [rbp-224h] BYREF
  std::vector<data::TowerStarReward>::const_iterator __for_end; // [rsp+40h] [rbp-210h] BYREF
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+48h] [rbp-208h]
  const std::vector<data::TowerStarReward> *floor_reward_vec_ptr; // [rsp+50h] [rbp-200h]
  TowerFloorRecord *floor_record; // [rsp+58h] [rbp-1F8h]
  const std::vector<data::TowerStarReward> *__for_range; // [rsp+60h] [rbp-1F0h]
  const data::TowerStarReward *star_reward_config; // [rsp+68h] [rbp-1E8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+70h] [rbp-1E0h] BYREF
  std::shared_ptr<google::protobuf::Message> v71; // [rsp+80h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v72; // [rsp+90h] [rbp-1C0h] BYREF
  std::set<unsigned int> floor_index_set; // [rsp+B0h] [rbp-1A0h] BYREF
  char v74[368]; // [rsp+E0h] [rbp-170h] BYREF

  *(&v60._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v60._anon_0._M_allocated_capacity) = floor_id;
  v2 = (unsigned __int64)v74;
  v60._M_string_length = (std::string::size_type)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 48 1 11 holder:1375 64 4 16 floor_index:1326 80 4 19 floor_star_num:1342 96 4 24 new_reward_pr"
                        "ogress:1344 112 4 13 floor_id:1311 128 8 9 iter:1327 160 16 30 floor_star_reward_log_ptr:1399 19"
                        "2 24 18 reward_id_vec:1343 256 24 18 action_reason:1382";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::getFloorStarReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  *(_DWORD *)(v2 + 112) = floor_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( this->tower_schedule_id_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v71);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71);
    floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(
                         &v7->design_config.txt_config_mgr.tower_config_mgr,
                         *(_DWORD *)(v2 + 112));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
    if ( floor_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v71);
      p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config.txt_config_mgr.tower_config_mgr;
      v12 = *(_DWORD *)(v2 + 112);
      if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
      {
        p_tower_config_mgr = (TowerExcelConfigMgr *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32);
        __asan_report_load4(*(&v60._anon_0._M_allocated_capacity + 1) + 32);
      }
      *(_DWORD *)(v2 + 64) = TowerExcelConfigMgr::findTowerFloorIndex(
                               p_tower_config_mgr,
                               *(_DWORD *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32),
                               v12);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
      *(std::map<unsigned int,TowerFloorRecord>::iterator *)(v2 + 128) = std::map<unsigned int,TowerFloorRecord>::find(
                                                                           (std::map<unsigned int,TowerFloorRecord> *const)(*(&v60._anon_0._M_allocated_capacity + 1) + 40),
                                                                           (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v2 + 64));
      __for_end._M_current = (const data::TowerStarReward *)std::map<unsigned int,TowerFloorRecord>::end((std::map<unsigned int,TowerFloorRecord> *const)(*(&v60._anon_0._M_allocated_capacity + 1) + 40))._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v2 + 128),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v72,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "getFloorStarReward",
          1330);
        v13 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v72,
                (const char (*)[24])"no record, schedule_id:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32));
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" floor_index:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v2 + 64));
        v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
        operator<<(v17, *(const Player **)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
        common::milog::MiLogStream::~MiLogStream(&v72);
        v6 = 1526;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v71);
        v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71)->design_config.txt_config_mgr.tower_config_mgr;
        v19 = *(_DWORD *)(v2 + 64);
        if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
        {
          v18 = (TowerExcelConfigMgr *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32);
          __asan_report_load4(*(&v60._anon_0._M_allocated_capacity + 1) + 32);
        }
        floor_reward_vec_ptr = TowerExcelConfigMgr::findFloorStarRewardVec(
                                 v18,
                                 *(_DWORD *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32),
                                 v19);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
        if ( floor_reward_vec_ptr )
        {
          floor_record = &std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v2 + 128))->second;
          *(_DWORD *)(v2 + 80) = TowerFloorRecord::getTotalStarNum(floor_record);
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
          *(_DWORD *)(v2 + 96) = 0;
          __for_range = floor_reward_vec_ptr;
          *(std::vector<data::TowerStarReward>::const_iterator *)&__l[3] = std::vector<data::TowerStarReward>::begin(floor_reward_vec_ptr);
          __for_end._M_current = std::vector<data::TowerStarReward>::end(__for_range)._M_current;
          while ( __gnu_cxx::operator!=<data::TowerStarReward const*,std::vector<data::TowerStarReward>>(
                    (const __gnu_cxx::__normal_iterator<const data::TowerStarReward*,std::vector<data::TowerStarReward> > *)&__l[3],
                    &__for_end) )
          {
            star_reward_config = __gnu_cxx::__normal_iterator<data::TowerStarReward const*,std::vector<data::TowerStarReward>>::operator*((const __gnu_cxx::__normal_iterator<const data::TowerStarReward*,std::vector<data::TowerStarReward> > *const)&__l[3]);
            if ( *(_BYTE *)(((unsigned __int64)&star_reward_config->min_star_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&star_reward_config->min_star_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&star_reward_config->min_star_count);
            }
            if ( star_reward_config->min_star_count <= *(_DWORD *)(v2 + 80) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&star_reward_config->index >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&star_reward_config->index >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&star_reward_config->index);
              }
              index = star_reward_config->index;
              if ( *(_BYTE *)(((unsigned __int64)&floor_record->floor_star_reward_progress >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&floor_record->floor_star_reward_progress >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&floor_record->floor_star_reward_progress);
              }
              if ( index > floor_record->floor_star_reward_progress )
              {
                std::vector<unsigned int>::push_back(
                  (std::vector<unsigned int> *const)(v2 + 192),
                  &star_reward_config->reward_id);
                v26 = std::max<unsigned int>((const unsigned int *)(v2 + 96), &star_reward_config->index);
                v27 = v26;
                if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v26);
                }
                *(_DWORD *)(v2 + 96) = *v27;
              }
            }
            __gnu_cxx::__normal_iterator<data::TowerStarReward const*,std::vector<data::TowerStarReward>>::operator++((__gnu_cxx::__normal_iterator<const data::TowerStarReward*,std::vector<data::TowerStarReward> > *const)&__l[3]);
          }
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 192)) )
          {
            common::milog::MiLogStream::create(
              &v72,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/tower/player_tower_comp.cpp",
              "getFloorStarReward",
              1362);
            v28 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    &v72,
                    (const char (*)[38])"no floor star reward, floor_star_num:");
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)(v2 + 80));
            v30 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v29,
                    (const char (*)[29])" floor_star_reward_progress:");
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v30,
                    &floor_record->floor_star_reward_progress);
            v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v31,
                    (const char (*)[14])" schedule_id:");
            v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v32,
                    (const unsigned int *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32));
            v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v33,
                    (const char (*)[14])" floor_index:");
            v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v2 + 64));
            v36 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v35, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
            operator<<(v36, *(const Player **)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
            common::milog::MiLogStream::~MiLogStream(&v72);
            v6 = 1527;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&floor_record->floor_star_reward_progress >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&floor_record->floor_star_reward_progress >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&floor_record->floor_star_reward_progress);
            }
            if ( floor_record->floor_star_reward_progress < *(_DWORD *)(v2 + 96) )
            {
              if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
              BasicComp = Player::getBasicComp(*(Player *const *)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
              PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v72, BasicComp);
              StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x979u, v60);
              std::string::~string(&v72);
              __l[1] = 44;
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v71);
              v43 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v71);
              v60._anon_0._M_local_buf[3] = TowerExcelConfigMgr::isIdEntranceFloor(
                                              &v43->design_config.txt_config_mgr.tower_config_mgr,
                                              *(_DWORD *)(v2 + 112));
              std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v71);
              if ( v60._anon_0._M_local_buf[3] )
                __l[1] = 71;
              ActionReason::ActionReason(
                (ActionReason *const)(v2 + 256),
                ACTION_REASON_TOWER_FLOOR_STAR_REWARD,
                (data::ItemLimitType)__l[1]);
              if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
              ItemComp = Player::getItemComp(*(Player *const *)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
              v45 = (char *)(v2 + 192);
              __l[2] = PlayerItemComp::checkGrantRewards(
                         ItemComp,
                         (const std::vector<unsigned int> *)(v2 + 192),
                         (const ActionReason *)(v2 + 256));
              if ( __l[2] )
              {
                common::milog::MiLogStream::create(
                  &v72,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/tower/player_tower_comp.cpp",
                  "getFloorStarReward",
                  1388);
                v46 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v72,
                        (const char (*)[39])"checkGrantRewards fail, reward_id_vec:");
                v47 = common::milog::MiLogStream::operator<<<unsigned int>(
                        v46,
                        (const std::vector<unsigned int> *)(v2 + 192));
                v48 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v47, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
                operator<<(v48, *(const Player **)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
                common::milog::MiLogStream::~MiLogStream(&v72);
                v6 = __l[2];
              }
              else
              {
                v49 = *(_DWORD *)(v2 + 96);
                v50 = *(_BYTE *)(((unsigned __int64)&floor_record->floor_star_reward_progress >> 3) + 0x7FFF8000);
                if ( v50 != 0 && v50 <= 3 )
                {
                  LOBYTE(v45) = v50 != 0;
                  __asan_report_store4(&floor_record->floor_star_reward_progress, v45, (_BYTE)floor_record + 32);
                }
                floor_record->floor_star_reward_progress = v49;
                __l[0] = *(_DWORD *)(v2 + 64);
                std::allocator<unsigned int>::allocator(&__a);
                std::set<unsigned int>::set(
                  &floor_index_set,
                  (std::initializer_list<unsigned int>)__PAIR128__(1LL, __l),
                  &__comp,
                  &__a);
                PlayerTowerComp::notifyTowerFloorRecord(
                  *((PlayerTowerComp *const *)&v60._anon_0._M_allocated_capacity + 1),
                  &floor_index_set);
                std::set<unsigned int>::~set(&floor_index_set);
                std::allocator<unsigned int>::~allocator(&__a);
                if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
                v51 = Player::getItemComp(*(Player *const *)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
                PlayerItemComp::grantRewards(
                  v51,
                  (const std::vector<unsigned int> *)(v2 + 192),
                  (const ActionReason *)(v2 + 256),
                  0LL);
                common::tools::perf::make_shared<proto_log::PlayerLogBodyTowerFloorStarReward>();
                v52 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto_log::PlayerLogBodyTowerFloorStarReward::set_reason(v52, 0x30u);
                v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                v54 = proto_log::PlayerLogBodyTowerFloorStarReward::mutable_reward_id_list(v53);
                common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
                  (const std::vector<unsigned int> *)(v2 + 192),
                  v54);
                v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(*(&v60._anon_0._M_allocated_capacity + 1) + 32);
                }
                proto_log::PlayerLogBodyTowerFloorStarReward::set_schedule_id(
                  v55,
                  *(_DWORD *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32));
                v56 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto_log::PlayerLogBodyTowerFloorStarReward::set_floor_index(v56, *(_DWORD *)(v2 + 64));
                v57 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerFloorStarReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                proto_log::PlayerLogBodyTowerFloorStarReward::set_floor_star_num(v57, *(_DWORD *)(v2 + 80));
                if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
                v58 = *(Player **)(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v71, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTowerFloorStarReward,void>(
                  &p_body_ptr,
                  (const std::shared_ptr<proto_log::PlayerLogBodyTowerFloorStarReward> *)(v2 + 160));
                Player::printStatLog(v58, &p_body_ptr, &v71, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v71);
                v6 = 0;
                std::shared_ptr<proto_log::PlayerLogBodyTowerFloorStarReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTowerFloorStarReward> *const)(v2 + 160));
              }
              StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v72,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/tower/player_tower_comp.cpp",
                "getFloorStarReward",
                1370);
              v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                      &v72,
                      (const char (*)[21])"new_reward_progress:");
              v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v37,
                      (const unsigned int *)(v2 + 96));
              v39 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                      v38,
                      (const char (*)[29])" floor_star_reward_progress:");
              v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v39,
                      &floor_record->floor_star_reward_progress);
              v41 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v40, (const char (*)[9])" player:");
              if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
              operator<<(v41, *(const Player **)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
              common::milog::MiLogStream::~MiLogStream(&v72);
              v6 = -1;
            }
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v72,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "getFloorStarReward",
            1337);
          v20 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v72,
                  (const char (*)[45])"floor rewards config not found, schedule_id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(*(&v60._anon_0._M_allocated_capacity + 1) + 32));
          v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v21,
                  (const char (*)[14])" floor_index:");
          v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v2 + 64));
          v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((*(&v60._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(*(&v60._anon_0._M_allocated_capacity + 1) + 24);
          operator<<(v24, *(const Player **)(*(&v60._anon_0._M_allocated_capacity + 1) + 24));
          common::milog::MiLogStream::~MiLogStream(&v72);
          v6 = 5;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v72,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "getFloorStarReward",
        1322);
      v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v72,
             (const char (*)[28])"config not found, floor_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 112));
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v72);
      v6 = 5;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v72,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "getFloorStarReward",
      1315);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v72,
           (const char (*)[26])"schedule_id is 0, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v72);
    v6 = 1521;
  }
  result = v6;
  if ( v60._M_string_length == v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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

// Line 1411: range 0000000014378624-000000001437876E
int32_t __cdecl PlayerTowerComp::requestRecordHandbook(
        PlayerTowerComp *const this,
        proto::TowerRecordHandbookRsp *rsp_0)
{
  uint32_t *p_best_floor_index; // rax
  std::map<unsigned int,TowerMonthlySummary>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,TowerMonthlySummary>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,TowerMonthlySummary> *__for_range; // [rsp+28h] [rbp-28h]
  std::pair<unsigned int const,TowerMonthlySummary> *__in; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,TowerMonthlySummary> >::type *schedule_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,TowerMonthlySummary> >::type *monthly_summary; // [rsp+40h] [rbp-10h]
  proto::TowerMonthlyDetail *monthly_detail; // [rsp+48h] [rbp-8h]

  __for_range = &this->tower_monthly_summary_map_;
  __for_begin._M_node = std::map<unsigned int,TowerMonthlySummary>::begin(&this->tower_monthly_summary_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerMonthlySummary>::end(&this->tower_monthly_summary_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>::operator*(&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,TowerMonthlySummary>(__in);
    monthly_summary = std::get<1ul,unsigned int const,TowerMonthlySummary>(__in);
    p_best_floor_index = &monthly_summary->best_floor_index;
    if ( *(_BYTE *)(((unsigned __int64)p_best_floor_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_best_floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_best_floor_index >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(p_best_floor_index);
    }
    if ( monthly_summary->best_floor_index )
    {
      if ( *(_BYTE *)(((unsigned __int64)&monthly_summary->best_level_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&monthly_summary->best_level_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&monthly_summary->best_level_index);
      }
      if ( monthly_summary->best_level_index )
      {
        monthly_detail = proto::TowerRecordHandbookRsp::add_monthly_detail_list(rsp_0);
        TowerMonthlySummary::toClientDetail(monthly_summary, monthly_detail);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 1428: range 0000000014378770-00000000143787DD
void __cdecl PlayerTowerComp::onLeaveSceneEvent(PlayerTowerComp *const this, const LeaveSceneEvent *leave_scene_event)
{
  PlayerBasicComp *BasicComp; // rax

  if ( !std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::expired(&this->cur_dungeon_scene_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::resetCurClimateMeter(BasicComp, 1);
  }
};

// Line 1438: range 00000000143787DE-00000000143793F9
void __cdecl PlayerTowerComp::onPostEnterSceneEvent(PlayerTowerComp *const this, const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t SceneId; // ecx
  char v8; // al
  char v9; // al
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t cur_level_index; // ecx
  uint32_t *v13; // rax
  uint32_t *v14; // rdx
  DungeonScene *v15; // rsi
  Player *v16; // rcx
  proto::DungeonSettleNotify *v17; // rax
  proto::TowerLevelEndNotify *p_is_notify_first_pass_after_reenter; // rdi
  Player *player; // r14
  Player *v20; // rcx
  Player *v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  PlayerAvatarComp *v25; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v26; // rax
  unsigned int *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  PlayerAvatarComp *v30; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  PlayerAvatarComp *v33; // rax
  unsigned int __a; // [rsp+14h] [rbp-16Ch] BYREF
  unsigned int __b; // [rsp+18h] [rbp-168h] BYREF
  uint32_t floor_index; // [rsp+1Ch] [rbp-164h]
  uint32_t level_index; // [rsp+20h] [rbp-160h]
  unsigned int buff_id; // [rsp+24h] [rbp-15Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-148h]
  common::milog::MiLogStream v44; // [rsp+40h] [rbp-140h] BYREF
  std::set<data::TowerCondType> cond_filter_set; // [rsp+60h] [rbp-120h] BYREF
  char v46[240]; // [rsp+90h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 16 22 dungeon_scene_ptr:1439 64 16 15 notify_ptr:1465 96 16 26 cur_dungeon_scene_ptr:1511 1"
                        "28 24 27 to_add_teambuff_id_vec:1483";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::onPostEnterSceneEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
  v5 = (char *)(v2 + 32);
  if ( !std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
    goto LABEL_9;
  v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  SceneId = Scene::getSceneId((const Scene *const)v6);
  v8 = *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000);
  LOBYTE(v5) = v8 != 0;
  if ( v8 != 0 && v8 <= 3 )
    __asan_report_load4(&event->dst_scene_id);
  if ( SceneId == event->dst_scene_id )
    v9 = 1;
  else
LABEL_9:
    v9 = 0;
  if ( v9 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::setIsAllowUseSkill(AvatarComp, 0);
    v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::getDungeonResult(v11) == DUNGEON_RESULT_SUCCEED )
    {
      if ( !TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->cur_level_record_);
        }
        floor_index = this->cur_level_record_.cur_floor_index;
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_level_record_.cur_level_index);
        }
        cur_level_index = this->cur_level_record_.cur_level_index;
        if ( *(char *)(((unsigned __int64)&this->cur_level_record_.is_floor_finished >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&this->cur_level_record_.is_floor_finished);
        __b = cur_level_index - !this->cur_level_record_.is_floor_finished;
        __a = 1;
        v13 = (uint32_t *)std::max<unsigned int>(&__a, &__b);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        level_index = *v14;
        v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        PlayerTowerComp::calcCurLevelStarNum(
          this,
          v15,
          floor_index,
          level_index,
          (std::vector<unsigned int> *)(v2 + 128));
        v16 = (Player *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        DungeonScene::composeDungeonSettleNotify((DungeonScene *const)(v2 + 64), v16);
        if ( std::operator!=<proto::DungeonSettleNotify>(
               0LL,
               (const std::shared_ptr<proto::DungeonSettleNotify> *)(v2 + 64)) )
        {
          v17 = std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::DungeonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          p_is_notify_first_pass_after_reenter = proto::DungeonSettleNotify::mutable_tower_level_end_notify(v17);
          if ( *(_BYTE *)(((unsigned __int64)&this->is_notify_first_pass_after_reenter_ >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this - 51) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_notify_first_pass_after_reenter_ >> 3)
                                                              + 0x7FFF8000) )
          {
            p_is_notify_first_pass_after_reenter = (proto::TowerLevelEndNotify *)&this->is_notify_first_pass_after_reenter_;
            __asan_report_load1(&this->is_notify_first_pass_after_reenter_);
          }
          PlayerTowerComp::composeSettleInfoOnFinishLevel(
            this,
            floor_index,
            level_index,
            (const std::vector<unsigned int> *)(v2 + 128),
            this->is_notify_first_pass_after_reenter_,
            p_is_notify_first_pass_after_reenter);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          player = this->player_;
          std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonSettleNotify>((const std::shared_ptr<proto::DungeonSettleNotify> *)(v2 + 96));
          Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v2 + 96), 0LL);
          std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 96));
        }
        std::shared_ptr<proto::DungeonSettleNotify>::~shared_ptr((std::shared_ptr<proto::DungeonSettleNotify> *const)(v2 + 64));
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
      }
      else
      {
        v20 = (Player *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        DungeonScene::composeDungeonSettleNotify((DungeonScene *const)(v2 + 64), v20);
        if ( std::operator!=<proto::DungeonSettleNotify>(
               0LL,
               (const std::shared_ptr<proto::DungeonSettleNotify> *)(v2 + 64)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v21 = this->player_;
          std::dynamic_pointer_cast<google::protobuf::Message const,proto::DungeonSettleNotify>((const std::shared_ptr<proto::DungeonSettleNotify> *)(v2 + 96));
          Player::sendMessage(v21, (common::minet::ConstMessagePtr *)(v2 + 96), 0LL);
          std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 96));
        }
        std::shared_ptr<proto::DungeonSettleNotify>::~shared_ptr((std::shared_ptr<proto::DungeonSettleNotify> *const)(v2 + 64));
      }
    }
    else
    {
      v22 = ((_BYTE)this - 51) & 7;
      v23 = (*(_BYTE *)(((unsigned __int64)&this->is_notify_first_pass_after_reenter_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->is_notify_first_pass_after_reenter_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v23 )
        __asan_report_store1(&this->is_notify_first_pass_after_reenter_, v22, v23);
      this->is_notify_first_pass_after_reenter_ = 0;
    }
    v24 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::getDungeonResult(v24) == DUNGEON_RESULT_NONE )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v25 = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::delAllBuffs(v25);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
      PlayerTowerComp::getCurrentTowerBuffs(this, (std::vector<unsigned int> *)(v2 + 128));
      __for_range = (std::vector<unsigned int> *)(v2 + 128);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v26 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        buff_id = *v27;
        PlayerTowerComp::addTowerTeamBuff(this, buff_id);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      memset(&cond_filter_set, 0, sizeof(cond_filter_set));
      std::set<data::TowerCondType>::set(&cond_filter_set);
      PlayerTowerComp::checkStarCondFailAndNotify(this, &cond_filter_set, 1);
      std::set<data::TowerCondType>::~set(&cond_filter_set);
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/tower/player_tower_comp.cpp",
        "onPostEnterSceneEvent",
        1492);
      v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v44,
              (const char (*)[20])" [TOWER STAR_COND] ");
      v29 = common::milog::MiLogStream::operator<<<unsigned int>(v28, &this->cur_level_record_.failed_cond_set);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v29, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v44);
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->cur_level_record_.is_floor_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->cur_level_record_.is_floor_finished);
    if ( this->cur_level_record_.is_floor_finished )
      PlayerTowerComp::internalResetCurLevelRecord(this);
    std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_dungeon_scene_wtr_);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_before_enter_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->schedule_id_before_enter_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->schedule_id_before_enter_level_, v5, (_BYTE)this - 56);
    }
    this->schedule_id_before_enter_level_ = 0;
    std::string::clear(&this->cur_level_record_.cur_tower_level_transaction);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v30 = Player::getAvatarComp(this->player_);
    if ( !PlayerAvatarComp::getIsAllowUseSkill(v30) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Player::getDungeonComp(this->player_);
      PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 96));
      if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 96))
        || (v31 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
            DungeonScene::getDungeonType(v31) != DUNGEON_UGC) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v33 = Player::getAvatarComp(this->player_);
        PlayerAvatarComp::setIsAllowUseSkill(v33, 1);
      }
      std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 96));
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  if ( v46 == (char *)v2 )
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
};

// Line 1521: range 00000000143793FA-000000001437949F
void __cdecl PlayerTowerComp::onOpenStateChangeEvent(
        PlayerTowerComp *const this,
        const OpenStateChangeEvent *open_state_change_event)
{
  if ( *(_BYTE *)(((unsigned __int64)&open_state_change_event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&open_state_change_event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&open_state_change_event->key);
  }
  if ( open_state_change_event->key == 42 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&open_state_change_event->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)open_state_change_event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&open_state_change_event->value >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&open_state_change_event->value);
    }
    if ( open_state_change_event->value )
      PlayerTowerComp::checkAndRefresh(this);
  }
};

// Line 1532: range 00000000143794A0-00000000143794EE
bool __cdecl PlayerTowerComp::isInTowerLevel(const PlayerTowerComp *const this)
{
  bool v1; // bl
  std::weak_ptr<DungeonScene> v3; // [rsp+10h] [rbp-20h] BYREF

  std::weak_ptr<DungeonScene>::lock(&v3);
  v1 = std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)&v3);
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v3);
  return v1;
};

// Line 1538: range 00000000143794F0-000000001437A8FD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerTowerComp::forceSetUpTowerTeam(PlayerTowerComp *const this, uint32_t tower_team_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v6; // rcx
  std::vector<TowerTeam>::size_type v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  int32_t v13; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  Entity *v21; // rax
  Avatar *v22; // rax
  Avatar *v23; // rax
  Scene *v24; // r14
  uint32_t Uid; // eax
  unsigned __int64 v26; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rcx
  MirrorAvatar *v31; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  PlayerAvatarComp *v35; // rax
  Player *v36; // r14
  PlayerBasicComp *v37; // rax
  PlayerAvatarComp *v38; // r14
  const std::vector<long unsigned int> *v39; // rsi
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  PlayerAvatarComp *v41; // rax
  PlayerBasicComp *v42; // rax
  PlayerAvatarComp *v43; // rax
  int32_t result; // eax
  std::string v45; // [rsp+0h] [rbp-200h] OVERLAPPED BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-1E0h] BYREF
  uint64_t appear_avatar_guid; // [rsp+28h] [rbp-1D8h]
  const std::vector<long unsigned int> *mirror_avatar_guid_vec; // [rsp+30h] [rbp-1D0h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-1C8h]
  const std::vector<long unsigned int> *__for_range; // [rsp+40h] [rbp-1C0h]
  const data::TowerBuffExcelConfig *tower_buff_config_ptr; // [rsp+48h] [rbp-1B8h]
  std::string v52; // [rsp+50h] [rbp-1B0h] BYREF
  char v53[400]; // [rsp+70h] [rbp-190h] BYREF

  v45._M_string_length = (std::string::size_type)this;
  HIDWORD(v45._M_dataplus._M_p) = tower_team_id;
  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 11 holder:1539 48 1 11 holder:1619 64 4 21 tower_team_index:1552 80 8 9 guid:1596 112 16"
                        " 22 dungeon_scene_ptr:1541 144 16 19 cur_avatar_ptr:1573 176 16 22 appear_avatar_ptr:1595 208 16"
                        " 24 for_show_notify_ptr:1615 240 16 15 avatar_ptr:1598 272 48 20 player_location:1587";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::forceSetUpTowerTeam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = 62194;
  v4[536862727] = 62194;
  v4[536862728] = 62194;
  v4[536862730] = -202116109;
  if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v45._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v45._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v52, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x974u, v45);
  std::string::~string(&v52);
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 112));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "forceSetUpTowerTeam",
      1544);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)&v52,
           (const char (*)[35])"dungeon_scene_ptr is null, player:");
    if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v45._M_string_length + 24);
LABEL_25:
    operator<<(v6, *(const Player **)(v45._M_string_length + 24));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v52);
    v13 = -1;
    goto LABEL_90;
  }
  if ( TowerCurLevelRecord::isEmpty((const TowerCurLevelRecord *const)(v45._M_string_length + 152)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "forceSetUpTowerTeam",
      1549);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)&v52,
           (const char (*)[35])"cur_level_record is empty, player:");
    if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v45._M_string_length + 24);
    goto LABEL_25;
  }
  *(_DWORD *)(v2 + 64) = HIDWORD(v45._M_dataplus._M_p) - 1;
  v7 = *(unsigned int *)(v2 + 64);
  if ( v7 < std::vector<TowerTeam>::size((const std::vector<TowerTeam> *const)(v45._M_string_length + 160)) )
  {
    mirror_avatar_guid_vec = &std::vector<TowerTeam>::operator[](
                                (std::vector<TowerTeam> *const)(v45._M_string_length + 160),
                                *(unsigned int *)(v2 + 64))->mirror_avatar_guid_vec;
    if ( std::vector<unsigned long>::empty(mirror_avatar_guid_vec) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "forceSetUpTowerTeam",
        1561);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             (common::milog::MiLogStream *const)&v52,
             (const char (*)[41])"mirror_avatar_guid_vec is empty, player:");
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      goto LABEL_25;
    }
    v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
    scene_script_config_ptr = Scene::getScriptConfig((const Scene *const)v14);
    if ( !scene_script_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "forceSetUpTowerTeam",
        1569);
      v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)&v52,
              (const char (*)[29])"getScriptConfig fail, scene:");
      v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      v17 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v15, v16);
      v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      goto LABEL_25;
    }
    if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v45._M_string_length + 24);
    Player::getAvatarComp(*(Player *const *)(v45._M_string_length + 24));
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 144));
    if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v52,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "forceSetUpTowerTeam",
        1576);
      v18 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&v52,
              (const char (*)[27])"getCurAvatar fail, player:");
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      operator<<(v18, *(const Player **)(v45._M_string_length + 24));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v52);
      v13 = -1;
    }
    else
    {
      v19 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(v19);
      v20 = *(_QWORD *)v19 + 80LL;
      if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
        v19 = __asan_report_load8(*(_QWORD *)v19 + 80LL);
      (*(void (__fastcall **)(unsigned __int64, Vector3 *))v20)(v19, &scene_script_config_ptr->born_pos);
      v21 = (Entity *)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      Entity::setRotation(v21, &scene_script_config_ptr->born_rot);
      v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      Avatar::setLastValidPos(v22, &scene_script_config_ptr->born_pos);
      v23 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
      Avatar::setLastValidRot(v23, &scene_script_config_ptr->born_rot);
      ScenePlayerLocation::ScenePlayerLocation((ScenePlayerLocation *const)(v2 + 272));
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
      *(Vector3 *)(v2 + 272) = scene_script_config_ptr->born_pos;
      if ( *(char *)(((unsigned __int64)&scene_script_config_ptr->born_rot >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)scene_script_config_ptr - 29) & 7) >= *(_BYTE *)((((unsigned __int64)&scene_script_config_ptr->born_rot.z
                                                                               + 3) >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load_n(&scene_script_config_ptr->born_rot, 12LL);
      }
      *(Vector3 *)(v2 + 284) = scene_script_config_ptr->born_rot;
      *(Vector3 *)(v2 + 296) = scene_script_config_ptr->born_pos;
      *(Vector3 *)(v2 + 308) = scene_script_config_ptr->born_rot;
      v24 = (Scene *)std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 112));
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      Uid = Player::getUid(*(const Player *const *)(v45._M_string_length + 24));
      Scene::setPlayerLocation(v24, Uid, (const ScenePlayerLocation *)(v2 + 272));
      appear_avatar_guid = 0LL;
      *(_QWORD *)(v2 + 176) = 0LL;
      *(_QWORD *)(v2 + 184) = 0LL;
      __for_range = mirror_avatar_guid_vec;
      *((std::vector<long unsigned int>::const_iterator *)&v45._anon_0._M_allocated_capacity + 1) = std::vector<unsigned long>::begin(mirror_avatar_guid_vec);
      __for_end._M_current = std::vector<unsigned long>::end(mirror_avatar_guid_vec)._M_current;
      while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(
                (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *)&v45._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v26 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(
                                  (const __gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&v45._anon_0._M_allocated_capacity
                                + 1);
        if ( *(_BYTE *)((v26 >> 3) + 0x7FFF8000) )
          v26 = __asan_report_load8(v26);
        *(_QWORD *)(v2 + 80) = *(_QWORD *)v26;
        if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v45._M_string_length + 24);
        AvatarComp = Player::getAvatarComp(*(Player *const *)(v45._M_string_length + 24));
        PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v2 + 240), (uint64_t)AvatarComp);
        if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v2 + 240)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v52,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "forceSetUpTowerTeam",
            1601);
          v28 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  (common::milog::MiLogStream *const)&v52,
                  (const char (*)[23])"findAvatar fail, guid:");
          v29 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v28,
                  (const unsigned __int64 *)(v2 + 80));
          v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v45._M_string_length + 24);
          operator<<(v30, *(const Player **)(v45._M_string_length + 24));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v52);
        }
        else
        {
          v31 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240));
          PlayerTowerComp::checkAndResetMirrorAvatarCurProp((PlayerTowerComp *const)v45._M_string_length, v31);
          if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 176))
            || (v32 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 176)),
                Creature::getLifeState(v32) != LIFE_ALIVE)
            && (v33 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240)),
                Creature::getLifeState(v33) == LIFE_ALIVE) )
          {
            appear_avatar_guid = *(_QWORD *)(v2 + 80);
            std::shared_ptr<Avatar>::operator=<MirrorAvatar>(
              (std::shared_ptr<Avatar> *const)(v2 + 176),
              (const std::shared_ptr<MirrorAvatar> *)(v2 + 240));
          }
        }
        std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v2 + 240));
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(
          (__gnu_cxx::__normal_iterator<long unsigned int const*,std::vector<long unsigned int> > *const)&v45._anon_0._M_allocated_capacity
        + 1);
      }
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      v35 = Player::getAvatarComp(*(Player *const *)(v45._M_string_length + 24));
      PlayerAvatarComp::triggerCombatEnd(v35, COMBAT_END_TOWER_HALF_LEVEL_END);
      common::tools::perf::make_shared<proto::TowerMiddleLevelChangeTeamNotify>();
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      v36 = *(Player **)(v45._M_string_length + 24);
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::TowerMiddleLevelChangeTeamNotify>((const std::shared_ptr<proto::TowerMiddleLevelChangeTeamNotify> *)(v2 + 240));
      Player::sendMessage(v36, (common::minet::ConstMessagePtr *)(v2 + 240), 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 240));
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      v37 = Player::getBasicComp(*(Player *const *)(v45._M_string_length + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v52, v37);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x45Bu, v45);
      std::string::~string(&v52);
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      v38 = Player::getAvatarComp(*(Player *const *)(v45._M_string_length + 24));
      std::shared_ptr<Scene>::shared_ptr<DungeonScene,void>(
        (std::shared_ptr<Scene> *const)(v2 + 240),
        (const std::shared_ptr<DungeonScene> *)(v2 + 112));
      v39 = mirror_avatar_guid_vec;
      PlayerAvatarComp::setSceneTeamAndAddToScene(
        v38,
        mirror_avatar_guid_vec,
        appear_avatar_guid,
        (ScenePtr *)(v2 + 240),
        CHANGE_SCENE_TEAM_REASON_TOWER);
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 240));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
      if ( HIDWORD(v45._M_dataplus._M_p) > 1 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 240));
        p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 240))->design_config.txt_config_mgr.tower_config_mgr;
        if ( *(_BYTE *)(((v45._M_string_length + 284) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(v45._M_string_length) + 28) & 7) + 3) >= *(_BYTE *)(((v45._M_string_length + 284) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(v45._M_string_length + 284);
        }
        v39 = (const std::vector<long unsigned int> *)*(unsigned int *)(v45._M_string_length + 284);
        tower_buff_config_ptr = data::TowerExcelConfigMgrBase::findTowerBuffExcelConfig(
                                  p_tower_config_mgr,
                                  (uint32_t)v39);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 240));
        if ( tower_buff_config_ptr )
        {
          v39 = (const std::vector<long unsigned int> *)((((_BYTE)tower_buff_config_ptr + 12) & 7u) + 3);
          if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->lasting_type >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)tower_buff_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->lasting_type >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&tower_buff_config_ptr->lasting_type);
          }
          if ( tower_buff_config_ptr->lasting_type == TOWER_BUFF_LASTING_IMMEDIATE )
          {
            if ( *(_BYTE *)(((v45._M_string_length + 284) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(v45._M_string_length) + 28) & 7) + 3) >= *(_BYTE *)(((v45._M_string_length + 284) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(v45._M_string_length + 284);
            }
            PlayerTowerComp::delTowerTeamBuff(
              (PlayerTowerComp *const)v45._M_string_length,
              *(_DWORD *)(v45._M_string_length + 284));
            if ( *(_BYTE *)(((v45._M_string_length + 284) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(v45._M_string_length) + 28) & 7) + 3) >= *(_BYTE *)(((v45._M_string_length + 284) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(v45._M_string_length + 284);
            }
            v39 = (const std::vector<long unsigned int> *)*(unsigned int *)(v45._M_string_length + 284);
            PlayerTowerComp::addTowerTeamBuff((PlayerTowerComp *const)v45._M_string_length, (uint32_t)v39);
          }
        }
      }
      if ( *(_BYTE *)(((v45._M_string_length + 328) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v45._M_string_length + 328) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(v45._M_string_length + 328, v39, LOBYTE(v45._M_string_length) + 72);
      }
      *(_DWORD *)(v45._M_string_length + 328) = HIDWORD(v45._M_dataplus._M_p);
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      v41 = Player::getAvatarComp(*(Player *const *)(v45._M_string_length + 24));
      PlayerAvatarComp::setIsAllowUseSkill(v41, 0);
      PlayerTowerComp::logTowerLevelEnter(
        (PlayerTowerComp *const)v45._M_string_length,
        HIDWORD(v45._M_dataplus._M_p) > 1);
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      v42 = Player::getBasicComp(*(Player *const *)(v45._M_string_length + 24));
      PlayerBasicComp::resetCurClimateMeter(v42, 1);
      if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v45._M_string_length + 24);
      v43 = Player::getAvatarComp(*(Player *const *)(v45._M_string_length + 24));
      PlayerAvatarComp::resetAllMoveSpeedCheck(v43);
      v13 = 0;
      std::shared_ptr<proto::TowerMiddleLevelChangeTeamNotify>::~shared_ptr((std::shared_ptr<proto::TowerMiddleLevelChangeTeamNotify> *const)(v2 + 208));
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 176));
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 144));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v52,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "forceSetUpTowerTeam",
      1555);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
           (common::milog::MiLogStream *const)&v52,
           (const char (*)[18])"tower_team_index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v9, (const char (*)[18])" tower_team_size:");
    __for_end._M_current = (const unsigned __int64 *)std::vector<TowerTeam>::size((const std::vector<TowerTeam> *const)(v45._M_string_length + 160));
    v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v10,
            (const unsigned __int64 *)&__for_end);
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((v45._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v45._M_string_length + 24);
    operator<<(v12, *(const Player **)(v45._M_string_length + 24));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v52);
    v13 = -1;
  }
LABEL_90:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 112));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  result = v13;
  if ( v53 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1649: range 000000001437A8FE-000000001437AAFE
uint32_t __cdecl PlayerTowerComp::getMonthlyLevelConfigId(const PlayerTowerComp *const this)
{
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( !this->tower_schedule_id_ || TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(p_tower_config_mgr, this->tower_schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( schedule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->monthly_level_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->monthly_level_config_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->monthly_level_config_id);
    }
    return schedule_config_ptr->monthly_level_config_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/tower/player_tower_comp.cpp",
      "getMonthlyLevelConfigId",
      1657);
    v4 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v8, (const char (*)[20])"tower_schedule_id_:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->tower_schedule_id_);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v5, (const char (*)[19])" config not found!");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return 0;
  }
};

// Line 1665: range 000000001437AB00-000000001437AD5F
uint32_t __cdecl PlayerTowerComp::getFloorLevelConfigId(const PlayerTowerComp *const this)
{
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t cur_floor_index; // edx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( !this->tower_schedule_id_ || TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->cur_level_record_;
    __asan_report_load4(&this->cur_level_record_);
  }
  cur_floor_index = this->cur_level_record_.cur_floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(
                       p_tower_config_mgr,
                       this->tower_schedule_id_,
                       cur_floor_index);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( floor_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_level_config_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&floor_config_ptr->floor_level_config_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&floor_config_ptr->floor_level_config_id);
    }
    return floor_config_ptr->floor_level_config_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/tower/player_tower_comp.cpp",
      "getFloorLevelConfigId",
      1673);
    v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v12,
           (const char (*)[20])"tower_schedule_id_:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->tower_schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v6, (const char (*)[14])" floor_index:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v7,
           &this->cur_level_record_.cur_floor_index);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v8, (const char (*)[25])" floor config not found!");
    common::milog::MiLogStream::~MiLogStream(&v12);
    return 0;
  }
};

// Line 1682: range 000000001437AD60-000000001437AF20
bool __cdecl PlayerTowerComp::isNeedSetTeamByTower(const PlayerTowerComp *const this, ScenePtr *p_dest_scene_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // r15
  bool result; // al
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 26 cur_dungeon_scene_ptr:1683 64 16 27 dest_dungeon_scene_ptr:1688";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::isNeedSetTeamByTower;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 32));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = 0;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v2 + 64));
    v5 = std::operator==<DungeonScene,DungeonScene>(
           (const std::shared_ptr<DungeonScene> *)(v2 + 32),
           (const std::shared_ptr<DungeonScene> *)(v2 + 64))
      && !TowerCurLevelRecord::isEmpty(&this->cur_level_record_);
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  result = v5;
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
  return result;
};

// Line 1694: range 000000001437AF22-000000001437B79D
int32_t __cdecl PlayerTowerComp::initEnterSceneAvatarByTower(
        PlayerTowerComp *const this,
        ScenePtr *p_dest_scene_ptr,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rcx
  int32_t v8; // r14d
  std::vector<TowerTeam>::size_type v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  unsigned __int64 v16; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  MirrorAvatar *v21; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v25; // rcx
  int32_t result; // eax
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  const std::vector<long unsigned int> *mirror_avatar_guid_vec; // [rsp+30h] [rbp-130h]
  const std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Avatar> __x; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-110h] BYREF
  char v35[240]; // [rsp+70h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 21 tower_team_index:1708 64 8 9 guid:1717 96 16 26 cur_dungeon_scene_ptr:1695 128 16 27 d"
                        "est_dungeon_scene_ptr:1702 160 16 15 avatar_ptr:1719";
  *(_QWORD *)(v4 + 16) = PlayerTowerComp::initEnterSceneAvatarByTower;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -219021312;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v4 + 96));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "initEnterSceneAvatarByTower",
      1698);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v34, (const char (*)[28])off_25320420);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v34);
    v8 = 1530;
  }
  else
  {
    std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v4 + 128));
    if ( TowerCurLevelRecord::isEmpty(&this->cur_level_record_)
      || std::operator!=<DungeonScene,DungeonScene>(
           (const std::shared_ptr<DungeonScene> *)(v4 + 96),
           (const std::shared_ptr<DungeonScene> *)(v4 + 128)) )
    {
      v8 = 1523;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_team_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_team_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_level_record_.cur_tower_team_id);
      }
      *(_DWORD *)(v4 + 48) = this->cur_level_record_.cur_tower_team_id - 1;
      v10 = *(unsigned int *)(v4 + 48);
      if ( v10 < std::vector<TowerTeam>::size(&this->cur_level_record_.tower_team_vec) )
      {
        mirror_avatar_guid_vec = &std::vector<TowerTeam>::operator[](
                                    &this->cur_level_record_.tower_team_vec,
                                    *(unsigned int *)(v4 + 48))->mirror_avatar_guid_vec;
        std::vector<std::shared_ptr<Avatar>>::clear(enter_scene_avatar_vec);
        __for_range = mirror_avatar_guid_vec;
        __for_begin._M_current = std::vector<unsigned long>::begin(mirror_avatar_guid_vec)._M_current;
        __for_end._M_current = std::vector<unsigned long>::end(mirror_avatar_guid_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
        {
          v16 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            v16 = __asan_report_load8(v16);
          *(_QWORD *)(v4 + 64) = *(_QWORD *)v16;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          AvatarComp = Player::getAvatarComp(this->player_);
          PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v4 + 160), (uint64_t)AvatarComp);
          if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v4 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v34,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/tower/player_tower_comp.cpp",
              "initEnterSceneAvatarByTower",
              1722);
            v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                    &v34,
                    (const char (*)[23])"findAvatar fail, guid:");
            v19 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v18,
                    (const unsigned __int64 *)(v4 + 64));
            v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            operator<<(v20, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v34);
          }
          else
          {
            v21 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
            PlayerTowerComp::checkAndResetMirrorAvatarCurProp(this, v21);
            std::shared_ptr<Avatar>::shared_ptr<MirrorAvatar,void>(
              &__x,
              (const std::shared_ptr<MirrorAvatar> *)(v4 + 160));
            std::vector<std::shared_ptr<Avatar>>::push_back(enter_scene_avatar_vec, &__x);
            std::shared_ptr<Avatar>::~shared_ptr(&__x);
            if ( std::operator==<Avatar>(0LL, appear_avatar_ptr)
              || (v22 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)appear_avatar_ptr),
                  Creature::getLifeState(v22) != LIFE_ALIVE)
              && (v23 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160)),
                  Creature::getLifeState(v23) == LIFE_ALIVE) )
            {
              std::shared_ptr<Avatar>::operator=<MirrorAvatar>(
                appear_avatar_ptr,
                (const std::shared_ptr<MirrorAvatar> *)(v4 + 160));
            }
          }
          std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v4 + 160));
          __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
        }
        if ( std::vector<std::shared_ptr<Avatar>>::empty(enter_scene_avatar_vec) )
        {
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "initEnterSceneAvatarByTower",
            1735);
          v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v34,
                  (const char (*)[42])"enter_scene_avatar_vec. is empty, player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v25, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v34);
          v8 = -1;
        }
        else
        {
          v8 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "initEnterSceneAvatarByTower",
          1711);
        v11 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                &v34,
                (const char (*)[18])"tower_team_index:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v4 + 48));
        v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v12,
                (const char (*)[18])" tower_team_size:");
        __for_end._M_current = (const unsigned __int64 *)std::vector<TowerTeam>::size(&this->cur_level_record_.tower_team_vec);
        v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v13,
                (const unsigned __int64 *)&__for_end);
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v15, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v34);
        v8 = -1;
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 128));
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 96));
  result = v8;
  if ( v35 == (char *)v4 )
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

// Line 1744: range 000000001437B79E-000000001437B90B
bool __fastcall PlayerTowerComp::isTowerLevelFinished(
        const PlayerTowerComp *const this,
        uint32_t floor_index,
        uint32_t level_index)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::pointer v7; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 floor_index:1743 64 8 9 iter:1745";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::isTowerLevelFinished;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = floor_index;
  *(std::map<unsigned int,TowerFloorRecord>::const_iterator *)(v3 + 64) = std::map<unsigned int,TowerFloorRecord>::find(
                                                                            &this->tower_floor_record_map_,
                                                                            (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v3 + 64));
    result = std::vector<LevelRecord>::size(&v7->second.passed_level_record_vec) >= level_index;
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
  return result;
};

// Line 1755: range 000000001437B90C-000000001437BBBF
bool __cdecl PlayerTowerComp::isFinishEntranceFloor(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool result; // al
  std::map<unsigned int,TowerFloorRecord>::iterator v5; // rax
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *last_entrance_floor_index; // [rsp+18h] [rbp-A8h]
  std::tuple<unsigned int,unsigned int> __t; // [rsp+28h] [rbp-98h] BYREF
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-80h] BYREF
  char v12[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 last_iter:1761";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::isFinishEntranceFloor;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( std::map<unsigned int,TowerFloorRecord>::empty(&this->tower_floor_record_map_) )
  {
    result = 0;
  }
  else
  {
    v5._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    *(std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *)(v1 + 32) = std::prev<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>(
                                                                                              v5,
                                                                                              1LL);
    __t = (std::tuple<unsigned int,unsigned int>)std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v1 + 32),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)&__t) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "isFinishEntranceFloor",
        1764);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        &v11,
        (const char (*)[39])"tower floor record should not be empty");
      common::milog::MiLogStream::~MiLogStream(&v11);
      result = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v10);
      std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
      TowerExcelConfigMgr::getTowerEntranceFloorConfig((const TowerExcelConfigMgr *const)&__t);
      std::shared_ptr<Config>::~shared_ptr(&v10);
      last_entrance_floor_index = std::get<0ul,unsigned int,unsigned int>(&__t);
      std::get<1ul,unsigned int,unsigned int>(&__t);
      v6 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v1 + 32));
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v6 >> 3) + 0x7FFF8000) <= 3 )
        v6 = __asan_report_load4(v6);
      v7 = *(_DWORD *)v6;
      if ( *(_BYTE *)(((unsigned __int64)last_entrance_floor_index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)last_entrance_floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)last_entrance_floor_index >> 3)
                                                                                    + 0x7FFF8000) )
      {
        __asan_report_load4(last_entrance_floor_index);
      }
      result = v7 > *last_entrance_floor_index;
    }
  }
  if ( v12 == (char *)v1 )
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

// Line 1775: range 000000001437BBC0-000000001437BCF2
void __cdecl PlayerTowerComp::checkAndRefresh(PlayerTowerComp *const this)
{
  PlayerBasicComp *BasicComp; // rax
  char v2; // al
  uint32_t old_tower_schedule_id; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x2Au) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tower_schedule_id_);
    }
    old_tower_schedule_id = this->tower_schedule_id_;
    PlayerTowerComp::checkAndRefreshDailyReward(this);
    PlayerTowerComp::checkAndRefreshTowerSchedule(this);
    if ( !old_tower_schedule_id )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tower_schedule_id_);
    }
    if ( old_tower_schedule_id != this->tower_schedule_id_ && !PlayerTowerComp::isInTowerLevel(this) )
      v2 = 1;
    else
LABEL_12:
      v2 = 0;
    if ( v2 )
    {
      PlayerTowerComp::internalResetCurLevelRecord(this);
      PlayerTowerComp::notifyTowerCurLevelRecord(this);
    }
  }
};

// Line 1794: range 000000001437BCF4-000000001437C3F6
void __cdecl PlayerTowerComp::checkAndRefreshTowerSchedule(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  PlayerGmComp *GmComp; // rax
  char v7; // r15
  PlayerGmComp *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v15; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  std::shared_ptr<Config> v20; // [rsp+10h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "2 48 4 8 now:1796 64 4 27 next_tower_schedule_id:1797";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::checkAndRefreshTowerSchedule;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  *(_DWORD *)(v1 + 48) = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  *(_DWORD *)(v1 + 64) = TowerExcelConfigMgr::findTowerScheduleConfigIdByTimestamp(
                           &v4->design_config.txt_config_mgr.tower_config_mgr,
                           *(_DWORD *)(v1 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v20);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  if ( *(_BYTE *)(((unsigned __int64)&v5->is_gm_talk_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)v5 + 45) & 7) >= *(_BYTE *)(((unsigned __int64)&v5->is_gm_talk_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&v5->is_gm_talk_open);
  }
  if ( !v5->is_gm_talk_open )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GmComp = Player::getGmComp(this->player_);
  if ( PlayerGmComp::getGmSetValue<unsigned int>(GmComp, 9u) )
    v7 = 1;
  else
LABEL_11:
    v7 = 0;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( v7 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v8 = Player::getGmComp(this->player_);
    *(_DWORD *)(v1 + 64) = PlayerGmComp::getGmSetValue<unsigned int>(v8, 9u);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( this->tower_schedule_id_ == *(_DWORD *)(v1 + 64) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkAndRefreshTowerSchedule",
      1804);
    v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v21,
           (const char (*)[25])"same tower schedule now:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v10, (const char (*)[14])" schedule_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->tower_schedule_id_);
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_21:
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    goto LABEL_48;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( this->tower_schedule_id_ && PlayerTowerComp::internalFinishSchedule(this) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkAndRefreshTowerSchedule",
      1811);
    v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"finish current tower schedule fail. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v15, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    PlayerTowerComp::internalClearAllData(this);
  }
  if ( *(_DWORD *)(v1 + 64) && PlayerTowerComp::internalStartSchedule(this, *(_DWORD *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkAndRefreshTowerSchedule",
      1817);
    v17 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            &v21,
            (const char (*)[52])"internalStartSchedule fail, next_tower_schedule_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v1 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v18, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_21;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( Player::isLogin(this->player_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v19 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
      v19 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
    (*(void (__fastcall **)(PlayerTowerComp *const))v19)(this);
  }
LABEL_48:
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

// Line 1831: range 000000001437C3F8-000000001437C534
void __cdecl PlayerTowerComp::updateDailyRewardRecord(
        PlayerTowerComp *const this,
        uint32_t floor_index,
        uint32_t level_index)
{
  __int64 v3; // rsi
  bool v4; // dl

  if ( *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_floor_index_);
  }
  if ( floor_index > this->daily_floor_index_ )
    goto LABEL_8;
  if ( floor_index == this->daily_floor_index_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->daily_level_index_);
    }
    if ( level_index > this->daily_level_index_ )
    {
LABEL_8:
      v3 = (((_BYTE)this + 92) & 7u) + 3;
      v4 = *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3)
                                                            + 0x7FFF8000);
      if ( v4 )
        __asan_report_store4(&this->daily_floor_index_, v3, v4);
      this->daily_floor_index_ = floor_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->daily_level_index_, v3, (_BYTE)this + 96);
      }
      this->daily_level_index_ = level_index;
      PlayerTowerComp::notifyTowerDailyRewardProgress(this);
    }
  }
};

// Line 1841: range 000000001437C536-000000001437C7A1
void __cdecl PlayerTowerComp::checkAndRefreshDailyReward(PlayerTowerComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  time_t v2; // rdx
  time_t last_daily_reward_time; // rsi
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rcx
  __int64 v7; // rsi
  bool v8; // dl
  uint32_t offset; // [rsp+18h] [rbp-48h]
  uint32_t now; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  now = common::tools::TimeUtils::getNow();
  v2 = offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_daily_reward_time_);
  }
  last_daily_reward_time = this->last_daily_reward_time_;
  if ( common::tools::TimeUtils::isSameDay(now, last_daily_reward_time, v2) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkAndRefreshDailyReward",
      1847);
    v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v12,
           (const char (*)[23])"isSameDay schedule_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->tower_schedule_id_);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v5, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  else if ( !PlayerTowerComp::isInTowerLevel(this) )
  {
    std::map<unsigned int,std::vector<unsigned int>>::clear(&this->daily_level_buff_map_);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_daily_reward_time_, last_daily_reward_time, (_BYTE)this + 88);
    }
    this->last_daily_reward_time_ = now;
    v7 = (((_BYTE)this + 92) & 7u) + 3;
    v8 = *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3)
                                                          + 0x7FFF8000);
    if ( v8 )
      __asan_report_store4(&this->daily_floor_index_, v7, v8);
    this->daily_floor_index_ = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->daily_level_index_, v7, (_BYTE)this + 96);
    }
    this->daily_level_index_ = 0;
  }
};

// Line 1868: range 000000001437C7A2-000000001437C91D
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerTowerComp::internalStartSchedule(PlayerTowerComp *const this, uint32_t next_tower_schedule_id)
{
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( this->tower_schedule_id_ )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "internalStartSchedule",
      1871);
    v2 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v6,
           (const char (*)[40])"already has schedule currently. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v3 = operator<<(v2, this->player_);
    v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v3, (const char (*)[21])" tower_schedule_id_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->tower_schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->tower_schedule_id_, *(_QWORD *)&next_tower_schedule_id, (_BYTE)this + 32);
    }
    this->tower_schedule_id_ = next_tower_schedule_id;
    PlayerTowerComp::findOrAddTowerFloorRecord(this, 1u);
    return 0;
  }
};

// Line 1881: range 000000001437C91E-000000001437D45A
int32_t __cdecl PlayerTowerComp::internalFinishSchedule(PlayerTowerComp *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  TowerExcelConfigMgr *v9; // rcx
  bool v10; // r15
  common::milog::MiLogStream *v11; // rax
  void *p_tower_schedule_id; // rsi
  std::__tuple_element_t_21 *v13; // rax
  uint32_t *v14; // rdx
  std::__tuple_element_t_14 *v15; // rax
  char v16; // cl
  std::map<unsigned int,TowerMonthlySummary>::iterator v17; // rax
  TowerMonthlySummary *v18; // rax
  unsigned int *v19; // rcx
  TowerMonthlySummary *v20; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerMonthlySummary> >,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  int32_t result; // eax
  uint32_t last_floor_index; // [rsp+14h] [rbp-18Ch]
  uint32_t last_level_index; // [rsp+18h] [rbp-188h]
  uint32_t total_star_num; // [rsp+1Ch] [rbp-184h]
  uint32_t last_entrance_floor_index; // [rsp+20h] [rbp-180h]
  std::map<unsigned int,TowerFloorRecord>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  const data::TowerScheduleExcelConfig *old_tower_schedule_config_ptr; // [rsp+30h] [rbp-170h]
  std::map<unsigned int,TowerFloorRecord> *__for_range; // [rsp+38h] [rbp-168h]
  TowerMonthlyCombatRecord *combat_summary; // [rsp+40h] [rbp-160h]
  const std::pair<unsigned int const,TowerFloorRecord> *v33; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_index; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_record; // [rsp+58h] [rbp-148h]
  std::shared_ptr<Config> v36; // [rsp+60h] [rbp-140h] BYREF
  common::milog::MiLogStream v37; // [rsp+70h] [rbp-130h] BYREF
  char v38[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 28 last_passed_floor_index:1923 64 8 6 t:1931 96 96 20 monthly_summary:1939";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::internalFinishSchedule;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( !this->tower_schedule_id_ )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "internalFinishSchedule",
      1884);
    v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v37,
           (const char (*)[31])"no schedule currently. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_9:
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v37);
    v1 = -1;
    goto LABEL_50;
  }
  if ( std::map<unsigned int,TowerFloorRecord>::empty(&this->tower_floor_record_map_) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/tower/player_tower_comp.cpp",
      "internalFinishSchedule",
      1891);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v37,
           (const char (*)[43])"tower floor record not consistent, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_9;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  old_tower_schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(
                                    p_tower_config_mgr,
                                    this->tower_schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v36);
  if ( old_tower_schedule_config_ptr )
  {
    last_floor_index = 0;
    last_level_index = 0;
    total_star_num = 0;
    __for_range = &this->tower_floor_record_map_;
    __for_begin._M_node = std::map<unsigned int,TowerFloorRecord>::begin(&this->tower_floor_record_map_)._M_node;
    *(std::map<unsigned int,TowerFloorRecord>::iterator *)(v2 + 64) = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_);
    while ( std::operator!=(
              &__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v2 + 64)) )
    {
      v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator*(&__for_begin);
      floor_index = std::get<0ul,unsigned int const,TowerFloorRecord>(v33);
      floor_record = (std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *)std::get<1ul,unsigned int const,TowerFloorRecord>(v33);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v36);
      v9 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.tower_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(floor_index);
      }
      v10 = !TowerExcelConfigMgr::isIndexEntranceFloor(v9, *floor_index);
      std::shared_ptr<Config>::~shared_ptr(&v36);
      if ( v10 )
        total_star_num += TowerFloorRecord::getTotalStarNum(floor_record);
      if ( !std::vector<LevelRecord>::empty(&floor_record->passed_level_record_vec) )
      {
        if ( *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)floor_index >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4(floor_index);
        }
        last_floor_index = *floor_index;
        last_level_index = std::vector<LevelRecord>::size(&floor_record->passed_level_record_vec);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator++(&__for_begin);
    }
    *(_DWORD *)(v2 + 48) = last_floor_index - 1;
    if ( !PlayerTowerComp::checkFloorEnterable(this, last_floor_index + 1) )
      *(_DWORD *)(v2 + 48) = last_floor_index;
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "internalFinishSchedule",
      1929);
    v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v37,
            (const char (*)[33])"[TOWER] last passed floor index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v36);
    p_tower_schedule_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36)->design_config.txt_config_mgr.tower_config_mgr;
    TowerExcelConfigMgr::getTowerEntranceFloorConfig((const TowerExcelConfigMgr *const)(v2 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v36);
    v13 = std::get<0ul,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int> *)(v2 + 64));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    last_entrance_floor_index = *v14;
    v15 = std::get<1ul,unsigned int,unsigned int>((std::tuple<unsigned int,unsigned int> *)(v2 + 64));
    v16 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    LOBYTE(p_tower_schedule_id) = v16 != 0;
    if ( v16 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v16 )
      __asan_report_load4(v15);
    if ( last_floor_index <= last_entrance_floor_index || !last_level_index )
      goto LABEL_45;
    TowerMonthlySummary::TowerMonthlySummary((TowerMonthlySummary *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tower_schedule_id_);
    }
    *(_DWORD *)(v2 + 96) = this->tower_schedule_id_;
    *(_DWORD *)(v2 + 100) = last_floor_index;
    *(_DWORD *)(v2 + 104) = last_level_index;
    *(_DWORD *)(v2 + 108) = total_star_num;
    *(_DWORD *)(v2 + 112) = *(_DWORD *)(v2 + 48);
    combat_summary = (TowerMonthlyCombatRecord *)(v2 + 120);
    TowerMonthlyCombatRecord::updateAllData((TowerMonthlyCombatRecord *const)(v2 + 120), &this->tower_fight_statisic_);
    if ( std::map<unsigned int,TowerMonthlySummary>::size(&this->tower_monthly_summary_map_) == 24 )
    {
      v17._M_node = std::map<unsigned int,TowerMonthlySummary>::begin(&this->tower_monthly_summary_map_)._M_node;
      std::map<unsigned int,TowerMonthlySummary>::erase[abi:cxx11](&this->tower_monthly_summary_map_, v17);
    }
    v18 = std::move<TowerMonthlySummary &>((TowerMonthlySummary *)(v2 + 96));
    p_tower_schedule_id = &this->tower_schedule_id_;
    v21 = std::map<unsigned int,TowerMonthlySummary>::emplace<unsigned int &,TowerMonthlySummary>(
            &this->tower_monthly_summary_map_,
            &this->tower_schedule_id_,
            v18,
            v19,
            v20);
    if ( !v21.second )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "internalFinishSchedule",
        1956);
      v22 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v37, (const char (*)[23])off_25321CE0);
      p_tower_schedule_id = &this->tower_schedule_id_;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &this->tower_schedule_id_);
      common::milog::MiLogStream::~MiLogStream(&v37);
      v1 = -1;
      v23 = 0;
    }
    else
    {
      v23 = 1;
    }
    TowerMonthlySummary::~TowerMonthlySummary((TowerMonthlySummary *const)(v2 + 96));
    if ( v23 == 1 )
    {
LABEL_45:
      if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->tower_schedule_id_, p_tower_schedule_id, (_BYTE)this + 32);
      }
      this->tower_schedule_id_ = 0;
      common::tools::MiscUtils::erase_if<unsigned int,TowerFloorRecord,PlayerTowerComp::internalFinishSchedule(void)::{lambda(unsigned int const&)#1}>(
        &this->tower_floor_record_map_,
        (PlayerTowerComp::internalFinishSchedule::<lambda(const auto:27&)>)last_entrance_floor_index);
      TowerFightStatistic::clear(&this->tower_fight_statisic_);
      if ( *(char *)(((unsigned __int64)&this->is_interact_this_schedule_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(
          &this->is_interact_this_schedule_,
          last_entrance_floor_index,
          &this->is_interact_this_schedule_);
      this->is_interact_this_schedule_ = 0;
      v1 = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/tower/player_tower_comp.cpp",
      "internalFinishSchedule",
      1898);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v37, (const char (*)[24])off_25321BE0);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->tower_schedule_id_);
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
      v8,
      (const char (*)[49])" config not found! not to refresh tower schedule");
    common::milog::MiLogStream::~MiLogStream(&v37);
    v1 = -1;
  }
LABEL_50:
  result = v1;
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1964: range 00000000143E876E-00000000143E87F7
bool __cdecl PlayerTowerComp::internalFinishSchedule::_lambda_const_auto_27___::operator()_std::pair_unsigned_int_const_TowerFloorRecord___(
        const PlayerTowerComp::internalFinishSchedule::<lambda(const auto:27&)> *const __closure,
        const std::pair<unsigned int const,TowerFloorRecord> *record_pair)
{
  uint32_t first; // ecx

  if ( *(_BYTE *)(((unsigned __int64)record_pair >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)record_pair >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(record_pair);
  }
  first = record_pair->first;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure);
  }
  return first > __closure->__last_entrance_floor_index;
};

// Line 1977: range 000000001437D45C-000000001437D8BB
void __cdecl PlayerTowerComp::internalClearAllData(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rsi
  bool v8; // dl
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-1D0h] BYREF
  std::string val; // [rsp+30h] [rbp-1B0h] BYREF
  char v11[400]; // [rsp+50h] [rbp-190h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(352LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 248 26 player_tower_comp_bin:1979";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::internalClearAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862728] = -218103808;
  v3[536862729] = -202116109;
  v3[536862730] = -202116109;
  proto::PlayerTowerCompBin::PlayerTowerCompBin((proto::PlayerTowerCompBin *const)(v1 + 32));
  PlayerTowerComp::toBin(this, (proto::PlayerTowerCompBin *)(v1 + 32));
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/tower/player_tower_comp.cpp",
    "internalClearAllData",
    1981);
  v4 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v9, (const char (*)[8])"player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v5 = operator<<(v4, this->player_);
  v6 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         v5,
         (const char (*)[24])" player_tower_comp_bin:");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)(v1 + 32));
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v9);
  PlayerTowerComp::internalResetCurLevelRecord(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tower_schedule_id_, &val, (_BYTE)this + 32);
  }
  this->tower_schedule_id_ = 0;
  std::map<unsigned int,TowerFloorRecord>::clear(&this->tower_floor_record_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_daily_reward_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_daily_reward_time_, &val, (_BYTE)this + 88);
  }
  this->last_daily_reward_time_ = 0;
  v7 = (((_BYTE)this + 92) & 7u) + 3;
  v8 = *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000);
  if ( v8 )
    __asan_report_store4(&this->daily_floor_index_, v7, v8);
  this->daily_floor_index_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->daily_level_index_, v7, (_BYTE)this + 96);
  }
  this->daily_level_index_ = 0;
  std::map<unsigned int,std::vector<unsigned int>>::clear(&this->daily_level_buff_map_);
  std::__weak_ptr<DungeonScene,(__gnu_cxx::_Lock_policy)2>::reset(&this->cur_dungeon_scene_wtr_);
  if ( *(char *)(((unsigned __int64)&this->is_interact_this_schedule_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_interact_this_schedule_, v7, &this->is_interact_this_schedule_);
  this->is_interact_this_schedule_ = 0;
  TowerFightStatistic::clear(&this->tower_fight_statisic_);
  std::map<unsigned int,TowerMonthlySummary>::clear(&this->tower_monthly_summary_map_);
  proto::PlayerTowerCompBin::~PlayerTowerCompBin((proto::PlayerTowerCompBin *const)(v1 + 32));
  if ( v11 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 1999: range 000000001437D8BC-000000001437D9F5
int32_t __cdecl PlayerTowerComp::internalCreateCurLevelRecord(
        PlayerTowerComp *const this,
        uint32_t floor_index,
        std::vector<TowerTeam> *tower_team_vec)
{
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( !TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "internalCreateCurLevelRecord",
      2002);
    v3 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v8,
           (const char (*)[51])"have cur level record currently. cur_level_record:");
    v4 = operator<<(v3, &this->cur_level_record_);
    v5 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v4, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    std::vector<TowerTeam>::swap(&this->cur_level_record_.tower_team_vec, tower_team_vec);
    return PlayerTowerComp::internalUpdateCurLevelRecord(this, floor_index, 1u);
  }
};

// Line 2011: range 000000001437D9F6-000000001437DF2E
int32_t __cdecl PlayerTowerComp::internalResetCurLevelRecord(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  PlayerAvatarComp *AvatarComp; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  PlayerAvatarComp *v10; // rax
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  int32_t v15; // r14d
  int32_t result; // eax
  std::vector<TowerTeam>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::vector<TowerTeam>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-108h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-100h] BYREF
  std::vector<TowerTeam> *__for_range; // [rsp+38h] [rbp-F8h]
  const TowerTeam *tower_team; // [rsp+40h] [rbp-F0h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Avatar> __a; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+80h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 guid:2016 64 24 20 avatar_guid_vec:2013";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::internalResetCurLevelRecord;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v1 + 64));
  __for_range = &this->cur_level_record_.tower_team_vec;
  __for_begin._M_current = std::vector<TowerTeam>::begin(&this->cur_level_record_.tower_team_vec)._M_current;
  __for_end._M_current = std::vector<TowerTeam>::end(&this->cur_level_record_.tower_team_vec)._M_current;
  while ( __gnu_cxx::operator!=<TowerTeam *,std::vector<TowerTeam>>(&__for_begin, &__for_end) )
  {
    tower_team = __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator*(&__for_begin);
    __for_range_0 = &tower_team->mirror_avatar_guid_vec;
    __for_begin_0._M_current = std::vector<unsigned long>::begin(&tower_team->mirror_avatar_guid_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
    {
      v4 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
        v4 = __asan_report_load8(v4);
      *(_QWORD *)(v1 + 32) = *(_QWORD *)v4;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)&__a, (uint64_t)AvatarComp);
      v6 = std::operator==<Avatar>(0LL, &__a);
      std::shared_ptr<Avatar>::~shared_ptr(&__a);
      if ( v6 )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "internalResetCurLevelRecord",
          2020);
        v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v25,
               (const char (*)[23])"findAvatar fail, guid:");
        v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v7,
               (const unsigned __int64 *)(v1 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v9, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        std::vector<unsigned long>::push_back(
          (std::vector<long unsigned int> *const)(v1 + 64),
          (const std::vector<long unsigned int>::value_type *)(v1 + 32));
      }
      __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator++(&__for_begin);
  }
  if ( std::vector<unsigned long>::empty((const std::vector<long unsigned int> *const)(v1 + 64)) )
    goto LABEL_24;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v10 = Player::getAvatarComp(this->player_);
  if ( PlayerAvatarComp::delInformalAvatarBatchAndReplaceByAvatarTeam(
         v10,
         (const std::vector<long unsigned int> *)(v1 + 64)) )
  {
    v11 = 1;
  }
  else
  {
LABEL_24:
    v11 = 0;
  }
  if ( v11 )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "internalResetCurLevelRecord",
      2029);
    v12 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v25,
            (const char (*)[46])"delInformalAvatarBatch fail, avatar_guid_vec:");
    v13 = common::milog::MiLogStream::operator<<<unsigned long>(v12, (const std::vector<long unsigned int> *)(v1 + 64));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v14, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v25);
    v15 = -1;
  }
  else
  {
    TowerCurLevelRecord::reset(&this->cur_level_record_);
    v15 = 0;
  }
  std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v1 + 64));
  result = v15;
  if ( v26 == (char *)v1 )
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

// Line 2039: range 000000001437DF30-000000001437E8BD
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerTowerComp::internalUpdateCurLevelRecord(
        PlayerTowerComp *const this,
        uint32_t floor_index,
        uint32_t level_index)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  bool v7; // dl
  unsigned __int64 v8; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  int v13; // r15d
  std::_Rb_tree_const_iterator<data::FightPropType>::reference v14; // rax
  _DWORD *v15; // rdx
  __m128i v16; // xmm0
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  FightPropComp *FightPropComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  FightPropComp *v20; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  FightPropComp *v22; // rax
  char *v23; // rsi
  std::map<data::FightPropType,float>::mapped_type *v24; // rax
  float *v25; // rdx
  char v26; // cl
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rcx
  uint32_t cur_tower_buff_id; // ebx
  uint32_t *p_cur_tower_buff_uid; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v33; // rax
  uint32_t *v34; // rdx
  char v35; // cl
  int32_t result; // eax
  float v37; // [rsp+Ch] [rbp-154h]
  float prop_value; // [rsp+2Ch] [rbp-134h]
  std::vector<TowerTeam>::iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::vector<TowerTeam>::iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-120h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-118h] BYREF
  std::set<data::FightPropType>::iterator __for_begin_1; // [rsp+50h] [rbp-110h] BYREF
  std::set<data::FightPropType>::iterator __for_end_1; // [rsp+58h] [rbp-108h] BYREF
  std::vector<TowerTeam> *__for_range; // [rsp+60h] [rbp-100h]
  const data::TowerBuffExcelConfig *tower_buff_config_ptr; // [rsp+68h] [rbp-F8h]
  const TowerTeam *tower_team; // [rsp+70h] [rbp-F0h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+78h] [rbp-E8h]
  std::map<data::FightPropType,float> *mirror_avatar_prop_map; // [rsp+80h] [rbp-E0h]
  const std::set<data::FightPropType> *__for_range_1; // [rsp+88h] [rbp-D8h]
  common::milog::MiLogStream v52; // [rsp+90h] [rbp-D0h] BYREF
  char v53[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 14 prop_type:2055 64 8 9 guid:2046 96 16 22 mirror_avatar_ptr:2048";
  *(_QWORD *)(v4 + 16) = PlayerTowerComp::internalUpdateCurLevelRecord;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_level_record_, *(_QWORD *)&floor_index, (_BYTE)this - 104);
  }
  this->cur_level_record_.cur_floor_index = floor_index;
  v7 = *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                         + 0x7FFF8000);
  if ( v7 )
    __asan_report_store4(&this->cur_level_record_.cur_level_index, (((_BYTE)this - 100) & 7u) + 3, v7);
  this->cur_level_record_.cur_level_index = level_index;
  __for_range = &this->cur_level_record_.tower_team_vec;
  __for_begin._M_current = std::vector<TowerTeam>::begin(&this->cur_level_record_.tower_team_vec)._M_current;
  __for_end._M_current = std::vector<TowerTeam>::end(&this->cur_level_record_.tower_team_vec)._M_current;
  while ( __gnu_cxx::operator!=<TowerTeam *,std::vector<TowerTeam>>(&__for_begin, &__for_end) )
  {
    tower_team = __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator*(&__for_begin);
    __for_range_0 = &tower_team->mirror_avatar_guid_vec;
    __for_begin_0._M_current = std::vector<unsigned long>::begin(&tower_team->mirror_avatar_guid_vec)._M_current;
    __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
    {
      v8 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8);
      *(_QWORD *)(v4 + 64) = *(_QWORD *)v8;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      AvatarComp = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 96), (uint64_t)AvatarComp);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "internalUpdateCurLevelRecord",
          2051);
        v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v52,
                (const char (*)[20])"mirror avatar guid:");
        v11 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v10,
                (const unsigned __int64 *)(v4 + 64));
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v11,
                (const char (*)[20])" not found! player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v12, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v52);
        v3 = -1;
        v13 = 0;
      }
      else
      {
        mirror_avatar_prop_map = std::map<unsigned long,std::map<data::FightPropType,float>>::operator[](
                                   &this->cur_level_record_.mirror_avatar_prop_map,
                                   (const std::map<long unsigned int,std::map<data::FightPropType,float>>::key_type *)(v4 + 64));
        __for_range_1 = FightPropComp::getAllCurPropType();
        __for_begin_1._M_node = std::set<data::FightPropType>::begin(__for_range_1)._M_node;
        __for_end_1._M_node = std::set<data::FightPropType>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin_1, &__for_end_1) )
        {
          v14 = std::_Rb_tree_const_iterator<data::FightPropType>::operator*(&__for_begin_1);
          v15 = v14;
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v14);
          }
          *(_DWORD *)(v4 + 48) = *v15;
          v16 = 0LL;
          if ( *(_DWORD *)(v4 + 48) == 1010 )
          {
            v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            FightPropComp = Creature::getFightPropComp(v17);
            v37 = FightPropComp::calcCurHpRatio(FightPropComp);
            v19 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v20 = Creature::getFightPropComp(v19);
            prop_value = FightPropComp::getPropValue(v20, FIGHT_PROP_MAX_HP, 0) * v37;
          }
          else
          {
            v21 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v22 = Creature::getFightPropComp(v21);
            *(float *)v16.m128i_i32 = FightPropComp::getPropValue(v22, *(data::FightPropType *)(v4 + 48), 0);
            prop_value = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
          }
          if ( prop_value == 0.0 )
          {
            std::map<data::FightPropType,float>::erase(
              mirror_avatar_prop_map,
              (const std::map<data::FightPropType,float>::key_type *)(v4 + 48));
          }
          else
          {
            v23 = (char *)(v4 + 48);
            v24 = std::map<data::FightPropType,float>::operator[](
                    mirror_avatar_prop_map,
                    (const std::map<data::FightPropType,float>::key_type *)(v4 + 48));
            v25 = v24;
            v26 = *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000);
            if ( v26 != 0 && (char)(((unsigned __int8)v24 & 7) + 3) >= v26 )
            {
              LOBYTE(v23) = v26 != 0;
              __asan_report_store4(v24, v23, (_BYTE)v24);
            }
            *v25 = prop_value;
          }
          std::_Rb_tree_const_iterator<data::FightPropType>::operator++(&__for_begin_1);
        }
        v13 = 1;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 96));
      if ( v13 != 1 )
        goto LABEL_55;
      __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 96));
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96))->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_level_record_.cur_tower_buff_id);
  }
  tower_buff_config_ptr = data::TowerExcelConfigMgrBase::findTowerBuffExcelConfig(
                            p_tower_config_mgr,
                            this->cur_level_record_.cur_tower_buff_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 96));
  if ( tower_buff_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->lasting_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)tower_buff_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->lasting_type >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&tower_buff_config_ptr->lasting_type);
    }
    if ( tower_buff_config_ptr->lasting_type == TOWER_BUFF_LASTING_FLOOR )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_uid >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_uid >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->cur_level_record_.cur_tower_buff_uid);
      }
      if ( this->cur_level_record_.cur_tower_buff_uid )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_level_record_.cur_tower_buff_id);
        }
        cur_tower_buff_id = this->cur_level_record_.cur_tower_buff_id;
        p_cur_tower_buff_uid = &this->cur_level_record_.cur_tower_buff_uid;
        v33 = std::map<unsigned int,unsigned int>::operator[](
                &this->cur_level_record_.tower_buff_map,
                &this->cur_level_record_.cur_tower_buff_uid);
        v34 = v33;
        v35 = *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000);
        if ( v35 != 0 && (char)(((unsigned __int8)v33 & 7) + 3) >= v35 )
        {
          LOBYTE(p_cur_tower_buff_uid) = v35 != 0;
          __asan_report_store4(v33, p_cur_tower_buff_uid, (_BYTE)v33);
        }
        *v34 = cur_tower_buff_id;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v52,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "internalUpdateCurLevelRecord",
          2083);
        v28 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v52,
                (const char (*)[52])"buff_uid is 0, cur_level_record_.cur_tower_buff_id:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                &this->cur_level_record_.cur_tower_buff_id);
        v30 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v29, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v30, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v52);
      }
    }
  }
  v3 = 0;
LABEL_55:
  result = v3;
  if ( v53 == (char *)v4 )
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

// Line 2096: range 000000001437E8BE-000000001437EE30
int32_t __cdecl PlayerTowerComp::resetCurLevelMirrorAvatarBeforeEnterLevel(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  int32_t result; // eax
  PlayerAvatarComp *AvatarComp; // rax
  __int64 v7; // rsi
  bool v8; // dl
  unsigned __int64 v9; // rax
  PlayerAvatarComp *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  MirrorAvatar *v14; // rdx
  std::vector<TowerTeam>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<TowerTeam>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-D0h] BYREF
  std::vector<TowerTeam> *__for_range; // [rsp+38h] [rbp-C8h]
  const TowerTeam *tower_team; // [rsp+40h] [rbp-C0h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 9 guid:2107 64 16 15 avatar_ptr:2110";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::resetCurLevelMirrorAvatarBeforeEnterLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202178560;
  if ( TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "resetCurLevelMirrorAvatarBeforeEnterLevel",
      2099);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v22,
           (const char (*)[29])"no cur level record, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::delAllBuffs(AvatarComp);
    v7 = (((_BYTE)this + 28) & 7u) + 3;
    v8 = *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3)
                                                          + 0x7FFF8000);
    if ( v8 )
      __asan_report_store4(&this->cur_level_record_.cur_tower_buff_id, v7, v8);
    this->cur_level_record_.cur_tower_buff_id = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_level_record_.cur_tower_buff_uid, v7, (_BYTE)this + 32);
    }
    this->cur_level_record_.cur_tower_buff_uid = 0;
    __for_range = &this->cur_level_record_.tower_team_vec;
    __for_begin._M_current = std::vector<TowerTeam>::begin(&this->cur_level_record_.tower_team_vec)._M_current;
    __for_end._M_current = std::vector<TowerTeam>::end(&this->cur_level_record_.tower_team_vec)._M_current;
    while ( __gnu_cxx::operator!=<TowerTeam *,std::vector<TowerTeam>>(&__for_begin, &__for_end) )
    {
      tower_team = __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator*(&__for_begin);
      __for_range_0 = &tower_team->mirror_avatar_guid_vec;
      __for_begin_0._M_current = std::vector<unsigned long>::begin(&tower_team->mirror_avatar_guid_vec)._M_current;
      __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
      {
        v9 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          v9 = __asan_report_load8(v9);
        *(_QWORD *)(v1 + 32) = *(_QWORD *)v9;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v10 = Player::getAvatarComp(this->player_);
        PlayerAvatarComp::findAvatar<MirrorAvatar>((const PlayerAvatarComp *const)(v1 + 64), (uint64_t)v10);
        if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v1 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "resetCurLevelMirrorAvatarBeforeEnterLevel",
            2113);
          v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  &v22,
                  (const char (*)[20])"mirror avatar guid:");
          v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v11,
                  (const unsigned __int64 *)(v1 + 32));
          v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  v12,
                  (const char (*)[20])" not found! player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v13, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
        else
        {
          v14 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          PlayerTowerComp::resetMirrorAvatarCurProp(this, v14);
        }
        std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v1 + 64));
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
      }
      __gnu_cxx::__normal_iterator<TowerTeam *,std::vector<TowerTeam>>::operator++(&__for_begin);
    }
    result = 0;
  }
  if ( v23 == (char *)v1 )
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

// Line 2123: range 000000001437EE32-000000001437F048
void __cdecl PlayerTowerComp::checkAndResetMirrorAvatarCurProp(PlayerTowerComp *const this, MirrorAvatar *avatar)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::shared_ptr<DungeonScene> p_dungeon_scene_ptr; // [rsp+10h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 27 prev_dungeon_scene_ptr:2124 64 16 26 cur_dungeon_scene_ptr:2125";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::checkAndResetMirrorAvatarCurProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  MirrorAvatar::getCurTowerDungeonScene((const MirrorAvatar *const)(v2 + 32));
  PlayerTowerComp::getCurDungeonScene((const PlayerTowerComp *const)(v2 + 64));
  if ( !std::operator!=<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32))
    || !std::operator==<DungeonScene,DungeonScene>(
          (const std::shared_ptr<DungeonScene> *)(v2 + 32),
          (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
  {
    std::shared_ptr<DungeonScene>::shared_ptr(&p_dungeon_scene_ptr, (const std::shared_ptr<DungeonScene> *)(v2 + 64));
    MirrorAvatar::setCurTowerDungeonScene(avatar, &p_dungeon_scene_ptr);
    std::shared_ptr<DungeonScene>::~shared_ptr(&p_dungeon_scene_ptr);
    PlayerTowerComp::resetMirrorAvatarCurProp(this, avatar);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
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

// Line 2136: range 000000001437F04A-000000001437F3E0
void __cdecl PlayerTowerComp::resetMirrorAvatarCurProp(PlayerTowerComp *const this, MirrorAvatar *avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<data::FightPropType>::reference v5; // rax
  _DWORD *v6; // rdx
  std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::pointer v7; // rdx
  float *p_second; // rax
  FightPropComp *FightPropComp; // rax
  FightPropComp *v10; // rax
  float prop_value; // [rsp+14h] [rbp-BCh]
  std::set<data::FightPropType>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<data::FightPropType>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  std::map<long unsigned int,std::map<data::FightPropType,float>>::key_type __k; // [rsp+28h] [rbp-A8h] BYREF
  const std::map<data::FightPropType,float> *mirror_avatar_prop_map; // [rsp+30h] [rbp-A0h]
  const std::set<data::FightPropType> *__for_range; // [rsp+38h] [rbp-98h]
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 prop_type:2138 64 8 9 iter:2141";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::resetMirrorAvatarCurProp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  __k = Avatar::getGuid(avatar);
  mirror_avatar_prop_map = std::map<unsigned long,std::map<data::FightPropType,float>>::operator[](
                             &this->cur_level_record_.mirror_avatar_prop_map,
                             &__k);
  __for_range = FightPropComp::getAllCurPropType();
  __for_begin._M_node = std::set<data::FightPropType>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<data::FightPropType>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<data::FightPropType>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    prop_value = 0.0;
    *(std::map<data::FightPropType,float>::const_iterator *)(v2 + 64) = std::map<data::FightPropType,float>::find(
                                                                          mirror_avatar_prop_map,
                                                                          (const std::map<data::FightPropType,float>::key_type *)(v2 + 48));
    __k = (std::map<long unsigned int,std::map<data::FightPropType,float>>::key_type)std::map<data::FightPropType,float>::end(mirror_avatar_prop_map)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)(v2 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> >::_Self *)&__k) )
    {
      v7 = std::_Rb_tree_const_iterator<std::pair<data::FightPropType const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::FightPropType,float> > *const)(v2 + 64));
      p_second = &v7->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_second);
      }
      prop_value = v7->second;
    }
    FightPropComp = Creature::getFightPropComp(avatar);
    FightPropComp::forceSetCurPropValue(FightPropComp, *(data::FightPropType *)(v2 + 48), prop_value);
    v10 = Creature::getFightPropComp(avatar);
    FightPropComp::notifyProp(v10, *(data::FightPropType *)(v2 + 48));
    std::_Rb_tree_const_iterator<data::FightPropType>::operator++(&__for_begin);
  }
  if ( Creature::getLifeState(avatar) == LIFE_DEAD && Creature::getCurHp(avatar) >= 0.0099999998 )
  {
    Creature::changeLifeState(avatar, LIFE_ALIVE, 0LL, 1);
  }
  else if ( Creature::getLifeState(avatar) == LIFE_ALIVE && Creature::getCurHp(avatar) < 0.0099999998 )
  {
    Creature::changeLifeState(avatar, LIFE_DEAD, 0LL, 1);
  }
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
};

// Line 2161: range 000000001437F3E2-000000001437F857
__int64 __fastcall PlayerTowerComp::addTowerTeamBuff(PlayerTowerComp *const this, uint32_t tower_buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  unsigned int v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerAvatarComp *AvatarComp; // rcx
  __int64 result; // rax
  const data::TowerBuffExcelConfig *tower_buff_config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 tower_buff_id:2160 64 16 26 cur_dungeon_scene_ptr:2162";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::addTowerTeamBuff;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = tower_buff_id;
  std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v2 + 64));
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "addTowerTeamBuff",
      2165);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v14, (const char (*)[28])off_25320420);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
    goto LABEL_19;
  }
  v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( DungeonScene::getDungeonResult(v7) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "addTowerTeamBuff",
      2170);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v14,
           (const char (*)[48])"[addTowerTeamBuff] dungeon has settled, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  tower_buff_config_ptr = data::TowerExcelConfigMgrBase::findTowerBuffExcelConfig(
                            &v8->design_config.txt_config_mgr.tower_config_mgr,
                            *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( tower_buff_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->buff_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->buff_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tower_buff_config_ptr->buff_id);
    }
    v6 = PlayerAvatarComp::addTeamBuff(AvatarComp, tower_buff_config_ptr->buff_id, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "addTowerTeamBuff",
      2176);
    v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v14,
           (const char (*)[46])"findTowerBuffExcelConfig fail, tower_buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    v6 = -1;
  }
LABEL_19:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 64));
  result = v6;
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

// Line 2184: range 000000001437F858-000000001437FAB5
int32_t __fastcall PlayerTowerComp::delTowerTeamBuff(PlayerTowerComp *const this, uint32_t tower_buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  PlayerAvatarComp *AvatarComp; // rcx
  const data::TowerBuffExcelConfig *tower_buff_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 tower_buff_id:2183";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::delTowerTeamBuff;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = tower_buff_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  tower_buff_config_ptr = data::TowerExcelConfigMgrBase::findTowerBuffExcelConfig(
                            &v5->design_config.txt_config_mgr.tower_config_mgr,
                            *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( tower_buff_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->buff_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->buff_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&tower_buff_config_ptr->buff_id);
    }
    result = PlayerAvatarComp::delTeamBuff(AvatarComp, tower_buff_config_ptr->buff_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "delTowerTeamBuff",
      2188);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"findTowerBuffExcelConfig fail, tower_buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = -1;
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

// Line 2197: range 000000001437FAB6-000000001437FFEA
__int64 __fastcall PlayerTowerComp::getRandomLevelBuffs(
        PlayerTowerComp *const this,
        uint32_t level_id,
        std::vector<unsigned int> *candidate_tower_buff_id_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::pointer v6; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  std::vector<data::TowerBuff>::size_type v12; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  std::vector<unsigned int> *v17; // rax
  std::vector<data::TowerBuffConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<data::TowerBuffConfig>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-E0h]
  const std::vector<data::TowerBuffConfig> *__for_range; // [rsp+38h] [rbp-D8h]
  const data::TowerBuffConfig *tower_buff_config; // [rsp+40h] [rbp-D0h]
  const data::TowerBuff *tower_buff; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 17 select_index:2212 48 4 13 level_id:2196 64 8 9 iter:2198";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::getRandomLevelBuffs;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 64) = std::map<unsigned int,std::vector<unsigned int>>::find(
                                                                               &this->daily_level_buff_map_,
                                                                               (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  __for_end._M_current = (const data::TowerBuffConfig *)std::map<unsigned int,std::vector<unsigned int>>::end(&this->daily_level_buff_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)(v3 + 64));
    std::vector<unsigned int>::operator=(candidate_tower_buff_id_vec, &v6->second);
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(
                         &v8->design_config.txt_config_mgr.tower_config_mgr,
                         *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( level_config_ptr )
    {
      __for_range = &level_config_ptr->tower_buff_configs;
      __for_begin._M_current = std::vector<data::TowerBuffConfig>::begin(&level_config_ptr->tower_buff_configs)._M_current;
      __for_end._M_current = std::vector<data::TowerBuffConfig>::end(__for_range)._M_current;
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<data::TowerBuffConfig const*,std::vector<data::TowerBuffConfig>>(
                &__for_begin,
                &__for_end) )
        {
          v17 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->daily_level_buff_map_,
                  (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
          std::vector<unsigned int>::operator=(v17, candidate_tower_buff_id_vec);
          result = 0LL;
          goto LABEL_22;
        }
        tower_buff_config = __gnu_cxx::__normal_iterator<data::TowerBuffConfig const*,std::vector<data::TowerBuffConfig>>::operator*(&__for_begin);
        *(_DWORD *)(v3 + 32) = std::vector<data::TowerBuff>::size(&tower_buff_config->tower_buff_list);
        if ( common::tools::RandomUtils::weightSelectOne<data::TowerBuff,unsigned int data::TowerBuff::*>(
               &tower_buff_config->tower_buff_list,
               (uint32_t *)(v3 + 32),
               (unsigned int *)0xC,
               0) )
        {
          break;
        }
        v12 = *(unsigned int *)(v3 + 32);
        if ( v12 >= std::vector<data::TowerBuff>::size(&tower_buff_config->tower_buff_list) )
          break;
        tower_buff = std::vector<data::TowerBuff>::operator[](
                       &tower_buff_config->tower_buff_list,
                       *(unsigned int *)(v3 + 32));
        std::vector<unsigned int>::push_back(candidate_tower_buff_id_vec, &tower_buff->tower_buff_id);
        __gnu_cxx::__normal_iterator<data::TowerBuffConfig const*,std::vector<data::TowerBuffConfig>>::operator++(&__for_begin);
      }
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "getRandomLevelBuffs",
        2216);
      v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v26,
              (const char (*)[33])"weightSelectOnce fail, level_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v16, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "getRandomLevelBuffs",
        2207);
      v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v26,
             (const char (*)[37])"findTowerLevelConfig fail, level_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0xFFFFFFFFLL;
    }
  }
LABEL_22:
  if ( v27 == (char *)v3 )
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

// Line 2228: range 000000001437FFEC-00000000143804FE
void __cdecl PlayerTowerComp::notifyTowerFloorRecord(
        PlayerTowerComp *const this,
        const std::set<unsigned int> *floor_index_set)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  TowerFloorRecord *p_second; // r14
  std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  proto::TowerFloorRecord *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  bool isFinishEntranceFloor; // al
  std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  Player *player; // r14
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self __y; // [rsp+20h] [rbp-110h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-108h]
  std::shared_ptr<proto::TowerFloorRecordChangeNotify> __r; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-D0h] BYREF
  char v27[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 floor_index:2230 64 8 9 iter:2232 96 16 15 notify_ptr:2229";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::notifyTowerFloorRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  common::tools::perf::make_shared<proto::TowerFloorRecordChangeNotify>();
  __for_range = floor_index_set;
  __for_begin._M_node = std::set<unsigned int>::begin(floor_index_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(floor_index_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 48) = *v6;
    *(std::map<unsigned int,TowerFloorRecord>::iterator *)(v2 + 64) = std::map<unsigned int,TowerFloorRecord>::find(
                                                                        &this->tower_floor_record_map_,
                                                                        (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "notifyTowerFloorRecord",
        2235);
      v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v25, (const char (*)[13])"floor_index:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v8,
             (const char (*)[20])" not found, player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v9, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      goto LABEL_21;
    }
    p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v2 + 64))->second;
    v11 = std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v12 = proto::TowerFloorRecordChangeNotify::add_tower_floor_record_list(v11);
    if ( TowerFloorRecord::toClient(p_second, v12) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "notifyTowerFloorRecord",
        2240);
      v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v26,
              (const char (*)[47])"tower floor record toClient fail. floor_index:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v15, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      goto LABEL_21;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  v16 = std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  isFinishEntranceFloor = PlayerTowerComp::isFinishEntranceFloor(this);
  proto::TowerFloorRecordChangeNotify::set_is_finished_entrance_floor(v16, isFinishEntranceFloor);
  v18 = std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerFloorRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( proto::TowerFloorRecordChangeNotify::tower_floor_record_list_size(v18) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::TowerFloorRecordChangeNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
LABEL_21:
  std::shared_ptr<proto::TowerFloorRecordChangeNotify>::~shared_ptr((std::shared_ptr<proto::TowerFloorRecordChangeNotify> *const)(v2 + 96));
  if ( v27 == (char *)v2 )
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

// Line 2253: range 0000000014380500-00000000143806DB
void __cdecl PlayerTowerComp::notifyTowerCurLevelRecord(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::TowerCurLevelRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  proto::TowerCurLevelRecord *v5; // rcx
  Player *player; // r14
  std::shared_ptr<proto::TowerCurLevelRecordChangeNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:2254";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::notifyTowerCurLevelRecord;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::TowerCurLevelRecordChangeNotify>();
  v4 = std::__shared_ptr_access<proto::TowerCurLevelRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerCurLevelRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v5 = proto::TowerCurLevelRecordChangeNotify::mutable_cur_level_record(v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  TowerCurLevelRecord::toClient(&this->cur_level_record_, this->tower_schedule_id_, v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::TowerCurLevelRecordChangeNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::TowerCurLevelRecordChangeNotify>::~shared_ptr((std::shared_ptr<proto::TowerCurLevelRecordChangeNotify> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2261: range 00000000143806DC-00000000143809A2
void __cdecl PlayerTowerComp::notifyTowerDailyRewardProgress(PlayerTowerComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t daily_floor_index; // edx
  std::__shared_ptr_access<proto::TowerDailyRewardProgressChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::TowerDailyRewardProgressChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  Player *player; // r14
  uint32_t floor_id; // [rsp+1Ch] [rbp-84h]
  std::shared_ptr<const google::protobuf::Message> v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:2262";
  *(_QWORD *)(v1 + 16) = PlayerTowerComp::notifyTowerDailyRewardProgress;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::TowerDailyRewardProgressChangeNotify>();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_floor_index_ >> 3) + 0x7FFF8000) )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->daily_floor_index_;
    __asan_report_load4(&this->daily_floor_index_);
  }
  daily_floor_index = this->daily_floor_index_;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  floor_id = TowerExcelConfigMgr::findTowerFloorId(p_tower_config_mgr, this->tower_schedule_id_, daily_floor_index);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v11);
  v6 = std::__shared_ptr_access<proto::TowerDailyRewardProgressChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerDailyRewardProgressChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  proto::TowerDailyRewardProgressChangeNotify::set_daily_floor_id(v6, floor_id);
  v7 = std::__shared_ptr_access<proto::TowerDailyRewardProgressChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerDailyRewardProgressChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_level_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->daily_level_index_);
  }
  proto::TowerDailyRewardProgressChangeNotify::set_daily_level_index(v7, this->daily_level_index_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::TowerDailyRewardProgressChangeNotify>((const std::shared_ptr<proto::TowerDailyRewardProgressChangeNotify> *)&v11);
  Player::sendMessage(player, &v11, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v11);
  std::shared_ptr<proto::TowerDailyRewardProgressChangeNotify>::~shared_ptr((std::shared_ptr<proto::TowerDailyRewardProgressChangeNotify> *const)(v1 + 32));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2271: range 00000000143809A4-0000000014380C5C
int32_t __cdecl PlayerTowerComp::calcCurLevelStarNum(
        PlayerTowerComp *const this,
        DungeonScene *dungeon_scene,
        uint32_t floor_index,
        uint32_t level_index,
        std::vector<unsigned int> *satisfied_cond_vec)
{
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<data::TowerCondition>::const_iterator __for_begin; // [rsp+28h] [rbp-68h] BYREF
  std::vector<data::TowerCondition>::const_iterator __for_end; // [rsp+30h] [rbp-60h] BYREF
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+38h] [rbp-58h]
  const std::vector<data::TowerCondition> *__for_range; // [rsp+40h] [rbp-50h]
  const data::TowerCondition *tower_condition; // [rsp+48h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-30h] BYREF

  if ( TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "calcCurLevelStarNum",
      2274);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      &v20,
      (const char (*)[26])"cur_level_record_ is null");
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
      __asan_report_load4(&this->tower_schedule_id_);
    }
    level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(
                         p_tower_config_mgr,
                         this->tower_schedule_id_,
                         floor_index,
                         level_index);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( level_config_ptr )
    {
      __for_range = &level_config_ptr->conds;
      __for_begin._M_current = std::vector<data::TowerCondition>::begin(&level_config_ptr->conds)._M_current;
      __for_end._M_current = std::vector<data::TowerCondition>::end(&level_config_ptr->conds)._M_current;
      while ( __gnu_cxx::operator!=<data::TowerCondition const*,std::vector<data::TowerCondition>>(
                &__for_begin,
                &__for_end) )
      {
        tower_condition = __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator*(&__for_begin);
        if ( PlayerTowerComp::isTowerConditionMeet(this, dungeon_scene, tower_condition, 1) )
          std::vector<unsigned int>::push_back(satisfied_cond_vec, &tower_condition->index);
        __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator++(&__for_begin);
      }
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "calcCurLevelStarNum",
        2280);
      v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v20,
             (const char (*)[40])"findTowerLevelConfig fail, schedule_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->tower_schedule_id_);
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v8,
             (const char (*)[20])" cur_level_record_:");
      operator<<(v9, &this->cur_level_record_);
      common::milog::MiLogStream::~MiLogStream(&v20);
      return -1;
    }
  }
};

// Line 2294: range 0000000014380C5E-00000000143818DE
bool __cdecl PlayerTowerComp::isTowerConditionMeet(
        const PlayerTowerComp *const this,
        DungeonScene *dungeon_scene,
        const data::TowerCondition *tower_condition,
        bool is_settle)
{
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  data::TowerCondType tower_cond_type; // eax
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  uint64_t TowerTotalCountTimeMs; // rax
  float v12; // xmm0_4
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  int *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::const_reference v16; // rax
  _DWORD *v17; // rdx
  std::vector<unsigned int>::const_reference v18; // rax
  _DWORD *v19; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v20; // rax
  int *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  uint32_t v23; // eax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  FightPropComp *FightPropComp; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  std::vector<unsigned int>::const_reference v31; // rax
  _DWORD *v32; // rdx
  std::vector<unsigned int>::const_reference v33; // rax
  _DWORD *v34; // rdx
  std::vector<unsigned int>::const_reference v35; // rax
  _DWORD *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  bool result; // al
  bool is_find_lower_left_time; // [rsp+27h] [rbp-F9h]
  float min_hp_ratio; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v55; // [rsp+30h] [rbp-F0h] BYREF
  char v56[208]; // [rsp+50h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 4 20 challenge_index:2341 48 4 26 upper_challenge_index:2342 64 4 18 min_left_time:2343 80 "
                        "4 27 challenge_left_seconds:2344 96 16 14 group_ptr:2314 128 16 15 gadget_ptr:2320";
  *(_QWORD *)(v5 + 16) = PlayerTowerComp::isTowerConditionMeet;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -234556924;
  v7[536862723] = -219021312;
  v7[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&tower_condition->tower_cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&tower_condition->tower_cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&tower_condition->tower_cond_type);
  }
  tower_cond_type = tower_condition->tower_cond_type;
  if ( tower_cond_type == TOWER_COND_CHALLENGE_LEFT_TIME_MORE_THAN )
  {
    if ( std::vector<unsigned int>::size(&tower_condition->argument_list) == 2 )
    {
      if ( std::vector<unsigned int>::size(&tower_condition->argument_list_upper) == 2 )
      {
        v31 = std::vector<unsigned int>::operator[](&tower_condition->argument_list, 0LL);
        v32 = v31;
        if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v31);
        }
        *(_DWORD *)(v5 + 32) = *v32;
        v33 = std::vector<unsigned int>::operator[](&tower_condition->argument_list_upper, 0LL);
        v34 = v33;
        if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v33);
        }
        *(_DWORD *)(v5 + 48) = *v34;
        v35 = std::vector<unsigned int>::operator[](&tower_condition->argument_list, 1uLL);
        v36 = v35;
        if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v35);
        }
        *(_DWORD *)(v5 + 64) = *v36;
        *(_DWORD *)(v5 + 80) = -1;
        is_find_lower_left_time = DungeonScene::getChallengeLeftTime(
                                    dungeon_scene,
                                    *(_DWORD *)(v5 + 32),
                                    (uint32_t *)(v5 + 80));
        if ( is_settle )
        {
          if ( !is_find_lower_left_time )
            *(_DWORD *)(v5 + 80) = 0;
        }
        else if ( !is_find_lower_left_time
               && !DungeonScene::getChallengeLeftTime(dungeon_scene, *(_DWORD *)(v5 + 48), (uint32_t *)(v5 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/tower/player_tower_comp.cpp",
            "isTowerConditionMeet",
            2359);
          v37 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v55, (const char (*)[21])off_25322980);
          common::milog::MiLogStream::operator<<<unsigned int>(v37, &tower_condition->argument_list);
          common::milog::MiLogStream::~MiLogStream(&v55);
        }
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/tower/player_tower_comp.cpp",
          "isTowerConditionMeet",
          2363);
        v38 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                &v55,
                (const char (*)[17])"challenge_index:");
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v5 + 32));
        v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v39,
                (const char (*)[16])" min_left_time:");
        v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v40,
                (const unsigned int *)(v5 + 64));
        v42 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v41,
                (const char (*)[25])" challenge_left_seconds:");
        v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v42,
                (const unsigned int *)(v5 + 80));
        v44 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v43, (const char (*)[12])" is_settle:");
        v45 = common::milog::MiLogStream::operator<<(v44, is_settle);
        v46 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v45,
                (const char (*)[24])" upper_challenge_index:");
        v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v46,
                (const unsigned int *)(v5 + 48));
        v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v47,
                (const char (*)[16])" is_find_upper:");
        common::milog::MiLogStream::operator<<(v48, is_find_lower_left_time);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v10 = *(_DWORD *)(v5 + 80) >= *(_DWORD *)(v5 + 64);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "isTowerConditionMeet",
          2338);
        v30 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v55,
                (const char (*)[37])"tower_condition.argument_list_upper:");
        common::milog::MiLogStream::operator<<<unsigned int>(v30, &tower_condition->argument_list_upper);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v10 = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "isTowerConditionMeet",
        2333);
      v29 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v55,
              (const char (*)[31])"tower_condition.argument_list:");
      common::milog::MiLogStream::operator<<<unsigned int>(v29, &tower_condition->argument_list);
      common::milog::MiLogStream::~MiLogStream(&v55);
      v10 = 0;
    }
  }
  else
  {
    if ( tower_cond_type > TOWER_COND_CHALLENGE_LEFT_TIME_MORE_THAN )
    {
LABEL_51:
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/tower/player_tower_comp.cpp",
        "isTowerConditionMeet",
        2371);
      v49 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v55,
              (const char (*)[25])"unknown tower_cond_type:");
      common::milog::MiLogStream::operator<<<data::TowerCondType,(data::TowerCondType*)0>(
        v49,
        &tower_condition->tower_cond_type);
      common::milog::MiLogStream::~MiLogStream(&v55);
      v10 = 0;
      goto LABEL_52;
    }
    if ( tower_cond_type == TOWER_COND_FINISH_TIME_LESS_THAN )
    {
      if ( std::vector<unsigned int>::size(&tower_condition->argument_list) == 1 )
      {
        TowerTotalCountTimeMs = DungeonScene::getTowerTotalCountTimeMs(dungeon_scene);
        if ( (TowerTotalCountTimeMs & 0x8000000000000000LL) != 0LL )
          v12 = (float)(int)(TowerTotalCountTimeMs & 1 | (TowerTotalCountTimeMs >> 1))
              + (float)(int)(TowerTotalCountTimeMs & 1 | (TowerTotalCountTimeMs >> 1));
        else
          v12 = (float)(int)TowerTotalCountTimeMs;
        v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &tower_condition->argument_list,
                                                                                                    0LL);
        v14 = (int *)v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        v10 = (float)*v14 >= (float)(v12 / 1000.0);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "isTowerConditionMeet",
          2300);
        v9 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v55,
               (const char (*)[31])"tower_condition.argument_list:");
        common::milog::MiLogStream::operator<<<unsigned int>(v9, &tower_condition->argument_list);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v10 = 0;
      }
    }
    else
    {
      if ( tower_cond_type != TOWER_COND_LEFT_HP_GREATER_THAN )
        goto LABEL_51;
      if ( std::vector<unsigned int>::size(&tower_condition->argument_list) == 3 )
      {
        v16 = std::vector<unsigned int>::operator[](&tower_condition->argument_list, 0LL);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        *(_DWORD *)(v5 + 64) = *v17;
        v18 = std::vector<unsigned int>::operator[](&tower_condition->argument_list, 1uLL);
        v19 = v18;
        if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v18);
        }
        *(_DWORD *)(v5 + 80) = *v19;
        v20 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &tower_condition->argument_list,
                                                                                                    2uLL);
        v21 = (int *)v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        *(double *)v4.m128i_i64 = (double)*v21 * 0.01;
        *(float *)v4.m128i_i32 = *(double *)v4.m128i_i64;
        min_hp_ratio = *(float *)v4.m128i_i32;
        Scene::findGroup((Scene *const)(v5 + 96), (uint32_t)dungeon_scene);
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v5 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/tower/player_tower_comp.cpp",
            "isTowerConditionMeet",
            2317);
          v22 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  &v55,
                  (const char (*)[26])"fandGroup fail, group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 64));
          common::milog::MiLogStream::~MiLogStream(&v55);
          v10 = 0;
        }
        else
        {
          v23 = (unsigned int)std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 96));
          Group::findEntityByConfigId<Gadget>((Group *const)(v5 + 128), v23);
          if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v5 + 128)) )
          {
            common::milog::MiLogStream::create(
              &v55,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/tower/player_tower_comp.cpp",
              "isTowerConditionMeet",
              2323);
            v24 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v55,
                    (const char (*)[37])"findEntityByConfigId fail, group_id:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v5 + 64));
            v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v25,
                    (const char (*)[12])" config_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v5 + 80));
            common::milog::MiLogStream::~MiLogStream(&v55);
            v10 = 0;
          }
          else
          {
            v27 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 128));
            FightPropComp = Creature::getFightPropComp(v27);
            *(float *)v4.m128i_i32 = FightPropComp::calcCurHpRatio(FightPropComp);
            v10 = (float)(COERCE_FLOAT(_mm_cvtsi128_si32(v4)) - min_hp_ratio) > -0.00000011920929;
          }
          std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v5 + 128));
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v5 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "isTowerConditionMeet",
          2308);
        v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v55,
                (const char (*)[31])"tower_condition.argument_list:");
        common::milog::MiLogStream::operator<<<unsigned int>(v15, &tower_condition->argument_list);
        common::milog::MiLogStream::~MiLogStream(&v55);
        v10 = 0;
      }
    }
  }
LABEL_52:
  result = v10;
  if ( v56 == (char *)v5 )
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

// Line 2379: range 00000000143818E0-00000000143828B3
__int64 __fastcall PlayerTowerComp::checkFloorEnterable(const PlayerTowerComp *const this, uint32_t floor_index)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // rcx
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t v16; // edx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  TowerExcelConfigMgr *v20; // rcx
  uint32_t v21; // esi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v38; // rax
  uint32_t *v39; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // rcx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::pointer v42; // rax
  std::vector<LevelRecord>::size_type v43; // r15
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  uint32_t TotalStarNum; // ecx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rbx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rcx
  unsigned int val; // [rsp+1Ch] [rbp-114h] BYREF
  uint32_t now; // [rsp+20h] [rbp-110h]
  uint32_t prev_level_id; // [rsp+24h] [rbp-10Ch]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self __y; // [rsp+28h] [rbp-108h] BYREF
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+30h] [rbp-100h]
  const data::TowerFloorExcelConfig *prev_floor_config_ptr; // [rsp+38h] [rbp-F8h]
  const std::vector<unsigned int> *prev_floor_level_vec_ptr; // [rsp+40h] [rbp-F0h]
  const TowerFloorRecord *prev_floor_record; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v61; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v62; // [rsp+60h] [rbp-D0h] BYREF
  char v63[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 21 last_floor_index:2401 48 4 18 prev_floor_id:2418 64 4 21 prev_level_index:2440 80 4 16"
                        " floor_index:2378 96 8 9 iter:2442";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::checkFloorEnterable;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 80) = floor_index;
  if ( common::tools::MiscUtils::isContains<std::map<unsigned int,TowerFloorRecord> const,unsigned int>(
         &this->tower_floor_record_map_,
         (const unsigned int *)(v2 + 80)) )
  {
    result = 0LL;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x2Au) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2388);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v62,
           (const char (*)[29])"open state not open. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v62);
    result = 141LL;
    goto LABEL_57;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  if ( !this->tower_schedule_id_ )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2395);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v62,
           (const char (*)[24])"tower not open. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v62);
    result = 1521LL;
    goto LABEL_57;
  }
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v61);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61);
  *(_DWORD *)(v2 + 32) = TowerExcelConfigMgr::findLastFloorIndexByTimestamp(
                           &v9->design_config.txt_config_mgr.tower_config_mgr,
                           now);
  std::shared_ptr<Config>::~shared_ptr(&v61);
  if ( !*(_DWORD *)(v2 + 32) || *(_DWORD *)(v2 + 80) > *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2404);
    v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v62,
            (const char (*)[30])"tower floor not open. player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v11 = operator<<(v10, this->player_);
    v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v11, (const char (*)[19])" last_floor_index:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" floor_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v62);
    result = 1526LL;
    goto LABEL_57;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v61);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61)->design_config.txt_config_mgr.tower_config_mgr;
  v16 = *(_DWORD *)(v2 + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(p_tower_config_mgr, this->tower_schedule_id_, v16);
  std::shared_ptr<Config>::~shared_ptr(&v61);
  if ( !floor_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2411);
    v17 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            &v62,
            (const char (*)[46])"findTowerLevelConfig fail, tower_schedule_id:");
    v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->tower_schedule_id_);
    v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" floor_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream(&v62);
    result = 5LL;
    goto LABEL_57;
  }
  if ( *(_DWORD *)(v2 + 80) <= 1u )
    goto LABEL_56;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v61);
  v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61)->design_config.txt_config_mgr.tower_config_mgr;
  v21 = *(_DWORD *)(v2 + 80) - 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  *(_DWORD *)(v2 + 48) = TowerExcelConfigMgr::findTowerFloorId(v20, this->tower_schedule_id_, v21);
  std::shared_ptr<Config>::~shared_ptr(&v61);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v61);
  v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61);
  prev_floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(
                            &v22->design_config.txt_config_mgr.tower_config_mgr,
                            *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v61);
  if ( !prev_floor_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2422);
    v23 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v62,
            (const char (*)[50])"prev_floor_config_ptr is null, tower_schedule_id:");
    v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &this->tower_schedule_id_);
    v25 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v24, (const char (*)[18])" floor_index - 1:");
    val = *(_DWORD *)(v2 + 80) - 1;
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
    v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v26, (const char (*)[16])" prev_floor_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v2 + 48));
    v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_33:
    operator<<(v29, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v62);
    result = 5LL;
    goto LABEL_57;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v61);
  v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61);
  prev_floor_level_vec_ptr = TowerExcelConfigMgr::findTowerFloorLevelVec(
                               &v30->design_config.txt_config_mgr.tower_config_mgr,
                               *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v61);
  if ( !prev_floor_level_vec_ptr )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2429);
    v31 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            &v62,
            (const char (*)[53])"prev_floor_level_vec_ptr is null, tower_schedule_id:");
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->tower_schedule_id_);
    v33 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v32, (const char (*)[18])" floor_index - 1:");
    val = *(_DWORD *)(v2 + 80) - 1;
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v34, (const char (*)[16])" prev_floor_id:");
    v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v35, (const unsigned int *)(v2 + 48));
    v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_33;
  }
  if ( std::vector<unsigned int>::empty(prev_floor_level_vec_ptr) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2435);
    v37 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v62,
            (const char (*)[50])"prev_floor_level_vec_ptr is empty, prev_floor_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v62);
    result = 5LL;
    goto LABEL_57;
  }
  v38 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::back(prev_floor_level_vec_ptr);
  v39 = v38;
  if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v38);
  }
  prev_level_id = *v39;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v61);
  v40 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v61);
  *(_DWORD *)(v2 + 64) = TowerExcelConfigMgr::findTowerLevelIndex(
                           &v40->design_config.txt_config_mgr.tower_config_mgr,
                           *(_DWORD *)(v2 + 48),
                           prev_level_id);
  std::shared_ptr<Config>::~shared_ptr(&v61);
  val = *(_DWORD *)(v2 + 80) - 1;
  *(std::map<unsigned int,TowerFloorRecord>::const_iterator *)(v2 + 96) = std::map<unsigned int,TowerFloorRecord>::find(
                                                                            &this->tower_floor_record_map_,
                                                                            &val);
  __y._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v2 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2445);
    v41 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v62, (const char (*)[8])"player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_45:
    operator<<(v41, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v62);
    result = 1532LL;
    goto LABEL_57;
  }
  v42 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v2 + 96));
  prev_floor_record = &v42->second;
  v43 = (unsigned int)(*(_DWORD *)(v2 + 64) - 1);
  if ( v43 >= std::vector<LevelRecord>::size(&v42->second.passed_level_record_vec) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/tower/player_tower_comp.cpp",
      "checkFloorEnterable",
      2452);
    v44 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v62, (const char (*)[18])"prev_level_index:");
    v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v2 + 64));
    v41 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v45, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_45;
  }
  TotalStarNum = TowerFloorRecord::getTotalStarNum(prev_floor_record);
  if ( *(_BYTE *)(((unsigned __int64)&prev_floor_config_ptr->unlock_star_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)prev_floor_config_ptr + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&prev_floor_config_ptr->unlock_star_count >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&prev_floor_config_ptr->unlock_star_count);
  }
  if ( TotalStarNum >= prev_floor_config_ptr->unlock_star_count )
  {
LABEL_56:
    result = 0LL;
    goto LABEL_57;
  }
  common::milog::MiLogStream::create(
    &v62,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/tower/player_tower_comp.cpp",
    "checkFloorEnterable",
    2458);
  v47 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v62, (const char (*)[15])"prev_floor_id:");
  v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, (const unsigned int *)(v2 + 48));
  v49 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v48, (const char (*)[18])" prev_star_count:");
  val = TowerFloorRecord::getTotalStarNum(prev_floor_record);
  v50 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, &val);
  v51 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v50, (const char (*)[9])" player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v51, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v62);
  result = 1533LL;
LABEL_57:
  if ( v63 == (char *)v2 )
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

// Line 2468: range 00000000143828B4-0000000014382CDF
TowerFloorRecord *__fastcall PlayerTowerComp::findOrAddTowerFloorRecord(
        PlayerTowerComp *const this,
        uint32_t floor_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t v6; // edx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  TowerFloorRecord *result; // rax
  TowerFloorRecord *v13; // rax
  unsigned int *v14; // rcx
  TowerFloorRecord *v15; // r8
  uint32_t floor_id; // [rsp+14h] [rbp-10Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self __y; // [rsp+18h] [rbp-108h] BYREF
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >,bool> v19; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-F0h] BYREF
  char v21[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 16 floor_index:2467 48 8 9 iter:2475 80 40 17 floor_record:2478";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::findOrAddTowerFloorRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 32) = floor_index;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.tower_config_mgr;
  v6 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  floor_id = TowerExcelConfigMgr::findTowerFloorId(p_tower_config_mgr, this->tower_schedule_id_, v6);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v19);
  if ( floor_id )
  {
    *(std::map<unsigned int,TowerFloorRecord>::iterator *)(v2 + 48) = std::map<unsigned int,TowerFloorRecord>::find(
                                                                        &this->tower_floor_record_map_,
                                                                        (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v2 + 32));
    __y._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v2 + 48),
           &__y) )
    {
      TowerFloorRecord::TowerFloorRecord((TowerFloorRecord *const)(v2 + 80));
      *(_DWORD *)(v2 + 80) = floor_id;
      v13 = std::move<TowerFloorRecord &>((TowerFloorRecord *)(v2 + 80));
      v19 = std::map<unsigned int,TowerFloorRecord>::emplace<unsigned int &,TowerFloorRecord>(
              &this->tower_floor_record_map_,
              (unsigned int *)(v2 + 32),
              v13,
              v14,
              v15);
      *(_QWORD *)(v2 + 48) = v19.first._M_node;
      TowerFloorRecord::~TowerFloorRecord((TowerFloorRecord *const)(v2 + 80));
    }
    __y._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v2 + 48),
           &__y) )
    {
      result = 0LL;
    }
    else
    {
      result = &std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v2 + 48))->second;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "findOrAddTowerFloorRecord",
      2472);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v20,
           (const char (*)[20])"tower_schedule_id_:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->tower_schedule_id_);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" floor_index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0LL;
  }
  if ( v21 == (char *)v2 )
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
  return result;
};

// Line 2491: range 0000000014382CE0-00000000143839CB
__int64 __fastcall PlayerTowerComp::updateTowerFloorRecordOnFinishLevel(
        PlayerTowerComp *const this,
        uint32_t floor_index,
        uint32_t level_index,
        const std::vector<unsigned int> *satisfied_cond_vec,
        bool *is_first_pass)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  __int64 v14; // rsi
  __int64 v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int v18; // r14d
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v19; // rax
  _DWORD *v20; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerUnlockFloor,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerUnlockFloor,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Player *player; // r14
  PlayerWatcherComp *WatcherComp; // rax
  PlayerWatcherComp *v27; // rax
  PlayerWatcherComp *v28; // rax
  __int64 result; // rax
  std::string v30; // [rsp+0h] [rbp-1C0h]
  std::less<unsigned int> __comp; // [rsp+37h] [rbp-189h] BYREF
  uint32_t obtain_star_num; // [rsp+38h] [rbp-188h]
  uint32_t star_num; // [rsp+3Ch] [rbp-184h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-180h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-178h] BYREF
  TowerFloorRecord *floor_record_ptr; // [rsp+50h] [rbp-170h]
  TowerFloorRecord *floor_record; // [rsp+58h] [rbp-168h]
  LevelRecord *level_record; // [rsp+60h] [rbp-160h]
  const std::vector<unsigned int> *__for_range; // [rsp+68h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+70h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v42; // [rsp+80h] [rbp-140h] BYREF
  char v43[304]; // [rsp+90h] [rbp-130h] BYREF

  *(&v30._anon_0._M_allocated_capacity + 1) = (std::string::size_type)satisfied_cond_vec;
  v30._anon_0._M_allocated_capacity = (std::string::size_type)is_first_pass;
  v5 = (unsigned __int64)v43;
  v30._M_string_length = (std::string::size_type)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(256LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "6 32 1 11 holder:2548 48 4 15 cond_index:2535 64 4 16 floor_index:2490 80 16 25 unlock_floor_log"
                        "_ptr:2553 112 32 17 level_record:2513 176 48 27 notify_floor_index_set:2492";
  *(_QWORD *)(v5 + 16) = PlayerTowerComp::updateTowerFloorRecordOnFinishLevel;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = -219021312;
  v7[536862725] = 62194;
  v7[536862727] = -202116109;
  *(_DWORD *)(v5 + 64) = floor_index;
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(v5 + 64);
  std::allocator<unsigned int>::allocator((std::allocator<unsigned int> *const)(v5 + 32));
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)(v5 + 176),
    (std::initializer_list<unsigned int>)__PAIR128__(1LL, v5 + 48),
    &__comp,
    (const std::set<unsigned int>::allocator_type *)(v5 + 32));
  std::allocator<unsigned int>::~allocator((std::allocator<unsigned int> *const)(v5 + 32));
  star_num = std::vector<unsigned int>::size(*((const std::vector<unsigned int> *const *)&v30._anon_0._M_allocated_capacity
                                             + 1));
  floor_record_ptr = PlayerTowerComp::findOrAddTowerFloorRecord(this, *(_DWORD *)(v5 + 64));
  if ( !floor_record_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "updateTowerFloorRecordOnFinishLevel",
      2499);
    v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)(v5 + 112),
           (const char (*)[45])"findOrAddTowerFloorRecord fail, floor_index:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v5 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_21:
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 112));
    v18 = -1;
    goto LABEL_56;
  }
  floor_record = floor_record_ptr;
  if ( level_index - 1 > std::vector<LevelRecord>::size(&floor_record_ptr->passed_level_record_vec) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "updateTowerFloorRecordOnFinishLevel",
      2507);
    v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            (common::milog::MiLogStream *const)(v5 + 112),
            (const char (*)[23])"wrong level_index - 1:");
    *(_DWORD *)(v5 + 48) = level_index - 1;
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_21;
  }
  if ( level_index - 1 == std::vector<LevelRecord>::size(&floor_record->passed_level_record_vec) )
  {
    LevelRecord::LevelRecord((LevelRecord *const)(v5 + 112));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)floor_record >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)floor_record >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(floor_record);
    }
    *(_DWORD *)(v5 + 112) = TowerExcelConfigMgr::findTowerLevelId(
                              p_tower_config_mgr,
                              floor_record->floor_id,
                              level_index);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
    std::vector<LevelRecord>::push_back(
      &floor_record->passed_level_record_vec,
      (const std::vector<LevelRecord>::value_type *)(v5 + 112));
    v14 = v30._anon_0._M_local_buf[0] & 7;
    v15 = (*(_BYTE *)((v30._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)((v30._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000));
    if ( (_BYTE)v15 )
      __asan_report_store1(v30._anon_0._M_allocated_capacity, v14, v15);
    *(_BYTE *)v30._anon_0._M_allocated_capacity = 1;
    LevelRecord::~LevelRecord((LevelRecord *const)(v5 + 112));
  }
  if ( level_index - 1 >= std::vector<LevelRecord>::size(&floor_record->passed_level_record_vec) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 112),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/tower/player_tower_comp.cpp",
      "updateTowerFloorRecordOnFinishLevel",
      2521);
    v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
            (common::milog::MiLogStream *const)(v5 + 112),
            (const char (*)[17])"level_index - 1:");
    *(_DWORD *)(v5 + 48) = level_index - 1;
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_21;
  }
  obtain_star_num = 0;
  level_record = std::vector<LevelRecord>::operator[](&floor_record->passed_level_record_vec, level_index - 1);
  if ( *(_BYTE *)((v30._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) != 0
    && (v30._anon_0._M_local_buf[0] & 7) >= *(_BYTE *)((v30._anon_0._M_allocated_capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(v30._anon_0._M_allocated_capacity);
  }
  if ( *(_BYTE *)v30._anon_0._M_allocated_capacity )
  {
    std::vector<unsigned int>::operator=(
      &level_record->satisfied_cond_vec,
      *((const std::vector<unsigned int> **)&v30._anon_0._M_allocated_capacity + 1));
    obtain_star_num = std::vector<unsigned int>::size(*((const std::vector<unsigned int> *const *)&v30._anon_0._M_allocated_capacity
                                                      + 1));
  }
  else
  {
    __for_range = (const std::vector<unsigned int> *)*(&v30._anon_0._M_allocated_capacity + 1);
    __for_begin._M_current = std::vector<unsigned int>::begin(*((const std::vector<unsigned int> *const *)&v30._anon_0._M_allocated_capacity
                                                              + 1))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v19 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v20 = v19;
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      *(_DWORD *)(v5 + 48) = *v20;
      if ( !common::tools::MiscUtils::isContains<unsigned int>(
              &level_record->satisfied_cond_vec,
              (const unsigned int *)(v5 + 48)) )
      {
        std::vector<unsigned int>::push_back(
          &level_record->satisfied_cond_vec,
          (const std::vector<unsigned int>::value_type *)(v5 + 48));
        ++obtain_star_num;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  *(_DWORD *)(v5 + 48) = *(_DWORD *)(v5 + 64) + 1;
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,TowerFloorRecord>,unsigned int>(
          &this->tower_floor_record_map_,
          (const unsigned int *)(v5 + 48))
    && !(unsigned int)PlayerTowerComp::checkFloorEnterable(this, *(_DWORD *)(v5 + 64) + 1) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v5 + 112), BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0x976u, v30);
    std::string::~string((void *)(v5 + 112));
    PlayerTowerComp::findOrAddTowerFloorRecord(this, *(_DWORD *)(v5 + 64) + 1);
    *(_DWORD *)(v5 + 48) = *(_DWORD *)(v5 + 64) + 1;
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v5 + 176),
      (std::set<unsigned int>::value_type *)(v5 + 48));
    common::tools::perf::make_shared<proto_log::PlayerLogBodyTowerUnlockFloor>();
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerUnlockFloor,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerUnlockFloor,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tower_schedule_id_);
    }
    proto_log::PlayerLogBodyTowerUnlockFloor::set_schedule_id(v23, this->tower_schedule_id_);
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerUnlockFloor,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerUnlockFloor,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
    proto_log::PlayerLogBodyTowerUnlockFloor::set_floor_index(v24, *(_DWORD *)(v5 + 64) + 1);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v42, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTowerUnlockFloor,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyTowerUnlockFloor> *)(v5 + 80));
    Player::printStatLog(player, &p_body_ptr, &v42, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v42);
    std::shared_ptr<proto_log::PlayerLogBodyTowerUnlockFloor>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTowerUnlockFloor> *const)(v5 + 80));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
  }
  PlayerTowerComp::notifyTowerFloorRecord(this, (const std::set<unsigned int> *)(v5 + 176));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  WatcherComp = Player::getWatcherComp(this->player_);
  PlayerWatcherComp::triggerDoneTowerStars(WatcherComp, *(_DWORD *)(v5 + 64), obtain_star_num);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_hurt_);
  }
  if ( !this->is_hurt_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v27 = Player::getWatcherComp(this->player_);
    PlayerWatcherComp::triggerDoneTowerUnhurt(v27, *(_DWORD *)(v5 + 64), level_index);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v28 = Player::getWatcherComp(this->player_);
  PlayerWatcherComp::triggerDoneTowerGadgetUnhurt(v28, *(_DWORD *)(v5 + 64), level_index, &this->gadget_hurt_set_);
  v18 = 0;
LABEL_56:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 176));
  result = v18;
  if ( v30._M_string_length == v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2573: range 00000000143839CC-0000000014384237
void __cdecl PlayerTowerComp::composeSettleInfoOnFinishLevel(
        PlayerTowerComp *const this,
        uint32_t floor_index,
        uint32_t level_index,
        const std::vector<unsigned int> *satisfied_cond_vec,
        bool is_first_pass,
        proto::TowerLevelEndNotify *notify)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  google::protobuf::RepeatedField<unsigned int> *v15; // rdx
  const TowerExcelConfigMgr *p_tower_schedule_id; // rdi
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v19; // rax
  TowerExcelConfigMgr *v20; // rcx
  uint32_t v21; // esi
  google::protobuf::uint32 TowerFloorId; // edx
  const PlayerItemComp *ItemComp; // [rsp+20h] [rbp-150h]
  std::allocator<unsigned int> __a; // [rsp+5Fh] [rbp-111h] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+60h] [rbp-110h] BYREF
  std::shared_ptr<Config> v31; // [rsp+70h] [rbp-100h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+80h] [rbp-F0h] BYREF
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 32 4 13 level_id:2575 48 4 25 first_pass_reward_id:2587 64 24 19 item_param_vec:2588";
  *(_QWORD *)(v6 + 16) = PlayerTowerComp::composeSettleInfoOnFinishLevel;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -218103808;
  v8[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  HIDWORD(__l._M_array) = TowerExcelConfigMgr::findTowerFloorId(
                            p_tower_config_mgr,
                            this->tower_schedule_id_,
                            floor_index);
  std::shared_ptr<Config>::~shared_ptr(&v31);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  *(_DWORD *)(v6 + 32) = TowerExcelConfigMgr::findTowerLevelId(
                           &v10->design_config.txt_config_mgr.tower_config_mgr,
                           HIDWORD(__l._M_array),
                           level_index);
  std::shared_ptr<Config>::~shared_ptr(&v31);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
  __l._M_len = (std::initializer_list<unsigned int>::size_type)TowerExcelConfigMgr::findTowerLevelConfig(
                                                                 &v11->design_config.txt_config_mgr.tower_config_mgr,
                                                                 *(_DWORD *)(v6 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v31);
  if ( __l._M_len )
  {
    proto::TowerLevelEndNotify::set_is_success(notify, 1);
    v15 = proto::TowerLevelEndNotify::mutable_finished_star_cond_list(notify);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(satisfied_cond_vec, v15);
    if ( is_first_pass )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v31);
      p_tower_schedule_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.tower_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_tower_schedule_id = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
        __asan_report_load4(&this->tower_schedule_id_);
      }
      *(_DWORD *)(v6 + 48) = TowerExcelConfigMgr::findLevelFirstPassRewardId(
                               p_tower_schedule_id,
                               this->tower_schedule_id_,
                               floor_index,
                               level_index);
      std::shared_ptr<Config>::~shared_ptr(&v31);
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v6 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      ItemComp = Player::getItemComp(this->player_);
      LODWORD(__l._M_array) = *(_DWORD *)(v6 + 48);
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        &reward_id_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
        &__a);
      v17 = PlayerItemComp::getItemParamVecByRewardIdVec(ItemComp, &reward_id_vec, (std::vector<ItemParam> *)(v6 + 64)) != 0;
      std::vector<unsigned int>::~vector(&reward_id_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( v17 )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "composeSettleInfoOnFinishLevel",
          2591);
        v18 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v33,
                (const char (*)[49])"getItemParamVecByRewardIdVec failed, reward_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      v19 = proto::TowerLevelEndNotify::mutable_reward_item_list(notify);
      common::tools::MiscUtils::vectorToRepeated<ItemParam,proto::ItemParam,int (ItemParam::*)(proto::ItemParam&)const>(
        (const std::vector<ItemParam> *)(v6 + 64),
        v19,
        (int (*)(const ItemParam *, proto::ItemParam *))ItemParam::toClient);
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v6 + 64));
    }
    if ( *(char *)(((unsigned __int64)&this->cur_level_record_.is_floor_finished >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->cur_level_record_.is_floor_finished);
    if ( this->cur_level_record_.is_floor_finished )
    {
      LODWORD(__l._M_array) = floor_index + 1;
      if ( common::tools::MiscUtils::isContains<std::map<unsigned int,TowerFloorRecord>,unsigned int>(
             &this->tower_floor_record_map_,
             (const unsigned int *)&__l) )
      {
        proto::TowerLevelEndNotify::set_continue_state(notify, 2u);
      }
      else
      {
        proto::TowerLevelEndNotify::set_continue_state(notify, 0);
      }
      if ( !(unsigned int)PlayerTowerComp::checkFloorEnterable(this, floor_index + 1) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.tower_config_mgr;
        v21 = floor_index + 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->tower_schedule_id_);
        }
        TowerFloorId = TowerExcelConfigMgr::findTowerFloorId(v20, this->tower_schedule_id_, v21);
        proto::TowerLevelEndNotify::set_next_floor_id(notify, TowerFloorId);
        std::shared_ptr<Config>::~shared_ptr(&v31);
      }
    }
    else
    {
      proto::TowerLevelEndNotify::set_continue_state(notify, 1u);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "composeSettleInfoOnFinishLevel",
      2579);
    v12 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v33,
            (const char (*)[37])"findTowerLevelConfig fail, level_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v6 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v14, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v33);
  }
  if ( v34 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2618: range 0000000014384482-00000000143848C3
void __cdecl PlayerTowerComp::logTowerLevelEnter(PlayerTowerComp *const this, bool is_second_path)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog> *avatar_list; // r14
  std::vector<TowerTeam>::reference v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  google::protobuf::RepeatedPtrField<proto_log::AvatarLog> *v13; // r14
  std::vector<TowerTeam>::reference v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  google::protobuf::uint32 v16; // edx
  Player *player; // r14
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+10h] [rbp-B0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-A0h] BYREF
  char v20[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 24 get_avatar_log_list:2619 64 16 30 tower_enter_level_log_ptr:2632";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::logTowerLevelEnter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(_QWORD *)(v2 + 32) = this;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTowerEnterLevel>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyTowerEnterLevel::set_tower_level_transaction(
    v5,
    &this->cur_level_record_.cur_tower_level_transaction);
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  proto_log::PlayerLogBodyTowerEnterLevel::set_schedule_id(v6, this->tower_schedule_id_);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_level_record_);
  }
  proto_log::PlayerLogBodyTowerEnterLevel::set_floor_index(v7, this->cur_level_record_.cur_floor_index);
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_level_record_.cur_level_index);
  }
  proto_log::PlayerLogBodyTowerEnterLevel::set_level_index(v8, this->cur_level_record_.cur_level_index);
  if ( !is_second_path )
  {
    if ( std::vector<TowerTeam>::size(&this->cur_level_record_.tower_team_vec) )
    {
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      avatar_list = proto_log::PlayerLogBodyTowerEnterLevel::mutable_first_avatar_list(v9);
      v11 = std::vector<TowerTeam>::operator[](&this->cur_level_record_.tower_team_vec, 0LL);
      PlayerTowerComp::logTowerLevelEnter(bool)::{lambda(std::vector<unsigned long> const&,google::protobuf::RepeatedPtrField<proto_log::AvatarLog> &)#1}::operator()(
        (const PlayerTowerComp::logTowerLevelEnter::<lambda(const std::vector<long unsigned int>&, google::protobuf::RepeatedPtrField<proto_log::AvatarLog>&)> *const)(v2 + 32),
        &v11->mirror_avatar_guid_vec,
        avatar_list);
    }
  }
  else if ( std::vector<TowerTeam>::size(&this->cur_level_record_.tower_team_vec) > 1 )
  {
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v13 = proto_log::PlayerLogBodyTowerEnterLevel::mutable_second_avatar_list(v12);
    v14 = std::vector<TowerTeam>::operator[](&this->cur_level_record_.tower_team_vec, 1uLL);
    PlayerTowerComp::logTowerLevelEnter(bool)::{lambda(std::vector<unsigned long> const&,google::protobuf::RepeatedPtrField<proto_log::AvatarLog> &)#1}::operator()(
      (const PlayerTowerComp::logTowerLevelEnter::<lambda(const std::vector<long unsigned int>&, google::protobuf::RepeatedPtrField<proto_log::AvatarLog>&)> *const)(v2 + 32),
      &v14->mirror_avatar_guid_vec,
      v13);
  }
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerEnterLevel,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( is_second_path )
    v16 = 2;
  else
    v16 = 1;
  proto_log::PlayerLogBodyTowerEnterLevel::set_path(v15, v16);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTowerEnterLevel,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTowerEnterLevel> *)(v2 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyTowerEnterLevel>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTowerEnterLevel> *const)(v2 + 64));
  if ( v20 == (char *)v2 )
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

// Line 2619: range 0000000014384238-0000000014384481
void __cdecl PlayerTowerComp::logTowerLevelEnter(bool)::{lambda(std::vector<unsigned long> const&,google::protobuf::RepeatedPtrField<proto_log::AvatarLog> &)#1}::operator()(
        const PlayerTowerComp::logTowerLevelEnter::<lambda(const std::vector<long unsigned int>&, google::protobuf::RepeatedPtrField<proto_log::AvatarLog>&)> *const __closure,
        const std::vector<long unsigned int> *avatar_guid_vec,
        google::protobuf::RepeatedPtrField<proto_log::AvatarLog> *avatar_log_list)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint64_t *v6; // rax
  PlayerTowerComp *this; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Avatar *v9; // rax
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-88h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-80h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-78h]
  uint64_t avatar_guid; // [rsp+40h] [rbp-70h]
  proto_log::AvatarLog *avatar_log; // [rsp+48h] [rbp-68h]
  char v16[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 avatar_ptr:2623";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::logTowerLevelEnter(bool)::{lambda(std::vector<unsigned long> const&,google::protobuf::RepeatedPtrField<proto_log::AvatarLog> &)#1}::operator();
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = avatar_guid_vec;
  __for_begin._M_current = std::vector<unsigned long>::begin(avatar_guid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned long>::end(avatar_guid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
  {
    v6 = (uint64_t *)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      v6 = (uint64_t *)__asan_report_load8(v6);
    avatar_guid = *v6;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    this = __closure->__this;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
      this = (PlayerTowerComp *)__asan_report_load8(&__closure->__this->player_);
    AvatarComp = Player::getAvatarComp(this->player_);
    PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 32), (uint64_t)AvatarComp);
    if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 32)) )
    {
      avatar_log = google::protobuf::RepeatedPtrField<proto_log::AvatarLog>::Add(avatar_log_list);
      v9 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Avatar::getAvatarLog(v9, avatar_log);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
  }
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2657: range 00000000143848C4-00000000143851D7
void __cdecl PlayerTowerComp::logTowerLevelSettle(
        PlayerTowerComp *const this,
        const TowerCurLevelRecord *level_record,
        bool is_win,
        const std::vector<unsigned int> *satisfied_star_condition_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  bool v8; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  google::protobuf::uint32 v18; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  google::protobuf::RepeatedField<unsigned int> *v20; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  std::pair<unsigned int const,unsigned int> *v22; // rax
  std::pair<unsigned int const,unsigned int> *v23; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  Player *player; // r14
  google::protobuf::uint32 cur_floor_star_num; // [rsp+20h] [rbp-150h]
  uint32_t total_star_num; // [rsp+24h] [rbp-14Ch]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-148h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-140h] BYREF
  TowerFloorRecord *floor_record; // [rsp+38h] [rbp-138h]
  std::map<unsigned int,TowerFloorRecord> *__for_range; // [rsp+40h] [rbp-130h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+48h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+50h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+58h] [rbp-118h]
  const std::pair<unsigned int const,TowerFloorRecord> *v39; // [rsp+60h] [rbp-110h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_index; // [rsp+68h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_record_0; // [rsp+70h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+78h] [rbp-F8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+80h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v44; // [rsp+90h] [rbp-E0h] BYREF
  common::milog::MiLogStream v45; // [rsp+A0h] [rbp-D0h] BYREF
  std::string val; // [rsp+C0h] [rbp-B0h] BYREF
  char v47[144]; // [rsp+E0h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 9 iter:2659 64 16 31 tower_level_settle_log_ptr:2677";
  *(_QWORD *)(v4 + 16) = PlayerTowerComp::logTowerLevelSettle;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  cur_floor_star_num = 0;
  *(std::map<unsigned int,TowerFloorRecord>::iterator *)(v4 + 32) = std::map<unsigned int,TowerFloorRecord>::find(
                                                                      &this->tower_floor_record_map_,
                                                                      &level_record->cur_floor_index);
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v4 + 32),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)&__for_end) )
  {
    floor_record = &std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v4 + 32))->second;
    cur_floor_star_num = TowerFloorRecord::getTotalStarNum(floor_record);
  }
  total_star_num = 0;
  __for_range = &this->tower_floor_record_map_;
  __for_end_0._M_node = std::map<unsigned int,TowerFloorRecord>::begin(&this->tower_floor_record_map_)._M_node;
  __for_end = (std::pair<unsigned int const,unsigned int>)std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)&__for_end_0,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)&__for_end) )
  {
    v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)&__for_end_0);
    floor_index = std::get<0ul,unsigned int const,TowerFloorRecord>(v39);
    floor_record_0 = (std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *)std::get<1ul,unsigned int const,TowerFloorRecord>(v39);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v44);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v44)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(floor_index);
    }
    v8 = !TowerExcelConfigMgr::isIndexEntranceFloor(p_tower_config_mgr, *floor_index);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v44);
    if ( v8 )
      total_star_num += TowerFloorRecord::getTotalStarNum(floor_record_0);
    std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)&__for_end_0);
  }
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTowerSettle>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyTowerSettle::set_tower_level_transaction(v9, &level_record->cur_tower_level_transaction);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  proto_log::PlayerLogBodyTowerSettle::set_schedule_id(v10, this->tower_schedule_id_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)level_record >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)level_record >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(level_record);
  }
  proto_log::PlayerLogBodyTowerSettle::set_floor_index(v11, level_record->cur_floor_index);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&level_record->cur_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)level_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_record->cur_level_index >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&level_record->cur_level_index);
  }
  proto_log::PlayerLogBodyTowerSettle::set_level_index(v12, level_record->cur_level_index);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&level_record->cur_tower_team_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&level_record->cur_tower_team_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&level_record->cur_tower_team_id);
  }
  proto_log::PlayerLogBodyTowerSettle::set_path(v13, level_record->cur_tower_team_id);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyTowerSettle::set_result(v14, !is_win);
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyTowerSettle::set_floor_star_num(v15, cur_floor_star_num);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyTowerSettle::set_schedule_star_num(v16, total_star_num);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v18 = std::vector<unsigned int>::size(satisfied_star_condition_vec);
  proto_log::PlayerLogBodyTowerSettle::set_level_star_num(v17, v18);
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  v20 = proto_log::PlayerLogBodyTowerSettle::mutable_satisfied_star_condition_list(v19);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(satisfied_star_condition_vec, v20);
  v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&level_record->cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)level_record - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_record->cur_tower_buff_id >> 3)
                                                                 + 0x7FFF8000) )
  {
    __asan_report_load4(&level_record->cur_tower_buff_id);
  }
  proto_log::PlayerLogBodyTowerSettle::set_cur_tower_buff_id(v21, level_record->cur_tower_buff_id);
  __for_range_0 = &level_record->tower_buff_map;
  __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&level_record->tower_buff_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v22 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
    v23 = v22;
    if ( ((unsigned __int8)v22 & 7) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v22 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v22->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v22, 8LL);
    }
    __for_end = *v23;
    _ = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
    buff_id = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(buff_id);
    }
    proto_log::PlayerLogBodyTowerSettle::add_tower_buff_list(v24, *buff_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v45,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/tower/player_tower_comp.cpp",
    "logTowerLevelSettle",
    2691);
  v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v45,
          (const char (*)[30])"[TOWER] logTowerLevelSettle: ");
  v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, v26);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v45);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v44, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTowerSettle,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTowerSettle> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &v44, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v44);
  std::shared_ptr<proto_log::PlayerLogBodyTowerSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTowerSettle> *const)(v4 + 64));
  if ( v47 == (char *)v4 )
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

// Line 2696: range 000000001438528A-0000000014385962
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerTowerComp::logTowerMonthlySummary(
        PlayerTowerComp *const this,
        const TowerMonthlySummary *last_month_summary)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  proto_log::TowerFightStatPair *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  proto_log::TowerFightStatPair *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  proto_log::TowerFightStatPair *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  proto_log::TowerFightStatPair *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  proto_log::TowerFightStatPair *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  proto_log::TowerFightStatPair *v21; // rax
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  Player *v24; // r14
  std::string last_month_summarya; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  const TowerMonthlyCombatRecord *combat_record; // [rsp+20h] [rbp-F0h]
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-E8h]
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int,unsigned int> *reveal_pair; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v31; // [rsp+50h] [rbp-C0h] BYREF
  std::string v32; // [rsp+60h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+80h] [rbp-90h] BYREF

  last_month_summarya._M_string_length = (std::string::size_type)this;
  last_month_summarya._M_dataplus._M_p = (std::string::pointer)last_month_summary;
  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 11 holder:2697 48 1 17 to_stat_pair:2705 64 16 28 log_monthly_summary_ptr:2698";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::logTowerMonthlySummary;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((last_month_summarya._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(last_month_summarya._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(last_month_summarya._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v32, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x97Bu, last_month_summarya);
  std::string::~string(&v32);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyTowerMonthlySummary>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)last_month_summarya._M_dataplus._M_p >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)last_month_summarya._M_dataplus._M_p >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(last_month_summarya._M_dataplus._M_p);
  }
  proto_log::PlayerLogBodyTowerMonthlySummary::set_schedule_id(v6, *(_DWORD *)last_month_summarya._M_dataplus._M_p);
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(last_month_summarya._M_dataplus._M_p + 4) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(last_month_summarya._M_dataplus._M_p) + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(last_month_summarya._M_dataplus._M_p + 4) >> 3)
                                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(last_month_summarya._M_dataplus._M_p + 4);
  }
  proto_log::PlayerLogBodyTowerMonthlySummary::set_best_floor_index(
    v7,
    *((_DWORD *)last_month_summarya._M_dataplus._M_p + 1));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(last_month_summarya._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(last_month_summarya._M_dataplus._M_p + 8) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(last_month_summarya._M_dataplus._M_p + 8);
  }
  proto_log::PlayerLogBodyTowerMonthlySummary::set_best_level_index(
    v8,
    *((_DWORD *)last_month_summarya._M_dataplus._M_p + 2));
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)(last_month_summarya._M_dataplus._M_p + 12) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(last_month_summarya._M_dataplus._M_p) + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(last_month_summarya._M_dataplus._M_p + 12) >> 3)
                                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(last_month_summarya._M_dataplus._M_p + 12);
  }
  proto_log::PlayerLogBodyTowerMonthlySummary::set_total_start_num(
    v9,
    *((_DWORD *)last_month_summarya._M_dataplus._M_p + 3));
  combat_record = (const TowerMonthlyCombatRecord *)(last_month_summarya._M_dataplus._M_p + 24);
  __for_range = (const std::vector<std::pair<unsigned int,unsigned int>> *)(last_month_summarya._M_dataplus._M_p + 24);
  *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)last_month_summarya._anon_0._M_local_buf = std::vector<std::pair<unsigned int,unsigned int>>::begin((const std::vector<std::pair<unsigned int,unsigned int>> *const)last_month_summarya._M_dataplus._M_p + 1);
  *((std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)&last_month_summarya._anon_0._M_allocated_capacity
  + 1) = std::vector<std::pair<unsigned int,unsigned int>>::end((const std::vector<std::pair<unsigned int,unsigned int>> *const)last_month_summarya._M_dataplus._M_p + 1);
  while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
            (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&last_month_summarya._anon_0,
            (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)&last_month_summarya._anon_0._M_allocated_capacity
          + 1) )
  {
    reveal_pair = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&last_month_summarya._anon_0);
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v11 = proto_log::PlayerLogBodyTowerMonthlySummary::add_most_revealed_avatar_pair_list(v10);
    PlayerTowerComp::logTowerMonthlySummary::_lambda_const_auto_28___proto_log::TowerFightStatPair___::operator()_std::pair_unsigned_int_unsigned_int___(
      (const PlayerTowerComp::logTowerMonthlySummary::<lambda(const auto:28&, proto_log::TowerFightStatPair&)> *const)(v2 + 48),
      reveal_pair,
      v11);
    __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)&last_month_summarya._anon_0);
  }
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v13 = proto_log::PlayerLogBodyTowerMonthlySummary::mutable_most_kill_avatar_pair(v12);
  PlayerTowerComp::logTowerMonthlySummary::_lambda_const_auto_28___proto_log::TowerFightStatPair___::operator()_std::pair_unsigned_int_unsigned_int___(
    (const PlayerTowerComp::logTowerMonthlySummary::<lambda(const auto:28&, proto_log::TowerFightStatPair&)> *const)(v2 + 48),
    &combat_record->most_kill_avatar_pair,
    v13);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v15 = proto_log::PlayerLogBodyTowerMonthlySummary::mutable_highest_dps_avatar_pair(v14);
  PlayerTowerComp::logTowerMonthlySummary::_lambda_const_auto_28___proto_log::TowerFightStatPair___::operator()_std::pair_unsigned_int_unsigned_int___(
    (const PlayerTowerComp::logTowerMonthlySummary::<lambda(const auto:28&, proto_log::TowerFightStatPair&)> *const)(v2 + 48),
    &combat_record->highest_dps_avatr_pair,
    v15);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v17 = proto_log::PlayerLogBodyTowerMonthlySummary::mutable_most_take_damage_avatar_pair(v16);
  PlayerTowerComp::logTowerMonthlySummary::_lambda_const_auto_28___proto_log::TowerFightStatPair___::operator()_std::pair_unsigned_int_unsigned_int___(
    (const PlayerTowerComp::logTowerMonthlySummary::<lambda(const auto:28&, proto_log::TowerFightStatPair&)> *const)(v2 + 48),
    &combat_record->most_take_damage_avatar_pair,
    v17);
  v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v19 = proto_log::PlayerLogBodyTowerMonthlySummary::mutable_most_cast_normal_skill_avatar_pair(v18);
  PlayerTowerComp::logTowerMonthlySummary::_lambda_const_auto_28___proto_log::TowerFightStatPair___::operator()_std::pair_unsigned_int_unsigned_int___(
    (const PlayerTowerComp::logTowerMonthlySummary::<lambda(const auto:28&, proto_log::TowerFightStatPair&)> *const)(v2 + 48),
    &combat_record->most_cast_normal_skill_avatar_pair,
    v19);
  v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v21 = proto_log::PlayerLogBodyTowerMonthlySummary::mutable_most_cast_energy_skill_avatar_pair(v20);
  PlayerTowerComp::logTowerMonthlySummary::_lambda_const_auto_28___proto_log::TowerFightStatPair___::operator()_std::pair_unsigned_int_unsigned_int___(
    (const PlayerTowerComp::logTowerMonthlySummary::<lambda(const auto:28&, proto_log::TowerFightStatPair&)> *const)(v2 + 48),
    &combat_record->most_cast_energy_skill_avatar_pair,
    v21);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v31);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31)->design_config.txt_config_mgr.tower_config_mgr;
  if ( *(_BYTE *)(((last_month_summarya._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((last_month_summarya._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(last_month_summarya._M_string_length + 32);
  }
  schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(
                          p_tower_config_mgr,
                          *(_DWORD *)(last_month_summarya._M_string_length + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v31);
  if ( schedule_config_ptr )
  {
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyTowerMonthlySummary,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->monthly_level_config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)schedule_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->monthly_level_config_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&schedule_config_ptr->monthly_level_config_id);
    }
    proto_log::PlayerLogBodyTowerMonthlySummary::set_monthly_level_config_id(
      v23,
      schedule_config_ptr->monthly_level_config_id);
  }
  if ( *(_BYTE *)(((last_month_summarya._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(last_month_summarya._M_string_length + 24);
  v24 = *(Player **)(last_month_summarya._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v31, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyTowerMonthlySummary,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyTowerMonthlySummary> *)(v2 + 64));
  Player::printStatLog(v24, &p_body_ptr, &v31, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v31);
  std::shared_ptr<proto_log::PlayerLogBodyTowerMonthlySummary>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyTowerMonthlySummary> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
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
};

// Line 2705: range 00000000143851D8-0000000014385289
void __cdecl PlayerTowerComp::logTowerMonthlySummary::_lambda_const_auto_28___proto_log::TowerFightStatPair___::operator()_std::pair_unsigned_int_unsigned_int___(
        const PlayerTowerComp::logTowerMonthlySummary::<lambda(const auto:28&, proto_log::TowerFightStatPair&)> *const __closure,
        const std::pair<unsigned int,unsigned int> *pair,
        proto_log::TowerFightStatPair *fight_pair)
{
  if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(pair);
  }
  proto_log::TowerFightStatPair::set_avatar_id(fight_pair, pair->first);
  if ( *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pair->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&pair->second);
  }
  proto_log::TowerFightStatPair::set_data(fight_pair, pair->second);
};

// Line 2735: range 0000000014385964-0000000014385BBE
void __fastcall PlayerTowerComp::clearRecordByGm(PlayerTowerComp *const this, uint32_t floor_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[416]; // [rsp+10h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 floor_index:2734 64 256 8 rsp:2749";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::clearRecordByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 48) = floor_index;
  if ( *(_DWORD *)(v2 + 48) )
  {
    while ( common::tools::MiscUtils::isContains<std::map<unsigned int,TowerFloorRecord>,unsigned int>(
              &this->tower_floor_record_map_,
              (const unsigned int *)(v2 + 48)) )
    {
      std::map<unsigned int,TowerFloorRecord>::erase(
        &this->tower_floor_record_map_,
        (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v2 + 48));
      ++*(_DWORD *)(v2 + 48);
    }
    PlayerTowerComp::internalResetCurLevelRecord(this);
  }
  else
  {
    PlayerTowerComp::internalClearAllData(this);
  }
  proto::TowerAllDataRsp::TowerAllDataRsp((proto::TowerAllDataRsp *const)(v2 + 64));
  PlayerTowerComp::requestAllData(this, (proto::TowerAllDataRsp *)(v2 + 64), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
  PlayerTowerComp::checkAndRefresh(this);
  proto::TowerAllDataRsp::~TowerAllDataRsp((proto::TowerAllDataRsp *const)(v2 + 64));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2757: range 0000000014385BC0-00000000143862A3
void __fastcall PlayerTowerComp::finishTowerByGm(
        PlayerTowerComp *const this,
        uint32_t star_num,
        uint32_t max_floor_index,
        uint32_t max_level_index)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const unsigned int *v7; // rax
  _DWORD *v8; // rdx
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t v10; // edx
  uint32_t v11; // eax
  const TowerExcelConfigMgr *p_tower_schedule_id; // rdi
  uint32_t v13; // ecx
  uint32_t v14; // edx
  std::vector<LevelRecord>::size_type v15; // r14
  std::vector<LevelRecord>::size_type v16; // r14
  std::vector<LevelRecord>::size_type v17; // rsi
  uint32_t level_id; // ecx
  char v19; // al
  PlayerEventComp *EventComp; // r14
  uint32_t level_index_limit; // [rsp+24h] [rbp-15Ch]
  const data::TowerFloorExcelConfig *floor_config_ptr; // [rsp+28h] [rbp-158h]
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-150h]
  TowerFloorRecord *floor_record_ptr; // [rsp+38h] [rbp-148h]
  LevelRecord *level_record; // [rsp+48h] [rbp-138h]
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<Config> v30; // [rsp+60h] [rbp-120h] BYREF
  char v31[272]; // [rsp+70h] [rbp-110h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 4 16 floor_index:2761 64 4 16 level_index:2770 80 4 8 idx:2795 96 4 13 star_num:2756 112 16"
                        " 14 event_ptr:2805 144 48 20 floor_index_set:2760";
  *(_QWORD *)(v4 + 16) = PlayerTowerComp::finishTowerByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = 62194;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 96) = star_num;
  *(_DWORD *)(v4 + 80) = 3;
  v7 = std::min<unsigned int>((const unsigned int *)(v4 + 96), (const unsigned int *)(v4 + 80));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  *(_DWORD *)(v4 + 96) = *v8;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 144));
  for ( *(_DWORD *)(v4 + 48) = 1; max_floor_index >= *(_DWORD *)(v4 + 48); ++*(_DWORD *)(v4 + 48) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v30);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.tower_config_mgr;
    v10 = *(_DWORD *)(v4 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
      __asan_report_load4(&this->tower_schedule_id_);
    }
    floor_config_ptr = TowerExcelConfigMgr::findTowerFloorConfig(p_tower_config_mgr, this->tower_schedule_id_, v10);
    std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( !floor_config_ptr )
      break;
    if ( max_floor_index == *(_DWORD *)(v4 + 48) )
      v11 = max_level_index;
    else
      v11 = 5;
    level_index_limit = v11;
    for ( *(_DWORD *)(v4 + 64) = 1; level_index_limit >= *(_DWORD *)(v4 + 64); ++*(_DWORD *)(v4 + 64) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      p_tower_schedule_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.tower_config_mgr;
      v13 = *(_DWORD *)(v4 + 64);
      v14 = *(_DWORD *)(v4 + 48);
      if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_tower_schedule_id = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
        __asan_report_load4(&this->tower_schedule_id_);
      }
      level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(
                           p_tower_schedule_id,
                           this->tower_schedule_id_,
                           v14,
                           v13);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( !level_config_ptr )
        break;
      floor_record_ptr = PlayerTowerComp::findOrAddTowerFloorRecord(this, *(_DWORD *)(v4 + 48));
      if ( floor_record_ptr )
      {
        v15 = *(unsigned int *)(v4 + 64);
        if ( v15 > std::vector<LevelRecord>::size(&floor_record_ptr->passed_level_record_vec) )
          std::vector<LevelRecord>::resize(&floor_record_ptr->passed_level_record_vec, *(unsigned int *)(v4 + 64));
        v16 = (unsigned int)(*(_DWORD *)(v4 + 64) - 1);
        if ( v16 < std::vector<LevelRecord>::size(&floor_record_ptr->passed_level_record_vec) )
        {
          v17 = (unsigned int)(*(_DWORD *)(v4 + 64) - 1);
          level_record = std::vector<LevelRecord>::operator[](&floor_record_ptr->passed_level_record_vec, v17);
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_config_ptr->level_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&level_config_ptr->level_id);
          }
          level_id = level_config_ptr->level_id;
          v19 = *(_BYTE *)(((unsigned __int64)level_record >> 3) + 0x7FFF8000);
          if ( v19 != 0 && v19 <= 3 )
          {
            LOBYTE(v17) = v19 != 0;
            __asan_report_store4(level_record, v17, (_BYTE)level_record);
          }
          level_record->level_id = level_id;
          for ( *(_DWORD *)(v4 + 80) = 1; *(_DWORD *)(v4 + 80) <= *(_DWORD *)(v4 + 96); ++*(_DWORD *)(v4 + 80) )
          {
            if ( !common::tools::MiscUtils::isContains<unsigned int>(
                    &level_record->satisfied_cond_vec,
                    (const unsigned int *)(v4 + 80)) )
              std::vector<unsigned int>::push_back(
                &level_record->satisfied_cond_vec,
                (const std::vector<unsigned int>::value_type *)(v4 + 80));
          }
        }
        common::tools::perf::make_shared<FinishTowerLevelEvent,unsigned int &,unsigned int &>(
          (unsigned int *)&v30,
          (unsigned int *)(v4 + 48),
          (unsigned int *)(v4 + 64),
          (unsigned int *)(v4 + 48));
        std::shared_ptr<BaseEvent>::shared_ptr<FinishTowerLevelEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v4 + 112),
          (std::shared_ptr<FinishTowerLevelEvent> *)&v30);
        std::shared_ptr<FinishTowerLevelEvent>::~shared_ptr((std::shared_ptr<FinishTowerLevelEvent> *const)&v30);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&v30,
          (const std::shared_ptr<BaseEvent> *)(v4 + 112));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v30);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v30);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 112));
      }
    }
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(v4 + 144),
      (const std::set<unsigned int>::value_type *)(v4 + 48));
  }
  PlayerTowerComp::notifyTowerFloorRecord(this, (const std::set<unsigned int> *)(v4 + 144));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 144));
  if ( v31 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 2817: range 00000000143862A4-0000000014386623
__int64 __fastcall PlayerTowerComp::setCurrentScheduleIdByGm(
        PlayerTowerComp *const this,
        uint32_t schedule_id,
        std::string *ret_msg)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  PlayerGmComp *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  PlayerGmComp *GmComp; // rax
  const data::TowerScheduleExcelConfig *schedule_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-B0h] BYREF
  std::string __rhs; // [rsp+40h] [rbp-A0h] BYREF
  std::string v14; // [rsp+60h] [rbp-80h] BYREF
  char v15[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 schedule_id:2816";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::setCurrentScheduleIdByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = schedule_id;
  if ( *(_DWORD *)(v3 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    schedule_config_ptr = TowerExcelConfigMgr::findTowerScheduleConfig(
                            &v7->design_config.txt_config_mgr.tower_config_mgr,
                            *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( !schedule_config_ptr )
    {
      std::to_string(&__rhs, *(_DWORD *)(v3 + 32));
      std::operator+<char>(&v14, "schedule config not found, schedule_id:", &__rhs);
      std::string::operator=(ret_msg, &v14);
      std::string::~string(&v14);
      std::string::~string(&__rhs);
      result = 0xFFFFFFFFLL;
      goto LABEL_17;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    GmComp = Player::getGmComp(this->player_);
    if ( !PlayerGmComp::setGmSetValue<unsigned int>(GmComp, 9u, (const unsigned int *)(v3 + 32)) )
    {
      std::string::operator=(ret_msg, "setGmSetValue fail");
      result = 0xFFFFFFFFLL;
      goto LABEL_17;
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v6 = Player::getGmComp(this->player_);
    PlayerGmComp::clearSetValue<unsigned int>(v6, 9u);
  }
  PlayerTowerComp::checkAndRefresh(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tower_schedule_id_);
  }
  std::to_string(&__rhs, this->tower_schedule_id_);
  std::operator+<char>(&v14, "current tower schedule_id:", &__rhs);
  std::string::operator=(ret_msg, &v14);
  std::string::~string(&v14);
  std::string::~string(&__rhs);
  result = 0LL;
LABEL_17:
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

// Line 2843: range 0000000014386624-0000000014386721
void __fastcall PlayerTowerComp::setDailyLevelBuffByGm(
        PlayerTowerComp *const this,
        uint32_t level_id,
        const std::vector<unsigned int> *buff_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::remove_reference<const std::vector<unsigned int>&>::type *v6; // r14
  std::vector<unsigned int> *v7; // rax
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 level_id:2842";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::setDailyLevelBuffByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = level_id;
  v6 = std::move<std::vector<unsigned int> const&>(buff_vec);
  v7 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
         &this->daily_level_buff_map_,
         (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 32));
  std::vector<unsigned int>::operator=(v7, v6);
  if ( v9 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2849: range 0000000014386722-0000000014386F73
void __cdecl PlayerTowerComp::notifyTowerCondFinishTime(PlayerTowerComp *const this, uint32_t sec, bool is_pause)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rcx
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t cur_floor_index; // edx
  TowerExcelConfigMgr *v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  DungeonScene *v17; // rsi
  bool isTowerConditionMeet; // al
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *player; // r14
  uint32_t floor_id; // [rsp+1Ch] [rbp-F4h]
  std::vector<data::TowerCondition>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<data::TowerCondition>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+30h] [rbp-E0h]
  const std::vector<data::TowerCondition> *__for_range; // [rsp+38h] [rbp-D8h]
  const data::TowerCondition *tower_condition; // [rsp+40h] [rbp-D0h]
  proto::TowerLevelStarCondData *cond_data; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<const google::protobuf::Message> v29; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 26 cur_dungeon_scene_ptr:2856 64 16 15 notify_ptr:2871";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::notifyTowerCondFinishTime;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  if ( TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "notifyTowerCondFinishTime",
      2852);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v30, (const char (*)[35])off_25323700);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v6, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v3 + 32));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/tower/player_tower_comp.cpp",
        "notifyTowerCondFinishTime",
        2859);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v30, (const char (*)[28])off_25320420);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v7, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v30);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.tower_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->cur_level_record_;
        __asan_report_load4(&this->cur_level_record_);
      }
      cur_floor_index = this->cur_level_record_.cur_floor_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
        __asan_report_load4(&this->tower_schedule_id_);
      }
      floor_id = TowerExcelConfigMgr::findTowerFloorId(p_tower_config_mgr, this->tower_schedule_id_, cur_floor_index);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      v10 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.tower_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->cur_level_record_.cur_level_index);
      }
      level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(
                           v10,
                           floor_id,
                           this->cur_level_record_.cur_level_index);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
      if ( level_config_ptr )
      {
        common::tools::perf::make_shared<proto::TowerLevelStarCondNotify>();
        v14 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        proto::TowerLevelStarCondNotify::set_floor_id(v14, floor_id);
        v15 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->cur_level_record_.cur_level_index);
        }
        proto::TowerLevelStarCondNotify::set_level_index(v15, this->cur_level_record_.cur_level_index);
        __for_range = &level_config_ptr->conds;
        __for_begin._M_current = std::vector<data::TowerCondition>::begin(&level_config_ptr->conds)._M_current;
        __for_end._M_current = std::vector<data::TowerCondition>::end(&level_config_ptr->conds)._M_current;
        while ( __gnu_cxx::operator!=<data::TowerCondition const*,std::vector<data::TowerCondition>>(
                  &__for_begin,
                  &__for_end) )
        {
          tower_condition = __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&tower_condition->tower_cond_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&tower_condition->tower_cond_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&tower_condition->tower_cond_type);
          }
          if ( tower_condition->tower_cond_type == TOWER_COND_FINISH_TIME_LESS_THAN )
          {
            v16 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            cond_data = proto::TowerLevelStarCondNotify::add_cond_data_list(v16);
            if ( *(_BYTE *)(((unsigned __int64)&tower_condition->index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&tower_condition->index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&tower_condition->index);
            }
            proto::TowerLevelStarCondData::set_star_cond_index(cond_data, tower_condition->index);
            v17 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
            isTowerConditionMeet = PlayerTowerComp::isTowerConditionMeet(this, v17, tower_condition, 1);
            proto::TowerLevelStarCondData::set_is_fail(cond_data, !isTowerConditionMeet);
          }
          __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator++(&__for_begin);
        }
        v19 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( proto::TowerLevelStarCondNotify::cond_data_list_size(v19) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          player = this->player_;
          std::dynamic_pointer_cast<google::protobuf::Message const,proto::TowerLevelStarCondNotify>((const std::shared_ptr<proto::TowerLevelStarCondNotify> *)&v29);
          Player::sendMessage(player, &v29, 0LL);
          std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v29);
        }
        std::shared_ptr<proto::TowerLevelStarCondNotify>::~shared_ptr((std::shared_ptr<proto::TowerLevelStarCondNotify> *const)(v3 + 64));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "notifyTowerCondFinishTime",
          2867);
        v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v30,
                (const char (*)[45])"findTowerLevelConfig fail, cur level record:");
        v12 = operator<<(v11, &this->cur_level_record_);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v13, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 32));
  }
  if ( v31 == (char *)v3 )
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

// Line 2892: range 0000000014386F74-0000000014387204
void __cdecl PlayerTowerComp::getCurrentTowerBuffs(
        const PlayerTowerComp *const this,
        std::vector<unsigned int> *server_buff_id_vec)
{
  std::pair<unsigned int const,unsigned int> *v2; // rax
  std::pair<unsigned int const,unsigned int> *v3; // rdx
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-48h]
  const data::TowerBuffExcelConfig *tower_buff_config_ptr; // [rsp+30h] [rbp-40h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *buff_uid; // [rsp+38h] [rbp-38h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *buff_id; // [rsp+40h] [rbp-30h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-28h] BYREF
  std::shared_ptr<Config> v12[2]; // [rsp+50h] [rbp-20h] BYREF

  __for_range = &this->cur_level_record_.tower_buff_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->cur_level_record_.tower_buff_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->cur_level_record_.tower_buff_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v3 = v2;
    if ( ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v2->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v2, 8LL);
    }
    __in = *v3;
    buff_uid = std::get<0ul,unsigned int const,unsigned int>(&__in);
    buff_id = std::get<1ul,unsigned int const,unsigned int>(&__in);
    std::vector<unsigned int>::push_back(server_buff_id_vec, buff_id);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_level_record_.cur_tower_buff_id);
  }
  if ( this->cur_level_record_.cur_tower_buff_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v12);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_tower_buff_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_level_record_.cur_tower_buff_id);
    }
    tower_buff_config_ptr = data::TowerExcelConfigMgrBase::findTowerBuffExcelConfig(
                              p_tower_config_mgr,
                              this->cur_level_record_.cur_tower_buff_id);
    std::shared_ptr<Config>::~shared_ptr(v12);
    if ( tower_buff_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->lasting_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)tower_buff_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&tower_buff_config_ptr->lasting_type >> 3)
                                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&tower_buff_config_ptr->lasting_type);
      }
      if ( tower_buff_config_ptr->lasting_type != TOWER_BUFF_LASTING_IMMEDIATE )
        std::vector<unsigned int>::push_back(server_buff_id_vec, &this->cur_level_record_.cur_tower_buff_id);
    }
  }
};

// Line 2909: range 0000000014387206-0000000014387530
uint32_t __fastcall PlayerTowerComp::queryStarsAtFloor(const PlayerTowerComp *const this, uint32_t floor_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t v6; // edx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  uint32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::pointer v13; // rax
  uint32_t floor_id; // [rsp+14h] [rbp-BCh]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  std::shared_ptr<Config> v17; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-A0h] BYREF
  char v19[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 floor_index:2908 64 8 9 iter:2916";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::queryStarsAtFloor;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = floor_index;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.tower_config_mgr;
  v6 = *(_DWORD *)(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
    __asan_report_load4(&this->tower_schedule_id_);
  }
  floor_id = TowerExcelConfigMgr::findTowerFloorId(p_tower_config_mgr, this->tower_schedule_id_, v6);
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( floor_id )
  {
    *(std::map<unsigned int,TowerFloorRecord>::const_iterator *)(v2 + 64) = std::map<unsigned int,TowerFloorRecord>::find(
                                                                              &this->tower_floor_record_map_,
                                                                              (const std::map<unsigned int,TowerFloorRecord>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> >::_Self *)(v2 + 64),
           &__y) )
    {
      result = 0;
    }
    else
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord> > *const)(v2 + 64));
      result = TowerFloorRecord::getTotalStarNum(&v13->second);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/tower/player_tower_comp.cpp",
      "queryStarsAtFloor",
      2913);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v18,
           (const char (*)[20])"tower_schedule_id_:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->tower_schedule_id_);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" floor_index:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v11, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0;
  }
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

// Line 2925: range 0000000014387532-000000001438768E
uint32_t __cdecl PlayerTowerComp::queryTotalStarsOfEntrance(const PlayerTowerComp *const this)
{
  TowerExcelConfigMgr *p_tower_config_mgr; // rcx
  bool isIndexEntranceFloor; // bl
  uint32_t total_star_num; // [rsp+1Ch] [rbp-54h]
  std::map<unsigned int,TowerFloorRecord>::const_iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,TowerFloorRecord>::const_iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const std::map<unsigned int,TowerFloorRecord> *__for_range; // [rsp+30h] [rbp-40h]
  const std::pair<unsigned int const,TowerFloorRecord> *v8; // [rsp+38h] [rbp-38h]
  std::tuple_element<0,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_index; // [rsp+40h] [rbp-30h]
  std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *floor_record; // [rsp+48h] [rbp-28h]
  std::shared_ptr<Config> v11[2]; // [rsp+50h] [rbp-20h] BYREF

  total_star_num = 0;
  __for_range = &this->tower_floor_record_map_;
  __for_begin._M_node = std::map<unsigned int,TowerFloorRecord>::begin(&this->tower_floor_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,TowerFloorRecord>::end(&this->tower_floor_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator*(&__for_begin);
    floor_index = std::get<0ul,unsigned int const,TowerFloorRecord>(v8);
    floor_record = (std::tuple_element<1,const std::pair<unsigned int const,TowerFloorRecord> >::type *)std::get<1ul,unsigned int const,TowerFloorRecord>(v8);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.tower_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)floor_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)floor_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(floor_index);
    }
    isIndexEntranceFloor = TowerExcelConfigMgr::isIndexEntranceFloor(p_tower_config_mgr, *floor_index);
    std::shared_ptr<Config>::~shared_ptr(v11);
    if ( isIndexEntranceFloor )
      total_star_num += TowerFloorRecord::getTotalStarNum(floor_record);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,TowerFloorRecord>>::operator++(&__for_begin);
  }
  return total_star_num;
};

// Line 2938: range 0000000014387690-00000000143876F8
void __cdecl PlayerTowerComp::onDoHurt(PlayerTowerComp *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( PlayerTowerComp::isInTowerLevel(this) )
  {
    v1 = ((_BYTE)this - 52) & 7;
    v2 = (*(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_hurt_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
      __asan_report_store1(&this->is_hurt_, v1, v2);
    this->is_hurt_ = 1;
  }
};

// Line 2947: range 00000000143876FA-00000000143878DB
void __fastcall PlayerTowerComp::onGadgetHurt(PlayerTowerComp *const this, uint32_t gadget_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::less<data::TowerCondType> __comp; // [rsp+2Ah] [rbp-A6h] BYREF
  std::allocator<data::TowerCondType> __a; // [rsp+2Bh] [rbp-A5h] BYREF
  std::initializer_list<data::TowerCondType> __l; // [rsp+2Ch] [rbp-A4h] BYREF
  char v8[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 gadget_id:2946";
  *(_QWORD *)(v2 + 16) = PlayerTowerComp::onGadgetHurt;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = gadget_id;
  if ( PlayerTowerComp::isInTowerLevel(this) )
  {
    std::unordered_set<unsigned int>::insert(
      &this->gadget_hurt_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
    LODWORD(__l._M_array) = 2;
    std::allocator<data::TowerCondType>::allocator(&__a);
    std::set<data::TowerCondType>::set(
      (std::set<data::TowerCondType> *const)((char *)&__l._M_array + 4),
      (std::initializer_list<data::TowerCondType>)__PAIR128__(1LL, &__l),
      &__comp,
      &__a);
    PlayerTowerComp::checkStarCondFailAndNotify(
      this,
      (const std::set<data::TowerCondType> *)((char *)&__l._M_array + 4),
      0);
    std::set<data::TowerCondType>::~set((std::set<data::TowerCondType> *const)((char *)&__l._M_array + 4));
    std::allocator<data::TowerCondType>::~allocator(&__a);
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
};

// Line 2959: range 00000000143878DC-0000000014387AC4
std::pair<unsigned int,unsigned int> __cdecl PlayerTowerComp::getCurScheduleFloorRecord(PlayerTowerComp *const this)
{
  unsigned __int64 p_M_parent; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > >::pointer v4; // rax
  unsigned __int64 v5; // rax
  std::pair<unsigned int,unsigned int> v6; // rax
  std::map<unsigned int,TowerFloorRecord> v7; // [rsp+10h] [rbp-90h] BYREF

  p_M_parent = (unsigned __int64)&v7._M_t._M_impl._M_header._M_parent;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_parent = v2;
  }
  *(_QWORD *)p_M_parent = 1102416563LL;
  *(_QWORD *)(p_M_parent + 8) = "3 32 4 16 floor_index:2960 48 4 16 level_index:2961 64 8 8 rit:2962";
  *(_QWORD *)(p_M_parent + 16) = PlayerTowerComp::getCurScheduleFloorRecord;
  v3 = (_DWORD *)(p_M_parent >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116352;
  *(_DWORD *)(p_M_parent + 32) = 0;
  *(_DWORD *)(p_M_parent + 48) = 0;
  std::map<unsigned int,TowerFloorRecord>::rbegin((std::map<unsigned int,TowerFloorRecord> *const)(p_M_parent + 64));
  while ( 1 )
  {
    std::map<unsigned int,TowerFloorRecord>::rend(&v7);
    if ( !std::operator!=<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>(
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *)(p_M_parent + 64),
            (const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *)&v7) )
      break;
    v4 = std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(p_M_parent + 64));
    *(_QWORD *)&v7._M_t._M_impl._M_header._M_color = &v4->second;
    if ( !std::vector<LevelRecord>::empty(&v4->second.passed_level_record_vec) )
    {
      v5 = (unsigned __int64)std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator->((const std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(p_M_parent + 64));
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) <= 3 )
        v5 = __asan_report_load4(v5);
      *(_DWORD *)(p_M_parent + 32) = *(_DWORD *)v5;
      *(_DWORD *)(p_M_parent + 48) = std::vector<LevelRecord>::size((const std::vector<LevelRecord> *const)(*(_QWORD *)&v7._M_t._M_impl._M_header._M_color + 8LL));
      break;
    }
    std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord>>>::operator++((std::reverse_iterator<std::_Rb_tree_iterator<std::pair<unsigned int const,TowerFloorRecord> > > *const)(p_M_parent + 64));
  }
  v6 = std::make_pair<unsigned int &,unsigned int &>(
         (unsigned int *)(p_M_parent + 32),
         (unsigned int *)(p_M_parent + 48));
  if ( &v7._M_t._M_impl._M_header._M_parent == (std::_Rb_tree_node_base::_Base_ptr *)p_M_parent )
  {
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_parent >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_parent = 1172321806LL;
    *(_QWORD *)((p_M_parent >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_parent >> 3) + 0x7FFF8008) = -168430091;
  }
  return v6;
};

// Line 2977: range 0000000014387AC6-0000000014387B9B
void __cdecl PlayerTowerComp::onTimer(PlayerTowerComp *const this, uint64_t now_ms)
{
  std::less<data::TowerCondType> __comp; // [rsp+12h] [rbp-5Eh] BYREF
  std::allocator<data::TowerCondType> __a; // [rsp+13h] [rbp-5Dh] BYREF
  std::initializer_list<data::TowerCondType> __l; // [rsp+14h] [rbp-5Ch] BYREF

  __l._M_array = (std::initializer_list<data::TowerCondType>::iterator)0x300000001LL;
  LODWORD(__l._M_len) = 2;
  std::allocator<data::TowerCondType>::allocator(&__a);
  std::set<data::TowerCondType>::set(
    (std::set<data::TowerCondType> *const)((char *)&__l._M_len + 4),
    (std::initializer_list<data::TowerCondType>)__PAIR128__(3LL, &__l),
    &__comp,
    &__a);
  PlayerTowerComp::checkStarCondFailAndNotify(this, (const std::set<data::TowerCondType> *)((char *)&__l._M_len + 4), 0);
  std::set<data::TowerCondType>::~set((std::set<data::TowerCondType> *const)((char *)&__l._M_len + 4));
  std::allocator<data::TowerCondType>::~allocator(&__a);
};

// Line 2987: range 0000000014387B9C-00000000143885F8
void __cdecl PlayerTowerComp::checkStarCondFailAndNotify(
        PlayerTowerComp *const this,
        const std::set<data::TowerCondType> *cond_filter_set,
        bool is_force_notify)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rcx
  const TowerExcelConfigMgr *p_tower_config_mgr; // rdi
  uint32_t cur_level_index; // ecx
  uint32_t cur_floor_index; // edx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  const TowerExcelConfigMgr *p_cur_level_record; // rdi
  uint32_t v19; // edx
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rcx
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  DungeonScene *v23; // rsi
  std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  Player *player; // r14
  bool is_need_notify; // [rsp+29h] [rbp-117h]
  char is_meet; // [rsp+2Ah] [rbp-116h]
  char prev_is_meet; // [rsp+2Bh] [rbp-115h]
  uint32_t floor_id; // [rsp+2Ch] [rbp-114h]
  std::vector<data::TowerCondition>::const_iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::vector<data::TowerCondition>::const_iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  const data::TowerLevelExcelConfig *level_config_ptr; // [rsp+40h] [rbp-100h]
  const std::vector<data::TowerCondition> *__for_range; // [rsp+48h] [rbp-F8h]
  const data::TowerCondition *tower_condition; // [rsp+50h] [rbp-F0h]
  proto::TowerLevelStarCondData *cond_data; // [rsp+58h] [rbp-E8h]
  std::shared_ptr<const google::protobuf::Message> v40; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v41; // [rsp+70h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 dungeon_id:3013 64 16 26 cur_dungeon_scene_ptr:2993 96 16 15 notify_ptr:3021";
  *(_QWORD *)(v3 + 16) = PlayerTowerComp::checkStarCondFailAndNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  if ( PlayerTowerComp::isInTowerLevel(this) )
  {
    std::weak_ptr<DungeonScene>::lock((const std::weak_ptr<DungeonScene> *const)(v3 + 64));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/tower/player_tower_comp.cpp",
        "checkStarCondFailAndNotify",
        2996);
      v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(&v41, (const char (*)[28])off_25320420);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v6, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v41);
    }
    else if ( TowerCurLevelRecord::isEmpty(&this->cur_level_record_) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/tower/player_tower_comp.cpp",
        "checkStarCondFailAndNotify",
        3002);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v41,
        (const char (*)[26])"cur_level_record_ is null");
      common::milog::MiLogStream::~MiLogStream(&v41);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v40);
      p_tower_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.tower_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                             + 0x7FFF8000) )
      {
        p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->cur_level_record_.cur_level_index;
        __asan_report_load4(&this->cur_level_record_.cur_level_index);
      }
      cur_level_index = this->cur_level_record_.cur_level_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->cur_level_record_;
        __asan_report_load4(&this->cur_level_record_);
      }
      cur_floor_index = this->cur_level_record_.cur_floor_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_tower_config_mgr = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
        __asan_report_load4(&this->tower_schedule_id_);
      }
      level_config_ptr = TowerExcelConfigMgr::findTowerLevelConfig(
                           p_tower_config_mgr,
                           this->tower_schedule_id_,
                           cur_floor_index,
                           cur_level_index);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
      if ( level_config_ptr )
      {
        v13 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        *(_DWORD *)(v3 + 48) = DungeonScene::getDungeonId(v13);
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->dungeon_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->dungeon_id);
        }
        if ( level_config_ptr->dungeon_id == *(_DWORD *)(v3 + 48) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v40);
          p_cur_level_record = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.tower_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_level_record_ >> 3) + 0x7FFF8000) <= 3 )
          {
            p_cur_level_record = (const TowerExcelConfigMgr *)&this->cur_level_record_;
            __asan_report_load4(&this->cur_level_record_);
          }
          v19 = this->cur_level_record_.cur_floor_index;
          if ( *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->tower_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            p_cur_level_record = (const TowerExcelConfigMgr *)&this->tower_schedule_id_;
            __asan_report_load4(&this->tower_schedule_id_);
          }
          floor_id = TowerExcelConfigMgr::findTowerFloorId(p_cur_level_record, this->tower_schedule_id_, v19);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v40);
          common::tools::perf::make_shared<proto::TowerLevelStarCondNotify>();
          v20 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          proto::TowerLevelStarCondNotify::set_floor_id(v20, floor_id);
          v21 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_level_record_.cur_level_index >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&this->cur_level_record_.cur_level_index);
          }
          proto::TowerLevelStarCondNotify::set_level_index(v21, this->cur_level_record_.cur_level_index);
          is_need_notify = is_force_notify;
          __for_range = &level_config_ptr->conds;
          __for_begin._M_current = std::vector<data::TowerCondition>::begin(&level_config_ptr->conds)._M_current;
          __for_end._M_current = std::vector<data::TowerCondition>::end(&level_config_ptr->conds)._M_current;
          while ( __gnu_cxx::operator!=<data::TowerCondition const*,std::vector<data::TowerCondition>>(
                    &__for_begin,
                    &__for_end) )
          {
            tower_condition = __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator*(&__for_begin);
            v22 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            cond_data = proto::TowerLevelStarCondNotify::add_cond_data_list(v22);
            if ( *(_BYTE *)(((unsigned __int64)&tower_condition->index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&tower_condition->index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&tower_condition->index);
            }
            proto::TowerLevelStarCondData::set_star_cond_index(cond_data, tower_condition->index);
            prev_is_meet = !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                              &this->cur_level_record_.failed_cond_set,
                              &tower_condition->index);
            is_meet = prev_is_meet;
            if ( common::tools::MiscUtils::isContains<std::set<data::TowerCondType> const,data::TowerCondType>(
                   cond_filter_set,
                   &tower_condition->tower_cond_type) )
            {
              v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              is_meet = PlayerTowerComp::isTowerConditionMeet(this, v23, tower_condition, 0);
            }
            proto::TowerLevelStarCondData::set_is_fail(cond_data, is_meet != 1);
            if ( prev_is_meet != is_meet )
            {
              is_need_notify = 1;
              if ( is_meet )
                std::unordered_set<unsigned int>::erase(
                  &this->cur_level_record_.failed_cond_set,
                  &tower_condition->index);
              else
                std::unordered_set<unsigned int>::insert(
                  &this->cur_level_record_.failed_cond_set,
                  &tower_condition->index);
            }
            __gnu_cxx::__normal_iterator<data::TowerCondition const*,std::vector<data::TowerCondition>>::operator++(&__for_begin);
          }
          if ( is_need_notify )
          {
            v24 = std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::TowerLevelStarCondNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( proto::TowerLevelStarCondNotify::cond_data_list_size(v24) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              player = this->player_;
              std::dynamic_pointer_cast<google::protobuf::Message const,proto::TowerLevelStarCondNotify>((const std::shared_ptr<proto::TowerLevelStarCondNotify> *)&v40);
              Player::sendMessage(player, &v40, 0LL);
              std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v40);
            }
          }
          std::shared_ptr<proto::TowerLevelStarCondNotify>::~shared_ptr((std::shared_ptr<proto::TowerLevelStarCondNotify> *const)(v3 + 96));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/tower/player_tower_comp.cpp",
            "checkStarCondFailAndNotify",
            3016);
          v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v41,
                  (const char (*)[23])" level config dungeon:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  &level_config_ptr->dungeon_id);
          v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  v15,
                  (const char (*)[28])" not equal current dungoen:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])", settled.");
          common::milog::MiLogStream::~MiLogStream(&v41);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/tower/player_tower_comp.cpp",
          "checkStarCondFailAndNotify",
          3009);
        v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v41,
                (const char (*)[40])"findTowerLevelConfig fail, schedule_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->tower_schedule_id_);
        v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v11,
                (const char (*)[20])" cur_level_record_:");
        operator<<(v12, &this->cur_level_record_);
        common::milog::MiLogStream::~MiLogStream(&v41);
      }
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  }
  if ( v42 == (char *)v3 )
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
