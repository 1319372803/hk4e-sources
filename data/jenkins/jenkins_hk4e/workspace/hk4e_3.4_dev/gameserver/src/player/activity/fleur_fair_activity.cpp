// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/fleur_fair_activity.cpp

// Line 29: range 0000000015057D5C-0000000015057EE7
int32_t __cdecl FleurFairMinigame::fromBin(
        FleurFairMinigame *const this,
        const proto::FleurFairMinigameBin *minigame_bin)
{
  uint32_t v2; // edx
  bool is_open; // cl
  unsigned __int64 v4; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  v2 = proto::FleurFairMinigameBin::minigame_id(minigame_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->minigame_id);
  }
  this->minigame_id = v2;
  is_open = proto::FleurFairMinigameBin::is_open(minigame_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_FleurFairMinigame + 2);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(FleurFairMinigame *const, const proto::FleurFairMinigameBin *))v4)(
          this,
          minigame_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/fleur_fair_activity.cpp",
    "fromBin",
    34);
  common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
    &v6,
    (const char (*)[53])"[FLEUR_FAIR] FleurFairMiniGame::fromDetailBin failed");
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 42: range 0000000015057EE8-0000000015058075
int32_t __cdecl FleurFairMinigame::toBin(FleurFairMinigame *const this, proto::FleurFairMinigameBin *minigame_bin)
{
  unsigned __int64 v2; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FleurFairMinigameBin::set_minigame_id(minigame_bin, this->minigame_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::FleurFairMinigameBin::set_is_open(minigame_bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_FleurFairMinigame + 3);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(FleurFairMinigame *const, proto::FleurFairMinigameBin *))v2)(this, minigame_bin) )
    return 0;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/fleur_fair_activity.cpp",
    "toBin",
    47);
  common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
    &v4,
    (const char (*)[51])"[FLEUR_FAIR] FleurFairMiniGame::toDetailBin failed");
  common::milog::MiLogStream::~MiLogStream(&v4);
  return -1;
};

// Line 55: range 0000000015058076-000000001505825F
int32_t __cdecl FleurFairMinigame::toClient(
        FleurFairMinigame *const this,
        const FleurFairActivity *fleur_fair_activity,
        proto::FleurFairMinigameInfo *minigame_info)
{
  google::protobuf::uint32 MinigameOpenTime; // edx
  unsigned __int64 v4; // rax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FleurFairMinigameInfo::set_minigame_id(minigame_info, this->minigame_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  MinigameOpenTime = FleurFairActivity::getMinigameOpenTime(fleur_fair_activity, this->minigame_id);
  proto::FleurFairMinigameInfo::set_open_time(minigame_info, MinigameOpenTime);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::FleurFairMinigameInfo::set_is_open(minigame_info, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = (unsigned __int64)(this->_vptr_FleurFairMinigame + 4);
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(FleurFairMinigame *const, proto::FleurFairMinigameInfo *))v4)(
          this,
          minigame_info) )
    return 0;
  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/fleur_fair_activity.cpp",
    "toClient",
    61);
  common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
    &v7,
    (const char (*)[54])"[FLEUR_FAIR] FleurFairMiniGame::toDetailClient failed");
  common::milog::MiLogStream::~MiLogStream(&v7);
  return -1;
};

// Line 69: range 0000000015058260-0000000015058472
__int64 __fastcall FleurFairMinigame::getMiniGameType(uint32_t minigame_id)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::FleurFairMiniGameExcelConfig *minigame_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-80h] BYREF
  char v10[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 minigame_id:68";
  *(_QWORD *)(v1 + 16) = FleurFairMinigame::getMiniGameType;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = minigame_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  minigame_config_ptr = data::ActivityFleurFairExcelConfigMgrBase::findFleurFairMiniGameExcelConfig(
                          &v4->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                          *(_DWORD *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( minigame_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&minigame_config_ptr->mini_game_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)minigame_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minigame_config_ptr->mini_game_type >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = (unsigned int)minigame_config_ptr->mini_game_type;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "getMiniGameType",
      73);
    v5 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v9,
           (const char (*)[67])"[FLEUR_FAIR] findFleurFairMiniGameExcelConfig failed, minigame_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 0LL;
  }
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

// Line 81: range 0000000015058474-00000000150584C2
data::FleurFairMiniGameType __cdecl FleurFairMinigame::getMiniGameType(const FleurFairMinigame *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->minigame_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  return (unsigned int)FleurFairMinigame::getMiniGameType(this->minigame_id);
};

// Line 86: range 00000000150584C4-00000000150584E7
int32_t __cdecl FleurFairMinigame::onGameOpen(FleurFairMinigame *const this)
{
  FleurFairMinigame::setIsOpen(this, 1);
  return 0;
};

// Line 92: range 00000000150584E8-0000000015058557
int32_t __cdecl FleurFairBalloon::fromDetailBin(
        FleurFairBalloon *const this,
        const proto::FleurFairMinigameBin *minigame_bin)
{
  uint32_t v2; // edx
  const proto::FleurFairBalloonBin *balloon_bin; // [rsp+18h] [rbp-8h]

  balloon_bin = proto::FleurFairMinigameBin::balloon_bin(minigame_bin);
  v2 = proto::FleurFairBalloonBin::best_score(balloon_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = v2;
  return 0;
};

// Line 99: range 0000000015058558-00000000150585C6
int32_t __cdecl FleurFairBalloon::toDetailBin(FleurFairBalloon *const this, proto::FleurFairMinigameBin *minigame_bin)
{
  proto::FleurFairBalloonBin *balloon_bin; // [rsp+18h] [rbp-8h]

  balloon_bin = proto::FleurFairMinigameBin::mutable_balloon_bin(minigame_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FleurFairBalloonBin::set_best_score(balloon_bin, this->best_score);
  return 0;
};

// Line 106: range 00000000150585C8-0000000015058636
int32_t __cdecl FleurFairBalloon::toDetailClient(
        FleurFairBalloon *const this,
        proto::FleurFairMinigameInfo *minigame_info)
{
  proto::FleurFairBalloonInfo *balloon_info; // [rsp+18h] [rbp-8h]

  balloon_info = proto::FleurFairMinigameInfo::mutable_balloon_info(minigame_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FleurFairBalloonInfo::set_best_score(balloon_info, this->best_score);
  return 0;
};

// Line 113: range 0000000015058638-00000000150586A7
int32_t __cdecl FleurFairFall::fromDetailBin(
        FleurFairFall *const this,
        const proto::FleurFairMinigameBin *minigame_bin)
{
  uint32_t v2; // edx
  const proto::FleurFairFallBin *fall_bin; // [rsp+18h] [rbp-8h]

  fall_bin = proto::FleurFairMinigameBin::fall_bin(minigame_bin);
  v2 = proto::FleurFairFallBin::best_score(fall_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = v2;
  return 0;
};

// Line 120: range 00000000150586A8-0000000015058716
int32_t __cdecl FleurFairFall::toDetailBin(FleurFairFall *const this, proto::FleurFairMinigameBin *minigame_bin)
{
  proto::FleurFairFallBin *fall_bin; // [rsp+18h] [rbp-8h]

  fall_bin = proto::FleurFairMinigameBin::mutable_fall_bin(minigame_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FleurFairFallBin::set_best_score(fall_bin, this->best_score);
  return 0;
};

// Line 127: range 0000000015058718-0000000015058786
int32_t __cdecl FleurFairFall::toDetailClient(FleurFairFall *const this, proto::FleurFairMinigameInfo *minigame_info)
{
  proto::FleurFairFallInfo *fall_info; // [rsp+18h] [rbp-8h]

  fall_info = proto::FleurFairMinigameInfo::mutable_fall_info(minigame_info);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FleurFairFallInfo::set_best_score(fall_info, this->best_score);
  return 0;
};

// Line 134: range 0000000015058788-0000000015058838
int32_t __cdecl FleurFairDungeonSection::fromBin(
        FleurFairDungeonSection *const this,
        const proto::FleurFairDungeonSectionDataBin *proto)
{
  uint32_t v2; // ecx
  bool is_open; // cl

  v2 = proto::FleurFairDungeonSectionDataBin::section_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->section_id = v2;
  is_open = proto::FleurFairDungeonSectionDataBin::is_open(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  return 0;
};

// Line 141: range 000000001505883A-00000000150588EC
int32_t __cdecl FleurFairDungeonSection::toBin(
        const FleurFairDungeonSection *const this,
        proto::FleurFairDungeonSectionDataBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FleurFairDungeonSectionDataBin::set_section_id(proto, this->section_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::FleurFairDungeonSectionDataBin::set_is_open(proto, this->is_open);
  return 0;
};

// Line 148: range 00000000150588EE-00000000150589FB
void __cdecl FleurFairDungeonSection::toClient(
        const FleurFairDungeonSection *const this,
        const FleurFairActivity *fleur_fair_activity,
        proto::FleurFairDungeonSectionInfo *proto)
{
  google::protobuf::uint32 DungeonSectionOpenTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FleurFairDungeonSectionInfo::set_section_id(proto, this->section_id);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  DungeonSectionOpenTime = FleurFairActivity::getDungeonSectionOpenTime(fleur_fair_activity, this->section_id);
  proto::FleurFairDungeonSectionInfo::set_open_time(proto, DungeonSectionOpenTime);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::FleurFairDungeonSectionInfo::set_is_open(proto, this->is_open);
};

// Line 155: range 00000000150589FC-0000000015058CF6
int32_t __cdecl FleurFairMusic::fromDetailBin(
        FleurFairMusic *const this,
        const proto::FleurFairMinigameBin *minigame_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::remove_reference<FleurFairMusicRecord&>::type *v5; // r14
  unsigned __int64 n; // rax
  int32_t result; // eax
  const proto::FleurFairMusicBin *music_bin; // [rsp+18h] [rbp-C8h]
  const google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin> *__for_range; // [rsp+20h] [rbp-C0h]
  google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::const_reference p_music_basic_id; // [rsp+28h] [rbp-B8h]
  google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::const_iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::const_iterator __for_end; // [rsp+50h] [rbp-90h] BYREF
  char v13[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 10 record:160";
  *(_QWORD *)(v2 + 16) = FleurFairMusic::fromDetailBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  music_bin = proto::FleurFairMinigameBin::music_bin(minigame_bin);
  std::map<unsigned int,FleurFairMusicRecord>::clear(&this->music_game_record_map_);
  __for_range = proto::FleurFairMusicBin::music_game_record_map(music_bin);
  google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_music_basic_id = google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::const_iterator::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 32) = proto::FleurFairMusicRecordBin::max_score(&p_music_basic_id->second);
    *(_DWORD *)(v2 + 36) = proto::FleurFairMusicRecordBin::max_combo(&p_music_basic_id->second);
    *(_BYTE *)(v2 + 40) = proto::FleurFairMusicRecordBin::is_unlock(&p_music_basic_id->second);
    v5 = std::move<FleurFairMusicRecord &>((FleurFairMusicRecord *)(v2 + 32));
    n = (unsigned __int64)std::map<unsigned int,FleurFairMusicRecord>::operator[](
                            &this->music_game_record_map_,
                            &p_music_basic_id->first);
    if ( (char)(n & 7) >= *(_BYTE *)((n >> 3) + 0x7FFF8000) && *(_BYTE *)((n >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 11) & 7) >= *(_BYTE *)(((n + 11) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(n, 12LL);
    }
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&v5->is_unlock + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 11) & 7) >= *(_BYTE *)(((unsigned __int64)(&v5->is_unlock + 3) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_load_n(v5, 12LL);
    }
    *(_QWORD *)n = *(_QWORD *)&v5->max_score;
    *(_DWORD *)(n + 8) = *(_DWORD *)&v5->is_unlock;
    google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::const_iterator::operator++(&__for_begin);
  }
  result = 0;
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

// Line 170: range 0000000015058CF8-0000000015058EB9
int32_t __cdecl FleurFairMusic::toDetailBin(FleurFairMusic *const this, proto::FleurFairMinigameBin *minigame_bin)
{
  std::map<unsigned int,FleurFairMusicRecord>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,FleurFairMusicRecord>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::FleurFairMusicBin *music_bin; // [rsp+28h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin> *bin_map; // [rsp+30h] [rbp-30h]
  std::map<unsigned int,FleurFairMusicRecord> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,FleurFairMusicRecord> *v8; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,FleurFairMusicRecord> >::type *music_basic_id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,FleurFairMusicRecord> >::type *record; // [rsp+50h] [rbp-10h]
  proto::FleurFairMusicRecordBin *record_bin; // [rsp+58h] [rbp-8h]

  music_bin = proto::FleurFairMinigameBin::mutable_music_bin(minigame_bin);
  bin_map = proto::FleurFairMusicBin::mutable_music_game_record_map(music_bin);
  __for_range = &this->music_game_record_map_;
  __for_begin._M_node = std::map<unsigned int,FleurFairMusicRecord>::begin(&this->music_game_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FleurFairMusicRecord>::end(&this->music_game_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord>>::operator*(&__for_begin);
    music_basic_id = std::get<0ul,unsigned int const,FleurFairMusicRecord>(v8);
    record = (std::tuple_element<1,const std::pair<unsigned int const,FleurFairMusicRecord> >::type *)std::get<1ul,unsigned int const,FleurFairMusicRecord>(v8);
    record_bin = google::protobuf::Map<unsigned int,proto::FleurFairMusicRecordBin>::operator[](bin_map, music_basic_id);
    if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FleurFairMusicRecordBin::set_max_score(record_bin, record->max_score);
    if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FleurFairMusicRecordBin::set_max_combo(record_bin, record->max_combo);
    if ( *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&record->is_unlock);
    }
    proto::FleurFairMusicRecordBin::set_is_unlock(record_bin, record->is_unlock);
    std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 184: range 0000000015058EBA-000000001505907B
int32_t __cdecl FleurFairMusic::toDetailClient(FleurFairMusic *const this, proto::FleurFairMinigameInfo *minigame_info)
{
  std::map<unsigned int,FleurFairMusicRecord>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,FleurFairMusicRecord>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::FleurFairMusicGameInfo *music_info; // [rsp+28h] [rbp-38h]
  google::protobuf::Map<unsigned int,proto::FleurFairMusicRecord> *proto_map; // [rsp+30h] [rbp-30h]
  std::map<unsigned int,FleurFairMusicRecord> *__for_range; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,FleurFairMusicRecord> *v8; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,FleurFairMusicRecord> >::type *music_basic_id; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,FleurFairMusicRecord> >::type *record; // [rsp+50h] [rbp-10h]
  proto::FleurFairMusicRecord *proto_record; // [rsp+58h] [rbp-8h]

  music_info = proto::FleurFairMinigameInfo::mutable_music_info(minigame_info);
  proto_map = proto::FleurFairMusicGameInfo::mutable_music_record_map(music_info);
  __for_range = &this->music_game_record_map_;
  __for_begin._M_node = std::map<unsigned int,FleurFairMusicRecord>::begin(&this->music_game_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FleurFairMusicRecord>::end(&this->music_game_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord>>::operator*(&__for_begin);
    music_basic_id = std::get<0ul,unsigned int const,FleurFairMusicRecord>(v8);
    record = (std::tuple_element<1,const std::pair<unsigned int const,FleurFairMusicRecord> >::type *)std::get<1ul,unsigned int const,FleurFairMusicRecord>(v8);
    proto_record = google::protobuf::Map<unsigned int,proto::FleurFairMusicRecord>::operator[](
                     proto_map,
                     music_basic_id);
    if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FleurFairMusicRecord::set_max_score(proto_record, record->max_score);
    if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FleurFairMusicRecord::set_max_combo(proto_record, record->max_combo);
    if ( *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&record->is_unlock);
    }
    proto::FleurFairMusicRecord::set_is_unlock(proto_record, record->is_unlock);
    std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 198: range 000000001505907C-00000000150596C4
int32_t __cdecl FleurFairMusic::onGameOpen(FleurFairMusic *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  int32_t result; // eax
  ActivityFleurFairExcelConfigMgr *p_activity_fleur_fair_config_mgr; // r14
  uint32_t MinigameId; // eax
  common::milog::MiLogStream *v7; // r14
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // r14
  std::vector<unsigned int>::const_reference v11; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rdx
  uint32_t begin_level_id; // [rsp+1Ch] [rbp-D4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const data::FleurFairMiniGameExcelConfig *minigame_config_ptr; // [rsp+30h] [rbp-C0h]
  const data::MusicInfoConfig *music_info_config_ptr; // [rsp+38h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  FleurFairMusicRecord *record; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v20; // [rsp+50h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "1 32 4 18 music_basic_id:223";
  *(_QWORD *)(v1 + 16) = FleurFairMusic::onGameOpen;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( FleurFairMinigame::onGameOpen(this) )
  {
    result = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    p_activity_fleur_fair_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
    MinigameId = FleurFairMinigame::getMinigameId(this);
    minigame_config_ptr = data::ActivityFleurFairExcelConfigMgrBase::findFleurFairMiniGameExcelConfig(
                            p_activity_fleur_fair_config_mgr,
                            MinigameId);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( minigame_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_music_game_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&minigame_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)minigame_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&minigame_config_ptr->config_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      music_info_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicInfoConfig(
                                p_activity_music_game_config_mgr,
                                minigame_config_ptr->config_id);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( music_info_config_ptr )
      {
        if ( std::vector<unsigned int>::empty(&music_info_config_ptr->level_id) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fleur_fair_activity.cpp",
            "onGameOpen",
            218);
          v10 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v21,
                  (const char (*)[53])"[FLEUR_FAIR] music level vec is empty, minigame_id: ");
          *(_DWORD *)(v1 + 32) = FleurFairMinigame::getMinigameId(this);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v21);
          result = -1;
        }
        else
        {
          v11 = std::vector<unsigned int>::operator[](&music_info_config_ptr->level_id, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          begin_level_id = *v11;
          std::map<unsigned int,FleurFairMusicRecord>::clear(&this->music_game_record_map_);
          __for_range = &music_info_config_ptr->level_id;
          __for_begin._M_current = std::vector<unsigned int>::begin(&music_info_config_ptr->level_id)._M_current;
          __for_end._M_current = std::vector<unsigned int>::end(&music_info_config_ptr->level_id)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
          {
            v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v1 + 32) = *v12;
            record = std::map<unsigned int,FleurFairMusicRecord>::operator[](
                       &this->music_game_record_map_,
                       (const std::map<unsigned int,FleurFairMusicRecord>::key_type *)(v1 + 32));
            if ( begin_level_id == *(_DWORD *)(v1 + 32) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_store1(&record->is_unlock);
              }
              record->is_unlock = 1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3)
                                                                   + 0x7FFF8000) )
              {
                __asan_report_store1(&record->is_unlock);
              }
              record->is_unlock = 0;
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
          "./src/player/activity/fleur_fair_activity.cpp",
          "onGameOpen",
          212);
        v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               &v21,
               (const char (*)[58])"[FLEUR_FAIR] music_info_config_ptr is null, minigame_id: ");
        *(_DWORD *)(v1 + 32) = FleurFairMinigame::getMinigameId(this);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v21);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "onGameOpen",
        206);
      v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
             &v21,
             (const char (*)[56])"[FLEUR_FAIR] minigame_config_ptr is null, minigame_id: ");
      *(_DWORD *)(v1 + 32) = FleurFairMinigame::getMinigameId(this);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
    }
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

// Line 239: range 00000000150596C6-0000000015059C61
int32_t __cdecl FleurFairActivity::fromScheduleBin(
        FleurFairActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  uint32_t v6; // edx
  uint32_t v7; // ecx
  bool is_content_closed; // dl
  common::milog::MiLogStream *v9; // rdx
  int v10; // r15d
  FleurFairMinigame *v11; // rax
  std::shared_ptr<FleurFairMinigame> *v12; // rax
  bool is_dungeon_unlocked; // dl
  uint32_t v14; // ecx
  int32_t result; // eax
  const proto::FleurFairScheduleBin *fleur_fair_bin; // [rsp+20h] [rbp-100h]
  const google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin> *__for_range; // [rsp+28h] [rbp-F8h]
  const google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin> *__for_range_0; // [rsp+30h] [rbp-F0h]
  google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_reference p_section_id; // [rsp+38h] [rbp-E8h]
  std::map<unsigned int,FleurFairDungeonSection>::mapped_type *dungeon_section; // [rsp+40h] [rbp-E0h]
  google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::const_reference p_minigame_id; // [rsp+48h] [rbp-D8h]
  google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::const_iterator __for_begin; // [rsp+50h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::const_iterator __for_end; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v24; // [rsp+90h] [rbp-90h] BYREF
  char v25[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 minigame_ptr:247";
  *(_QWORD *)(v3 + 16) = FleurFairActivity::fromScheduleBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  fleur_fair_bin = proto::ActivityScheduleBin::fleur_fair_bin(bin);
  v6 = proto::FleurFairScheduleBin::credit(fleur_fair_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->credit_);
  }
  this->credit_ = v6;
  v7 = proto::FleurFairScheduleBin::token(fleur_fair_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->token_);
  }
  this->token_ = v7;
  is_content_closed = proto::FleurFairScheduleBin::is_content_closed(fleur_fair_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  __for_range = proto::FleurFairScheduleBin::minigame_map(fleur_fair_bin);
  google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_minigame_id = google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)p_minigame_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_minigame_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    FleurFairActivity::createMinigamePtr((FleurFairActivity *const)(v3 + 32), (uint32_t)this);
    if ( std::operator==<FleurFairMinigame>(0LL, (const std::shared_ptr<FleurFairMinigame> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "fromScheduleBin",
        250);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v24,
             (const char (*)[53])"[FLEUR_FAIR] createMinigamePtr failed, minigame_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &p_minigame_id->first);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v2 = -1;
      v10 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      FleurFairMinigame::fromBin(v11, &p_minigame_id->second);
      v12 = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::operator[](
              &this->minigame_map_,
              &p_minigame_id->first);
      std::shared_ptr<FleurFairMinigame>::operator=(v12, (const std::shared_ptr<FleurFairMinigame> *)(v3 + 32));
      v10 = 1;
    }
    std::shared_ptr<FleurFairMinigame>::~shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v3 + 32));
    if ( v10 != 1 )
      goto LABEL_27;
    google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::const_iterator::operator++(&__for_begin);
  }
  __for_range_0 = proto::FleurFairScheduleBin::dungeon_section_map(fleur_fair_bin);
  google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::begin(
    (google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator *)&__for_begin,
    __for_range_0);
  google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::end(
    (google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator *)&__for_end,
    __for_range_0);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator *)&__for_end) )
  {
    p_section_id = google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator *const)&__for_begin);
    dungeon_section = std::map<unsigned int,FleurFairDungeonSection>::operator[](
                        &this->dungeon_section_map_,
                        &p_section_id->first);
    FleurFairDungeonSection::fromBin(dungeon_section, &p_section_id->second);
    google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::const_iterator *const)&__for_begin);
  }
  is_dungeon_unlocked = proto::FleurFairScheduleBin::is_dungeon_unlocked(fleur_fair_bin);
  if ( *(char *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dungeon_unlocked_);
  this->is_dungeon_unlocked_ = is_dungeon_unlocked;
  v14 = proto::FleurFairScheduleBin::obtained_token(fleur_fair_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obtained_token_);
  }
  this->obtained_token_ = v14;
  v2 = 0;
