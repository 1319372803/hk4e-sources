// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_basic.cpp

// Line 30: range 00000000150CFDE2-00000000150D002A
int32_t __cdecl GCGMatchData::fromBin(GCGMatchData *const this, const proto::GCGMatchBin *bin)
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
  uint32_t v11; // ecx
  char v12; // dl
  __int64 v13; // rdx
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  uint32_t v20; // ecx
  char v21; // dl
  __int64 v22; // rdx
  const proto::GCGMatchBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  matched = proto::GCGMatchBin::match_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->match_id = matched;
  v5 = proto::GCGMatchBin::score(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->score, bin, v7);
  this->score = v5;
  v8 = proto::GCGMatchBin::win_streak_count(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->win_streak_count >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->win_streak_count, bin, v10);
  this->win_streak_count = v8;
  v11 = proto::GCGMatchBin::lose_streak_count(bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->lose_streak_count >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store4(&this->lose_streak_count, bin, v13);
  this->lose_streak_count = v11;
  v14 = proto::GCGMatchBin::refuse_count(bina);
  v15 = *(_BYTE *)(((unsigned __int64)&this->refuse_count >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v15 != 0;
  v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)this + 16) & 7) + 3) >= v15);
  if ( (_BYTE)v16 )
    __asan_report_store4(&this->refuse_count, bin, v16);
  this->refuse_count = v14;
  v17 = proto::GCGMatchBin::punish_end_time(bina);
  v18 = *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v18 != 0;
  v19 = (v18 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v18);
  if ( (_BYTE)v19 )
    __asan_report_store4(&this->punish_end_time, bin, v19);
  this->punish_end_time = v17;
  v20 = proto::GCGMatchBin::version(bina);
  v21 = *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v21 != 0;
  v22 = (v21 != 0) & (unsigned __int8)((char)((((_BYTE)this + 24) & 7) + 3) >= v21);
  if ( (_BYTE)v22 )
    __asan_report_store4(&this->version, bin, v22);
  this->version = v20;
  return 0;
};

// Line 42: range 00000000150D002C-00000000150D026D
int32_t __cdecl GCGMatchData::toBin(const GCGMatchData *const this, proto::GCGMatchBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::GCGMatchBin::set_match_id(bin, this->match_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->score);
  }
  proto::GCGMatchBin::set_score(bin, this->score);
  if ( *(_BYTE *)(((unsigned __int64)&this->win_streak_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->win_streak_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->win_streak_count);
  }
  proto::GCGMatchBin::set_win_streak_count(bin, this->win_streak_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->lose_streak_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lose_streak_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->lose_streak_count);
  }
  proto::GCGMatchBin::set_lose_streak_count(bin, this->lose_streak_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->refuse_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->refuse_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->refuse_count);
  }
  proto::GCGMatchBin::set_refuse_count(bin, this->refuse_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->punish_end_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->punish_end_time);
  }
  proto::GCGMatchBin::set_punish_end_time(bin, this->punish_end_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->version);
  }
  proto::GCGMatchBin::set_version(bin, this->version);
  return 0;
};

// Line 54: range 00000000150D026E-00000000150D048D
int32_t __cdecl GCGBasic::fromBin(GCGBasic *const this, const proto::GCGBasicBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rdx
  char v6; // al
  const google::protobuf::RepeatedField<unsigned int> *v7; // rax
  google::protobuf::RepeatedPtrField<proto::GCGMatchBin>::const_iterator *p_for_end; // rsi
  GCGMatchData *v9; // rax
  __int64 matched; // rdx
  char v11; // al
  uint32_t v12; // ecx
  char v13; // dl
  __int64 v14; // rdx
  const proto::GCGBasicBin *bina; // [rsp+0h] [rbp-50h]
  std::map<unsigned int,GCGMatchData>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGMatchBin>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGMatchBin>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GCGMatchBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::GCGMatchBin *match_bin; // [rsp+38h] [rbp-18h]

  bina = bin;
  v2 = proto::GCGBasicBin::level(bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->level_, bin, v4);
  this->level_ = v2;
  v5 = proto::GCGBasicBin::exp(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(&this->exp_, bin, v5);
  }
  this->exp_ = v5;
  v7 = proto::GCGBasicBin::level_reward_taken_list(bina);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->level_reward_taken_set_, v7);
  std::map<unsigned int,GCGMatchData>::clear(&this->match_data_map_);
  __for_range = proto::GCGBasicBin::match_bin_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGMatchBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    match_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchBin const>::operator*(&__for_begin);
    __k = proto::GCGMatchBin::match_id(match_bin);
    v9 = std::map<unsigned int,GCGMatchData>::operator[](&this->match_data_map_, &__k);
    GCGMatchData::fromBin(v9, match_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGMatchBin const>::operator++(&__for_begin);
  }
  matched = proto::GCGBasicBin::ban_match_expire_time(bina);
  v11 = *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(p_for_end) = v11 != 0;
    __asan_report_store4(&this->ban_match_expire_time_, p_for_end, matched);
  }
  this->ban_match_expire_time_ = matched;
  v12 = proto::GCGBasicBin::ban_invite_expire_time(bina);
  v13 = *(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3) + 0x7FFF8000);
  LOBYTE(p_for_end) = v13 != 0;
  v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v13);
  if ( (_BYTE)v14 )
    __asan_report_store4(&this->ban_invite_expire_time_, p_for_end, v14);
  this->ban_invite_expire_time_ = v12;
  return 0;
};

// Line 69: range 00000000150D048E-00000000150D0695
int32_t __cdecl GCGBasic::toBin(const GCGBasic *const this, proto::GCGBasicBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  proto::GCGMatchBin *matched; // rax
  std::map<unsigned int,GCGMatchData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,GCGMatchData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,GCGMatchData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,GCGMatchData> *v8; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,GCGMatchData> >::type *match_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,GCGMatchData> >::type *match_data; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::GCGBasicBin::set_level(bin, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exp_);
  }
  proto::GCGBasicBin::set_exp(bin, this->exp_);
  v2 = proto::GCGBasicBin::mutable_level_reward_taken_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->level_reward_taken_set_, v2);
  __for_range = &this->match_data_map_;
  __for_begin._M_node = std::map<unsigned int,GCGMatchData>::begin(&this->match_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGMatchData>::end(&this->match_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGMatchData>>::operator*(&__for_begin);
    match_id = std::get<0ul,unsigned int const,GCGMatchData>(v8);
    match_data = (std::tuple_element<1,const std::pair<unsigned int const,GCGMatchData> >::type *)std::get<1ul,unsigned int const,GCGMatchData>(v8);
    matched = proto::GCGBasicBin::add_match_bin_list(bin);
    GCGMatchData::toBin(match_data, matched);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGMatchData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ban_match_expire_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ban_match_expire_time_);
  }
  proto::GCGBasicBin::set_ban_match_expire_time(bin, this->ban_match_expire_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ban_invite_expire_time_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ban_invite_expire_time_);
  }
  proto::GCGBasicBin::set_ban_invite_expire_time(bin, this->ban_invite_expire_time_);
  return 0;
};

// Line 83: range 00000000150D0696-00000000150D06B4
int32_t __cdecl GCGBasic::onLogin(GCGBasic *const this)
{
  GCGBasic::checkMatchVersion(this);
  return 0;
};

