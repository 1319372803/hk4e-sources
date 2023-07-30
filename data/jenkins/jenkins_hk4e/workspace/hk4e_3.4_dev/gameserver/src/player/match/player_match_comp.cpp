// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/match/player_match_comp.cpp

// Line 47: range 0000000017D24058-0000000017D242BF
void __cdecl MatchInfo::reset(MatchInfo *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, this);
  }
  this->match_type = MATCH_TYPE_NONE;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->match_begin_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_begin_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store4(&this->match_begin_time, v2, v3);
  this->match_begin_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->estimate_match_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->estimate_match_cost_time, v2, &this->estimate_match_cost_time);
  }
  this->estimate_match_cost_time = 0;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dungeon_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->dungeon_id, v4, v5);
  this->dungeon_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->mp_play_id, v4, &this->mp_play_id);
  }
  this->mp_play_id = 0;
  v6 = (((_BYTE)this + 20) & 7u) + 3;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->mechanicus_difficult_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mechanicus_difficult_level >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->mechanicus_difficult_level, v6, v7);
  this->mechanicus_difficult_level = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->matchserver_id, v6, &this->matchserver_id);
  }
  this->matchserver_id = 0;
  v8 = (((_BYTE)this + 28) & 7u) + 3;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->last_sync_succ_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_sync_succ_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->last_sync_succ_time, v8, v9);
  this->last_sync_succ_time = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->match_id, v8, &this->match_id);
  }
  this->match_id = 0;
  std::vector<unsigned int>::clear(&this->match_param_vec);
};

// Line 61: range 0000000017D242C0-0000000017D243C0
void __cdecl MatchPunish::fromBin(MatchPunish *const this, const proto::MatchPunishBin *proto)
{
  uint32_t matched; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  const proto::MatchPunishBin *protoa; // [rsp+0h] [rbp-10h]

  protoa = proto;
  matched = proto::MatchPunishBin::match_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, proto, v4);
  this->match_id = matched;
  v5 = proto::MatchPunishBin::punish_times(protoa);
  v6 = *(_BYTE *)(((unsigned __int64)&this->punish_times >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->punish_times, proto, v7);
  this->punish_times = v5;
  v8 = proto::MatchPunishBin::punish_end_time(protoa);
  v9 = *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->punish_end_time, proto, v10);
  this->punish_end_time = v8;
};

// Line 68: range 0000000017D243C2-0000000017D244BF
void __cdecl MatchPunish::toBin(MatchPunish *const this, proto::MatchPunishBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::MatchPunishBin::set_match_id(proto, this->match_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->punish_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->punish_times);
  }
  proto::MatchPunishBin::set_punish_times(proto, this->punish_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->punish_end_time);
  }
  proto::MatchPunishBin::set_punish_end_time(proto, this->punish_end_time);
};

// Line 75: range 0000000017D244C0-0000000017D246D8
int32_t __cdecl PlayerMatchComp::fromBin(PlayerMatchComp *const this, const proto::PlayerDataBin *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const proto::MatchPunishBin *v5; // rax
  unsigned __int64 v6; // rax
  __int64 punish_refresh_time; // rdx
  char v8; // al
  int32_t result; // eax
  int32_t idx; // [rsp+14h] [rbp-6Ch]
  const proto::PlayerMatchCompBin *match_proto; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 15 match_punish:79";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  match_proto = proto::PlayerDataBin::match_bin(proto);
  for ( idx = 0; idx < proto::PlayerMatchCompBin::punish_list_size(match_proto); ++idx )
  {
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    v5 = proto::PlayerMatchCompBin::punish_list(match_proto, idx);
    MatchPunish::fromBin((MatchPunish *const)(v2 + 32), v5);
    v6 = (unsigned __int64)std::map<unsigned int,MatchPunish>::operator[](
                             &this->match_punish_map_,
                             (const std::map<unsigned int,MatchPunish>::key_type *)(v2 + 32));
    proto = (const proto::PlayerDataBin *)(((_DWORD)v6 + 11) & 7);
    if ( (char)(v6 & 7) >= *(_BYTE *)((v6 >> 3) + 0x7FFF8000) && *(_BYTE *)((v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((v6 + 11) >> 3) + 0x7FFF8000) != 0
      && (char)((v6 + 11) & 7) >= *(_BYTE *)(((v6 + 11) >> 3) + 0x7FFF8000) )
    {
      proto = (const proto::PlayerDataBin *)12;
      v6 = __asan_report_store_n(v6, 12LL);
    }
    *(_QWORD *)v6 = *(_QWORD *)(v2 + 32);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(v2 + 40);
  }
  punish_refresh_time = proto::PlayerMatchCompBin::last_punish_refresh_time(match_proto);
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(proto) = v8 != 0;
    __asan_report_store4(&this->last_punish_refresh_time_, proto, punish_refresh_time);
  }
  this->last_punish_refresh_time_ = punish_refresh_time;
  result = 0;
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

// Line 88: range 0000000017D246DA-0000000017D24839
int32_t __cdecl PlayerMatchComp::toBin(PlayerMatchComp *const this, proto::PlayerDataBin *proto)
{
  std::tuple_element<1,std::pair<unsigned int const,MatchPunish> >::type *matched; // rax
  proto::MatchPunishBin *v3; // rax
  std::map<unsigned int,MatchPunish>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,MatchPunish>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  proto::PlayerMatchCompBin *match_proto; // [rsp+28h] [rbp-28h]
  std::map<unsigned int,MatchPunish> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,MatchPunish> *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,MatchPunish> >::type *id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,MatchPunish> >::type *punish; // [rsp+48h] [rbp-8h]

  match_proto = proto::PlayerDataBin::mutable_match_bin(proto);
  __for_range = &this->match_punish_map_;
  __for_begin._M_node = std::map<unsigned int,MatchPunish>::begin(&this->match_punish_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,MatchPunish>::end(&this->match_punish_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,MatchPunish>(__in);
    matched = std::get<1ul,unsigned int const,MatchPunish>(__in);
    punish = matched;
    if ( *(_BYTE *)(((unsigned __int64)matched >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)matched & 7) + 3) >= *(_BYTE *)(((unsigned __int64)matched >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(matched);
    }
    if ( punish->match_id )
    {
      v3 = proto::PlayerMatchCompBin::add_punish_list(match_proto);
      MatchPunish::toBin(punish, v3);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_punish_refresh_time_);
  }
  proto::PlayerMatchCompBin::set_last_punish_refresh_time(match_proto, this->last_punish_refresh_time_);
  return 0;
};

// Line 103: range 0000000017D2483A-0000000017D24983
int32_t __cdecl PlayerMatchComp::onLogin(PlayerMatchComp *const this, bool is_new_player)
{
  common::milog::MiLogStream *v3; // rbx
  uint32_t Now; // edx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( !common::tools::MiTimer::isActive(&this->match_sync_timer_)
    && PlayerUnixTimer::startS(
         &this->match_sync_timer_,
         0xAu,
         1,
         "./src/player/match/player_match_comp.cpp",
         "onLogin",
         104) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onLogin",
      106);
    v3 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v7,
           (const char (*)[37])"match_sync_timer_ start failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return -1;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    PlayerMatchComp::refreshMatchPunish(this, Now);
    return 0;
  }
};

// Line 114: range 0000000017D24984-0000000017D249FE
int32_t __cdecl PlayerMatchComp::onLogout(PlayerMatchComp *const this)
{
  PlayerMpComp *MpComp; // rax

  if ( PlayerMatchComp::isInMatch(this) )
  {
    PlayerMatchComp::sendRemoveMatchUnitReq(this, MATCH_UNIT_REMOVE_OP_PLAYER_LOGOUT);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    PlayerMpComp::setMpSettingType(MpComp, MP_SETTING_ENTER_AFTER_APPLY, 1);
  }
  return 0;
};

// Line 125: range 0000000017D24A00-0000000017D24B91
int32_t __cdecl PlayerMatchComp::notifyAllData(PlayerMatchComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<proto::PlayerMatchInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v8[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:127";
  *(_QWORD *)(v1 + 16) = PlayerMatchComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerMatchInfoNotify>();
  v4 = std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  PlayerMatchComp::fillPlayerMatchInfoNotify(this, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerMatchInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PlayerMatchInfoNotify>::~shared_ptr((std::shared_ptr<proto::PlayerMatchInfoNotify> *const)(v1 + 32));
  result = 0;
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

// Line 135: range 0000000017D24B92-0000000017D2519E
// local variable allocation has failed, the output may be wrong!
void __fastcall PlayerMatchComp::clearMatchInfo(PlayerMatchComp *const this, proto::MatchReason reason)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerMpComp *MpComp; // rax
  PlayerMpPlayComp *MpPlayComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  int Now; // eax
  Player *v18; // r14
  std::string v19; // [rsp+0h] [rbp-150h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-110h] BYREF
  char v23[240]; // [rsp+60h] [rbp-F0h] BYREF

  v19._M_string_length = (std::string::size_type)this;
  HIDWORD(v19._M_dataplus._M_p) = reason;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:142 48 4 10 reason:134 64 16 11 log_ptr:160 96 64 18 log_match_info:145";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::clearMatchInfo;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = HIDWORD(v19._M_dataplus._M_p);
  if ( PlayerMatchComp::isInMatch((const PlayerMatchComp *const)v19._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "clearMatchInfo",
      141);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v22,
           (const char (*)[30])"[MATCH] clearMatchInfo, uid: ");
    if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *((_DWORD *)&v19._anon_0._M_allocated_capacity + 2) = Player::getUid(*(const Player *const *)(v19._M_string_length
                                                                                                + 24));
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v5,
           (const unsigned int *)&v19._anon_0._M_allocated_capacity + 2);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" ,reason: ");
    common::milog::MiLogStream::operator<<<proto::MatchReason,(proto::MatchReason*)0>(
      v7,
      (const proto::MatchReason *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(v19._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xB05u, v19);
    std::string::~string(&v22);
    if ( *(_BYTE *)(((v19._M_string_length + 48) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v19._M_string_length + 48) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v19._M_string_length + 48);
    }
    *((_DWORD *)&v19._anon_0._M_allocated_capacity + 3) = *(_DWORD *)(v19._M_string_length + 48);
    MatchInfo::MatchInfo((MatchInfo *const)(v2 + 96), (const MatchInfo *)(v19._M_string_length + 32));
    MatchInfo::reset((MatchInfo *const)(v19._M_string_length + 32));
    PlayerMatchComp::broadcastPlayerMatchStopNotify(
      (PlayerMatchComp *const)v19._M_string_length,
      *(proto::MatchReason *)(v2 + 48));
    if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(*(Player *const *)(v19._M_string_length + 24));
    PlayerMpComp::setMpSettingType(MpComp, MP_SETTING_ENTER_AFTER_APPLY, 1);
    if ( *((_DWORD *)&v19._anon_0._M_allocated_capacity + 3) && *(_DWORD *)(v2 + 48) != 1 )
    {
      if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpPlayComp = Player::getMpPlayComp(*(Player *const *)(v19._M_string_length + 24));
      PlayerMpPlayComp::onMatchCancel(MpPlayComp, *((uint32_t *)&v19._anon_0._M_allocated_capacity + 3));
    }
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMatchStop>();
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyMatchStop::set_match_type(v11, *(_DWORD *)(v2 + 96));
    switch ( *(_DWORD *)(v2 + 96) )
    {
      case 1:
        v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyMatchStop::set_target_id(v12, *(_DWORD *)(v2 + 108));
        break;
      case 2:
        v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyMatchStop::set_target_id(v13, *(_DWORD *)(v2 + 112));
        break;
      case 3:
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyMatchStop::set_target_id(v14, *(_DWORD *)(v2 + 116));
        break;
    }
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyMatchStop::set_reason(v15, *(_DWORD *)(v2 + 48));
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStop,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Now = common::tools::TimeUtils::getNow();
    proto_log::PlayerLogBodyMatchStop::set_cost_time(v16, Now - *(_DWORD *)(v2 + 100));
    if ( *(_BYTE *)(((v19._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(Player **)(v19._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMatchStop,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMatchStop> *)(v2 + 64));
    Player::printStatLog(v18, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyMatchStop>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMatchStop> *const)(v2 + 64));
    MatchInfo::~MatchInfo((MatchInfo *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 180: range 0000000017D251A0-0000000017D25237
void __cdecl PlayerMatchComp::onGuestPlayerJoinMp(PlayerMatchComp *const this, Player *player)
{
  uint32_t Uid; // ebx
  char v3; // al

  if ( !PlayerMatchComp::isInMatch(this) )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  if ( Uid == Player::getUid(player) )
LABEL_5:
    v3 = 1;
  else
    v3 = 0;
  if ( !v3 )
    PlayerMatchComp::sendMatchPlayerJoinNotify(this, player);
};

// Line 190: range 0000000017D25238-0000000017D252B9
void __cdecl PlayerMatchComp::onGuestPlayerLeaveMp(PlayerMatchComp *const this, uint32_t uid)
{
  char v2; // al

  if ( !PlayerMatchComp::isInMatch(this) )
    goto LABEL_5;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( uid == Player::getUid(this->player_) )
LABEL_5:
    v2 = 1;
  else
    v2 = 0;
  if ( !v2 )
    PlayerMatchComp::sendMatchPlayerQuitNotify(this, uid);
};

// Line 200: range 0000000017D252BA-0000000017D267A5
int32_t __cdecl PlayerMatchComp::onPlayerStartMatchReq(
        PlayerMatchComp *const this,
        const proto::PlayerStartMatchReq *proto)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  const google::protobuf::RepeatedField<unsigned int> *matched; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  PlayerMpComp *MpComp; // rax
  proto::PlayerStartMatchRsp *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  PlayerMpComp *v14; // rax
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // r14
  uint32_t v16; // eax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  PlayerDungeonComp *DungeonComp; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  common::milog::MiLogStream *v23; // r14
  PlayerActivityComp *ActivityComp; // r14
  uint32_t v25; // eax
  ChessActivity *v26; // r14
  uint32_t v27; // eax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  PlayerMechanicusComp *MechanicusComp; // r14
  uint32_t v33; // eax
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  proto::PlayerStartMatchRsp *v37; // rcx
  PlayerGCGComp *GCGComp; // r14
  proto::PlayerStartMatchRsp *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  proto::PlayerStartMatchRsp *v44; // rax
  proto::PlayerStartMatchRsp *v45; // r14
  proto::MatchType v46; // eax
  proto::PlayerStartMatchRsp *v47; // r14
  google::protobuf::uint32 v48; // eax
  proto::PlayerStartMatchRsp *v49; // r14
  google::protobuf::uint32 v50; // eax
  proto::PlayerStartMatchRsp *v51; // r14
  google::protobuf::uint32 v52; // eax
  proto::PlayerStartMatchRsp *v53; // r14
  google::protobuf::uint32 v54; // eax
  Player *player; // r14
  proto::MatchType v56; // esi
  int32_t result; // eax
  proto::MatchType Uid; // [rsp+10h] [rbp-190h] BYREF
  uint32_t match_target_id; // [rsp+14h] [rbp-18Ch]
  int32_t enter_activity_dungeon_ret; // [rsp+18h] [rbp-188h]
  uint32_t mp_block_end_time; // [rsp+1Ch] [rbp-184h]
  uint32_t match_id_0; // [rsp+20h] [rbp-180h]
  uint32_t match_id; // [rsp+24h] [rbp-17Ch]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+28h] [rbp-178h]
  std::vector<unsigned int> p_match_param_vec; // [rsp+30h] [rbp-170h] BYREF
  common::milog::MiLogStream v66; // [rsp+50h] [rbp-150h] BYREF
  std::string val; // [rsp+70h] [rbp-130h] BYREF
  char v68[272]; // [rsp+90h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 4 7 ret:202 48 4 18 mechanicus_ret:317 64 16 11 rsp_ptr:204 96 16 13 world_ptr:232 128 16 2"
                        "2 chess_activity_ptr:285 160 24 19 match_param_vec:205";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::onPlayerStartMatchReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  common::milog::MiLogStream::create(
    &v66,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onPlayerStartMatchReq",
    201);
  v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v66,
         (const char (*)[30])"[MATCH] PlayerStartMatchReq: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v66);
  *(_DWORD *)(v2 + 32) = 0;
  match_target_id = 0;
  common::tools::perf::make_shared<proto::PlayerStartMatchRsp>();
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
  matched = proto::PlayerStartMatchReq::match_param_list(proto);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(
    matched,
    (std::vector<unsigned int> *)(v2 + 160));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 128));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
  LOBYTE(v5) = FeatureSwitchMgr::isMpClosed(&v7->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
  if ( (_BYTE)v5 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerStartMatchReq",
      211);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)&val,
      (const char (*)[26])"[MATCH] mp feature closed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    *(_DWORD *)(v2 + 32) = 142;
    goto LABEL_88;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  mp_block_end_time = PlayerMpComp::getMpBlockEndTime(MpComp);
  if ( mp_block_end_time && mp_block_end_time > common::tools::TimeUtils::getNow() )
  {
    v10 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerStartMatchRsp::set_param(v10, mp_block_end_time);
    *(_DWORD *)(v2 + 32) = 1226;
    goto LABEL_88;
  }
  PlayerMatchComp::checkMatchAvailability((std::tuple<int,std::vector<unsigned int> > *)&val, this);
  std::tie<int,std::_Swallow_assign const>(
    (int *)(v2 + 128),
    (const std::_Swallow_assign *)(v2 + 32),
    (int *)&std::ignore,
    (const std::_Swallow_assign *)(v2 + 32));
  std::tuple<int &,std::_Swallow_assign const&>::operator=<int,std::vector<unsigned int>>(
    (std::tuple<int&,const std::_Swallow_assign&> *const)(v2 + 128),
    (std::tuple<int,std::vector<unsigned int> > *)&val);
  std::tuple<int,std::vector<unsigned int>>::~tuple((std::tuple<int,std::vector<unsigned int> > *const)&val);
  if ( !*(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 96));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 96))
      || (v12 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96)),
          World::isWorldFull(v12)) )
    {
      *(_DWORD *)(v2 + 32) = 1208;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = Player::getMpComp(this->player_);
      if ( PlayerMpComp::isAllowEnterPlayerFull(v14) )
      {
        *(_DWORD *)(v2 + 32) = 1213;
      }
      else
      {
        if ( proto::PlayerStartMatchReq::match_type(proto) != MATCH_TYPE_DUNGEON )
        {
          if ( proto::PlayerStartMatchReq::match_type(proto) == MATCH_TYPE_MECHANICUS )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MechanicusComp = Player::getMechanicusComp(this->player_);
            v33 = proto::PlayerStartMatchReq::mechanicus_difficult_level(proto);
            *(_DWORD *)(v2 + 48) = PlayerMechanicusComp::checkMatchDungeon(MechanicusComp, v33);
            if ( *(_DWORD *)(v2 + 48) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/match/player_match_comp.cpp",
                "onPlayerStartMatchReq",
                320);
              v34 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[19])"checkMatchDungeon ");
              Uid = proto::PlayerStartMatchReq::mechanicus_difficult_level(proto);
              v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v34,
                      (const unsigned int *)&Uid);
              v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])" fails:");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v36, (const int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 48);
            }
            else
            {
              match_target_id = proto::PlayerStartMatchReq::mechanicus_difficult_level(proto);
            }
          }
          else if ( proto::PlayerStartMatchReq::match_type(proto) == MATCH_TYPE_GENERAL )
          {
            match_id = proto::PlayerStartMatchReq::match_id(proto);
            v37 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            *(_DWORD *)(v2 + 32) = PlayerMatchComp::checkGeneralMatch(
                                     this,
                                     match_id,
                                     (const std::vector<unsigned int> *)(v2 + 160),
                                     v37);
            if ( !*(_DWORD *)(v2 + 32) )
              match_target_id = match_id;
          }
          else if ( proto::PlayerStartMatchReq::match_type(proto) == MATCH_TYPE_GCG )
          {
            match_id_0 = proto::PlayerStartMatchReq::match_id(proto);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            GCGComp = Player::getGCGComp(this->player_);
            v39 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            *(_DWORD *)(v2 + 32) = PlayerGCGComp::checkCanMatch(GCGComp, match_id_0, v39);
            if ( *(_DWORD *)(v2 + 32) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/match/player_match_comp.cpp",
                "onPlayerStartMatchReq",
                342);
              v40 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[26])"checkCanMatch fail. ret: ");
              common::milog::MiLogStream::operator<<<int,(int *)0>(v40, (const int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            }
            else
            {
              match_target_id = match_id_0;
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/match/player_match_comp.cpp",
              "onPlayerStartMatchReq",
              350);
            v41 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[37])"[MATCH] match type is invalid, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v2 + 48));
            v43 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v42,
                    (const char (*)[15])" ,match_type: ");
            Uid = proto::PlayerStartMatchReq::match_type(proto);
            common::milog::MiLogStream::operator<<<proto::MatchType,(proto::MatchType*)0>(v43, &Uid);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            *(_DWORD *)(v2 + 32) = -1;
          }
          goto LABEL_87;
        }
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 128));
        p_dungeon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->design_config.txt_config_mgr.dungeon_config_mgr;
        v16 = proto::PlayerStartMatchReq::dungeon_id(proto);
        dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, v16);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 128));
        if ( dungeon_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          DungeonComp = Player::getDungeonComp(this->player_);
          if ( PlayerDungeonComp::isCanMulEnter(DungeonComp, dungeon_config_ptr) )
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
              enter_activity_dungeon_ret = 0;
              if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4(&dungeon_config_ptr->type);
              }
              switch ( dungeon_config_ptr->type )
              {
                case DUNGEON_FLEUR_FAIR:
                case DUNGEON_BLITZ_RUSH:
                case DUNGEON_SUMMER_V2:
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  ActivityComp = Player::getActivityComp(this->player_);
                  v25 = proto::PlayerStartMatchReq::dungeon_id(proto);
                  enter_activity_dungeon_ret = PlayerActivityComp::checkEnterActivityDungeon(ActivityComp, v25);
                  break;
                case DUNGEON_CHESS:
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Player::getActivityComp(this->player_);
                  PlayerActivityComp::findOpenningActivity<ChessActivity>((PlayerActivityComp *const)(v2 + 128));
                  if ( std::operator==<ChessActivity>(0LL, (const std::shared_ptr<ChessActivity> *)(v2 + 128)) )
                  {
                    enter_activity_dungeon_ret = 860;
                  }
                  else
                  {
                    v26 = std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChessActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
                    v27 = proto::PlayerStartMatchReq::dungeon_id(proto);
                    enter_activity_dungeon_ret = ChessActivity::checkMatchDungeon(v26, v27);
                  }
                  std::shared_ptr<ChessActivity>::~shared_ptr((std::shared_ptr<ChessActivity> *const)(v2 + 128));
                  break;
                case DUNGEON_WIND_FIELD:
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)&val,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/match/player_match_comp.cpp",
                    "onPlayerStartMatchReq",
                    296);
                  v28 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                          (common::milog::MiLogStream *const)&val,
                          (const char (*)[52])"[WIND_FIELD] wind field dungeon cannot match, uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Uid = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v28,
                    (const unsigned int *)&Uid);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                  enter_activity_dungeon_ret = -1;
                  break;
                default:
                  break;
              }
              if ( enter_activity_dungeon_ret )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)&val,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/match/player_match_comp.cpp",
                  "onPlayerStartMatchReq",
                  307);
                v29 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                        (common::milog::MiLogStream *const)&val,
                        (const char (*)[40])"checkEnterActivityDungeon failed, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
                v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v29,
                        (const unsigned int *)(v2 + 48));
                v31 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                        v30,
                        (const char (*)[15])" ,dungeon_id: ");
                Uid = proto::PlayerStartMatchReq::dungeon_id(proto);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)&Uid);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
                *(_DWORD *)(v2 + 32) = enter_activity_dungeon_ret;
              }
              else
              {
                match_target_id = proto::PlayerStartMatchReq::dungeon_id(proto);
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&val,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/match/player_match_comp.cpp",
                "onPlayerStartMatchReq",
                267);
              v23 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      (common::milog::MiLogStream *const)&val,
                      (const char (*)[32])"[MATCH] level is too low, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)&Uid);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
              *(_DWORD *)(v2 + 32) = 1117;
            }
            goto LABEL_87;
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onPlayerStartMatchReq",
            259);
          v17 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[39])"[MATCH] multi enter unsupported, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onPlayerStartMatchReq",
            251);
          v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[45])"[MATCH] findDungeonExcelConfig failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" ,dungeon_id: ");
        Uid = proto::PlayerStartMatchReq::dungeon_id(proto);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)&Uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        *(_DWORD *)(v2 + 32) = -1;
      }
    }
LABEL_87:
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
    goto LABEL_88;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onPlayerStartMatchReq",
    228);
  v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[36])"[MATCH] match is unavailable, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)&Uid);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
LABEL_88:
  v44 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto::PlayerStartMatchRsp::set_retcode(v44, *(_DWORD *)(v2 + 32));
  v45 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v46 = proto::PlayerStartMatchReq::match_type(proto);
  proto::PlayerStartMatchRsp::set_match_type(v45, v46);
  v47 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v48 = proto::PlayerStartMatchReq::dungeon_id(proto);
  proto::PlayerStartMatchRsp::set_dungeon_id(v47, v48);
  v49 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v50 = proto::PlayerStartMatchReq::mp_play_id(proto);
  proto::PlayerStartMatchRsp::set_mp_play_id(v49, v50);
  v51 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v52 = proto::PlayerStartMatchReq::mechanicus_difficult_level(proto);
  proto::PlayerStartMatchRsp::set_mechanicus_difficult_level(v51, v52);
  v53 = std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerStartMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v54 = proto::PlayerStartMatchReq::match_id(proto);
  proto::PlayerStartMatchRsp::set_match_id(v53, v54);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerStartMatchRsp>((const std::shared_ptr<proto::PlayerStartMatchRsp> *)(v2 + 128));
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v2 + 128), 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 128));
  if ( !*(_DWORD *)(v2 + 32) )
  {
    std::vector<unsigned int>::vector(&p_match_param_vec, (const std::vector<unsigned int> *)(v2 + 160));
    v56 = proto::PlayerStartMatchReq::match_type(proto);
    PlayerMatchComp::startMatch(this, v56, match_target_id, &p_match_param_vec);
    std::vector<unsigned int>::~vector(&p_match_param_vec);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
  std::shared_ptr<proto::PlayerStartMatchRsp>::~shared_ptr((std::shared_ptr<proto::PlayerStartMatchRsp> *const)(v2 + 64));
  result = 0;
  if ( v68 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 375: range 0000000017D267A6-0000000017D282E9
__int64 __fastcall PlayerMatchComp::checkGeneralMatch(
        PlayerMatchComp *const this,
        uint32_t match_id,
        const std::vector<unsigned int> *match_param_vec,
        proto::PlayerStartMatchRsp *rsp_0)
{
  unsigned int v4; // r13d
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  common::milog::MiLogStream *v12; // r13
  int v13; // r15d
  HideAndSeekActivity *v14; // rax
  common::milog::MiLogStream *v15; // r13
  int v16; // r15d
  common::milog::MiLogStream *v17; // r13
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v18; // rax
  uint32_t *v19; // rdx
  std::__shared_ptr_access<BounceConjuringActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  _BOOL4 v21; // r15d
  int v22; // r15d
  common::milog::MiLogStream *v23; // rax
  std::vector<unsigned int>::const_reference v24; // rax
  _DWORD *v25; // rdx
  std::__shared_ptr_access<IslandPartyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  common::milog::MiLogStream *v27; // rax
  _BOOL4 v28; // r15d
  common::milog::MiLogStream *v29; // rax
  std::vector<unsigned int>::const_reference v30; // rax
  _DWORD *v31; // rdx
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  common::milog::MiLogStream *v33; // rax
  int v34; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  data::SceneType SceneType; // eax
  _BOOL4 v37; // r15d
  std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  common::milog::MiLogStream *v39; // r13
  std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  common::milog::MiLogStream *v41; // rax
  std::vector<unsigned int>::const_reference v42; // rax
  _DWORD *v43; // rdx
  BrickBreakerActivity *v44; // rax
  common::milog::MiLogStream *v45; // rax
  int v46; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  data::SceneType v48; // eax
  common::milog::MiLogStream *v49; // r13
  int v50; // r15d
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // rax
  __int64 result; // rax
  int ret; // [rsp+34h] [rbp-14Ch]
  uint32_t chapter_id; // [rsp+38h] [rbp-148h]
  uint32_t now; // [rsp+3Ch] [rbp-144h]
  uint32_t end_time; // [rsp+40h] [rbp-140h]
  uint32_t player_count; // [rsp+44h] [rbp-13Ch]
  const data::MatchExcelConfig *match_config_ptr; // [rsp+48h] [rbp-138h]
  common::milog::MiLogStream v63; // [rsp+50h] [rbp-130h] BYREF
  char v64[272]; // [rsp+70h] [rbp-110h] BYREF

  v5 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(224LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "5 48 4 12 stage_id:450 64 4 12 match_id:374 80 16 16 activity_ptr:494 112 16 13 world_ptr:559 14"
                        "4 48 18 meet_limit_set:584";
  *(_QWORD *)(v5 + 16) = PlayerMatchComp::checkGeneralMatch;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862723] = 62194;
  v7[536862724] = 62194;
  v7[536862726] = -202116109;
  *(_DWORD *)(v5 + 64) = match_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 112));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
  match_config_ptr = data::MatchExcelConfigMgrBase::findMatchExcelConfig(
                       &v8->design_config.txt_config_mgr.match_config_mgr,
                       *(_DWORD *)(v5 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 112));
  if ( !match_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v63,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "checkGeneralMatch",
      380);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v63, (const char (*)[10])"match_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v5 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v10,
            (const char (*)[23])" config not found uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v5 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream(&v63);
    v4 = -1;
    goto LABEL_136;
  }
  if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->match_sub_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->match_sub_type >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&match_config_ptr->match_sub_type);
  }
  switch ( match_config_ptr->match_sub_type )
  {
    case MATCH_SUB_TYPE_HIDE:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v5 + 112));
      if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v5 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/match/player_match_comp.cpp",
          "checkGeneralMatch",
          392);
        v12 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v63,
                (const char (*)[31])"activity is not opening, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v5 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = 860;
        v13 = 0;
      }
      else if ( !std::vector<unsigned int>::empty(match_param_vec) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "checkGeneralMatch",
          398);
        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
          &v63,
          (const char (*)[44])"hide and seek match_param_vec must be empty");
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = -1;
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
        if ( HideAndSeekActivity::canStartHideAndSeek(v14) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            403);
          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v63,
            (const char (*)[27])"canStartHideAndSeek failed");
          common::milog::MiLogStream::~MiLogStream(&v63);
          v4 = 1241;
          v13 = 0;
        }
        else
        {
          v13 = 1;
        }
      }
      std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v5 + 112));
      if ( v13 )
        goto LABEL_111;
      goto LABEL_136;
    case MATCH_SUB_TYPE_BOUNCE_CONJURING:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<BounceConjuringActivity>((PlayerActivityComp *const)(v5 + 112));
      if ( !std::operator==<BounceConjuringActivity>(0LL, (const std::shared_ptr<BounceConjuringActivity> *)(v5 + 112)) )
      {
        if ( std::vector<unsigned int>::size(match_param_vec) == 1 )
        {
          v18 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](match_param_vec, 0LL);
          v19 = v18;
          if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v18);
          }
          chapter_id = *v19;
          v20 = std::__shared_ptr_access<BounceConjuringActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BounceConjuringActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
          if ( BounceConjuringActivity::isChapterOpen(v20, chapter_id) )
          {
            v16 = 1;
            goto LABEL_41;
          }
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            425);
          v17 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v63,
                  (const char (*)[41])"bounce conjuring chapter not open, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            419);
          v17 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v63,
                  (const char (*)[53])"bounce conjuring match_param_vec size invalid, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        *(_DWORD *)(v5 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = -1;
        v16 = 0;
        goto LABEL_41;
      }
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/match/player_match_comp.cpp",
        "checkGeneralMatch",
        413);
      v15 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v63,
              (const char (*)[48])"bounce conjuring activity is not opening, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v5 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream(&v63);
      v4 = 860;
      v16 = 0;