LABEL_27:
  result = v2;
  if ( v25 == (char *)v3 )
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

// Line 268: range 0000000015059C62-0000000015059FF2
int32_t __cdecl FleurFairActivity::toScheduleBin(const FleurFairActivity *const this, proto::ActivityScheduleBin *bin)
{
  FleurFairMinigame *v2; // rax
  std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::FleurFairScheduleBin *fleur_fair_bin; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin> *proto_minigame_map; // [rsp+30h] [rbp-60h]
  const std::map<unsigned int,std::shared_ptr<FleurFairMinigame>> *__for_range; // [rsp+38h] [rbp-58h]
  google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin> *proto_dungeon_section_map; // [rsp+40h] [rbp-50h]
  const std::map<unsigned int,FleurFairDungeonSection> *__for_range_0; // [rsp+48h] [rbp-48h]
  const std::pair<unsigned int const,FleurFairDungeonSection> *v11; // [rsp+50h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *section_id; // [rsp+58h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *dungeon_section; // [rsp+60h] [rbp-30h]
  proto::FleurFairDungeonSectionDataBin *dungeon_section_bin; // [rsp+68h] [rbp-28h]
  const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > *v15; // [rsp+70h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::type *minigame_id; // [rsp+78h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::type *minigame_ptr; // [rsp+80h] [rbp-10h]
  proto::FleurFairMinigameBin *minigame_bin; // [rsp+88h] [rbp-8h]

  fleur_fair_bin = proto::ActivityScheduleBin::mutable_fleur_fair_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::FleurFairScheduleBin::set_credit(fleur_fair_bin, this->credit_);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FleurFairScheduleBin::set_token(fleur_fair_bin, this->token_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::FleurFairScheduleBin::set_is_content_closed(fleur_fair_bin, this->is_content_closed_);
  proto_minigame_map = proto::FleurFairScheduleBin::mutable_minigame_map(fleur_fair_bin);
  __for_range = &this->minigame_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::begin(&this->minigame_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::end(&this->minigame_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator*(&__for_begin);
    minigame_id = std::get<0ul,unsigned int const,std::shared_ptr<FleurFairMinigame>>(v15);
    minigame_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<FleurFairMinigame>>(v15);
    if ( std::operator!=<FleurFairMinigame>(0LL, minigame_ptr) )
    {
      minigame_bin = google::protobuf::Map<unsigned int,proto::FleurFairMinigameBin>::operator[](
                       proto_minigame_map,
                       minigame_id);
      v2 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)minigame_ptr);
      FleurFairMinigame::toBin(v2, minigame_bin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator++(&__for_begin);
  }
  proto_dungeon_section_map = proto::FleurFairScheduleBin::mutable_dungeon_section_map(fleur_fair_bin);
  __for_range_0 = &this->dungeon_section_map_;
  __for_begin._M_node = std::map<unsigned int,FleurFairDungeonSection>::begin(&this->dungeon_section_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FleurFairDungeonSection>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection> >::_Self *)&__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection> > *const)&__for_begin);
    section_id = std::get<0ul,unsigned int const,FleurFairDungeonSection>(v11);
    dungeon_section = (std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *)std::get<1ul,unsigned int const,FleurFairDungeonSection>(v11);
    dungeon_section_bin = google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionDataBin>::operator[](
                            proto_dungeon_section_map,
                            section_id);
    FleurFairDungeonSection::toBin(dungeon_section, dungeon_section_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_dungeon_unlocked_);
  proto::FleurFairScheduleBin::set_is_dungeon_unlocked(fleur_fair_bin, this->is_dungeon_unlocked_);
  if ( *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::FleurFairScheduleBin::set_obtained_token(fleur_fair_bin, this->obtained_token_);
  return 0;
};

// Line 295: range 0000000015059FF4-000000001505A92D
int32_t __cdecl FleurFairActivity::toClient(FleurFairActivity *const this, proto::ActivityInfo *activity_info)
{
  std::map<unsigned int,data::FleurFairChapterExcelConfig> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t v6; // r14d
  data::FleurFairChapterExcelConfig *v7; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  uint32_t ActivityStayTime; // ecx
  uint32_t v11; // eax
  FleurFairMinigame *v12; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-1ACh] BYREF
  std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-1A8h] BYREF
  std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  proto::FleurFairActivityDetailInfo *fleur_fair_info; // [rsp+28h] [rbp-198h]
  const ActivityFleurFairExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-190h]
  const std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig> *__for_range; // [rsp+38h] [rbp-188h]
  std::map<unsigned int,data::FleurFairChapterExcelConfig> *__for_range_0; // [rsp+40h] [rbp-180h]
  google::protobuf::Map<unsigned int,proto::FleurFairMinigameInfo> *proto_minigame_info_map; // [rsp+48h] [rbp-178h]
  std::map<unsigned int,std::shared_ptr<FleurFairMinigame>> *__for_range_1; // [rsp+50h] [rbp-170h]
  google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionInfo> *proto_dungeon_section_info_map; // [rsp+58h] [rbp-168h]
  std::map<unsigned int,FleurFairDungeonSection> *__for_range_2; // [rsp+60h] [rbp-160h]
  const std::pair<unsigned int const,FleurFairDungeonSection> *v25; // [rsp+68h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *section_id; // [rsp+70h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *dungeon_section; // [rsp+78h] [rbp-148h]
  proto::FleurFairDungeonSectionInfo *dungeon_section_info; // [rsp+80h] [rbp-140h]
  const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > *v29; // [rsp+88h] [rbp-138h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::type *minigame_id; // [rsp+90h] [rbp-130h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::type *minigame_ptr; // [rsp+98h] [rbp-128h]
  proto::FleurFairMinigameInfo *minigame_info; // [rsp+A0h] [rbp-120h]
  const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> *v33; // [rsp+A8h] [rbp-118h]
  std::tuple_element<0,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *chapter_id; // [rsp+B0h] [rbp-110h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *chapter_config_0; // [rsp+B8h] [rbp-108h]
  proto::FleurFairChapterInfo *chapter_info; // [rsp+C0h] [rbp-100h]
  const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> *v37; // [rsp+C8h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *_; // [rsp+D0h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *chapter_config; // [rsp+D8h] [rbp-E8h]
  std::shared_ptr<Config> v40; // [rsp+E0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v41; // [rsp+F0h] [rbp-D0h] BYREF
  char v42[176]; // [rsp+110h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,data::FleurFairChapterExcelConfig> *)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,data::FleurFairChapterExcelConfig> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 33 fleur_fair_chapter_config_map:305";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)FleurFairActivity::toClient;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "toClient",
      298);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v41,
           (const char (*)[50])"[FLEUR_FAIR] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    v6 = -1;
  }
  else
  {
    fleur_fair_info = proto::ActivityInfo::mutable_fleur_fair_info(activity_info);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v40);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v40)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v40);
    std::map<unsigned int,data::FleurFairChapterExcelConfig>::map(v2 + 1);
    __for_range = &conf_mgr->fleur_fair_chapter_excel_config_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::begin(&conf_mgr->fleur_fair_chapter_excel_config_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::FleurFairChapterExcelConfig>::end(&conf_mgr->fleur_fair_chapter_excel_config_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v37 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,data::FleurFairChapterExcelConfig>(v37);
      chapter_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairChapterExcelConfig>(v37);
      v7 = std::map<unsigned int,data::FleurFairChapterExcelConfig>::operator[](v2 + 1, &chapter_config->chapter_id);
      data::FleurFairChapterExcelConfig::operator=(v7, chapter_config);
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = v2 + 1;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>::__node_type *)std::map<unsigned int,data::FleurFairChapterExcelConfig>::begin(v2 + 1)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>::__node_type *)std::map<unsigned int,data::FleurFairChapterExcelConfig>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::_Self *)&__for_end) )
    {
      v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> > *const)&__for_begin);
      chapter_id = std::get<0ul,unsigned int const,data::FleurFairChapterExcelConfig>(v33);
      chapter_config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairChapterExcelConfig>(v33);
      chapter_info = proto::FleurFairActivityDetailInfo::add_chapter_info_list(fleur_fair_info);
      if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::FleurFairChapterInfo::set_chapter_id(chapter_info, *chapter_id);
      if ( *(_BYTE *)(((unsigned __int64)&chapter_config_0->open_day >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&chapter_config_0->open_day >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      open_day = chapter_config_0->open_day;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
      proto::FleurFairChapterInfo::set_open_time(chapter_info, BeginTimeByOpenDay);
      std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,data::FleurFairChapterExcelConfig> > *const)&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::FleurFairActivityDetailInfo::set_is_content_closed(fleur_fair_info, this->is_content_closed_);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ActivityStayTime = ActivityFleurFairExcelConfigMgr::getActivityStayTime(conf_mgr, this->activity_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v11 = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, ActivityStayTime);
    proto::FleurFairActivityDetailInfo::set_content_close_time(fleur_fair_info, v11);
    proto_minigame_info_map = proto::FleurFairActivityDetailInfo::mutable_minigame_info_map(fleur_fair_info);
    __for_range_1 = &this->minigame_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>::__node_type *)std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::begin(&this->minigame_map_)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>::__node_type *)std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self *)&__for_end) )
    {
      v29 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > > *const)&__for_begin);
      minigame_id = std::get<0ul,unsigned int const,std::shared_ptr<FleurFairMinigame>>(v29);
      minigame_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<FleurFairMinigame>>(v29);
      if ( std::operator!=<FleurFairMinigame>(0LL, minigame_ptr) )
      {
        minigame_info = google::protobuf::Map<unsigned int,proto::FleurFairMinigameInfo>::operator[](
                          proto_minigame_info_map,
                          minigame_id);
        v12 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)minigame_ptr);
        FleurFairMinigame::toClient(v12, this, minigame_info);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > > *const)&__for_begin);
    }
    proto_dungeon_section_info_map = proto::FleurFairActivityDetailInfo::mutable_dungeon_section_info_map(fleur_fair_info);
    __for_range_2 = &this->dungeon_section_map_;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>::__node_type *)std::map<unsigned int,FleurFairDungeonSection>::begin(&this->dungeon_section_map_)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairChapterExcelConfig>,false>::__node_type *)std::map<unsigned int,FleurFairDungeonSection>::end(__for_range_2)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> >::_Self *)&__for_end) )
    {
      v25 = std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> > *const)&__for_begin);
      section_id = std::get<0ul,unsigned int const,FleurFairDungeonSection>(v25);
      dungeon_section = (std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *)std::get<1ul,unsigned int const,FleurFairDungeonSection>(v25);
      dungeon_section_info = google::protobuf::Map<unsigned int,proto::FleurFairDungeonSectionInfo>::operator[](
                               proto_dungeon_section_info_map,
                               section_id);
      FleurFairDungeonSection::toClient(dungeon_section, this, dungeon_section_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> > *const)&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_dungeon_unlocked_);
    proto::FleurFairActivityDetailInfo::set_is_dungeon_unlocked(fleur_fair_info, this->is_dungeon_unlocked_);
    if ( *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::FleurFairActivityDetailInfo::set_obtained_token(fleur_fair_info, this->obtained_token_);
    v6 = 0;
    std::map<unsigned int,data::FleurFairChapterExcelConfig>::~map(v2 + 1);
  }
  result = v6;
  if ( v42 == (char *)v2 )
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

