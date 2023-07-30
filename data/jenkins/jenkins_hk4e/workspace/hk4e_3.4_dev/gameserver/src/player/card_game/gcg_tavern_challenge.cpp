// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/gcg_tavern_challenge.cpp

// Line 36: range 00000000175A96D2-00000000175A9824
int32_t __cdecl GCGTavernInfo::fromBin(GCGTavernInfo *const this, const proto::GCGTavernBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rdx
  bool is_last_duel_win; // cl
  char v12; // dl
  __int64 v13; // rdx
  const proto::GCGTavernBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::GCGTavernBin::character_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, bin, v4);
  this->character_id = v2;
  v5 = proto::GCGTavernBin::level_id(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->level_id, bin, v7);
  this->level_id = v5;
  v8 = proto::GCGTavernBin::point_id(bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->point_id, bin, v10);
  this->point_id = v8;
  is_last_duel_win = proto::GCGTavernBin::is_last_duel_win(bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->is_last_duel_win >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v12 != 0;
  v13 = (v12 != 0) & (unsigned __int8)((((unsigned __int8)this + 13) & 7) >= v12);
  if ( (_BYTE)v13 )
    __asan_report_store1(&this->is_last_duel_win, bin, v13);
  this->is_last_duel_win = is_last_duel_win;
  return 0;
};

// Line 45: range 00000000175A9826-00000000175A9978
int32_t __cdecl GCGTavernInfo::toBin(const GCGTavernInfo *const this, proto::GCGTavernBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::GCGTavernBin::set_character_id(bin, this->character_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_id);
  }
  proto::GCGTavernBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->point_id);
  }
  proto::GCGTavernBin::set_point_id(bin, this->point_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_last_duel_win >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 13) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_last_duel_win >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_last_duel_win);
  }
  proto::GCGTavernBin::set_is_last_duel_win(bin, this->is_last_duel_win);
  return 0;
};

// Line 54: range 00000000175A997A-00000000175A9CAD
std::string *__cdecl GCGTavernInfo::getDesc[abi:cxx11](std::string *retstr, const GCGTavernInfo *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  char v11[544]; // [rsp+10h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 5 ss:55";
  *(_QWORD *)(v2 + 16) = GCGTavernInfo::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 64, "[GCGTavernInfo] character_id: ");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  v6 = std::ostream::operator<<(v5, this->character_id);
  v7 = std::operator<<<std::char_traits<char>>(v6, " level_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_id);
  }
  v8 = std::ostream::operator<<(v7, this->level_id);
  v9 = std::operator<<<std::char_traits<char>>(v8, " point_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->point_id);
  }
  std::ostream::operator<<(v9, this->point_id);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 63: range 00000000175A9CAE-00000000175A9D2A
int32_t __cdecl GCGTavernChallengeData::fromBin(
        GCGTavernChallengeData *const this,
        const proto::GCGTCTavernChallengeBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  const google::protobuf::RepeatedField<unsigned int> *v4; // rax
  const proto::GCGTCTavernChallengeBin *bina; // [rsp+0h] [rbp-10h]

  bina = bin;
  v2 = proto::GCGTCTavernChallengeBin::character_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->character_id = v2;
  v4 = proto::GCGTCTavernChallengeBin::unlock_level_id_list(bina);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_level_id_set, v4);
  return 0;
};

// Line 70: range 00000000175A9D2C-00000000175A9DA7
int32_t __cdecl GCGTavernChallengeData::toBin(
        const GCGTavernChallengeData *const this,
        proto::GCGTCTavernChallengeBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGTCTavernChallengeBin::set_character_id(bin, this->character_id);
  v2 = proto::GCGTCTavernChallengeBin::mutable_unlock_level_id_list(bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_level_id_set, v2);
  return 0;
};

// Line 77: range 00000000175A9DA8-00000000175A9E23
int32_t __cdecl GCGTavernChallengeData::toClient(
        const GCGTavernChallengeData *const this,
        proto::GCGTCTavernChallengeData *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGTCTavernChallengeData::set_character_id(proto, this->character_id);
  v2 = proto::GCGTCTavernChallengeData::mutable_unlock_level_id_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->unlock_level_id_set, v2);
  return 0;
};