LABEL_41:
      std::shared_ptr<BounceConjuringActivity>::~shared_ptr((std::shared_ptr<BounceConjuringActivity> *const)(v5 + 112));
      if ( v16 )
        goto LABEL_111;
LABEL_136:
      result = v4;
      if ( v64 == (char *)v5 )
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
    case MATCH_SUB_TYPE_ISLAND_PARTY:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<IslandPartyActivity>((PlayerActivityComp *const)(v5 + 80));
      if ( std::operator==<IslandPartyActivity>(0LL, (const std::shared_ptr<IslandPartyActivity> *)(v5 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "checkGeneralMatch",
          435);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          &v63,
          (const char (*)[37])"island party activity is not opening");
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = 860;
        v21 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 112));
        if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 112), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            441);
          common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v63,
            (const char (*)[20])"player not in scene");
          common::milog::MiLogStream::~MiLogStream(&v63);
          v4 = -1;
          v22 = 0;
        }
        else if ( std::vector<unsigned int>::size(match_param_vec) == 1 )
        {
          v24 = std::vector<unsigned int>::operator[](match_param_vec, 0LL);
          v25 = v24;
          if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v24);
          }
          *(_DWORD *)(v5 + 48) = *v25;
          v26 = std::__shared_ptr_access<IslandPartyActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<IslandPartyActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
          if ( !IslandPartyActivity::isStageOpen(v26, *(_DWORD *)(v5 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/match/player_match_comp.cpp",
              "checkGeneralMatch",
              453);
            v27 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v63,
                    (const char (*)[30])"stage is not open, stage_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v5 + 48));
            common::milog::MiLogStream::~MiLogStream(&v63);
            v4 = -1;
            v22 = 0;
          }
          else
          {
            v22 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            447);
          v23 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v63,
                  (const char (*)[47])"match_param_vec_size invalid, match_param_vec:");
          common::milog::MiLogStream::operator<<<unsigned int>(v23, match_param_vec);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v4 = -1;
          v22 = 0;
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 112));
        v21 = v22 != 0;
      }
      std::shared_ptr<IslandPartyActivity>::~shared_ptr((std::shared_ptr<IslandPartyActivity> *const)(v5 + 80));
      if ( v21 )
        goto LABEL_111;
      goto LABEL_136;
    case MATCH_SUB_TYPE_CHAR_AMUSEMENT:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<CharAmusementActivity>((PlayerActivityComp *const)(v5 + 80));
      if ( std::operator==<CharAmusementActivity>(0LL, (const std::shared_ptr<CharAmusementActivity> *)(v5 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "checkGeneralMatch",
          463);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v63,
          (const char (*)[34])"char amusement activity is closed");
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = 860;
        v28 = 0;
      }
      else if ( std::vector<unsigned int>::size(match_param_vec) == 1 )
      {
        v30 = std::vector<unsigned int>::operator[](match_param_vec, 0LL);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        *(_DWORD *)(v5 + 48) = *v31;
        v32 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        if ( !CharAmusementActivity::isOpenByStageId(v32, *(_DWORD *)(v5 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            475);
          v33 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v63,
                  (const char (*)[30])"stage is not open, stage_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v63);
          v4 = -1;
          v28 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 112));
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 112), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/match/player_match_comp.cpp",
              "checkGeneralMatch",
              481);
            common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v63, (const char (*)[18])off_2639FDA0);
            common::milog::MiLogStream::~MiLogStream(&v63);
            v4 = 522;
            v34 = 0;
          }
          else
          {
            v35 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
            SceneType = Scene::getSceneType(v35);
            if ( SceneExcelConfigMgr::isDungeonScene(SceneType) )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/match/player_match_comp.cpp",
                "checkGeneralMatch",
                487);
              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v63,
                (const char (*)[21])"player is in dungeon");
              common::milog::MiLogStream::~MiLogStream(&v63);
              v4 = 1565;
              v34 = 0;
            }
            else
            {
              v34 = 1;
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 112));
          v28 = v34 != 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "checkGeneralMatch",
          469);
        v29 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v63,
                (const char (*)[48])"match_param_vec_size invalid, match_param_vec: ");
        common::milog::MiLogStream::operator<<<unsigned int>(v29, match_param_vec);
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = -1;
        v28 = 0;
      }
      std::shared_ptr<CharAmusementActivity>::~shared_ptr((std::shared_ptr<CharAmusementActivity> *const)(v5 + 80));
      if ( v28 )
        goto LABEL_111;
      goto LABEL_136;
    case MATCH_SUB_TYPE_BRICK_BREAKER:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v5 + 80));
      if ( std::operator==<BrickBreakerActivity>(0LL, (const std::shared_ptr<BrickBreakerActivity> *)(v5 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "checkGeneralMatch",
          497);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v63, (const char (*)[19])"activity is closed");
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = 860;
        v37 = 0;
      }
      else
      {
        v38 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
        if ( BrickBreakerActivity::getCurLevelId(v38) )
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            503);
          v39 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v63,
                  (const char (*)[35])"cur_level_id_ != 0, cur_level_id_:");
          v40 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
          *(_DWORD *)(v5 + 48) = BrickBreakerActivity::getCurLevelId(v40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream(&v63);
          v4 = -1;
          v37 = 0;
        }
        else if ( std::vector<unsigned int>::size(match_param_vec) == 1 )
        {
          v42 = std::vector<unsigned int>::operator[](match_param_vec, 0LL);
          v43 = v42;
          if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v42);
          }
          *(_DWORD *)(v5 + 48) = *v43;
          v44 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 80));
          ret = BrickBreakerActivity::checkWorldLevelCanStart(v44, *(_DWORD *)(v5 + 48));
          if ( ret )
          {
            common::milog::MiLogStream::create(
              &v63,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/match/player_match_comp.cpp",
              "checkGeneralMatch",
              516);
            v45 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v63,
                    (const char (*)[41])"checkWorldLevelCanStart fail, level_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v5 + 48));
            common::milog::MiLogStream::~MiLogStream(&v63);
            v4 = ret;
            v37 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v5 + 112));
            if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v5 + 112), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/match/player_match_comp.cpp",
                "checkGeneralMatch",
                522);
              common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v63, (const char (*)[18])off_2639FDA0);
              common::milog::MiLogStream::~MiLogStream(&v63);
              v4 = 522;
              v46 = 0;
            }
            else
            {
              v47 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
              v48 = Scene::getSceneType(v47);
              if ( SceneExcelConfigMgr::isDungeonScene(v48) )
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/match/player_match_comp.cpp",
                  "checkGeneralMatch",
                  528);
                common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v63,
                  (const char (*)[21])"player is in dungeon");
                common::milog::MiLogStream::~MiLogStream(&v63);
                v4 = 1565;
                v46 = 0;
              }
              else
              {
                v46 = 1;
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v5 + 112));
            v37 = v46 != 0;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v63,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "checkGeneralMatch",
            509);
          v41 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v63,
                  (const char (*)[48])"match_param_vec_size invalid, match_param_vec: ");
          common::milog::MiLogStream::operator<<<unsigned int>(v41, match_param_vec);
          common::milog::MiLogStream::~MiLogStream(&v63);
          v4 = -1;
          v37 = 0;
        }
      }
      std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v5 + 80));
      if ( v37 )
        goto LABEL_111;
      goto LABEL_136;
    case MATCH_SUB_TYPE_LAN_V3_BOAT_GAME_MULTI:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getActivityComp(this->player_);
      PlayerActivityComp::findOpenningActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v5 + 112));
      if ( std::operator==<SeaLampV3Activity>(0LL, (const std::shared_ptr<SeaLampV3Activity> *)(v5 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v63,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/match/player_match_comp.cpp",
          "checkGeneralMatch",
          538);
        v49 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v63,
                (const char (*)[31])"activity is not opening, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v5 + 48) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v63);
        v4 = 860;
        v50 = 0;
      }
      else
      {
        v50 = 1;
      }
      std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v5 + 112));
      if ( v50 )
        goto LABEL_111;
      goto LABEL_136;
    default:
LABEL_111:
      now = common::tools::TimeUtils::getNow();
      end_time = PlayerMatchComp::getMatchPunishEndTime(this, *(_DWORD *)(v5 + 64));
      if ( now > end_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        if ( !PlayerMpComp::isAllowEnterPlayerEmpty(MpComp) )
        {
          v4 = 1216;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v5 + 112));
          if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v5 + 112)) )
          {
            v4 = 1204;
          }
          else
          {
            v52 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
            if ( PlayerWorld::isHasOtherPlayerPreEnter(v52) )
            {
              v4 = 1216;
            }
            else
            {
              v53 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 112));
              player_count = World::getPlayerCount(v53);
              if ( player_count <= 1 )
              {
                if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->max_player_num >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)match_config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->max_player_num >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4(&match_config_ptr->max_player_num);
                }
                if ( player_count <= match_config_ptr->max_player_num )
                {
                  if ( std::vector<unsigned int>::empty(&match_config_ptr->match_limit_list) )
                  {
                    v4 = 0;
                  }
                  else
                  {
                    std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 144));
                    PlayerMatchComp::getMeetMatchLimit(this, match_config_ptr, (std::set<unsigned int> *)(v5 + 144));
                    if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v5 + 144)) )
                      v4 = 1238;
                    else
                      v4 = 0;
                    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 144));
                  }
                }
                else
                {
                  v4 = 1237;
                }
              }
              else
              {
                v4 = 1202;
              }
            }
          }
          std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v5 + 112));
        }
      }
      else
      {
        proto::PlayerStartMatchRsp::set_punish_end_time(rsp_0, end_time);
        v4 = 1239;
      }
      goto LABEL_136;
  }
};

// Line 594: range 0000000017D282EA-0000000017D284DE
void __cdecl PlayerMatchComp::getMeetMatchLimit(
        PlayerMatchComp *const this,
        const data::MatchExcelConfig *match_config,
        std::set<unsigned int> *meet_limit_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  uint32_t v8; // esi
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 limit_id:597";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::getMeetMatchLimit;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  std::set<unsigned int>::clear(meet_limit_set);
  __for_range = &match_config->match_limit_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(&match_config->match_limit_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&match_config->match_limit_list)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
    v8 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&match_config->match_sub_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config->match_sub_type >> 3)
                                                                  + 0x7FFF8000) )
    {
      __asan_report_load4(&match_config->match_sub_type);
    }
    if ( PlayerMatchComp::isMeetMatchLimit(this, match_config->match_sub_type, v8) )
      std::set<unsigned int>::insert(meet_limit_set, (const std::set<unsigned int>::value_type *)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
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

// Line 607: range 0000000017D284E0-0000000017D28B51
__int64 __fastcall PlayerMatchComp::isMeetMatchLimit(
        PlayerMatchComp *const this,
        data::MatchSubType match_sub_type,
        uint32_t limit_id)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  bool isMatchLimitClosed; // r15
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int v16; // r15d
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  std::vector<data::MatchCond>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  std::vector<data::MatchCond>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  const data::MatchLimitExcelConfig *limit_config_ptr; // [rsp+38h] [rbp-C8h]
  const std::vector<data::MatchCond> *__for_range; // [rsp+40h] [rbp-C0h]
  const data::MatchCond *single_cond; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 12 limit_id:606 64 16 16 activity_ptr:623";
  *(_QWORD *)(v4 + 16) = PlayerMatchComp::isMeetMatchLimit;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = limit_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  limit_config_ptr = MatchExcelConfigMgr::findMatchLimitConfig(
                       &v7->design_config.txt_config_mgr.match_config_mgr,
                       *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( !limit_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "isMeetMatchLimit",
      611);
    v8 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v27,
           (const char (*)[23])"match limit config id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v9,
            (const char (*)[23])" config not found uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v3 = 0;
    goto LABEL_31;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  isMatchLimitClosed = FeatureSwitchMgr::isMatchLimitClosed(&v11->feature_switch_mgr, *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( isMatchLimitClosed )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "isMeetMatchLimit",
      616);
    v13 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            &v27,
            (const char (*)[48])"match limit feature switch is closed, limit_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])", uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( match_sub_type != MATCH_SUB_TYPE_HIDE )
    goto LABEL_25;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getActivityComp(this->player_);
  PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v4 + 64));
  if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "isMeetMatchLimit",
      626);
    v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v27,
            (const char (*)[31])"activity is not opening, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v3 = 0;
    v16 = 0;
  }
  else
  {
    v17 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( !HideAndSeekActivity::isMapOpen(v17, *(_DWORD *)(v4 + 48)) )
    {
      v3 = 0;
      v16 = 0;
    }
    else
    {
      v18 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( HideAndSeekActivity::isMapUnselected(v18, *(_DWORD *)(v4 + 48)) )
      {
        v3 = 0;
        v16 = 0;
      }
      else
      {
        v16 = 1;
      }
    }
  }
  std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v4 + 64));
  if ( v16 )
  {
LABEL_25:
    __for_range = &limit_config_ptr->cond;
    __for_begin._M_current = std::vector<data::MatchCond>::begin(&limit_config_ptr->cond)._M_current;
    __for_end._M_current = std::vector<data::MatchCond>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::MatchCond const*,std::vector<data::MatchCond>>(&__for_begin, &__for_end) )
    {
      single_cond = __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator*(&__for_begin);
      if ( !PlayerMatchComp::isMeetMatchCond(this, single_cond) )
      {
        v3 = 0;
        goto LABEL_31;
      }
      __gnu_cxx::__normal_iterator<data::MatchCond const*,std::vector<data::MatchCond>>::operator++(&__for_begin);
    }
    v3 = 1;
  }
LABEL_31:
  result = v3;
  if ( v28 == (char *)v4 )
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

// Line 653: range 0000000017D28B52-0000000017D28FEA
bool __cdecl PlayerMatchComp::isMeetMatchCond(PlayerMatchComp *const this, const data::MatchCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::MatchLimitType type; // eax
  bool isAreaUnlocked; // r14
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  Scene *v9; // rcx
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *matched; // rax
  common::milog::MiLogStream *v13; // r13
  bool result; // al
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 scene_ptr:662";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::isMeetMatchCond;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&cond->type);
  }
  type = cond->type;
  if ( type == MATCH_LIMIT_TYPE_QUEST_FINISH )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    QuestComp = Player::getQuestComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&cond->param);
    }
    isAreaUnlocked = PlayerQuestComp::getQuestState(QuestComp, cond->param) == QUEST_STATE_FINISHED;
  }
  else
  {
    if ( type > MATCH_LIMIT_TYPE_QUEST_FINISH )
      goto LABEL_27;
    if ( type == MATCH_LIMIT_TYPE_NONE )
    {
      isAreaUnlocked = 1;
      goto LABEL_30;
    }
    if ( type == MATCH_LIMIT_TYPE_MAP_UNLOCK )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/match/player_match_comp.cpp",
          "isMeetMatchCond",
          665);
        v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v16, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])" get cur scene failed");
        common::milog::MiLogStream::~MiLogStream(&v16);
        isAreaUnlocked = 0;
      }
      else
      {
        v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cond + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond->param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&cond->param);
        }
        isAreaUnlocked = Scene::isAreaUnlocked(v9, cond->param);
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
    }
    else
    {
LABEL_27:
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "isMeetMatchCond",
        676);
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v16,
              (const char (*)[19])"unknown cond type:");
      matched = common::milog::MiLogStream::operator<<<data::MatchLimitType,(data::MatchLimitType*)0>(v11, &cond->type);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(matched, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      isAreaUnlocked = 0;
    }
  }
LABEL_30:
  result = isAreaUnlocked;
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

// Line 684: range 0000000017D28FEC-0000000017D29485
void __cdecl PlayerMatchComp::startMatch(
        PlayerMatchComp *const this,
        proto::MatchType match_type,
        uint32_t match_target_id,
        std::vector<unsigned int> *p_match_param_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  bool isMpClosed; // r14
  PlayerMpComp *MpComp; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  unsigned __int64 v12; // rdx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  char v15; // al
  unsigned int val; // [rsp+28h] [rbp-C8h] BYREF
  proto::MatchIdentity expect_identity; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<unsigned int> v21; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 13 world_ptr:685";
  *(_QWORD *)(v4 + 16) = PlayerMatchComp::startMatch;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "startMatch",
      688);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v22,
           (const char (*)[33])"[MATCH] world_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    isMpClosed = FeatureSwitchMgr::isMpClosed(&v8->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( isMpClosed )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/match/player_match_comp.cpp",
        "startMatch",
        694);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        &v22,
        (const char (*)[26])"[MATCH] mp feature closed");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
      if ( match_type != MATCH_TYPE_GCG )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        PlayerMpComp::setMpSettingType(MpComp, MP_SETTING_ENTER_FREELY, 1);
      }
      expect_identity = MATCH_IDENTITY_NONE;
      if ( match_type != MATCH_TYPE_GENERAL )
      {
        v11 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = (unsigned __int64)(v11->_vptr_World + 23);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v12)(v11) )
          goto LABEL_25;
      }
      if ( match_type == MATCH_TYPE_GENERAL
        && (v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
            World::getPlayerCount(v13) > 1)
        || (v14 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32)),
            PlayerWorld::isHasOtherPlayerPreEnter(v14)) )
      {
LABEL_25:
        v15 = 1;
      }
      else
      {
        v15 = 0;
      }
      if ( v15 )
        expect_identity = MATCH_IDENTITY_HOST;
      std::vector<unsigned int>::vector(&v21, p_match_param_vec);
      PlayerMatchComp::sendAddMatchUnitReq(this, match_type, match_target_id, expect_identity, &v21);
      std::vector<unsigned int>::~vector(&v21);
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 32));
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 712: range 0000000017D29486-0000000017D29A90
int32_t __cdecl PlayerMatchComp::onPlayerCancelMatchReq(
        PlayerMatchComp *const this,
        const proto::PlayerCancelMatchReq *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  proto::MatchType matched; // ecx
  std::__shared_ptr_access<proto::PlayerCancelMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto::PlayerCancelMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  proto::MatchType v12; // eax
  Player *player; // r14
  int32_t result; // eax
  unsigned int Uid; // [rsp+18h] [rbp-C8h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  std::shared_ptr<proto::PlayerCancelMatchRsp> __r; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 rsp_ptr:743";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::onPlayerCancelMatchReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onPlayerCancelMatchReq",
    713);
  v5 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v18,
         (const char (*)[31])"[MATCH] PlayerCancelMatchReq: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v18);
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerCancelMatchReq",
      720);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[31])"[MATCH] not in my world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_19:
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    ret = -1;
    goto LABEL_20;
  }
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerCancelMatchReq",
      728);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    ret = 1563;
  }
  else
  {
    matched = proto::PlayerCancelMatchReq::match_type(proto);
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_);
    }
    if ( matched != this->match_info_.match_type )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "onPlayerCancelMatchReq",
        736);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[36])"[MATCH] match_type not equal, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_19;
    }
  }
LABEL_20:
  common::tools::perf::make_shared<proto::PlayerCancelMatchRsp>();
  v10 = std::__shared_ptr_access<proto::PlayerCancelMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerCancelMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  proto::PlayerCancelMatchRsp::set_retcode(v10, ret);
  v11 = std::__shared_ptr_access<proto::PlayerCancelMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerCancelMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  v12 = proto::PlayerCancelMatchReq::match_type(proto);
  proto::PlayerCancelMatchRsp::set_match_type(v11, v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerCancelMatchRsp>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  if ( !ret )
    PlayerMatchComp::cancelMatch(this);
  std::shared_ptr<proto::PlayerCancelMatchRsp>::~shared_ptr((std::shared_ptr<proto::PlayerCancelMatchRsp> *const)(v2 + 32));
  result = 0;
  if ( v20 == (char *)v2 )
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

// Line 757: range 0000000017D29A92-0000000017D29B69
void __cdecl PlayerMatchComp::cancelMatch(PlayerMatchComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "cancelMatch",
    758);
  v1 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v3, (const char (*)[17])"cancelMatch uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v3);
  PlayerMatchComp::sendRemoveMatchUnitReq(this, MATCH_UNIT_REMOVE_OP_PLAYER_CANCEL);
};

// Line 763: range 0000000017D29B6A-0000000017D2A6AC
int32_t __cdecl PlayerMatchComp::onPlayerConfirmMatchReq(
        PlayerMatchComp *const this,
        const proto::PlayerConfirmMatchReq *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  proto::MatchType matched; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  bool *p_is_client_data_version_not_latest_ban_mp; // rax
  char v12; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  char v14; // r15
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  proto::MatchType v20; // eax
  std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // r14
  bool is_agreed; // al
  std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  Player *player; // r14
  bool v25; // dl
  int32_t result; // eax
  unsigned int Uid; // [rsp+2Ch] [rbp-104h] BYREF
  std::shared_ptr<const google::protobuf::Message> v28; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-F0h] BYREF
  std::string val; // [rsp+60h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+80h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 ret:766 64 12 10 option:811 96 16 11 rsp_ptr:823";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::onPlayerConfirmMatchReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -202178560;
  common::milog::MiLogStream::create(
    &v29,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onPlayerConfirmMatchReq",
    764);
  v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v29,
         (const char (*)[32])"[MATCH] PlayerConfirmMatchReq: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v29);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerConfirmMatchReq",
      772);
    v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[38])"[MATCH] not in my world, player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    *(_DWORD *)(v2 + 48) = -1;
    goto LABEL_45;
  }
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerConfirmMatchReq",
      780);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    *(_DWORD *)(v2 + 48) = 1563;
  }
  else
  {
    matched = proto::PlayerConfirmMatchReq::match_type(proto);
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_);
    }
    if ( matched != this->match_info_.match_type )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "onPlayerConfirmMatchReq",
        788);
      v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[36])"[MATCH] match_type not equal, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_9;
    }
    if ( proto::PlayerConfirmMatchReq::match_type(proto) == MATCH_TYPE_GCG )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      if ( *(char *)(((unsigned __int64)&v13->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
        v13 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v13->is_client_data_version_not_latest_ban_gcg);
      if ( !v13->is_client_data_version_not_latest_ban_gcg )
        goto LABEL_38;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !Player::isClientDataVersionLatest(this->player_) )
        v14 = 1;
      else
LABEL_38:
        v14 = 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/match/player_match_comp.cpp",
          "onPlayerConfirmMatchReq",
          807);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[49])"[MATCH] player client_data_version is not latest");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        *(_DWORD *)(v2 + 48) = 12135;
      }
      else
      {
        *(_QWORD *)(v2 + 64) = 0LL;
        *(_DWORD *)(v2 + 72) = 0;
        *(_BYTE *)(v2 + 69) = 1;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GCGComp = Player::getGCGComp(this->player_);
        *(_DWORD *)(v2 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v2 + 64));
        if ( *(_DWORD *)(v2 + 48) )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/match/player_match_comp.cpp",
            "onPlayerConfirmMatchReq",
            816);
          v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v29,
                  (const char (*)[30])"checkCanEnterGame fail. ret: ");
          v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 48));
          GCGEnterCheckOption::getDesc[abi:cxx11](&val, (GCGEnterCheckOption *const)(v2 + 64));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &val);
          std::string::~string(&val);
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
      }
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28);
      p_is_client_data_version_not_latest_ban_mp = &v10->is_client_data_version_not_latest_ban_mp;
      if ( *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_client_data_version_not_latest_ban_mp & 7) >= *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3)
                                                                                         + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_client_data_version_not_latest_ban_mp);
      }
      if ( !v10->is_client_data_version_not_latest_ban_mp )
        goto LABEL_28;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !Player::isClientDataVersionLatest(this->player_) )
        v12 = 1;
      else
LABEL_28:
        v12 = 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
      if ( v12 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/match/player_match_comp.cpp",
          "onPlayerConfirmMatchReq",
          798);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[49])"[MATCH] player client_data_version is not latest");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        *(_DWORD *)(v2 + 48) = 12135;
      }
    }
  }
LABEL_45:
  common::tools::perf::make_shared<proto::PlayerConfirmMatchRsp>();
  v18 = std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto::PlayerConfirmMatchRsp::set_retcode(v18, *(_DWORD *)(v2 + 48));
  v19 = std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  v20 = proto::PlayerConfirmMatchReq::match_type(proto);
  proto::PlayerConfirmMatchRsp::set_match_type(v19, v20);
  v21 = std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  is_agreed = proto::PlayerConfirmMatchReq::is_agreed(proto);
  proto::PlayerConfirmMatchRsp::set_is_agreed(v21, is_agreed);
  v23 = std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerConfirmMatchRsp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.match_id);
  }
  proto::PlayerConfirmMatchRsp::set_match_id(v23, this->match_info_.match_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerConfirmMatchRsp>((const std::shared_ptr<proto::PlayerConfirmMatchRsp> *)&v28);
  Player::sendMessage(player, &v28, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v28);
  if ( !*(_DWORD *)(v2 + 48) )
  {
    v25 = proto::PlayerConfirmMatchReq::is_agreed(proto);
    PlayerMatchComp::sendConfirmGuestUnitReq(this, v25);
  }
  std::shared_ptr<proto::PlayerConfirmMatchRsp>::~shared_ptr((std::shared_ptr<proto::PlayerConfirmMatchRsp> *const)(v2 + 96));
  result = 0;
  if ( v31 == (char *)v2 )
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

// Line 839: range 0000000017D2A6AE-0000000017D2AB36
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl PlayerMatchComp::onPlayerMatchAgreedResultNotify(
        PlayerMatchComp *const this,
        const proto::PlayerMatchAgreedResultNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  int Now; // edi
  __int64 v7; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  google::protobuf::uint32 v10; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // r14
  int32_t result; // eax
  std::string protoa; // [rsp+0h] [rbp-100h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  std::string val; // [rsp+50h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+70h] [rbp-90h] BYREF

  protoa._M_string_length = (std::string::size_type)this;
  protoa._M_dataplus._M_p = (std::string::pointer)proto;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:850 64 16 11 log_ptr:851";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::onPlayerMatchAgreedResultNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onPlayerMatchAgreedResultNotify",
    841);
  v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v18,
         (const char (*)[40])"[MATCH] PlayerMatchAgreedResultNotify: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)protoa._M_dataplus._M_p);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( *(_BYTE *)(((protoa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(
    *(Player *const *)(protoa._M_string_length + 24),
    (const google::protobuf::Message *)protoa._M_dataplus._M_p);
  if ( proto::PlayerMatchAgreedResultNotify::match_type((const proto::PlayerMatchAgreedResultNotify *const)protoa._M_dataplus._M_p) == MATCH_TYPE_GENERAL )
  {
    Now = common::tools::TimeUtils::getNow();
    v7 = (*(_BYTE *)(((protoa._M_string_length + 236) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((LOBYTE(protoa._M_string_length) - 20) & 7) + 3) >= *(_BYTE *)(((protoa._M_string_length + 236) >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
    {
      Now = LODWORD(protoa._M_string_length) + 236;
      __asan_report_store4(protoa._M_string_length + 236, ((LOBYTE(protoa._M_string_length) - 20) & 7u) + 3, v7);
    }
    *(_DWORD *)(protoa._M_string_length + 236) = Now;
  }
  if ( *(_BYTE *)(((protoa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(protoa._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&val, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0x70Bu, protoa);
  std::string::~string(&val);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyApplyResult>();
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  v10 = proto::PlayerMatchAgreedResultNotify::target_uid((const proto::PlayerMatchAgreedResultNotify *const)protoa._M_dataplus._M_p);
  proto_log::PlayerLogBodyApplyResult::set_target_uid(v9, v10);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyApplyResult::set_is_agreed(v11, 1u);
  v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyApplyResult::set_reason(v12, 3u);
  v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyApplyResult,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyApplyResult::set_request_source(v13, 2u);
  if ( *(_BYTE *)(((protoa._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v14 = *(Player **)(protoa._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyApplyResult,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&protoa._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyApplyResult> *)(v2 + 64));
  Player::printStatLog(v14, (MessagePtr *)&protoa._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&protoa._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyApplyResult>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyApplyResult> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = 0;
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
  return result;
};

// Line 861: range 0000000017D2AB38-0000000017D2BA44
int32_t __cdecl PlayerMatchComp::onPlayerApplyEnterMpAfterMatchAgreedNotify(
        PlayerMatchComp *const this,
        const proto::PlayerApplyEnterMpAfterMatchAgreedNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // r14
  proto::MatchType matched; // ecx
  google::protobuf::uint32 v9; // ecx
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v11; // r14
  PlayerMpComp *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t WorldLevel; // r14d
  const proto::OnlinePlayerInfo *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rdx
  bool *p_is_client_data_version_not_latest_ban_mp; // rax
  char v18; // r15
  uint32_t v19; // eax
  PlayerMpComp *v20; // r14
  const proto::OnlinePlayerInfo *v21; // rax
  uint32_t v22; // eax
  common::milog::MiLogStream *v23; // r14
  int32_t v24; // r14d
  common::minet::Packet *v25; // r14
  const proto::OnlinePlayerInfo *v26; // rax
  uint32_t v27; // eax
  common::minet::Packet *v28; // r14
  GameserverApp *v29; // rax
  uint32_t AppId; // eax
  NetworkMgrBase *v31; // r14
  uint32_t v32; // r8d
  int32_t result; // eax
  bool is_need_remove; // [rsp+27h] [rbp-E9h]
  unsigned int Uid; // [rsp+28h] [rbp-E8h] BYREF
  int32_t ret; // [rsp+2Ch] [rbp-E4h]
  std::shared_ptr<common::minet::Packet> v37; // [rsp+30h] [rbp-E0h] BYREF
  std::string val; // [rsp+40h] [rbp-D0h] BYREF
  char v39[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 packet_ptr:953 64 32 10 notify:936";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::onPlayerApplyEnterMpAfterMatchAgreedNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v2 + 64),
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onPlayerApplyEnterMpAfterMatchAgreedNotify",
    862);
  v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
         (common::milog::MiLogStream *const)(v2 + 64),
         (const char (*)[51])"[MATCH] PlayerApplyEnterMpAfterMatchAgreedNotify: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
  is_need_remove = 0;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerApplyEnterMpAfterMatchAgreedNotify",
      871);
    v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[31])"[MATCH] not in my world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_43:
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    ret = -1;
    goto LABEL_54;
  }
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerApplyEnterMpAfterMatchAgreedNotify",
      879);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_43;
  }
  matched = proto::PlayerApplyEnterMpAfterMatchAgreedNotify::match_type(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  if ( matched != this->match_info_.match_type )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerApplyEnterMpAfterMatchAgreedNotify",
      887);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[36])"[MATCH] match_type not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_43;
  }
  v9 = proto::PlayerApplyEnterMpAfterMatchAgreedNotify::matchserver_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.matchserver_id);
  }
  if ( v9 != this->match_info_.matchserver_id )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerApplyEnterMpAfterMatchAgreedNotify",
      895);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[40])"[MATCH] matchserver_id not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::checkMpSceneEnterable(MpComp, 0) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerApplyEnterMpAfterMatchAgreedNotify",
      903);
    v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[41])"[MATCH] mp scene is not enterable, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    is_need_remove = 1;
    ret = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v12 = Player::getMpComp(this->player_);
    if ( PlayerMpComp::isAllowEnterPlayerFull(v12) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "onPlayerApplyEnterMpAfterMatchAgreedNotify",
        912);
      v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[38])"[MATCH] allow enter player full, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_43;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    WorldLevel = PlayerBasicComp::getWorldLevel(BasicComp);
    v15 = proto::PlayerApplyEnterMpAfterMatchAgreedNotify::src_player_info(proto);
    if ( WorldLevel > proto::OnlinePlayerInfo::world_level(v15) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "onPlayerApplyEnterMpAfterMatchAgreedNotify",
        920);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[41])"[MATCH] guest world level is lower, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_43;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
    p_is_client_data_version_not_latest_ban_mp = &v16->is_client_data_version_not_latest_ban_mp;
    if ( *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_client_data_version_not_latest_ban_mp & 7) >= *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3)
                                                                                       + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_client_data_version_not_latest_ban_mp);
    }
    if ( !v16->is_client_data_version_not_latest_ban_mp )
      goto LABEL_51;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Player::isClientDataVersionLatest(this->player_) )
      v18 = 1;
    else