// Line 340: range 000000001505A92E-000000001505AA78
void __cdecl FleurFairActivity::fillActivityCoinInfo(
        FleurFairActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t credit; // ebx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  uint32_t token; // ebx
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  credit = this->credit_;
  key[0] = 118;
  v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = credit;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  token = this->token_;
  key[0] = 119;
  v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v6);
  }
  *v7 = token;
};

// Line 346: range 000000001505AA7A-000000001505AB1B
int32_t __cdecl FleurFairActivity::init(FleurFairActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isSettled((const BaseActivity *const)this) )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
    FleurFairActivity::registerObserver(this);
  return 0;
};

// Line 358: range 000000001505AB1C-000000001505ABB4
void __cdecl FleurFairActivity::onLogin(FleurFairActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isSettled((const BaseActivity *const)this) )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
    BaseActivity::onLogin((BaseActivity *const)this);
};

// Line 368: range 000000001505ABB6-000000001505B0DC
void __cdecl FleurFairActivity::onPreStart(FleurFairActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  std::shared_ptr<FleurFairMinigame> *v5; // rax
  uint32_t v6; // ecx
  std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const ActivityFleurFairExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-E8h]
  const std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig> *__for_range; // [rsp+30h] [rbp-E0h]
  const std::map<unsigned int,data::FleurFairDungeonExcelConfig> *dungeon_section_config_map_ptr; // [rsp+38h] [rbp-D8h]
  const std::map<unsigned int,data::FleurFairDungeonExcelConfig> *__for_range_0; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> *v13; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *section_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *degeon_section_config; // [rsp+58h] [rbp-B8h]
  FleurFairDungeonSection *dungeon_section; // [rsp+60h] [rbp-B0h]
  const std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig> *v17; // [rsp+68h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig> >::type *minigame_id; // [rsp+70h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig> >::type *minigame_config; // [rsp+78h] [rbp-98h]
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-90h] BYREF
  char v21[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 16 minigame_ptr:372";
  *(_QWORD *)(v1 + 16) = FleurFairActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  __for_range = &conf_mgr->fleur_fair_mini_game_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::begin(&conf_mgr->fleur_fair_mini_game_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::FleurFairMiniGameExcelConfig>::end(&conf_mgr->fleur_fair_mini_game_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v17 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::operator*(&__for_begin);
    minigame_id = std::get<0ul,unsigned int const,data::FleurFairMiniGameExcelConfig>(v17);
    minigame_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairMiniGameExcelConfig>(v17);
    if ( *(_BYTE *)(((unsigned __int64)minigame_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)minigame_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)minigame_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    FleurFairActivity::createMinigamePtr((FleurFairActivity *const)(v1 + 32), (uint32_t)this);
    if ( std::operator==<FleurFairMinigame>(0LL, (const std::shared_ptr<FleurFairMinigame> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "onPreStart",
        375);
      v4 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v20,
             (const char (*)[53])"[FLEUR_FAIR] createMinigamePtr failed, minigame_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, minigame_id);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      v5 = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::operator[](&this->minigame_map_, minigame_id);
      std::shared_ptr<FleurFairMinigame>::operator=(v5, (const std::shared_ptr<FleurFairMinigame> *)(v1 + 32));
    }
    std::shared_ptr<FleurFairMinigame>::~shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v1 + 32));
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  dungeon_section_config_map_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfigMap(
                                     conf_mgr,
                                     this->activity_id_);
  if ( dungeon_section_config_map_ptr )
  {
    __for_range_0 = dungeon_section_config_map_ptr;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false>::__node_type *)std::map<unsigned int,data::FleurFairDungeonExcelConfig>::begin(dungeon_section_config_map_ptr)._M_node;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::FleurFairMiniGameExcelConfig>,false>::__node_type *)std::map<unsigned int,data::FleurFairDungeonExcelConfig>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::_Self *)&__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> > *const)&__for_begin);
      section_id = std::get<0ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v13);
      degeon_section_config = (std::tuple_element<1,const std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> >::type *)std::get<1ul,unsigned int const,data::FleurFairDungeonExcelConfig>(v13);
      dungeon_section = std::map<unsigned int,FleurFairDungeonSection>::operator[](
                          &this->dungeon_section_map_,
                          section_id);
      if ( *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)section_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v6 = *section_id;
      if ( *(_BYTE *)(((unsigned __int64)dungeon_section >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dungeon_section & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_section >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_store4(dungeon_section);
      }
      dungeon_section->section_id = v6;
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_section->is_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)dungeon_section + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_section->is_open >> 3)
                                                                    + 0x7FFF8000) )
      {
        __asan_report_store1(&dungeon_section->is_open);
      }
      dungeon_section->is_open = 0;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::FleurFairDungeonExcelConfig> > *const)&__for_begin);
    }
  }
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 394: range 000000001505B0DE-000000001505B0F8
void __cdecl FleurFairActivity::onStart(FleurFairActivity *const this)
{
  FleurFairActivity::registerObserver(this);
};

// Line 399: range 000000001505B0FA-000000001505B138
void __cdecl FleurFairActivity::onSettle(FleurFairActivity *const this)
{
  FleurFairActivity::unregisterObserver(this);
  FleurFairActivity::closeFleurFairContent(this);
  BaseActivity::delWatchers((BaseActivity *const)this);
  FleurFairActivity::delMiniGameWatchers(this);
};

// Line 407: range 000000001505B13A-000000001505B380
void __cdecl FleurFairActivity::onClear(FleurFairActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:412";
  *(_QWORD *)(v1 + 16) = FleurFairActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  BaseActivity::delWatchers((BaseActivity *const)this);
  FleurFairActivity::delMiniGameWatchers(this);
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->credit_ )
    FleurFairActivity::subCredit(this, this->credit_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->token_ )
    FleurFairActivity::subToken(this, this->token_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->obtained_token_);
  }
  this->obtained_token_ = 0;
  std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::clear(&this->minigame_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 427: range 000000001505B382-000000001505B9C7
int32_t __cdecl FleurFairActivity::execAction(FleurFairActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // r12
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r12
  common::milog::MiLogStream *v15; // rax
  const std::string *v16; // rax
  common::milog::MiLogStream *v17; // r12
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-80h] BYREF
  char v23[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 section_id:466";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_UNLOCK_FLEUR_FAIR_DUNGEON )
  {
    FleurFairActivity::unlockDungeon(this);
  }
  else
  {
    if ( type > NEW_ACTIVITY_ACTION_UNLOCK_FLEUR_FAIR_DUNGEON )
      goto LABEL_27;
    if ( type == NEW_ACTIVITY_ACTION_FLEUR_FAIR_OPEN_DUNGEON_SECTION )
    {
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "execAction",
          462);
        v14 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v22,
                (const char (*)[32])"[FLEUR_FAIR] action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v15 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v14, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])off_256E81C0);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_29;
      }
      *(_DWORD *)(v2 + 32) = 0;
      v16 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v16, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "execAction",
          469);
        v17 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v22,
                (const char (*)[23])"[FLEUR_FAIR] strToNum ");
        v18 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v19, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_29;
      }
      if ( FleurFairActivity::openDungeonSection(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "execAction",
          475);
        v20 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v22,
                (const char (*)[53])"[FLEUR_FAIR] openDungeonSection failed, section_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_29;
      }
      goto LABEL_28;
    }
    if ( type > NEW_ACTIVITY_ACTION_FLEUR_FAIR_OPEN_DUNGEON_SECTION )
    {
LABEL_27:
      result = BaseActivity::execAction((BaseActivity *const)this, action_exec);
      goto LABEL_29;
    }
    if ( type == NEW_ACTIVITY_ACTION_FLEUR_FAIR_OPEN_MINIGAME )
    {
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "execAction",
          434);
        v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v22,
               (const char (*)[32])"[FLEUR_FAIR] action param size ");
        val = std::vector<std::string>::size(&action_exec->param);
        v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_256E81C0);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_29;
      }
      *(_DWORD *)(v2 + 32) = 0;
      v9 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v2 + 32), 1) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "execAction",
          441);
        v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v22,
                (const char (*)[23])"[FLEUR_FAIR] strToNum ");
        v11 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_29;
      }
      if ( FleurFairActivity::openMinigame(this, *(_DWORD *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "execAction",
          447);
        v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v22,
                (const char (*)[48])"[FLEUR_FAIR] openMinigame failed, minigame_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
        goto LABEL_29;
      }
    }
    else
    {
      if ( type != NEW_ACTIVITY_ACTION_CLOSE_FLEUR_FAIR_CONTENT )
        goto LABEL_27;
      FleurFairActivity::closeFleurFairContent(this);
    }
  }
LABEL_28:
  result = 0;
LABEL_29:
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

// Line 494: range 000000001505B9C8-000000001505BD96
void __fastcall FleurFairActivity::onWatcherFinish(FleurFairActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  PlayerEventComp *EventComp; // r14
  unsigned int val; // [rsp+10h] [rbp-D0h] BYREF
  data::WatcherTriggerType trigger_type; // [rsp+14h] [rbp-CCh]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+18h] [rbp-C8h]
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
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:493 64 16 13 event_ptr:509";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::onWatcherFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                         &v5->design_config.txt_config_mgr.watcher_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( watcher_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    trigger_type = watcher_config_ptr->trigger_config.trigger_type;
    if ( trigger_type == TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_IN_LIMIT_TIME
      || trigger_type == TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_KEEP_ENERGY
      || trigger_type == TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_WITH_GROUP_VARIABLE
      || trigger_type == TRIGGER_FLEUR_FAIR_DUNGEON_FINISH_WITH_BUFF_NUM )
    {
      common::tools::perf::make_shared<FleurFairDungeonMissionFinishEvent>();
      std::shared_ptr<BaseEvent>::shared_ptr<FleurFairDungeonMissionFinishEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v2 + 64),
        (std::shared_ptr<FleurFairDungeonMissionFinishEvent> *)&v13);
      std::shared_ptr<FleurFairDungeonMissionFinishEvent>::~shared_ptr((std::shared_ptr<FleurFairDungeonMissionFinishEvent> *const)&v13);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr(
        (std::shared_ptr<BaseEvent> *const)&v13,
        (const std::shared_ptr<BaseEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v13);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v13);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v2 + 64));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "onWatcherFinish",
      498);
    v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v14,
           (const char (*)[35])"[FLEUR_FAIR] findWatcherConfig id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
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
};