// Line 89: range 00000000150D06B6-00000000150D08DF
void __cdecl GCGBasic::notifyAllData(GCGBasic *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 9 notify:90";
  *(_QWORD *)(v1 + 16) = GCGBasic::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::GCGBasicDataNotify::GCGBasicDataNotify((proto::GCGBasicDataNotify *const)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exp_);
  }
  proto::GCGBasicDataNotify::set_exp((proto::GCGBasicDataNotify *const)(v1 + 48), this->exp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::GCGBasicDataNotify::set_level((proto::GCGBasicDataNotify *const)(v1 + 48), this->level_);
  v4 = proto::GCGBasicDataNotify::mutable_level_reward_taken_list((proto::GCGBasicDataNotify *const)(v1 + 48));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->level_reward_taken_set_, v4);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::GCGBasicDataNotify::~GCGBasicDataNotify((proto::GCGBasicDataNotify *const)(v1 + 48));
  if ( v5 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 98: range 00000000150D08E0-00000000150D09BC
void __cdecl GCGBasic::onDailyRefresh(GCGBasic *const this)
{
  uint32_t *p_refuse_count; // rax
  __int64 v2; // rdx
  std::map<unsigned int,GCGMatchData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,GCGMatchData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,GCGMatchData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,GCGMatchData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,GCGMatchData> >::type *id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,GCGMatchData> >::type *match_data; // [rsp+38h] [rbp-8h]

  __for_range = &this->match_data_map_;
  __for_begin._M_node = std::map<unsigned int,GCGMatchData>::begin(&this->match_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGMatchData>::end(&this->match_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,GCGMatchData>(__in);
    match_data = std::get<1ul,unsigned int const,GCGMatchData>(__in);
    p_refuse_count = &match_data->refuse_count;
    v2 = (*(_BYTE *)(((unsigned __int64)p_refuse_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_refuse_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_refuse_count >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
      __asan_report_store4(p_refuse_count, (((_BYTE)match_data + 16) & 7u) + 3, v2);
    match_data->refuse_count = 0;
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData>>::operator++(&__for_begin);
  }
};

// Line 106: range 00000000150D09BE-00000000150D09D8
void __cdecl GCGBasic::onLoginDailyRefresh(GCGBasic *const this)
{
  GCGBasic::onDailyRefresh(this);
};

// Line 111: range 00000000150D09DA-00000000150D0B99
void __cdecl GCGBasic::onFinishParentQuestEvent(GCGBasic *const this, const FinishParentQuestEvent *event)
{
  GCGGrowthExcelConfigMgr *p_gcg_growth_config_mgr; // rcx
  bool isLevelLockQuest; // bl
  uint32_t before_exp; // [rsp+18h] [rbp-28h]
  uint32_t before_level; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_gcg_growth_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.gcg_growth_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  isLevelLockQuest = GCGGrowthExcelConfigMgr::isLevelLockQuest(p_gcg_growth_config_mgr, event->parent_quest_id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( isLevelLockQuest )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    before_exp = this->exp_;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    before_level = this->level_;
    GCGBasic::tryLevelUp(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    if ( before_level != this->level_ )
    {
      GCGBasic::notifyLevelData(this);
      GCGBasic::logAddExp(this, 0, before_exp, before_level, ACTION_REASON_GCG_FINISH_LEVEL_QUEST);
    }
  }
};

// Line 126: range 00000000150D0B9A-00000000150D0C3F
void __cdecl GCGBasic::onOpenStateChange(GCGBasic *const this, const OpenStateChangeEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 3300 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->value);
    }
    if ( event->value )
      GCGBasic::onLevelStateOpen(this);
  }
};

// Line 134: range 00000000150D0C40-00000000150D0FA1
void __cdecl GCGBasic::onLevelStateOpen(GCGBasic *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 16 before_level:141";
  *(_QWORD *)(v1 + 16) = GCGBasic::onLevelStateOpen;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( this->level_ <= 1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    *(_DWORD *)(v1 + 32) = this->level_;
    this->level_ = 1;
    if ( this->level_ > *(_DWORD *)(v1 + 32) )
    {
      GCGBasic::onLevelUp(this, *(_DWORD *)(v1 + 32), this->level_);
      GCGBasic::notifyAllData(this);
    }
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_basic.cpp",
      "onLevelStateOpen",
      148);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v10, (const char (*)[39])off_25702A00);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
    v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_basic.cpp",
      "onLevelStateOpen",
      138);
    v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v10,
           (const char (*)[29])"onLevelStateOpen, gcg level:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->level_);
    v6 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v5, (const char (*)[21])" bigger than 1, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
  }
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  if ( v11 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 152: range 00000000150D0FA2-00000000150D1556
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl GCGBasic::addExp(GCGBasic *const this, uint32_t exp, const ActionReason *reason)
{
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v4; // rbx
  uint32_t level; // ebx
  __int64 v7; // rdx
  char v8; // al
  const GCGGrowthExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // ecx
  const GCGGrowthExcelConfigMgr *v12; // rcx
  PlayerQuestComp *QuestComp; // rax
  uint32_t expa; // [rsp+14h] [rbp-7Ch]
  unsigned int val; // [rsp+28h] [rbp-68h] BYREF
  unsigned int old_exp; // [rsp+2Ch] [rbp-64h]
  unsigned int old_level; // [rsp+30h] [rbp-60h]
  uint32_t max_exp; // [rsp+34h] [rbp-5Ch]
  const GCGGrowthExcelConfigMgr *gcg_growth_config_mgr; // [rsp+38h] [rbp-58h]
  const data::GCGLevelExcelConfig *level_config_ptr; // [rsp+40h] [rbp-50h]
  std::shared_ptr<Config> v23; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v24; // [rsp+60h] [rbp-30h] BYREF

  expa = exp;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCE4u) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_basic.cpp",
      "addExp",
      155);
    v4 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v24,
           (const char (*)[36])"OPEN_STATE_GCG_LEVEL not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v24);
    return 141;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    gcg_growth_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.gcg_growth_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v23);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->level_);
    }
    level = this->level_;
    if ( level < GCGGrowthExcelConfigMgr::getMaxLevel(gcg_growth_config_mgr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->exp_);
      }
      old_exp = this->exp_;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      old_level = this->level_;
      *(_QWORD *)&exp = exp;
      v7 = SAFE_ADD<unsigned int,unsigned int>(this->exp_, exp);
      v8 = *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        LOBYTE(exp) = v8 != 0;
        __asan_report_store4(&this->exp_, *(_QWORD *)&exp, v7);
      }
      this->exp_ = v7;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      max_exp = GCGGrowthExcelConfigMgr::getMaxExp(gcg_growth_config_mgr, this->level_);
      if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->exp_);
      }
      if ( max_exp < this->exp_ )
        this->exp_ = max_exp;
      v9 = gcg_growth_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      level_config_ptr = data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(v9, this->level_);
      if ( level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->exp_);
        }
        v11 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        if ( v11 >= level_config_ptr->exp )
        {
          v12 = gcg_growth_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->level_);
          }
          if ( data::GCGGrowthExcelConfigMgrBase::findGCGLevelLockExcelConfig(v12, this->level_) )
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            QuestComp = Player::getQuestComp(this->player_);
            PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_GCG_EXP_OVERFLOW, 1, 0);
          }
          GCGBasic::tryLevelUp(this);
        }
        GCGBasic::notifyLevelData(this);
        if ( *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)reason & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reason >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(reason);
        }
        GCGBasic::logAddExp(this, expa, old_exp, old_level, reason->reason_type);
        return 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/gcg_basic.cpp",
          "addExp",
          174);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v24,
                (const char (*)[38])"findGCGLevelExcelConfig fail. leevl: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->level_);
        common::milog::MiLogStream::~MiLogStream(&v24);
        return -1;
      }
    }
    else
    {
      return 0;
    }
  }
};

// Line 193: range 00000000150D1558-00000000150D1D81
void __cdecl GCGBasic::tryLevelUp(GCGBasic *const this)
{
  const GCGGrowthExcelConfigMgr *v1; // rcx
  common::milog::MiLogStream *v2; // rax
  uint32_t exp; // ecx
  uint32_t v4; // ecx
  const GCGGrowthExcelConfigMgr *v5; // rcx
  PlayerQuestComp *QuestComp; // rcx
  common::milog::MiLogStream *v7; // rax
  const GCGGrowthExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rcx
  uint32_t v10; // ecx
  const GCGGrowthExcelConfigMgr *v11; // rcx
  PlayerQuestComp *v12; // rax
  bool is_change; // [rsp+1Bh] [rbp-75h]
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  uint32_t max_level; // [rsp+20h] [rbp-70h]
  uint32_t before_level; // [rsp+24h] [rbp-6Ch]
  const data::GCGLevelExcelConfig *level_config_ptr; // [rsp+28h] [rbp-68h]
  const GCGGrowthExcelConfigMgr *gcg_growth_config_mgr; // [rsp+30h] [rbp-60h]
  const data::GCGLevelLockExcelConfig *level_lock_config_ptr_0; // [rsp+38h] [rbp-58h]
  const data::GCGLevelExcelConfig *new_level_config_ptr; // [rsp+40h] [rbp-50h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-40h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  gcg_growth_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.gcg_growth_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v22);
  max_level = GCGGrowthExcelConfigMgr::getMaxLevel(gcg_growth_config_mgr);
  v1 = gcg_growth_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  level_config_ptr = data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(v1, this->level_);
  if ( level_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->exp_);
    }
    exp = this->exp_;
    if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&level_config_ptr->exp);
    }
    if ( exp >= level_config_ptr->exp )
    {
      is_change = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      before_level = this->level_;
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->exp_);
        }
        v4 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        if ( v4 < level_config_ptr->exp )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        if ( max_level <= this->level_ )
          break;
        v5 = gcg_growth_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        level_lock_config_ptr_0 = data::GCGGrowthExcelConfigMgrBase::findGCGLevelLockExcelConfig(v5, this->level_);
        if ( level_lock_config_ptr_0 )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          QuestComp = Player::getQuestComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&level_lock_config_ptr_0->unlock_main_quest_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_lock_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_lock_config_ptr_0->unlock_main_quest_id >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_load4(&level_lock_config_ptr_0->unlock_main_quest_id);
          }
          if ( !PlayerQuestComp::isParentQuestOnceFinished(QuestComp, level_lock_config_ptr_0->unlock_main_quest_id) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/card_game/gcg_basic.cpp",
              "tryLevelUp",
              222);
            v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                   &v23,
                   (const char (*)[38])"unlock quest not finished. quest_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v7,
              &level_lock_config_ptr_0->unlock_main_quest_id);
            common::milog::MiLogStream::~MiLogStream(&v23);
            break;
          }
        }
        v8 = gcg_growth_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        new_level_config_ptr = data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(v8, this->level_ + 1);
        if ( !new_level_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/card_game/gcg_basic.cpp",
            "tryLevelUp",
            229);
          v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                 &v23,
                 (const char (*)[38])"findGCGLevelExcelConfig fail. level: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(&this->level_);
          }
          val = this->level_ + 1;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
          common::milog::MiLogStream::~MiLogStream(&v23);
          break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->exp_);
        }
        v10 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&level_config_ptr->exp);
        }
        this->exp_ = v10 - level_config_ptr->exp;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        ++this->level_;
        level_config_ptr = new_level_config_ptr;
        is_change = 1;
      }
      if ( is_change )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&this->level_);
        }
        GCGBasic::onLevelUp(this, before_level, this->level_);
      }
      v11 = gcg_growth_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->level_);
      }
      if ( data::GCGGrowthExcelConfigMgrBase::findGCGLevelLockExcelConfig(v11, this->level_) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v12 = Player::getQuestComp(this->player_);
        PlayerQuestComp::tryAcceptQuestByCond(v12, QUEST_COND_GCG_EXP_OVERFLOW, 1, 0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_basic.cpp",
        "tryLevelUp",
        205);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v23, (const char (*)[21])off_25702C00);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_basic.cpp",
      "tryLevelUp",
      200);
    v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v23,
           (const char (*)[38])"findGCGLevelExcelConfig fail. level: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->level_);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
};

// Line 251: range 00000000150D1D82-00000000150D1E35
void __cdecl GCGBasic::onLevelUp(GCGBasic *const this, uint32_t before_level, uint32_t after_level)
{
  PlayerGCGComp *GCGComp; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t level; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  PlayerGCGComp::onGCGLevelUp(GCGComp, before_level, after_level);
  for ( level = before_level + 1; level <= after_level; ++level )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::onOpenStateCond(BasicComp, OPEN_STATE_COND_GCG_LEVEL, level);
  }
};