LABEL_51:
      v18 = 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
    if ( v18 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/match/player_match_comp.cpp",
        "onPlayerApplyEnterMpAfterMatchAgreedNotify",
        928);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[39])"[MATCH] client_data_version not latest");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      is_need_remove = 1;
      ret = 1231;
    }
  }
LABEL_54:
  proto::PlayerMatchAgreedResultNotify::PlayerMatchAgreedResultNotify((proto::PlayerMatchAgreedResultNotify *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v19 = Player::getUid(this->player_);
  proto::PlayerMatchAgreedResultNotify::set_target_uid((proto::PlayerMatchAgreedResultNotify *const)(v2 + 64), v19);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  proto::PlayerMatchAgreedResultNotify::set_match_type(
    (proto::PlayerMatchAgreedResultNotify *const)(v2 + 64),
    this->match_info_.match_type);
  if ( ret )
  {
    if ( ret == 1231 )
      proto::PlayerMatchAgreedResultNotify::set_reason(
        (proto::PlayerMatchAgreedResultNotify *const)(v2 + 64),
        PlayerMatchAgreedResultNotify_Reason_OTHER_DATA_VERSION_NOT_LATEST);
    else
      proto::PlayerMatchAgreedResultNotify::set_reason(
        (proto::PlayerMatchAgreedResultNotify *const)(v2 + 64),
        PlayerMatchAgreedResultNotify_Reason_TARGET_SCENE_CANNOT_ENTER);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v20 = Player::getMpComp(this->player_);
    v21 = proto::PlayerApplyEnterMpAfterMatchAgreedNotify::src_player_info(proto);
    v22 = proto::OnlinePlayerInfo::uid(v21);
    PlayerMpComp::setEnterAllowPlayerUid(v20, v22);
    proto::PlayerMatchAgreedResultNotify::set_reason(
      (proto::PlayerMatchAgreedResultNotify *const)(v2 + 64),
      PlayerMatchAgreedResultNotify_Reason_SUCC);
  }
  common::minet::PacketUtils::createPacket<proto::PlayerMatchAgreedResultNotify>((const proto::PlayerMatchAgreedResultNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onPlayerApplyEnterMpAfterMatchAgreedNotify",
      956);
    v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[26])"createPacket failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v24 = -1;
  }
  else
  {
    v25 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v26 = proto::PlayerApplyEnterMpAfterMatchAgreedNotify::src_player_info(proto);
    v27 = proto::OnlinePlayerInfo::uid(v26);
    common::minet::Packet::setUserId(v25, v27);
    v28 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v29 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v29);
    common::minet::Packet::setSource(v28, 3u, AppId);
    v31 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    std::shared_ptr<common::minet::Packet>::shared_ptr(&v37, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
    NetworkMgrBase::sendPacketToTargetService(v31, (common::minet::PacketPtr)__PAIR128__(3LL, &v37), 0, v32);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&v37);
    if ( !ret )
      PlayerMatchComp::onHostUnitMatchSucc(this);
    if ( is_need_remove )
      PlayerMatchComp::sendRemoveMatchUnitReq(this, MATCH_UNIT_REMOVE_OP_MP_UNAVAILABLE);
    v24 = 0;
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  proto::PlayerMatchAgreedResultNotify::~PlayerMatchAgreedResultNotify((proto::PlayerMatchAgreedResultNotify *const)(v2 + 64));
  result = v24;
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 977: range 0000000017D2BA46-0000000017D2BC0D
int32_t __cdecl PlayerMatchComp::onAddMatchUnitRsp(PlayerMatchComp *const this, const proto::AddMatchUnitRsp *proto)
{
  common::milog::MiLogStream *v2; // rbx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int Uid; // [rsp+1Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onAddMatchUnitRsp",
    978);
  v2 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v7,
         (const char (*)[26])"[MATCH] AddMatchUnitRsp: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    return 0;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/match/player_match_comp.cpp",
    "onAddMatchUnitRsp",
    982);
  v4 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         (common::milog::MiLogStream *const)&val,
         (const char (*)[31])"[MATCH] not in my world, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &Uid);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  return -1;
};

// Line 990: range 0000000017D2BC0E-0000000017D2BF10
int32_t __cdecl PlayerMatchComp::onRemoveMatchUnitRsp(
        PlayerMatchComp *const this,
        const proto::RemoveMatchUnitRsp *proto)
{
  common::milog::MiLogStream *v2; // rbx
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v4; // rbx
  uint32_t v6; // ebx
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  unsigned int v10; // [rsp+18h] [rbp-58h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v12,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onRemoveMatchUnitRsp",
    991);
  v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v12,
         (const char (*)[29])"[MATCH] RemoveMatchUnitRsp: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v12);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onRemoveMatchUnitRsp",
      995);
    v4 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[32])"[MATCH]] not in my world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getUid(this->player_);
    if ( v6 == proto::RemoveMatchUnitRsp::unit_id(proto) )
    {
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "onRemoveMatchUnitRsp",
        1001);
      v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[47])"[MATCH] uid and unit_id should be equal, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v10 = Player::getUid(this->player_);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &v10);
      v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" ,unit_id: ");
      Uid = proto::RemoveMatchUnitRsp::unit_id(proto);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &Uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      return -1;
    }
  }
};

// Line 1009: range 0000000017D2BF70-0000000017D2CE08
__int64 __fastcall PlayerMatchComp::onMatchStartNotify(
        PlayerMatchComp *const this,
        __int32 matchserver_id,
        const proto::MatchStartNotify *proto)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  PlayerBasicComp *BasicComp; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v11; // r14
  unsigned int v12; // r14d
  char *v13; // rsi
  common::milog::MiLogStream *v14; // r14
  __int64 matched; // rdx
  char v16; // al
  google::protobuf::uint32 v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rdx
  char v21; // al
  google::protobuf::uint32 v22; // ecx
  char v23; // dl
  __int64 v24; // rdx
  __int64 v25; // rdx
  char v26; // al
  uint32_t v27; // ecx
  char v28; // al
  __int64 v29; // rdx
  char v30; // al
  const google::protobuf::RepeatedField<unsigned int> *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t PlayerCount; // eax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // r14
  Player *player; // r14
  __int64 result; // rax
  std::string v46; // [rsp+0h] [rbp-140h]
  const proto::MatchStartNotify *protoa; // [rsp+8h] [rbp-138h]
  PlayerMatchComp *thisa; // [rsp+18h] [rbp-128h]
  unsigned int Uid; // [rsp+24h] [rbp-11Ch] BYREF
  std::tuple<unsigned int,unsigned int> mechanicus_tag; // [rsp+28h] [rbp-118h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v52; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v53; // [rsp+50h] [rbp-F0h] BYREF
  std::string val; // [rsp+70h] [rbp-D0h] BYREF
  char v55[176]; // [rsp+90h] [rbp-B0h] BYREF

  *(&v46._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v46._anon_0._M_allocated_capacity) = matchserver_id;
  v46._M_string_length = (std::string::size_type)proto;
  v3 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 11 holder:1011 48 4 19 matchserver_id:1008 64 16 14 world_ptr:1019 96 16 12 log_ptr:1049";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::onMatchStartNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = matchserver_id;
  common::milog::MiLogStream::create(
    &v53,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onMatchStartNotify",
    1010);
  v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v53,
         (const char (*)[25])"[MATCH] matchserver_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
  v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v7, (const char (*)[21])" ,MatchStartNotify: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, (google::protobuf::Message *)v46._M_string_length);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v53);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&val, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xB04u, v46);
  std::string::~string(&val);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(thisa->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(thisa->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 64));
    v13 = (char *)(v3 + 64);
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "onMatchStartNotify",
        1022);
      v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[33])"[MATCH] world_ptr is null, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &Uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v12 = -1;
      goto LABEL_75;
    }
    matched = (unsigned int)proto::MatchStartNotify::match_type(protoa);
    v16 = *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000);
    if ( v16 != 0 && v16 <= 3 )
    {
      LOBYTE(v13) = v16 != 0;
      __asan_report_store4(&thisa->match_info_, v13, matched);
    }
    thisa->match_info_.match_type = matched;
    v17 = proto::MatchStartNotify::match_begin_time(protoa);
    v18 = *(_BYTE *)(((unsigned __int64)&thisa->match_info_.match_begin_time >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v18 != 0;
    v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)thisa + 36) & 7) + 3) >= v18);
    if ( (_BYTE)v19 )
      __asan_report_store4(&thisa->match_info_.match_begin_time, v13, v19);
    thisa->match_info_.match_begin_time = v17;
    v20 = proto::MatchStartNotify::estimate_match_cost_time(protoa);
    v21 = *(_BYTE *)(((unsigned __int64)&thisa->match_info_.estimate_match_cost_time >> 3) + 0x7FFF8000);
    if ( v21 != 0 && v21 <= 3 )
    {
      LOBYTE(v13) = v21 != 0;
      __asan_report_store4(&thisa->match_info_.estimate_match_cost_time, v13, v20);
    }
    thisa->match_info_.estimate_match_cost_time = v20;
    v22 = proto::MatchStartNotify::dungeon_id(protoa);
    v23 = *(_BYTE *)(((unsigned __int64)&thisa->match_info_.dungeon_id >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v23 != 0;
    v24 = (v23 != 0) & (unsigned __int8)((char)((((_BYTE)thisa + 44) & 7) + 3) >= v23);
    if ( (_BYTE)v24 )
      __asan_report_store4(&thisa->match_info_.dungeon_id, v13, v24);
    thisa->match_info_.dungeon_id = v22;
    v25 = proto::MatchStartNotify::mp_play_id(protoa);
    v26 = *(_BYTE *)(((unsigned __int64)&thisa->match_info_.mp_play_id >> 3) + 0x7FFF8000);
    if ( v26 != 0 && v26 <= 3 )
    {
      LOBYTE(v13) = v26 != 0;
      __asan_report_store4(&thisa->match_info_.mp_play_id, v13, v25);
    }
    thisa->match_info_.mp_play_id = v25;
    v27 = *(_DWORD *)(v3 + 48);
    v28 = *(_BYTE *)(((unsigned __int64)&thisa->match_info_.matchserver_id >> 3) + 0x7FFF8000);
    if ( v28 != 0 && v28 <= 3 )
    {
      LOBYTE(v13) = v28 != 0;
      __asan_report_store4(&thisa->match_info_.matchserver_id, v13, &thisa->match_info_.matchserver_id);
    }
    thisa->match_info_.matchserver_id = v27;
    v29 = proto::MatchStartNotify::match_id(protoa);
    v30 = *(_BYTE *)(((unsigned __int64)&thisa->match_info_.match_id >> 3) + 0x7FFF8000);
    if ( v30 != 0 && v30 <= 3 )
    {
      LOBYTE(v13) = v30 != 0;
      __asan_report_store4(&thisa->match_info_.match_id, v13, v29);
    }
    thisa->match_info_.match_id = v29;
    std::vector<unsigned int>::clear(&thisa->match_info_.match_param_vec);
    v31 = proto::MatchStartNotify::match_param_list(protoa);
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v31, &thisa->match_info_.match_param_vec);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->match_info_);
    }
    if ( thisa->match_info_.match_type == MATCH_TYPE_MECHANICUS )
    {
      proto::MatchStartNotify::mechanicus_tag(protoa);
      Hk4eUtils::parseMechanicusTag((uint32_t)&mechanicus_tag);
      std::tie<std::_Swallow_assign const,unsigned int>(
        (const std::_Swallow_assign *)&v52,
        (unsigned int *)&std::ignore,
        (const std::_Swallow_assign *)&thisa->match_info_.mechanicus_difficult_level,
        (unsigned int *)&std::ignore);
      std::tuple<std::_Swallow_assign const&,unsigned int &>::operator=<unsigned int,unsigned int>(
        (std::tuple<const std::_Swallow_assign&,unsigned int&> *const)&v52,
        &mechanicus_tag);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/match/player_match_comp.cpp",
        "onMatchStartNotify",
        1040);
      v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[13])"match start:");
      v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v32,
              &thisa->match_info_.mechanicus_difficult_level);
      v34 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v33, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &Uid);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    PlayerMatchComp::broadcastPlayerMatchInfoNotify(thisa);
    if ( proto::MatchStartNotify::is_rematch(protoa) )
    {
LABEL_74:
      v12 = 0;
LABEL_75:
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
      goto LABEL_76;
    }
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMatchStart>();
    v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->match_info_);
    }
    proto_log::PlayerLogBodyMatchStart::set_match_type(v35, thisa->match_info_.match_type);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->match_info_);
    }
    if ( thisa->match_info_.match_type == MATCH_TYPE_DUNGEON )
    {
      v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_.dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->match_info_.dungeon_id >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->match_info_.dungeon_id);
      }
      proto_log::PlayerLogBodyMatchStart::set_target_id(v36, thisa->match_info_.dungeon_id);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->match_info_);
      }
      if ( thisa->match_info_.match_type == MATCH_TYPE_MP_PLAY )
      {
        v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->match_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->match_info_.mp_play_id);
        }
        proto_log::PlayerLogBodyMatchStart::set_target_id(v37, thisa->match_info_.mp_play_id);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->match_info_);
        }
        if ( thisa->match_info_.match_type == MATCH_TYPE_MECHANICUS )
        {
          v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_.mechanicus_difficult_level >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)thisa + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->match_info_.mechanicus_difficult_level >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&thisa->match_info_.mechanicus_difficult_level);
          }
          proto_log::PlayerLogBodyMatchStart::set_target_id(v38, thisa->match_info_.mechanicus_difficult_level);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&thisa->match_info_);
          }
          if ( thisa->match_info_.match_type == MATCH_TYPE_GENERAL )
          {
            v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_.match_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisa->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&thisa->match_info_.match_id);
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisa->match_info_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&thisa->match_info_);
            }
            if ( thisa->match_info_.match_type != MATCH_TYPE_GCG )
              goto LABEL_71;
            v39 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&thisa->match_info_.match_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&thisa->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&thisa->match_info_.match_id);
            }
          }
          proto_log::PlayerLogBodyMatchStart::set_target_id(v39, thisa->match_info_.match_id);
        }
      }
    }
LABEL_71:
    v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    v41 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    PlayerCount = World::getPlayerCount(v41);
    proto_log::PlayerLogBodyMatchStart::set_player_count(v40, PlayerCount);
    v43 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    std::shared_ptr<proto_log::PlayerLogBodyMatchStart>::shared_ptr(
      (std::shared_ptr<proto_log::PlayerLogBodyMatchStart> *const)&v52,
      (const std::shared_ptr<proto_log::PlayerLogBodyMatchStart> *)(v3 + 96));
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMatchComp::onMatchStartNotify(unsigned int,proto::MatchStartNotify const&)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&val,
      (PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *)&v52);
    World::foreachPlayer(v43, (std::function<ForeachPolicy(Player&)> *)&val);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&val);
    PlayerMatchComp::onMatchStartNotify(unsigned int,proto::MatchStartNotify const&)::{lambda(Player &)#1}::~Player((PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *const)&v52);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v52, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMatchStart,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMatchStart> *)(v3 + 96));
    Player::printStatLog(player, &p_body_ptr, &v52, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v52);
    std::shared_ptr<proto_log::PlayerLogBodyMatchStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMatchStart> *const)(v3 + 96));
    goto LABEL_74;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/match/player_match_comp.cpp",
    "onMatchStartNotify",
    1015);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[31])"[MATCH] not in my world, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(thisa->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v12 = -1;
LABEL_76:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v12;
  if ( v55 == (char *)v3 )
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

// Line 1073: range 0000000017D2BF12-0000000017D2BF53
ForeachPolicy __cdecl PlayerMatchComp::onMatchStartNotify(unsigned int,proto::MatchStartNotify const&)::{lambda(Player &)#1}::operator()(
        const PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  uint32_t Uid; // eax

  v2 = std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMatchStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)__closure);
  Uid = Player::getUid(player);
  proto_log::PlayerLogBodyMatchStart::add_player_uid_list(v2, Uid);
  return 0;
};

// Line 1073: range 0000000017D53E1C-0000000017D53E41
void __cdecl PlayerMatchComp::onMatchStartNotify(unsigned int,proto::MatchStartNotify const&)::{lambda(Player &)#1}::Player(
        PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *const this,
        PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyMatchStart>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1073: range 0000000017D53F0C-0000000017D53F31
void __cdecl PlayerMatchComp::onMatchStartNotify(unsigned int,proto::MatchStartNotify const&)::{lambda(Player &)#1}::Player(
        PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *const this,
        const PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto_log::PlayerLogBodyMatchStart>::shared_ptr(&this->__log_ptr, &a2->__log_ptr);
};

// Line 1073: range 0000000017D2BF54-0000000017D2BF6E
void __cdecl PlayerMatchComp::onMatchStartNotify(unsigned int,proto::MatchStartNotify const&)::{lambda(Player &)#1}::~Player(
        PlayerMatchComp::onMatchStartNotify::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto_log::PlayerLogBodyMatchStart>::~shared_ptr(&this->__log_ptr);
};

// Line 1086: range 0000000017D2CE0A-0000000017D2D0FF
int32_t __cdecl PlayerMatchComp::onMatchUnitRemovedNotify(
        PlayerMatchComp *const this,
        uint32_t matchserver_id,
        const proto::MatchUnitRemovedNotify *proto)
{
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rbx
  proto::MatchType matched; // ecx
  proto::MatchReason v7; // edx
  unsigned int Uid; // [rsp+2Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-50h] BYREF
  std::string val; // [rsp+50h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onMatchUnitRemovedNotify",
    1087);
  v3 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
         &v10,
         (const char (*)[33])"[MATCH] MatchUnitRemovedNotify: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.matchserver_id);
  }
  if ( matchserver_id != this->match_info_.matchserver_id )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onMatchUnitRemovedNotify",
      1092);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[40])"[MATCH] matchserver_id not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_6:
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    return -1;
  }
  matched = proto::MatchUnitRemovedNotify::match_type(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  if ( matched != this->match_info_.match_type )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onMatchUnitRemovedNotify",
      1098);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[36])"[MATCH] match_type not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_6;
  }
  v7 = proto::MatchUnitRemovedNotify::reason(proto);
  PlayerMatchComp::clearMatchInfo(this, v7);
  return 0;
};

// Line 1108: range 0000000017D2D100-0000000017D2D8CD
int32_t __cdecl PlayerMatchComp::onGuestUnitMatchSuccNotify(
        PlayerMatchComp *const this,
        uint32_t matchserver_id,
        const proto::GuestUnitMatchSuccNotify *proto)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rbx
  google::protobuf::uint32 matched; // ecx
  int32_t v9; // r14d
  proto::PlayerMatchSuccNotify *v10; // rcx
  proto::PlayerMatchSuccNotify *v11; // r14
  google::protobuf::uint32 v12; // eax
  proto::PlayerMatchSuccNotify *v13; // r14
  google::protobuf::uint32 v14; // eax
  proto::PlayerMatchSuccNotify *v15; // rcx
  proto::PlayerMatchSuccNotify *v16; // rcx
  proto::PlayerMatchSuccNotify *v17; // rcx
  Player *player; // r14
  int32_t result; // eax
  unsigned int Uid; // [rsp+24h] [rbp-DCh] BYREF
  std::tuple_element<0,std::tuple<unsigned int,unsigned int> >::type *_; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::tuple<unsigned int> >::type *difficult_level; // [rsp+30h] [rbp-D0h]
  std::tuple<unsigned int,unsigned int> __t; // [rsp+38h] [rbp-C8h] BYREF
  std::shared_ptr<proto::PlayerMatchSuccNotify> __r; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  std::string val; // [rsp+70h] [rbp-90h] BYREF
  char v28[112]; // [rsp+90h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 notify_ptr:1129";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::onGuestUnitMatchSuccNotify;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onGuestUnitMatchSuccNotify",
    1109);
  v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v26,
         (const char (*)[35])"[MATCH] GuestUnitMatchSuccNotify: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onGuestUnitMatchSuccNotify",
      1112);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_19:
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v9 = -1;
    goto LABEL_33;
  }
  matched = proto::GuestUnitMatchSuccNotify::match_type(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  if ( matched != this->match_info_.match_type )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onGuestUnitMatchSuccNotify",
      1118);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[36])"[MATCH] match_type not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.matchserver_id);
  }
  if ( matchserver_id != this->match_info_.matchserver_id )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onGuestUnitMatchSuccNotify",
      1125);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[40])"[MATCH] matchserver_id not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_19;
  }
  common::tools::perf::make_shared<proto::PlayerMatchSuccNotify>();
  v10 = std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  proto::PlayerMatchSuccNotify::set_match_type(v10, this->match_info_.match_type);
  v11 = std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v12 = proto::GuestUnitMatchSuccNotify::confirm_end_time(proto);
  proto::PlayerMatchSuccNotify::set_confirm_end_time(v11, v12);
  v13 = std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v14 = proto::GuestUnitMatchSuccNotify::host_unit_id(proto);
  proto::PlayerMatchSuccNotify::set_host_uid(v13, v14);
  v15 = std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.dungeon_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_info_.dungeon_id);
  }
  proto::PlayerMatchSuccNotify::set_dungeon_id(v15, this->match_info_.dungeon_id);
  v16 = std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.mp_play_id);
  }
  proto::PlayerMatchSuccNotify::set_mp_play_id(v16, this->match_info_.mp_play_id);
  if ( proto::GuestUnitMatchSuccNotify::match_type(proto) == 3 )
  {
    proto::GuestUnitMatchSuccNotify::mechanicus_tag(proto);
    Hk4eUtils::parseMechanicusTag((uint32_t)&__t);
    _ = std::get<0ul,unsigned int,unsigned int>(&__t);
    difficult_level = std::get<1ul,unsigned int,unsigned int>(&__t);
    v17 = std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchSuccNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)difficult_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)difficult_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficult_level >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(difficult_level);
    }
    proto::PlayerMatchSuccNotify::set_mechanicus_difficult_level(v17, *difficult_level);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerMatchSuccNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  v9 = 0;
  std::shared_ptr<proto::PlayerMatchSuccNotify>::~shared_ptr((std::shared_ptr<proto::PlayerMatchSuccNotify> *const)(v3 + 32));
LABEL_33:
  result = v9;
  if ( v28 == (char *)v3 )
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

// Line 1147: range 0000000017D2D8CE-0000000017D2DB2C
int32_t __cdecl PlayerMatchComp::onConfirmGuestUnitRsp(
        PlayerMatchComp *const this,
        const proto::ConfirmGuestUnitRsp *proto)
{
  common::milog::MiLogStream *v2; // rbx
  bool v3; // al
  PlayerGCGComp *GCGComp; // rbx
  uint32_t matched; // eax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rbx
  unsigned int Uid; // [rsp+1Ch] [rbp-54h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onConfirmGuestUnitRsp",
    1148);
  v2 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
         &v10,
         (const char (*)[30])"[MATCH] ConfirmGuestUnitRsp: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  v3 = !proto::ConfirmGuestUnitRsp::retcode(proto) && !proto::ConfirmGuestUnitRsp::is_agreed(proto);
  if ( v3 && proto::ConfirmGuestUnitRsp::match_type(proto) == MATCH_TYPE_GCG )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GCGComp = Player::getGCGComp(this->player_);
    matched = proto::ConfirmGuestUnitRsp::match_id(proto);
    PlayerGCGComp::onMatchConfirmRefuse(GCGComp, matched);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    return 0;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/match/player_match_comp.cpp",
    "onConfirmGuestUnitRsp",
    1160);
  v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         (common::milog::MiLogStream *const)&val,
         (const char (*)[32])"[MATCH]] not in my world, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  return -1;
};

// Line 1168: range 0000000017D2DB2E-0000000017D2E1F7
int32_t __cdecl PlayerMatchComp::onGuestUnitAgreedResultNotify(
        PlayerMatchComp *const this,
        uint32_t matchserver_id,
        const proto::GuestUnitAgreedResultNotify *proto)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  uint32_t v7; // ecx
  int32_t v8; // r14d
  char v9; // r14
  char v10; // r15
  PlayerSceneComp *SceneComp; // rax
  PlayerSceneComp *v12; // rax
  uint32_t v13; // ecx
  proto::MatchType matched; // eax
  PlayerMpComp *MpComp; // r14
  proto::OnlinePlayerInfo *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::minet::Packet *v18; // r14
  uint32_t v19; // eax
  common::minet::Packet *v20; // r14
  GameserverApp *v21; // rax
  uint32_t AppId; // eax
  NetworkMgrBase *v23; // r14
  uint32_t v24; // r8d
  int32_t result; // eax
  char v26; // [rsp+17h] [rbp-149h]
  unsigned int Uid; // [rsp+3Ch] [rbp-124h] BYREF
  std::shared_ptr<Scene> __a; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-110h] BYREF
  std::string val; // [rsp+70h] [rbp-F0h] BYREF
  char v32[208]; // [rsp+90h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 16 15 packet_ptr:1190 80 40 11 notify:1186";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::onGuestUnitAgreedResultNotify;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onGuestUnitAgreedResultNotify",
    1169);
  v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v30,
         (const char (*)[38])"[MATCH] GuestUnitAgreedResultNotify: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v30);
  if ( proto::GuestUnitAgreedResultNotify::reason(proto) )
  {
    v7 = proto::GuestUnitAgreedResultNotify::host_unit_id(proto);
    PlayerMatchComp::notifyPlayerMatchAgreedResult(
      this,
      v7,
      PlayerMatchAgreedResultNotify_Reason_TARGET_SCENE_CANNOT_ENTER);
    v8 = 0;
  }
  else
  {
    v9 = 0;
    v10 = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = Player::getSceneComp(this->player_);
    if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)&__a);
    v9 = 1;
    if ( std::operator!=<Scene>(0LL, &__a) )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::checkMpModeAvailability((std::pair<int,std::vector<unsigned int> > *)&val, this->player_);
    v10 = 1;
    if ( LODWORD(val._M_dataplus._M_p)
      || (v12 = Player::getSceneComp(this->player_), PlayerSceneComp::isMyWorldInMpMode(v12)) )
    {
LABEL_16:
      v26 = 1;
    }
    else
    {
      v26 = 0;
    }
    if ( v10 )
      std::pair<int,std::vector<unsigned int>>::~pair((std::pair<int,std::vector<unsigned int> > *const)&val);
    if ( v9 )
      std::shared_ptr<Scene>::~shared_ptr(&__a);
    if ( v26 )
    {
      v13 = proto::GuestUnitAgreedResultNotify::host_unit_id(proto);
      PlayerMatchComp::notifyPlayerMatchAgreedResult(
        this,
        v13,
        PlayerMatchAgreedResultNotify_Reason_SELF_MP_UNAVAILABLE);
      v8 = 0;
    }
    else
    {
      proto::PlayerApplyEnterMpAfterMatchAgreedNotify::PlayerApplyEnterMpAfterMatchAgreedNotify((proto::PlayerApplyEnterMpAfterMatchAgreedNotify *const)(v3 + 80));
      matched = proto::GuestUnitAgreedResultNotify::match_type(proto);
      proto::PlayerApplyEnterMpAfterMatchAgreedNotify::set_match_type(
        (proto::PlayerApplyEnterMpAfterMatchAgreedNotify *const)(v3 + 80),
        matched);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpComp = Player::getMpComp(this->player_);
      v16 = proto::PlayerApplyEnterMpAfterMatchAgreedNotify::mutable_src_player_info((proto::PlayerApplyEnterMpAfterMatchAgreedNotify *const)(v3 + 80));
      PlayerMpComp::fillOnlinePlayerInfo(MpComp, v16);
      proto::PlayerApplyEnterMpAfterMatchAgreedNotify::set_matchserver_id(
        (proto::PlayerApplyEnterMpAfterMatchAgreedNotify *const)(v3 + 80),
        matchserver_id);
      common::minet::PacketUtils::createPacket<proto::PlayerApplyEnterMpAfterMatchAgreedNotify>((const proto::PlayerApplyEnterMpAfterMatchAgreedNotify *)(v3 + 48));
      if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "onGuestUnitAgreedResultNotify",
          1193);
        v17 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[26])"createPacket failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &Uid);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v8 = -1;
      }
      else
      {
        v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        v19 = proto::GuestUnitAgreedResultNotify::host_unit_id(proto);
        common::minet::Packet::setUserId(v18, v19);
        v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
        v21 = Singleton<GameserverApp>::instance();
        AppId = AppBase::getAppId((AppBase *const)v21);
        common::minet::Packet::setSource(v20, 3u, AppId);
        v23 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          (std::shared_ptr<common::minet::Packet> *const)&__a,
          (const std::shared_ptr<common::minet::Packet> *)(v3 + 48));
        NetworkMgrBase::sendPacketToTargetService(v23, (common::minet::PacketPtr)__PAIR128__(3LL, &__a), 0, v24);
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__a);
        v8 = 0;
      }
      std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 48));
      proto::PlayerApplyEnterMpAfterMatchAgreedNotify::~PlayerApplyEnterMpAfterMatchAgreedNotify((proto::PlayerApplyEnterMpAfterMatchAgreedNotify *const)(v3 + 80));
    }
  }
  result = v8;
  if ( v32 == (char *)v3 )
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