// Line 515: range 000000001505BD98-000000001505BE33
bool __cdecl FleurFairActivity::isContainsWatcher(FleurFairActivity *const this, uint32_t watcher_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isContainsDungeonWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isContainsDungeonWatcher = ActivityFleurFairExcelConfigMgr::isContainsDungeonWatcher(
                               &v2->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                               watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isContainsDungeonWatcher || BaseActivity::isContainsWatcher((BaseActivity *const)this, watcher_id);
};

// Line 525: range 000000001505BE34-000000001505C176
int32_t __cdecl FleurFairActivity::fillWatcherProtoList(
        FleurFairActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  bool *p_is_open; // rax
  const ActivityFleurFairExcelConfigMgr *p_activity_fleur_fair_config_mgr; // rdi
  uint32_t v4; // edx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::ActivityWatcherInfo *v7; // rax
  unsigned int watcher_id; // [rsp+14h] [rbp-7Ch]
  std::map<unsigned int,FleurFairDungeonSection>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,FleurFairDungeonSection>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-68h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-60h] BYREF
  std::map<unsigned int,FleurFairDungeonSection> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,FleurFairDungeonSection> *v16; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *section_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *dungeon_section; // [rsp+50h] [rbp-40h]
  const data::FleurFairDungeonExcelConfig *dungeon_section_config_ptr; // [rsp+58h] [rbp-38h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-30h]
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+68h] [rbp-28h]
  std::shared_ptr<Config> v22[2]; // [rsp+70h] [rbp-20h] BYREF

  __for_range = &this->dungeon_section_map_;
  __for_begin._M_node = std::map<unsigned int,FleurFairDungeonSection>::begin(&this->dungeon_section_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,FleurFairDungeonSection>::end(&this->dungeon_section_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator*(&__for_begin);
    section_id = std::get<0ul,unsigned int const,FleurFairDungeonSection>(v16);
    dungeon_section = (std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *)std::get<1ul,unsigned int const,FleurFairDungeonSection>(v16);
    p_is_open = &dungeon_section->is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    if ( dungeon_section->is_open )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v22);
      p_activity_fleur_fair_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v22)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)section_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) )
      {
        p_activity_fleur_fair_config_mgr = (const ActivityFleurFairExcelConfigMgr *)section_id;
        __asan_report_load4();
      }
      v4 = *section_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_activity_fleur_fair_config_mgr = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
        __asan_report_load4();
      }
      dungeon_section_config_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig(
                                     p_activity_fleur_fair_config_mgr,
                                     this->activity_id_,
                                     v4);
      std::shared_ptr<Config>::~shared_ptr(v22);
      if ( dungeon_section_config_ptr )
      {
        __for_range_0 = &dungeon_section_config_ptr->watcher_id_list;
        __for_begin_0._M_current = std::vector<unsigned int>::begin(&dungeon_section_config_ptr->watcher_id_list)._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          watcher_id = *v5;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)v22);
          v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v22);
          watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                                 &v6->design_config.txt_config_mgr.new_activity_config_mgr,
                                 watcher_id);
          std::shared_ptr<Config>::~shared_ptr(v22);
          if ( watcher_config_ptr )
          {
            v7 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
            BaseActivity::fillWatcherProto((BaseActivity *const)this, v7, watcher_config_ptr);
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator++(&__for_begin);
  }
  BaseActivity::fillWatcherProtoList((BaseActivity *const)this, proto_info_list);
  return 0;
};

// Line 550: range 000000001505C178-000000001505C524
void __cdecl FleurFairActivity::registerObserver(FleurFairActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<FleurFairActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<FleurFairActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:551 64 16 12 this_wtr:552";
  *(_QWORD *)(v1 + 16) = FleurFairActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<FleurFairActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<FleurFairActivity>::weak_ptr<FleurFairActivity,void>(
    (std::weak_ptr<FleurFairActivity> *const)(v1 + 64),
    (const std::shared_ptr<FleurFairActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->balloon_settle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<FleurFairActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<FleurFairActivity>::weak_ptr(
      (std::weak_ptr<FleurFairActivity> *const)&v7,
      (const std::weak_ptr<FleurFairActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<FleurFairActivity,GalleryBalloonSettleEvent>(
      (PlayerEventComp *const)&__r,
      p_this_wtr,
      (void (*)(FleurFairActivity *, const GalleryBalloonSettleEvent *))&v7);
    std::weak_ptr<Observer>::operator=(&this->balloon_settle_obs_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<FleurFairActivity>::~weak_ptr((std::weak_ptr<FleurFairActivity> *const)&v7);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->fall_settle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<FleurFairActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<FleurFairActivity>::weak_ptr(
      (std::weak_ptr<FleurFairActivity> *const)&__r,
      (const std::weak_ptr<FleurFairActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<FleurFairActivity,GalleryFallSettleEvent>(
      (PlayerEventComp *const)&v7,
      EventComp,
      (void (*)(FleurFairActivity *, const GalleryFallSettleEvent *))&__r);
    std::weak_ptr<Observer>::operator=(&this->fall_settle_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<FleurFairActivity>::~weak_ptr((std::weak_ptr<FleurFairActivity> *const)&__r);
  }
  std::weak_ptr<FleurFairActivity>::~weak_ptr((std::weak_ptr<FleurFairActivity> *const)(v1 + 64));
  std::shared_ptr<FleurFairActivity>::~shared_ptr((std::shared_ptr<FleurFairActivity> *const)(v1 + 32));
  if ( v8 == (char *)v1 )
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

// Line 565: range 000000001505C526-000000001505C624
void __cdecl FleurFairActivity::unregisterObserver(FleurFairActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->balloon_settle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->balloon_settle_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->balloon_settle_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->fall_settle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->fall_settle_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->fall_settle_obs_wtr_);
  }
};

// Line 579: range 000000001505C626-000000001505D117
void __cdecl FleurFairActivity::onGalleryBalloonSettleEvent(
        FleurFairActivity *const this,
        const GalleryBalloonSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  char v8; // al
  std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t MinigameId; // edx
  uint32_t MinigameOpenTime; // eax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<proto::FleurFairBalloonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  uint32_t v16; // eax
  std::__shared_ptr_access<proto::FleurFairBalloonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  proto::BalloonSettleInfo *v18; // rax
  uint32_t v19; // ecx
  uint32_t v20; // r14d
  std::__shared_ptr_access<FleurFairBalloon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  char v22; // al
  FleurFairBalloon *v23; // r14
  uint32_t v24; // eax
  proto::FleurFairBalloonSettleInfo *v25; // rax
  unsigned int *v26; // rdx
  uint32_t v27; // eax
  Player *v28; // r14
  unsigned int val; // [rsp+14h] [rbp-1CCh] BYREF
  uint32_t now; // [rsp+18h] [rbp-1C8h]
  unsigned int uid_0; // [rsp+1Ch] [rbp-1C4h]
  std::map<unsigned int,proto::BalloonSettleInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-1C0h] BYREF
  std::map<unsigned int,proto::BalloonSettleInfo>::const_iterator __for_end; // [rsp+28h] [rbp-1B8h] BYREF
  google::protobuf::Map<unsigned int,proto::FleurFairBalloonSettleInfo> *proto_settle_info_map; // [rsp+30h] [rbp-1B0h]
  const std::map<unsigned int,proto::BalloonSettleInfo> *__for_range; // [rsp+38h] [rbp-1A8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const std::pair<unsigned int const,proto::BalloonSettleInfo> *v37; // [rsp+48h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::BalloonSettleInfo> >::type *uid; // [rsp+50h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::BalloonSettleInfo> >::type *settle_info; // [rsp+58h] [rbp-188h]
  std::shared_ptr<proto::FleurFairBalloonSettleNotify> __r; // [rsp+60h] [rbp-180h] BYREF
  char v41[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 16 16 minigame_ptr:585 64 16 15 balloon_ptr:598 96 16 17 cur_world_ptr:609 128 16 14 notify"
                        "_ptr:617 160 16 14 player_ptr:635 192 24 11 uid_vec:616 256 32 22 ballon_settle_info:623";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::onGalleryBalloonSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/fleur_fair_activity.cpp",
    "onGalleryBalloonSettleEvent",
    580);
  v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
         (common::milog::MiLogStream *const)(v2 + 256),
         (const char (*)[48])"[FLEUR_FAIR] onGalleryBalloonSettleEvent, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" ,gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->gallery_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
  if ( BaseActivity::isFinished((const BaseActivity *const)this) )
    goto LABEL_10;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( !v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    FleurFairActivity::findMinigamePtrByGalleryId((FleurFairActivity *const)(v2 + 32), (uint32_t)this);
    if ( !std::operator==<FleurFairMinigame>(0LL, (const std::shared_ptr<FleurFairMinigame> *)(v2 + 32)) )
    {
      now = common::tools::TimeUtils::getNow();
      v9 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      MinigameId = FleurFairMinigame::getMinigameId(v9);
      MinigameOpenTime = FleurFairActivity::getMinigameOpenTime(this, MinigameId);
      if ( now >= MinigameOpenTime )
      {
        std::dynamic_pointer_cast<FleurFairBalloon,FleurFairMinigame>((const std::shared_ptr<FleurFairMinigame> *)(v2 + 64));
        if ( !std::operator==<FleurFairBalloon>(0LL, (const std::shared_ptr<FleurFairBalloon> *)(v2 + 64)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 96));
            if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 96)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 256),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/fleur_fair_activity.cpp",
                "onGalleryBalloonSettleEvent",
                612);
              v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      (common::milog::MiLogStream *const)(v2 + 256),
                      (const char (*)[39])"[FLEUR_FAIR] getCurWorld failed, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
            }
            else
            {
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
              common::tools::perf::make_shared<proto::FleurFairBalloonSettleNotify>();
              v14 = std::__shared_ptr_access<proto::FleurFairBalloonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::FleurFairBalloonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              v15 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              v16 = FleurFairMinigame::getMinigameId(v15);
              proto::FleurFairBalloonSettleNotify::set_minigame_id(v14, v16);
              v17 = std::__shared_ptr_access<proto::FleurFairBalloonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::FleurFairBalloonSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              proto_settle_info_map = proto::FleurFairBalloonSettleNotify::mutable_settle_info_map(v17);
              __for_range = &event->player_settle_info_map;
              __for_begin._M_node = std::map<unsigned int,proto::BalloonSettleInfo>::begin(&event->player_settle_info_map)._M_node;
              __for_end._M_node = std::map<unsigned int,proto::BalloonSettleInfo>::end(__for_range)._M_node;
              while ( std::operator!=(&__for_begin, &__for_end) )
              {
                v37 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo>>::operator*(&__for_begin);
                uid = std::get<0ul,unsigned int const,proto::BalloonSettleInfo>(v37);
                settle_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::BalloonSettleInfo> >::type *)std::get<1ul,unsigned int const,proto::BalloonSettleInfo>(v37);
                std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 192), uid);
                proto::FleurFairBalloonSettleInfo::FleurFairBalloonSettleInfo((proto::FleurFairBalloonSettleInfo *const)(v2 + 256));
                v18 = proto::FleurFairBalloonSettleInfo::mutable_settle_info((proto::FleurFairBalloonSettleInfo *const)(v2 + 256));
                proto::BalloonSettleInfo::operator=(v18, settle_info);
                if ( *(_BYTE *)(((unsigned __int64)&event->is_single >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)event + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_single >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&event->is_single);
                }
                if ( !event->is_single )
                  goto LABEL_39;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v19 = Player::getUid(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( v19 == *uid
                  && (v20 = proto::BalloonSettleInfo::final_score(settle_info),
                      v21 = std::__shared_ptr_access<FleurFairBalloon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairBalloon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
                      v20 > FleurFairBalloon::getBestScore(v21)) )
                {
                  v22 = 1;
                }
                else
                {
LABEL_39:
                  v22 = 0;
                }
                if ( v22 )
                {
                  v23 = std::__shared_ptr_access<FleurFairBalloon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairBalloon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                  v24 = proto::BalloonSettleInfo::final_score(settle_info);
                  FleurFairBalloon::setBestScore(v23, v24);
                  proto::FleurFairBalloonSettleInfo::set_is_new_record(
                    (proto::FleurFairBalloonSettleInfo *const)(v2 + 256),
                    1);
                }
                v25 = google::protobuf::Map<unsigned int,proto::FleurFairBalloonSettleInfo>::operator[](
                        proto_settle_info_map,
                        uid);
                proto::FleurFairBalloonSettleInfo::operator=(v25, (const proto::FleurFairBalloonSettleInfo *)(v2 + 256));
                proto::FleurFairBalloonSettleInfo::~FleurFairBalloonSettleInfo((proto::FleurFairBalloonSettleInfo *const)(v2 + 256));
                std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo>>::operator++(&__for_begin);
              }
              __for_range_0 = (std::vector<unsigned int> *)(v2 + 192);
              __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo> >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 192))._M_current;
              __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::BalloonSettleInfo> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
              while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
              {
                v26 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
                if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                uid_0 = *v26;
                v27 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                World::findPlayerPtr((World *const)(v2 + 160), v27);
                if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
                {
                  v28 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  std::dynamic_pointer_cast<google::protobuf::Message const,proto::FleurFairBalloonSettleNotify>(&__r);
                  Player::sendMessage(v28, (common::minet::ConstMessagePtr *)&__r, 0LL);
                  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
              }
              BaseActivity::notifyClientData((BaseActivity *const)this, 0);
              std::shared_ptr<proto::FleurFairBalloonSettleNotify>::~shared_ptr((std::shared_ptr<proto::FleurFairBalloonSettleNotify> *const)(v2 + 128));
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
            }
            std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
          }
        }
        std::shared_ptr<FleurFairBalloon>::~shared_ptr((std::shared_ptr<FleurFairBalloon> *const)(v2 + 64));
      }
    }
    std::shared_ptr<FleurFairMinigame>::~shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v2 + 32));
  }
  if ( v41 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
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
};