// Line 260: range 00000000150D1E36-00000000150D22D3
__int64 __fastcall GCGBasic::takeLevelReward(GCGBasic *const this, uint32_t level)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  GCGGrowthExcelConfigMgr *gcg_growth_config_mgr; // [rsp+18h] [rbp-E8h]
  const data::GCGLevelExcelConfig *config_ptr; // [rsp+20h] [rbp-E0h]
  PlayerItemComp *item_comp; // [rsp+28h] [rbp-D8h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-D0h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-C0h] BYREF
  char v17[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 ret:281 48 4 9 level:259 64 24 10 reason:280";
  *(_QWORD *)(v2 + 16) = GCGBasic::takeLevelReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( this->level_ >= *(_DWORD *)(v2 + 48) )
  {
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->level_reward_taken_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      result = 12302LL;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      gcg_growth_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.gcg_growth_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v15);
      config_ptr = data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(
                     gcg_growth_config_mgr,
                     *(_DWORD *)(v2 + 48));
      if ( config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->reward_id);
        }
        if ( config_ptr->reward_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          item_comp = Player::getItemComp(this->player_);
          ActionReason::ActionReason(
            (ActionReason *const)(v2 + 64),
            ACTION_REASON_GCG_LEVEL_REWARD,
            ITEM_LIMIT_GCG_LEVEL_REWARD);
          if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config_ptr->reward_id);
          }
          *(_DWORD *)(v2 + 32) = PlayerItemComp::checkGrantReward(
                                   item_comp,
                                   config_ptr->reward_id,
                                   (const ActionReason *)(v2 + 64));
          if ( *(_DWORD *)(v2 + 32) )
          {
            common::milog::MiLogStream::create(
              &v16,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/card_game/gcg_basic.cpp",
              "takeLevelReward",
              284);
            v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                   &v16,
                   (const char (*)[35])"checkGrantReward fail. reward_id: ");
            v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &config_ptr->reward_id);
            v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" level: ");
            v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v8,
                   (const unsigned int *)(v2 + 48));
            v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" ret: ");
            v11 = common::milog::MiLogStream::operator<<<int,(int *)0>(v10, (const int *)(v2 + 32));
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            operator<<(v11, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v16);
            result = *(unsigned int *)(v2 + 32);
          }
          else
          {
            std::set<unsigned int>::insert(
              &this->level_reward_taken_set_,
              (const std::set<unsigned int>::value_type *)(v2 + 48));
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr->reward_id);
            }
            PlayerItemComp::grantReward(item_comp, config_ptr->reward_id, (const ActionReason *)(v2 + 64), 0LL);
            GCGBasic::notifyLevelRewardTakenData(this);
            result = 0LL;
          }
        }
        else
        {
          result = 12303LL;
        }
      }
      else
      {
        result = 5LL;
      }
    }
  }
  else
  {
    result = 12301LL;
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

// Line 294: range 00000000150D22D4-00000000150D24BA
void __cdecl GCGBasic::notifyLevelData(GCGBasic *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:295";
  *(_QWORD *)(v1 + 16) = GCGBasic::notifyLevelData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::GCGGrowthLevelNotify::GCGGrowthLevelNotify((proto::GCGGrowthLevelNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exp_);
  }
  proto::GCGGrowthLevelNotify::set_exp((proto::GCGGrowthLevelNotify *const)(v1 + 32), this->exp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  proto::GCGGrowthLevelNotify::set_level((proto::GCGGrowthLevelNotify *const)(v1 + 32), this->level_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::GCGGrowthLevelNotify::~GCGGrowthLevelNotify((proto::GCGGrowthLevelNotify *const)(v1 + 32));
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

// Line 302: range 00000000150D24BC-00000000150D264D
void __cdecl GCGBasic::notifyLevelRewardTakenData(GCGBasic *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 10 notify:303";
  *(_QWORD *)(v1 + 16) = GCGBasic::notifyLevelRewardTakenData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::GCGGrowthLevelRewardNotify::GCGGrowthLevelRewardNotify((proto::GCGGrowthLevelRewardNotify *const)(v1 + 48));
  v4 = proto::GCGGrowthLevelRewardNotify::mutable_level_reward_taken_list((proto::GCGGrowthLevelRewardNotify *const)(v1 + 48));
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->level_reward_taken_set_, v4);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::GCGGrowthLevelRewardNotify::~GCGGrowthLevelRewardNotify((proto::GCGGrowthLevelRewardNotify *const)(v1 + 48));
  if ( v5 == (char *)v1 )
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

// Line 309: range 00000000150D264E-00000000150D2827
bool __cdecl GCGBasic::isExpOverflow(const GCGBasic *const this, uint32_t level)
{
  const data::GCGGrowthExcelConfigMgrBase *v3; // rcx
  uint32_t exp; // ecx
  GCGGrowthExcelConfigMgr *gcg_growth_config_mgr; // [rsp+10h] [rbp-20h]
  const data::GCGLevelExcelConfig *level_config_ptr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( level < this->level_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  if ( level > this->level_ )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  gcg_growth_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.gcg_growth_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  v3 = gcg_growth_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  level_config_ptr = data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(v3, this->level_);
  if ( !level_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->exp_);
  }
  exp = this->exp_;
  if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&level_config_ptr->exp);
  }
  return exp >= level_config_ptr->exp;
};

// Line 328: range 00000000150D2828-00000000150D295F
int32_t __cdecl GCGBasic::onGMSetLevel(GCGBasic *const this, uint32_t level)
{
  uint32_t old_level; // [rsp+1Ch] [rbp-24h]
  GCGGrowthExcelConfigMgr *gcg_growth_config_mgr; // [rsp+20h] [rbp-20h]
  std::shared_ptr<Config> v5; // [rsp+30h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  gcg_growth_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.gcg_growth_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( !data::GCGGrowthExcelConfigMgrBase::findGCGLevelExcelConfig(gcg_growth_config_mgr, level) )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_);
  }
  old_level = this->level_;
  this->level_ = level;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_, (((_BYTE)this + 12) & 7u) + 3, &this->exp_);
  }
  this->exp_ = 0;
  if ( old_level < this->level_ )
    GCGBasic::onLevelUp(this, old_level, this->level_);
  GCGBasic::notifyLevelData(this);
  return 0;
};

// Line 347: range 00000000150D2960-00000000150D2E2A
void __cdecl GCGBasic::checkMatchVersion(GCGBasic *const this)
{
  const GCGPlayingExcelConfigMgr *v1; // rcx
  uint32_t version; // ecx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  __int64 v12; // rsi
  uint32_t v13; // ecx
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  uint32_t score; // ecx
  uint32_t before_score; // [rsp+1Ch] [rbp-84h]
  std::map<unsigned int,GCGMatchData>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,GCGMatchData>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-70h]
  std::map<unsigned int,GCGMatchData> *__for_range; // [rsp+38h] [rbp-68h]
  std::pair<unsigned int const,GCGMatchData> *__in; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,GCGMatchData> >::type *match_id; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,GCGMatchData> >::type *match_data; // [rsp+50h] [rbp-50h]
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v28; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v29; // [rsp+70h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v28);
  __for_range = &this->match_data_map_;
  __for_begin._M_node = std::map<unsigned int,GCGMatchData>::begin(&this->match_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGMatchData>::end(&this->match_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData>>::operator*(&__for_begin);
    match_id = std::get<0ul,unsigned int const,GCGMatchData>(__in);
    match_data = std::get<1ul,unsigned int const,GCGMatchData>(__in);
    v1 = gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)match_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)match_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)match_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(match_id);
    }
    config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(v1, *match_id);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&match_data->version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)match_data + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data->version >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&match_data->version);
      }
      version = match_data->version;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->version);
      }
      if ( version != config_ptr->version )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_basic.cpp",
          "checkMatchVersion",
          357);
        v3 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v29,
               (const char (*)[42])"reset gcg match by version. new version: ");
        v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &config_ptr->version);
        v5 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v4, (const char (*)[15])" old version: ");
        v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &match_data->version);
        v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" score: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &match_data->score);
        v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               v8,
               (const char (*)[20])" win_streak_count: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &match_data->win_streak_count);
        v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v10,
                (const char (*)[21])" lose_streak_count: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &match_data->lose_streak_count);
        common::milog::MiLogStream::~MiLogStream(&v29);
        v12 = (((_BYTE)match_data + 4) & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)&match_data->score >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)match_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data->score >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4(&match_data->score);
        }
        before_score = match_data->score;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->version >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->version >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->version);
        }
        v13 = config_ptr->version;
        v14 = *(_BYTE *)(((unsigned __int64)&match_data->version >> 3) + 0x7FFF8000);
        LOBYTE(v12) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)match_data + 24) & 7) + 3) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store4(&match_data->version, v12, v15);
        match_data->version = v13;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->base_score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->base_score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->base_score);
        }
        match_data->score = config_ptr->base_score;
        v16 = (*(_BYTE *)(((unsigned __int64)&match_data->win_streak_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)match_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data->win_streak_count >> 3) + 0x7FFF8000));
        if ( (_BYTE)v16 )
          __asan_report_store4(&match_data->win_streak_count, (((_BYTE)match_data + 8) & 7u) + 3, v16);
        match_data->win_streak_count = 0;
        v17 = (*(_BYTE *)(((unsigned __int64)&match_data->lose_streak_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)match_data + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data->lose_streak_count >> 3) + 0x7FFF8000));
        if ( (_BYTE)v17 )
          __asan_report_store4(&match_data->lose_streak_count, (((_BYTE)match_data + 12) & 7u) + 3, v17);
        match_data->lose_streak_count = 0;
        score = match_data->score;
        if ( *(_BYTE *)(((unsigned __int64)match_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)match_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)match_data >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(match_data);
        }
        GCGBasic::logChangeMatchScore(this, match_data->match_id, before_score, score, 3u);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData>>::operator++(&__for_begin);
  }
};

// Line 375: range 00000000150D2E2C-00000000150D3109
void __fastcall GCGBasic::setMatchScore(GCGBasic *const this, uint32_t match_id, uint32_t score)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  const unsigned int *v7; // rax
  _DWORD *v8; // rdx
  uint32_t v9; // r14d
  char *v10; // rsi
  std::map<unsigned int,GCGMatchData>::mapped_type *v11; // rdx
  char v12; // cl
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+10h] [rbp-D0h]
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+18h] [rbp-C8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 match_id:374 64 4 9 score:374";
  *(_QWORD *)(v3 + 16) = GCGBasic::setMatchScore;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = match_id;
  *(_DWORD *)(v3 + 64) = score;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v3 + 48));
  if ( config_ptr )
  {
    GCGBasic::getMatchScore(this, *(_DWORD *)(v3 + 48));
    v7 = std::clamp<unsigned int>((const unsigned int *)(v3 + 64), &config_ptr->min_score, &config_ptr->max_score);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    *(_DWORD *)(v3 + 64) = *v8;
    v9 = *(_DWORD *)(v3 + 64);
    v10 = (char *)(v3 + 48);
    v11 = std::map<unsigned int,GCGMatchData>::operator[](
            &this->match_data_map_,
            (const std::map<unsigned int,GCGMatchData>::key_type *)(v3 + 48));
    v12 = *(_BYTE *)(((unsigned __int64)&v11->score >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)((((_BYTE)v11 + 4) & 7) + 3) >= v12 )
    {
      LOBYTE(v10) = v12 != 0;
      __asan_report_store4(&v11->score, v10, v11);
    }
    v11->score = v9;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_basic.cpp",
      "setMatchScore",
      380);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v17,
           (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
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
};