// Line 1204: range 0000000017D2E1F8-0000000017D2E284
int32_t __cdecl PlayerMatchComp::onSyncMatchUnitRsp(PlayerMatchComp *const this, const proto::SyncMatchUnitRsp *proto)
{
  uint32_t Now; // edi
  __int64 v4; // rdx

  if ( proto::SyncMatchUnitRsp::retcode(proto) )
  {
    PlayerMatchComp::clearMatchInfo(this, MATCH_SYSTEM_ERROR);
    return 0;
  }
  else
  {
    Now = common::tools::TimeUtils::getNow();
    v4 = (*(_BYTE *)(((unsigned __int64)&this->match_info_.last_sync_succ_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.last_sync_succ_time >> 3) + 0x7FFF8000));
    if ( (_BYTE)v4 )
    {
      Now = (_DWORD)this + 60;
      __asan_report_store4(&this->match_info_.last_sync_succ_time, (((_BYTE)this + 60) & 7u) + 3, v4);
    }
    this->match_info_.last_sync_succ_time = Now;
    return 0;
  }
};

// Line 1218: range 0000000017D2E286-0000000017D2EA9A
int32_t __cdecl PlayerMatchComp::onMatchIdentityNotify(
        PlayerMatchComp *const this,
        uint32_t matchserver_id,
        const proto::MatchIdentityNotify *proto)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v8; // r13
  proto::MatchType matched; // ecx
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // r14
  uint32_t MatchTargetId; // esi
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  int32_t result; // eax
  unsigned int Uid; // [rsp+28h] [rbp-B8h] BYREF
  uint32_t min_players; // [rsp+2Ch] [rbp-B4h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v20[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 world_ptr:1245";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::onMatchIdentityNotify;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onMatchIdentityNotify",
    1219);
  v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v18,
         (const char (*)[32])"[MATCH] onMatchIdentityNotify: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onMatchIdentityNotify",
      1222);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[32])"[MATCH]] not in my world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_25:
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v10 = -1;
    goto LABEL_39;
  }
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onMatchIdentityNotify",
      1228);
    v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  matched = proto::MatchIdentityNotify::match_type(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  if ( matched != this->match_info_.match_type )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onMatchIdentityNotify",
      1234);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[36])"[MATCH] match_type not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.matchserver_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.matchserver_id);
  }
  if ( matchserver_id != this->match_info_.matchserver_id )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onMatchIdentityNotify",
      1241);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)&val,
           (const char (*)[40])"[MATCH] matchserver_id not equal, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_25;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onMatchIdentityNotify",
      1248);
    v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[33])"[MATCH] world_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v10 = -1;
  }
  else
  {
    if ( proto::MatchIdentityNotify::match_identity(proto) == MATCH_IDENTITY_HOST )
    {
      MatchTargetId = PlayerMatchComp::getMatchTargetId(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_info_);
      }
      min_players = PlayerMatchComp::getMatchMinPlayers(this, this->match_info_.match_type, MatchTargetId);
      v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( min_players <= World::getPlayerCount(v13) )
        PlayerMatchComp::onHostUnitMatchSucc(this);
    }
    v10 = 0;
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 32));
LABEL_39:
  result = v10;
  if ( v20 == (char *)v3 )
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

// Line 1267: range 0000000017D2EA9C-0000000017D2ED25
void __cdecl PlayerMatchComp::fillPlayerMatchInfoNotify(
        PlayerMatchComp *const this,
        proto::PlayerMatchInfoNotify *notify)
{
  uint32_t Uid; // edx
  google::protobuf::RepeatedField<unsigned int> *matched; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::PlayerMatchInfoNotify::set_host_uid(notify, Uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  proto::PlayerMatchInfoNotify::set_match_type(notify, this->match_info_.match_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_begin_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.match_begin_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_info_.match_begin_time);
  }
  proto::PlayerMatchInfoNotify::set_match_begin_time(notify, this->match_info_.match_begin_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.estimate_match_cost_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.estimate_match_cost_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.estimate_match_cost_time);
  }
  proto::PlayerMatchInfoNotify::set_estimate_match_cost_time(notify, this->match_info_.estimate_match_cost_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.dungeon_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.dungeon_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_info_.dungeon_id);
  }
  proto::PlayerMatchInfoNotify::set_dungeon_id(notify, this->match_info_.dungeon_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.mp_play_id);
  }
  proto::PlayerMatchInfoNotify::set_mp_play_id(notify, this->match_info_.mp_play_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mechanicus_difficult_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.mechanicus_difficult_level >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->match_info_.mechanicus_difficult_level);
  }
  proto::PlayerMatchInfoNotify::set_mechanicus_difficult_level(notify, this->match_info_.mechanicus_difficult_level);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_.match_id);
  }
  proto::PlayerMatchInfoNotify::set_match_id(notify, this->match_info_.match_id);
  matched = proto::PlayerMatchInfoNotify::mutable_match_param_list(notify);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->match_info_.match_param_vec, matched);
};

// Line 1280: range 0000000017D2EE06-0000000017D2F223
void __cdecl PlayerMatchComp::broadcastPlayerMatchStopNotify(PlayerMatchComp *const this, proto::MatchReason reason)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<proto::PlayerMatchStopNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::PlayerMatchStopNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *player; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned int val; // [rsp+18h] [rbp-E8h] BYREF
  uint32_t host_uid; // [rsp+1Ch] [rbp-E4h]
  std::shared_ptr<proto::PlayerMatchStopNotify> __r; // [rsp+20h] [rbp-E0h] BYREF
  PlayerMatchComp::broadcastPlayerMatchStopNotify::<lambda(Player&)> v13; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 world_ptr:1282 64 16 15 notify_ptr:1291";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::broadcastPlayerMatchStopNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "broadcastPlayerMatchStopNotify",
      1285);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v14,
           (const char (*)[33])"[MATCH] world_ptr is null, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    host_uid = Player::getUid(this->player_);
    common::tools::perf::make_shared<proto::PlayerMatchStopNotify>();
    v6 = std::__shared_ptr_access<proto::PlayerMatchStopNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchStopNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerMatchStopNotify::set_host_uid(v6, host_uid);
    v7 = std::__shared_ptr_access<proto::PlayerMatchStopNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchStopNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto::PlayerMatchStopNotify::set_reason(v7, reason);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerMatchStopNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::shared_ptr<proto::PlayerMatchStopNotify>::shared_ptr(
      &v13.__notify_ptr,
      (const std::shared_ptr<proto::PlayerMatchStopNotify> *)(v2 + 64));
    v13.__host_uid = host_uid;
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMatchComp::broadcastPlayerMatchStopNotify(proto::MatchReason)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v14,
      &v13);
    World::foreachPlayer(v9, (std::function<ForeachPolicy(Player&)> *)&v14);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v14);
    PlayerMatchComp::broadcastPlayerMatchStopNotify(proto::MatchReason)::{lambda(Player &)#1}::~Player(&v13);
    std::shared_ptr<proto::PlayerMatchStopNotify>::~shared_ptr((std::shared_ptr<proto::PlayerMatchStopNotify> *const)(v2 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
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

// Line 1296: range 0000000017D2ED26-0000000017D2EDE9
ForeachPolicy __cdecl PlayerMatchComp::broadcastPlayerMatchStopNotify(proto::MatchReason)::{lambda(Player &)#1}::operator()(
        const PlayerMatchComp::broadcastPlayerMatchStopNotify::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t Uid; // ecx
  std::shared_ptr<proto::PlayerMatchStopNotify> __r; // [rsp+10h] [rbp-20h] BYREF

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__host_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__host_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__host_uid);
  }
  if ( Uid != __closure->__host_uid )
  {
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerMatchStopNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  return 0;
};

// Line 1296: range 0000000017D54024-0000000017D540BE
void __cdecl PlayerMatchComp::broadcastPlayerMatchStopNotify(proto::MatchReason)::{lambda(Player &)#1}::Player(
        PlayerMatchComp::broadcastPlayerMatchStopNotify::<lambda(Player&)> *const this,
        PlayerMatchComp::broadcastPlayerMatchStopNotify::<lambda(Player&)> *a2)
{
  uint32_t host_uid; // ecx
  char v3; // al

  std::shared_ptr<proto::PlayerMatchStopNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__host_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__host_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__host_uid);
  }
  host_uid = a2->__host_uid;
  v3 = *(_BYTE *)(((unsigned __int64)&this->__host_uid >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->__host_uid, a2, &this->__host_uid);
  }
  this->__host_uid = host_uid;
};

// Line 1296: range 0000000017D5418A-0000000017D54224
void __cdecl PlayerMatchComp::broadcastPlayerMatchStopNotify(proto::MatchReason)::{lambda(Player &)#1}::Player(
        PlayerMatchComp::broadcastPlayerMatchStopNotify::<lambda(Player&)> *const this,
        const PlayerMatchComp::broadcastPlayerMatchStopNotify::<lambda(Player&)> *a2)
{
  uint32_t host_uid; // ecx
  char v3; // al

  std::shared_ptr<proto::PlayerMatchStopNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&a2->__host_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&a2->__host_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&a2->__host_uid);
  }
  host_uid = a2->__host_uid;
  v3 = *(_BYTE *)(((unsigned __int64)&this->__host_uid >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(a2) = v3 != 0;
    __asan_report_store4(&this->__host_uid, a2, &this->__host_uid);
  }
  this->__host_uid = host_uid;
};

// Line 1296: range 0000000017D2EDEA-0000000017D2EE04
void __cdecl PlayerMatchComp::broadcastPlayerMatchStopNotify(proto::MatchReason)::{lambda(Player &)#1}::~Player(
        PlayerMatchComp::broadcastPlayerMatchStopNotify::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto::PlayerMatchStopNotify>::~shared_ptr(&this->__notify_ptr);
};

// Line 1307: range 0000000017D2F224-0000000017D2FA22
void __fastcall PlayerMatchComp::sendAddMatchUnitReq(
        PlayerMatchComp *const this,
        proto::MatchType match_type,
        uint32_t match_target_id,
        proto::MatchIdentity expect_identity,
        std::vector<unsigned int> *p_match_param_vec)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  common::milog::MiLogStream *v8; // rbx
  proto::MatchUnit *matched; // rax
  PlayerMechanicusComp *MechanicusComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v16; // rax
  unsigned int *v17; // rax
  uint32_t *v18; // rdx
  PlayerGCGComp *GCGComp; // rax
  GCGBasic *Basic; // r14
  proto::GCGDuelExtra *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+20h] [rbp-1B0h] BYREF
  uint32_t limit_id; // [rsp+24h] [rbp-1ACh]
  uint32_t mechanicus_id; // [rsp+28h] [rbp-1A8h]
  uint32_t mechanicus_tag; // [rsp+2Ch] [rbp-1A4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-1A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-198h] BYREF
  const data::MatchExcelConfig *match_config_ptr; // [rsp+40h] [rbp-190h]
  std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-188h]
  std::shared_ptr<Config> v34; // [rsp+50h] [rbp-180h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-170h] BYREF
  char v36[336]; // [rsp+80h] [rbp-150h] BYREF

  v5 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(288LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "4 48 4 15 match_type:1306 64 4 20 match_target_id:1306 80 48 14 limit_set:1341 160 88 8 req:1314";
  *(_QWORD *)(v5 + 16) = PlayerMatchComp::sendAddMatchUnitReq;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = 61956;
  v7[536862724] = -218959118;
  v7[536862727] = -218103808;
  v7[536862728] = -202116109;
  *(_DWORD *)(v5 + 48) = match_type;
  *(_DWORD *)(v5 + 64) = match_target_id;
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    proto::AddMatchUnitReq::AddMatchUnitReq((proto::AddMatchUnitReq *const)(v5 + 160));
    matched = proto::AddMatchUnitReq::mutable_match_unit((proto::AddMatchUnitReq *const)(v5 + 160));
    PlayerMatchComp::fillMatchUnit(this, matched);
    proto::AddMatchUnitReq::set_match_type((proto::AddMatchUnitReq *const)(v5 + 160), *(proto::MatchType *)(v5 + 48));
    proto::AddMatchUnitReq::set_expect_identity((proto::AddMatchUnitReq *const)(v5 + 160), expect_identity);
    switch ( *(_DWORD *)(v5 + 48) )
    {
      case 1:
        proto::AddMatchUnitReq::set_dungeon_id((proto::AddMatchUnitReq *const)(v5 + 160), *(_DWORD *)(v5 + 64));
        break;
      case 2:
        proto::AddMatchUnitReq::set_mp_play_id((proto::AddMatchUnitReq *const)(v5 + 160), *(_DWORD *)(v5 + 64));
        break;
      case 3:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MechanicusComp = Player::getMechanicusComp(this->player_);
        mechanicus_id = PlayerMechanicusComp::getCurMechanicusId(MechanicusComp);
        mechanicus_tag = Hk4eUtils::formatMechanicusTag(mechanicus_id, *(_DWORD *)(v5 + 64));
        proto::AddMatchUnitReq::set_mechanicus_tag((proto::AddMatchUnitReq *const)(v5 + 160), mechanicus_tag);
        break;
      case 4:
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        match_config_ptr = data::MatchExcelConfigMgrBase::findMatchExcelConfig(
                             &v11->design_config.txt_config_mgr.match_config_mgr,
                             *(_DWORD *)(v5 + 64));
        std::shared_ptr<Config>::~shared_ptr(&v34);
        if ( !match_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "sendAddMatchUnitReq",
            1338);
          v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v35, (const char (*)[10])"match_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v5 + 64));
          v14 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v13,
                  (const char (*)[23])" config not found uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
          common::milog::MiLogStream::~MiLogStream(&v35);
          goto LABEL_37;
        }
        M_current = std::vector<unsigned int>::end(p_match_param_vec)._M_current;
        v16._M_current = std::vector<unsigned int>::begin(p_match_param_vec)._M_current;
        std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
          (std::set<unsigned int> *const)(v5 + 80),
          v16,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
        if ( std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v5 + 80)) )
          PlayerMatchComp::getMeetMatchLimit(this, match_config_ptr, (std::set<unsigned int> *)(v5 + 80));
        proto::AddMatchUnitReq::set_match_id((proto::AddMatchUnitReq *const)(v5 + 160), *(_DWORD *)(v5 + 64));
        __for_range = (std::set<unsigned int> *)(v5 + 80);
        __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v5 + 80))._M_node;
        __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v5 + 80))._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v17 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
          v18 = v17;
          if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v17);
          }
          limit_id = *v18;
          proto::AddMatchUnitReq::add_match_param_list((proto::AddMatchUnitReq *const)(v5 + 160), limit_id);
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 80));
        break;
      case 5:
        proto::AddMatchUnitReq::set_match_id((proto::AddMatchUnitReq *const)(v5 + 160), *(_DWORD *)(v5 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GCGComp = Player::getGCGComp(this->player_);
        Basic = PlayerGCGComp::getBasic(GCGComp);
        v21 = proto::AddMatchUnitReq::mutable_gcg_duel_extra((proto::AddMatchUnitReq *const)(v5 + 160));
        GCGBasic::fillMatchDuelExtra(Basic, *(_DWORD *)(v5 + 64), v21);
        break;
      default:
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "sendAddMatchUnitReq",
          1359);
        v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v35,
                (const char (*)[29])"[MATCH] invalid match type: ");
        common::milog::MiLogStream::operator<<<proto::MatchType,(proto::MatchType*)0>(
          v22,
          (const proto::MatchType *)(v5 + 48));
        common::milog::MiLogStream::~MiLogStream(&v35);
LABEL_37:
        proto::AddMatchUnitReq::~AddMatchUnitReq((proto::AddMatchUnitReq *const)(v5 + 160));
        goto LABEL_38;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMatchComp::sendProtoToMatchService<proto::AddMatchUnitReq>(
      this->player_,
      (proto::AddMatchUnitReq *)(v5 + 160));
    goto LABEL_37;
  }
  common::milog::MiLogStream::create(
    &v35,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "sendAddMatchUnitReq",
    1310);
  v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
         &v35,
         (const char (*)[32])"[MATCH] already in match, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v35);
LABEL_38:
  if ( v36 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF801C) = 0LL;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 1367: range 0000000017D2FA24-0000000017D2FD0B
void __cdecl PlayerMatchComp::sendRemoveMatchUnitReq(PlayerMatchComp *const this, proto::MatchUnitRemoveOpType op_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  uint32_t Uid; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 8 req:1374";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendRemoveMatchUnitReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendRemoveMatchUnitReq",
      1370);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  else
  {
    proto::RemoveMatchUnitReq::RemoveMatchUnitReq((proto::RemoveMatchUnitReq *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_);
    }
    proto::RemoveMatchUnitReq::set_match_type((proto::RemoveMatchUnitReq *const)(v2 + 32), this->match_info_.match_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::RemoveMatchUnitReq::set_unit_id((proto::RemoveMatchUnitReq *const)(v2 + 32), Uid);
    proto::RemoveMatchUnitReq::set_op_type((proto::RemoveMatchUnitReq *const)(v2 + 32), op_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMatchComp::sendProtoToMatchService<proto::RemoveMatchUnitReq>(
      this->player_,
      (proto::RemoveMatchUnitReq *)(v2 + 32));
    proto::RemoveMatchUnitReq::~RemoveMatchUnitReq((proto::RemoveMatchUnitReq *const)(v2 + 32));
  }
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

// Line 1383: range 0000000017D2FD0C-0000000017D300D2
int32_t __cdecl PlayerMatchComp::startMatchByGm(
        PlayerMatchComp *const this,
        proto::MatchType match_type,
        uint32_t match_target_id,
        std::vector<unsigned int> *p_match_param_vec)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // r13
  int32_t v8; // r14d
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  proto::MatchIdentity expect_identity; // [rsp+2Ch] [rbp-E4h]
  std::tuple_element<0,std::tuple<int,std::vector<unsigned int> > >::type *ret; // [rsp+30h] [rbp-E0h]
  std::tuple_element<0,std::tuple<std::vector<unsigned int> > >::type *_; // [rsp+38h] [rbp-D8h]
  std::vector<unsigned int> v18; // [rsp+40h] [rbp-D0h] BYREF
  std::tuple<int,std::vector<unsigned int> > __t; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+80h] [rbp-90h] BYREF
  char v21[112]; // [rsp+A0h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 world_ptr:1392";
  *(_QWORD *)(v4 + 16) = PlayerMatchComp::startMatchByGm;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  PlayerMatchComp::checkMatchAvailability(&__t, this);
  ret = std::get<0ul,int,std::vector<unsigned int>>(&__t);
  _ = std::get<1ul,int,std::vector<unsigned int>>(&__t);
  if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(ret);
  }
  if ( *ret )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "startMatchByGm",
      1388);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v20,
           (const char (*)[36])"[MATCH] match is unavailable, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(ret);
    }
    v8 = *ret;
  }
  else
  {
    expect_identity = MATCH_IDENTITY_NONE;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 32));
    if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 32)) )
    {
      v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( World::getPlayerCount(v9) > 1 )
        expect_identity = MATCH_IDENTITY_HOST;
    }
    std::vector<unsigned int>::vector(&v18, p_match_param_vec);
    PlayerMatchComp::sendAddMatchUnitReq(this, match_type, match_target_id, expect_identity, &v18);
    std::vector<unsigned int>::~vector(&v18);
    v8 = 0;
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 32));
  }
  std::tuple<int,std::vector<unsigned int>>::~tuple(&__t);
  result = v8;
  if ( v21 == (char *)v4 )
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

// Line 1403: range 0000000017D300D4-0000000017D301FF
int32_t __cdecl PlayerMatchComp::cancelMatchByGm(PlayerMatchComp *const this)
{
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "cancelMatchByGm",
      1407);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v5,
           (const char (*)[38])"[MATCH] not in my world, player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
    return -1;
  }
  else
  {
    PlayerMatchComp::sendRemoveMatchUnitReq(this, MATCH_UNIT_REMOVE_OP_PLAYER_CANCEL);
    return 0;
  }
};

// Line 1416: range 0000000017D30200-0000000017D30331
int32_t __cdecl PlayerMatchComp::confirmMatchByGm(PlayerMatchComp *const this, bool is_agreed)
{
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "confirmMatchByGm",
      1420);
    v3 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v6,
           (const char (*)[38])"[MATCH] not in my world, player_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return -1;
  }
  else
  {
    PlayerMatchComp::sendConfirmGuestUnitReq(this, is_agreed);
    return 0;
  }
};

// Line 1429: range 0000000017D30332-0000000017D306C7
void __fastcall PlayerMatchComp::setPunishTimesByGm(
        PlayerMatchComp *const this,
        uint32_t match_id,
        uint32_t punish_times)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  MatchPunish *v10; // rax
  uint32_t v11; // ecx
  char v12; // dl
  char *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  const data::MatchExcelConfig *match_config_ptr; // [rsp+20h] [rbp-A0h]
  MatchPunish *match_punish; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-80h] BYREF
  char v23[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 match_id:1428";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::setPunishTimesByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = match_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  match_config_ptr = data::MatchExcelConfigMgrBase::findMatchExcelConfig(
                       &v6->design_config.txt_config_mgr.match_config_mgr,
                       *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( match_config_ptr )
  {
    v13 = (char *)(v3 + 32);
    v10 = std::map<unsigned int,MatchPunish>::operator[](
            &this->match_punish_map_,
            (const std::map<unsigned int,MatchPunish>::key_type *)(v3 + 32));
    match_punish = v10;
    v11 = *(_DWORD *)(v3 + 32);
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    LOBYTE(v13) = v12 != 0;
    v14 = (v12 != 0) & (unsigned __int8)((char)(((unsigned __int8)v10 & 7) + 3) >= v12);
    if ( (_BYTE)v14 )
      __asan_report_store4(v10, v13, v14);
    match_punish->match_id = v11;
    if ( *(_BYTE *)(((unsigned __int64)&match_punish->punish_times >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_punish + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_punish->punish_times >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&match_punish->punish_times);
    }
    if ( punish_times <= match_punish->punish_times )
    {
      v15 = (*(_BYTE *)(((unsigned __int64)&match_punish->punish_end_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)match_punish + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_punish->punish_end_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v15 )
        __asan_report_store4(&match_punish->punish_end_time, (((_BYTE)match_punish + 8) & 7u) + 3, v15);
      match_punish->punish_end_time = 0;
    }
    v16 = (*(_BYTE *)(((unsigned __int64)&match_punish->punish_times >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)match_punish + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_punish->punish_times >> 3) + 0x7FFF8000));
    if ( (_BYTE)v16 )
      __asan_report_store4(&match_punish->punish_times, (((_BYTE)match_punish + 4) & 7u) + 3, v16);
    match_punish->punish_times = punish_times;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "setPunishTimesByGm",
      1434);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v22, (const char (*)[9])"match_id");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           v8,
           (const char (*)[24])" config not found, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
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
};