// Line 646: range 000000001505D118-000000001505DBE0
void __cdecl FleurFairActivity::onGalleryFallSettleEvent(
        FleurFairActivity *const this,
        const GalleryFallSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  char v8; // al
  std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<proto::FleurFairFallSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t MinigameId; // eax
  std::__shared_ptr_access<proto::FleurFairFallSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  proto::FallSettleInfo *v16; // rax
  uint32_t v17; // ecx
  uint32_t v18; // r14d
  std::__shared_ptr_access<FleurFairFall,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  char v20; // al
  FleurFairFall *v21; // r14
  uint32_t v22; // eax
  proto::FleurFairFallSettleInfo *v23; // rax
  unsigned int *v24; // rdx
  uint32_t v25; // eax
  Player *v26; // r14
  unsigned int val; // [rsp+18h] [rbp-1C8h] BYREF
  unsigned int uid_0; // [rsp+1Ch] [rbp-1C4h]
  std::map<unsigned int,proto::FallSettleInfo>::const_iterator __for_begin; // [rsp+20h] [rbp-1C0h] BYREF
  std::map<unsigned int,proto::FallSettleInfo>::const_iterator __for_end; // [rsp+28h] [rbp-1B8h] BYREF
  google::protobuf::Map<unsigned int,proto::FleurFairFallSettleInfo> *proto_settle_info_map; // [rsp+30h] [rbp-1B0h]
  const std::map<unsigned int,proto::FallSettleInfo> *__for_range; // [rsp+38h] [rbp-1A8h]
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-1A0h]
  const std::pair<unsigned int const,proto::FallSettleInfo> *v34; // [rsp+48h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,proto::FallSettleInfo> >::type *uid; // [rsp+50h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,proto::FallSettleInfo> >::type *settle_info; // [rsp+58h] [rbp-188h]
  std::shared_ptr<proto::FleurFairFallSettleNotify> __r; // [rsp+60h] [rbp-180h] BYREF
  char v38[368]; // [rsp+70h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 16 16 minigame_ptr:652 64 16 12 fall_ptr:664 96 16 17 cur_world_ptr:675 128 16 14 notify_pt"
                        "r:683 160 16 14 player_ptr:701 192 24 11 uid_vec:682 256 32 20 fall_settle_info:689";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::onGalleryFallSettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 256),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/fleur_fair_activity.cpp",
    "onGalleryFallSettleEvent",
    647);
  v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         (common::milog::MiLogStream *const)(v2 + 256),
         (const char (*)[45])"[FLEUR_FAIR] onGalleryFallSettleEvent, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])" ,gallery_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->gallery_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
  if ( BaseActivity::isFinished((const BaseActivity *const)this) )
    goto LABEL_10;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_10:
    v8 = 1;
  else
    v8 = 0;
  if ( !v8 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    FleurFairActivity::findMinigamePtrByGalleryId((FleurFairActivity *const)(v2 + 32), (uint32_t)this);
    if ( !std::operator==<FleurFairMinigame>(0LL, (const std::shared_ptr<FleurFairMinigame> *)(v2 + 32)) )
    {
      v9 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( FleurFairMinigame::getIsOpen(v9) )
      {
        std::dynamic_pointer_cast<FleurFairFall,FleurFairMinigame>((const std::shared_ptr<FleurFairMinigame> *)(v2 + 64));
        if ( !std::operator==<FleurFairFall>(0LL, (const std::shared_ptr<FleurFairFall> *)(v2 + 64)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SceneComp = Player::getSceneComp(this->player_);
          if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 96));
            if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 96)) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 256),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/fleur_fair_activity.cpp",
                "onGalleryFallSettleEvent",
                678);
              v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      (common::milog::MiLogStream *const)(v2 + 256),
                      (const char (*)[39])"[FLEUR_FAIR] getCurWorld failed, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
            }
            else
            {
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
              common::tools::perf::make_shared<proto::FleurFairFallSettleNotify>();
              v12 = std::__shared_ptr_access<proto::FleurFairFallSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::FleurFairFallSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              v13 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              MinigameId = FleurFairMinigame::getMinigameId(v13);
              proto::FleurFairFallSettleNotify::set_minigame_id(v12, MinigameId);
              v15 = std::__shared_ptr_access<proto::FleurFairFallSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::FleurFairFallSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              proto_settle_info_map = proto::FleurFairFallSettleNotify::mutable_settle_info_map(v15);
              __for_range = &event->player_settle_info_map;
              __for_begin._M_node = std::map<unsigned int,proto::FallSettleInfo>::begin(&event->player_settle_info_map)._M_node;
              __for_end._M_node = std::map<unsigned int,proto::FallSettleInfo>::end(__for_range)._M_node;
              while ( std::operator!=(&__for_begin, &__for_end) )
              {
                v34 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo>>::operator*(&__for_begin);
                uid = std::get<0ul,unsigned int const,proto::FallSettleInfo>(v34);
                settle_info = (std::tuple_element<1,const std::pair<unsigned int const,proto::FallSettleInfo> >::type *)std::get<1ul,unsigned int const,proto::FallSettleInfo>(v34);
                std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v2 + 192), uid);
                proto::FleurFairFallSettleInfo::FleurFairFallSettleInfo((proto::FleurFairFallSettleInfo *const)(v2 + 256));
                v16 = proto::FleurFairFallSettleInfo::mutable_settle_info((proto::FleurFairFallSettleInfo *const)(v2 + 256));
                proto::FallSettleInfo::operator=(v16, settle_info);
                if ( *(_BYTE *)(((unsigned __int64)&event->is_single >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_single >> 3)
                                                                     + 0x7FFF8000) )
                {
                  __asan_report_load1(&event->is_single);
                }
                if ( !event->is_single )
                  goto LABEL_39;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v17 = Player::getUid(this->player_);
                if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                if ( v17 == *uid
                  && (v18 = proto::FallSettleInfo::final_score(settle_info),
                      v19 = std::__shared_ptr_access<FleurFairFall,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairFall,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
                      v18 > FleurFairFall::getBestScore(v19)) )
                {
                  v20 = 1;
                }
                else
                {
LABEL_39:
                  v20 = 0;
                }
                if ( v20 )
                {
                  v21 = std::__shared_ptr_access<FleurFairFall,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairFall,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                  v22 = proto::FallSettleInfo::final_score(settle_info);
                  FleurFairFall::setBestScore(v21, v22);
                  proto::FleurFairFallSettleInfo::set_is_new_record(
                    (proto::FleurFairFallSettleInfo *const)(v2 + 256),
                    1);
                }
                v23 = google::protobuf::Map<unsigned int,proto::FleurFairFallSettleInfo>::operator[](
                        proto_settle_info_map,
                        uid);
                proto::FleurFairFallSettleInfo::operator=(v23, (const proto::FleurFairFallSettleInfo *)(v2 + 256));
                proto::FleurFairFallSettleInfo::~FleurFairFallSettleInfo((proto::FleurFairFallSettleInfo *const)(v2 + 256));
                std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo>>::operator++(&__for_begin);
              }
              __for_range_0 = (std::vector<unsigned int> *)(v2 + 192);
              __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo> >::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 192))._M_current;
              __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,proto::FallSettleInfo> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
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
                uid_0 = *v24;
                v25 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
                World::findPlayerPtr((World *const)(v2 + 160), v25);
                if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
                {
                  v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  std::dynamic_pointer_cast<google::protobuf::Message const,proto::FleurFairFallSettleNotify>(&__r);
                  Player::sendMessage(v26, (common::minet::ConstMessagePtr *)&__r, 0LL);
                  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
                }
                std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
                __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
              }
              BaseActivity::notifyClientData((BaseActivity *const)this, 0);
              std::shared_ptr<proto::FleurFairFallSettleNotify>::~shared_ptr((std::shared_ptr<proto::FleurFairFallSettleNotify> *const)(v2 + 128));
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
            }
            std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
          }
        }
        std::shared_ptr<FleurFairFall>::~shared_ptr((std::shared_ptr<FleurFairFall> *const)(v2 + 64));
      }
    }
    std::shared_ptr<FleurFairMinigame>::~shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v2 + 32));
  }
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
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
};

// Line 712: range 000000001505DBE2-000000001505DE41
__int64 __fastcall FleurFairActivity::checkAddCredit(const FleurFairActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:711";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::checkAddCredit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->credit_ && *(_DWORD *)(v2 + 32) + this->credit_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->credit_ || *(_DWORD *)(v2 + 32) + this->credit_ <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "checkAddCredit",
      715);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v9,
           (const char (*)[41])"[FLEUR_FAIR] credit over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->credit_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9111LL;
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
  return result;
};

// Line 723: range 000000001505DE42-000000001505E00A
__int64 __fastcall FleurFairActivity::checkSubCredit(const FleurFairActivity *const this, uint32_t sub_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:722";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::checkSubCredit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->credit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->credit_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "checkSubCredit",
      726);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v9,
           (const char (*)[42])"[FLEUR_FAIR] credit not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->credit_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_256E89C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9112LL;
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
  return result;
};

// Line 734: range 000000001505E00C-000000001505E3DA
int32_t __cdecl FleurFairActivity::addCredit(
        FleurFairActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // edx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  FleurFairActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_credit; // [rsp+2Ch] [rbp-94h]
  std::string v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = add_num;
  v14._M_string_length = (std::string::size_type)reason;
  v14._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:741";
  *(_QWORD *)(v4 + 16) = FleurFairActivity::addCredit;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = FleurFairActivity::checkAddCredit(this, add_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v21, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v14);
    std::string::~string(&v21);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_credit = thisa->credit_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_credit, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->credit_);
    }
    thisa->credit_ = v9;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                            + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
      __asan_report_load4();
    }
    vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->credit_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_FLEUR_FAIR_CREDIT,
      old_credit,
      thisa->credit_,
      vptr_PlayerCompBase,
      vptr_PlayerCompBase_high,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v22 == (char *)v4 )
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

// Line 755: range 000000001505E3DC-000000001505E721
int32_t __cdecl FleurFairActivity::subCredit(
        FleurFairActivity *const this,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // esi
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  FleurFairActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_credit; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:762";
  *(_QWORD *)(v4 + 16) = FleurFairActivity::subCredit;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = FleurFairActivity::checkSubCredit(this, sub_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_credit = thisa->credit_;
    thisa->credit_ = old_credit - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->credit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->credit_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_FLEUR_FAIR_CREDIT,
      old_credit,
      thisa->credit_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 776: range 000000001505E722-000000001505E995
__int64 __fastcall FleurFairActivity::checkAddToken(const FleurFairActivity *const this, uint32_t add_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:775";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::checkAddToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->token_ && *(_DWORD *)(v2 + 32) + this->token_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->token_ || *(_DWORD *)(v2 + 32) + this->token_ <= *(_DWORD *)(v2 + 32) )
  {
LABEL_15:
    result = 0LL;
  }
  else
  {
LABEL_14:
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "checkAddToken",
      779);
    v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v9,
           (const char (*)[40])"[FLEUR_FAIR] token over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->token_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9113LL;
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
  return result;
};

// Line 787: range 000000001505E996-000000001505EB66
__int64 __fastcall FleurFairActivity::checkSubToken(const FleurFairActivity *const this, uint32_t sub_num)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-80h] BYREF
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:786";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::checkSubToken;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->token_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->token_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "checkSubToken",
      790);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v9,
           (const char (*)[41])"[FLEUR_FAIR] token not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->token_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_256E89C0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9114LL;
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
  return result;
};

// Line 798: range 000000001505EB68-000000001505F16E
__int64 __fastcall FleurFairActivity::addToken(
        FleurFairActivity *const this,
        __int32 add_num,
        const ActionReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  SelectType v14; // ecx
  unsigned int v15; // ecx
  SelectType v16; // ecx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r10d
  __int64 result; // rax
  std::string v21; // [rsp+0h] [rbp-E0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-D8h]
  bool is_notifya; // [rsp+10h] [rbp-D0h]
  FleurFairActivity *thisa; // [rsp+18h] [rbp-C8h]
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_token; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v28; // [rsp+30h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&v21._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v21._anon_0._M_allocated_capacity) = add_num;
  v21._M_string_length = (std::string::size_type)reason;
  v21._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 1 22 log_context_holder:814 48 4 17 available_num:806 64 4 11 add_num:797";
  *(_QWORD *)(v4 + 16) = FleurFairActivity::addToken;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 64) = add_num;
  ret = FleurFairActivity::checkAddToken(this, *(_DWORD *)(v4 + 64));
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    *(_DWORD *)(v4 + 48) = FleurFairActivity::getAvailableObtainCoinNum(this);
    if ( *(_DWORD *)(v4 + 64) && *(_DWORD *)(v4 + 64) <= *(_DWORD *)(v4 + 48) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v28, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v21);
      std::string::~string(&v28);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      old_token = thisa->token_;
      v14 = SAFE_ADD<unsigned int,unsigned int>(thisa->token_, *(_DWORD *)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->token_);
      }
      thisa->token_ = v14;
      v15 = *(_DWORD *)(v4 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->obtained_token_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->obtained_token_ >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v16 = SAFE_ADD<unsigned int,unsigned int>(thisa->obtained_token_, v15);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->obtained_token_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->obtained_token_ >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_store4(&thisa->obtained_token_);
      }
      thisa->obtained_token_ = v16;
      if ( is_notifya )
        BaseActivity::notifyClientData((BaseActivity *const)thisa, 0);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(thisa->player_);
      if ( *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)reasona + 4) & 7) + 3) >= *(_BYTE *)((((unsigned __int64)&reasona->_vptr_PlayerCompBase + 4) >> 3)
                                                              + 0x7FFF8000) )
      {
        ItemComp = (PlayerItemComp *)((char *)&reasona->_vptr_PlayerCompBase + 4);
        __asan_report_load4();
      }
      vptr_PlayerCompBase_high = HIDWORD(reasona->_vptr_PlayerCompBase);
      if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
      {
        ItemComp = reasona;
        __asan_report_load4();
      }
      vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
      if ( *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) )
      {
        ItemComp = (PlayerItemComp *)&thisa->token_;
        __asan_report_load4();
      }
      PlayerItemComp::logPlayerAddCoin(
        ItemComp,
        ITEM_VIRTUAL_FLEUR_FAIR_TOKEN,
        old_token,
        thisa->token_,
        vptr_PlayerCompBase,
        vptr_PlayerCompBase_high,
        0);
      v7 = 0;
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "addToken",
        809);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v28,
             (const char (*)[47])"[FLEUR_FAIR] available_num unsurpported, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" ,add_num: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 64));
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v11,
              (const char (*)[18])" ,available_num: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      v7 = -1;
    }
  }
  result = v7;
  if ( v29 == (char *)v4 )
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

// Line 830: range 000000001505F170-000000001505F4C3
int32_t __cdecl FleurFairActivity::subToken(
        FleurFairActivity *const this,
        uint32_t sub_num,
        const SubItemReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *ItemComp; // rdi
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  FleurFairActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_token; // [rsp+2Ch] [rbp-94h]
  std::string v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  *(&v12._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v12._anon_0._M_allocated_capacity) = sub_num;
  v12._M_string_length = (std::string::size_type)reason;
  v12._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:837";
  *(_QWORD *)(v4 + 16) = FleurFairActivity::subToken;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = FleurFairActivity::checkSubToken(this, sub_num);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v19, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x67u, v12);
    std::string::~string(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_token = thisa->token_;
    thisa->token_ = old_token - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      ItemComp = reasona;
      __asan_report_load4();
    }
    vptr_PlayerCompBase = (uint32_t)reasona->_vptr_PlayerCompBase;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->token_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->token_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_FLEUR_FAIR_TOKEN,
      old_token,
      thisa->token_,
      vptr_PlayerCompBase,
      ITEM_LIMIT_NONE,
      0);
    v7 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
  }
  result = v7;
  if ( v20 == (char *)v4 )
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