// Line 389: range 00000000150D310A-00000000150D3128
void __cdecl GCGBasic::onGMMatchClear(GCGBasic *const this)
{
  std::map<unsigned int,GCGMatchData>::clear(&this->match_data_map_);
};

// Line 394: range 00000000150D312A-00000000150D32E0
__int64 __fastcall GCGBasic::getMatchScore(GCGBasic *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  GCGMatchData *match_data_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 match_id:393";
  *(_QWORD *)(v2 + 16) = GCGBasic::getMatchScore;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = match_id;
  match_data_ptr = GCGBasic::getMatchData(this, *(_DWORD *)(v2 + 32));
  if ( match_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&match_data_ptr->score);
    }
    result = match_data_ptr->score;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_basic.cpp",
      "getMatchScore",
      398);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v8,
           (const char (*)[33])"getMatchData nullptr. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0LL;
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

// Line 405: range 00000000150D32E2-00000000150D36EE
GCGMatchData *__fastcall GCGBasic::getMatchData(GCGBasic *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  GCGMatchData *result; // rax
  common::milog::MiLogStream *v6; // rax
  GCGMatchData *v7; // rax
  uint32_t v8; // ecx
  char v9; // dl
  char *v10; // rsi
  __int64 v11; // rdx
  uint32_t base_score; // ecx
  char v13; // dl
  __int64 v14; // rdx
  uint32_t version; // ecx
  char v16; // dl
  __int64 v17; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData> >::_Self __y; // [rsp+10h] [rbp-D0h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-C8h]
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+20h] [rbp-C0h]
  GCGMatchData *match_data; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 match_id:404 64 8 8 iter:406";
  *(_QWORD *)(v2 + 16) = GCGBasic::getMatchData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = match_id;
  *(std::map<unsigned int,GCGMatchData>::iterator *)(v2 + 64) = std::map<unsigned int,GCGMatchData>::find(
                                                                  &this->match_data_map_,
                                                                  (const std::map<unsigned int,GCGMatchData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GCGMatchData>::end(&this->match_data_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGMatchData> > *const)(v2 + 64))->second;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v22);
    config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(
                   gcg_playing_config_mgr,
                   *(_DWORD *)(v2 + 48));
    if ( config_ptr )
    {
      v10 = (char *)(v2 + 48);
      v7 = std::map<unsigned int,GCGMatchData>::operator[](
             &this->match_data_map_,
             (const std::map<unsigned int,GCGMatchData>::key_type *)(v2 + 48));
      match_data = v7;
      v8 = *(_DWORD *)(v2 + 48);
      v9 = *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v9 != 0;
      v11 = (v9 != 0) & (unsigned __int8)((char)(((unsigned __int8)v7 & 7) + 3) >= v9);
      if ( (_BYTE)v11 )
        __asan_report_store4(v7, v10, v11);
      match_data->match_id = v8;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->base_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->base_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->base_score);
      }
      base_score = config_ptr->base_score;
      v13 = *(_BYTE *)(((unsigned __int64)&match_data->score >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v13 != 0;
      v14 = (v13 != 0) & (unsigned __int8)((char)((((_BYTE)match_data + 4) & 7) + 3) >= v13);
      if ( (_BYTE)v14 )
        __asan_report_store4(&match_data->score, v10, v14);
      match_data->score = base_score;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->version >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->version >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->version);
      }
      version = config_ptr->version;
      v16 = *(_BYTE *)(((unsigned __int64)&match_data->version >> 3) + 0x7FFF8000);
      LOBYTE(v10) = v16 != 0;
      v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)match_data + 24) & 7) + 3) >= v16);
      if ( (_BYTE)v17 )
        __asan_report_store4(&match_data->version, v10, v17);
      match_data->version = version;
      GCGBasic::logChangeMatchScore(this, match_data->match_id, 0, match_data->score, 1u);
      result = match_data;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_basic.cpp",
        "getMatchData",
        415);
      v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v23,
             (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0LL;
    }
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
  return result;
};