// Line 1447: range 0000000017DB7D86-0000000017DB81DA
int32_t __cdecl PlayerMatchComp::sendProtoToMatchService<proto::AddMatchUnitReq>(
        Player *player,
        proto::AddMatchUnitReq *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rax
  GameserverService *v7; // r14
  unsigned __int64 v8; // rdx
  GameserverService *v9; // r14
  common::minet::Packet *v10; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 matchserver_id:1456 64 16 15 packet_ptr:1449";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendProtoToMatchService<proto::AddMatchUnitReq>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::AddMatchUnitReq>((const proto::AddMatchUnitReq *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1452);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    MatchComp = Player::getMatchComp(player);
    *(_DWORD *)(v2 + 48) = PlayerMatchComp::getMatchServerId(MatchComp);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    GameserverService::setPacketGameThreadIndex(v9, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v10, Uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setTarget(v12, 0x11u, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1461);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"sending to match_service, match_server_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" ,proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v22, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v22);
    std::string::~string(&v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    v5 = v18(v16, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  result = v5;
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

// Line 1447: range 0000000017DB8C08-0000000017DB905C
int32_t __cdecl PlayerMatchComp::sendProtoToMatchService<proto::ConfirmGuestUnitReq>(
        Player *player,
        proto::ConfirmGuestUnitReq *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rax
  GameserverService *v7; // r14
  unsigned __int64 v8; // rdx
  GameserverService *v9; // r14
  common::minet::Packet *v10; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 matchserver_id:1456 64 16 15 packet_ptr:1449";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendProtoToMatchService<proto::ConfirmGuestUnitReq>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::ConfirmGuestUnitReq>((const proto::ConfirmGuestUnitReq *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1452);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    MatchComp = Player::getMatchComp(player);
    *(_DWORD *)(v2 + 48) = PlayerMatchComp::getMatchServerId(MatchComp);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    GameserverService::setPacketGameThreadIndex(v9, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v10, Uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setTarget(v12, 0x11u, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1461);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"sending to match_service, match_server_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" ,proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v22, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v22);
    std::string::~string(&v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    v5 = v18(v16, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  result = v5;
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

// Line 1447: range 0000000017DB905E-0000000017DB94B2
int32_t __cdecl PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerJoinNotify>(
        Player *player,
        proto::MatchPlayerJoinNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rax
  GameserverService *v7; // r14
  unsigned __int64 v8; // rdx
  GameserverService *v9; // r14
  common::minet::Packet *v10; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 matchserver_id:1456 64 16 15 packet_ptr:1449";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerJoinNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::MatchPlayerJoinNotify>((const proto::MatchPlayerJoinNotify *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1452);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    MatchComp = Player::getMatchComp(player);
    *(_DWORD *)(v2 + 48) = PlayerMatchComp::getMatchServerId(MatchComp);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    GameserverService::setPacketGameThreadIndex(v9, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v10, Uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setTarget(v12, 0x11u, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1461);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"sending to match_service, match_server_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" ,proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v22, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v22);
    std::string::~string(&v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    v5 = v18(v16, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  result = v5;
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

// Line 1447: range 0000000017DB94B4-0000000017DB9908
int32_t __cdecl PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerQuitNotify>(
        Player *player,
        proto::MatchPlayerQuitNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rax
  GameserverService *v7; // r14
  unsigned __int64 v8; // rdx
  GameserverService *v9; // r14
  common::minet::Packet *v10; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 matchserver_id:1456 64 16 15 packet_ptr:1449";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerQuitNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::MatchPlayerQuitNotify>((const proto::MatchPlayerQuitNotify *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1452);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    MatchComp = Player::getMatchComp(player);
    *(_DWORD *)(v2 + 48) = PlayerMatchComp::getMatchServerId(MatchComp);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    GameserverService::setPacketGameThreadIndex(v9, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v10, Uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setTarget(v12, 0x11u, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1461);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"sending to match_service, match_server_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" ,proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v22, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v22);
    std::string::~string(&v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    v5 = v18(v16, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  result = v5;
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

// Line 1447: range 0000000017DB8746-0000000017DB8B9A
int32_t __cdecl PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerUpdateNotify>(
        Player *player,
        proto::MatchPlayerUpdateNotify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rax
  GameserverService *v7; // r14
  unsigned __int64 v8; // rdx
  GameserverService *v9; // r14
  common::minet::Packet *v10; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 matchserver_id:1456 64 16 15 packet_ptr:1449";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerUpdateNotify>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::MatchPlayerUpdateNotify>((const proto::MatchPlayerUpdateNotify *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1452);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    MatchComp = Player::getMatchComp(player);
    *(_DWORD *)(v2 + 48) = PlayerMatchComp::getMatchServerId(MatchComp);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    GameserverService::setPacketGameThreadIndex(v9, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v10, Uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setTarget(v12, 0x11u, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1461);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"sending to match_service, match_server_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" ,proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v22, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v22);
    std::string::~string(&v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    v5 = v18(v16, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  result = v5;
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

// Line 1447: range 0000000017DB81DB-0000000017DB862F
int32_t __cdecl PlayerMatchComp::sendProtoToMatchService<proto::RemoveMatchUnitReq>(
        Player *player,
        proto::RemoveMatchUnitReq *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rax
  GameserverService *v7; // r14
  unsigned __int64 v8; // rdx
  GameserverService *v9; // r14
  common::minet::Packet *v10; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 matchserver_id:1456 64 16 15 packet_ptr:1449";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendProtoToMatchService<proto::RemoveMatchUnitReq>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::RemoveMatchUnitReq>((const proto::RemoveMatchUnitReq *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1452);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    MatchComp = Player::getMatchComp(player);
    *(_DWORD *)(v2 + 48) = PlayerMatchComp::getMatchServerId(MatchComp);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    GameserverService::setPacketGameThreadIndex(v9, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v10, Uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setTarget(v12, 0x11u, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1461);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"sending to match_service, match_server_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" ,proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v22, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v22);
    std::string::~string(&v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    v5 = v18(v16, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  result = v5;
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

// Line 1447: range 0000000017DB990A-0000000017DB9D5E
int32_t __cdecl PlayerMatchComp::sendProtoToMatchService<proto::SyncMatchUnitReq>(
        Player *player,
        proto::SyncMatchUnitReq *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  PlayerMatchComp *MatchComp; // rax
  GameserverService *v7; // r14
  unsigned __int64 v8; // rdx
  GameserverService *v9; // r14
  common::minet::Packet *v10; // r14
  uint32_t Uid; // eax
  common::minet::Packet *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // r14
  unsigned __int64 v17; // rax
  __int64 (__fastcall *v18)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  int32_t result; // eax
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 19 matchserver_id:1456 64 16 15 packet_ptr:1449";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendProtoToMatchService<proto::SyncMatchUnitReq>;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  common::minet::PacketUtils::createPacket<proto::SyncMatchUnitReq>((const proto::SyncMatchUnitReq *)(v2 + 64));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1452);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v22,
      (const char (*)[28])"[MATCH] createPacket failed");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  else
  {
    MatchComp = Player::getMatchComp(player);
    *(_DWORD *)(v2 + 48) = PlayerMatchComp::getMatchServerId(MatchComp);
    v7 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    ServiceBase::setPacketSource(v7, (common::minet::PacketPtr)__PAIR128__(v8, &packet_ptr));
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v9 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    GameserverService::setPacketGameThreadIndex(v9, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
    v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    Uid = Player::getUid(player);
    common::minet::Packet::setUserId(v10, Uid);
    v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    common::minet::Packet::setTarget(v12, 0x11u, *(_DWORD *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "sendProtoToMatchService",
      1461);
    v13 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v21,
            (const char (*)[44])"sending to match_service, match_server_id: ");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" ,proto: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v22, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v22);
    std::string::~string(&v22);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v16 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(v16->_vptr_NetworkMgrBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v18 = *(__int64 (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v17;
    std::shared_ptr<common::minet::Packet>::shared_ptr(
      &packet_ptr,
      (const std::shared_ptr<common::minet::Packet> *)(v2 + 64));
    v5 = v18(v16, &packet_ptr);
    std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 64));
  result = v5;
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

// Line 1466: range 0000000017D306C8-0000000017D3189D
std::tuple<int,std::vector<unsigned int> > *__cdecl PlayerMatchComp::checkMatchAvailability(
        std::tuple<int,std::vector<unsigned int> > *retstr,
        PlayerMatchComp *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v6; // rbx
  std::vector<unsigned int> *v7; // r8
  common::milog::MiLogStream *v8; // rbx
  std::vector<unsigned int> *v9; // r8
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v11; // rbx
  std::vector<unsigned int> *v12; // r8
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rdx
  bool *p_is_client_data_version_not_latest_ban_mp; // rax
  char v15; // r15
  std::vector<unsigned int> *v16; // r8
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rbx
  std::vector<unsigned int> *v22; // rax
  std::vector<unsigned int> *v23; // r8
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v25; // rbx
  std::vector<unsigned int> *v26; // r8
  common::milog::MiLogStream *v27; // r14
  std::vector<unsigned int> *v28; // r8
  uint32_t v29; // r14d
  bool v30; // r14
  common::milog::MiLogStream *v31; // r14
  std::vector<unsigned int> *v32; // r8
  std::vector<unsigned int> *v33; // r8
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  uint32_t OwnerUid; // r14d
  char v36; // al
  common::milog::MiLogStream *v37; // r14
  std::vector<unsigned int> *v38; // r8
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *ret; // [rsp+30h] [rbp-F0h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *param_vec; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Player> __a; // [rsp+40h] [rbp-E0h] BYREF
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+50h] [rbp-D0h] BYREF
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-B0h] BYREF
  char v46[144]; // [rsp+90h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 14 world_ptr:1508 64 16 19 dest_scene_ptr:1523";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::checkMatchAvailability;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( !(_BYTE)`guard variable for'PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec
    && __cxa_guard_acquire(&`guard variable for'PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec) )
  {
    std::vector<unsigned int>::vector(&PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec);
    __cxa_guard_release(&`guard variable for'PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "checkMatchAvailability",
      1471);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v45,
           (const char (*)[31])"[MATCH] not in my world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    val = 1565;
    std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
      (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
      (proto::Retcode *)&val,
      &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
      (proto::Retcode *)&val,
      v7);
    std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
      retstr,
      (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
    std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
  }
  else if ( PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "checkMatchAvailability",
      1477);
    v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v45,
           (const char (*)[32])"[MATCH] already in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v45);
    val = 1562;
    std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
      (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
      (proto::Retcode *)&val,
      &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
      (proto::Retcode *)&val,
      v9);
    std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
      retstr,
      (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
    std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x31u) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "checkMatchAvailability",
        1483);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v45,
              (const char (*)[38])"OPEN_STATE_MULTIPLAYER not open, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      val = 1223;
      std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
        (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
        (proto::Retcode *)&val,
        &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
        (proto::Retcode *)&val,
        v12);
      std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
        retstr,
        (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
      std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      p_is_client_data_version_not_latest_ban_mp = &v13->is_client_data_version_not_latest_ban_mp;
      if ( *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_client_data_version_not_latest_ban_mp & 7) >= *(_BYTE *)(((unsigned __int64)p_is_client_data_version_not_latest_ban_mp >> 3)
                                                                                         + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_client_data_version_not_latest_ban_mp);
      }
      if ( !v13->is_client_data_version_not_latest_ban_mp )
        goto LABEL_30;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( !Player::isClientDataVersionLatest(this->player_) )
        v15 = 1;
      else
LABEL_30:
        v15 = 0;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      if ( v15 )
      {
        common::milog::MiLogStream::create(
          &v45,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/match/player_match_comp.cpp",
          "checkMatchAvailability",
          1490);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          &v45,
          (const char (*)[49])"[MATCH] player client_data_version is not latest");
        common::milog::MiLogStream::~MiLogStream(&v45);
        val = 1232;
        std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
          (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
          (proto::Retcode *)&val,
          &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
          (proto::Retcode *)&val,
          v16);
        std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
          retstr,
          (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
        std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::checkMpModeAvailability(&__in, this->player_);
        ret = std::get<0ul,int,std::vector<unsigned int>>(&__in);
        param_vec = std::get<1ul,int,std::vector<unsigned int>>(&__in);
        if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(ret);
        }
        if ( *ret )
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/match/player_match_comp.cpp",
            "checkMatchAvailability",
            1497);
          v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v45,
                  (const char (*)[29])"[MATCH] mp unavailable, ret=");
          v18 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, ret);
          v19 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v18, (const char (*)[12])" param_vec:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int>(v19, param_vec);
          v21 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v20, (const char (*)[7])" uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          v22 = std::move<std::vector<unsigned int> &>(param_vec);
          val = 1204;
          std::make_tuple<proto::Retcode,std::vector<unsigned int>>(
            (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
            (proto::Retcode *)&val,
            v22,
            (proto::Retcode *)&val,
            v23);
          std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
            retstr,
            (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
          std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MpComp = Player::getMpComp(this->player_);
          if ( PlayerMpComp::getIsApplyingEnterMp(MpComp) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/match/player_match_comp.cpp",
              "checkMatchAvailability",
              1504);
            v25 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                    &v45,
                    (const char (*)[43])"[MATCH] player is applying enter mp, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
            common::milog::MiLogStream::~MiLogStream(&v45);
            val = 1564;
            std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
              (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
              (proto::Retcode *)&val,
              &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
              (proto::Retcode *)&val,
              v26);
            std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
              retstr,
              (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
            std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 32));
            if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/match/player_match_comp.cpp",
                "checkMatchAvailability",
                1511);
              v27 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v45,
                      (const char (*)[33])"[MATCH] world_ptr is null, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
              common::milog::MiLogStream::~MiLogStream(&v45);
              val = -1;
              if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                                      + 7) >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_store_n(retstr, 32LL);
              }
              std::make_tuple<int,std::vector<unsigned int> &>(
                retstr,
                (int *)&val,
                &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
                (int *)&val,
                v28);
            }
            else
            {
              v29 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::getUid(this->player_);
              World::findPlayerPtr((World *const)&__a, v29);
              v30 = std::operator==<Player>(0LL, &__a);
              std::shared_ptr<Player>::~shared_ptr(&__a);
              if ( v30 )
              {
                common::milog::MiLogStream::create(
                  &v45,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/match/player_match_comp.cpp",
                  "checkMatchAvailability",
                  1518);
                v31 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        &v45,
                        (const char (*)[45])"[MATCH] owner player not in the world, uid: ");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                val = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
                common::milog::MiLogStream::~MiLogStream(&v45);
                val = 1212;
                std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
                  (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
                  (proto::Retcode *)&val,
                  &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
                  (proto::Retcode *)&val,
                  v32);
                std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
                  retstr,
                  (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
                std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::getSceneComp(this->player_);
                PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v2 + 64));
                if ( !std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
                  goto LABEL_68;
                v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
                OwnerUid = Scene::getOwnerUid(v34);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                if ( OwnerUid == Player::getUid(this->player_) )
LABEL_68:
                  v36 = 0;
                else
                  v36 = 1;
                if ( v36 )
                {
                  common::milog::MiLogStream::create(
                    &v45,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/match/player_match_comp.cpp",
                    "checkMatchAvailability",
                    1526);
                  v37 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          &v45,
                          (const char (*)[45])"[MATCH] owner player not in the world, uid: ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
                  common::milog::MiLogStream::~MiLogStream(&v45);
                  val = 1215;
                  std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
                    (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45,
                    (proto::Retcode *)&val,
                    &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
                    (proto::Retcode *)&val,
                    v38);
                  std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
                    retstr,
                    (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v45);
                  std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v45);
                }
                else
                {
                  val = 0;
                  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                                          + 7) >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_store_n(retstr, 32LL);
                  }
                  std::make_tuple<int,std::vector<unsigned int> &>(
                    retstr,
                    (int *)&val,
                    &PlayerMatchComp::checkMatchAvailability(void)::empty_param_vec,
                    (int *)&val,
                    v33);
                }
                std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
              }
            }
            std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
          }
        }
        std::pair<int,std::vector<unsigned int>>::~pair(&__in);
      }
    }
  }
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
  return retstr;
};

// Line 1534: range 0000000017D3189E-0000000017D31B18
void __cdecl PlayerMatchComp::updateMatchPlayer(PlayerMatchComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t Uid; // eax
  proto::MatchPlayer *matched; // rsi
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 11 notify:1541";
  *(_QWORD *)(v1 + 16) = PlayerMatchComp::updateMatchPlayer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( PlayerMatchComp::isInMatch(this) )
  {
    proto::MatchPlayerUpdateNotify::MatchPlayerUpdateNotify((proto::MatchPlayerUpdateNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_);
    }
    proto::MatchPlayerUpdateNotify::set_match_type(
      (proto::MatchPlayerUpdateNotify *const)(v1 + 48),
      this->match_info_.match_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::MatchPlayerUpdateNotify::set_unit_id((proto::MatchPlayerUpdateNotify *const)(v1 + 48), Uid);
    matched = proto::MatchPlayerUpdateNotify::mutable_match_player((proto::MatchPlayerUpdateNotify *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMatchComp::fillMatchPlayer(this, this->player_, matched);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerUpdateNotify>(
      this->player_,
      (proto::MatchPlayerUpdateNotify *)(v1 + 48));
    proto::MatchPlayerUpdateNotify::~MatchPlayerUpdateNotify((proto::MatchPlayerUpdateNotify *const)(v1 + 48));
  }
  if ( v6 == (char *)v1 )
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
};

// Line 1550: range 0000000017D31B1A-0000000017D3233F
void __cdecl PlayerMatchComp::onHostUnitMatchSucc(PlayerMatchComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *matched; // rax
  common::milog::MiLogStream *v8; // r14
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v10; // r12
  common::milog::MiLogStream *v11; // r14
  proto::MatchType match_type; // eax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rdx
  common::milog::MiLogStream *v15; // r14
  PlayerWorld *v16; // rax
  PlayerSceneComp *v17; // rax
  PlayerMpPlayComp *MpPlayComp; // rcx
  PlayerScenePlayComp *ScenePlayComp; // rcx
  PlayerMechanicusComp *MechanicusComp; // rcx
  bool is_from_single_to_mp; // [rsp+17h] [rbp-99h]
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  unsigned int MatchTargetId; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-90h] BYREF
  char v25[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 world_ptr:1559";
  *(_QWORD *)(v1 + 16) = PlayerMatchComp::onHostUnitMatchSucc;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "onHostUnitMatchSucc",
    1551);
  v4 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         &v24,
         (const char (*)[35])"[MATCH] onHostUnitMatchSucc, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" ,match_type: ");
  matched = common::milog::MiLogStream::operator<<<proto::MatchType,(proto::MatchType*)0>(
              v6,
              &this->match_info_.match_type);
  v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
         matched,
         (const char (*)[20])" ,match_target_id: ");
  MatchTargetId = PlayerMatchComp::getMatchTargetId(this);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &MatchTargetId);
  common::milog::MiLogStream::~MiLogStream(&v24);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onHostUnitMatchSucc",
      1555);
    v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v24,
            (const char (*)[31])"[MATCH] not in my world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchTargetId = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &MatchTargetId);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 32));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "onHostUnitMatchSucc",
        1562);
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v24,
              (const char (*)[29])"[MATCH] world is null, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MatchTargetId = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &MatchTargetId);
      common::milog::MiLogStream::~MiLogStream(&v24);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_info_);
      }
      match_type = this->match_info_.match_type;
      if ( match_type == MATCH_TYPE_MECHANICUS )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MechanicusComp = Player::getMechanicusComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mechanicus_difficult_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.mechanicus_difficult_level >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->match_info_.mechanicus_difficult_level);
        }
        PlayerMechanicusComp::onMatchSucc(MechanicusComp, this->match_info_.mechanicus_difficult_level);
      }
      else if ( match_type <= MATCH_TYPE_MECHANICUS )
      {
        if ( match_type == MATCH_TYPE_DUNGEON )
        {
          is_from_single_to_mp = 0;
          v13 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v14 = (unsigned __int64)(v13->_vptr_World + 23);
          if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v14)(v13) != 1 )
          {
            common::milog::MiLogStream::create(
              &v24,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/match/player_match_comp.cpp",
              "onHostUnitMatchSucc",
              1573);
            v15 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    &v24,
                    (const char (*)[36])"[MATCH] set world in mp mode, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MatchTargetId = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &MatchTargetId);
            common::milog::MiLogStream::~MiLogStream(&v24);
            v16 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
            PlayerWorld::setIsInMpMode(v16, 1);
            is_from_single_to_mp = 1;
          }
          if ( is_from_single_to_mp )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v17 = Player::getSceneComp(this->player_);
            PlayerSceneComp::jumpInplace(v17);
          }
        }
        else if ( match_type == MATCH_TYPE_MP_PLAY )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          MpPlayComp = Player::getMpPlayComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->match_info_.mp_play_id);
          }
          PlayerMpPlayComp::onMatchSucc(MpPlayComp, this->match_info_.mp_play_id);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ScenePlayComp = Player::getScenePlayComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->match_info_.mp_play_id);
          }
          PlayerScenePlayComp::onMatchSucc(ScenePlayComp, this->match_info_.mp_play_id);
        }
      }
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  }
  if ( v25 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1602: range 0000000017D32340-0000000017D3261B
__int64 __fastcall PlayerMatchComp::getMatchMinPlayers(
        PlayerMatchComp *const this,
        proto::MatchType match_type,
        uint32_t match_target_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *matched; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  __int64 result; // rax
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+50h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 16 min_players:1603 48 4 15 match_type:1601 64 4 20 match_target_id:1601";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::getMatchMinPlayers;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = match_type;
  *(_DWORD *)(v3 + 64) = match_target_id;
  *(_DWORD *)(v3 + 32) = 1;
  v6 = *(_DWORD *)(v3 + 48);
  if ( v6 == 3 )
  {
    *(_DWORD *)(v3 + 32) = 2;
  }
  else if ( v6 <= 3 )
  {
    if ( v6 == 1 )
    {
      *(_DWORD *)(v3 + 32) = 2;
    }
    else if ( v6 == 2 )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v16);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
      match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                           &v7->design_config.txt_config_mgr.mp_play_config_mgr,
                           *(_DWORD *)(v3 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v16);
      if ( match_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_players >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)match_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_players >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&match_config_ptr->min_players);
        }
        *(_DWORD *)(v3 + 32) = match_config_ptr->min_players;
      }
    }
  }
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/match/player_match_comp.cpp",
    "getMatchMinPlayers",
    1630);
  v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v17, (const char (*)[21])"[MATCH] match_type: ");
  matched = common::milog::MiLogStream::operator<<<proto::MatchType,(proto::MatchType*)0>(
              v8,
              (const proto::MatchType *)(v3 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          matched,
          (const char (*)[20])" ,match_target_id: ");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
  v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])" ,min_players: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
  common::milog::MiLogStream::~MiLogStream(&v17);
  result = *(unsigned int *)(v3 + 32);
  if ( v18 == (char *)v3 )
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