// Line 84: range 00000000175A9E24-00000000175A9F04
int32_t __cdecl GCGTavernChallenge::fromBin(GCGTavernChallenge *const this, const proto::GCGTavernBin *bin)
{
  GCGTavernChallengeData *v2; // rax
  std::map<unsigned int,GCGTavernChallengeData>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGTCTavernChallengeBin>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGTCTavernChallengeBin>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GCGTCTavernChallengeBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::GCGTCTavernChallengeBin *tavern_challenge_bin; // [rsp+38h] [rbp-18h]

  GCGTavernInfo::fromBin(&this->tavern_info_, bin);
  std::map<unsigned int,GCGTavernChallengeData>::clear(&this->tavern_challenge_map_);
  __for_range = proto::GCGTavernBin::tavern_challenge_bin_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGTCTavernChallengeBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGTCTavernChallengeBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGTCTavernChallengeBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    tavern_challenge_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGTCTavernChallengeBin const>::operator*(&__for_begin);
    __k = proto::GCGTCTavernChallengeBin::character_id(tavern_challenge_bin);
    v2 = std::map<unsigned int,GCGTavernChallengeData>::operator[](&this->tavern_challenge_map_, &__k);
    GCGTavernChallengeData::fromBin(v2, tavern_challenge_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGTCTavernChallengeBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 95: range 00000000175A9F06-00000000175A9FD2
int32_t __cdecl GCGTavernChallenge::toBin(const GCGTavernChallenge *const this, proto::GCGTavernBin *bin)
{
  proto::GCGTCTavernChallengeBin *v2; // rax
  std::map<unsigned int,GCGTavernChallengeData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,GCGTavernChallengeData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,GCGTavernChallengeData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,GCGTavernChallengeData> *v7; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,GCGTavernChallengeData> >::type *id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,GCGTavernChallengeData> >::type *data; // [rsp+38h] [rbp-8h]

  GCGTavernInfo::toBin(&this->tavern_info_, bin);
  __for_range = &this->tavern_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,GCGTavernChallengeData>::begin(&this->tavern_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGTavernChallengeData>::end(&this->tavern_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,GCGTavernChallengeData>(v7);
    data = (std::tuple_element<1,const std::pair<unsigned int const,GCGTavernChallengeData> >::type *)std::get<1ul,unsigned int const,GCGTavernChallengeData>(v7);
    v2 = proto::GCGTavernBin::add_tavern_challenge_bin_list(bin);
    GCGTavernChallengeData::toBin(data, v2);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 105: range 00000000175A9FD4-00000000175AA07F
void __cdecl GCGTavernChallenge::onLogin(GCGTavernChallenge *const this)
{
  GCGTavernChallenge::tryUnlockAllCharacter(this, 0);
  GCGTavernChallenge::tryUnlockAllLevel(this, 0);
  if ( GCGTavernChallenge::isCharacterInvited(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    if ( !Player::isRelogin(this->player_) && !GCGTavernChallenge::isInGame(this) )
      GCGTavernChallenge::onLoginNotInGame(this);
  }
};

// Line 120: range 00000000175AA080-00000000175AA2B2
void __cdecl GCGTavernChallenge::notifyAllData(GCGTavernChallenge *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::GCGTCTavernChallengeData *v4; // rax
  std::map<unsigned int,GCGTavernChallengeData>::iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::map<unsigned int,GCGTavernChallengeData>::iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,GCGTavernChallengeData> *__for_range; // [rsp+20h] [rbp-C0h]
  std::pair<unsigned int const,GCGTavernChallengeData> *__in; // [rsp+28h] [rbp-B8h]
  std::tuple_element<0,std::pair<unsigned int const,GCGTavernChallengeData> >::type *id; // [rsp+30h] [rbp-B0h]
  std::tuple_element<1,std::pair<unsigned int const,GCGTavernChallengeData> >::type *data; // [rsp+38h] [rbp-A8h]
  char v11[160]; // [rsp+40h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 10 notify:121";
  *(_QWORD *)(v1 + 16) = GCGTavernChallenge::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::GCGTCTavernChallengeDataNotify::GCGTCTavernChallengeDataNotify((proto::GCGTCTavernChallengeDataNotify *const)(v1 + 48));
  __for_range = &this->tavern_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,GCGTavernChallengeData>::begin(&this->tavern_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGTavernChallengeData>::end(&this->tavern_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,GCGTavernChallengeData>(__in);
    data = std::get<1ul,unsigned int const,GCGTavernChallengeData>(__in);
    v4 = proto::GCGTCTavernChallengeDataNotify::add_tavern_challenge_list((proto::GCGTCTavernChallengeDataNotify *const)(v1 + 48));
    GCGTavernChallengeData::toClient(data, v4);
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::GCGTCTavernChallengeDataNotify::~GCGTCTavernChallengeDataNotify((proto::GCGTCTavernChallengeDataNotify *const)(v1 + 48));
  if ( v11 == (char *)v1 )
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

// Line 130: range 00000000175AA2B4-00000000175AA55A
void __cdecl GCGTavernChallenge::onEnterScene(GCGTavernChallenge *const this, ScenePtr *p_scene_ptr, bool is_reenter)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t SceneId; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t Uid; // r14d
  PlayerGCGComp *GCGComp; // rax
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 20 owner_player_ptr:135";
  *(_QWORD *)(v3 + 16) = GCGTavernChallenge::onEnterScene;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !std::operator==<Scene>(p_scene_ptr, 0LL) )
  {
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
    Scene::getOwnPlayer((const Scene *const)(v3 + 32));
    if ( !std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_scene_ptr);
      SceneId = Scene::getSceneId(v6);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v13);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
      LOBYTE(SceneId) = SceneId == ConstValueExcelConfigMgr::getGCGTavernSceneId(&v8->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(&v13);
      if ( (_BYTE)SceneId )
      {
        v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        GCGTavernChallenge::onEnterTavern(this, v9);
      }
      if ( GCGTavernChallenge::isCharacterInvited(this) )
      {
        v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        Uid = Player::getUid(v10);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        if ( Uid == Player::getUid(this->player_) )
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          GCGComp = Player::getGCGComp(this->player_);
          if ( PlayerGCGComp::isInGCGDungeon(GCGComp) )
            GCGTavernChallenge::enterStateOwnerInDuel(this);
        }
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
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

// Line 159: range 00000000175AA55C-00000000175AA6D1
void __cdecl GCGTavernChallenge::onLeaveScene(GCGTavernChallenge *const this)
{
  uint32_t CurSceneId; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  PlayerDungeonComp *DungeonComp; // rax
  uint32_t dungeon_id; // [rsp+14h] [rbp-2Ch]
  PlayerSceneComp *scene_comp; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  scene_comp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(scene_comp) )
  {
    CurSceneId = PlayerSceneComp::getCurSceneId(scene_comp);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v7);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
    LOBYTE(CurSceneId) = CurSceneId != ConstValueExcelConfigMgr::getGCGTavernSceneId(&v2->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(v7);
    if ( !(_BYTE)CurSceneId && GCGTavernChallenge::isCharacterInvited(this) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v7);
      v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
      dungeon_id = ConstValueExcelConfigMgr::getGCGDungeonId(&v3->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr(v7);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      DungeonComp = Player::getDungeonComp(this->player_);
      if ( !PlayerDungeonComp::isDestSceneDungeon(DungeonComp, dungeon_id) )
        GCGTavernChallenge::onOwnerLeaveTavern(this);
    }
  }
};

// Line 184: range 00000000175AA6D2-00000000175AA6FC
void __cdecl GCGTavernChallenge::onLeaveGCGDungeon(GCGTavernChallenge *const this)
{
  if ( GCGTavernChallenge::isCharacterInvited(this) )
    GCGTavernChallenge::enterStateOwnerLeaveDuel(this);
};

// Line 192: range 00000000175AA6FE-00000000175AA708
void __cdecl GCGTavernChallenge::onResetGameInfo(GCGTavernChallenge *const this)
{
  ;
};

// Line 196: range 00000000175AA70A-00000000175AA7C9
void __cdecl GCGTavernChallenge::onQuestStart(GCGTavernChallenge *const this, uint32_t quest_id)
{
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+10h] [rbp-20h]
  const std::set<unsigned int> *character_set; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v5);
  character_set = GCGPlayingExcelConfigMgr::getCharacterByCondQuest(gcg_playing_config_mgr, quest_id);
  if ( GCGTavernChallenge::isCharacterInvited(this)
    && !GCGTavernChallenge::isInGame(this)
    && common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         character_set,
         &this->tavern_info_.character_id) )
  {
    GCGTavernChallenge::onCondQuestStart(this);
  }
};

// Line 210: range 00000000175AA7CA-00000000175AA8E2
void __cdecl GCGTavernChallenge::onQuestFinish(GCGTavernChallenge *const this, uint32_t quest_id)
{
  const unsigned int *v2; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-30h]
  const std::set<unsigned int> *character_set; // [rsp+28h] [rbp-28h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  const unsigned int *charater_id; // [rsp+38h] [rbp-18h]
  std::shared_ptr<Config> v9; // [rsp+40h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  character_set = GCGPlayingExcelConfigMgr::getQuestUnlockCharacter(gcg_playing_config_mgr, quest_id);
  __for_range = character_set;
  __for_begin._M_node = std::set<unsigned int>::begin(character_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(character_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    charater_id = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    GCGTavernChallenge::tryUnlockCharacter(this, *charater_id, 0, 1);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
};

// Line 220: range 00000000175AA8E4-00000000175AA992
void __cdecl GCGTavernChallenge::onGCGLevelSettleEvent(
        GCGTavernChallenge *const this,
        const GCGLevelSettleEvent *event)
{
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v3; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v3);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v3);
  if ( *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->level_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->level_id);
  }
  if ( GCGPlayingExcelConfigMgr::isTavernChallengeUnlockLevel(gcg_playing_config_mgr, event->level_id) )
    GCGTavernChallenge::tryUnlockAllLevel(this, 1);
};

// Line 229: range 00000000175AA994-00000000175AA9B3
void __cdecl GCGTavernChallenge::onGCGLevelUp(GCGTavernChallenge *const this)
{
  GCGTavernChallenge::tryUnlockAllLevel(this, 1);
};

// Line 234: range 00000000175AA9B4-00000000175AAC0F
void __cdecl GCGTavernChallenge::broadcastTavernInfo(GCGTavernChallenge *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  uint32_t SceneComp; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Scene *v6; // rax
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-E0h] BYREF
  char v8[208]; // [rsp+20h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 13 scene_ptr:238 80 48 10 notify:236";
  *(_QWORD *)(v1 + 16) = GCGTavernChallenge::broadcastTavernInfo;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  proto::GCGTCTavernInfoNotify::GCGTCTavernInfoNotify((proto::GCGTCTavernInfoNotify *const)(v1 + 80));
  GCGTavernChallenge::fillTavernInfo(this, (proto::GCGTCTavernInfoNotify *)(v1 + 80));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  SceneComp = (unsigned int)Player::getSceneComp(this->player_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  ConstValueExcelConfigMgr::getGCGTavernSceneId(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  PlayerSceneComp::findScene((const PlayerSceneComp *const)(v1 + 48), SceneComp);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v1 + 48), 0LL) )
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    Scene::notifyAllPlayer<proto::GCGTCTavernInfoNotify>(v6, (proto::GCGTCTavernInfoNotify *)(v1 + 80), 0);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 48));
  proto::GCGTCTavernInfoNotify::~GCGTCTavernInfoNotify((proto::GCGTCTavernInfoNotify *const)(v1 + 80));
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 246: range 00000000175AAC10-00000000175AAF55
void __cdecl GCGTavernChallenge::fillTavernInfo(GCGTavernChallenge *const this, proto::GCGTCTavernInfoNotify *notify)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerAvatarComp *AvatarComp; // rax
  PlayerAvatarComp *v6; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t AvatarId; // edx
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  google::protobuf::uint32 CurElementType; // edx
  __int64 default_avatar_guid; // [rsp+18h] [rbp-68h]
  char v12[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 22 default_avatar_ptr:248";
  *(_QWORD *)(v2 + 16) = GCGTavernChallenge::fillTavernInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  AvatarComp = Player::getAvatarComp(this->player_);
  default_avatar_guid = PlayerAvatarComp::getChooseAvatarGuid(AvatarComp);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v6 = Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v2 + 32), (uint64_t)v6, default_avatar_guid);
  if ( std::operator!=<FormalAvatar>((const std::shared_ptr<FormalAvatar> *)(v2 + 32), 0LL) )
  {
    v7 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    AvatarId = Avatar::getAvatarId(v7);
    proto::GCGTCTavernInfoNotify::set_avatar_id(notify, AvatarId);
    v9 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    CurElementType = Avatar::getCurElementType(v9);
    proto::GCGTCTavernInfoNotify::set_element_type(notify, CurElementType);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tavern_info_);
  }
  proto::GCGTCTavernInfoNotify::set_character_id(notify, this->tavern_info_.character_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->tavern_info_.level_id);
  }
  proto::GCGTCTavernInfoNotify::set_level_id(notify, this->tavern_info_.level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tavern_info_.point_id);
  }
  proto::GCGTCTavernInfoNotify::set_point_id(notify, this->tavern_info_.point_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->tavern_info_.is_owner_in_duel);
  }
  proto::GCGTCTavernInfoNotify::set_is_owner_in_duel(notify, this->tavern_info_.is_owner_in_duel);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_last_duel_win >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 21) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_last_duel_win >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->tavern_info_.is_last_duel_win);
  }
  proto::GCGTCTavernInfoNotify::set_is_last_duel_win(notify, this->tavern_info_.is_last_duel_win);
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 264: range 00000000175AAF56-00000000175AB0C0
void __cdecl GCGTavernChallenge::notifyTavernChallengeData(
        const GCGTavernChallenge *const this,
        const GCGTavernChallengeData *data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::GCGTCTavernChallengeData *v5; // rdx
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:265";
  *(_QWORD *)(v2 + 16) = GCGTavernChallenge::notifyTavernChallengeData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::GCGTCTavernChallengeUpdateNotify::GCGTCTavernChallengeUpdateNotify((proto::GCGTCTavernChallengeUpdateNotify *const)(v2 + 32));
  v5 = proto::GCGTCTavernChallengeUpdateNotify::mutable_tavern_challenge((proto::GCGTCTavernChallengeUpdateNotify *const)(v2 + 32));
  GCGTavernChallengeData::toClient(data, v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::GCGTCTavernChallengeUpdateNotify::~GCGTCTavernChallengeUpdateNotify((proto::GCGTCTavernChallengeUpdateNotify *const)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 271: range 00000000175AB0C2-00000000175AB891
__int64 __fastcall GCGTavernChallenge::invite(GCGTavernChallenge *const this, uint32_t character_id, uint32_t level_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  __int64 result; // rax
  PlayerBasicComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+10h] [rbp-110h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 7 ret:295 64 4 16 character_id:270 80 4 12 level_id:270 96 12 10 option:307";
  *(_QWORD *)(v3 + 16) = GCGTavernChallenge::invite;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202177536;
  *(_DWORD *)(v3 + 64) = character_id;
  *(_DWORD *)(v3 + 80) = level_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCEDu) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "invite",
      275);
    v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v22,
           (const char (*)[51])"OPEN_STATE_GCG_TAVERN_SCENE_BUILDER not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
LABEL_9:
    *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 141LL;
    goto LABEL_29;
  }
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v9 = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(v9, 0xCE5u) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "invite",
      280);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v22,
           (const char (*)[37])"OPEN_STATE_GCG_INVITE not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    goto LABEL_9;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( data::GCGPlayingExcelConfigMgrBase::findGCGCharacterLevelExcelConfig(
         gcg_playing_config_mgr,
         *(_DWORD *)(v3 + 64)) )
  {
    if ( !GCGTavernChallenge::isCharacterCondQuestAllValid(this, *(_DWORD *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/gcg_tavern_challenge.cpp",
        "invite",
        292);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        &v22,
        (const char (*)[29])"some cond quest unfinished. ");
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 12260LL;
    }
    else
    {
      *(_DWORD *)(v3 + 48) = GCGTavernChallenge::tryUnlockCharacter(this, *(_DWORD *)(v3 + 64), 1, 1);
      if ( *(_DWORD *)(v3 + 48) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_tavern_challenge.cpp",
          "invite",
          298);
        v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v22,
                (const char (*)[38])"unlock character fail. character_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = *(unsigned int *)(v3 + 48);
      }
      else if ( !GCGTavernChallenge::isLevelUnlock(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_tavern_challenge.cpp",
          "invite",
          303);
        v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v22,
                (const char (*)[25])"level locked. level_id: ");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v3 + 80));
        v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v13,
                (const char (*)[16])" character_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 12257LL;
      }
      else
      {
        *(_QWORD *)(v3 + 96) = 0LL;
        *(_DWORD *)(v3 + 104) = 0;
        *(_DWORD *)(v3 + 96) = *(_DWORD *)(v3 + 80);
        *(_BYTE *)(v3 + 103) = 1;
        *(_BYTE *)(v3 + 100) = 1;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        GCGComp = Player::getGCGComp(this->player_);
        *(_DWORD *)(v3 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v3 + 96));
        if ( *(_DWORD *)(v3 + 48) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_tavern_challenge.cpp",
            "invite",
            314);
          v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v21,
                  (const char (*)[30])"checkCanEnterGame fail. ret: ");
          v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v3 + 48));
          GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v22, (GCGEnterCheckOption *const)(v3 + 96));
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)&v22);
          std::string::~string(&v22);
          common::milog::MiLogStream::~MiLogStream(&v21);
          result = *(unsigned int *)(v3 + 48);
        }
        else
        {
          GCGTavernChallenge::onInvite(this, *(_DWORD *)(v3 + 64), *(_DWORD *)(v3 + 80));
          result = 0LL;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "invite",
      287);
    v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            &v22,
            (const char (*)[44])"findGCGCharacterLevelExcelConfig fail. id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 5LL;
  }