// Line 851: range 000000001505F4C4-000000001505F79A
uint32_t __cdecl FleurFairActivity::getAvailableObtainCoinNum(FleurFairActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  const ActivityFleurFairExcelConfigMgr *p_activity_fleur_fair_config_mgr; // rdi
  uint32_t v5; // edx
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  uint32_t obtain_coin_limit; // [rsp+14h] [rbp-9Ch]
  const data::FleurFairDungeonExcelConfig *dungeon_section_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 section_id:852";
  *(_QWORD *)(v1 + 16) = FleurFairActivity::getAvailableObtainCoinNum;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = FleurFairActivity::getLastestDungeonSectionId(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_activity_fleur_fair_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
  v5 = *(_DWORD *)(v1 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_fleur_fair_config_mgr = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
    __asan_report_load4();
  }
  dungeon_section_config_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig(
                                 p_activity_fleur_fair_config_mgr,
                                 this->activity_id_,
                                 v5);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( dungeon_section_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->obtain_coin_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_section_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->obtain_coin_limit >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    obtain_coin_limit = dungeon_section_config_ptr->obtain_coin_limit;
    if ( *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->obtained_token_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( obtain_coin_limit <= this->obtained_token_ )
      result = 0;
    else
      result = obtain_coin_limit - this->obtained_token_;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "getAvailableObtainCoinNum",
      856);
    v6 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v12,
           (const char (*)[67])"[FLEUR_FAIR] getFleurFairDungeonSectionConfig failed, section_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0;
  }
  if ( v13 == (char *)v1 )
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

// Line 865: range 000000001505F79C-000000001505F90E
void __cdecl FleurFairActivity::notifyClientReloadTerrain(FleurFairActivity *const this)
{
  std::shared_ptr<Scene> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  Scene *v4; // rax
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+10h] [rbp-70h] BYREF
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (std::shared_ptr<Scene> *)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<Scene> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 scene_ptr:866";
  v1[1]._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)FleurFairActivity::notifyClientReloadTerrain;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator!=<Scene>(v1 + 2, 0LL) )
  {
    v4 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
    Scene::notifyClientReloadTerrain(v4, 0LL);
  }
  std::shared_ptr<Scene>::~shared_ptr(v1 + 2);
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 874: range 000000001505F910-000000001505F9C1
void __cdecl FleurFairActivity::closeFleurFairContent(FleurFairActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    FleurFairActivity::notifyClientReloadTerrain(this);
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
};

// Line 887: range 000000001505F9C2-00000000150600E3
void __cdecl FleurFairActivity::addWatcherIdList(
        FleurFairActivity *const this,
        const std::vector<unsigned int> *watcher_id_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t WatcherComp; // eax
  bool v15; // r14
  PlayerWatcherComp *v16; // rax
  bool v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-90h] BYREF
  char v27[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:888";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::addWatcherIdList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = watcher_id_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(watcher_id_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(watcher_id_list)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v5;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v6->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "addWatcherIdList",
        893);
      v7 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v26,
             (const char (*)[35])"[FLEUR_FAIR] findWatcherConfig id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_28:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      goto LABEL_29;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "addWatcherIdList",
        899);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v26,
              (const char (*)[25])"[FLEUR_FAIR] watcher_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             v11,
             (const char (*)[25])" already finished, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_28;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->taken_watcher_id_set_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "addWatcherIdList",
        905);
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v26,
              (const char (*)[25])"[FLEUR_FAIR] watcher_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v13,
             (const char (*)[20])" taken reward, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_28;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v25, WatcherComp);
    v15 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v25);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v25);
    if ( !v15 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::addWatcher(
        (PlayerWatcherComp *const)&v25,
        (const WatcherConfig *)v16,
        (uint32_t)watcher_config_ptr);
      v17 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v25);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v25);
      if ( v17 )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "addWatcherIdList",
          916);
        v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v26,
                (const char (*)[28])"[FLEUR_FAIR] addWatcher id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_28;
      }
    }
LABEL_29:
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( v27 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 923: range 00000000150600E4-00000000150605E1
void __cdecl FleurFairActivity::delMiniGameWatchers(FleurFairActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t WatcherComp; // eax
  bool v10; // r14
  PlayerWatcherComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const ActivityFleurFairExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-B8h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-A8h]
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
  *(_QWORD *)(v1 + 8) = "1 32 4 14 watcher_id:925";
  *(_QWORD *)(v1 + 16) = FleurFairActivity::delMiniGameWatchers;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = &conf_mgr->minigame_watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&conf_mgr->minigame_watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&conf_mgr->minigame_watcher_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v5->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( watcher_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v20, WatcherComp);
      v10 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v20);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v20);
      if ( v10 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v11 = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::delWatcher(v11, *(_DWORD *)(v1 + 32));
      }
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "delMiniGameWatchers",
        939);
      v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v21,
              (const char (*)[27])"[FLEUR_FAIR] del watcher: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "delMiniGameWatchers",
        930);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v21,
             (const char (*)[35])"[FLEUR_FAIR] findWatcherConfig id:");
      v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
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
};

// Line 944: range 00000000150605E2-0000000015060848
uint32_t __fastcall FleurFairActivity::getMinigameOpenTime(const FleurFairActivity *const this, uint32_t minigame_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  uint32_t open_day; // ecx
  const data::FleurFairMiniGameExcelConfig *minigame_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 15 minigame_id:943";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::getMinigameOpenTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = minigame_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  minigame_config_ptr = data::ActivityFleurFairExcelConfigMgrBase::findFleurFairMiniGameExcelConfig(
                          &v5->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                          *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( minigame_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&minigame_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&minigame_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    open_day = minigame_config_ptr->open_day;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "getMinigameOpenTime",
      948);
    v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v11,
           (const char (*)[68])"[FLEUR_FAIR] findFleurFairMiniGameExcelConfig failed, minigame_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0;
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

// Line 956: range 000000001506084A-0000000015060AFD
FleurFairActivity *__fastcall FleurFairActivity::createMinigamePtr(
        FleurFairActivity *const this,
        uint32_t minigame_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  data::FleurFairMiniGameType MiniGameType; // eax
  common::milog::MiLogStream *v7; // rax
  unsigned int val; // [rsp+28h] [rbp-B8h] BYREF
  data::FleurFairMiniGameType minigame_type; // [rsp+2Ch] [rbp-B4h]
  std::shared_ptr<FleurFairBalloon> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<FleurFairFall> v13; // [rsp+40h] [rbp-A0h] BYREF
  std::shared_ptr<FleurFairMusic> v14; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-80h] BYREF
  char v16[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 minigame_id:955";
  *(_QWORD *)(v3 + 16) = FleurFairActivity::createMinigamePtr;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  this->_vptr_DescribalBase = 0LL;
  this->_M_weak_this._M_ptr = 0LL;
  MiniGameType = (unsigned int)FleurFairMinigame::getMiniGameType(*(_DWORD *)(v3 + 32));
  minigame_type = MiniGameType;
  if ( MiniGameType == FLEUR_FAIR_MINI_GAME_MUSIC )
  {
    common::tools::perf::make_shared<FleurFairMusic,unsigned int &>((unsigned int *)&v14, (unsigned int *)(v3 + 32));
    std::shared_ptr<FleurFairMinigame>::operator=<FleurFairMusic>((std::shared_ptr<FleurFairMinigame> *const)this, &v14);
    std::shared_ptr<FleurFairMusic>::~shared_ptr(&v14);
  }
  else
  {
    if ( MiniGameType > FLEUR_FAIR_MINI_GAME_MUSIC )
      goto LABEL_14;
    if ( MiniGameType == FLEUR_FAIR_MINI_GAME_BALLOON )
    {
      common::tools::perf::make_shared<FleurFairBalloon,unsigned int &>((unsigned int *)&__r, (unsigned int *)(v3 + 32));
      std::shared_ptr<FleurFairMinigame>::operator=<FleurFairBalloon>(
        (std::shared_ptr<FleurFairMinigame> *const)this,
        &__r);
      std::shared_ptr<FleurFairBalloon>::~shared_ptr(&__r);
      goto LABEL_15;
    }
    if ( MiniGameType == FLEUR_FAIR_MINI_GAME_FALL )
    {
      common::tools::perf::make_shared<FleurFairFall,unsigned int &>((unsigned int *)&v13, (unsigned int *)(v3 + 32));
      std::shared_ptr<FleurFairMinigame>::operator=<FleurFairFall>(
        (std::shared_ptr<FleurFairMinigame> *const)this,
        &v13);
      std::shared_ptr<FleurFairFall>::~shared_ptr(&v13);
    }
    else
    {
LABEL_14:
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "createMinigamePtr",
        971);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v15,
             (const char (*)[47])"[FLEUR_FAIR] invalid gallery type, gallery_id:");
      val = minigame_type;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
  }
LABEL_15:
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 979: range 0000000015060AFE-0000000015060E3C
FleurFairActivity *__fastcall FleurFairActivity::findMinigamePtrByGalleryId(
        FleurFairActivity *const this,
        __int64 gallery_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 minigame_id:980 48 4 14 gallery_id:978 64 8 8 iter:986";
  *(_QWORD *)(v3 + 16) = FleurFairActivity::findMinigamePtrByGalleryId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  *(_DWORD *)(v3 + 32) = ActivityFleurFairExcelConfigMgr::findMiniGameIdByGalleryId(
                           &v6->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                           *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( *(_DWORD *)(v3 + 32) )
  {
    *(std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::find(
                                                                                          (std::map<unsigned int,std::shared_ptr<FleurFairMinigame>> *const)(gallery_id + 1032),
                                                                                          (const std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::key_type *)(v3 + 32));
    __y._M_node = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::end((std::map<unsigned int,std::shared_ptr<FleurFairMinigame>> *const)(gallery_id + 1032))._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "findMinigamePtrByGalleryId",
        989);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v14,
             (const char (*)[48])"[FLEUR_FAIR] minigame_id not found, gallery_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)this, 0LL);
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > > *const)(v3 + 64));
      std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)this, &v9->second);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "findMinigamePtrByGalleryId",
      983);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v14,
           (const char (*)[48])"[FLEUR_FAIR] minigame_id not found, gallery_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)this, 0LL);
  }
  if ( v15 == (char *)v3 )
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

// Line 996: range 0000000015060E3E-000000001506117C
FleurFairActivity *__fastcall FleurFairActivity::findMinigamePtrByMusicInfoId(
        FleurFairActivity *const this,
        __int64 music_info_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::pointer v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self __y; // [rsp+28h] [rbp-B8h] BYREF
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 minigame_id:997 48 4 17 music_info_id:995 64 8 9 iter:1003";
  *(_QWORD *)(v3 + 16) = FleurFairActivity::findMinigamePtrByMusicInfoId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  *(_DWORD *)(v3 + 32) = ActivityFleurFairExcelConfigMgr::findMiniGameIdByMusicInfoId(
                           &v6->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                           *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( *(_DWORD *)(v3 + 32) )
  {
    *(std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::find(
                                                                                          (std::map<unsigned int,std::shared_ptr<FleurFairMinigame>> *const)(music_info_id + 1032),
                                                                                          (const std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::key_type *)(v3 + 32));
    __y._M_node = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::end((std::map<unsigned int,std::shared_ptr<FleurFairMinigame>> *const)(music_info_id + 1032))._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "findMinigamePtrByMusicInfoId",
        1006);
      v8 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v14,
             (const char (*)[51])"[FLEUR_FAIR] minigame_id not found, music_info_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)this, 0LL);
    }
    else
    {
      v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > > *const)(v3 + 64));
      std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)this, &v9->second);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "findMinigamePtrByMusicInfoId",
      1000);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v14,
           (const char (*)[51])"[FLEUR_FAIR] minigame_id not found, music_info_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v14);
    std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)this, 0LL);
  }
  if ( v15 == (char *)v3 )
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