// Line 428: range 00000000150D36F0-00000000150D4830
void __fastcall GCGBasic::onMatchSettle(
        GCGBasic *const this,
        uint32_t match_id,
        bool is_win,
        uint32_t score,
        uint32_t opponent_score,
        bool is_ai)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
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
  common::milog::MiLogStream *v20; // rax
  uint32_t win_streak_count; // eax
  __int64 v22; // rdx
  std::vector<int>::size_type v23; // rax
  std::vector<int>::const_reference v24; // rax
  _DWORD *v25; // rdx
  std::vector<int>::const_reference v26; // rax
  _DWORD *v27; // rdx
  __int64 v28; // rdx
  uint32_t lose_streak_count; // eax
  std::vector<int>::size_type v30; // rax
  std::vector<int>::const_reference v31; // rax
  _DWORD *v32; // rdx
  std::vector<int>::const_reference v33; // rax
  _DWORD *v34; // rdx
  int32_t win_revise_min; // ecx
  const int *v36; // rax
  _DWORD *v37; // rdx
  int32_t lose_revise_min; // ecx
  const int *v39; // rax
  _DWORD *v40; // rdx
  uint32_t v41; // eax
  uint32_t v42; // ecx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  int delta_score; // [rsp+24h] [rbp-15Ch]
  uint32_t temp_score; // [rsp+28h] [rbp-158h]
  uint32_t streak_index_0; // [rsp+2Ch] [rbp-154h]
  uint32_t streak_index; // [rsp+30h] [rbp-150h]
  uint32_t before_score; // [rsp+34h] [rbp-14Ch]
  GCGMatchData *match_data_ptr; // [rsp+38h] [rbp-148h]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+48h] [rbp-138h]
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+50h] [rbp-130h]
  const data::GCGMatchRankExcelConfig *rank_config_ptr; // [rsp+58h] [rbp-128h]
  const std::vector<int> *streak_revise_list_0; // [rsp+60h] [rbp-120h]
  const std::vector<int> *streak_revise_list; // [rsp+68h] [rbp-118h]
  double self_score_d; // [rsp+70h] [rbp-110h]
  double opponent_score_d; // [rsp+78h] [rbp-108h]
  std::shared_ptr<Config> v81; // [rsp+80h] [rbp-100h] BYREF
  common::milog::MiLogStream v82; // [rsp+90h] [rbp-F0h] BYREF
  char v83[208]; // [rsp+B0h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v83;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "7 32 4 11 rank_id:448 48 4 16 streak_score:455 64 4 14 base_score:494 80 4 16 revise_score:495 9"
                        "6 4 12 match_id:427 112 4 9 score:427 128 4 18 opponent_score:427";
  *(_QWORD *)(v6 + 16) = GCGBasic::onMatchSettle;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862722] = -234556924;
  v8[536862723] = -234556924;
  v8[536862724] = -202116348;
  *(_DWORD *)(v6 + 96) = match_id;
  *(_DWORD *)(v6 + 112) = score;
  *(_DWORD *)(v6 + 128) = opponent_score;
  match_data_ptr = GCGBasic::getMatchData(this, *(_DWORD *)(v6 + 96));
  if ( match_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4(&match_data_ptr->score);
    }
    if ( match_data_ptr->score == *(_DWORD *)(v6 + 112) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v81);
      gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v81)->design_config.txt_config_mgr.gcg_playing_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v81);
      config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(
                     gcg_playing_config_mgr,
                     *(_DWORD *)(v6 + 96));
      if ( config_ptr )
      {
        *(_DWORD *)(v6 + 32) = GCGPlayingExcelConfigMgr::getScoreRank(
                                 gcg_playing_config_mgr,
                                 *(_DWORD *)(v6 + 96),
                                 *(_DWORD *)(v6 + 112)).second;
        rank_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchRankExcelConfig(
                            gcg_playing_config_mgr,
                            *(_DWORD *)(v6 + 32));
        if ( rank_config_ptr )
        {
          *(_DWORD *)(v6 + 48) = 0;
          if ( is_win )
          {
            if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->win_streak_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)match_data_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->win_streak_count >> 3)
                                                                           + 0x7FFF8000) )
            {
              __asan_report_load4(&match_data_ptr->win_streak_count);
            }
            win_streak_count = match_data_ptr->win_streak_count;
            match_data_ptr->win_streak_count = win_streak_count + 1;
            streak_index = win_streak_count;
            v22 = (*(_BYTE *)(((unsigned __int64)&match_data_ptr->lose_streak_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)match_data_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->lose_streak_count >> 3) + 0x7FFF8000));
            if ( (_BYTE)v22 )
              __asan_report_store4(&match_data_ptr->lose_streak_count, (((_BYTE)match_data_ptr + 12) & 7u) + 3, v22);
            match_data_ptr->lose_streak_count = 0;
            streak_revise_list = &rank_config_ptr->win_streak_revise_list;
            if ( streak_index < std::vector<int>::size(&rank_config_ptr->win_streak_revise_list) )
            {
              v26 = std::vector<int>::operator[](streak_revise_list, streak_index);
              v27 = v26;
              if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v26);
              }
              *(_DWORD *)(v6 + 48) = *v27;
            }
            else if ( std::vector<int>::size(streak_revise_list) )
            {
              v23 = std::vector<int>::size(streak_revise_list);
              v24 = std::vector<int>::operator[](streak_revise_list, v23 - 1);
              v25 = v24;
              if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v24);
              }
              *(_DWORD *)(v6 + 48) = *v25;
            }
          }
          else
          {
            v28 = (*(_BYTE *)(((unsigned __int64)&match_data_ptr->win_streak_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)match_data_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->win_streak_count >> 3) + 0x7FFF8000));
            if ( (_BYTE)v28 )
              __asan_report_store4(&match_data_ptr->win_streak_count, (((_BYTE)match_data_ptr + 8) & 7u) + 3, v28);
            match_data_ptr->win_streak_count = 0;
            if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->lose_streak_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)match_data_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->lose_streak_count >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4(&match_data_ptr->lose_streak_count);
            }
            lose_streak_count = match_data_ptr->lose_streak_count;
            match_data_ptr->lose_streak_count = lose_streak_count + 1;
            streak_index_0 = lose_streak_count;
            streak_revise_list_0 = &rank_config_ptr->lose_streak_revise_list;
            if ( lose_streak_count < std::vector<int>::size(&rank_config_ptr->lose_streak_revise_list) )
            {
              v33 = std::vector<int>::operator[](streak_revise_list_0, streak_index_0);
              v34 = v33;
              if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v33);
              }
              *(_DWORD *)(v6 + 48) = *v34;
            }
            else if ( std::vector<int>::size(streak_revise_list_0) )
            {
              v30 = std::vector<int>::size(streak_revise_list_0);
              v31 = std::vector<int>::operator[](streak_revise_list_0, v30 - 1);
              v32 = v31;
              if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v31);
              }
              *(_DWORD *)(v6 + 48) = *v32;
            }
          }
          *(_DWORD *)(v6 + 64) = 0;
          *(_DWORD *)(v6 + 80) = 0;
          self_score_d = (double)*(int *)(v6 + 112);
          opponent_score_d = (double)*(int *)(v6 + 128);
          if ( is_ai )
          {
            if ( is_win )
            {
              if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->ai_win_score >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&rank_config_ptr->ai_win_score >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&rank_config_ptr->ai_win_score);
              }
              *(_DWORD *)(v6 + 64) = rank_config_ptr->ai_win_score;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->ai_lose_score >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)rank_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rank_config_ptr->ai_lose_score >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4(&rank_config_ptr->ai_lose_score);
              }
              *(_DWORD *)(v6 + 64) = rank_config_ptr->ai_lose_score;
            }
          }
          else if ( is_win )
          {
            if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_score >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_score >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&rank_config_ptr->win_score);
            }
            *(_DWORD *)(v6 + 64) = rank_config_ptr->win_score;
            if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_revise_min >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)rank_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_revise_min >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&rank_config_ptr->win_revise_min);
            }
            win_revise_min = rank_config_ptr->win_revise_min;
            if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_revise_max >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_revise_max >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&rank_config_ptr->win_revise_max);
            }
            if ( win_revise_min < rank_config_ptr->win_revise_max )
            {
              if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_revise_rate >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&rank_config_ptr->win_revise_rate >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&rank_config_ptr->win_revise_rate);
              }
              *(_DWORD *)(v6 + 80) = (int)(rank_config_ptr->win_revise_rate * (opponent_score_d - self_score_d));
              v36 = std::clamp<int>(
                      (const int *)(v6 + 80),
                      &rank_config_ptr->win_revise_min,
                      &rank_config_ptr->win_revise_max);
              v37 = v36;
              if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v36);
              }
              *(_DWORD *)(v6 + 80) = *v37;
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)rank_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_score >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&rank_config_ptr->lose_score);
            }
            *(_DWORD *)(v6 + 64) = rank_config_ptr->lose_score;
            if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_revise_min >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_revise_min >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&rank_config_ptr->lose_revise_min);
            }
            lose_revise_min = rank_config_ptr->lose_revise_min;
            if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_revise_max >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)rank_config_ptr + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_revise_max >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&rank_config_ptr->lose_revise_max);
            }
            if ( lose_revise_min < rank_config_ptr->lose_revise_max )
            {
              if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_revise_rate >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)rank_config_ptr + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rank_config_ptr->lose_revise_rate >> 3)
                                                                                + 0x7FFF8000) )
              {
                __asan_report_load4(&rank_config_ptr->lose_revise_rate);
              }
              *(_DWORD *)(v6 + 80) = (int)(rank_config_ptr->lose_revise_rate * (self_score_d - opponent_score_d));
              v39 = std::clamp<int>(
                      (const int *)(v6 + 80),
                      &rank_config_ptr->lose_revise_min,
                      &rank_config_ptr->lose_revise_max);
              v40 = v39;
              if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v39);
              }
              *(_DWORD *)(v6 + 80) = *v40;
            }
          }
          delta_score = *(_DWORD *)(v6 + 80) + *(_DWORD *)(v6 + 64) + *(_DWORD *)(v6 + 48);
          if ( delta_score < 0 )
            delta_score = 0;
          if ( is_win )
          {
            temp_score = SAFE_ADD<unsigned int,int>(*(_DWORD *)(v6 + 112), delta_score);
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->max_score >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config_ptr->max_score >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config_ptr->max_score);
            }
            if ( temp_score > config_ptr->max_score )
              temp_score = config_ptr->max_score;
          }
          else
          {
            if ( *(_DWORD *)(v6 + 112) <= (unsigned int)delta_score )
              v41 = 0;
            else
              v41 = *(_DWORD *)(v6 + 112) - delta_score;
            temp_score = v41;
            if ( *(_BYTE *)(((unsigned __int64)&config_ptr->min_score >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)config_ptr + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->min_score >> 3)
                                                                        + 0x7FFF8000) )
            {
              __asan_report_load4(&config_ptr->min_score);
            }
            if ( temp_score < config_ptr->min_score )
              temp_score = config_ptr->min_score;
          }
          if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)match_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&match_data_ptr->score);
          }
          before_score = match_data_ptr->score;
          match_data_ptr->score = temp_score;
          v42 = match_data_ptr->score;
          if ( *(_BYTE *)(((unsigned __int64)match_data_ptr >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)match_data_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)match_data_ptr >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(match_data_ptr);
          }
          GCGBasic::logChangeMatchScore(this, match_data_ptr->match_id, before_score, v42, 2u);
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_basic.cpp",
            "onMatchSettle",
            566);
          v43 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v82,
                  (const char (*)[39])"onMatchSettle score change. match_id: ");
          v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v43,
                  (const unsigned int *)(v6 + 96));
          v45 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v44, (const char (*)[10])" before: ");
          v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v45,
                  (const unsigned int *)(v6 + 112));
          v47 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v46, (const char (*)[9])" after: ");
          v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &match_data_ptr->score);
          v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v48, (const char (*)[10])" is_win: ");
          v50 = common::milog::MiLogStream::operator<<(v49, is_win);
          v51 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v50, (const char (*)[9])" is_ai: ");
          v52 = common::milog::MiLogStream::operator<<(v51, is_ai);
          v53 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v52,
                  (const char (*)[14])" base_score: ");
          v54 = common::milog::MiLogStream::operator<<<int,(int *)0>(v53, (const int *)(v6 + 64));
          v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v54,
                  (const char (*)[16])" streak_score: ");
          v56 = common::milog::MiLogStream::operator<<<int,(int *)0>(v55, (const int *)(v6 + 48));
          v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v56,
                  (const char (*)[16])" revise_score: ");
          v58 = common::milog::MiLogStream::operator<<<int,(int *)0>(v57, (const int *)(v6 + 80));
          v59 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v58,
                  (const char (*)[18])" opponent_score: ");
          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v59,
                  (const unsigned int *)(v6 + 128));
          v61 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v60,
                  (const char (*)[14])" win_streak: ");
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v61,
                  &match_data_ptr->win_streak_count);
          v63 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v62,
                  (const char (*)[15])" lose_streak: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v63,
            &match_data_ptr->lose_streak_count);
          common::milog::MiLogStream::~MiLogStream(&v82);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v82,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/card_game/gcg_basic.cpp",
            "onMatchSettle",
            452);
          v16 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v82,
                  (const char (*)[45])"findGCGMatchRankExcelConfig fail. match_id: ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v6 + 96));
          v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" rank_id: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v6 + 32));
          v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" score: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v6 + 112));
          common::milog::MiLogStream::~MiLogStream(&v82);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v82,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/gcg_basic.cpp",
          "onMatchSettle",
          445);
        v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v82,
                (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v6 + 96));
        common::milog::MiLogStream::~MiLogStream(&v82);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v82,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_basic.cpp",
        "onMatchSettle",
        438);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v82,
              (const char (*)[41])"match settle score not match. match_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 96));
      v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])" cur score: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &match_data_ptr->score);
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" score: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v6 + 112));
      common::milog::MiLogStream::~MiLogStream(&v82);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v82,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_basic.cpp",
      "onMatchSettle",
      432);
    v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v82,
           (const char (*)[33])"getMatchData nullptr. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 96));
    common::milog::MiLogStream::~MiLogStream(&v82);
  }
  if ( v83 == (char *)v6 )
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
};

// Line 579: range 00000000150D4832-00000000150D4BFD
void __fastcall GCGBasic::onMatchConfirmRefuse(GCGBasic *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int v6; // eax
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v8; // rax
  unsigned int *v9; // rdx
  unsigned int v10; // r13d
  __int64 Now; // rax
  uint32_t v12; // edi
  __int64 v13; // rdx
  unsigned int refuse_count; // [rsp+14h] [rbp-ACh]
  GCGMatchData *match_data_ptr; // [rsp+18h] [rbp-A8h]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-A0h]
  const data::GCGMatchExcelConfig *config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 match_id:578";
  *(_QWORD *)(v2 + 16) = GCGBasic::onMatchConfirmRefuse;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = match_id;
  match_data_ptr = GCGBasic::getMatchData(this, *(_DWORD *)(v2 + 32));
  if ( match_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->refuse_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_data_ptr + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->refuse_count >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&match_data_ptr->refuse_count);
    }
    v6 = match_data_ptr->refuse_count;
    match_data_ptr->refuse_count = v6 + 1;
    refuse_count = v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v18);
    config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(
                   gcg_playing_config_mgr,
                   *(_DWORD *)(v2 + 32));
    if ( config_ptr )
    {
      if ( !std::vector<unsigned int>::empty(&config_ptr->punish_time_list) )
      {
        if ( refuse_count >= std::vector<unsigned int>::size(&config_ptr->punish_time_list) )
          refuse_count = std::vector<unsigned int>::size(&config_ptr->punish_time_list) - 1;
        v8 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                   &config_ptr->punish_time_list,
                                                                                                   refuse_count);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        v10 = *v9;
        Now = common::tools::TimeUtils::getNow();
        v12 = SAFE_ADD<long,unsigned int>(Now, v10);
        v13 = (*(_BYTE *)(((unsigned __int64)&match_data_ptr->punish_end_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)match_data_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->punish_end_time >> 3) + 0x7FFF8000));
        if ( (_BYTE)v13 )
        {
          v12 = (_DWORD)match_data_ptr + 20;
          __asan_report_store4(&match_data_ptr->punish_end_time, (((_BYTE)match_data_ptr + 20) & 7u) + 3, v13);
        }
        match_data_ptr->punish_end_time = v12;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_basic.cpp",
        "onMatchConfirmRefuse",
        591);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v19,
             (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_basic.cpp",
      "onMatchConfirmRefuse",
      583);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v19,
           (const char (*)[33])"getMatchData nullptr. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 606: range 00000000150D4BFE-00000000150D4DB4