LABEL_29:
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

// Line 322: range 00000000175AB892-00000000175ABF21
__int64 __fastcall GCGTavernChallenge::startLevel(
        GCGTavernChallenge *const this,
        uint32_t config_id,
        uint32_t level_id,
        char is_restart)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  PlayerGCGComp *v15; // rbx
  std::vector<unsigned int> param_vec; // [rsp+20h] [rbp-110h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+80h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 7 ret:337 64 4 13 config_id:321 80 4 12 level_id:321 96 12 10 option:333";
  *(_QWORD *)(v4 + 16) = GCGTavernChallenge::startLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -202177536;
  *(_DWORD *)(v4 + 64) = config_id;
  *(_DWORD *)(v4 + 80) = level_id;
  if ( !GCGTavernChallenge::isCharacterInvited(this) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "startLevel",
      325);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v20, (const char (*)[19])"must invite first.");
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 12258LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->tavern_info_);
    }
    if ( this->tavern_info_.character_id != *(_DWORD *)(v4 + 64) )
      goto LABEL_12;
    if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->tavern_info_.level_id);
    }
    if ( this->tavern_info_.level_id == *(_DWORD *)(v4 + 80) )
    {
      *(_QWORD *)(v4 + 96) = 0LL;
      *(_DWORD *)(v4 + 104) = 0;
      *(_DWORD *)(v4 + 96) = *(_DWORD *)(v4 + 80);
      *(_BYTE *)(v4 + 103) = 1;
      *(_BYTE *)(v4 + 104) = is_restart;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      GCGComp = Player::getGCGComp(this->player_);
      *(_DWORD *)(v4 + 48) = PlayerGCGComp::checkCanEnterGame(GCGComp, (const GCGEnterCheckOption *)(v4 + 96));
      if ( *(_DWORD *)(v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_tavern_challenge.cpp",
          "startLevel",
          340);
        v13 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v19,
                (const char (*)[30])"checkCanEnterGame fail. ret: ");
        v14 = common::milog::MiLogStream::operator<<<int,(int *)0>(v13, (const int *)(v4 + 48));
        GCGEnterCheckOption::getDesc[abi:cxx11]((std::string *)&v20, (GCGEnterCheckOption *const)(v4 + 96));
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v20);
        std::string::~string(&v20);
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = *(unsigned int *)(v4 + 48);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->tavern_info_);
        }
        if ( !GCGTavernChallenge::isCharacterCondQuestAllValid(this, this->tavern_info_.character_id) )
        {
          GCGTavernChallenge::clearTavernInfo(this);
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/gcg_tavern_challenge.cpp",
            "startLevel",
            346);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v20,
            (const char (*)[29])"some cond quest unfinished. ");
          common::milog::MiLogStream::~MiLogStream(&v20);
          result = 12260LL;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
            __asan_report_load8(this);
          v15 = Player::getGCGComp(this->player_);
          memset(&param_vec, 0, sizeof(param_vec));
          std::vector<unsigned int>::vector(&param_vec);
          if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->tavern_info_.level_id);
          }
          PlayerGCGComp::startSingleGame(v15, this->tavern_info_.level_id, GCG_GAME_TAVERN_CHALLENGE, &param_vec);
          std::vector<unsigned int>::~vector(&param_vec);
          result = 0LL;
        }
      }
    }
    else
    {
LABEL_12:
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_challenge.cpp",
        "startLevel",
        330);
      v8 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v19,
             (const char (*)[35])"tavern info not match. config_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 64));
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" level_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 80));
      GCGTavernInfo::getDesc[abi:cxx11]((std::string *)&v20, &this->tavern_info_);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, (const std::string *)&v20);
      std::string::~string(&v20);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 12258LL;
    }
  }
  if ( v21 == (char *)v4 )
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