// Line 1013: range 000000001506117E-00000000150615F2
__int64 __fastcall FleurFairActivity::openMinigame(FleurFairActivity *const this, uint32_t minigame_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self __y; // [rsp+10h] [rbp-F0h] BYREF
  const data::FleurFairMiniGameExcelConfig *minigame_config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 16 minigame_id:1012 64 8 9 iter:1014 96 16 17 minigame_ptr:1021";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::openMinigame;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = minigame_id;
  *(std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::find(
                                                                                        &this->minigame_map_,
                                                                                        (const std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::end(&this->minigame_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "openMinigame",
      1017);
    v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v17,
           (const char (*)[48])"[FLEUR_FAIR] minigame_id invalid, minigame_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > > *const)(v2 + 64));
    std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v2 + 96), &v7->second);
    if ( std::operator==<FleurFairMinigame>(0LL, (const std::shared_ptr<FleurFairMinigame> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "openMinigame",
        1024);
      v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v17,
             (const char (*)[49])"[FLEUR_FAIR] minigame_ptr is null, minigame_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v17);
      v6 = -1;
    }
    else
    {
      v9 = (unsigned __int64)std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      v10 = *(_QWORD *)v9 + 40LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64))v10)(v9) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "openMinigame",
          1030);
        v11 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v17,
                (const char (*)[46])"[FLEUR_FAIR] onGameOpen failed, minigame_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v6 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v16);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
        minigame_config_ptr = data::ActivityFleurFairExcelConfigMgrBase::findFleurFairMiniGameExcelConfig(
                                &v12->design_config.txt_config_mgr.activity_fleur_fair_config_mgr,
                                *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v16);
        if ( minigame_config_ptr )
          FleurFairActivity::addWatcherIdList(this, &minigame_config_ptr->watcher_id_list);
        BaseActivity::notifyClientData((BaseActivity *const)this, 0);
        v6 = 0;
      }
    }
    std::shared_ptr<FleurFairMinigame>::~shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v2 + 96));
  }
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 1046: range 00000000150615F4-00000000150627A9
__int64 __fastcall FleurFairActivity::onMusicGameSettle(
        FleurFairActivity *const this,
        uint32_t music_basic_id,
        uint32_t score,
        uint32_t combo,
        uint32_t correct_hit,
        bool *is_unlock_level,
        bool *is_new_record)
{
  unsigned __int64 v7; // r13
  __int64 v8; // rax
  _DWORD *v9; // r12
  char v10; // al
  unsigned int v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord> >::pointer v23; // rax
  bool *p_is_unlock; // rax
  common::milog::MiLogStream *v25; // rax
  uint32_t *v26; // rdx
  uint32_t v27; // ecx
  common::milog::MiLogStream *v28; // rax
  std::vector<unsigned int>::const_reference v29; // rdx
  unsigned int *v30; // r9
  std::vector<unsigned int>::const_reference v31; // rdx
  std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord> >::pointer v35; // rax
  bool *v36; // rax
  common::milog::MiLogStream *v37; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string is_unlock_levela; // [rsp+0h] [rbp-200h]
  FleurFairActivity *thisa; // [rsp+18h] [rbp-1E8h]
  uint32_t cur_music_level; // [rsp+24h] [rbp-1DCh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord> >::_Self __y; // [rsp+28h] [rbp-1D8h] BYREF
  const data::MusicGameBasicConfig *music_basic_config_ptr; // [rsp+30h] [rbp-1D0h]
  const data::MusicInfoConfig *music_info_config_ptr; // [rsp+38h] [rbp-1C8h]
  FleurFairMusicRecord *record; // [rsp+40h] [rbp-1C0h]
  FleurFairMusicRecord *next_level_record; // [rsp+48h] [rbp-1B8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-1B0h] BYREF
  std::shared_ptr<google::protobuf::Message> v55; // [rsp+60h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v56; // [rsp+70h] [rbp-190h] BYREF
  char v57[368]; // [rsp+90h] [rbp-170h] BYREF

  *(&is_unlock_levela._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  is_unlock_levela._anon_0._M_allocated_capacity = __PAIR64__(music_basic_id, score);
  is_unlock_levela._M_string_length = __PAIR64__(combo, correct_hit);
  is_unlock_levela._M_dataplus._M_p = (std::string::pointer)is_unlock_level;
  v7 = (unsigned __int64)v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v8 = __asan_stack_malloc_3(320LL);
    if ( v8 )
      v7 = v8;
  }
  *(_QWORD *)v7 = 1102416563LL;
  *(_QWORD *)(v7 + 8) = "11 48 1 11 holder:1130 64 4 24 next_music_basic_id:1111 80 4 19 music_basic_id:1045 96 4 10 scor"
                        "e:1045 112 4 10 combo:1045 128 8 16 record_iter:1081 160 8 27 next_level_record_iter:1112 192 16"
                        " 22 minigame_base_ptr:1064 224 16 14 music_ptr:1075 256 16 14 event_ptr:1127 288 16 12 log_ptr:1131";
  *(_QWORD *)(v7 + 16) = FleurFairActivity::onMusicGameSettle;
  v9 = (_DWORD *)(v7 >> 3);
  v9[536862720] = -235802127;
  v9[536862721] = -234753551;
  v9[536862722] = -234556924;
  v9[536862723] = -234556924;
  v9[536862724] = -218959360;
  v9[536862725] = -218959360;
  v9[536862726] = -219021312;
  v9[536862727] = -219021312;
  v9[536862728] = -219021312;
  v9[536862729] = -202178560;
  *(_DWORD *)(v7 + 80) = music_basic_id;
  *(_DWORD *)(v7 + 96) = *(_DWORD *)is_unlock_levela._anon_0._M_local_buf;
  *(_DWORD *)(v7 + 112) = HIDWORD(is_unlock_levela._M_string_length);
  if ( BaseActivity::isFinished((const BaseActivity *const)this) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_8:
    v10 = 1;
  else
    v10 = 0;
  if ( v10 )
  {
    v11 = 860;
    goto LABEL_71;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55);
  music_basic_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameBasicConfig(
                             &v12->design_config.txt_config_mgr.activity_music_game_config_mgr,
                             *(_DWORD *)(v7 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
  if ( !music_basic_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "onMusicGameSettle",
      1054);
    v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
            &v56,
            (const char (*)[62])"[FLEUR_FAIR] music_basic_config_ptr is null, music_basic_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v7 + 80));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v11 = -1;
    goto LABEL_71;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v55);
  p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v55)->design_config.txt_config_mgr.activity_music_game_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)music_basic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  music_info_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicInfoConfig(
                            p_activity_music_game_config_mgr,
                            music_basic_config_ptr->music_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v55);
  if ( !music_info_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "onMusicGameSettle",
      1060);
    v15 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v56,
            (const char (*)[61])"[FLEUR_FAIR] music_info_config_ptr is null, music_basic_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v7 + 80));
    common::milog::MiLogStream::~MiLogStream(&v56);
    v11 = -1;
    goto LABEL_71;
  }
  if ( *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)music_basic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  FleurFairActivity::findMinigamePtrByMusicInfoId(
    (FleurFairActivity *const)(v7 + 192),
    (__int64)this,
    music_basic_config_ptr->music_id);
  if ( !std::operator==<FleurFairMinigame>(0LL, (const std::shared_ptr<FleurFairMinigame> *)(v7 + 192)) )
  {
    v17 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 192));
    if ( !FleurFairMinigame::getIsOpen(v17) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "onMusicGameSettle",
        1072);
      v18 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v56,
              (const char (*)[51])"[FLEUR_FAIR] music game not open, music_basic_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v7 + 80));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v11 = 9115;
      goto LABEL_70;
    }
    std::dynamic_pointer_cast<FleurFairMusic,FleurFairMinigame>((const std::shared_ptr<FleurFairMinigame> *)(v7 + 224));
    if ( std::operator==<FleurFairMusic>(0LL, (const std::shared_ptr<FleurFairMusic> *)(v7 + 224)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "onMusicGameSettle",
        1078);
      v19 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              &v56,
              (const char (*)[59])"[FLEUR_FAIR] dynamic_pointer_cast failed, music_basic_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v7 + 80));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v11 = -1;
    }
    else
    {
      v20 = std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 224));
      *(std::map<unsigned int,FleurFairMusicRecord>::iterator *)(v7 + 128) = std::map<unsigned int,FleurFairMusicRecord>::find(
                                                                               &v20->music_game_record_map_,
                                                                               (const std::map<unsigned int,FleurFairMusicRecord>::key_type *)(v7 + 80));
      v21 = std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 224));
      __y._M_node = std::map<unsigned int,FleurFairMusicRecord>::end(&v21->music_game_record_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord> >::_Self *)(v7 + 128),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "onMusicGameSettle",
          1084);
        v22 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v56,
                (const char (*)[60])"[FLEUR_FAIR] music game recored not found, music_basic_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v7 + 80));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v11 = -1;
      }
      else
      {
        v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord> > *const)(v7 + 128));
        record = &v23->second;
        p_is_unlock = &v23->second.is_unlock;
        if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_unlock);
        }
        if ( !record->is_unlock )
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fleur_fair_activity.cpp",
            "onMusicGameSettle",
            1090);
          v25 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v56,
                  (const char (*)[61])"[FLEUR_FAIR] music game recored not unlock, music_basic_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v7 + 80));
          common::milog::MiLogStream::~MiLogStream(&v56);
          v11 = 9116;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( record->max_score < *(_DWORD *)(v7 + 96) )
          {
            if ( *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)is_new_record & 7) >= *(_BYTE *)(((unsigned __int64)is_new_record >> 3) + 0x7FFF8000) )
            {
              __asan_report_store1(is_new_record);
            }
            *is_new_record = 1;
            record->max_score = *(_DWORD *)(v7 + 96);
          }
          v26 = (uint32_t *)std::max<unsigned int>(&record->max_score, (const unsigned int *)(v7 + 112));
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v27 = *v26;
          if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store4(&record->max_combo);
          }
          record->max_combo = v27;
          if ( !std::vector<unsigned int>::empty(&music_basic_config_ptr->score_level_list) )
          {
            v29 = std::vector<unsigned int>::operator[](&music_basic_config_ptr->score_level_list, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( *v29 <= *(_DWORD *)(v7 + 96) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_level >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_level >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              cur_music_level = music_basic_config_ptr->music_level;
              if ( cur_music_level < std::vector<unsigned int>::size(&music_info_config_ptr->level_id) )
              {
                v31 = std::vector<unsigned int>::operator[](&music_info_config_ptr->level_id, cur_music_level);
                if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(_DWORD *)(v7 + 64) = *v31;
                v32 = std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 224));
                *(std::map<unsigned int,FleurFairMusicRecord>::iterator *)(v7 + 160) = std::map<unsigned int,FleurFairMusicRecord>::find(
                                                                                         &v32->music_game_record_map_,
                                                                                         (const std::map<unsigned int,FleurFairMusicRecord>::key_type *)(v7 + 64));
                v33 = std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMusic,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 224));
                __y._M_node = std::map<unsigned int,FleurFairMusicRecord>::end(&v33->music_game_record_map_)._M_node;
                if ( std::operator==(
                       (const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord> >::_Self *)(v7 + 160),
                       &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v56,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/fleur_fair_activity.cpp",
                    "onMusicGameSettle",
                    1115);
                  v34 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                          &v56,
                          (const char (*)[59])"[FLEUR_FAIR] next level record not found, music_basic_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v34,
                    (const unsigned int *)(v7 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v56);
                  v11 = -1;
                  goto LABEL_69;
                }
                v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairMusicRecord> > *const)(v7 + 160));
                next_level_record = &v35->second;
                v36 = &v35->second.is_unlock;
                if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
                  && ((unsigned __int8)v36 & 7) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load1(v36);
                }
                if ( !next_level_record->is_unlock )
                {
                  next_level_record->is_unlock = 1;
                  if ( *(_BYTE *)(((unsigned __int64)is_unlock_levela._M_dataplus._M_p >> 3) + 0x7FFF8000) != 0
                    && ((__int64)is_unlock_levela._M_dataplus._M_p & 7) >= *(_BYTE *)(((unsigned __int64)is_unlock_levela._M_dataplus._M_p >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_store1(is_unlock_levela._M_dataplus._M_p);
                  }
                  *is_unlock_levela._M_dataplus._M_p = 1;
                  common::milog::MiLogStream::create(
                    &v56,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/fleur_fair_activity.cpp",
                    "onMusicGameSettle",
                    1123);
                  v37 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                          &v56,
                          (const char (*)[59])"[FLEUR_FAIR] music unlock next level, next_music_basic_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v37,
                    (const unsigned int *)(v7 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v56);
                }
              }
            }
            common::tools::perf::make_shared<FleurFairMusicGameSettleEvent,unsigned int const&,unsigned int &,unsigned int &,unsigned int &>(
              (const unsigned int *)(v7 + 256),
              &music_info_config_ptr->music_id,
              (unsigned int *)(v7 + 80),
              (unsigned int *)(v7 + 96),
              (const unsigned int *)(v7 + 112),
              v30,
              (unsigned int *)is_unlock_levela._M_dataplus._M_p,
              (unsigned int *)is_unlock_levela._M_string_length);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(this->player_);
            std::shared_ptr<BaseEvent>::shared_ptr<FleurFairMusicGameSettleEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&v55,
              (const std::shared_ptr<FleurFairMusicGameSettleEvent> *)(v7 + 256));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v55);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v55);
            BaseActivity::notifyClientData((BaseActivity *const)this, 0);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            BasicComp = Player::getBasicComp(this->player_);
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v56, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder(
              (StatLogUtils::ContextHolder *const)(v7 + 48),
              0xC52u,
              is_unlock_levela);
            std::string::~string(&v56);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyMusicGameStop>();
            v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 288));
            if ( *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)music_basic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3)
                                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyMusicGameStop::set_music_id(v40, music_basic_config_ptr->music_id);
            v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 288));
            proto_log::PlayerLogBodyMusicGameStop::set_music_basic_id(v41, *(_DWORD *)(v7 + 80));
            v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 288));
            proto_log::PlayerLogBodyMusicGameStop::set_max_combo(v42, *(_DWORD *)(v7 + 112));
            v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v7 + 288));
            proto_log::PlayerLogBodyMusicGameStop::set_score(v43, *(_DWORD *)(v7 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            player = thisa->player_;
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v55, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMusicGameStop,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyMusicGameStop> *)(v7 + 288));
            Player::printStatLog(player, &p_body_ptr, &v55, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v55);
            v11 = 0;
            std::shared_ptr<proto_log::PlayerLogBodyMusicGameStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMusicGameStop> *const)(v7 + 288));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v7 + 48));
            std::shared_ptr<FleurFairMusicGameSettleEvent>::~shared_ptr((std::shared_ptr<FleurFairMusicGameSettleEvent> *const)(v7 + 256));
            goto LABEL_69;
          }
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fleur_fair_activity.cpp",
            "onMusicGameSettle",
            1101);
          v28 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                  &v56,
                  (const char (*)[76])"[FLEUR_FAIR] music game recored score_level_list is empty, music_basic_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v7 + 80));
          common::milog::MiLogStream::~MiLogStream(&v56);
          v11 = -1;
        }
      }
    }
LABEL_69:
    std::shared_ptr<FleurFairMusic>::~shared_ptr((std::shared_ptr<FleurFairMusic> *const)(v7 + 224));
    goto LABEL_70;
  }
  common::milog::MiLogStream::create(
    &v56,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/fleur_fair_activity.cpp",
    "onMusicGameSettle",
    1067);
  v16 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
          &v56,
          (const char (*)[50])"[FLEUR_FAIR] minigame not found, music_basic_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v7 + 80));
  common::milog::MiLogStream::~MiLogStream(&v56);
  v11 = -1;
LABEL_70:
  std::shared_ptr<FleurFairMinigame>::~shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v7 + 192));
LABEL_71:
  result = v11;
  if ( v57 == (char *)v7 )
  {
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v7 = 1172321806LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v7 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1141: range 00000000150627AA-00000000150628C8
int32_t __cdecl FleurFairActivity::updateMusicGameScoreByGm(
        FleurFairActivity *const this,
        uint32_t music_basic_id,
        uint32_t score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 1 20 is_unlock_level:1142 64 1 18 is_new_record:1143";
  *(_QWORD *)(v3 + 16) = FleurFairActivity::updateMusicGameScoreByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -202116351;
  *(_BYTE *)(v3 + 48) = 0;
  *(_BYTE *)(v3 + 64) = 0;
  result = FleurFairActivity::onMusicGameSettle(this, music_basic_id, score, 0, 0, (bool *)(v3 + 48), (bool *)(v3 + 64));
  if ( v8 == (char *)v3 )
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

// Line 1148: range 00000000150628CA-0000000015062929
void __cdecl FleurFairActivity::unlockDungeon(FleurFairActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_dungeon_unlocked_);
  this->is_dungeon_unlocked_ = 1;
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 1154: range 000000001506292A-0000000015062D7B
__int64 __fastcall FleurFairActivity::openDungeonSection(FleurFairActivity *const this, uint32_t section_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> >::pointer v8; // rax
  bool *p_is_open; // rax
  const ActivityFleurFairExcelConfigMgr *p_activity_fleur_fair_config_mgr; // rdi
  uint32_t v11; // edx
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  FleurFairDungeonSection *dungeon_section; // [rsp+20h] [rbp-D0h]
  const data::FleurFairDungeonExcelConfig *dungeon_section_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 section_id:1153 64 8 9 iter:1161";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::openDungeonSection;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = section_id;
  if ( *(char *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_dungeon_unlocked_);
  if ( !this->is_dungeon_unlocked_ )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "openDungeonSection",
      1158);
    v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v18,
           (const char (*)[38])"[FLEUR_FAIR] dungeon is locked, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  *(std::map<unsigned int,FleurFairDungeonSection>::iterator *)(v2 + 64) = std::map<unsigned int,FleurFairDungeonSection>::find(
                                                                             &this->dungeon_section_map_,
                                                                             (const std::map<unsigned int,FleurFairDungeonSection>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,FleurFairDungeonSection>::end(&this->dungeon_section_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "openDungeonSection",
      1164);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v18,
           (const char (*)[46])"[FLEUR_FAIR] section_id invalid, section_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,FleurFairDungeonSection> > *const)(v2 + 64));
    dungeon_section = &v8->second;
    p_is_open = &v8->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_open);
    }
    dungeon_section->is_open = 1;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_activity_fleur_fair_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
    v11 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_fleur_fair_config_mgr = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    dungeon_section_config_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig(
                                   p_activity_fleur_fair_config_mgr,
                                   this->activity_id_,
                                   v11);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( dungeon_section_config_ptr )
      FleurFairActivity::addWatcherIdList(this, &dungeon_section_config_ptr->watcher_id_list);
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
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

// Line 1183: range 0000000015062D7C-0000000015063020
uint32_t __fastcall FleurFairActivity::getDungeonSectionOpenTime(
        const FleurFairActivity *const this,
        uint32_t section_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const ActivityFleurFairExcelConfigMgr *p_activity_fleur_fair_config_mgr; // rdi
  uint32_t v6; // edx
  common::milog::MiLogStream *v7; // rax
  uint32_t result; // eax
  uint32_t open_day; // ecx
  const data::FleurFairDungeonExcelConfig *dungeon_section_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 15 section_id:1182";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::getDungeonSectionOpenTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = section_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  p_activity_fleur_fair_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
  v6 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_fleur_fair_config_mgr = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
    __asan_report_load4();
  }
  dungeon_section_config_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig(
                                 p_activity_fleur_fair_config_mgr,
                                 this->activity_id_,
                                 v6);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( dungeon_section_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    open_day = dungeon_section_config_ptr->open_day;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "getDungeonSectionOpenTime",
      1187);
    v7 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v13,
           (const char (*)[67])"[FLEUR_FAIR] getFleurFairDungeonSectionConfig failed, section_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0;
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
  return result;
};

// Line 1195: range 0000000015063022-0000000015063274
uint32_t __cdecl FleurFairActivity::getLastestDungeonSectionId(const FleurFairActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::tuple_element<0,const std::pair<unsigned int const,FleurFairDungeonSection> >::type latest_section_id; // [rsp+1Ch] [rbp-64h]
  std::map<unsigned int,FleurFairDungeonSection>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,FleurFairDungeonSection>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::map<unsigned int,FleurFairDungeonSection> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<unsigned int const,FleurFairDungeonSection> *v7; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *section_id; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *dungeon_section; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->gm_dungeon_section_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_dungeon_section_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->gm_dungeon_section_id )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "getLastestDungeonSectionId",
      1199);
    v1 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v10,
           (const char (*)[37])"[FLEUR_FAIR] gm_dungeon_section_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->gm_dungeon_section_id);
    common::milog::MiLogStream::~MiLogStream(&v10);
    if ( *(_BYTE *)(((unsigned __int64)&this->gm_dungeon_section_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gm_dungeon_section_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return this->gm_dungeon_section_id;
  }
  else
  {
    latest_section_id = 0;
    __for_range = &this->dungeon_section_map_;
    __for_begin._M_node = std::map<unsigned int,FleurFairDungeonSection>::begin(&this->dungeon_section_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,FleurFairDungeonSection>::end(&this->dungeon_section_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator*(&__for_begin);
      section_id = std::get<0ul,unsigned int const,FleurFairDungeonSection>(v7);
      dungeon_section = (std::tuple_element<1,const std::pair<unsigned int const,FleurFairDungeonSection> >::type *)std::get<1ul,unsigned int const,FleurFairDungeonSection>(v7);
      if ( *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)section_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)section_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( latest_section_id < *section_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_section->is_open >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)dungeon_section + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&dungeon_section->is_open >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load1(&dungeon_section->is_open);
        }
        if ( dungeon_section->is_open )
          latest_section_id = *section_id;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,FleurFairDungeonSection>>::operator++(&__for_begin);
    }
    return latest_section_id;
  }
};