__int64 __fastcall GCGBasic::getMatchPunishEndTime(GCGBasic *const this, uint32_t match_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  GCGMatchData *match_data_ptr; // [rsp+18h] [rbp-88h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-80h] BYREF
  char v9[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 match_id:605";
  *(_QWORD *)(v2 + 16) = GCGBasic::getMatchPunishEndTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = match_id;
  match_data_ptr = GCGBasic::getMatchData(this, *(_DWORD *)(v2 + 32));
  if ( match_data_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->punish_end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)match_data_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->punish_end_time >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(&match_data_ptr->punish_end_time);
    }
    result = match_data_ptr->punish_end_time;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_basic.cpp",
      "getMatchPunishEndTime",
      610);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v8,
           (const char (*)[33])"getMatchData nullptr. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v8);
    result = 0LL;
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

// Line 617: range 00000000150D4DB6-00000000150D53A4
void __fastcall GCGBasic::fillMatchDuelExtra(GCGBasic *const this, uint32_t match_id, proto::GCGDuelExtra *extra)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t GCGMatchAIValidDeck; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  bool isInternalServer; // al
  PlayerGCGComp *GCGComp; // rax
  bool is_match_ai; // [rsp+27h] [rbp-B9h]
  uint32_t game_id; // [rsp+28h] [rbp-B8h]
  uint32_t score; // [rsp+2Ch] [rbp-B4h]
  GCGMatchData *match_data_ptr; // [rsp+30h] [rbp-B0h]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-A8h]
  const data::GCGMatchExcelConfig *match_config_ptr; // [rsp+40h] [rbp-A0h]
  const data::GCGMatchRankExcelConfig *rank_config_ptr; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-80h] BYREF
  char v23[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 match_id:616";
  *(_QWORD *)(v3 + 16) = GCGBasic::fillMatchDuelExtra;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = match_id;
  match_data_ptr = GCGBasic::getMatchData(this, *(_DWORD *)(v3 + 32));
  if ( match_data_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    match_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(
                         gcg_playing_config_mgr,
                         *(_DWORD *)(v3 + 32));
    if ( match_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)match_data_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->score >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&match_data_ptr->score);
      }
      score = match_data_ptr->score;
      rank_config_ptr = GCGPlayingExcelConfigMgr::findGCGMatchRankExcelConfigByScore(
                          gcg_playing_config_mgr,
                          *(_DWORD *)(v3 + 32),
                          score);
      if ( rank_config_ptr )
      {
        is_match_ai = 0;
        if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->game_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)match_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->game_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&match_config_ptr->game_id);
        }
        game_id = match_config_ptr->game_id;
        if ( *(char *)(((unsigned __int64)&rank_config_ptr->is_only_ai >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&rank_config_ptr->is_only_ai);
        if ( rank_config_ptr->is_only_ai )
          goto LABEL_23;
        if ( *(_BYTE *)(((unsigned __int64)&rank_config_ptr->match_ai_lose_streak >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&rank_config_ptr->match_ai_lose_streak >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&rank_config_ptr->match_ai_lose_streak);
        }
        if ( rank_config_ptr->match_ai_lose_streak )
        {
          if ( *(_BYTE *)(((unsigned __int64)&match_data_ptr->lose_streak_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)match_data_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_data_ptr->lose_streak_count >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4(&match_data_ptr->lose_streak_count);
          }
          if ( match_data_ptr->lose_streak_count >= rank_config_ptr->match_ai_lose_streak )
          {
LABEL_23:
            if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->ai_game_id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&match_config_ptr->ai_game_id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&match_config_ptr->ai_game_id);
            }
            game_id = match_config_ptr->ai_game_id;
            is_match_ai = 1;
          }
        }
        proto::GCGDuelExtra::set_is_match_ai(extra, is_match_ai);
        GCGMatchAIValidDeck = GCGBasic::getGCGMatchAIValidDeck(this, *(_DWORD *)(v3 + 32), score);
        proto::GCGDuelExtra::set_ai_deck_id(extra, GCGMatchAIValidDeck);
        proto::GCGDuelExtra::set_score(extra, score);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        isInternalServer = Config::isInternalServer(v10);
        proto::GCGDuelExtra::set_is_internal(extra, isInternalServer);
        std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        GCGComp = Player::getGCGComp(this->player_);
        PlayerGCGComp::fillGCGDuelExtra(GCGComp, game_id, extra);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/gcg_basic.cpp",
          "fillMatchDuelExtra",
          635);
        v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v22,
               (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/gcg_basic.cpp",
        "fillMatchDuelExtra",
        628);
      v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v22,
             (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_basic.cpp",
      "fillMatchDuelExtra",
      621);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v22,
           (const char (*)[33])"getMatchData nullptr. match_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
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

// Line 654: range 00000000150D53A6-00000000150D598E
uint32_t __cdecl GCGBasic::getGCGMatchAIValidDeck(GCGBasic *const this, uint32_t match_id, uint32_t score)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t v6; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v8; // rax
  _DWORD *v9; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  std::vector<unsigned int>::reference v12; // rax
  uint32_t *v13; // rdx
  uint32_t result; // eax
  bool is_valid; // [rsp+17h] [rbp-179h]
  uint32_t size; // [rsp+18h] [rbp-178h]
  uint32_t ret; // [rsp+1Ch] [rbp-174h]
  std::vector<int>::const_iterator __for_begin; // [rsp+20h] [rbp-170h] BYREF
  std::vector<int>::const_iterator __for_end; // [rsp+28h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-160h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-158h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+40h] [rbp-150h]
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+48h] [rbp-148h]
  const data::GCGMatchRankExcelConfig *config_ptr; // [rsp+50h] [rbp-140h]
  const std::vector<int> *__for_range; // [rsp+58h] [rbp-138h]
  const data::GCGDeckExcelConfig *deck_config_ptr; // [rsp+60h] [rbp-130h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+68h] [rbp-128h]
  std::shared_ptr<Config> v29; // [rsp+70h] [rbp-120h] BYREF
  char v30[272]; // [rsp+80h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 11 deck_id:668 64 4 11 card_id:674 80 24 12 deck_vec:667 144 48 16 ban_card_set:666";
  *(_QWORD *)(v3 + 16) = GCGBasic::getGCGMatchAIValidDeck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v29);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.gcg_game_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v29);
  config_ptr = GCGPlayingExcelConfigMgr::findGCGMatchRankExcelConfigByScore(gcg_playing_config_mgr, match_id, score);
  if ( config_ptr )
  {
    if ( std::vector<int>::empty(&config_ptr->ai_deck_list) )
    {
      v6 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
      FeatureSwitchMgr::getGCGBanCardSet((std::set<unsigned int> *)(v3 + 144), &v7->feature_switch_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v29);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 80));
      __for_range = &config_ptr->ai_deck_list;
      __for_begin._M_current = std::vector<int>::begin(&config_ptr->ai_deck_list)._M_current;
      __for_end._M_current = std::vector<int>::end(&config_ptr->ai_deck_list)._M_current;
      while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
      {
        v8 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        *(_DWORD *)(v3 + 48) = *v9;
        deck_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGDeckExcelConfig(
                            gcg_game_config_mgr,
                            *(_DWORD *)(v3 + 48));
        if ( deck_config_ptr )
        {
          is_valid = 1;
          __for_range_0 = &deck_config_ptr->character_list;
          __for_begin_0._M_current = std::vector<unsigned int>::begin(&deck_config_ptr->character_list)._M_current;
          __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
          {
            v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v10);
            }
            *(_DWORD *)(v3 + 64) = *v11;
            if ( std::set<unsigned int>::count(
                   (const std::set<unsigned int> *const)(v3 + 144),
                   (const std::set<unsigned int>::key_type *)(v3 + 64)) )
            {
              is_valid = 0;
              break;
            }
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
          }
          if ( is_valid )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v3 + 80),
              (const std::vector<unsigned int>::value_type *)(v3 + 48));
        }
        __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
      }
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 80)) )
      {
        v6 = 0;
      }
      else
      {
        size = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 80));
        ret = common::tools::RandomUtils::rand<unsigned int>(0, size - 1);
        if ( ret >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 80)) )
        {
          v6 = 0;
        }
        else
        {
          v12 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 80), ret);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          v6 = *v13;
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 80));
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 144));
    }
  }
  else
  {
    v6 = 0;
  }
  result = v6;
  if ( v30 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 702: range 00000000150D5990-00000000150D6421
int32_t __cdecl GCGBasic::invite(GCGBasic *const this, uint32_t uid, proto::GCGInviteGuestBattleRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isGCGPvpClosed; // r14
  common::milog::MiLogStream *v11; // r14
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  uint32_t v15; // eax
  Player *v16; // rax
  PlayerBasicComp *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *v20; // rax
  GCGBasic *Basic; // rax
  Player *v22; // rax
  PlayerGCGComp *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  uint32_t Now; // edi
  __int64 v27; // rdx
  uint32_t InviteExpireTime; // eax
  Player *v29; // rax
  int32_t result; // eax
  google::protobuf::uint32 ban_invite_expire_time; // [rsp+24h] [rbp-15Ch]
  uint32_t ban_invite_expire_timea; // [rsp+24h] [rbp-15Ch]
  PlayerGCGComp *target_player_gcg_comp; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v36; // [rsp+30h] [rbp-150h] BYREF
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-130h] BYREF
  char v38[272]; // [rsp+70h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 retcode:762 64 12 10 option:759 96 16 13 world_ptr:734 128 16 21 target_player_ptr:741"
                        " 160 24 10 notify:772";
  *(_QWORD *)(v3 + 16) = GCGBasic::invite;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -219020288;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -218103808;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCE7u) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_basic.cpp",
      "invite",
      705);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v37,
           (const char (*)[34])"OPEN_STATE_GCG_PVP not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    v8 = 141;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 128));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    isGCGPvpClosed = FeatureSwitchMgr::isGCGPvpClosed(&v9->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
    if ( isGCGPvpClosed )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_basic.cpp",
        "invite",
        710);
      v11 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v37, (const char (*)[21])off_257039C0);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v37);
      v8 = 142;
    }
    else
    {
      ban_invite_expire_time = GCGBasic::getBanInviteExpireTime(this);
      if ( common::tools::TimeUtils::getNow() >= ban_invite_expire_time )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        if ( uid == Player::getUid(this->player_) )
        {
          v8 = 12107;
        }
        else
        {
          *(_QWORD *)(v3 + 64) = 0LL;
          *(_DWORD *)(v3 + 72) = 0;
          *(_BYTE *)(v3 + 75) = 1;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          GCGComp = Player::getGCGComp(this->player_);
          *(_DWORD *)(v3 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v3 + 64));
          if ( *(_DWORD *)(v3 + 48) )
          {
            common::milog::MiLogStream::create(
              &v36,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/card_game/gcg_basic.cpp",
              "invite",
              730);
            v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v36,
                    (const char (*)[26])"checkCanEnter fail. ret: ");
            v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v3 + 48));
            GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v37, (GCGEnterCheckOption *const)(v3 + 64));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v37);
            std::string::~string(&v37);
            common::milog::MiLogStream::~MiLogStream(&v36);
            v8 = *(_DWORD *)(v3 + 48);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            Player::getSceneComp(this->player_);
            PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v3 + 96));
            if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 96), 0LL) )
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/card_game/gcg_basic.cpp",
                "invite",
                738);
              common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v37,
                (const char (*)[28])"my player world is nullptr.");
              common::milog::MiLogStream::~MiLogStream(&v37);
              v8 = -1;
            }
            else
            {
              v15 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              World::findPlayerPtr((World *const)(v3 + 128), v15);
              if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 128), 0LL) )
              {
                v8 = 12108;
              }
              else
              {
                v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                v17 = Player::getBasicComp(v16);
                if ( !PlayerBasicComp::isStateOpen(v17, 0xCE7u) )
                {
                  common::milog::MiLogStream::create(
                    &v37,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/card_game/gcg_basic.cpp",
                    "invite",
                    748);
                  v18 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          &v37,
                          (const char (*)[34])"OPEN_STATE_GCG_PVP not open, uid:");
                  v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  *(_DWORD *)(v3 + 48) = Player::getUid(v19);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v18,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v37);
                  v8 = 12145;
                }
                else
                {
                  v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  target_player_gcg_comp = Player::getGCGComp(v20);
                  Basic = PlayerGCGComp::getBasic(target_player_gcg_comp);
                  ban_invite_expire_timea = GCGBasic::getBanInviteExpireTime(Basic);
                  if ( common::tools::TimeUtils::getNow() >= ban_invite_expire_timea )
                  {
                    *(_QWORD *)(v3 + 64) = 0LL;
                    *(_DWORD *)(v3 + 72) = 0;
                    *(_BYTE *)(v3 + 70) = 1;
                    *(_BYTE *)(v3 + 74) = 1;
                    v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                    v23 = Player::getGCGComp(v22);
                    *(_DWORD *)(v3 + 48) = PlayerGCGComp::checkCanEnterGame(v23, (const GCGEnterCheckOption *)(v3 + 64));
                    if ( *(_DWORD *)(v3 + 48) )
                    {
                      common::milog::MiLogStream::create(
                        &v36,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/card_game/gcg_basic.cpp",
                        "invite",
                        765);
                      v24 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                              &v36,
                              (const char (*)[40])"target player checkCanEnter fail. ret: ");
                      v25 = common::milog::MiLogStream::operator<<<int,(int *)0>(v24, (const int *)(v3 + 48));
                      GCGEnterCheckOption::getDesc[abi:cxx11](
                        (std::string *)&v37,
                        (GCGEnterCheckOption *const)(v3 + 64));
                      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                        v25,
                        (const std::string *)&v37);
                      std::string::~string(&v37);
                      common::milog::MiLogStream::~MiLogStream(&v36);
                      v8 = GCGBasic::transTargetRetcode(this, *(_DWORD *)(v3 + 48));
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_store4(&this->invite_uid_, v3 + 64, &this->invite_uid_);
                      }
                      this->invite_uid_ = uid;
                      Now = common::tools::TimeUtils::getNow();
                      v27 = (*(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000));
                      if ( (_BYTE)v27 )
                      {
                        Now = (_DWORD)this + 116;
                        __asan_report_store4(&this->invite_time_, (((_BYTE)this + 116) & 7u) + 3, v27);
                      }
                      this->invite_time_ = Now;
                      proto::GCGInviteBattleNotify::GCGInviteBattleNotify((proto::GCGInviteBattleNotify *const)(v3 + 160));
                      InviteExpireTime = GCGBasic::getInviteExpireTime(this);
                      proto::GCGInviteBattleNotify::set_confirm_end_time(
                        (proto::GCGInviteBattleNotify *const)(v3 + 160),
                        InviteExpireTime);
                      v29 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                      Player::sendProto(v29, (const google::protobuf::Message *)(v3 + 160));
                      v8 = 0;
                      proto::GCGInviteBattleNotify::~GCGInviteBattleNotify((proto::GCGInviteBattleNotify *const)(v3 + 160));
                    }
                  }
                  else
                  {
                    v8 = 12149;
                  }
                }
              }
              std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 128));
            }
            std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 96));
          }
        }
      }
      else
      {
        proto::GCGInviteGuestBattleRsp::set_punish_end_time(rsp_0, ban_invite_expire_time);
        v8 = 12148;
      }
    }
  }
  result = v8;
  if ( v38 == (char *)v3 )
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