// Line 354: range 00000000175ABF22-00000000175ABF57
void __cdecl GCGTavernChallenge::settle(GCGTavernChallenge *const this, bool is_win)
{
  if ( GCGTavernChallenge::isCharacterInvited(this) )
    GCGTavernChallenge::onSettle(this, is_win);
};

// Line 363: range 00000000175ABF58-00000000175AC5C3
__int64 __fastcall GCGTavernChallenge::tryUnlockCharacter(
        GCGTavernChallenge *const this,
        uint32_t character_id,
        bool is_cost,
        bool is_notify)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> >::pointer v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerQuestComp *QuestComp; // rcx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  uint32_t v14; // ecx
  char v15; // al
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-110h]
  const data::GCGCharacterLevelExcelConfig *config_ptr; // [rsp+28h] [rbp-108h]
  PlayerItemComp *item_comp; // [rsp+30h] [rbp-100h]
  GCGTavernChallengeData *challenge_data; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 16 character_id:362 64 8 8 iter:364 96 8 10 reason:394 128 16 14 item_param:389";
  *(_QWORD *)(v4 + 16) = GCGTavernChallenge::tryUnlockCharacter;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = character_id;
  *(std::map<unsigned int,GCGTavernChallengeData>::iterator *)(v4 + 64) = std::map<unsigned int,GCGTavernChallengeData>::find(
                                                                            &this->tavern_challenge_map_,
                                                                            (const std::map<unsigned int,GCGTavernChallengeData>::key_type *)(v4 + 48));
  *(std::map<unsigned int,GCGTavernChallengeData>::iterator *)(v4 + 96) = std::map<unsigned int,GCGTavernChallengeData>::end(&this->tavern_challenge_map_);
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> >::_Self *)(v4 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> >::_Self *)(v4 + 96)) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> > *const)(v4 + 64));
    GCGTavernChallenge::tryUnlockLevel(this, &v7->second, is_notify);
    result = 0LL;
    goto LABEL_38;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 128));
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128))->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 128));
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGCharacterLevelExcelConfig(
                 gcg_playing_config_mgr,
                 *(_DWORD *)(v4 + 48));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "tryUnlockCharacter",
      375);
    v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v22,
           (const char (*)[44])"findGCGCharacterLevelExcelConfig fail. id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 5LL;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->pre_quest_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->pre_quest_id);
  }
  if ( !config_ptr->pre_quest_id )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  QuestComp = Player::getQuestComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->pre_quest_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->pre_quest_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->pre_quest_id);
  }
  if ( PlayerQuestComp::getQuestState(QuestComp, config_ptr->pre_quest_id) == QUEST_STATE_FINISHED )