// Line 1217: range 0000000015063276-00000000150635FF
__int64 __fastcall FleurFairActivity::checkEnterDungeon(const FleurFairActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  const ActivityFleurFairExcelConfigMgr *p_activity_fleur_fair_config_mgr; // rdi
  uint32_t v7; // edx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  const data::FleurFairDungeonExcelConfig *dungeon_section_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 section_id:1223 64 4 15 dungeon_id:1216";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::checkEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = dungeon_id;
  if ( *(char *)(((unsigned __int64)&this->is_dungeon_unlocked_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_dungeon_unlocked_);
  if ( !this->is_dungeon_unlocked_ )
  {
    result = 9117LL;
  }
  else
  {
    *(_DWORD *)(v2 + 48) = FleurFairActivity::getLastestDungeonSectionId(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_activity_fleur_fair_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
    v7 = *(_DWORD *)(v2 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_fleur_fair_config_mgr = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    dungeon_section_config_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig(
                                   p_activity_fleur_fair_config_mgr,
                                   this->activity_id_,
                                   v7);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( dungeon_section_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( dungeon_section_config_ptr->dungeon_id == *(_DWORD *)(v2 + 64) )
      {
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v13,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "checkEnterDungeon",
          1233);
        v9 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
               &v13,
               (const char (*)[46])"[FLEUR_FAIR] dungeon_id invalid, dungeon_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v13);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "checkEnterDungeon",
        1227);
      v8 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v13,
             (const char (*)[67])"[FLEUR_FAIR] getFleurFairDungeonSectionConfig failed, section_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v14 == (char *)v2 )
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

// Line 1241: range 0000000015063600-0000000015063968
__int64 __fastcall FleurFairActivity::isMinigameOpen(FleurFairActivity *const this, uint32_t minigame_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  unsigned int v6; // r14d
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int v11; // eax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
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
  *(_QWORD *)(v2 + 8) = "3 48 4 16 minigame_id:1240 64 8 9 iter:1247 96 16 17 minigame_ptr:1253";
  *(_QWORD *)(v2 + 16) = FleurFairActivity::isMinigameOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = minigame_id;
  if ( BaseActivity::isFinished((const BaseActivity *const)this) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_8:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v6 = 0;
  }
  else
  {
    *(std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::find(
                                                                                          &this->minigame_map_,
                                                                                          (const std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,std::shared_ptr<FleurFairMinigame>>::end(&this->minigame_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "isMinigameOpen",
        1250);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v14,
             (const char (*)[48])"[FLEUR_FAIR] minigame_id invalid, minigame_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v14);
      v6 = 0;
    }
    else
    {
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<FleurFairMinigame> > > *const)(v2 + 64));
      std::shared_ptr<FleurFairMinigame>::shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v2 + 96), &v8->second);
      if ( std::operator==<FleurFairMinigame>(0LL, (const std::shared_ptr<FleurFairMinigame> *)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "isMinigameOpen",
          1256);
        v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v14,
               (const char (*)[49])"[FLEUR_FAIR] minigame_ptr is null, minigame_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v14);
        v6 = 0;
      }
      else
      {
        v10 = std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FleurFairMinigame,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LOBYTE(v11) = FleurFairMinigame::getIsOpen(v10);
        v6 = v11;
      }
      std::shared_ptr<FleurFairMinigame>::~shared_ptr((std::shared_ptr<FleurFairMinigame> *const)(v2 + 96));
    }
  }
  result = v6;
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
  return result;
};

// Line 1263: range 000000001506396A-00000000150645B6
int32_t __cdecl FleurFairActivity::initDungeonParam(FleurFairActivity *const this, FleurFairDungeonParam *param)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t activity_id; // ecx
  uint32_t schedule_id; // ecx
  const ActivityFleurFairExcelConfigMgr *p_activity_fleur_fair_config_mgr; // rdi
  uint32_t v9; // edx
  const ActivityFleurFairExcelConfigMgr *p_activity_id; // rdi
  uint32_t v11; // edx
  int v12; // r15d
  std::vector<unsigned int>::reference v13; // rdx
  int v14; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  uint32_t v17; // ecx
  const ActivityFleurFairExcelConfigMgr *v18; // rdi
  uint32_t v19; // edx
  common::milog::MiLogStream *v20; // rax
  uint32_t success_reward_id; // ecx
  uint32_t energy_limit; // ecx
  uint32_t initial_energy; // ecx
  int32_t result; // eax
  std::vector<std::map<unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+28h] [rbp-148h] BYREF
  std::vector<std::map<unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+30h] [rbp-140h] BYREF
  const std::vector<std::map<unsigned int,unsigned int>> *gallery_weight_vec_ptr; // [rsp+38h] [rbp-138h]
  const std::vector<std::map<unsigned int,unsigned int>> *gallery_weight_vec; // [rsp+40h] [rbp-130h]
  const std::vector<std::map<unsigned int,unsigned int>> *__for_range; // [rsp+48h] [rbp-128h]
  const std::map<unsigned int,std::vector<unsigned int>> *ability_group_map_ptr; // [rsp+50h] [rbp-120h]
  const std::map<unsigned int,std::vector<unsigned int>> *ability_group_map; // [rsp+58h] [rbp-118h]
  const std::map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+60h] [rbp-110h]
  const data::FleurFairDungeonExcelConfig *dungeon_section_config_ptr; // [rsp+68h] [rbp-108h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v35; // [rsp+70h] [rbp-100h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *energy_grade; // [rsp+78h] [rbp-F8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *ability_group_id_vec; // [rsp+80h] [rbp-F0h]
  const std::map<unsigned int,unsigned int> *gallery_weight_map; // [rsp+88h] [rbp-E8h]
  std::shared_ptr<Config> v39; // [rsp+90h] [rbp-E0h] BYREF
  common::milog::MiLogStream v40; // [rsp+A0h] [rbp-D0h] BYREF
  char v41[176]; // [rsp+C0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 section_id:1269 48 4 15 gallery_id:1279 64 24 12 tmp_vec:1306";
  *(_QWORD *)(v3 + 16) = FleurFairActivity::initDungeonParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  activity_id = this->activity_id_;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(param);
  }
  param->activity_id = activity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  schedule_id = this->schedule_id_;
  if ( *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&param->schedule_id);
  }
  param->schedule_id = schedule_id;
  *(_DWORD *)(v3 + 32) = FleurFairActivity::getLastestDungeonSectionId(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  p_activity_fleur_fair_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
  v9 = *(_DWORD *)(v3 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_activity_fleur_fair_config_mgr = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
    __asan_report_load4();
  }
  gallery_weight_vec_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonGalleryWeightVec(
                             p_activity_fleur_fair_config_mgr,
                             this->activity_id_,
                             v9);
  std::shared_ptr<Config>::~shared_ptr(&v39);
  if ( gallery_weight_vec_ptr )
  {
    gallery_weight_vec = gallery_weight_vec_ptr;
    __for_range = gallery_weight_vec_ptr;
    __for_begin._M_current = std::vector<std::map<unsigned int,unsigned int>>::begin(gallery_weight_vec_ptr)._M_current;
    __for_end._M_current = std::vector<std::map<unsigned int,unsigned int>>::end(gallery_weight_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<std::map<unsigned int,unsigned int> const*,std::vector<std::map<unsigned int,unsigned int>>>(
              &__for_begin,
              &__for_end) )
    {
      gallery_weight_map = __gnu_cxx::__normal_iterator<std::map<unsigned int,unsigned int> const*,std::vector<std::map<unsigned int,unsigned int>>>::operator*(&__for_begin);
      *(_DWORD *)(v3 + 48) = 0;
      common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
        gallery_weight_map,
        (unsigned int *)(v3 + 48),
        0);
      if ( !*(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "initDungeonParam",
          1283);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v40,
          (const char (*)[36])"[FLEUR_FAIR] weightSelectOne failed");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v2 = -1;
        goto LABEL_57;
      }
      std::vector<unsigned int>::push_back(
        &param->gallery_id_vec,
        (const std::vector<unsigned int>::value_type *)(v3 + 48));
      __gnu_cxx::__normal_iterator<std::map<unsigned int,unsigned int> const*,std::vector<std::map<unsigned int,unsigned int>>>::operator++(&__for_begin);
    }
    if ( !std::vector<unsigned int>::empty(&this->gm_dungeon_gallery_id_vec) )
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "initDungeonParam",
        1291);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        &v40,
        (const char (*)[51])"[FLEUR_FAIR] gm_dungeon_gallery_id_vec take effect");
      common::milog::MiLogStream::~MiLogStream(&v40);
      std::vector<unsigned int>::operator=(&param->gallery_id_vec, &this->gm_dungeon_gallery_id_vec);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    p_activity_id = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
    v11 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      p_activity_id = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
      __asan_report_load4();
    }
    ability_group_map_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonAbilityGroupMap(
                              p_activity_id,
                              this->activity_id_,
                              v11);
    std::shared_ptr<Config>::~shared_ptr(&v39);
    if ( ability_group_map_ptr )
    {
      ability_group_map = ability_group_map_ptr;
      __for_range_0 = ability_group_map_ptr;
      __for_begin._M_current = (const std::map<unsigned int,unsigned int> *)std::map<unsigned int,std::vector<unsigned int>>::begin(ability_group_map_ptr)._M_node;
      __for_end._M_current = (const std::map<unsigned int,unsigned int> *)std::map<unsigned int,std::vector<unsigned int>>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > >::_Self *)&__for_end) )
      {
        v35 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
        energy_grade = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v35);
        ability_group_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v35);
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 64));
        common::tools::RandomUtils::randomSelect<unsigned int>(
          ability_group_id_vec,
          (std::vector<unsigned int> *)(v3 + 64),
          1u);
        if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/fleur_fair_activity.cpp",
            "initDungeonParam",
            1310);
          common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
            &v40,
            (const char (*)[54])"[FLEUR_FAIR] ability_group_id_vec randomSelect failed");
          common::milog::MiLogStream::~MiLogStream(&v40);
          v2 = -1;
          v12 = 0;
        }
        else
        {
          v13 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 64), 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v14 = *v13;
          v15 = std::map<unsigned int,unsigned int>::operator[](&param->ability_group_id_map, energy_grade);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v15);
          }
          *v16 = v14;
          v12 = 1;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 64));
        if ( v12 != 1 )
          goto LABEL_57;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> > > *const)&__for_begin);
      }
      v17 = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&param->section_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&param->section_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&param->section_id);
      }
      param->section_id = v17;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v39);
      v18 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_fleur_fair_config_mgr;
      v19 = *(_DWORD *)(v3 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        v18 = (const ActivityFleurFairExcelConfigMgr *)&this->activity_id_;
        __asan_report_load4();
      }
      dungeon_section_config_ptr = ActivityFleurFairExcelConfigMgr::getFleurFairDungeonSectionConfig(
                                     v18,
                                     this->activity_id_,
                                     v19);
      std::shared_ptr<Config>::~shared_ptr(&v39);
      if ( dungeon_section_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->success_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->success_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        success_reward_id = dungeon_section_config_ptr->success_reward_id;
        if ( *(_BYTE *)(((unsigned __int64)&param->success_reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->success_reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&param->success_reward_id);
        }
        param->success_reward_id = success_reward_id;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->energy_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)dungeon_section_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->energy_limit >> 3)
                                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        energy_limit = dungeon_section_config_ptr->energy_limit;
        if ( *(_BYTE *)(((unsigned __int64)&param->energy_limit >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->energy_limit >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&param->energy_limit);
        }
        param->energy_limit = energy_limit;
        if ( *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->initial_energy >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&dungeon_section_config_ptr->initial_energy >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        initial_energy = dungeon_section_config_ptr->initial_energy;
        if ( *(_BYTE *)(((unsigned __int64)&param->initial_energy >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->initial_energy >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_store4(&param->initial_energy);
        }
        param->initial_energy = initial_energy;
        v2 = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/fleur_fair_activity.cpp",
          "initDungeonParam",
          1321);
        v20 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                &v40,
                (const char (*)[67])"[FLEUR_FAIR] getFleurFairDungeonSectionConfig failed, section_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v40);
        v2 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/fleur_fair_activity.cpp",
        "initDungeonParam",
        1300);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        &v40,
        (const char (*)[46])"[FLEUR_FAIR] ability_group_map_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v40);
      v2 = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/fleur_fair_activity.cpp",
      "initDungeonParam",
      1273);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      &v40,
      (const char (*)[47])"[FLEUR_FAIR] gallery_weight_vec_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v40);
    v2 = -1;
  }
LABEL_57:
  result = v2;
  if ( v41 == (char *)v3 )
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