// Line 779: range 00000000150D6422-00000000150D6DD8
int32_t __cdecl GCGBasic::inviteApply(GCGBasic *const this, bool is_agree, proto::GCGApplyInviteBattleRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  Player *v9; // rax
  PlayerGCGComp *GCGComp; // rax
  uint32_t Uid; // edx
  common::milog::MiLogStream *v12; // rax
  PlayerGCGComp *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  uint32_t v16; // edx
  Player *v17; // rax
  PlayerBasicComp *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgInviteApply,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  uint32_t v21; // eax
  Player *player; // r14
  int32_t result; // eax
  std::string v24; // [rsp+0h] [rbp-1C0h]
  GCGBasic *thisa; // [rsp+18h] [rbp-1A8h]
  google::protobuf::uint32 ban_invite_expire_time; // [rsp+24h] [rbp-19Ch]
  GCGBasic *owner_basic; // [rsp+28h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-170h] BYREF
  char v31[336]; // [rsp+70h] [rbp-150h] BYREF

  *(&v24._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v24._M_string_length = (std::string::size_type)rsp_0;
  v24._anon_0._M_local_buf[4] = is_agree;
  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 10 holder:832 64 4 7 ret:805 80 4 11 retcode:812 96 12 10 option:816 128 16 13 world_ptr:"
                        "792 160 16 20 owner_player_ptr:798 192 16 11 log_ptr:833 224 32 10 notify:827";
  *(_QWORD *)(v3 + 16) = GCGBasic::inviteApply;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -219020288;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0xCE7u) )
  {
    ban_invite_expire_time = GCGBasic::getBanInviteExpireTime(this);
    if ( common::tools::TimeUtils::getNow() < ban_invite_expire_time )
    {
      proto::GCGApplyInviteBattleRsp::set_punish_end_time(
        (proto::GCGApplyInviteBattleRsp *const)v24._M_string_length,
        ban_invite_expire_time);
      v8 = 12149;
      goto LABEL_37;
    }
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 128));
    if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_basic.cpp",
        "inviteApply",
        795);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v30,
        (const char (*)[23])"getCurWorld is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v8 = 12105;
LABEL_36:
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 128));
      goto LABEL_37;
    }
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v3 + 160));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_basic.cpp",
        "inviteApply",
        801);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v30,
        (const char (*)[33])"curWorld owner player is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v30);
      v8 = -1;
    }
    else
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      GCGComp = Player::getGCGComp(v9);
      owner_basic = PlayerGCGComp::getBasic(GCGComp);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Uid = Player::getUid(this->player_);
      *(_DWORD *)(v3 + 64) = GCGBasic::checkInviteData(owner_basic, Uid);
      if ( !*(_DWORD *)(v3 + 64) )
      {
        GCGBasic::clearInviteData(owner_basic);
        *(_DWORD *)(v3 + 80) = 0;
        if ( is_agree )
        {
          *(_QWORD *)(v3 + 96) = 0LL;
          *(_DWORD *)(v3 + 104) = 0;
          *(_BYTE *)(v3 + 102) = 1;
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v13 = Player::getGCGComp(this->player_);
          *(_DWORD *)(v3 + 80) = PlayerGCGComp::checkCanEnterGame(v13, (const GCGEnterCheckOption *)(v3 + 96));
          if ( *(_DWORD *)(v3 + 80) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 224),
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/card_game/gcg_basic.cpp",
              "inviteApply",
              821);
            v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    (common::milog::MiLogStream *const)(v3 + 224),
                    (const char (*)[40])"target player checkCanEnter fail. ret: ");
            v15 = common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v3 + 80));
            GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v30, (GCGEnterCheckOption *const)(v3 + 96));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v30);
            std::string::~string(&v30);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
            v8 = *(_DWORD *)(v3 + 80);
            goto LABEL_35;
          }
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v16 = Player::getUid(this->player_);
          *(_DWORD *)(v3 + 80) = GCGBasic::startInviteDuel(owner_basic, v16);
        }
        proto::GCGApplyInviteBattleNotify::GCGApplyInviteBattleNotify((proto::GCGApplyInviteBattleNotify *const)(v3 + 224));
        proto::GCGApplyInviteBattleNotify::set_retcode(
          (proto::GCGApplyInviteBattleNotify *const)(v3 + 224),
          *(_DWORD *)(v3 + 80));
        proto::GCGApplyInviteBattleNotify::set_is_agree((proto::GCGApplyInviteBattleNotify *const)(v3 + 224), is_agree);
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        Player::sendProto(v17, (const google::protobuf::Message *)(v3 + 224));
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v18 = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, v18);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xEBBu, v24);
        std::string::~string(&v30);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgInviteApply>();
        v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgInviteApply,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgInviteApply,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 192));
        v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v21 = Player::getUid(v20);
        proto_log::PlayerLogBodyGcgInviteApply::set_uid(v19, v21);
        if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
          __asan_report_load8(thisa);
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgInviteApply,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgInviteApply> *)(v3 + 192));
        Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        std::shared_ptr<proto_log::PlayerLogBodyGcgInviteApply>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgInviteApply> *const)(v3 + 192));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
        v8 = *(_DWORD *)(v3 + 80);
        proto::GCGApplyInviteBattleNotify::~GCGApplyInviteBattleNotify((proto::GCGApplyInviteBattleNotify *const)(v3 + 224));
        goto LABEL_35;
      }
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_basic.cpp",
        "inviteApply",
        808);
      v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v30,
              (const char (*)[28])"checkInviteData fail. ret: ");
      common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v30);
      v8 = *(_DWORD *)(v3 + 64);
    }