LABEL_17:
    v11 = 0;
  else
    v11 = 1;
  if ( v11 )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "tryUnlockCharacter",
      381);
    v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v22,
            (const char (*)[29])"quest not finish. quest_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &config_ptr->pre_quest_id);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 12256LL;
    goto LABEL_38;
  }
  if ( *(char *)(((unsigned __int64)&config_ptr->is_need_unlock >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&config_ptr->is_need_unlock);
  if ( config_ptr->is_need_unlock && is_cost )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    item_comp = Player::getItemComp(this->player_);
    *(_QWORD *)(v4 + 128) = 0LL;
    *(_QWORD *)(v4 + 136) = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->cost_item_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->cost_item_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->cost_item_id);
    }
    *(_DWORD *)(v4 + 128) = config_ptr->cost_item_id;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->cost_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->cost_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->cost_count);
    }
    *(_DWORD *)(v4 + 132) = config_ptr->cost_count;
    if ( PlayerItemComp::checkSubItem(item_comp, (const ItemParam *)(v4 + 128)) )
    {
      result = 609LL;
      goto LABEL_38;
    }
    SubItemReason::SubItemReason((SubItemReason *const)(v4 + 96), ACTION_REASON_GCG_TAVERN_CHALLENGE_UNLOCK_CHARACTER);
    PlayerItemComp::subItem(item_comp, (const ItemParam *)(v4 + 128), (const SubItemReason *)(v4 + 96));
  }
  v13 = (char *)(v4 + 48);
  challenge_data = std::map<unsigned int,GCGTavernChallengeData>::operator[](
                     &this->tavern_challenge_map_,
                     (const std::map<unsigned int,GCGTavernChallengeData>::key_type *)(v4 + 48));
  v14 = *(_DWORD *)(v4 + 48);
  v15 = *(_BYTE *)(((unsigned __int64)challenge_data >> 3) + 0x7FFF8000);
  if ( v15 != 0 && v15 <= 3 )
  {
    LOBYTE(v13) = v15 != 0;
    __asan_report_store4(challenge_data, v13, challenge_data);
  }
  challenge_data->character_id = v14;
  GCGTavernChallenge::tryUnlockLevel(this, challenge_data, 0);
  if ( is_notify )
    GCGTavernChallenge::notifyTavernChallengeData(this, challenge_data);
  result = 0LL;
LABEL_38:
  if ( v23 == (char *)v4 )
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

// Line 410: range 00000000175AC5C4-00000000175AC78B
void __cdecl GCGTavernChallenge::tryUnlockAllCharacter(GCGTavernChallenge *const this, bool is_notify)
{
  bool v2; // cl
  std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-40h]
  PlayerQuestComp *quest_comp; // [rsp+28h] [rbp-38h]
  const std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> *v8; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> >::type *id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> >::type *config; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v11; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  quest_comp = Player::getQuestComp(this->player_);
  __for_range = &gcg_playing_config_mgr->gcg_character_level_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::begin(&gcg_playing_config_mgr->gcg_character_level_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::GCGCharacterLevelExcelConfig>::end(&gcg_playing_config_mgr->gcg_character_level_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::GCGCharacterLevelExcelConfig>(v8);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig> >::type *)std::get<1ul,unsigned int const,data::GCGCharacterLevelExcelConfig>(v8);
    if ( *(char *)(((unsigned __int64)&config->is_need_unlock >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->is_need_unlock);
    if ( !config->is_need_unlock
      && !std::map<unsigned int,GCGTavernChallengeData>::count(&this->tavern_challenge_map_, id) )
    {
      v2 = is_notify;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(id);
      }
      GCGTavernChallenge::tryUnlockCharacter(this, *id, 0, v2);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::GCGCharacterLevelExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 430: range 00000000175AC78C-00000000175AC837
void __cdecl GCGTavernChallenge::tryUnlockAllLevel(GCGTavernChallenge *const this, bool is_notify)
{
  std::map<unsigned int,GCGTavernChallengeData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,GCGTavernChallengeData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,GCGTavernChallengeData> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,GCGTavernChallengeData> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,GCGTavernChallengeData> >::type *id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,GCGTavernChallengeData> >::type *data; // [rsp+38h] [rbp-8h]

  __for_range = &this->tavern_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,GCGTavernChallengeData>::begin(&this->tavern_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGTavernChallengeData>::end(&this->tavern_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,GCGTavernChallengeData>(__in);
    data = std::get<1ul,unsigned int const,GCGTavernChallengeData>(__in);
    GCGTavernChallenge::tryUnlockLevel(this, data, is_notify);
    std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator++(&__for_begin);
  }
};

// Line 438: range 00000000175AC838-00000000175ACC4C
void __cdecl GCGTavernChallenge::tryUnlockLevel(
        GCGTavernChallenge *const this,
        GCGTavernChallengeData *data,
        bool is_notify)
{
  const GCGPlayingExcelConfigMgr *v3; // rdx
  common::milog::MiLogStream *v4; // rdx
  PlayerGCGComp *GCGComp; // rax
  uint32_t *p_gcg_level; // rax
  PlayerGCGComp *v7; // rax
  GCGLevelChallenge *LevelChallenge; // rcx
  PlayerGCGComp *v9; // rax
  GCGLevelChallenge *v10; // rcx
  bool is_need_notify; // [rsp+2Bh] [rbp-75h]
  uint32_t gcg_level; // [rsp+2Ch] [rbp-74h]
  std::vector<data::GCGCharacterDynamicLevel>::const_iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  std::vector<data::GCGCharacterDynamicLevel>::const_iterator __for_end; // [rsp+38h] [rbp-68h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+40h] [rbp-60h]
  const data::GCGCharacterLevelExcelConfig *config_ptr; // [rsp+48h] [rbp-58h]
  const std::vector<data::GCGCharacterDynamicLevel> *__for_range; // [rsp+50h] [rbp-50h]
  const data::GCGCharacterDynamicLevel *normal_level; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+70h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v20);
  v3 = gcg_playing_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(data);
  }
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGCharacterLevelExcelConfig(v3, data->character_id);
  if ( config_ptr )
  {
    is_need_notify = 0;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    gcg_level = PlayerGCGComp::getLevel(GCGComp);
    __for_range = &config_ptr->normal_level_list;
    __for_begin._M_current = std::vector<data::GCGCharacterDynamicLevel>::begin(&config_ptr->normal_level_list)._M_current;
    __for_end._M_current = std::vector<data::GCGCharacterDynamicLevel>::end(&config_ptr->normal_level_list)._M_current;
    while ( __gnu_cxx::operator!=<data::GCGCharacterDynamicLevel const*,std::vector<data::GCGCharacterDynamicLevel>>(
              &__for_begin,
              &__for_end) )
    {
      normal_level = __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel const*,std::vector<data::GCGCharacterDynamicLevel>>::operator*(&__for_begin);
      p_gcg_level = &normal_level->gcg_level;
      if ( *(_BYTE *)(((unsigned __int64)p_gcg_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gcg_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gcg_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_gcg_level);
      }
      if ( gcg_level >= normal_level->gcg_level
        && !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              &data->unlock_level_id_set,
              &normal_level->level_id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v7 = Player::getGCGComp(this->player_);
        LevelChallenge = PlayerGCGComp::getLevelChallenge(v7);
        if ( *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&normal_level->level_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&normal_level->level_id);
        }
        if ( (unsigned __int8)GCGLevelChallenge::isLevelCanStart(LevelChallenge, normal_level->level_id) )
        {
          std::set<unsigned int>::insert(&data->unlock_level_id_set, &normal_level->level_id);
          is_need_notify = 1;
        }
      }
      __gnu_cxx::__normal_iterator<data::GCGCharacterDynamicLevel const*,std::vector<data::GCGCharacterDynamicLevel>>::operator++(&__for_begin);
    }
    if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &data->unlock_level_id_set,
            &config_ptr->hard_level_id) )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = Player::getGCGComp(this->player_);
      v10 = PlayerGCGComp::getLevelChallenge(v9);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->hard_level_id);
      }
      if ( (unsigned __int8)GCGLevelChallenge::isLevelCanStart(v10, config_ptr->hard_level_id) )
      {
        std::set<unsigned int>::insert(&data->unlock_level_id_set, &config_ptr->hard_level_id);
        is_need_notify = 1;
      }
    }
    if ( is_notify && is_need_notify )
      GCGTavernChallenge::notifyTavernChallengeData(this, data);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "tryUnlockLevel",
      443);
    v4 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v21,
           (const char (*)[44])"findGCGCharacterLevelExcelConfig fail. id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &data->character_id);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
};