// Line 1635: range 0000000017D3261C-0000000017D33801
std::tuple<int,std::vector<unsigned int> > *__fastcall PlayerMatchComp::checkSkipMatchAvailability(
        std::tuple<int,std::vector<unsigned int> > *retstr,
        const PlayerMatchComp *const this,
        uint32_t play_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerMatchComp *MatchComp; // rax
  common::milog::MiLogStream *v7; // rbx
  std::vector<unsigned int> *v8; // r8
  PlayerMpComp *MpComp; // rax
  common::milog::MiLogStream *v10; // rbx
  std::vector<unsigned int> *v11; // r8
  bool v12; // r14
  common::milog::MiLogStream *v13; // rbx
  std::vector<unsigned int> *v14; // rax
  std::vector<unsigned int> *v15; // r8
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::vector<unsigned int> *v18; // r8
  std::vector<unsigned int> *v19; // r8
  uint32_t v20; // r14d
  bool v21; // r14
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t OwnerUid; // r14d
  char v25; // al
  common::milog::MiLogStream *v26; // r14
  std::vector<unsigned int> *v27; // r8
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::vector<unsigned int> *v30; // r8
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  std::tuple_element<0,std::pair<int,std::vector<unsigned int> > >::type *ret; // [rsp+28h] [rbp-118h]
  std::tuple_element<1,std::pair<int,std::vector<unsigned int> > >::type *param_vec; // [rsp+30h] [rbp-110h]
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Player> __a; // [rsp+40h] [rbp-100h] BYREF
  std::pair<int,std::vector<unsigned int> > __in; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+90h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 play_id:1634 64 16 14 world_ptr:1673 96 16 19 dest_scene_ptr:1688";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::checkSkipMatchAvailability;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = play_id;
  if ( !(_BYTE)`guard variable for'PlayerMatchComp::checkSkipMatchAvailability(unsigned int)::empty_param_vec
    && __cxa_guard_acquire(&`guard variable for'PlayerMatchComp::checkSkipMatchAvailability(unsigned int)::empty_param_vec) )
  {
    std::vector<unsigned int>::vector(&PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec);
    __cxa_guard_release(&`guard variable for'PlayerMatchComp::checkSkipMatchAvailability(unsigned int)::empty_param_vec);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec,
      &_dso_handle);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MatchComp = Player::getMatchComp(this->player_);
  if ( PlayerMatchComp::isInMatch(MatchComp) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "checkSkipMatchAvailability",
      1640);
    v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v39,
           (const char (*)[32])"[MATCH] already in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v39);
    val = 1562;
    std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
      (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39,
      (proto::Retcode *)&val,
      &PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec,
      (proto::Retcode *)&val,
      v8);
    std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
      retstr,
      (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39);
    std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v39);
    goto LABEL_77;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::getIsApplyingEnterMp(MpComp) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::checkMpModeAvailability(&__in, this->player_);
    ret = std::get<0ul,int,std::vector<unsigned int>>(&__in);
    param_vec = std::get<1ul,int,std::vector<unsigned int>>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::checkMpModeAvailability((std::pair<int,std::vector<unsigned int> > *)&v39, this->player_);
    v12 = LODWORD(v39.log_) != 0;
    std::pair<int,std::vector<unsigned int>>::~pair((std::pair<int,std::vector<unsigned int> > *const)&v39);
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/match/player_match_comp.cpp",
        "checkSkipMatchAvailability",
        1655);
      v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v39,
              (const char (*)[30])"[MATCH] mp unavailable, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      v14 = std::move<std::vector<unsigned int> &>(param_vec);
      val = 1204;
      std::make_tuple<proto::Retcode,std::vector<unsigned int>>(
        (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39,
        (proto::Retcode *)&val,
        v14,
        (proto::Retcode *)&val,
        v15);
      std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
        retstr,
        (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39);
      std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v39);
      goto LABEL_76;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 96));
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                         &v16->design_config.txt_config_mgr.mp_play_config_mgr,
                         *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
    if ( !match_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "checkSkipMatchAvailability",
        1662);
      v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v39,
              (const char (*)[47])"[MATCH] findMpPlayExcelConfig failed, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v39);
      val = -1;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                              + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
LABEL_30:
      std::make_tuple<int,std::vector<unsigned int> &>(
        retstr,
        (int *)&val,
        &PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec,
        (int *)&val,
        v18);
LABEL_76:
      std::pair<int,std::vector<unsigned int>>::~pair(&__in);
      goto LABEL_77;
    }
    if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->is_match_necessary >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)match_config_ptr + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->is_match_necessary >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load1(&match_config_ptr->is_match_necessary);
    }
    if ( match_config_ptr->is_match_necessary )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "checkSkipMatchAvailability",
        1669);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        &v39,
        (const char (*)[47])"[MATCH] skip match invalid, match is necessary");
      common::milog::MiLogStream::~MiLogStream(&v39);
      val = -1;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                              + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "checkSkipMatchAvailability",
        1676);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(&v39, (const char (*)[22])"[MATCH] world is null");
      common::milog::MiLogStream::~MiLogStream(&v39);
      val = -1;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                              + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
LABEL_42:
      std::make_tuple<int,std::vector<unsigned int> &>(
        retstr,
        (int *)&val,
        &PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec,
        (int *)&val,
        v19);
LABEL_75:
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
      goto LABEL_76;
    }
    v20 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getUid(this->player_);
    World::findPlayerPtr((World *const)&__a, v20);
    v21 = std::operator==<Player>(0LL, &__a);
    std::shared_ptr<Player>::~shared_ptr(&__a);
    if ( v21 )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "checkSkipMatchAvailability",
        1683);
      v22 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v39,
              (const char (*)[45])"[MATCH] owner player not in the world, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      val = -1;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                              + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
      goto LABEL_42;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getDestScene((const PlayerSceneComp *const)(v3 + 96));
    if ( !std::operator!=<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
      goto LABEL_58;
    v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    OwnerUid = Scene::getOwnerUid(v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( OwnerUid == Player::getUid(this->player_) )
LABEL_58:
      v25 = 0;
    else
      v25 = 1;
    if ( v25 )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/match/player_match_comp.cpp",
        "checkSkipMatchAvailability",
        1691);
      v26 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              &v39,
              (const char (*)[52])"[MATCH] owner player is entering other world, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      val = -1;
      if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                              + 7) >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store_n(retstr, 32LL);
      }
    }
    else
    {
      v28 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( World::getPlayerCount(v28) == 1 )
      {
        v29 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( PlayerWorld::isHasOtherPlayerPreEnter(v29) )
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "checkSkipMatchAvailability",
            1703);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v39,
            (const char (*)[31])"[MATCH] other player pre enter");
          common::milog::MiLogStream::~MiLogStream(&v39);
          val = 1247;
          std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
            (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39,
            (proto::Retcode *)&val,
            &PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec,
            (proto::Retcode *)&val,
            v30);
          std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
            retstr,
            (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39);
          std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v39);
LABEL_74:
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
          goto LABEL_75;
        }
        val = 0;
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                                + 7) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 32LL);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/match/player_match_comp.cpp",
          "checkSkipMatchAvailability",
          1698);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          &v39,
          (const char (*)[36])"[MATCH] world player count is not 1");
        common::milog::MiLogStream::~MiLogStream(&v39);
        val = -1;
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false> + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->std::_Head_base<0,int,false>
                                                                + 7) >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store_n(retstr, 32LL);
        }
      }
    }
    std::make_tuple<int,std::vector<unsigned int> &>(
      retstr,
      (int *)&val,
      &PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec,
      (int *)&val,
      v27);
    goto LABEL_74;
  }
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/match/player_match_comp.cpp",
    "checkSkipMatchAvailability",
    1647);
  v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          &v39,
          (const char (*)[43])"[MATCH] player is applying enter mp, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
  common::milog::MiLogStream::~MiLogStream(&v39);
  val = 1564;
  std::make_tuple<proto::Retcode,std::vector<unsigned int> &>(
    (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39,
    (proto::Retcode *)&val,
    &PlayerMatchComp::checkSkipMatchAvailability(unsigned int)const::empty_param_vec,
    (proto::Retcode *)&val,
    v11);
  std::tuple<int,std::vector<unsigned int>>::tuple<proto::Retcode,std::vector<unsigned int>,true>(
    retstr,
    (std::tuple<proto::Retcode,std::vector<unsigned int> > *)&v39);
  std::tuple<proto::Retcode,std::vector<unsigned int>>::~tuple((std::tuple<proto::Retcode,std::vector<unsigned int> > *const)&v39);
LABEL_77:
  if ( v40 == (char *)v3 )
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

// Line 1711: range 0000000017D3388E-0000000017D33AB3
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerMatchComp::fillMatchUnit(PlayerMatchComp *const this, proto::MatchUnit *proto_match_unit)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r14
  uint32_t Uid; // edx
  proto::MatchUnit *const v6; // rsi
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // [rsp+8h] [rbp-A8h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 world_ptr:1712";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::fillMatchUnit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 32)) )
  {
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMatchComp::fillMatchUnit(proto::MatchUnit &)::{lambda(Player &)#1},void,void>(
      &p_func,
      *(PlayerMatchComp::fillMatchUnit::<lambda(Player&)> *)&this);
    World::foreachPlayer(v7, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::MatchUnit::set_unit_id(v6, Uid);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
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

// Line 1715: range 0000000017D33802-0000000017D3388C
ForeachPolicy __cdecl PlayerMatchComp::fillMatchUnit(proto::MatchUnit &)::{lambda(Player &)#1}::operator()(
        const PlayerMatchComp::fillMatchUnit::<lambda(Player&)> *const __closure,
        Player *player)
{
  proto::MatchPlayer *proto_match_player; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__proto_match_unit >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto_match_player = proto::MatchUnit::add_match_player_list(__closure->__proto_match_unit);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerMatchComp::fillMatchPlayer(__closure->__this, player, proto_match_player);
  return 0;
};

// Line 1727: range 0000000017D33AB4-0000000017D33DD2
void __cdecl PlayerMatchComp::fillMatchPlayer(
        PlayerMatchComp *const this,
        Player *player,
        proto::MatchPlayer *proto_match_player)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Uid; // edx
  PlayerBasicComp *BasicComp; // rax
  const std::string *v8; // rdx
  PlayerBasicComp *v9; // rax
  uint32_t Level; // edx
  PlayerBasicComp *v11; // rax
  uint32_t WorldLevel; // edx
  uint32_t PlatformType; // edx
  PlayerMpComp *MpComp; // rax
  bool IsOnlyMpWithPSPlayer; // dl
  PlayerSocialComp *SocialComp; // rax
  google::protobuf::RepeatedField<unsigned int> *v17; // rax
  PlayerMpComp *v18; // r14
  proto::OnlinePlayerInfo *v19; // rax
  PlayerActivityComp *ActivityComp; // rax
  uint32_t HideAndSeekHiderCount; // edx
  google::protobuf::RepeatedField<unsigned int> *v22; // r14
  PlayerActivityComp *v23; // rax
  std::vector<unsigned int> vec; // [rsp+20h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 18 blacklist_vec:1735";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::fillMatchPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  Uid = Player::getUid(player);
  proto::MatchPlayer::set_uid(proto_match_player, Uid);
  BasicComp = Player::getBasicComp(player);
  v8 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
  proto::MatchPlayer::set_nickname(proto_match_player, v8);
  v9 = Player::getBasicComp(player);
  Level = PlayerBasicComp::getLevel(v9);
  proto::MatchPlayer::set_player_level(proto_match_player, Level);
  v11 = Player::getBasicComp(player);
  WorldLevel = PlayerBasicComp::getWorldLevel(v11);
  proto::MatchPlayer::set_world_level(proto_match_player, WorldLevel);
  PlatformType = Player::getPlatformType(player);
  proto::MatchPlayer::set_platform_type(proto_match_player, PlatformType);
  MpComp = Player::getMpComp(player);
  IsOnlyMpWithPSPlayer = PlayerMpComp::getIsOnlyMpWithPSPlayer(MpComp);
  proto::MatchPlayer::set_is_only_match_with_ps_player(proto_match_player, IsOnlyMpWithPSPlayer);
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 32));
  SocialComp = Player::getSocialComp(player);
  PlayerSocialComp::getBlacklist(SocialComp, (std::vector<unsigned int> *)(v3 + 32));
  v17 = proto::MatchPlayer::mutable_blacklist_uid_list(proto_match_player);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
    (const std::vector<unsigned int> *)(v3 + 32),
    v17);
  v18 = Player::getMpComp(player);
  v19 = proto::MatchPlayer::mutable_player_info(proto_match_player);
  PlayerMpComp::fillOnlinePlayerInfo(v18, v19);
  ActivityComp = Player::getActivityComp(player);
  HideAndSeekHiderCount = PlayerActivityComp::getHideAndSeekHiderCount(ActivityComp);
  proto::MatchPlayer::set_hide_and_seek_hider_count(proto_match_player, HideAndSeekHiderCount);
  v22 = proto::MatchPlayer::mutable_hide_and_seek_chosen_map_list(proto_match_player);
  v23 = Player::getActivityComp(player);
  PlayerActivityComp::getHideAndSeekChosenMap(&vec, v23);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&vec, v22);
  std::vector<unsigned int>::~vector(&vec);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 32));
  if ( v26 == (char *)v3 )
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

// Line 1744: range 0000000017D33DD4-0000000017D33FDE
void __cdecl PlayerMatchComp::notifyPlayerMatchAgreedResult(
        PlayerMatchComp *const this,
        uint32_t target_uid,
        proto::PlayerMatchAgreedResultNotify::Reason reason)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  proto::PlayerMatchAgreedResultNotify *v6; // rax
  proto::PlayerMatchAgreedResultNotify *v7; // rax
  proto::PlayerMatchAgreedResultNotify *v8; // rcx
  Player *player; // r14
  std::shared_ptr<proto::PlayerMatchAgreedResultNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 notify_ptr:1745";
  *(_QWORD *)(v3 + 16) = PlayerMatchComp::notifyPlayerMatchAgreedResult;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::PlayerMatchAgreedResultNotify>();
  v6 = std::__shared_ptr_access<proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::PlayerMatchAgreedResultNotify::set_target_uid(v6, target_uid);
  v7 = std::__shared_ptr_access<proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::PlayerMatchAgreedResultNotify::set_reason(v7, reason);
  v8 = std::__shared_ptr_access<proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::PlayerMatchAgreedResultNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  proto::PlayerMatchAgreedResultNotify::set_match_type(v8, this->match_info_.match_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerMatchAgreedResultNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::PlayerMatchAgreedResultNotify>::~shared_ptr((std::shared_ptr<proto::PlayerMatchAgreedResultNotify> *const)(v3 + 32));
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1753: range 0000000017D3406E-0000000017D343A5
void __cdecl PlayerMatchComp::broadcastPlayerMatchInfoNotify(PlayerMatchComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rdx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::shared_ptr<proto::PlayerMatchInfoNotify> v8; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 15 notify_ptr:1760 64 16 14 world_ptr:1763";
  *(_QWORD *)(v1 + 16) = PlayerMatchComp::broadcastPlayerMatchInfoNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "broadcastPlayerMatchInfoNotify",
      1756);
    v4 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v9,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    common::tools::perf::make_shared<proto::PlayerMatchInfoNotify>();
    v5 = std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto::PlayerMatchInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    PlayerMatchComp::fillPlayerMatchInfoNotify(this, v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 64));
    if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 64)) )
    {
      v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      std::shared_ptr<proto::PlayerMatchInfoNotify>::shared_ptr(
        &v8,
        (const std::shared_ptr<proto::PlayerMatchInfoNotify> *)(v1 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<PlayerMatchComp::broadcastPlayerMatchInfoNotify(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v9,
        (PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *)&v8);
      World::foreachPlayer(v6, (std::function<ForeachPolicy(Player&)> *)&v9);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v9);
      PlayerMatchComp::broadcastPlayerMatchInfoNotify(void)::{lambda(Player &)#1}::~Player((PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *const)&v8);
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 64));
    std::shared_ptr<proto::PlayerMatchInfoNotify>::~shared_ptr((std::shared_ptr<proto::PlayerMatchInfoNotify> *const)(v1 + 32));
  }
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
};

// Line 1766: range 0000000017D33FE0-0000000017D34051
ForeachPolicy __cdecl PlayerMatchComp::broadcastPlayerMatchInfoNotify(void)::{lambda(Player &)#1}::operator()(
        const PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *const __closure,
        Player *player)
{
  std::shared_ptr<proto::PlayerMatchInfoNotify> __r; // [rsp+10h] [rbp-20h] BYREF

  std::dynamic_pointer_cast<google::protobuf::Message const,proto::PlayerMatchInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  return 0;
};

// Line 1766: range 0000000017D5449E-0000000017D544C3
void __cdecl PlayerMatchComp::broadcastPlayerMatchInfoNotify(void)::{lambda(Player &)#1}::Player(
        PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *const this,
        PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto::PlayerMatchInfoNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
};

// Line 1766: range 0000000017D5458E-0000000017D545B3
void __cdecl PlayerMatchComp::broadcastPlayerMatchInfoNotify(void)::{lambda(Player &)#1}::Player(
        PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *const this,
        const PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *a2)
{
  std::shared_ptr<proto::PlayerMatchInfoNotify>::shared_ptr(&this->__notify_ptr, &a2->__notify_ptr);
};

// Line 1766: range 0000000017D34052-0000000017D3406C
void __cdecl PlayerMatchComp::broadcastPlayerMatchInfoNotify(void)::{lambda(Player &)#1}::~Player(
        PlayerMatchComp::broadcastPlayerMatchInfoNotify::<lambda(Player&)> *const this)
{
  std::shared_ptr<proto::PlayerMatchInfoNotify>::~shared_ptr(&this->__notify_ptr);
};

// Line 1775: range 0000000017D343A6-0000000017D34702
void __cdecl PlayerMatchComp::sendConfirmGuestUnitReq(PlayerMatchComp *const this, bool is_agreed)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r12
  uint32_t Uid; // eax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-C0h] BYREF
  char v9[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 8 req:1782";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendConfirmGuestUnitReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendConfirmGuestUnitReq",
      1778);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v8,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    proto::ConfirmGuestUnitReq::ConfirmGuestUnitReq((proto::ConfirmGuestUnitReq *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_);
    }
    proto::ConfirmGuestUnitReq::set_match_type(
      (proto::ConfirmGuestUnitReq *const)(v2 + 48),
      this->match_info_.match_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::ConfirmGuestUnitReq::set_unit_id((proto::ConfirmGuestUnitReq *const)(v2 + 48), Uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_.match_id);
    }
    proto::ConfirmGuestUnitReq::set_match_id((proto::ConfirmGuestUnitReq *const)(v2 + 48), this->match_info_.match_id);
    proto::ConfirmGuestUnitReq::set_is_agreed((proto::ConfirmGuestUnitReq *const)(v2 + 48), is_agreed);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMatchComp::sendProtoToMatchService<proto::ConfirmGuestUnitReq>(
      this->player_,
      (proto::ConfirmGuestUnitReq *)(v2 + 48));
    proto::ConfirmGuestUnitReq::~ConfirmGuestUnitReq((proto::ConfirmGuestUnitReq *const)(v2 + 48));
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

// Line 1792: range 0000000017D34704-0000000017D34A23
void __cdecl PlayerMatchComp::sendMatchPlayerJoinNotify(PlayerMatchComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r12
  uint32_t Uid; // eax
  proto::MatchPlayer *matched; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-C0h] BYREF
  char v10[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 11 notify:1799";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendMatchPlayerJoinNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendMatchPlayerJoinNotify",
      1795);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v9,
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    proto::MatchPlayerJoinNotify::MatchPlayerJoinNotify((proto::MatchPlayerJoinNotify *const)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_);
    }
    proto::MatchPlayerJoinNotify::set_match_type(
      (proto::MatchPlayerJoinNotify *const)(v2 + 48),
      this->match_info_.match_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    proto::MatchPlayerJoinNotify::set_unit_id((proto::MatchPlayerJoinNotify *const)(v2 + 48), Uid);
    matched = proto::MatchPlayerJoinNotify::mutable_match_player((proto::MatchPlayerJoinNotify *const)(v2 + 48));
    PlayerMatchComp::fillMatchPlayer(this, player, matched);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerJoinNotify>(
      this->player_,
      (proto::MatchPlayerJoinNotify *)(v2 + 48));
    proto::MatchPlayerJoinNotify::~MatchPlayerJoinNotify((proto::MatchPlayerJoinNotify *const)(v2 + 48));
  }
  if ( v10 == (char *)v2 )
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

// Line 1808: range 0000000017D34A24-0000000017D34D0B
void __cdecl PlayerMatchComp::sendMatchPlayerQuitNotify(PlayerMatchComp *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  uint32_t v6; // eax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  char v8[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 11 notify:1815";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::sendMatchPlayerQuitNotify;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !PlayerMatchComp::isInMatch(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "sendMatchPlayerQuitNotify",
      1811);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[28])"[MATCH] not in match, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
  }
  else
  {
    proto::MatchPlayerQuitNotify::MatchPlayerQuitNotify((proto::MatchPlayerQuitNotify *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_);
    }
    proto::MatchPlayerQuitNotify::set_match_type(
      (proto::MatchPlayerQuitNotify *const)(v2 + 32),
      this->match_info_.match_type);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getUid(this->player_);
    proto::MatchPlayerQuitNotify::set_unit_id((proto::MatchPlayerQuitNotify *const)(v2 + 32), v6);
    proto::MatchPlayerQuitNotify::set_player_uid((proto::MatchPlayerQuitNotify *const)(v2 + 32), uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlayerMatchComp::sendProtoToMatchService<proto::MatchPlayerQuitNotify>(
      this->player_,
      (proto::MatchPlayerQuitNotify *)(v2 + 32));
    proto::MatchPlayerQuitNotify::~MatchPlayerQuitNotify((proto::MatchPlayerQuitNotify *const)(v2 + 32));
  }
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

// Line 1824: range 0000000017D34D0C-0000000017D34EC2
void __cdecl PlayerMatchComp::sendSyncMatchUnitReq(PlayerMatchComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::MatchUnit *matched; // rdx
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 8 req:1825";
  *(_QWORD *)(v1 + 16) = PlayerMatchComp::sendSyncMatchUnitReq;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::SyncMatchUnitReq::SyncMatchUnitReq((proto::SyncMatchUnitReq *const)(v1 + 32));
  matched = proto::SyncMatchUnitReq::mutable_match_unit((proto::SyncMatchUnitReq *const)(v1 + 32));
  PlayerMatchComp::fillMatchUnit(this, matched);
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  proto::SyncMatchUnitReq::set_match_type((proto::SyncMatchUnitReq *const)(v1 + 32), this->match_info_.match_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerMatchComp::sendProtoToMatchService<proto::SyncMatchUnitReq>(this->player_, (proto::SyncMatchUnitReq *)(v1 + 32));
  proto::SyncMatchUnitReq::~SyncMatchUnitReq((proto::SyncMatchUnitReq *const)(v1 + 32));
  if ( v5 == (char *)v1 )
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

// Line 1833: range 0000000017D34EC4-0000000017D34EF7
void __cdecl PlayerMatchComp::onMatchSyncTimer(PlayerMatchComp *const this, uint64_t now_ms)
{
  if ( PlayerMatchComp::isInMatch(this) )
    PlayerMatchComp::sendSyncMatchUnitReq(this);
};

// Line 1843: range 0000000017D34EF8-0000000017D350CE
uint32_t __cdecl PlayerMatchComp::getMatchTargetId(const PlayerMatchComp *const this)
{
  uint32_t result; // eax

  if ( !PlayerMatchComp::isInMatch(this) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  switch ( this->match_info_.match_type )
  {
    case MATCH_TYPE_DUNGEON:
      if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.dungeon_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.dungeon_id >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->match_info_.dungeon_id);
      }
      result = this->match_info_.dungeon_id;
      break;
    case MATCH_TYPE_MP_PLAY:
      if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_info_.mp_play_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_info_.mp_play_id);
      }
      result = this->match_info_.mp_play_id;
      break;
    case MATCH_TYPE_MECHANICUS:
      if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.mechanicus_difficult_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->match_info_.mechanicus_difficult_level >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->match_info_.mechanicus_difficult_level);
      }
      result = this->match_info_.mechanicus_difficult_level;
      break;
    case MATCH_TYPE_GENERAL:
      if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_info_.match_id);
      }
      result = this->match_info_.match_id;
      break;
    case MATCH_TYPE_GCG:
      if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->match_info_.match_id);
      }
      result = this->match_info_.match_id;
      break;
    default:
      result = 0;
      break;
  }
  return result;
};

// Line 1868: range 0000000017D350D0-0000000017D35833
int32_t __cdecl PlayerMatchComp::onGeneralMatchFinishNotify(
        PlayerMatchComp *const this,
        const proto::GeneralMatchFinishNotify *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t Uid; // eax
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  common::minet::Packet *v8; // r14
  GameserverApp *v9; // rax
  uint32_t AppId; // eax
  PlayerMpComp *MpComp; // rax
  common::minet::Packet *v12; // rax
  NetworkMgrBase *v13; // r14
  uint32_t v14; // r8d
  const google::protobuf::RepeatedPtrField<proto::MatchPlayer> *matched; // r15
  uint32_t v16; // r14d
  uint32_t v17; // esi
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-16Ch] BYREF
  unsigned int v28; // [rsp+28h] [rbp-168h] BYREF
  uint32_t self_uid; // [rsp+2Ch] [rbp-164h]
  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::const_iterator __for_end; // [rsp+38h] [rbp-158h] BYREF
  const google::protobuf::RepeatedPtrField<proto::MatchPlayer> *__for_range; // [rsp+40h] [rbp-150h]
  const proto::MatchPlayer *match_player; // [rsp+48h] [rbp-148h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v35; // [rsp+60h] [rbp-130h] BYREF
  char v36[272]; // [rsp+80h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 8 uid:1889 48 16 15 packet_ptr:1878 80 32 18 agreed_notify:1874 144 48 12 uid_set:1886";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::onGeneralMatchFinishNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862726] = -202116109;
  proto::PlayerMatchAgreedResultNotify::PlayerMatchAgreedResultNotify((proto::PlayerMatchAgreedResultNotify *const)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  proto::PlayerMatchAgreedResultNotify::set_target_uid((proto::PlayerMatchAgreedResultNotify *const)(v2 + 80), Uid);
  proto::PlayerMatchAgreedResultNotify::set_match_type(
    (proto::PlayerMatchAgreedResultNotify *const)(v2 + 80),
    MATCH_TYPE_GENERAL);
  proto::PlayerMatchAgreedResultNotify::set_reason(
    (proto::PlayerMatchAgreedResultNotify *const)(v2 + 80),
    PlayerMatchAgreedResultNotify_Reason_SUCC);
  common::minet::PacketUtils::createPacket<proto::PlayerMatchAgreedResultNotify>((const proto::PlayerMatchAgreedResultNotify *)(v2 + 48));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/match/player_match_comp.cpp",
      "onGeneralMatchFinishNotify",
      1881);
    v6 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v35,
           (const char (*)[26])"createPacket failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v35);
    v7 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    self_uid = Player::getUid(this->player_);
    v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    v9 = Singleton<GameserverApp>::instance();
    AppId = AppBase::getAppId((AppBase *const)v9);
    common::minet::Packet::setSource(v8, 3u, AppId);
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 144));
    __for_range = proto::GeneralMatchFinishNotify::match_player_list(notify);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      match_player = google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator*(&__for_begin);
      *(_DWORD *)(v2 + 32) = proto::MatchPlayer::uid(match_player);
      std::set<unsigned int>::insert(
        (std::set<unsigned int> *const)(v2 + 144),
        (const std::set<unsigned int>::value_type *)(v2 + 32));
      if ( self_uid != *(_DWORD *)(v2 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MpComp = Player::getMpComp(this->player_);
        PlayerMpComp::setEnterAllowPlayerUid(MpComp, *(_DWORD *)(v2 + 32));
        v12 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
        common::minet::Packet::setUserId(v12, *(_DWORD *)(v2 + 32));
        v13 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
        std::shared_ptr<common::minet::Packet>::shared_ptr(
          &packet_ptr,
          (const std::shared_ptr<common::minet::Packet> *)(v2 + 48));
        NetworkMgrBase::sendPacketToTargetService(v13, (common::minet::PacketPtr)__PAIR128__(3LL, &packet_ptr), 0, v14);
        std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>::operator++(&__for_begin);
    }
    matched = proto::GeneralMatchFinishNotify::match_player_list(notify);
    v16 = proto::GeneralMatchFinishNotify::match_param(notify);
    v17 = proto::GeneralMatchFinishNotify::match_id(notify);
    PlayerMatchComp::onGeneralMatchSucc(this, v17, v16, matched);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/match/player_match_comp.cpp",
      "onGeneralMatchFinishNotify",
      1902);
    v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v35, (const char (*)[10])"match_id:");
    val = proto::GeneralMatchFinishNotify::match_id(notify);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
    v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" match_target:");
    v28 = proto::GeneralMatchFinishNotify::match_param(notify);
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v28);
    v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" uid_list:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int>(v22, (const std::set<unsigned int> *)(v2 + 144));
    v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" cur_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v35);
    v7 = 0;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 144));
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 48));
  proto::PlayerMatchAgreedResultNotify::~PlayerMatchAgreedResultNotify((proto::PlayerMatchAgreedResultNotify *const)(v2 + 80));
  result = v7;
  if ( v36 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 1907: range 0000000017D3585A-0000000017D37345
void __fastcall PlayerMatchComp::onGeneralMatchSucc(
        PlayerMatchComp *const this,
        uint32_t match_id,
        uint32_t match_target,
        const google::protobuf::RepeatedPtrField<proto::MatchPlayer> *match_player_list)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  std::set<unsigned int>::iterator v12; // rax
  std::insert_iterator<std::set<unsigned int> > v13; // rax
  std::set<unsigned int> *container; // r14
  const std::_Rb_tree_node_base *M_node; // r15
  google::protobuf::RepeatedPtrField<proto::MatchPlayer>::const_iterator v16; // rax
  std::insert_iterator<std::set<unsigned int> > v17; // rdx
  PlayerMatchComp::onGeneralMatchSucc::<lambda(const proto::MatchPlayer&)> v18; // r8
  common::milog::MiLogStream *v19; // r14
  HideAndSeekActivity *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int gallery_id; // edi
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // r14
  uint32_t v27; // eax
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  const std::vector<unsigned int> *GmLevelIdVec; // r15
  uint32_t v31; // r14d
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rax
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v34; // rax
  std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  common::milog::MiLogStream *v36; // rax
  DungeonScene *v37; // rax
  DungeonScene *v38; // rax
  DungeonScene *v39; // rax
  DungeonSceneTeam *DungeonSceneTeam; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  uint32_t SceneId; // ecx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  unsigned __int64 v44; // rdx
  common::milog::MiLogStream *v45; // r14
  PlayerWorld *v46; // rax
  PlayerDungeonComp *DungeonComp; // r14
  PlayerSceneComp *SceneComp; // rax
  uint32_t CurSceneId; // r15d
  bool v50; // r14
  common::milog::MiLogStream *v51; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // r14
  common::milog::MiLogStream *v55; // r14
  PlayerDungeonComp *v56; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  const Vector3 *Position; // r15
  PlayerSceneComp *v60; // rax
  uint32_t v61; // eax
  common::milog::MiLogStream *v62; // r14
  BrickBreakerActivity *v63; // rax
  common::milog::MiLogStream *v64; // r14
  SeaLampV3Activity *v65; // r15
  uint32_t v66; // r14d
  void *const *__lasta; // [rsp+10h] [rbp-280h]
  const Vector3 *__last; // [rsp+10h] [rbp-280h]
  unsigned int val; // [rsp+3Ch] [rbp-254h] BYREF
  const data::MatchExcelConfig *match_config_ptr; // [rsp+40h] [rbp-250h]
  const data::ActivityIslandPartyStageExcelConfig *stage_config_ptr; // [rsp+48h] [rbp-248h]
  common::milog::MiLogStream v75; // [rsp+50h] [rbp-240h] BYREF
  std::set<unsigned int> p_uid_set; // [rsp+70h] [rbp-220h] BYREF
  char v77[496]; // [rsp+A0h] [rbp-1F0h] BYREF

  v4 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "10 48 4 8 ret:1915 64 4 13 stage_id:1971 80 4 13 stage_id:1952 96 4 13 match_id:1906 112 16 14 w"
                        "orld_ptr:1964 144 16 17 activity_ptr:1972 176 16 22 dungeon_scene_ptr:1979 208 16 17 activity_pt"
                        "r:2045 240 48 12 uid_set:1921 320 96 12 context:1987";
  *(_QWORD *)(v4 + 16) = PlayerMatchComp::onGeneralMatchSucc;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = 61956;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862729] = -218959118;
  v6[536862733] = -202116109;
  *(_DWORD *)(v4 + 96) = match_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 208));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
  match_config_ptr = data::MatchExcelConfigMgrBase::findMatchExcelConfig(
                       &v7->design_config.txt_config_mgr.match_config_mgr,
                       *(_DWORD *)(v4 + 96));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
  if ( match_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::checkMpModeAvailability((std::pair<int,std::vector<unsigned int> > *)&v75, this->player_);
    *(_DWORD *)(v4 + 48) = v75.log_;
    std::pair<int,std::vector<unsigned int>>::~pair((std::pair<int,std::vector<unsigned int> > *const)&v75);
    if ( *(_DWORD *)(v4 + 48) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/match/player_match_comp.cpp",
        "onGeneralMatchSucc",
        1918);
      v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v75,
              (const char (*)[31])"player can not enter mp mode: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v11, (const int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v75);
      goto LABEL_110;
    }
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 240));
    v12._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v4 + 240))._M_node;
    v13 = std::inserter<std::set<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>>(
            (std::set<unsigned int> *)(v4 + 240),
            v12);
    container = v13.container;
    M_node = v13.iter._M_node;
    __lasta = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::end(match_player_list).it_;
    v16.it_ = google::protobuf::RepeatedPtrField<proto::MatchPlayer>::begin(match_player_list).it_;
    v17.container = container;
    v17.iter._M_node = M_node;
    std::transform<google::protobuf::internal::RepeatedPtrIterator<proto::MatchPlayer const>,std::insert_iterator<std::set<unsigned int>>,PlayerMatchComp::onGeneralMatchSucc(unsigned int,unsigned int,google::protobuf::RepeatedPtrField<proto::MatchPlayer> const&)::{lambda(proto::MatchPlayer const&)#1}>(
      v16,
      (google::protobuf::internal::RepeatedPtrIterator<const proto::MatchPlayer>)__lasta,
      v17,
      v18);
    if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->match_sub_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->match_sub_type >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&match_config_ptr->match_sub_type);
    }
    switch ( match_config_ptr->match_sub_type )
    {
      case MATCH_SUB_TYPE_HIDE:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<HideAndSeekActivity>((PlayerActivityComp *const)(v4 + 208));
        if ( std::operator==<HideAndSeekActivity>(0LL, (const std::shared_ptr<HideAndSeekActivity> *)(v4 + 208)) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onGeneralMatchSucc",
            1934);
          v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v75,
                  (const char (*)[31])"activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
        else
        {
          v20 = std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HideAndSeekActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
          if ( HideAndSeekActivity::startHideAndSeekByMatch(v20, *(_DWORD *)(v4 + 96), match_target, match_player_list) )
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/match/player_match_comp.cpp",
              "onGeneralMatchSucc",
              1939);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v75,
              (const char (*)[31])"startHideAndSeekByMatch failed");
            common::milog::MiLogStream::~MiLogStream(&v75);
          }
        }
        std::shared_ptr<HideAndSeekActivity>::~shared_ptr((std::shared_ptr<HideAndSeekActivity> *const)(v4 + 208));
        goto LABEL_109;
      case MATCH_SUB_TYPE_ISLAND_PARTY:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<IslandPartyActivity>((PlayerActivityComp *const)(v4 + 176));
        if ( std::operator==<IslandPartyActivity>(0LL, (const std::shared_ptr<IslandPartyActivity> *)(v4 + 176)) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onGeneralMatchSucc",
            1949);
          v21 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v75,
                  (const char (*)[31])"activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
        else
        {
          *(_DWORD *)(v4 + 80) = match_target;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v4 + 208));
          v22 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
          stage_config_ptr = data::ActivityIslandPartyExcelConfigMgrBase::findActivityIslandPartyStageExcelConfig(
                               &v22->design_config.txt_config_mgr.activity_island_party_mgr,
                               *(_DWORD *)(v4 + 80));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
          if ( stage_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&stage_config_ptr->gallery_id);
            }
            gallery_id = stage_config_ptr->gallery_id;
            if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->match_sub_type >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->match_sub_type >> 3)
                                                                              + 0x7FFF8000) )
            {
              gallery_id = (_DWORD)match_config_ptr + 12;
              __asan_report_load4(&match_config_ptr->match_sub_type);
            }
            PlayerMatchComp::prepareAutoStartGalleryOnGeneralMatchSucc(
              this,
              match_config_ptr->match_sub_type,
              gallery_id,
              (const std::set<unsigned int> *)(v4 + 240));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/match/player_match_comp.cpp",
              "onGeneralMatchSucc",
              1956);
            v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    &v75,
                    (const char (*)[28])"stage id invalid, stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v75);
          }
        }
        std::shared_ptr<IslandPartyActivity>::~shared_ptr((std::shared_ptr<IslandPartyActivity> *const)(v4 + 176));
        goto LABEL_109;
      case MATCH_SUB_TYPE_CHAR_AMUSEMENT:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getSceneComp(this->player_);
        PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 112));
        if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 112), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onGeneralMatchSucc",
            1967);
          v25 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v75,
                  (const char (*)[21])"world is null, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
        else
        {
          *(_DWORD *)(v4 + 64) = match_target;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getActivityComp(this->player_);
          PlayerActivityComp::findOpenningActivity<CharAmusementActivity>((PlayerActivityComp *const)(v4 + 144));
          if ( std::operator==<CharAmusementActivity>((const std::shared_ptr<CharAmusementActivity> *)(v4 + 144), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/match/player_match_comp.cpp",
              "onGeneralMatchSucc",
              1975);
            v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v75,
                    (const char (*)[31])"activity is not opening, uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 80));
            common::milog::MiLogStream::~MiLogStream(&v75);
          }
          else
          {
            v27 = (unsigned int)std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
            CharAmusementActivity::createActivityDungeon((CharAmusementActivity *const)(v4 + 176), v27);
            if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v4 + 176), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/player/match/player_match_comp.cpp",
                "onGeneralMatchSucc",
                1982);
              v28 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v75,
                      (const char (*)[33])"create dungeon failed, stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v4 + 64));
              common::milog::MiLogStream::~MiLogStream(&v75);
            }
            else
            {
              CharAmusementDungeonContext::CharAmusementDungeonContext((CharAmusementDungeonContext *const)(v4 + 320));
              v29 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              GmLevelIdVec = CharAmusementActivity::getGmLevelIdVec(v29);
              v31 = *(_DWORD *)(v4 + 64);
              v32 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
              ScheduleId = BaseActivity::getScheduleId(v32);
              if ( CharAmusementDungeonContext::init(
                     (CharAmusementDungeonContext *const)(v4 + 320),
                     ScheduleId,
                     v31,
                     (const std::set<unsigned int> *)(v4 + 240),
                     GmLevelIdVec) )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/match/player_match_comp.cpp",
                  "onGeneralMatchSucc",
                  1990);
                v34 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        &v75,
                        (const char (*)[39])"init dungeon context failed, uid_set: ");
                common::milog::MiLogStream::operator<<<unsigned int>(v34, (const std::set<unsigned int> *)(v4 + 240));
                common::milog::MiLogStream::~MiLogStream(&v75);
              }
              else
              {
                v35 = std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CharAmusementActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
                CharAmusementActivity::clearGmLevelIdVec(v35);
                if ( CharAmusementDungeonContext::randomAssignTrialAvatar((CharAmusementDungeonContext *const)(v4 + 320)) )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/match/player_match_comp.cpp",
                    "onGeneralMatchSucc",
                    1997);
                  v36 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                          &v75,
                          (const char (*)[45])"random assign trial avatar failed, uid_set: ");
                  common::milog::MiLogStream::operator<<<unsigned int>(v36, (const std::set<unsigned int> *)(v4 + 240));
                  common::milog::MiLogStream::~MiLogStream(&v75);
                }
                else
                {
                  *(_DWORD *)(v4 + 404) = *(_DWORD *)(v4 + 96);
                  v37 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                  DungeonScene::setDungeonExtraData<CharAmusementDungeonContext>(
                    v37,
                    (const CharAmusementDungeonContext *)(v4 + 320));
                  v38 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                  DungeonScene::setTeamUidSet(v38, (const std::set<unsigned int> *)(v4 + 240));
                  v39 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                  DungeonSceneTeam = DungeonScene::getDungeonSceneTeam(v39);
                  v41 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                  SceneId = Scene::getSceneId((const Scene *const)v41);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  DungeonSceneTeam::initSceneTeam(DungeonSceneTeam, this->player_, SceneId);
                  v43 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
                  if ( *(_BYTE *)(((unsigned __int64)v43 >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  v44 = (unsigned __int64)(v43->_vptr_World + 23);
                  if ( *(_BYTE *)((v44 >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v44)(v43) != 1 )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/match/player_match_comp.cpp",
                      "onGeneralMatchSucc",
                      2012);
                    v45 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                            &v75,
                            (const char (*)[55])"char amusement match succ, set world in mp mode, uid: ");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v45,
                      (const unsigned int *)(v4 + 80));
                    common::milog::MiLogStream::~MiLogStream(&v75);
                    v46 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
                    PlayerWorld::setIsInMpMode(v46, 1);
                  }
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  DungeonComp = Player::getDungeonComp(this->player_);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  SceneComp = Player::getSceneComp(this->player_);
                  CurSceneId = PlayerSceneComp::getCurSceneId(SceneComp);
                  std::shared_ptr<DungeonScene>::shared_ptr(
                    (std::shared_ptr<DungeonScene> *const)(v4 + 208),
                    (const std::shared_ptr<DungeonScene> *)(v4 + 176));
                  v50 = PlayerDungeonComp::enterDungeon(DungeonComp, (DungeonScenePtr *)(v4 + 208), CurSceneId, 0) != 0;
                  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 208));
                  if ( v50 )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/match/player_match_comp.cpp",
                      "onGeneralMatchSucc",
                      2019);
                    v51 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                            &v75,
                            (const char (*)[34])"enter dungeon failed, dungeon_id:");
                    v52 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 176));
                    val = DungeonScene::getDungeonId(v52);
                    v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &val);
                    v54 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                            v53,
                            (const char (*)[7])", uid:");
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v54,
                      (const unsigned int *)(v4 + 80));
                    common::milog::MiLogStream::~MiLogStream(&v75);
                  }
                  else
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8();
                    Player::getCurAvatar((Player *const)(v4 + 208));
                    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v4 + 208), 0LL) )
                    {
                      common::milog::MiLogStream::create(
                        &v75,
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/player/match/player_match_comp.cpp",
                        "onGeneralMatchSucc",
                        2025);
                      v55 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                              &v75,
                              (const char (*)[26])off_263A23C0);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v55,
                        (const unsigned int *)(v4 + 80));
                      common::milog::MiLogStream::~MiLogStream(&v75);
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v56 = Player::getDungeonComp(this->player_);
                      v57 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
                      __last = Entity::getRotation((const Entity *const)v57);
                      v58 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
                      Position = Entity::getPosition((const Entity *const)v58);
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8();
                      v60 = Player::getSceneComp(this->player_);
                      v61 = PlayerSceneComp::getCurSceneId(v60);
                      PlayerDungeonComp::setQuitPosRot(v56, v61, Position, __last);
                    }
                    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 208));
                  }
                }
              }
              CharAmusementDungeonContext::~CharAmusementDungeonContext((CharAmusementDungeonContext *const)(v4 + 320));
            }
            std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 176));
          }
          std::shared_ptr<CharAmusementActivity>::~shared_ptr((std::shared_ptr<CharAmusementActivity> *const)(v4 + 144));
        }
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 112));
        goto LABEL_109;
      case MATCH_SUB_TYPE_BRICK_BREAKER:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<BrickBreakerActivity>((PlayerActivityComp *const)(v4 + 208));
        if ( std::operator==<BrickBreakerActivity>(0LL, (const std::shared_ptr<BrickBreakerActivity> *)(v4 + 208)) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onGeneralMatchSucc",
            2037);
          v62 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  &v75,
                  (const char (*)[31])"activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v75);
        }
        else
        {
          v63 = std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BrickBreakerActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
          BrickBreakerActivity::initBrickBreakerPlay(
            v63,
            match_target,
            (const std::set<unsigned int> *)(v4 + 240),
            *(_DWORD *)(v4 + 96));
        }
        std::shared_ptr<BrickBreakerActivity>::~shared_ptr((std::shared_ptr<BrickBreakerActivity> *const)(v4 + 208));
        goto LABEL_109;
      case MATCH_SUB_TYPE_LAN_V3_BOAT_GAME_MULTI:
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::getActivityComp(this->player_);
        PlayerActivityComp::findOpenningActivity<SeaLampV3Activity>((PlayerActivityComp *const)(v4 + 208));
        if ( std::operator==<SeaLampV3Activity>(0LL, (const std::shared_ptr<SeaLampV3Activity> *)(v4 + 208)) )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onGeneralMatchSucc",
            2048);
          v64 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  &v75,
                  (const char (*)[46])"[LAN_V3_MULTI] activity is not opening, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          v65 = std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SeaLampV3Activity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
          v66 = *(_DWORD *)(v4 + 96);
          std::set<unsigned int>::set(&p_uid_set, (const std::set<unsigned int> *)(v4 + 240));
          LOBYTE(v66) = SeaLampV3Activity::startLanV3BoatPlay(v65, &p_uid_set, 0, v66) != 0;
          std::set<unsigned int>::~set(&p_uid_set);
          if ( !(_BYTE)v66 )
            goto LABEL_108;
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/match/player_match_comp.cpp",
            "onGeneralMatchSucc",
            2053);
          v64 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v75,
                  (const char (*)[48])"[LAN_V3_MULTI] startLanV3BoatPlay failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v64, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v75);
LABEL_108:
        std::shared_ptr<SeaLampV3Activity>::~shared_ptr((std::shared_ptr<SeaLampV3Activity> *const)(v4 + 208));
LABEL_109:
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 240));
        goto LABEL_110;
      default:
        goto LABEL_109;
    }
  }
  common::milog::MiLogStream::create(
    &v75,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/match/player_match_comp.cpp",
    "onGeneralMatchSucc",
    1911);
  v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v75, (const char (*)[10])"match_id:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 96));
  v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v9,
          (const char (*)[23])" config not found uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v4 + 80) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
  common::milog::MiLogStream::~MiLogStream(&v75);
LABEL_110:
  if ( v77 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8034) = 0;
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
  }
};

// Line 1924: range 0000000017D35834-0000000017D35859
unsigned int __cdecl PlayerMatchComp::onGeneralMatchSucc(unsigned int,unsigned int,google::protobuf::RepeatedPtrField<proto::MatchPlayer> const&)::{lambda(proto::MatchPlayer const&)#1}::operator()(
        const PlayerMatchComp::onGeneralMatchSucc::<lambda(const proto::MatchPlayer&)> *const __closure,
        const proto::MatchPlayer *player)
{
  const proto::OnlinePlayerInfo *v2; // rax

  v2 = proto::MatchPlayer::player_info(player);
  return proto::OnlinePlayerInfo::uid(v2);
};

// Line 2064: range 0000000017D37346-0000000017D37393
int32_t __cdecl PlayerMatchComp::onPlayerMatchSuccNotify(
        PlayerMatchComp *const this,
        const proto::PlayerMatchSuccNotify *notify)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return Player::sendProto(this->player_, notify);
};

// Line 2070: range 0000000017D37394-0000000017D373E1
int32_t __cdecl PlayerMatchComp::onPlayerGeneralMatchDismissNotify(
        PlayerMatchComp *const this,
        const proto::PlayerGeneralMatchDismissNotify *notify)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return Player::sendProto(this->player_, notify);
};

// Line 2076: range 0000000017D373E2-0000000017D3742F
int32_t __cdecl PlayerMatchComp::onPlayerGeneralMatchConfirmNotify(
        PlayerMatchComp *const this,
        const proto::PlayerGeneralMatchConfirmNotify *notify)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return Player::sendProto(this->player_, notify);
};

// Line 2082: range 0000000017D37430-0000000017D37620
int32_t __cdecl PlayerMatchComp::onPlayerGCGMatchDismissNotify(
        PlayerMatchComp *const this,
        const proto::PlayerGCGMatchDismissNotify *notify)
{
  PlayerGCGComp *GCGComp; // rcx
  uint32_t uid; // [rsp+14h] [rbp-1Ch]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-18h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-10h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  if ( this->match_info_.match_type == MATCH_TYPE_GCG
    && proto::PlayerGCGMatchDismissNotify::reason(notify) == MATCH_CONFIRM_TIMEOUT )
  {
    __for_range = proto::PlayerGCGMatchDismissNotify::uid_list(notify);
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__for_begin);
      }
      uid = *__for_begin;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( uid == Player::getUid(this->player_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GCGComp = Player::getGCGComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->match_info_.match_id);
        }
        PlayerGCGComp::onMatchConfirmRefuse(GCGComp, this->match_info_.match_id);
        break;
      }
      ++__for_begin;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return Player::sendProto(this->player_, notify);
};

// Line 2103: range 0000000017D37622-0000000017D377B4
__int64 __fastcall PlayerMatchComp::getMatchPunishEndTime(PlayerMatchComp *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::pointer v6; // rdx
  uint32_t *p_punish_end_time; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 match_id:2102 64 8 9 iter:2104";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::getMatchPunishEndTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = match_id;
  *(std::map<unsigned int,MatchPunish>::iterator *)(v2 + 64) = std::map<unsigned int,MatchPunish>::find(
                                                                 &this->match_punish_map_,
                                                                 (const std::map<unsigned int,MatchPunish>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,MatchPunish>::end(&this->match_punish_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> > *const)(v2 + 64));
    p_punish_end_time = &v6->second.punish_end_time;
    if ( *(_BYTE *)(((unsigned __int64)p_punish_end_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_punish_end_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_punish_end_time >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(p_punish_end_time);
    }
    result = v6->second.punish_end_time;
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

// Line 2114: range 0000000017D377B6-0000000017D37948
__int64 __fastcall PlayerMatchComp::getMatchPunishTimes(PlayerMatchComp *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::pointer v6; // rdx
  uint32_t *p_punish_times; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 match_id:2113 64 8 9 iter:2115";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::getMatchPunishTimes;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = match_id;
  *(std::map<unsigned int,MatchPunish>::iterator *)(v2 + 64) = std::map<unsigned int,MatchPunish>::find(
                                                                 &this->match_punish_map_,
                                                                 (const std::map<unsigned int,MatchPunish>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,MatchPunish>::end(&this->match_punish_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> > *const)(v2 + 64));
    p_punish_times = &v6->second.punish_times;
    if ( *(_BYTE *)(((unsigned __int64)p_punish_times >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_punish_times & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_punish_times >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(p_punish_times);
    }
    result = v6->second.punish_times;
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

// Line 2124: range 0000000017D3794A-0000000017D37C81
void __fastcall PlayerMatchComp::matchPunish(PlayerMatchComp *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::map<unsigned int,MatchPunish>::mapped_type *v5; // rax
  uint32_t v6; // ecx
  char v7; // dl
  char *v8; // rsi
  __int64 v9; // rdx
  MatchExcelConfigMgr *p_match_config_mgr; // rcx
  char *v11; // rsi
  const unsigned int *v12; // rax
  _DWORD *v13; // rdx
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  uint32_t punish_time; // [rsp+14h] [rbp-9Ch]
  MatchPunish *punish; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-90h] BYREF
  char v20[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 now:2125 64 4 13 match_id:2123";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::matchPunish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = match_id;
  *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::getNow();
  PlayerMatchComp::refreshMatchPunish(this, *(_DWORD *)(v2 + 48));
  v8 = (char *)(v2 + 64);
  v5 = std::map<unsigned int,MatchPunish>::operator[](
         &this->match_punish_map_,
         (const std::map<unsigned int,MatchPunish>::key_type *)(v2 + 64));
  punish = v5;
  v6 = *(_DWORD *)(v2 + 64);
  v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
  LOBYTE(v8) = v7 != 0;
  v9 = (v7 != 0) & (unsigned __int8)((char)(((unsigned __int8)v5 & 7) + 3) >= v7);
  if ( (_BYTE)v9 )
    __asan_report_store4(v5, v8, v9);
  punish->match_id = v6;
  if ( *(_BYTE *)(((unsigned __int64)&punish->punish_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)punish + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&punish->punish_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&punish->punish_times);
  }
  ++punish->punish_times;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_match_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.match_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&punish->punish_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)punish + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&punish->punish_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&punish->punish_times);
  }
  punish_time = MatchExcelConfigMgr::getMatchPunishTime(p_match_config_mgr, punish->punish_times);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  v11 = (char *)(v2 + 48);
  v12 = std::max<unsigned int>(&punish->punish_end_time, (const unsigned int *)(v2 + 48));
  v13 = v12;
  if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v12);
  }
  v14 = *v13 + punish_time;
  v15 = *(_BYTE *)(((unsigned __int64)&punish->punish_end_time >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)punish + 8) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&punish->punish_end_time, v11, v16);
  punish->punish_end_time = v14;
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

// Line 2137: range 0000000017D37C82-0000000017D380C1
void __cdecl PlayerMatchComp::refreshMatchPunish(PlayerMatchComp *const this, uint32_t now)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  time_t v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::pointer v8; // rax
  unsigned int *v9; // rax
  int *v10; // rdx
  int v11; // ecx
  uint32_t day_offset; // [rsp+18h] [rbp-C8h]
  uint32_t last_refresh_day; // [rsp+1Ch] [rbp-C4h]
  uint32_t now_day; // [rsp+20h] [rbp-C0h]
  MatchPunish *punish; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-B0h] BYREF
  char v17[160]; // [rsp+40h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 18 recover_count:2146 64 8 9 iter:2147 96 8 13 tmp_iter:2149";
  *(_QWORD *)(v2 + 16) = PlayerMatchComp::refreshMatchPunish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  v6 = day_offset;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_punish_refresh_time_);
  }
  last_refresh_day = common::tools::TimeUtils::getTimeDay(this->last_punish_refresh_time_, v6);
  now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
  if ( last_refresh_day < now_day )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    *(_DWORD *)(v2 + 48) = (now_day - last_refresh_day)
                         * ConstValueExcelConfigMgr::getMatchPunishDailyRecover(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v16);
    *(std::map<unsigned int,MatchPunish>::iterator *)(v2 + 64) = std::map<unsigned int,MatchPunish>::begin(&this->match_punish_map_);
    while ( 1 )
    {
      *(std::map<unsigned int,MatchPunish>::iterator *)(v2 + 96) = std::map<unsigned int,MatchPunish>::end(&this->match_punish_map_);
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::_Self *)(v2 + 64),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::_Self *)(v2 + 96)) )
        break;
      *(std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> >::_Self *)(v2 + 96) = std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish>>::operator++(
                                                                                                  (std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> > *const)(v2 + 64),
                                                                                                  0);
      v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MatchPunish> > *const)(v2 + 96));
      punish = &v8->second;
      v9 = (unsigned int *)std::min<unsigned int>(&v8->second.punish_times, (const unsigned int *)(v2 + 48));
      v10 = (int *)v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      v11 = *v10;
      if ( *(_BYTE *)(((unsigned __int64)&punish->punish_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)punish + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&punish->punish_times >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&punish->punish_times);
      }
      punish->punish_times -= v11;
      if ( !punish->punish_times )
      {
        if ( *(_BYTE *)(((unsigned __int64)&punish->punish_end_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)punish + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&punish->punish_end_time >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&punish->punish_end_time);
        }
        if ( now > punish->punish_end_time )
          std::map<unsigned int,MatchPunish>::erase[abi:cxx11](
            &this->match_punish_map_,
            *(std::map<unsigned int,MatchPunish>::iterator *)(v2 + 96));
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_punish_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_punish_refresh_time_, v2 + 96, &this->last_punish_refresh_time_);
    }
    this->last_punish_refresh_time_ = now;
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
};

// Line 2161: range 0000000017D380C2-0000000017D38171
bool __cdecl PlayerMatchComp::isAfterGeneralMatch(PlayerMatchComp *const this)
{
  uint32_t last_general_match_succ_time; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t now; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_general_match_succ_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_general_match_succ_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_general_match_succ_time_);
  }
  last_general_match_succ_time = this->last_general_match_succ_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  LOBYTE(last_general_match_succ_time) = now <= last_general_match_succ_time
                                              + ConstValueExcelConfigMgr::getSingleMpMatchValidTime(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return last_general_match_succ_time;
};

// Line 2167: range 0000000017D38172-0000000017D3836B
void __cdecl PlayerMatchComp::cancelGeneralMatch(PlayerMatchComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 notify:2173";
  *(_QWORD *)(v1 + 16) = PlayerMatchComp::cancelGeneralMatch;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->match_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->match_info_);
  }
  if ( this->match_info_.match_type == MATCH_TYPE_GENERAL )
  {
    PlayerMatchComp::cancelMatch(this);
    proto::ServerTryCancelGeneralMatchNotify::ServerTryCancelGeneralMatchNotify((proto::ServerTryCancelGeneralMatchNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->match_info_.match_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->match_info_.match_id);
    }
    proto::ServerTryCancelGeneralMatchNotify::set_match_id(
      (proto::ServerTryCancelGeneralMatchNotify *const)(v1 + 32),
      this->match_info_.match_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
    proto::ServerTryCancelGeneralMatchNotify::~ServerTryCancelGeneralMatchNotify((proto::ServerTryCancelGeneralMatchNotify *const)(v1 + 32));
  }
  if ( v4 == (char *)v1 )
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

// Line 2179: range 0000000017D3836C-0000000017D38D8D
__int64 __fastcall PlayerMatchComp::prepareAutoStartGalleryOnGeneralMatchSucc(
        PlayerMatchComp *const this,
        unsigned int sub_type,
        uint32_t gallery_id,
        const std::set<unsigned int> *uid_set)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // r14
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v12; // rax
  unsigned int *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  Scene *v19; // rax
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  const std::set<unsigned int> *v23; // r9
  common::milog::MiLogStream *v24; // rax
  SceneTransferAwaiter *v25; // rax
  Scene *v26; // rax
  SceneGalleryComp *GalleryComp; // r14
  std::shared_ptr<SceneTransferAwaiter> *v28; // rax
  __int64 result; // rax
  const unsigned int *v30; // [rsp+0h] [rbp-190h]
  unsigned int *v31; // [rsp+8h] [rbp-188h]
  PlayerSceneComp *SceneComp; // [rsp+10h] [rbp-180h]
  const data::GalleryExcelConfig *gallery_config_ptr; // [rsp+30h] [rbp-160h]
  const GroupScriptConfig *group_config_ptr; // [rsp+40h] [rbp-150h]
  const PointScriptConfig *point_config_ptr; // [rsp+48h] [rbp-148h]
  std::shared_ptr<Config> v38; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-130h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-110h] BYREF
  unsigned int v41[52]; // [rsp+C0h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v41;
  v31 = v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 22 transfer_group_id:2193 48 4 20 point_config_id:2202 64 4 13 sub_type:2178 80 4 15 gall"
                        "ery_id:2178 96 16 14 scene_ptr:2180 128 16 16 awaiter_ptr:2220";
  *(_QWORD *)(v4 + 16) = PlayerMatchComp::prepareAutoStartGalleryOnGeneralMatchSucc;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 64) = sub_type;
  *(_DWORD *)(v4 + 80) = gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 96));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/match/player_match_comp.cpp",
      "prepareAutoStartGalleryOnGeneralMatchSucc",
      2183);
    v7 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v39,
           (const char (*)[24])"host not in scene, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    v8 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
    gallery_config_ptr = data::GalleryExcelConfigMgrBase::findGalleryExcelConfig(
                           &v9->design_config.txt_config_mgr.gallery_config_mgr,
                           *(_DWORD *)(v4 + 80));
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( gallery_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)gallery_config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gallery_config_ptr->transfer_group_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&gallery_config_ptr->transfer_group_id);
      }
      *(_DWORD *)(v4 + 32) = gallery_config_ptr->transfer_group_id;
      if ( std::vector<unsigned int>::empty(&gallery_config_ptr->transfer_config_id_list) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/match/player_match_comp.cpp",
          "prepareAutoStartGalleryOnGeneralMatchSucc",
          2198);
        v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v39,
                (const char (*)[51])"transfer point config id vec is null, gallery_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v39);
        v8 = -1;
      }
      else
      {
        v12 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::front(&gallery_config_ptr->transfer_config_id_list);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v4 + 48) = *v13;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v38);
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
        group_config_ptr = LuaConfigMgr::findGroupScriptConfig(&v14->design_config.lua_config_mgr, *(_DWORD *)(v4 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v38);
        if ( group_config_ptr )
        {
          point_config_ptr = GroupScriptConfig::findPointConfig(group_config_ptr, *(_DWORD *)(v4 + 48));
          if ( point_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SceneComp = Player::getSceneComp(this->player_);
            memset(&p_reason, 0, sizeof(p_reason));
            TransferReason::TransferReason(&p_reason);
            v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
            v20 = PlayerSceneComp::jumpToScene(
                    SceneComp,
                    v19,
                    &point_config_ptr->pos,
                    &point_config_ptr->rot,
                    0,
                    &p_reason) != 0;
            TransferReason::~TransferReason(&p_reason);
            if ( v20 )
            {
              common::milog::MiLogStream::create(
                &v39,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/match/player_match_comp.cpp",
                "prepareAutoStartGalleryOnGeneralMatchSucc",
                2217);
              v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      &v39,
                      (const char (*)[33])"jumpToScene failed, gallery_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v4 + 80));
              common::milog::MiLogStream::~MiLogStream(&v39);
              v8 = -1;
            }
            else
            {
              *(_QWORD *)(v4 + 128) = 0LL;
              *(_QWORD *)(v4 + 136) = 0LL;
              if ( *(_DWORD *)(v4 + 64) == 3 )
              {
                v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                common::tools::perf::make_shared<IslandPartyMatchGallerySceneTransferAwaiter,Scene &,std::set<unsigned int> const&,unsigned int const&,unsigned int &>(
                  (Scene *)&v38,
                  (const std::set<unsigned int> *)v22,
                  (const unsigned int *)uid_set,
                  &gallery_config_ptr->transfer_timeout,
                  (Scene *)(v4 + 80),
                  v23,
                  v30,
                  v41);
                std::shared_ptr<SceneTransferAwaiter>::operator=<IslandPartyMatchGallerySceneTransferAwaiter>(
                  (std::shared_ptr<SceneTransferAwaiter> *const)(v4 + 128),
                  (std::shared_ptr<IslandPartyMatchGallerySceneTransferAwaiter> *)&v38);
                std::shared_ptr<IslandPartyMatchGallerySceneTransferAwaiter>::~shared_ptr((std::shared_ptr<IslandPartyMatchGallerySceneTransferAwaiter> *const)&v38);
                if ( std::operator==<SceneTransferAwaiter>(
                       (const std::shared_ptr<SceneTransferAwaiter> *)(v4 + 128),
                       0LL) )
                {
                  v8 = -1;
                }
                else
                {
                  v25 = std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<SceneTransferAwaiter,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                  SceneTransferAwaiter::start(v25);
                  v26 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
                  GalleryComp = Scene::getGalleryComp(v26);
                  v28 = std::move<std::shared_ptr<SceneTransferAwaiter> &>((std::shared_ptr<SceneTransferAwaiter> *)(v4 + 128));
                  std::shared_ptr<SceneTransferAwaiter>::shared_ptr(
                    (std::shared_ptr<SceneTransferAwaiter> *const)&v38,
                    v28);
                  SceneGalleryComp::attachSceneTransferAwaiter(GalleryComp, (SceneTransferAwaiterPtr *)&v38);
                  std::shared_ptr<SceneTransferAwaiter>::~shared_ptr((std::shared_ptr<SceneTransferAwaiter> *const)&v38);
                  v8 = 0;
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v39,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/match/player_match_comp.cpp",
                  "prepareAutoStartGalleryOnGeneralMatchSucc",
                  2231);
                v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                        &v39,
                        (const char (*)[19])"invalid sub type: ");
                common::milog::MiLogStream::operator<<<data::MatchSubType,(data::MatchSubType*)0>(
                  v24,
                  (const data::MatchSubType *)(v4 + 64));
                common::milog::MiLogStream::~MiLogStream(&v39);
                v8 = -1;
              }
              std::shared_ptr<SceneTransferAwaiter>::~shared_ptr((std::shared_ptr<SceneTransferAwaiter> *const)(v4 + 128));
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v39,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/match/player_match_comp.cpp",
              "prepareAutoStartGalleryOnGeneralMatchSucc",
              2212);
            v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v39,
                    (const char (*)[35])"point config not found, group_id: ");
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    (const unsigned int *)(v4 + 32));
            v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v17,
                    (const char (*)[14])", config_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
            common::milog::MiLogStream::~MiLogStream(&v39);
            v8 = -1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/match/player_match_comp.cpp",
            "prepareAutoStartGalleryOnGeneralMatchSucc",
            2206);
          v15 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  &v39,
                  (const char (*)[35])"group config not found, group_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v39);
          v8 = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/match/player_match_comp.cpp",
        "prepareAutoStartGalleryOnGeneralMatchSucc",
        2189);
      v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              &v39,
              (const char (*)[39])"gallery config not found, gallery_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v39);
      v8 = -1;
    }
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 96));
  result = v8;
  if ( v31 == (unsigned int *)v4 )
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

// Line 2239: range 0000000017D5C38C-0000000017D5C3AF
void __cdecl GLOBAL__sub_I_merge_single_player_gm_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 2239: range 0000000017D5A71C-0000000017D5C278
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *v11; // rsi
  const boost::system::error_category *ssl_category; // rax
  const boost::system::error_category *stream_category; // rax
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  char v16; // dl
  __int64 v17; // rdx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  char v20; // dl
  __int64 v21; // rdx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  char v24; // dl
  __int64 v25; // rdx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  char v28; // dl
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  char v32; // dl
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  char v36; // dl
  __int64 v37; // rdx
  _BYTE *v38; // rcx
  _BYTE *v39; // rcx
  char v40; // dl
  __int64 v41; // rdx
  const char *v42; // rcx
  _BYTE *v43; // rcx
  _BYTE *v44; // rcx
  char v45; // dl
  __int64 v46; // rdx
  _BYTE *v47; // rcx
  _BYTE *v48; // rcx
  char v49; // dl
  __int64 v50; // rdx
  _BYTE *v51; // rcx
  _BYTE *v52; // rcx
  char v53; // dl
  __int64 v54; // rdx
  const char *v55; // rcx
  _BYTE *v56; // rcx
  _BYTE *v57; // rcx
  char v58; // dl
  __int64 v59; // rdx
  _BYTE *v60; // rcx
  _BYTE *v61; // rcx
  char v62; // dl
  __int64 v63; // rdx
  _BYTE *v64; // rcx
  _BYTE *v65; // rcx
  char v66; // dl
  __int64 v67; // rdx
  _BYTE *v68; // rcx
  _BYTE *v69; // rcx
  char v70; // dl
  __int64 v71; // rdx
  _BYTE *v72; // rcx
  _BYTE *v73; // rcx
  char v74; // dl
  __int64 v75; // rdx
  luabind::detail::class_id v76; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_player_gm_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      std::unordered_map<std::string,std::function<int ()(GmContext &,std::vector<std::string> const&,std::string&)>>::unordered_map(&GmUtils::op_func_map[abi:cxx11]);
      v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&GmUtils::op_func_map[abi:cxx11];
      __cxa_atexit(
        (void (__fastcall *)(void *))std::unordered_map<std::string,std::function<int ()(GmContext &,std::vector<std::string> const&,std::string&)>>::~unordered_map,
        &GmUtils::op_func_map[abi:cxx11],
        &_dso_handle);
      doKickRegister::doKickRegister(&g_doKickRegister);
      doCalcPlayerCompBinSizeRegister::doCalcPlayerCompBinSizeRegister(&g_doCalcPlayerCompBinSizeRegister);
      doCloneAllAvatarToMirrorRegister::doCloneAllAvatarToMirrorRegister(&g_doCloneAllAvatarToMirrorRegister);
      doRemoveAllMirrorAvatarRegister::doRemoveAllMirrorAvatarRegister(&g_doRemoveAllMirrorAvatarRegister);
      doAvatarSnapshotRegister::doAvatarSnapshotRegister(&g_doAvatarSnapshotRegister);
      doTestAddItemBatchWithStackLimitRegister::doTestAddItemBatchWithStackLimitRegister(&g_doTestAddItemBatchWithStackLimitRegister);
      doTestRandExtraRegister::doTestRandExtraRegister(&g_doTestRandExtraRegister);
      doAddMailRegister::doAddMailRegister(&g_doAddMailRegister);
      doGenMapMarkRegister::doGenMapMarkRegister(&g_doGenMapMarkRegister);
      doRunLuaRegister::doRunLuaRegister(&g_doRunLuaRegister);
      doRunCmdRegister::doRunCmdRegister(&g_doRunCmdRegister);
      doCalcExploreExpRegister::doCalcExploreExpRegister(&g_doCalcExploreExpRegister);
      doNotifyH5Register::doNotifyH5Register(&g_doNotifyH5Register);
      procClearRegister::procClearRegister(&g_procClearRegister);
      procSaveRegister::procSaveRegister(&g_procSaveRegister);
      addExpRegister::addExpRegister(&g_addExpRegister);
      funcPerfRegister::funcPerfRegister(&g_funcPerfRegister);
      setLevelRegister::setLevelRegister(&g_setLevelRegister);
      setBreakLevelRegister::setBreakLevelRegister(&g_setBreakLevelRegister);
      killCreatureRegister::killCreatureRegister(&g_killCreatureRegister);
      changeCurHpRegister::changeCurHpRegister(&g_changeCurHpRegister);
      changeStaminaRegister::changeStaminaRegister(&g_changeStaminaRegister);
      procEnergyRegister::procEnergyRegister(&g_procEnergyRegister);
      createMonsterRegister::createMonsterRegister(&g_createMonsterRegister);
      procGadgetRegister::procGadgetRegister(&g_procGadgetRegister);
      createTrifleRegister::createTrifleRegister(&g_createTrifleRegister);
      procGroupRegister::procGroupRegister(&g_procGroupRegister);
      procQuestRegister::procQuestRegister(&g_procQuestRegister);
      unlockPointRegister::unlockPointRegister(&g_unlockPointRegister);
      transToPointRegister::transToPointRegister(&g_transToPointRegister);
      jumpToSceneRegister::jumpToSceneRegister(&g_jumpToSceneRegister);
      questVarOpRegister::questVarOpRegister(&g_questVarOpRegister);
      procDungeonRegister::procDungeonRegister(&g_procDungeonRegister);
      transToPosRegister::transToPosRegister(&g_transToPosRegister);
      enterOtherWorldRegister::enterOtherWorldRegister(&g_enterOtherWorldRegister);
      unlockAreaRegister::unlockAreaRegister(&g_unlockAreaRegister);
      procCityRegister::procCityRegister(&g_procCityRegister);
      procForceRegister::procForceRegister(&g_procForceRegister);
      procHomeBgmRegister::procHomeBgmRegister(&g_procHomeBgmRegister);
      procAvatarRegister::procAvatarRegister(&g_procAvatarRegister);
      reviveAllRegister::reviveAllRegister(&g_reviveAllRegister);
      addItemRegister::addItemRegister(&g_addItemRegister);
      procReliquaryGuaranteeRegister::procReliquaryGuaranteeRegister(&g_procReliquaryGuaranteeRegister);
      procWoodExchangeRegister::procWoodExchangeRegister(&g_procWoodExchangeRegister);
      procAddItemByProtoRegister::procAddItemByProtoRegister(&g_procAddItemByProtoRegister);
      procCheckItemRegister::procCheckItemRegister(&g_procCheckItemRegister);
      addEquipRegister::addEquipRegister(&g_addEquipRegister);
      procWeaponRegister::procWeaponRegister(&g_procWeaponRegister);
      procAbilityRegister::procAbilityRegister(&g_procAbilityRegister);
      setWudiRegister::setWudiRegister(&g_setWudiRegister);
      dropItemRegister::dropItemRegister(&g_dropItemRegister);
      rewardItemRegister::rewardItemRegister(&g_rewardItemRegister);
      procGrantRewardRegister::procGrantRewardRegister(&g_procGrantRewardRegister);
      procTalentRegister::procTalentRegister(&g_procTalentRegister);
      settleDungeonRegister::settleDungeonRegister(&g_settleDungeonRegister);
      procRemindRegister::procRemindRegister(&g_procRemindRegister);
      procSpringRegister::procSpringRegister(&g_procSpringRegister);
      procSkillRegister::procSkillRegister(&g_procSkillRegister);
      procPlayerRegister::procPlayerRegister(&g_procPlayerRegister);
      procBoredRegister::procBoredRegister(&g_procBoredRegister);
      showMcoinRegister::showMcoinRegister(&g_showMcoinRegister);
      addMcoinRegister::addMcoinRegister(&g_addMcoinRegister);
      subMcoinRegister::subMcoinRegister(&g_subMcoinRegister);
      addHcoinRegister::addHcoinRegister(&g_addHcoinRegister);
      subHcoinRegister::subHcoinRegister(&g_subHcoinRegister);
      addScoinRegister::addScoinRegister(&g_addScoinRegister);
      subScoinRegister::subScoinRegister(&g_subScoinRegister);
      addHomeCoinRegister::addHomeCoinRegister(&g_addHomeCoinRegister);
      subHomeCoinRegister::subHomeCoinRegister(&g_subHomeCoinRegister);
      angleRegister::angleRegister(&g_angleRegister);
      changeAuthorityRegister::changeAuthorityRegister(&g_changeAuthorityRegister);
      changeHostRegister::changeHostRegister(&g_changeHostRegister);
      procBuffRegister::procBuffRegister(&g_procBuffRegister);
      playerPauseRegister::playerPauseRegister(&g_playerPauseRegister);
      procMoveRegister::procMoveRegister(&g_procMoveRegister);
      procLoginRegister::procLoginRegister(&g_procLoginRegister);
      procRegionRegister::procRegionRegister(&g_procRegionRegister);
      procOpenStateRegister::procOpenStateRegister(&g_procOpenStateRegister);
      procReconnectRegister::procReconnectRegister(&g_procReconnectRegister);
      notifyEventRegister::notifyEventRegister(&g_notifyEventRegister);
      gmSPlatFormRegister::gmSPlatFormRegister(&g_gmSPlatFormRegister);
      gmExpeditionRegister::gmExpeditionRegister(&g_gmExpeditionRegister);
      gmDungeonTeamRegister::gmDungeonTeamRegister(&g_gmDungeonTeamRegister);
      gmMailRegister::gmMailRegister(&g_gmMailRegister);
      gmMakeDefineRegister::gmMakeDefineRegister(&g_gmMakeDefineRegister);
      gmDataVersionRegister::gmDataVersionRegister(&g_gmDataVersionRegister);
      gmSetDataVersionRegister::gmSetDataVersionRegister(&g_gmSetDataVersionRegister);
      gmSetClientDataVersionRegister::gmSetClientDataVersionRegister(&g_gmSetClientDataVersionRegister);
      gmLuaShellRegister::gmLuaShellRegister(&g_gmLuaShellRegister);
      gmFetterRegister::gmFetterRegister(&g_gmFetterRegister);
      showPropertyRegister::showPropertyRegister(&g_showPropertyRegister);
      dailyTaskRegister::dailyTaskRegister(&g_dailyTaskRegister);
      randTaskRegister::randTaskRegister(&g_randTaskRegister);
      procWorldRegister::procWorldRegister(&g_procWorldRegister);
      procWeatherRegister::procWeatherRegister(&g_procWeatherRegister);
      robotGetPlayerDataRegister::robotGetPlayerDataRegister(&g_robotGetPlayerDataRegister);
      procCombatForceRegister::procCombatForceRegister(&g_procCombatForceRegister);
      procMPRegister::procMPRegister(&g_procMPRegister);
      procGivingRegister::procGivingRegister(&g_procGivingRegister);
      procGadgetGivingRegister::procGadgetGivingRegister(&g_procGadgetGivingRegister);
      procSimulateNextDayRegister::procSimulateNextDayRegister(&g_procSimulateNextDayRegister);
      procSimulateGetLogRegister::procSimulateGetLogRegister(&g_procSimulateGetLogRegister);
      procSimulateBigWorldChestRegister::procSimulateBigWorldChestRegister(&g_procSimulateBigWorldChestRegister);
      procSimulateDungeonRegister::procSimulateDungeonRegister(&g_procSimulateDungeonRegister);
      procSimulateFinishOneDailyTaskRegister::procSimulateFinishOneDailyTaskRegister(&g_procSimulateFinishOneDailyTaskRegister);
      procSimulateFinishOneRandTaskRegister::procSimulateFinishOneRandTaskRegister(&g_procSimulateFinishOneRandTaskRegister);
      gmSimulateExpeditionRegister::gmSimulateExpeditionRegister(&g_gmSimulateExpeditionRegister);
      gmSimulateKillMonsterRegister::gmSimulateKillMonsterRegister(&g_gmSimulateKillMonsterRegister);
      procSimulateAddPlayertimeRegister::procSimulateAddPlayertimeRegister(&g_procSimulateAddPlayertimeRegister);
      procRongZaiRegister::procRongZaiRegister(&g_procRongZaiRegister);
      procInterruptNextTransferRegister::procInterruptNextTransferRegister(&g_procInterruptNextTransferRegister);
      procClimateRegister::procClimateRegister(&g_procClimateRegister);
      procSbuffRegister::procSbuffRegister(&g_procSbuffRegister);
      procGetGameserverAppIdRegister::procGetGameserverAppIdRegister(&g_procGetGameserverAppIdRegister);
      procGetThreadIndexRegister::procGetThreadIndexRegister(&g_procGetThreadIndexRegister);
      procInvestigationRegister::procInvestigationRegister(&g_procInvestigationRegister);
      procPrintRegister::procPrintRegister(&g_procPrintRegister);
      procLockTeamRegister::procLockTeamRegister(&g_procLockTeamRegister);
      procActivityRegister::procActivityRegister(&g_procActivityRegister);
      procActivityMichiaeMatsuriRegister::procActivityMichiaeMatsuriRegister(&g_procActivityMichiaeMatsuriRegister);
      procActivitySeaLampRegister::procActivitySeaLampRegister(&g_procActivitySeaLampRegister);
      procResetWatcherRegister::procResetWatcherRegister(&g_procResetWatcherRegister);
      procActiveWatcherRegister::procActiveWatcherRegister(&g_procActiveWatcherRegister);
      procAddWatcherProgressRegister::procAddWatcherProgressRegister(&g_procAddWatcherProgressRegister);
      procWatcherPushTipsRegister::procWatcherPushTipsRegister(&g_procWatcherPushTipsRegister);
      procTakeActivityWatcherRewardRegister::procTakeActivityWatcherRewardRegister(&g_procTakeActivityWatcherRewardRegister);
      procTestTriggerWatcherRegister::procTestTriggerWatcherRegister(&g_procTestTriggerWatcherRegister);
      procTowerRegister::procTowerRegister(&g_procTowerRegister);
      procWindSeedRegister::procWindSeedRegister(&g_procWindSeedRegister);
      procBossChestRegister::procBossChestRegister(&g_procBossChestRegister);
      procMaterialDeleteRegister::procMaterialDeleteRegister(&g_procMaterialDeleteRegister);
      procAllowSkillRegister::procAllowSkillRegister(&g_procAllowSkillRegister);
      procBlossomRegister::procBlossomRegister(&g_procBlossomRegister);
      procBattlePassRegister::procBattlePassRegister(&g_procBattlePassRegister);
      procSatiationRegister::procSatiationRegister(&g_procSatiationRegister);
      procFriendRegister::procFriendRegister(&g_procFriendRegister);
      procChapterRegister::procChapterRegister(&g_procChapterRegister);
      procMatchRegister::procMatchRegister(&g_procMatchRegister);
      procRechargeRegister::procRechargeRegister(&g_procRechargeRegister);
      procMpPlayRegister::procMpPlayRegister(&g_procMpPlayRegister);
      procGadgetPlayRegister::procGadgetPlayRegister(&g_procGadgetPlayRegister);
      procYaceRegister::procYaceRegister(&g_procYaceRegister);
      procDestroyItemRegister::procDestroyItemRegister(&g_procDestroyItemRegister);
      procFashionRegister::procFashionRegister(&g_procFashionRegister);
      procAddDebugWatcherRegister::procAddDebugWatcherRegister(&g_procAddDebugWatcherRegister);
      procDelDebugWatcherRegister::procDelDebugWatcherRegister(&g_procDelDebugWatcherRegister);
      procPrintWatcherRegister::procPrintWatcherRegister(&g_procPrintWatcherRegister);
      procPrintAllWatcherRegister::procPrintAllWatcherRegister(&g_procPrintAllWatcherRegister);
      procPrintH5ActivityRegister::procPrintH5ActivityRegister(&g_procPrintH5ActivityRegister);
      procPersonalLineRegister::procPersonalLineRegister(&g_procPersonalLineRegister);
      procCodexRegister::procCodexRegister(&g_procCodexRegister);
      procSalesmanRegister::procSalesmanRegister(&g_procSalesmanRegister);
      procShowAvatarBornTimeRegister::procShowAvatarBornTimeRegister(&g_procShowAvatarBornTimeRegister);
      forgePointRegister::forgePointRegister(&g_forgePointRegister);
      AreaExploreRegister::AreaExploreRegister(&g_AreaExploreRegister);
      ASTERRegister::ASTERRegister(&g_ASTERRegister);
      EFFIGYRegister::EFFIGYRegister(&g_EFFIGYRegister);
      procAbilityGroupRegister::procAbilityGroupRegister(&g_procAbilityGroupRegister);
      procSceneTagRegister::procSceneTagRegister(&g_procSceneTagRegister);
      procAnchorRegister::procAnchorRegister(&g_procAnchorRegister);
      procBonfireRegister::procBonfireRegister(&g_procBonfireRegister);
      procReputationRegister::procReputationRegister(&g_procReputationRegister);
      procHuntingRegister::procHuntingRegister(&g_procHuntingRegister);
      procScenePlayRegister::procScenePlayRegister(&g_procScenePlayRegister);
      groupReloadPressRegister::groupReloadPressRegister(&g_groupReloadPressRegister);
      procGroupLuaTestRegister::procGroupLuaTestRegister(&g_procGroupLuaTestRegister);
      procWidgetRegister::procWidgetRegister(&g_procWidgetRegister);
      procPlayTeamEntityRegister::procPlayTeamEntityRegister(&g_procPlayTeamEntityRegister);
      procFlightChallengeEventRegister::procFlightChallengeEventRegister(&g_procFlightChallengeEventRegister);
      procTestReloadRegister::procTestReloadRegister(&g_procTestReloadRegister);
      procOfferingRegister::procOfferingRegister(&g_procOfferingRegister);
      procShopRegister::procShopRegister(&g_procShopRegister);
      procChatRegister::procChatRegister(&g_procChatRegister);
      procReunionRegister::procReunionRegister(&g_procReunionRegister);
      procRoutineRegister::procRoutineRegister(&g_procRoutineRegister);
      procTreasureMapRegister::procTreasureMapRegister(&g_procTreasureMapRegister);
      procDragonSpineRegister::procDragonSpineRegister(&g_procDragonSpineRegister);
      procBlessingActivityRegister::procBlessingActivityRegister(&g_procBlessingActivityRegister);
      procMiracleRingRegister::procMiracleRingRegister(&g_procMiracleRingRegister);
      procMechanicusRegister::procMechanicusRegister(&g_procMechanicusRegister);
      procFoundationRegister::procFoundationRegister(&g_procFoundationRegister);
      procSpeedRegister::procSpeedRegister(&g_procSpeedRegister);
      procExpeditionActivityRegister::procExpeditionActivityRegister(&g_procExpeditionActivityRegister);
      procFleurFairActivityRegister::procFleurFairActivityRegister(&g_procFleurFairActivityRegister);
      procMultistageRegister::procMultistageRegister(&g_procMultistageRegister);
      procOpActivityRegister::procOpActivityRegister(&g_procOpActivityRegister);
      procArenaChallengeRegister::procArenaChallengeRegister(&g_procArenaChallengeRegister);
      procHomeRegister::procHomeRegister(&g_procHomeRegister);
      procFurnitureRegister::procFurnitureRegister(&g_procFurnitureRegister);
      procTransferGuardRegister::procTransferGuardRegister(&g_procTransferGuardRegister);
      procGalleryRegister::procGalleryRegister(&g_procGalleryRegister);
      procRegionSearchRegister::procRegionSearchRegister(&g_procRegionSearchRegister);
      procCoopChapterRegister::procCoopChapterRegister(&g_procCoopChapterRegister);
      procSetPlatformRegister::procSetPlatformRegister(&g_procSetPlatformRegister);
      procHomeAvatarRegister::procHomeAvatarRegister(&g_procHomeAvatarRegister);
      procClearOutputControlRecordsByYaceRegister::procClearOutputControlRecordsByYaceRegister(&g_procClearOutputControlRecordsByYaceRegister);
      procDynamicGroupRegister::procDynamicGroupRegister(&g_procDynamicGroupRegister);
      procOfflineOpRegister::procOfflineOpRegister(&g_procOfflineOpRegister);
      procChannellerSlabActivityRegister::procChannellerSlabActivityRegister(&g_procChannellerSlabActivityRegister);
      procMistTrialActivityRegister::procMistTrialActivityRegister(&g_procMistTrialActivityRegister);
      procExhibitionRegister::procExhibitionRegister(&g_procExhibitionRegister);
      procHideAndSeekActivityRegister::procHideAndSeekActivityRegister(&g_procHideAndSeekActivityRegister);
      procRefreshShopRegister::procRefreshShopRegister(&g_procRefreshShopRegister);
      procGadgetChainRegister::procGadgetChainRegister(&g_procGadgetChainRegister);
      procFurnitureMakeRegister::procFurnitureMakeRegister(&g_procFurnitureMakeRegister);
      procHomeResourceRegister::procHomeResourceRegister(&g_procHomeResourceRegister);
      procWorldSceneRegister::procWorldSceneRegister(&g_procWorldSceneRegister);
      procSummerTimeActivityRegister::procSummerTimeActivityRegister(&g_procSummerTimeActivityRegister);
      procReleaseLuaStateRegister::procReleaseLuaStateRegister(&g_procReleaseLuaStateRegister);
      procLoadSceneGridRegister::procLoadSceneGridRegister(&g_procLoadSceneGridRegister);
      procEchoShellActivityRegister::procEchoShellActivityRegister(&g_procEchoShellActivityRegister);
      procBlitzRushActivityRegister::procBlitzRushActivityRegister(&g_procBlitzRushActivityRegister);
      procMonsterYaceRegister::procMonsterYaceRegister(&g_procMonsterYaceRegister);
      procChessRegister::procChessRegister(&g_procChessRegister);
      procCombatStatLogBeginRegister::procCombatStatLogBeginRegister(&g_procCombatStatLogBeginRegister);
      procAddAbilityRegister::procAddAbilityRegister(&g_procAddAbilityRegister);
      procSetAvatarOverrideMapRegister::procSetAvatarOverrideMapRegister(&g_procSetAvatarOverrideMapRegister);
      procAddAvatarAbilityRegister::procAddAvatarAbilityRegister(&g_procAddAvatarAbilityRegister);
      procRemoveAvatarAbilityRegister::procRemoveAvatarAbilityRegister(&g_procRemoveAvatarAbilityRegister);
      procAddModifierRegister::procAddModifierRegister(&g_procAddModifierRegister);
      procCombatStatLogDoHurtRegister::procCombatStatLogDoHurtRegister(&g_procCombatStatLogDoHurtRegister);
      procCombatStatLogDoHealRegister::procCombatStatLogDoHealRegister(&g_procCombatStatLogDoHealRegister);
      procCombatStatLogEndRegister::procCombatStatLogEndRegister(&g_procCombatStatLogEndRegister);
      procVehicleRegister::procVehicleRegister(&g_procVehicleRegister);
      procHomeFieldRegister::procHomeFieldRegister(&g_procHomeFieldRegister);
      procGachaRegister::procGachaRegister(&g_procGachaRegister);
      procGachaWishRegister::procGachaWishRegister(&g_procGachaWishRegister);
      procThunderSakuraRegister::procThunderSakuraRegister(&g_procThunderSakuraRegister);
      procVisionTypeRegister::procVisionTypeRegister(&g_procVisionTypeRegister);
      procSetEntityIdRegister::procSetEntityIdRegister(&g_procSetEntityIdRegister);
      procSetNextEntityIdRegister::procSetNextEntityIdRegister(&g_procSetNextEntityIdRegister);
      procGroupLinkRegister::procGroupLinkRegister(&g_procGroupLinkRegister);
      procFishFarmingRegister::procFishFarmingRegister(&g_procFishFarmingRegister);
      procLunaRiteRegister::procLunaRiteRegister(&g_procLunaRiteRegister);
      procInformalAvatarRegister::procInformalAvatarRegister(&g_procInformalAvatarRegister);
      procSceneTeamRegister::procSceneTeamRegister(&g_procSceneTeamRegister);
      procFishingRegister::procFishingRegister(&g_procFishingRegister);
      procCompoundRegister::procCompoundRegister(&g_procCompoundRegister);
      procExtraPropRegister::procExtraPropRegister(&g_procExtraPropRegister);
      procMusicGameActivityRegister::procMusicGameActivityRegister(&g_procMusicGameActivityRegister);
      procMoonfinTrialActivityRegister::procMoonfinTrialActivityRegister(&g_procMoonfinTrialActivityRegister);
      procRogueDiaryActivityRegister::procRogueDiaryActivityRegister(&g_procRogueDiaryActivityRegister);
      procRoguelikeDungeonActivityRegister::procRoguelikeDungeonActivityRegister(&g_procRoguelikeDungeonActivityRegister);
      procPlantFlowerActivityRegister::procPlantFlowerActivityRegister(&g_procPlantFlowerActivityRegister);
      procSetSGVValueRegister::procSetSGVValueRegister(&g_procSetSGVValueRegister);
      procDigActivityRegister::procDigActivityRegister(&g_procDigActivityRegister);
      procWinterCampActivityRegister::procWinterCampActivityRegister(&g_procWinterCampActivityRegister);
      procBirthdayRegister::procBirthdayRegister(&g_procBirthdayRegister);
      procLevelTagRegister::procLevelTagRegister(&g_procLevelTagRegister);
      procPotionActivityRegister::procPotionActivityRegister(&g_procPotionActivityRegister);
      procLanternRiteActivityRegister::procLanternRiteActivityRegister(&g_procLanternRiteActivityRegister);
      procGCGRegister::procGCGRegister(&g_procGCGRegister);
      procGCGDeckRegister::procGCGDeckRegister(&g_procGCGDeckRegister);
      procGCGTavernRegister::procGCGTavernRegister(&g_procGCGTavernRegister);
      procGCGGrowthRegister::procGCGGrowthRegister(&g_procGCGGrowthRegister);
      procGCGLevelRegister::procGCGLevelRegister(&g_procGCGLevelRegister);
      doRegionalPlayRegister::doRegionalPlayRegister(&g_doRegionalPlayRegister);
      protTimeUtilsRegister::protTimeUtilsRegister(&g_protTimeUtilsRegister);
      protHomeBalloonRegister::protHomeBalloonRegister(&g_protHomeBalloonRegister);
      procCustomDungeonRegister::procCustomDungeonRegister(&g_procCustomDungeonRegister);
      procBartenderActivityRegister::procBartenderActivityRegister(&g_procBartenderActivityRegister);
      procShareCdRegister::procShareCdRegister(&g_procShareCdRegister);
      procCrystalLinkActivityRegister::procCrystalLinkActivityRegister(&g_procCrystalLinkActivityRegister);
      procIrodoriActivityRegister::procIrodoriActivityRegister(&g_procIrodoriActivityRegister);
      procIrodoriChessRegister::procIrodoriChessRegister(&g_procIrodoriChessRegister);
      procQuickOpenActivityRegister::procQuickOpenActivityRegister(&g_procQuickOpenActivityRegister);
      procSpiceActivityRegister::procSpiceActivityRegister(&g_procSpiceActivityRegister);
      procGearActivityRegister::procGearActivityRegister(&g_procGearActivityRegister);
      procQueryChallengeRegister::procQueryChallengeRegister(&g_procQueryChallengeRegister);
      procGachaActivityRegister::procGachaActivityRegister(&g_procGachaActivityRegister);
      procLuminanceStoneActivityRegister::procLuminanceStoneActivityRegister(&g_procLuminanceStoneActivityRegister);
      procResetQuestionnaireRecordsRegister::procResetQuestionnaireRecordsRegister(&g_procResetQuestionnaireRecordsRegister);
      procSummerTimeV2ActivityRegister::procSummerTimeV2ActivityRegister(&g_procSummerTimeV2ActivityRegister);
      procDeathZoneRegister::procDeathZoneRegister(&g_procDeathZoneRegister);
      procAranaraCollectionRegister::procAranaraCollectionRegister(&g_procAranaraCollectionRegister);
      procIslandPartyActivityRegister::procIslandPartyActivityRegister(&g_procIslandPartyActivityRegister);
      procChallengeRegister::procChallengeRegister(&g_procChallengeRegister);
      procAuditRegister::procAuditRegister(&g_procAuditRegister);
      procResCollectionRegister::procResCollectionRegister(&g_procResCollectionRegister);
      procGravenInnocenceActivityRegister::procGravenInnocenceActivityRegister(&g_procGravenInnocenceActivityRegister);
      procCompoundMaterialBoostRegister::procCompoundMaterialBoostRegister(&g_procCompoundMaterialBoostRegister);
      procInstableSprayRegister::procInstableSprayRegister(&g_procInstableSprayRegister);
      procTreasureSeelieRegister::procTreasureSeelieRegister(&g_procTreasureSeelieRegister);
      procMuqadasActivityRegister::procMuqadasActivityRegister(&g_procMuqadasActivityRegister);
      procQuickHitTreeRegister::procQuickHitTreeRegister(&g_procQuickHitTreeRegister);
      procRockBoardExploreActivityRegister::procRockBoardExploreActivityRegister(&g_procRockBoardExploreActivityRegister);
      procWindFieldActivityRegister::procWindFieldActivityRegister(&g_procWindFieldActivityRegister);
      procVintageActivityRegister::procVintageActivityRegister(&g_procVintageActivityRegister);
      procCharAmusementActivityRegister::procCharAmusementActivityRegister(&g_procCharAmusementActivityRegister);
      procFungusFighterActivityRegister::procFungusFighterActivityRegister(&g_procFungusFighterActivityRegister);
      procCommonActivityRegister::procCommonActivityRegister(&g_procCommonActivityRegister);
      procHomeBlueprintRegister::procHomeBlueprintRegister(&g_procHomeBlueprintRegister);
      procEffigyChallengeV2ActivityRegister::procEffigyChallengeV2ActivityRegister(&g_procEffigyChallengeV2ActivityRegister);
      procStrUtilsRegister::procStrUtilsRegister(&g_procStrUtilsRegister);
      procAvatarRenameRegister::procAvatarRenameRegister(&g_procAvatarRenameRegister);
      doMovingPlatformRegister::doMovingPlatformRegister(&g_doMovingPlatformRegister);
      procCoinCollectActivityRegister::procCoinCollectActivityRegister(&g_procCoinCollectActivityRegister);
      procBrickBreakerActivityRegister::procBrickBreakerActivityRegister(&g_procBrickBreakerActivityRegister);
      procElectroherculesBattleActivityRegister::procElectroherculesBattleActivityRegister(&g_procElectroherculesBattleActivityRegister);
      procGroupSuiteRegister::procGroupSuiteRegister(&g_procGroupSuiteRegister);
      procDuelHeartRegister::procDuelHeartRegister(&g_procDuelHeartRegister);
      procSeaLampV3ActivityRegister::procSeaLampV3ActivityRegister(&g_procSeaLampV3ActivityRegister);
      procIpRegionClosedRegister::procIpRegionClosedRegister(&g_procIpRegionClosedRegister);
      procTeamChainActivityRegister::procTeamChainActivityRegister(&g_procTeamChainActivityRegister);
      ssl_category = boost::asio::error::get_ssl_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::ssl_category >> 3) + 0x7FFF8000) )
        ssl_category = (const boost::system::error_category *)__asan_report_store8(
                                                                &boost::asio::error::ssl_category,
                                                                &GmUtils::op_func_map[abi:cxx11]);
      boost::asio::error::ssl_category = ssl_category;
      stream_category = boost::asio::ssl::error::get_stream_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::ssl::error::stream_category >> 3) + 0x7FFF8000) )
        stream_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::ssl::error::stream_category,
                                                                   &GmUtils::op_func_map[abi:cxx11]);
      boost::asio::ssl::error::stream_category = stream_category;
      v14 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v14 )
      {
        v15 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v16 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v16 != 0;
        v17 = (v16 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v16);
        if ( (_BYTE)v17 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v11,
            v17);
        *v15 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v11 = &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v18 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        v20 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v20 != 0;
        v21 = (v20 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_ & 7) >= v20);
        if ( (_BYTE)v21 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
            v11,
            v21);
        *v19 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v22 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        v24 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v24 != 0;
        v25 = (v24 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id & 7) >= v24);
        if ( (_BYTE)v25 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
            v11,
            v25);
        *v23 = 1;
        boost::asio::detail::service_id<boost::asio::detail::strand_service>::service_id(&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::service_base<boost::asio::detail::strand_service>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::strand_service>::~service_id,
          &boost::asio::detail::service_base<boost::asio::detail::strand_service>::id,
          &_dso_handle);
      }
      v26 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
      }
      if ( !*v26 )
      {
        v27 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        v28 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v28 != 0;
        v29 = (v28 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_ & 7) >= v28);
        if ( (_BYTE)v29 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
            v11,
            v29);
        *v27 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::strand_executor_service::strand_impl,unsigned char>::top_,
          &_dso_handle);
      }
      v30 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_);
      }
      if ( !*v30 )
      {
        v31 = &`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_;
        v32 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v32 != 0;
        v33 = (v32 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_ & 7) >= v32);
        if ( (_BYTE)v33 )
          __asan_report_store1(&`guard variable for'boost::asio::ssl::detail::openssl_init<true>::instance_, v11, v33);
        *v31 = 1;
        boost::asio::ssl::detail::openssl_init<true>::openssl_init(&boost::asio::ssl::detail::openssl_init<true>::instance_);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::ssl::detail::openssl_init<true>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::ssl::detail::openssl_init<true>::~openssl_init,
          &boost::asio::ssl::detail::openssl_init<true>::instance_,
          &_dso_handle);
      }
      v34 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v34 )
      {
        v35 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v36 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v36 != 0;
        v37 = (v36 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v36);
        if ( (_BYTE)v37 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v11,
            v37);
        *v35 = 1;
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v38 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v38 )
      {
        v39 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v40 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v40 != 0;
        v41 = (v40 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v40);
        if ( (_BYTE)v41 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v11,
            v41);
        *v39 = 1;
        v42 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v11);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v42;
      }
      v43 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v43 )
      {
        v44 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v45 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v45 != 0;
        v46 = (v45 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v45);
        if ( (_BYTE)v46 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v11,
            v46);
        *v44 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v47 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v47 )
      {
        v48 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v49 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v49 != 0;
        v50 = (v49 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v49);
        if ( (_BYTE)v50 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v11,
            v50);
        *v48 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v51 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v51 )
      {
        v52 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v53 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v53 != 0;
        v54 = (v53 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v53);
        if ( (_BYTE)v54 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v11,
            v54);
        *v52 = 1;
        v55 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v11);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v55;
      }
      v56 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v56 )
      {
        v57 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        v58 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v58 != 0;
        v59 = (v58 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id & 7) >= v58);
        if ( (_BYTE)v59 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
            v11,
            v59);
        *v57 = 1;
        boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::resolver_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v60 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
      }
      if ( !*v60 )
      {
        v61 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        v62 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v62 != 0;
        v63 = (v62 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id & 7) >= v62);
        if ( (_BYTE)v63 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
            v11,
            v63);
        *v61 = 1;
        boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::reactive_socket_service<boost::asio::ip::tcp>>::id,
          &_dso_handle);
      }
      v64 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
      }
      if ( !*v64 )
      {
        v65 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        v66 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v66 != 0;
        v67 = (v66 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id & 7) >= v66);
        if ( (_BYTE)v67 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
            v11,
            v67);
        *v65 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::detail::chrono_time_traits<std::chrono::_V2::steady_clock,boost::asio::wait_traits<std::chrono::_V2::steady_clock>>>>::id,
          &_dso_handle);
      }
      v68 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
      }
      if ( !*v68 )
      {
        v69 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        v70 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v70 != 0;
        v71 = (v70 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id & 7) >= v70);
        if ( (_BYTE)v71 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
            v11,
            v71);
        *v69 = 1;
        boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id);
        v11 = (boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>>::id,
          &_dso_handle);
      }
      v72 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
      }
      if ( !*v72 )
      {
        v73 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
        v74 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v74 != 0;
        v75 = (v74 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= v74);
        if ( (_BYTE)v75 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id, v11, v75);
        *v73 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext);
        v76 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
          v76 = __asan_report_store8(
                  &luabind::detail::registered_class<ScriptContext>::id,
                  &`typeinfo for'ScriptContext);
        luabind::detail::registered_class<ScriptContext>::id = v76;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 2239: range 0000000017D5C279-0000000017D5C38B
// local variable allocation has failed, the output may be wrong!
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  char v4; // dl
  __int64 v5; // rdx
  luabind::detail::class_id v6; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_player_gm_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
        v4 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v4 != 0;
        v5 = (v4 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= v4);
        if ( (_BYTE)v5 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id,
            *(_QWORD *)&__priority,
            v5);
        *v3 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext *);
        v6 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
          v6 = __asan_report_store8(
                 &luabind::detail::registered_class<ScriptContext *>::id,
                 &`typeinfo for'ScriptContext *);
        luabind::detail::registered_class<ScriptContext *>::id = v6;
      }
    }
    __asan_after_dynamic_init();
  }
};