LABEL_35:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 160));
    goto LABEL_36;
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/card_game/gcg_basic.cpp",
    "inviteApply",
    782);
  v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v30,
         (const char (*)[34])"OPEN_STATE_GCG_PVP not open, uid:");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  *(_DWORD *)(v3 + 80) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream(&v30);
  v8 = 141;
LABEL_37:
  result = v8;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
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

// Line 841: range 00000000150D6DDA-00000000150D6E5D
int32_t __cdecl GCGBasic::checkInviteData(GCGBasic *const this, uint32_t uid)
{
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->invite_uid_);
  }
  if ( uid != this->invite_uid_ )
    return 12109;
  now = common::tools::TimeUtils::getNow();
  if ( now <= GCGBasic::getInviteExpireTime(this) + 2 )
    return 0;
  else
    return 12110;
};

// Line 856: range 00000000150D6E5E-00000000150D6EF0
void __cdecl GCGBasic::clearInviteData(GCGBasic *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->invite_uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->invite_uid_, v1, &this->invite_uid_);
  }
  this->invite_uid_ = 0;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->invite_time_, (((_BYTE)this + 116) & 7u) + 3, v2);
  this->invite_time_ = 0;
};

// Line 862: range 00000000150D6EF2-00000000150D74F9
int32_t __cdecl GCGBasic::startInviteDuel(GCGBasic *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t v9; // eax
  Player *v10; // rax
  PlayerGCGComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  PlayerGCGComp *v14; // r14
  Player *v15; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t GCGDefaultPVPGameId; // eax
  int32_t result; // eax
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-120h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-110h] BYREF
  std::string val; // [rsp+50h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 retcode:895 64 12 10 option:892 96 16 13 world_ptr:878 128 16 21 target_player_ptr:885";
  *(_QWORD *)(v2 + 16) = GCGBasic::startInviteDuel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  if ( uid == Player::getUid(this->player_) )
  {
    v5 = 12113;
  }
  else
  {
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_DWORD *)(v2 + 72) = 0;
    *(_BYTE *)(v2 + 75) = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    *(_DWORD *)(v2 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v2 + 64));
    if ( *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_basic.cpp",
        "startInviteDuel",
        874);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v20,
             (const char (*)[26])"checkCanEnter fail. ret: ");
      v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)(v2 + 48));
      GCGEnterCheckOption::getDesc[abi:cxx11](&val, (GCGEnterCheckOption *const)(v2 + 64));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v20);
      v5 = *(_DWORD *)(v2 + 48);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 96));
      if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 96), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/gcg_basic.cpp",
          "startInviteDuel",
          882);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[28])"my player world is nullptr.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v5 = -1;
      }
      else
      {
        v9 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        World::findPlayerPtr((World *const)(v2 + 128), v9);
        if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 128), 0LL) )
        {
          v5 = 12108;
        }
        else
        {
          *(_QWORD *)(v2 + 64) = 0LL;
          *(_DWORD *)(v2 + 72) = 0;
          *(_BYTE *)(v2 + 70) = 1;
          *(_BYTE *)(v2 + 74) = 1;
          v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          v11 = Player::getGCGComp(v10);
          *(_DWORD *)(v2 + 48) = PlayerGCGComp::checkCanEnterGame(v11, (const GCGEnterCheckOption *)(v2 + 64));
          if ( *(_DWORD *)(v2 + 48) )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/card_game/gcg_basic.cpp",
              "startInviteDuel",
              898);
            v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    &v20,
                    (const char (*)[40])"target player checkCanEnter fail. ret: ");
            v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v2 + 48));
            GCGEnterCheckOption::getDesc[abi:cxx11](&val, (GCGEnterCheckOption *const)(v2 + 64));
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &val);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v20);
            v5 = *(_DWORD *)(v2 + 48);
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
              __asan_report_load8(this);
            v14 = Player::getGCGComp(this->player_);
            v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v19);
            v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
            GCGDefaultPVPGameId = ConstValueExcelConfigMgr::getGCGDefaultPVPGameId(&v16->design_config.txt_config_mgr.const_value_config_mgr);
            PlayerGCGComp::startMultiGame(v14, GCGDefaultPVPGameId, GCG_GAME_PVP, v15);
            std::shared_ptr<Config>::~shared_ptr(&v19);
            v5 = 0;
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 128));
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 96));
    }
  }
  result = v5;
  if ( v22 == (char *)v2 )
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

// Line 909: range 00000000150D74FA-00000000150D7596
uint32_t __cdecl GCGBasic::getInviteExpireTime(GCGBasic *const this)
{
  uint32_t invite_time; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t v3; // ebx
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->invite_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->invite_time_);
  }
  invite_time = this->invite_time_;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v3 = ConstValueExcelConfigMgr::getGCGInviteExporeTime(&v2->design_config.txt_config_mgr.const_value_config_mgr)
     + invite_time;
  std::shared_ptr<Config>::~shared_ptr(v5);
  return v3;
};

// Line 915: range 00000000150D7598-00000000150D762E
uint32_t __cdecl GCGBasic::transTargetRetcode(GCGBasic *const this, uint32_t retcode)
{
  if ( retcode == 12135 )
    return 12140;
  if ( retcode <= 0x2F67 )
  {
    if ( retcode == 12124 )
      return 12136;
    if ( retcode <= 0x2F5C )
    {
      if ( retcode == 12112 )
        return 12137;
      if ( retcode <= 0x2F50 )
      {
        switch ( retcode )
        {
          case 0x2F4Fu:
            return 12141;
          case 0xAAu:
            return 12139;
          case 0x22Bu:
            return 12138;
        }
      }
    }
  }
  return retcode;
};

// Line 937: range 00000000150D7630-00000000150D7AAF
void __cdecl GCGBasic::logAddExp(
        GCGBasic *const this,
        uint32_t add_exp,
        uint32_t before_exp,
        uint32_t before_level,
        proto::ActionReasonType reason)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  std::string v17; // [rsp+0h] [rbp-F0h]
  google::protobuf::uint32 reasona; // [rsp+8h] [rbp-E8h]
  uint32_t before_levela; // [rsp+Ch] [rbp-E4h]
  __int64 before_expa; // [rsp+10h] [rbp-E0h]
  GCGBasic *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v17._anon_0._M_allocated_capacity) = add_exp;
  *(_DWORD *)v17._anon_0._M_local_buf = before_exp;
  HIDWORD(v17._M_string_length) = before_level;
  LODWORD(v17._M_string_length) = reason;
  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 10 holder:938 64 16 11 log_ptr:939";
  *(_QWORD *)(v5 + 16) = GCGBasic::logAddExp;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xEB1u, v17);
  std::string::~string(&v24);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgAddExp>();
  if ( !std::operator==<proto_log::PlayerLogBodyGcgAddExp>(
          0LL,
          (const std::shared_ptr<proto_log::PlayerLogBodyGcgAddExp> *)(v5 + 64)) )
  {
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyGcgAddExp::set_add_exp(v9, HIDWORD(before_expa));
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyGcgAddExp::set_before_exp(v10, before_expa);
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->exp_);
    }
    proto_log::PlayerLogBodyGcgAddExp::set_after_exp(v11, thisa->exp_);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->level_);
    }
    proto_log::PlayerLogBodyGcgAddExp::set_is_level_up(v12, before_levela < thisa->level_);
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyGcgAddExp::set_before_level(v13, before_levela);
    v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&thisa->level_);
    }
    proto_log::PlayerLogBodyGcgAddExp::set_after_level(v14, thisa->level_);
    v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgAddExp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyGcgAddExp::set_reason(v15, reasona);
    if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
      __asan_report_load8(thisa);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgAddExp,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyGcgAddExp> *)(v5 + 64));
    Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  }
  std::shared_ptr<proto_log::PlayerLogBodyGcgAddExp>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgAddExp> *const)(v5 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  if ( v25 == (char *)v5 )
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

// Line 956: range 00000000150D7AB0-00000000150D7E14
void __cdecl GCGBasic::logChangeMatchScore(
        GCGBasic *const this,
        uint32_t match_id,
        uint32_t before_score,
        uint32_t after_score,
        uint32_t reason)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *player; // r14
  std::string v14; // [rsp+0h] [rbp-F0h]
  __int64 reasona; // [rsp+8h] [rbp-E8h]
  __int64 before_scorea; // [rsp+10h] [rbp-E0h]
  GCGBasic *thisa; // [rsp+18h] [rbp-D8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  std::string v20; // [rsp+40h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = match_id;
  *(_DWORD *)v14._anon_0._M_local_buf = before_score;
  HIDWORD(v14._M_string_length) = after_score;
  LODWORD(v14._M_string_length) = reason;
  v5 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 10 holder:962 64 16 11 log_ptr:963";
  *(_QWORD *)(v5 + 16) = GCGBasic::logChangeMatchScore;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( *(_DWORD *)v14._anon_0._M_local_buf != HIDWORD(v14._M_string_length) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v20, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xEB0u, v14);
    std::string::~string(&v20);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyGcgMatchScoreChange>();
    if ( !std::operator==<proto_log::PlayerLogBodyGcgMatchScoreChange>(
            0LL,
            (const std::shared_ptr<proto_log::PlayerLogBodyGcgMatchScoreChange> *)(v5 + 64)) )
    {
      v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      proto_log::PlayerLogBodyGcgMatchScoreChange::set_match_id(v9, HIDWORD(before_scorea));
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      proto_log::PlayerLogBodyGcgMatchScoreChange::set_before_score(v10, before_scorea);
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      proto_log::PlayerLogBodyGcgMatchScoreChange::set_after_score(v11, HIDWORD(reasona));
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyGcgMatchScoreChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      proto_log::PlayerLogBodyGcgMatchScoreChange::set_reason(v12, reasona);
      if ( *(_BYTE *)(((unsigned __int64)thisa >> 3) + 0x7FFF8000) )
        __asan_report_load8(thisa);
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyGcgMatchScoreChange,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyGcgMatchScoreChange> *)(v5 + 64));
      Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    }
    std::shared_ptr<proto_log::PlayerLogBodyGcgMatchScoreChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyGcgMatchScoreChange> *const)(v5 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  if ( v21 == (char *)v5 )
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