// Line 477: range 00000000175ACC4E-00000000175ACDC0
bool __fastcall GCGTavernChallenge::isLevelUnlock(
        GCGTavernChallenge *const this,
        uint32_t character_id,
        uint32_t level_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> >::pointer v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 16 character_id:476 48 4 12 level_id:476 64 8 8 iter:478";
  *(_QWORD *)(v3 + 16) = GCGTavernChallenge::isLevelUnlock;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = character_id;
  *(_DWORD *)(v3 + 48) = level_id;
  *(std::map<unsigned int,GCGTavernChallengeData>::iterator *)(v3 + 64) = std::map<unsigned int,GCGTavernChallengeData>::find(
                                                                            &this->tavern_challenge_map_,
                                                                            (const std::map<unsigned int,GCGTavernChallengeData>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,GCGTavernChallengeData>::end(&this->tavern_challenge_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GCGTavernChallengeData> > *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               &v7->second.unlock_level_id_set,
               (const unsigned int *)(v3 + 48));
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

// Line 487: range 00000000175ACDC2-00000000175AD163
__int64 __fastcall GCGTavernChallenge::isCharacterCondQuestAllValid(
        GCGTavernChallenge *const this,
        uint32_t character_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-D8h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+20h] [rbp-D0h]
  const data::GCGCharacterLevelExcelConfig *config_ptr; // [rsp+28h] [rbp-C8h]
  PlayerQuestComp *quest_comp; // [rsp+30h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+70h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 quest_id:496 64 4 16 character_id:486";
  *(_QWORD *)(v2 + 16) = GCGTavernChallenge::isCharacterCondQuestAllValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = character_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGCharacterLevelExcelConfig(
                 gcg_playing_config_mgr,
                 *(_DWORD *)(v2 + 64));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    quest_comp = Player::getQuestComp(this->player_);
    __for_range = &config_ptr->cond_quest_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->cond_quest_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->cond_quest_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      *(_DWORD *)(v2 + 48) = *v8;
      if ( PlayerQuestComp::getQuestState(quest_comp, *(_DWORD *)(v2 + 48)) == QUEST_STATE_UNFINISHED )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/gcg_tavern_challenge.cpp",
          "isCharacterCondQuestAllValid",
          500);
        v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v17,
               (const char (*)[29])"quest unfinished. quest_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        result = 0LL;
        goto LABEL_16;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 1LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "isCharacterCondQuestAllValid",
      492);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v17,
           (const char (*)[54])"findGCGCharacterLevelExcelConfig fail. character_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0LL;
  }
LABEL_16:
  if ( v18 == (char *)v2 )
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

// Line 508: range 00000000175AD164-00000000175AD206
bool __cdecl GCGTavernChallenge::isInGame(GCGTavernChallenge *const this)
{
  GCGGameBriefInfo *GameInfo; // rax
  PlayerGCGComp *gcg_comp; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  gcg_comp = Player::getGCGComp(this->player_);
  if ( !PlayerGCGComp::isInGame(gcg_comp) )
    return 0;
  GameInfo = PlayerGCGComp::getGameInfo(gcg_comp);
  if ( *(_BYTE *)(((unsigned __int64)&GameInfo->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&GameInfo->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    GameInfo = (GCGGameBriefInfo *)__asan_report_load4(&GameInfo->business_type);
  }
  return GameInfo->business_type == GCG_GAME_TAVERN_CHALLENGE;
};

// Line 520: range 00000000175AD208-00000000175AD230
void __cdecl GCGTavernChallenge::onInvite(GCGTavernChallenge *const this, uint32_t character_id, uint32_t level_id)
{
  GCGTavernChallenge::enterStateCharacterSit(this, character_id, level_id);
};

// Line 525: range 00000000175AD232-00000000175AD294
void __cdecl GCGTavernChallenge::onOwnerLeaveTavern(GCGTavernChallenge *const this)
{
  PlayerGCGComp *GCGComp; // rax

  GCGTavernChallenge::clearTavernInfo(this);
  if ( GCGTavernChallenge::isInGame(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    PlayerGCGComp::tryGiveUpGame(GCGComp);
  }
};

// Line 536: range 00000000175AD296-00000000175AD426
void __cdecl GCGTavernChallenge::onEnterTavern(GCGTavernChallenge *const this, Player *owner)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerGCGComp *GCGComp; // rax
  GCGTavernChallenge *TavernChallenge; // rax
  char v7[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:537";
  *(_QWORD *)(v2 + 16) = GCGTavernChallenge::onEnterTavern;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::GCGTCTavernInfoNotify::GCGTCTavernInfoNotify((proto::GCGTCTavernInfoNotify *const)(v2 + 48));
  GCGComp = Player::getGCGComp(owner);
  TavernChallenge = PlayerGCGComp::getTavernChallenge(GCGComp);
  GCGTavernChallenge::fillTavernInfo(TavernChallenge, (proto::GCGTCTavernInfoNotify *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 48));
  proto::GCGTCTavernInfoNotify::~GCGTCTavernInfoNotify((proto::GCGTCTavernInfoNotify *const)(v2 + 48));
  if ( v7 == (char *)v2 )
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
};

// Line 543: range 00000000175AD428-00000000175AD48A
void __cdecl GCGTavernChallenge::onGiveUp(GCGTavernChallenge *const this)
{
  PlayerGCGComp *GCGComp; // rax

  GCGTavernChallenge::clearTavernInfo(this);
  if ( GCGTavernChallenge::isInGame(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    PlayerGCGComp::tryGiveUpGame(GCGComp);
  }
};

// Line 554: range 00000000175AD48C-00000000175AD529
bool __cdecl GCGTavernChallenge::isCharacterInvited(GCGTavernChallenge *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tavern_info_);
  }
  if ( !this->tavern_info_.character_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->tavern_info_.level_id);
  }
  return this->tavern_info_.level_id != 0;
};

// Line 559: range 00000000175AD52A-00000000175AD79A
void __cdecl GCGTavernChallenge::clearTavernInfo(GCGTavernChallenge *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v9; // rbx
  GCGTavernSceneBuilder *tavern_scene_builder; // [rsp+18h] [rbp-58h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( GCGTavernChallenge::isCharacterInvited(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->tavern_info_, v1, &this->tavern_info_);
    }
    this->tavern_info_.character_id = 0;
    v2 = (((_BYTE)this + 12) & 7u) + 3;
    v3 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
      __asan_report_store4(&this->tavern_info_.level_id, v2, v3);
    this->tavern_info_.level_id = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->tavern_info_.point_id, v2, &this->tavern_info_.point_id);
    }
    this->tavern_info_.point_id = 0;
    v4 = ((_BYTE)this + 20) & 7;
    v5 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000));
    if ( (_BYTE)v5 )
      __asan_report_store1(&this->tavern_info_.is_owner_in_duel, v4, v5);
    this->tavern_info_.is_owner_in_duel = 0;
    v6 = ((_BYTE)this + 21) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_last_duel_win >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_last_duel_win >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->tavern_info_.is_last_duel_win, v6, v7);
    this->tavern_info_.is_last_duel_win = 0;
    GCGTavernChallenge::broadcastTavernInfo(this);
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    tavern_scene_builder = PlayerGCGComp::getTavernSceneBuilder(GCGComp);
    GCGTavernSceneBuilder::broadNpcInfo(tavern_scene_builder);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "clearTavernInfo",
      572);
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v11, (const char (*)[19])"TavenInfo change. ");
    GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 576: range 00000000175AD79C-00000000175AD9C3
// local variable allocation has failed, the output may be wrong!
void __cdecl GCGTavernChallenge::enterStateCharacterSit(
        GCGTavernChallenge *const this,
        uint32_t character_id,
        uint32_t level_id)
{
  PlayerGCGComp *GCGComp; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 CharacterNpcSitPoint; // rdx
  char v7; // al
  __int64 v8; // rsi
  __int64 v9; // rdx
  common::milog::MiLogStream *v10; // rbx
  GCGTavernSceneBuilder *tavern_scene_builder; // [rsp+18h] [rbp-58h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  tavern_scene_builder = PlayerGCGComp::getTavernSceneBuilder(GCGComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->tavern_info_, *(_QWORD *)&character_id, &this->tavern_info_);
  }
  this->tavern_info_.character_id = character_id;
  v4 = (((_BYTE)this + 12) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->tavern_info_.level_id, v4, v5);
  this->tavern_info_.level_id = level_id;
  CharacterNpcSitPoint = GCGTavernSceneBuilder::getCharacterNpcSitPoint(tavern_scene_builder);
  v7 = *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(v4) = v7 != 0;
    __asan_report_store4(&this->tavern_info_.point_id, v4, CharacterNpcSitPoint);
  }
  this->tavern_info_.point_id = CharacterNpcSitPoint;
  v8 = ((_BYTE)this + 20) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_store1(&this->tavern_info_.is_owner_in_duel, v8, v9);
  this->tavern_info_.is_owner_in_duel = 0;
  GCGTavernChallenge::broadcastTavernInfo(this);
  GCGTavernSceneBuilder::broadNpcInfo(tavern_scene_builder);
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/gcg_tavern_challenge.cpp",
    "enterStateCharacterSit",
    584);
  v10 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v13, (const char (*)[19])"TavenInfo change. ");
  GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v13);
};

// Line 588: range 00000000175AD9C4-00000000175ADC34
void __cdecl GCGTavernChallenge::enterStateCharacterStand(GCGTavernChallenge *const this, bool is_win)
{
  common::milog::MiLogStream *v2; // rbx
  PlayerGCGComp *GCGComp; // rax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 CharacterNpcStandPoint; // rdx
  char v7; // al
  common::milog::MiLogStream *v8; // rbx
  GCGTavernSceneBuilder *tavern_scene_builder; // [rsp+18h] [rbp-58h]
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  if ( !GCGTavernChallenge::isCharacterInvited(this) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "enterStateCharacterStand",
      591);
    v2 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v11,
           (const char (*)[24])"character not invited. ");
    GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    GCGComp = Player::getGCGComp(this->player_);
    tavern_scene_builder = PlayerGCGComp::getTavernSceneBuilder(GCGComp);
    v4 = ((_BYTE)this + 21) & 7;
    v5 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_last_duel_win >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v4 >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_last_duel_win >> 3) + 0x7FFF8000));
    if ( (_BYTE)v5 )
      __asan_report_store1(&this->tavern_info_.is_last_duel_win, v4, v5);
    this->tavern_info_.is_last_duel_win = is_win;
    CharacterNpcStandPoint = GCGTavernSceneBuilder::getCharacterNpcStandPoint(tavern_scene_builder);
    v7 = *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(v4) = v7 != 0;
      __asan_report_store4(&this->tavern_info_.point_id, v4, CharacterNpcStandPoint);
    }
    this->tavern_info_.point_id = CharacterNpcStandPoint;
    GCGTavernChallenge::broadcastTavernInfo(this);
    GCGTavernSceneBuilder::broadNpcInfo(tavern_scene_builder);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "enterStateCharacterStand",
      599);
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v11, (const char (*)[19])"TavenInfo change. ");
    GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 603: range 00000000175ADC36-00000000175ADE0D
void __cdecl GCGTavernChallenge::enterStateOwnerInDuel(GCGTavernChallenge *const this)
{
  common::milog::MiLogStream *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( !GCGTavernChallenge::isCharacterInvited(this) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "enterStateOwnerInDuel",
      606);
    v1 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v5,
           (const char (*)[24])"character not invited. ");
    GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v2 = ((_BYTE)this + 20) & 7;
    v3 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
      __asan_report_store1(&this->tavern_info_.is_owner_in_duel, v2, v3);
    this->tavern_info_.is_owner_in_duel = 1;
    GCGTavernChallenge::broadcastTavernInfo(this);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "enterStateOwnerInDuel",
      611);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"TavenInfo change. ");
    GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 615: range 00000000175ADE0E-00000000175ADFE5
void __cdecl GCGTavernChallenge::enterStateOwnerLeaveDuel(GCGTavernChallenge *const this)
{
  common::milog::MiLogStream *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdx
  common::milog::MiLogStream *v4; // rbx
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( !GCGTavernChallenge::isCharacterInvited(this) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "enterStateOwnerLeaveDuel",
      618);
    v1 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v5,
           (const char (*)[24])"character not invited. ");
    GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
  else
  {
    v2 = ((_BYTE)this + 20) & 7;
    v3 = (*(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.is_owner_in_duel >> 3) + 0x7FFF8000));
    if ( (_BYTE)v3 )
      __asan_report_store1(&this->tavern_info_.is_owner_in_duel, v2, v3);
    this->tavern_info_.is_owner_in_duel = 0;
    GCGTavernChallenge::broadcastTavernInfo(this);
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "enterStateOwnerLeaveDuel",
      623);
    v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v5, (const char (*)[19])"TavenInfo change. ");
    GCGTavernInfo::getDesc[abi:cxx11](&val, &this->tavern_info_);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 628: range 00000000175ADFE6-00000000175AE0E8
void __cdecl GCGTavernChallenge::fillNpcInfo(
        const GCGTavernChallenge *const this,
        proto::GCGTavernNpcInfoNotify *notify)
{
  proto::GCGTavernNpcInfo *npc_info; // [rsp+18h] [rbp-8h]

  npc_info = proto::GCGTavernNpcInfoNotify::mutable_character_npc(notify);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tavern_info_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tavern_info_);
  }
  proto::GCGTavernNpcInfo::set_id(npc_info, this->tavern_info_.character_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->tavern_info_.point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->tavern_info_.point_id);
  }
  proto::GCGTavernNpcInfo::set_scene_point_id(npc_info, this->tavern_info_.point_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tavern_info_.level_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->tavern_info_.level_id);
  }
  proto::GCGTavernNpcInfo::set_level_id(npc_info, this->tavern_info_.level_id);
};

// Line 636: range 00000000175AE0EA-00000000175AE662
uint32_t __cdecl GCGTavernChallenge::getFinishSpecifiedDifficultyCharacterChallengeNum(
        const GCGTavernChallenge *const this,
        bool is_hard)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  PlayerGCGComp *GCGComp; // rax
  const GCGPlayingExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::vector<data::GCGCharacterDynamicLevel>::const_reference v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  uint32_t result; // eax
  unsigned int val; // [rsp+10h] [rbp-110h] BYREF
  uint32_t finish_num; // [rsp+14h] [rbp-10Ch]
  std::map<unsigned int,GCGTavernChallengeData>::const_iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::map<unsigned int,GCGTavernChallengeData>::const_iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  const GCGLevelChallenge *level_challenge; // [rsp+28h] [rbp-F8h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+30h] [rbp-F0h]
  const std::map<unsigned int,GCGTavernChallengeData> *__for_range; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,GCGTavernChallengeData> *v22; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,GCGTavernChallengeData> >::type *character_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,GCGTavernChallengeData> >::type *challenge_data; // [rsp+50h] [rbp-D0h]
  const data::GCGCharacterLevelExcelConfig *config_ptr; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+60h] [rbp-C0h] BYREF
  common::milog::MiLogStream v27; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v28; // [rsp+90h] [rbp-90h] BYREF
  char v29[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 level_id:648";
  *(_QWORD *)(v2 + 16) = GCGTavernChallenge::getFinishSpecifiedDifficultyCharacterChallengeNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  finish_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  GCGComp = Player::getGCGComp(this->player_);
  level_challenge = PlayerGCGComp::getLevelChallenge(GCGComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v26);
  __for_range = &this->tavern_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,GCGTavernChallengeData>::begin(&this->tavern_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GCGTavernChallengeData>::end(&this->tavern_challenge_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator*(&__for_begin);
    character_id = std::get<0ul,unsigned int const,GCGTavernChallengeData>(v22);
    challenge_data = (std::tuple_element<1,const std::pair<unsigned int const,GCGTavernChallengeData> >::type *)std::get<1ul,unsigned int const,GCGTavernChallengeData>(v22);
    v6 = gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)character_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)character_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)character_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(character_id);
    }
    config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGCharacterLevelExcelConfig(v6, *character_id);
    if ( !config_ptr )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/gcg_tavern_challenge.cpp",
        "getFinishSpecifiedDifficultyCharacterChallengeNum",
        645);
      v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v27,
             (const char (*)[44])"findGCGCharacterLevelExcelConfig fail. id: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, character_id);
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v8, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      goto LABEL_28;
    }
    *(_DWORD *)(v2 + 32) = 0;
    if ( is_hard )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->hard_level_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->hard_level_id);
      }
      *(_DWORD *)(v2 + 32) = config_ptr->hard_level_id;
LABEL_25:
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &challenge_data->unlock_level_id_set,
             (const unsigned int *)(v2 + 32))
        && GCGLevelChallenge::findLevelData(level_challenge, *(_DWORD *)(v2 + 32)) )
      {
        ++finish_num;
      }
      goto LABEL_28;
    }
    if ( !std::vector<data::GCGCharacterDynamicLevel>::empty(&config_ptr->normal_level_list) )
    {
      v10 = std::vector<data::GCGCharacterDynamicLevel>::front(&config_ptr->normal_level_list);
      if ( *(_BYTE *)(((unsigned __int64)&v10->level_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->level_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::vector<data::GCGCharacterDynamicLevel>::const_reference)__asan_report_load4(&v10->level_id);
      }
      *(_DWORD *)(v2 + 32) = v10->level_id;
      goto LABEL_25;
    }
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/gcg_tavern_challenge.cpp",
      "getFinishSpecifiedDifficultyCharacterChallengeNum",
      660);
    v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v28,
            (const char (*)[45])"config_ptr->normal_level_list is empty. id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, character_id);
    v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" uid : ");
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
LABEL_28:
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,GCGTavernChallengeData>>::operator++(&__for_begin);
  }
  result = finish_num;
  if ( v29 == (char *)v2 )
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
