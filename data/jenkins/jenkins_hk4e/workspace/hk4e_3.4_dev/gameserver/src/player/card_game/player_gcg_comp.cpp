// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/card_game/player_gcg_comp.cpp

// Line 39: range 00000000175BF75A-00000000175BF89D
int32_t __cdecl GCGPlayerBriefInfo::fromBin(GCGPlayerBriefInfo *const this, const proto::GCGPlayerBriefBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  const std::string *v7; // rax
  const proto::ProfilePictureBin *v8; // rax
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v10; // rax
  const proto::GCGPlayerBriefBin *bina; // [rsp+0h] [rbp-20h]

  bina = bin;
  std::vector<unsigned int>::clear(&this->card_id_vec);
  v2 = proto::GCGPlayerBriefBin::controller_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(this, bin, v2);
  }
  this->controller_id = v2;
  v4 = proto::GCGPlayerBriefBin::uid(bina);
  v5 = *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->uid, bin, v6);
  this->uid = v4;
  v7 = proto::GCGPlayerBriefBin::nick_name[abi:cxx11](bina);
  std::string::operator=(&this->nick_name, v7);
  v8 = proto::GCGPlayerBriefBin::profile_picture(bina);
  ProfilePicture::fromBin(&this->profile_picture, v8);
  v9 = proto::GCGPlayerBriefBin::card_id_list(bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v9, &this->card_id_vec);
  v10 = proto::GCGPlayerBriefBin::card_face_map(bina);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->card_face_map,
    v10);
  return 0;
};

// Line 51: range 00000000175BF89E-00000000175BF9C7
int32_t __cdecl GCGPlayerBriefInfo::toBin(const GCGPlayerBriefInfo *const this, proto::GCGPlayerBriefBin *bin)
{
  proto::ProfilePictureBin *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGPlayerBriefBin::set_controller_id(bin, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->uid);
  }
  proto::GCGPlayerBriefBin::set_uid(bin, this->uid);
  proto::GCGPlayerBriefBin::set_nick_name(bin, &this->nick_name);
  v2 = proto::GCGPlayerBriefBin::mutable_profile_picture(bin);
  ProfilePicture::toBin(&this->profile_picture, v2);
  v3 = proto::GCGPlayerBriefBin::mutable_card_id_list(bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_id_vec, v3);
  v4 = proto::GCGPlayerBriefBin::mutable_card_face_map(bin);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->card_face_map,
    v4);
  return 0;
};

// Line 62: range 00000000175BF9C8-00000000175BFB0B
int32_t __cdecl GCGPlayerBriefInfo::fromProto(GCGPlayerBriefInfo *const this, const proto::GCGPlayerBriefData *proto)
{
  __int64 v2; // rdx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  __int64 v6; // rdx
  const std::string *v7; // rax
  const proto::ProfilePicture *v8; // rax
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v10; // rax
  const proto::GCGPlayerBriefData *protoa; // [rsp+0h] [rbp-20h]

  protoa = proto;
  std::vector<unsigned int>::clear(&this->card_id_vec);
  v2 = proto::GCGPlayerBriefData::controller_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto) = v3 != 0;
    __asan_report_store4(this, proto, v2);
  }
  this->controller_id = v2;
  v4 = proto::GCGPlayerBriefData::uid(protoa);
  v5 = *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v5 != 0;
  v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v5);
  if ( (_BYTE)v6 )
    __asan_report_store4(&this->uid, proto, v6);
  this->uid = v4;
  v7 = proto::GCGPlayerBriefData::nick_name[abi:cxx11](protoa);
  std::string::operator=(&this->nick_name, v7);
  v8 = proto::GCGPlayerBriefData::profile_picture(protoa);
  ProfilePicture::fromProto(&this->profile_picture, v8);
  v9 = proto::GCGPlayerBriefData::card_id_list(protoa);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v9, &this->card_id_vec);
  v10 = proto::GCGPlayerBriefData::card_face_map(protoa);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->card_face_map,
    v10);
  return 0;
};

// Line 74: range 00000000175BFB0C-00000000175BFC35
int32_t __cdecl GCGPlayerBriefInfo::toClient(const GCGPlayerBriefInfo *const this, proto::GCGPlayerBriefData *proto)
{
  proto::ProfilePicture *v2; // rax
  google::protobuf::RepeatedField<unsigned int> *v3; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v4; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGPlayerBriefData::set_controller_id(proto, this->controller_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->uid);
  }
  proto::GCGPlayerBriefData::set_uid(proto, this->uid);
  proto::GCGPlayerBriefData::set_nick_name(proto, &this->nick_name);
  v2 = proto::GCGPlayerBriefData::mutable_profile_picture(proto);
  ProfilePicture::toClient(&this->profile_picture, v2);
  v3 = proto::GCGPlayerBriefData::mutable_card_id_list(proto);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->card_id_vec, v3);
  v4 = proto::GCGPlayerBriefData::mutable_card_face_map(proto);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->card_face_map,
    v4);
  return 0;
};

// Line 85: range 00000000175BFC36-00000000175BFE9B
int32_t __cdecl GCGGameBriefInfo::fromBin(GCGGameBriefInfo *const this, const proto::GCGGameBriefBin *bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  __int64 v5; // rdx
  char v6; // al
  uint32_t v7; // ecx
  char v8; // dl
  __int64 v9; // rdx
  __int64 v10; // rdx
  char v11; // al
  __int64 v12; // rsi
  uint32_t v13; // ecx
  char v14; // dl
  __int64 v15; // rdx
  GCGPlayerBriefInfo *v16; // rax
  const proto::GCGGameBriefBin *bina; // [rsp+0h] [rbp-30h]
  google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefBin>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefBin>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefBin> *__for_range; // [rsp+20h] [rbp-10h]
  const proto::GCGPlayerBriefBin *player_brief_bin; // [rsp+28h] [rbp-8h]

  bina = bin;
  v2 = proto::GCGGameBriefBin::app_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)((((_BYTE)this + 12) & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->app_id, bin, v4);
  this->app_id = v2;
  v5 = proto::GCGGameBriefBin::thread_index(bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(bin) = v6 != 0;
    __asan_report_store4(&this->thread_index, bin, v5);
  }
  this->thread_index = v5;
  v7 = proto::GCGGameBriefBin::game_uid(bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000);
  LOBYTE(bin) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(&this->game_uid, bin, v9);
  this->game_uid = v7;
  v10 = proto::GCGGameBriefBin::game_id(bina);
  v11 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v11 != 0 && v11 <= 3 )
  {
    LOBYTE(bin) = v11 != 0;
    __asan_report_store4(this, bin, v10);
  }
  this->game_id = v10;
  v12 = proto::GCGGameBriefBin::business_type(bina);
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->business_type, v12, &this->business_type);
  }
  this->business_type = v12;
  v13 = proto::GCGGameBriefBin::verify_code(bina);
  v14 = *(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000);
  LOBYTE(v12) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store4(&this->verify_code, v12, v15);
  this->verify_code = v13;
  __for_range = proto::GCGGameBriefBin::player_brief_bin_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::GCGPlayerBriefBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::GCGPlayerBriefBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    player_brief_bin = google::protobuf::internal::RepeatedPtrIterator<proto::GCGPlayerBriefBin const>::operator*(&__for_begin);
    v16 = std::vector<GCGPlayerBriefInfo>::emplace_back<>(&this->player_brief_vec);
    GCGPlayerBriefInfo::fromBin(v16, player_brief_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::GCGPlayerBriefBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 100: range 00000000175BFE9C-00000000175C00F6
int32_t __cdecl GCGGameBriefInfo::toBin(const GCGGameBriefInfo *const this, proto::GCGGameBriefBin *bin)
{
  proto::GCGPlayerBriefBin *v2; // rax
  std::vector<GCGPlayerBriefInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<GCGPlayerBriefInfo>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<GCGPlayerBriefInfo> *__for_range; // [rsp+20h] [rbp-10h]
  const GCGPlayerBriefInfo *player_brief; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->app_id);
  }
  proto::GCGGameBriefBin::set_app_id(bin, this->app_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->thread_index);
  }
  proto::GCGGameBriefBin::set_thread_index(bin, this->thread_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->game_uid);
  }
  proto::GCGGameBriefBin::set_game_uid(bin, this->game_uid);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGGameBriefBin::set_game_id(bin, this->game_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->business_type);
  }
  proto::GCGGameBriefBin::set_business_type(bin, this->business_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->verify_code);
  }
  proto::GCGGameBriefBin::set_verify_code(bin, this->verify_code);
  __for_range = &this->player_brief_vec;
  __for_begin._M_current = std::vector<GCGPlayerBriefInfo>::begin(&this->player_brief_vec)._M_current;
  __for_end._M_current = std::vector<GCGPlayerBriefInfo>::end(&this->player_brief_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGPlayerBriefInfo const*,std::vector<GCGPlayerBriefInfo>>(&__for_begin, &__for_end) )
  {
    player_brief = __gnu_cxx::__normal_iterator<GCGPlayerBriefInfo const*,std::vector<GCGPlayerBriefInfo>>::operator*(&__for_begin);
    v2 = proto::GCGGameBriefBin::add_player_brief_bin_list(bin);
    GCGPlayerBriefInfo::toBin(player_brief, v2);
    __gnu_cxx::__normal_iterator<GCGPlayerBriefInfo const*,std::vector<GCGPlayerBriefInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 115: range 00000000175C00F8-00000000175C0218
int32_t __cdecl GCGGameBriefInfo::toClient(const GCGGameBriefInfo *const this, proto::GCGGameBriefData *proto)
{
  proto::GCGPlayerBriefData *v2; // rax
  std::vector<GCGPlayerBriefInfo>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<GCGPlayerBriefInfo>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<GCGPlayerBriefInfo> *__for_range; // [rsp+20h] [rbp-10h]
  const GCGPlayerBriefInfo *player_brief; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GCGGameBriefData::set_game_id(proto, this->game_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->business_type);
  }
  proto::GCGGameBriefData::set_business_type(proto, this->business_type);
  __for_range = &this->player_brief_vec;
  __for_begin._M_current = std::vector<GCGPlayerBriefInfo>::begin(&this->player_brief_vec)._M_current;
  __for_end._M_current = std::vector<GCGPlayerBriefInfo>::end(&this->player_brief_vec)._M_current;
  while ( __gnu_cxx::operator!=<GCGPlayerBriefInfo const*,std::vector<GCGPlayerBriefInfo>>(&__for_begin, &__for_end) )
  {
    player_brief = __gnu_cxx::__normal_iterator<GCGPlayerBriefInfo const*,std::vector<GCGPlayerBriefInfo>>::operator*(&__for_begin);
    v2 = proto::GCGGameBriefData::add_player_brief_list(proto);
    GCGPlayerBriefInfo::toClient(player_brief, v2);
    __gnu_cxx::__normal_iterator<GCGPlayerBriefInfo const*,std::vector<GCGPlayerBriefInfo>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 126: range 00000000175C021A-00000000175C0664
std::string *__cdecl GCGGameBriefInfo::getDesc[abi:cxx11](std::string *retstr, const GCGGameBriefInfo *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  char v17[544]; // [rsp+10h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 6 ss:127";
  *(_QWORD *)(v2 + 16) = GCGGameBriefInfo::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 64, "[GameInfo]game_id: ");
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  v6 = std::ostream::operator<<(v5, this->game_id);
  v7 = std::operator<<<std::char_traits<char>>(v6, " game_uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_uid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->game_uid);
  }
  v8 = std::ostream::operator<<(v7, this->game_uid);
  v9 = std::operator<<<std::char_traits<char>>(v8, " app_id: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->app_id);
  }
  v10 = std::ostream::operator<<(v9, this->app_id);
  v11 = std::operator<<<std::char_traits<char>>(v10, " thread_index: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->thread_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->thread_index);
  }
  v12 = std::ostream::operator<<(v11, this->thread_index);
  v13 = std::operator<<<std::char_traits<char>>(v12, " verify_code: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->verify_code >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->verify_code);
  }
  v14 = std::ostream::operator<<(v13, this->verify_code);
  v15 = std::operator<<<std::char_traits<char>>(v14, " business_type: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->business_type);
  }
  std::ostream::operator<<(v15, (unsigned int)this->business_type);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v17 == (char *)v2 )
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

// Line 138: range 00000000175C0666-00000000175C077D
int32_t __cdecl PlayerGCGComp::fromBin(PlayerGCGComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  const proto::GCGBasicBin *v2; // rax
  const proto::GCGGameBriefBin *v3; // rax
  const proto::GCGDeckSystemBin *v4; // rax
  const proto::GCGTavernBin *v5; // rax
  const proto::GCGLevelChallengeBin *v6; // rax
  const proto::GCGWeekChallengeBin *v7; // rax
  const proto::GCGTavernSceneBuilderBin *v8; // rax
  const proto::PlayerGCGCompBin *gcg_bin; // [rsp+18h] [rbp-18h]

  gcg_bin = proto::PlayerDataBin::gcg_bin(player_data_bin);
  v2 = proto::PlayerGCGCompBin::basic_bin(gcg_bin);
  GCGBasic::fromBin(&this->basic_, v2);
  v3 = proto::PlayerGCGCompBin::game_brief_bin(gcg_bin);
  GCGGameBriefInfo::fromBin(&this->game_info_, v3);
  v4 = proto::PlayerGCGCompBin::deck_system_bin(gcg_bin);
  GCGDeckSystem::fromBin(&this->deck_system_, v4);
  v5 = proto::PlayerGCGCompBin::tavern_bin(gcg_bin);
  GCGTavernChallenge::fromBin(&this->tavern_challenge_, v5);
  v6 = proto::PlayerGCGCompBin::level_challenge_bin(gcg_bin);
  GCGLevelChallenge::fromBin(&this->level_challenge_, v6);
  v7 = proto::PlayerGCGCompBin::week_challenge_bin(gcg_bin);
  GCGWeekChallenge::fromBin(&this->week_challenge_, v7);
  v8 = proto::PlayerGCGCompBin::tavern_scene_builder_bin(gcg_bin);
  GCGTavernSceneBuilder::fromBin(&this->tavern_scene_builder_, v8);
  return 0;
};

// Line 151: range 00000000175C077E-00000000175C0895
int32_t __cdecl PlayerGCGComp::toBin(PlayerGCGComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::GCGBasicBin *v2; // rax
  proto::GCGGameBriefBin *v3; // rax
  proto::GCGDeckSystemBin *v4; // rax
  proto::GCGTavernBin *v5; // rax
  proto::GCGLevelChallengeBin *v6; // rax
  proto::GCGWeekChallengeBin *v7; // rax
  proto::GCGTavernSceneBuilderBin *v8; // rax
  proto::PlayerGCGCompBin *gcg_bin; // [rsp+18h] [rbp-18h]

  gcg_bin = proto::PlayerDataBin::mutable_gcg_bin(player_data_bin);
  v2 = proto::PlayerGCGCompBin::mutable_basic_bin(gcg_bin);
  GCGBasic::toBin(&this->basic_, v2);
  v3 = proto::PlayerGCGCompBin::mutable_game_brief_bin(gcg_bin);
  GCGGameBriefInfo::toBin(&this->game_info_, v3);
  v4 = proto::PlayerGCGCompBin::mutable_deck_system_bin(gcg_bin);
  GCGDeckSystem::toBin(&this->deck_system_, v4);
  v5 = proto::PlayerGCGCompBin::mutable_tavern_bin(gcg_bin);
  GCGTavernChallenge::toBin(&this->tavern_challenge_, v5);
  v6 = proto::PlayerGCGCompBin::mutable_level_challenge_bin(gcg_bin);
  GCGLevelChallenge::toBin(&this->level_challenge_, v6);
  v7 = proto::PlayerGCGCompBin::mutable_week_challenge_bin(gcg_bin);
  GCGWeekChallenge::toBin(&this->week_challenge_, v7);
  v8 = proto::PlayerGCGCompBin::mutable_tavern_scene_builder_bin(gcg_bin);
  GCGTavernSceneBuilder::toBin(&this->tavern_scene_builder_, v8);
  return 0;
};

// Line 164: range 00000000175C09DC-00000000175C0C44
int32_t __cdecl PlayerGCGComp::init(PlayerGCGComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerOfflineOpComp *OfflineOpComp; // r14
  int32_t result; // eax
  proto::OfflineOpType op_type; // [rsp+1Ch] [rbp-C4h] BYREF
  std::enable_shared_from_this<PlayerCompBase> v7; // [rsp+20h] [rbp-C0h] BYREF
  std::function<void(const proto::OfflineOpBin&)> p_func; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 9 s_ptr:166 64 16 9 w_ptr:166";
  *(_QWORD *)(v1 + 16) = PlayerGCGComp::init;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  PlayerGCGComp::initEventObservers(this);
  std::enable_shared_from_this<PlayerCompBase>::shared_from_this(&v7);
  std::dynamic_pointer_cast<PlayerGCGComp,PlayerCompBase>((const std::shared_ptr<PlayerCompBase> *)(v1 + 32));
  std::shared_ptr<PlayerCompBase>::~shared_ptr((std::shared_ptr<PlayerCompBase> *const)&v7);
  std::weak_ptr<PlayerGCGComp>::weak_ptr<PlayerGCGComp,void>(
    (std::weak_ptr<PlayerGCGComp> *const)(v1 + 64),
    (const std::shared_ptr<PlayerGCGComp> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  OfflineOpComp = Player::getOfflineOpComp(this->player_);
  std::weak_ptr<PlayerGCGComp>::weak_ptr(
    (std::weak_ptr<PlayerGCGComp> *const)&v7,
    (const std::weak_ptr<PlayerGCGComp> *)(v1 + 64));
  std::function<void ()(proto::OfflineOpBin const&)>::function<PlayerGCGComp::init(void)::{lambda(proto::OfflineOpBin const&)#1},void,void>(
    &p_func,
    (PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *)&v7);
  op_type = OFFLINE_OP_GCG_SETTLE;
  PlayerOfflineOpComp::registerExecOfflineOp(OfflineOpComp, &op_type, &p_func);
  std::function<void ()(proto::OfflineOpBin const&)>::~function(&p_func);
  PlayerGCGComp::init(void)::{lambda(proto::OfflineOpBin const&)#1}::~OfflineOpBin((PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *const)&v7);
  std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)(v1 + 64));
  std::shared_ptr<PlayerGCGComp>::~shared_ptr((std::shared_ptr<PlayerGCGComp> *const)(v1 + 32));
  result = 0;
  if ( v9 == (char *)v1 )
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

// Line 166: range 00000000176046B8-00000000176046DD
void __cdecl PlayerGCGComp::init(void)::{lambda(proto::OfflineOpBin const&)#1}::OfflineOpBin(
        PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *const this,
        PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlayerGCGComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 166: range 00000000176047A8-00000000176047CD
void __cdecl PlayerGCGComp::init(void)::{lambda(proto::OfflineOpBin const&)#1}::OfflineOpBin(
        PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *const this,
        const PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *a2)
{
  std::weak_ptr<PlayerGCGComp>::weak_ptr(&this->__w_ptr, &a2->__w_ptr);
};

// Line 166: range 00000000175C0896-00000000175C09BE
void __cdecl PlayerGCGComp::init(void)::{lambda(proto::OfflineOpBin const&)#1}::operator()(
        const PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *const __closure,
        const proto::OfflineOpBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerGCGComp *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 9 s_ptr:166";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::init(void)::{lambda(proto::OfflineOpBin const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<PlayerGCGComp>::lock((const std::weak_ptr<PlayerGCGComp> *const)(v2 + 32));
  if ( std::operator!=<PlayerGCGComp>((const std::shared_ptr<PlayerGCGComp> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<PlayerGCGComp,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerGCGComp,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    PlayerGCGComp::onOfflineOpExec(v5, bin);
  }
  std::shared_ptr<PlayerGCGComp>::~shared_ptr((std::shared_ptr<PlayerGCGComp> *const)(v2 + 32));
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

// Line 166: range 00000000175C09C0-00000000175C09DA
void __cdecl PlayerGCGComp::init(void)::{lambda(proto::OfflineOpBin const&)#1}::~OfflineOpBin(
        PlayerGCGComp::init::<lambda(const proto::OfflineOpBin&)> *const this)
{
  std::weak_ptr<PlayerGCGComp>::~weak_ptr(&this->__w_ptr);
};

// Line 171: range 00000000175C0C46-00000000175C137D
void __cdecl PlayerGCGComp::initEventObservers(PlayerGCGComp *const this)
{
  unsigned __int64 p_M_bucket_count; // r13
  __int64 v2; // rax
  _DWORD *v3; // r14
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+84h] [rbp-12Ch] BYREF
  PlayerEventComp *event_comp; // [rsp+88h] [rbp-128h]
  PlayerEventComp v7; // [rsp+90h] [rbp-120h] BYREF

  p_M_bucket_count = (unsigned __int64)&v7.event_center_.observer_list_map_._M_h._M_bucket_count;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_bucket_count = v2;
  }
  *(_QWORD *)p_M_bucket_count = 1102416563LL;
  *(_QWORD *)(p_M_bucket_count + 8) = "2 32 16 12 this_ptr:174 64 16 12 this_wtr:180";
  *(_QWORD *)(p_M_bucket_count + 16) = PlayerGCGComp::initEventObservers;
  v3 = (_DWORD *)(p_M_bucket_count >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/player_gcg_comp.cpp",
    "initEventObservers",
    172);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
  toThisPtr<PlayerGCGComp>((PlayerGCGComp *)(p_M_bucket_count + 32));
  if ( std::operator==<PlayerGCGComp>(0LL, (const std::shared_ptr<PlayerGCGComp> *)(p_M_bucket_count + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "initEventObservers",
      177);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const char (*)[45])"dynamic_pointer_cast to PlayerGCGComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
  }
  else
  {
    std::weak_ptr<PlayerGCGComp>::weak_ptr<PlayerGCGComp,void>(
      (std::weak_ptr<PlayerGCGComp> *const)(p_M_bucket_count + 64),
      (const std::shared_ptr<PlayerGCGComp> *)(p_M_bucket_count + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerGCGComp>::weak_ptr(
      (std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerGCGComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerGCGComp,StartQuestEvent>(
      &v7,
      (std::weak_ptr<PlayerGCGComp> *)event_comp,
      (void (*)(PlayerGCGComp *, const StartQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerGCGComp>::weak_ptr(
      (std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerGCGComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerGCGComp,FinishQuestEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerGCGComp> *)event_comp,
      (void (*)(PlayerGCGComp *, const FinishQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerGCGComp>::weak_ptr(
      (std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerGCGComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerGCGComp,FinishParentQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerGCGComp> *)event_comp,
      (void (*)(PlayerGCGComp *, const FinishParentQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerGCGComp>::weak_ptr(
      (std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerGCGComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerGCGComp,QuestStateChangeEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerGCGComp> *)event_comp,
      (void (*)(PlayerGCGComp *, const QuestStateChangeEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerGCGComp>::weak_ptr(
      (std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerGCGComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerGCGComp,OpenStateChangeEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerGCGComp> *)event_comp,
      (void (*)(PlayerGCGComp *, const OpenStateChangeEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerGCGComp>::weak_ptr(
      (std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerGCGComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerGCGComp,PostEnterSceneEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerGCGComp> *)event_comp,
      (void (*)(PlayerGCGComp *, const PostEnterSceneEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerGCGComp>::weak_ptr(
      (std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerGCGComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerGCGComp,GCGLevelSettleEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerGCGComp> *)event_comp,
      (void (*)(PlayerGCGComp *, const GCGLevelSettleEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerGCGComp>::~weak_ptr((std::weak_ptr<PlayerGCGComp> *const)(p_M_bucket_count + 64));
  }
  std::shared_ptr<PlayerGCGComp>::~shared_ptr((std::shared_ptr<PlayerGCGComp> *const)(p_M_bucket_count + 32));
  if ( &v7.event_center_.observer_list_map_._M_h._M_bucket_count == (std::_Hashtable<std::type_index,std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> >,std::allocator<std::pair<const std::type_index,std::vector<std::shared_ptr<Observer>> > >,std::__detail::_Select1st,std::equal_to<std::type_index>,std::hash<std::type_index>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true> >::size_type *)p_M_bucket_count )
  {
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_bucket_count = 1172321806LL;
    *(_QWORD *)((p_M_bucket_count >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_bucket_count >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 194: range 00000000175C137E-00000000175C1586
int32_t __cdecl PlayerGCGComp::onLogin(PlayerGCGComp *const this, bool is_new_player)
{
  common::milog::MiLogStream *v3; // rbx
  GCGLevelChallenge *LevelChallenge; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( !common::tools::MiTimer::isActive(&this->sync_timer_)
    && PlayerUnixTimer::startS(
         &this->sync_timer_,
         0xAu,
         1,
         "./src/player/card_game/player_gcg_comp.cpp",
         "onLogin",
         195) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "onLogin",
      197);
    v3 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v8,
           (const char (*)[31])"sync_timer_ start failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) && PlayerGCGComp::isInGame(this) )
    PlayerGCGComp::sendSyncReq(this, 1);
  GCGBasic::onLogin(&this->basic_);
  GCGDeckSystem::onLogin(&this->deck_system_);
  GCGTavernChallenge::onLogin(&this->tavern_challenge_);
  GCGWeekChallenge::onLogin(&this->week_challenge_);
  GCGTavernSceneBuilder::onLogin(&this->tavern_scene_builder_);
  LevelChallenge = PlayerGCGComp::getLevelChallenge(this);
  GCGLevelChallenge::onLogin(LevelChallenge);
  return 0;
};

// Line 214: range 00000000175C1588-00000000175C15E8
int32_t __cdecl PlayerGCGComp::notifyAllData(PlayerGCGComp *const this)
{
  GCGLevelChallenge *LevelChallenge; // rax
  GCGDeckSystem *DeckSystem; // rax
  GCGTavernChallenge *TavernChallenge; // rax

  GCGBasic::notifyAllData(&this->basic_);
  LevelChallenge = PlayerGCGComp::getLevelChallenge(this);
  GCGLevelChallenge::notifyAllData(LevelChallenge);
  DeckSystem = PlayerGCGComp::getDeckSystem(this);
  GCGDeckSystem::notifyAllData(DeckSystem);
  TavernChallenge = PlayerGCGComp::getTavernChallenge(this);
  GCGTavernChallenge::notifyAllData(TavernChallenge);
  return 0;
};

// Line 223: range 00000000175C15EA-00000000175C161E
void __cdecl PlayerGCGComp::onDailyRefresh(PlayerGCGComp *const this)
{
  GCGBasic *Basic; // rax

  Basic = PlayerGCGComp::getBasic(this);
  GCGBasic::onDailyRefresh(Basic);
  GCGWeekChallenge::onDailyRefresh(&this->week_challenge_);
};

// Line 229: range 00000000175C1620-00000000175C1642
void __cdecl PlayerGCGComp::onLoginDailyRefresh(PlayerGCGComp *const this)
{
  GCGBasic *Basic; // rax

  Basic = PlayerGCGComp::getBasic(this);
  GCGBasic::onLoginDailyRefresh(Basic);
};

// Line 234: range 00000000175C1644-00000000175C1663
uint32_t __cdecl PlayerGCGComp::getLevel(const PlayerGCGComp *const this)
{
  return GCGBasic::getLevel(&this->basic_);
};

// Line 239: range 00000000175C1664-00000000175C1684
void __cdecl PlayerGCGComp::onLeaveScene(PlayerGCGComp *const this)
{
  GCGTavernChallenge::onLeaveScene(&this->tavern_challenge_);
};

// Line 244: range 00000000175C1686-00000000175C175E
void __cdecl PlayerGCGComp::onEnterScene(PlayerGCGComp *const this, ScenePtr *p_scene_ptr, bool is_reenter)
{
  std::shared_ptr<Scene> v5; // [rsp+20h] [rbp-20h] BYREF

  std::shared_ptr<Scene>::shared_ptr(&v5, p_scene_ptr);
  GCGTavernChallenge::onEnterScene(&this->tavern_challenge_, &v5, is_reenter);
  std::shared_ptr<Scene>::~shared_ptr(&v5);
  std::shared_ptr<Scene>::shared_ptr(&v5, p_scene_ptr);
  GCGTavernSceneBuilder::onEnterScene(&this->tavern_scene_builder_, &v5, is_reenter);
  std::shared_ptr<Scene>::~shared_ptr(&v5);
};

// Line 250: range 00000000175C1760-00000000175C1971
void __cdecl PlayerGCGComp::onLeaveDungeon(PlayerGCGComp *const this, DungeonScene *dungeon_scene)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGDungeonContext *v5; // rdx
  proto::GCGGameBusinessType *p_business_type; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 28 15 context_opt:255";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::onLeaveDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 0x4000000;
  v4[536862722] = -202116109;
  if ( DungeonScene::getDungeonType(dungeon_scene) == DUNGEON_GCG )
  {
    DungeonScene::getDungeonExtraData<GCGDungeonContext>((std::optional<GCGDungeonContext> *)(v2 + 32), dungeon_scene);
    if ( !std::optional<GCGDungeonContext>::has_value((const std::optional<GCGDungeonContext> *const)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v7,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "onLeaveDungeon",
        258);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v7, (const char (*)[19])"getExtraData fail.");
      common::milog::MiLogStream::~MiLogStream(&v7);
    }
    else
    {
      v5 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 32));
      p_business_type = &v5->business_type;
      if ( *(_BYTE *)(((unsigned __int64)p_business_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_business_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_business_type >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(p_business_type);
      }
      if ( v5->business_type == GCG_GAME_TAVERN_CHALLENGE )
        GCGTavernChallenge::onLeaveGCGDungeon(&this->tavern_challenge_);
    }
  }
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
};

// Line 268: range 00000000175C1972-00000000175C19C8
void __cdecl PlayerGCGComp::onPostEnterSceneEvent(PlayerGCGComp *const this, const PostEnterSceneEvent *event)
{
  if ( PlayerGCGComp::isInGame(this) && !PlayerGCGComp::isInGCGDungeon(this) )
    PlayerGCGComp::notifyGameInfo(this, 0);
};

// Line 277: range 00000000175C19CA-00000000175C1A2C
void __cdecl PlayerGCGComp::onQuestStart(PlayerGCGComp *const this, const StartQuestEvent *event)
{
  GCGTavernChallenge *p_tavern_challenge; // rcx

  p_tavern_challenge = &this->tavern_challenge_;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  GCGTavernChallenge::onQuestStart(p_tavern_challenge, event->quest_id);
};

// Line 282: range 00000000175C1A2E-00000000175C1A90
void __cdecl PlayerGCGComp::onQuestFinish(PlayerGCGComp *const this, const FinishQuestEvent *event)
{
  GCGTavernChallenge *p_tavern_challenge; // rcx

  p_tavern_challenge = &this->tavern_challenge_;
  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  GCGTavernChallenge::onQuestFinish(p_tavern_challenge, event->quest_id);
};

// Line 287: range 00000000175C1A92-00000000175C1AD8
void __cdecl PlayerGCGComp::onFinishParentQuestEvent(PlayerGCGComp *const this, const FinishParentQuestEvent *event)
{
  GCGBasic::onFinishParentQuestEvent(&this->basic_, event);
  GCGLevelChallenge::onFinishParentQuestEvent(&this->level_challenge_, event);
};

// Line 293: range 00000000175C1ADA-00000000175C1B20
void __cdecl PlayerGCGComp::onQuestStateChangeEvent(PlayerGCGComp *const this, const QuestStateChangeEvent *event)
{
  GCGTavernSceneBuilder::onQuestStateChangeEvent(&this->tavern_scene_builder_, event);
  GCGWeekChallenge::onQuestStateChangeEvent(&this->week_challenge_, event);
};

// Line 299: range 00000000175C1B22-00000000175C1BB6
void __cdecl PlayerGCGComp::onOpenStateChange(PlayerGCGComp *const this, const OpenStateChangeEvent *event)
{
  GCGBasic::onOpenStateChange(&this->basic_, event);
  GCGDeckSystem::onOpenStateChange(&this->deck_system_, event);
  GCGWeekChallenge::onOpenStateChange(&this->week_challenge_, event);
  GCGLevelChallenge::onOpenStateChange(&this->level_challenge_, event);
  GCGTavernSceneBuilder::onOpenStateChange(&this->tavern_scene_builder_, event);
};

// Line 308: range 00000000175C1BB8-00000000175C1BFE
void __cdecl PlayerGCGComp::onGCGLevelSettleEvent(PlayerGCGComp *const this, const GCGLevelSettleEvent *event)
{
  GCGTavernChallenge::onGCGLevelSettleEvent(&this->tavern_challenge_, event);
  GCGLevelChallenge::onGCGLevelSettleEvent(&this->level_challenge_, event);
};

// Line 314: range 00000000175C1C00-00000000175C1E26
void __fastcall PlayerGCGComp::onGCGLevelUp(PlayerGCGComp *const this, uint32_t before_level, uint32_t after_level)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-A0h] BYREF
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 16 before_level:313 48 4 15 after_level:313 64 16 13 event_ptr:319";
  *(_QWORD *)(v3 + 16) = PlayerGCGComp::onGCGLevelUp;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = before_level;
  *(_DWORD *)(v3 + 48) = after_level;
  GCGDeckSystem::onGCGLevelUp(&this->deck_system_);
  GCGLevelChallenge::onGCGLevelUp(&this->level_challenge_);
  GCGTavernChallenge::onGCGLevelUp(&this->tavern_challenge_);
  GCGWeekChallenge::onLevelUp(&this->week_challenge_);
  common::tools::perf::make_shared<GCGLevelUpEvent,unsigned int &,unsigned int &>(
    (unsigned int *)(v3 + 64),
    (unsigned int *)(v3 + 32),
    (unsigned int *)(v3 + 48),
    (unsigned int *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr<GCGLevelUpEvent,void>(
    &p_event_ptr,
    (const std::shared_ptr<GCGLevelUpEvent> *)(v3 + 64));
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<GCGLevelUpEvent>::~shared_ptr((std::shared_ptr<GCGLevelUpEvent> *const)(v3 + 64));
  if ( v9 == (char *)v3 )
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

// Line 324: range 00000000175C1E28-00000000175C2663
int32_t __cdecl PlayerGCGComp::sendToGameMode(PlayerGCGComp *const this, const google::protobuf::Message *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  void (__fastcall **v5)(std::string *, const google::protobuf::Message *); // rax
  common::milog::MiLogStream *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  void (__fastcall **v9)(std::string *, const google::protobuf::Message *); // rax
  int32_t v10; // r14d
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  void (__fastcall **v16)(std::string *, const google::protobuf::Message *); // rax
  common::minet::Packet *v17; // rcx
  common::minet::Packet *v18; // r14
  uint32_t Uid; // eax
  GameserverService *v20; // r14
  unsigned __int64 v21; // rdx
  NetworkMgrBase *v22; // r15
  uint32_t app_id; // r14d
  uint32_t v24; // r8d
  int32_t result; // eax
  uint32_t cmd_id; // [rsp+24h] [rbp-ECh]
  GCGGameBriefInfo *game_info; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-B0h] BYREF
  std::string cmd_name; // [rsp+80h] [rbp-90h] BYREF
  char v32[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 packet_ptr:332";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::sendToGameMode;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
    __asan_report_load8(proto);
  v5 = (void (__fastcall **)(std::string *, const google::protobuf::Message *))(proto->_vptr_MessageLite + 2);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_load8(proto->_vptr_MessageLite + 2);
  (*v5)(&cmd_name, proto);
  cmd_id = ProtoUtils::getCmdId(&cmd_name);
  std::string::~string(&cmd_name);
  if ( cmd_id )
  {
    common::minet::PacketUtils::createPacket(cmd_id, proto);
    if ( std::operator==<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)(v2 + 32), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&cmd_name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "sendToGameMode",
        335);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
        (common::milog::MiLogStream *const)&cmd_name,
        (const char (*)[19])"createPacket fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&cmd_name);
      v10 = -1;
    }
    else
    {
      game_info = PlayerGCGComp::getGameInfo(this);
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "sendToGameMode",
        339);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v29,
              (const char (*)[28])"send to SERVICE_GCG app_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &game_info->app_id);
      v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])" app: ");
      if ( *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)game_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&game_info->app_id);
      }
      common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)&v30, game_info->app_id);
      v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)&v30);
      v15 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])" cmd: ");
      if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
        __asan_report_load8(proto);
      v16 = (void (__fastcall **)(std::string *, const google::protobuf::Message *))(proto->_vptr_MessageLite + 2);
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8(proto->_vptr_MessageLite + 2);
      (*v16)(&cmd_name, proto);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &cmd_name);
      std::string::~string(&cmd_name);
      std::string::~string(&v30);
      common::milog::MiLogStream::~MiLogStream(&v29);
      if ( *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)game_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&game_info->app_id);
      }
      if ( game_info->app_id )
      {
        v17 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&game_info->thread_index >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&game_info->thread_index >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&game_info->thread_index);
        }
        common::minet::Packet::setMultiThreadIndex(v17, game_info->thread_index);
      }
      v18 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      common::minet::Packet::setUserId(v18, Uid);
      v20 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      ServiceBase::setPacketSource(v20, (common::minet::PacketPtr)__PAIR128__(v21, &packet_ptr));
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      v22 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)game_info + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&game_info->app_id >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&game_info->app_id);
      }
      app_id = game_info->app_id;
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &packet_ptr,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      LOBYTE(app_id) = NetworkMgrBase::sendPacketToTargetService(
                         v22,
                         (common::minet::PacketPtr)__PAIR128__(20LL, &packet_ptr),
                         app_id,
                         v24) != 0;
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
      if ( (_BYTE)app_id )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&cmd_name,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/player_gcg_comp.cpp",
          "sendToGameMode",
          350);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)&cmd_name,
          (const char (*)[33])"sendPacketToTargetService failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&cmd_name);
        v10 = -1;
      }
      else
      {
        v10 = 0;
      }
    }
    std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "sendToGameMode",
      328);
    v6 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v30, (const char (*)[18])"getCmdId failed, ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v7 = operator<<(v6, this->player_);
    v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" cmd_name:");
    if ( *(_BYTE *)(((unsigned __int64)proto >> 3) + 0x7FFF8000) )
      __asan_report_load8(proto);
    v9 = (void (__fastcall **)(std::string *, const google::protobuf::Message *))(proto->_vptr_MessageLite + 2);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      __asan_report_load8(proto->_vptr_MessageLite + 2);
    (*v9)(&cmd_name, proto);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &cmd_name);
    std::string::~string(&cmd_name);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v10 = -1;
  }
  result = v10;
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

// Line 357: range 00000000175C2664-00000000175C2841
int32_t __cdecl PlayerGCGComp::sendGM(PlayerGCGComp *const this, const std::vector<std::string> *msg_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+20h] [rbp-C0h]
  const std::string *msg; // [rsp+28h] [rbp-B8h]
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 14 server_req:358";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::sendGM;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::ServerGCGGMCommandReq::ServerGCGGMCommandReq((proto::ServerGCGGMCommandReq *const)(v2 + 48));
  __for_range = msg_vec;
  __for_begin._M_current = std::vector<std::string>::begin(msg_vec)._M_current;
  __for_end._M_current = std::vector<std::string>::end(msg_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    msg = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    proto::ServerGCGGMCommandReq::add_msg_list((proto::ServerGCGGMCommandReq *const)(v2 + 48), msg);
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
  v5 = PlayerGCGComp::sendToGameMode(this, (const google::protobuf::Message *)(v2 + 48));
  proto::ServerGCGGMCommandReq::~ServerGCGGMCommandReq((proto::ServerGCGGMCommandReq *const)(v2 + 48));
  result = v5;
  if ( v11 == (char *)v2 )
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

// Line 367: range 00000000175C2842-00000000175C29CF
void __cdecl PlayerGCGComp::notifyGameInfo(PlayerGCGComp *const this, bool is_new_game)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  proto::GCGGameBriefData *v5; // rax
  char v6[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 10 notify:368";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::notifyGameInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::GCGGameBriefDataNotify::GCGGameBriefDataNotify((proto::GCGGameBriefDataNotify *const)(v2 + 32));
  v5 = proto::GCGGameBriefDataNotify::mutable_gcg_brief_data((proto::GCGGameBriefDataNotify *const)(v2 + 32));
  GCGGameBriefInfo::toClient(&this->game_info_, v5);
  proto::GCGGameBriefDataNotify::set_is_new_game((proto::GCGGameBriefDataNotify *const)(v2 + 32), is_new_game);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 32));
  proto::GCGGameBriefDataNotify::~GCGGameBriefDataNotify((proto::GCGGameBriefDataNotify *const)(v2 + 32));
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

// Line 375: range 00000000175C29D0-00000000175C2BB5
void __cdecl PlayerGCGComp::sendSyncReq(PlayerGCGComp *const this, bool is_login)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 7 req:377";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::sendSyncReq;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  proto::ServerGCGSyncReq::ServerGCGSyncReq((proto::ServerGCGSyncReq *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->game_info_.game_uid);
  }
  proto::ServerGCGSyncReq::set_game_uid((proto::ServerGCGSyncReq *const)(v2 + 32), this->game_info_.game_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->game_info_.verify_code);
  }
  proto::ServerGCGSyncReq::set_verify_code((proto::ServerGCGSyncReq *const)(v2 + 32), this->game_info_.verify_code);
  proto::ServerGCGSyncReq::set_is_login((proto::ServerGCGSyncReq *const)(v2 + 32), is_login);
  PlayerGCGComp::sendToGameMode(this, (const google::protobuf::Message *)(v2 + 32));
  proto::ServerGCGSyncReq::~ServerGCGSyncReq((proto::ServerGCGSyncReq *const)(v2 + 32));
  if ( v5 == (char *)v2 )
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

// Line 385: range 00000000175C2BB6-00000000175C2F2D
void __cdecl PlayerGCGComp::recvSyncRsp(PlayerGCGComp *const this, const proto::ServerGCGSyncRsp *rsp_0)
{
  common::milog::MiLogStream *v2; // rbx
  uint32_t game_uid; // ebx
  uint32_t app_id; // ebx
  uint32_t thread_index; // ebx
  uint32_t verify_code; // ebx
  char v7; // al
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-50h] BYREF
  std::string val; // [rsp+30h] [rbp-30h] BYREF

  if ( proto::ServerGCGSyncRsp::retcode(rsp_0) && proto::ServerGCGSyncRsp::retcode(rsp_0) != 12002 )
  {
    if ( !proto::ServerGCGSyncRsp::is_login(rsp_0) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "recvSyncRsp",
        394);
      v2 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v10,
             (const char (*)[24])"recv ServerGCGSyncRsp: ");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &rsp_0->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->game_info_.game_uid);
    }
    game_uid = this->game_info_.game_uid;
    if ( game_uid != proto::ServerGCGSyncRsp::game_uid(rsp_0) )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->game_info_.app_id);
    }
    app_id = this->game_info_.app_id;
    if ( app_id != proto::ServerGCGSyncRsp::app_id(rsp_0) )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->game_info_.thread_index);
    }
    thread_index = this->game_info_.thread_index;
    if ( thread_index != proto::ServerGCGSyncRsp::thread_index(rsp_0) )
      goto LABEL_18;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->game_info_.verify_code);
    }
    verify_code = this->game_info_.verify_code;
    if ( verify_code == proto::ServerGCGSyncRsp::verify_code(rsp_0) )
      v7 = 1;
    else
LABEL_18:
      v7 = 0;
    if ( v7 )
    {
      PlayerGCGComp::resetGameInfo(this);
      if ( PlayerGCGComp::isInGCGDungeon(this) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        DungeonComp = Player::getDungeonComp(this->player_);
        PlayerDungeonComp::quitCurDungeon(DungeonComp, DUNGEON_QUIT_NONE);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "recvSyncRsp",
        410);
      v9 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v10,
             (const char (*)[22])"game info not match. ");
      GCGGameBriefInfo::getDesc[abi:cxx11](&val, &this->game_info_);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v10);
    }
  }
};

// Line 417: range 00000000175C2F2E-00000000175C3071
void __cdecl PlayerGCGComp::onSyncTimer(PlayerGCGComp *const this)
{
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream *v2; // rcx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( PlayerGCGComp::isInGCGDungeon(this) )
  {
    if ( PlayerGCGComp::isInGame(this) )
    {
      PlayerGCGComp::sendSyncReq(this, 0);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      DungeonComp = Player::getDungeonComp(this->player_);
      if ( PlayerDungeonComp::isDungeonSceneUnSettled(DungeonComp) )
      {
        common::milog::MiLogStream::create(
          &v3,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/player_gcg_comp.cpp",
          "onSyncTimer",
          427);
        v2 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(&v3, (const char (*)[39])off_261586C0);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v2, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v3);
        PlayerGCGComp::trySettleDungeon(this);
      }
    }
  }
};

// Line 434: range 00000000175C3072-00000000175C3121
void __cdecl PlayerGCGComp::trySettleDungeon(PlayerGCGComp *const this)
{
  PlayerDungeonComp *DungeonComp; // rax
  PlayerDungeonComp *v2; // rax

  if ( PlayerGCGComp::isInGCGDungeon(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    DungeonComp = Player::getDungeonComp(this->player_);
    if ( PlayerDungeonComp::isDungeonSceneUnSettled(DungeonComp) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v2 = Player::getDungeonComp(this->player_);
      PlayerDungeonComp::settleCurDungeon(v2, DUNGEON_QUIT_NONE, DUNGEON_RESULT_SUCCEED);
    }
  }
};

// Line 446: range 00000000175C3122-00000000175C314E
void __cdecl PlayerGCGComp::onBanCardChange(PlayerGCGComp *const this, const std::set<unsigned int> *ban_card_set)
{
  GCGDeckSystem::refreshBanCard(&this->deck_system_, ban_card_set);
};

// Line 451: range 00000000175C3150-00000000175C3C60
void __cdecl PlayerGCGComp::createAndEnterGCGDungeon(PlayerGCGComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rcx
  GameserverService *v5; // rax
  uint32_t v6; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  PlayerSceneComp *SceneComp; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  DungeonScene *v15; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t SceneId; // esi
  PlayerDungeonComp *DungeonComp; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  DungeonScene *v23; // rax
  uint32_t entry_scene_id; // [rsp+18h] [rbp-138h]
  uint32_t entry_point_id; // [rsp+1Ch] [rbp-134h]
  ConstValueExcelConfigMgr *const_value_config_mgr; // [rsp+20h] [rbp-130h]
  DungeonSceneTeam *dungeon_scene_team; // [rsp+28h] [rbp-128h]
  std::shared_ptr<Player> v28; // [rsp+30h] [rbp-120h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-110h] BYREF
  char v30[240]; // [rsp+60h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 14 dungeon_id:458 64 16 17 cur_scene_ptr:459 96 16 21 dungeon_scene_ptr:465 128 24 11 context:491";
  *(_QWORD *)(v1 + 16) = PlayerGCGComp::createAndEnterGCGDungeon;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( !PlayerGCGComp::isInGame(this) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "createAndEnterGCGDungeon",
      454);
    common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v29, (const char (*)[14])off_261587E0);
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_54;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v28);
  const_value_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)->design_config.txt_config_mgr.const_value_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v28);
  *(_DWORD *)(v1 + 48) = ConstValueExcelConfigMgr::getGCGDungeonId(const_value_config_mgr);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
  if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v1 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "createAndEnterGCGDungeon",
      462);
    v4 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v29, (const char (*)[23])off_26158820);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v29);
    goto LABEL_53;
  }
  v5 = ServiceBox::findService<GameserverService>();
  v6 = (unsigned int)GameserverService::getGameThreadLocal(v5) + 568;
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  Scene::getOwnPlayer((const Scene *const)&v28);
  DungeonMgr::createDungeon((DungeonMgr *const)(v1 + 96), v6, (PlayerPtr *)*(unsigned int *)(v1 + 48));
  std::shared_ptr<Player>::~shared_ptr(&v28);
  if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v1 + 96))
    || (v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96)),
        DungeonScene::getDungeonType(v7) != DUNGEON_GCG) )
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "createAndEnterGCGDungeon",
      468);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v29,
           (const char (*)[35])"createDungeon failed, dungeon_id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    SceneComp = Player::getSceneComp(this->player_);
    entry_scene_id = PlayerSceneComp::getCurSceneId(SceneComp);
    entry_point_id = 0;
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->game_info_.business_type);
    }
    if ( this->game_info_.business_type == GCG_GAME_PVP )
    {
      entry_scene_id = ConstValueExcelConfigMgr::getGCGTavernSceneId(const_value_config_mgr);
      entry_point_id = ConstValueExcelConfigMgr::getGCGTavernEntryPoint(const_value_config_mgr);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      Uid = Player::getUid(this->player_);
      v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( Uid != Scene::getOwnerUid(v14) )
        entry_point_id = ConstValueExcelConfigMgr::getGCGTavernGuestEntryPoint(const_value_config_mgr);
    }
    v15 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    dungeon_scene_team = DungeonScene::getDungeonSceneTeam(v15);
    v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    SceneId = Scene::getSceneId((const Scene *const)v16);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    DungeonSceneTeam::initSceneTeam(dungeon_scene_team, this->player_, SceneId);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    DungeonComp = Player::getDungeonComp(this->player_);
    std::shared_ptr<DungeonScene>::shared_ptr(
      (std::shared_ptr<DungeonScene> *const)&v28,
      (const std::shared_ptr<DungeonScene> *)(v1 + 96));
    LOBYTE(DungeonComp) = PlayerDungeonComp::enterDungeon(
                            DungeonComp,
                            (DungeonScenePtr *)&v28,
                            entry_scene_id,
                            entry_point_id) != 0;
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)&v28);
    if ( !(_BYTE)DungeonComp )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "createAndEnterGCGDungeon",
        489);
      v21 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v29,
              (const char (*)[28])"enter dungeon. dungeon_id: ");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v1 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v22, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v29);
      *(_DWORD *)(v1 + 128) = 0;
      *(_DWORD *)(v1 + 132) = 0;
      *(_DWORD *)(v1 + 136) = 0;
      *(_DWORD *)(v1 + 140) = 0;
      *(_DWORD *)(v1 + 144) = 0;
      *(_DWORD *)(v1 + 148) = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->game_info_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->game_info_);
      }
      *(_DWORD *)(v1 + 128) = this->game_info_.game_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_info_.game_uid);
      }
      *(_DWORD *)(v1 + 132) = this->game_info_.game_uid;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->game_info_.business_type);
      }
      *(_DWORD *)(v1 + 136) = this->game_info_.business_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_info_.app_id);
      }
      *(_DWORD *)(v1 + 140) = this->game_info_.app_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->game_info_.thread_index);
      }
      *(_DWORD *)(v1 + 144) = this->game_info_.thread_index;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_info_.verify_code);
      }
      *(_DWORD *)(v1 + 148) = this->game_info_.verify_code;
      v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      DungeonScene::setDungeonExtraData<GCGDungeonContext>(v23, (const GCGDungeonContext *)(v1 + 128));
      goto LABEL_52;
    }
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "createAndEnterGCGDungeon",
      486);
    v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v29,
            (const char (*)[34])"enterDungeon failed, dungeon_id: ");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v1 + 48));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  operator<<(v11, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v29);
LABEL_52:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v1 + 96));
LABEL_53:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
LABEL_54:
  if ( v30 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 502: range 00000000175C3C62-00000000175C3FF9
void __cdecl PlayerGCGComp::tryGiveUpGame(PlayerGCGComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerDungeonComp *DungeonComp; // rax
  common::milog::MiLogStream v5; // [rsp+10h] [rbp-C0h] BYREF
  char v6[160]; // [rsp+30h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 7 req:514";
  *(_QWORD *)(v1 + 16) = PlayerGCGComp::tryGiveUpGame;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  if ( PlayerGCGComp::isInGame(this) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "tryGiveUpGame",
      507);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v5, (const char (*)[16])"tryGiveUpGame. ");
    common::milog::MiLogStream::~MiLogStream(&v5);
    if ( PlayerGCGComp::isInGCGDungeon(this) )
    {
      PlayerGCGComp::trySettleDungeon(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      DungeonComp = Player::getDungeonComp(this->player_);
      PlayerDungeonComp::quitCurDungeon(DungeonComp, DUNGEON_QUIT_NONE);
    }
    proto::ServerGCGGiveUpGameReq::ServerGCGGiveUpGameReq((proto::ServerGCGGiveUpGameReq *const)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->game_info_.game_uid);
    }
    proto::ServerGCGGiveUpGameReq::set_game_uid(
      (proto::ServerGCGGiveUpGameReq *const)(v1 + 48),
      this->game_info_.game_uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_info_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->game_info_);
    }
    proto::ServerGCGGiveUpGameReq::set_game_id(
      (proto::ServerGCGGiveUpGameReq *const)(v1 + 48),
      this->game_info_.game_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->game_info_.verify_code);
    }
    proto::ServerGCGGiveUpGameReq::set_verify_code(
      (proto::ServerGCGGiveUpGameReq *const)(v1 + 48),
      this->game_info_.verify_code);
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->game_info_.business_type);
    }
    proto::ServerGCGGiveUpGameReq::set_business_type(
      (proto::ServerGCGGiveUpGameReq *const)(v1 + 48),
      this->game_info_.business_type);
    PlayerGCGComp::sendToGameMode(this, (const google::protobuf::Message *)(v1 + 48));
    GCGGameBriefInfo::reset(&this->game_info_);
    proto::ServerGCGGiveUpGameReq::~ServerGCGGiveUpGameReq((proto::ServerGCGGiveUpGameReq *const)(v1 + 48));
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

// Line 525: range 00000000175C3FFA-00000000175C458D
void __cdecl PlayerGCGComp::onOfflineOpExec(PlayerGCGComp *const this, const proto::OfflineOpBin *bin)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  bool v5; // bl
  common::milog::MiLogStream *v6; // rbx
  const proto::OfflineOpGCGSettle *v7; // rax
  uint32_t game_uid; // ebx
  uint32_t app_id; // ebx
  uint32_t thread_index; // ebx
  uint32_t verify_code; // ebx
  proto::GCGGameBusinessType business_type; // ebx
  char v13; // al
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rbx
  std::allocator<char> __a; // [rsp+12h] [rbp-7Eh] BYREF
  bool is_notify; // [rsp+13h] [rbp-7Dh]
  proto::OfflineOpBin::DetailCase val; // [rsp+14h] [rbp-7Ch] BYREF
  const proto::GCGSettleData *settle_op; // [rsp+18h] [rbp-78h]
  common::milog::MiLogStream v20; // [rsp+20h] [rbp-70h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-50h] BYREF
  std::string name; // [rsp+60h] [rbp-30h] BYREF

  if ( proto::OfflineOpBin::detail_case(bin) == kGcgSettleOp )
  {
    std::allocator<char>::allocator(&__a, bin);
    std::string::basic_string<std::allocator<char>>(&name, "GCGSettleNotify", &__a);
    v5 = PlayerGCGComp::checkAndDecDropPackNum(this, &name) == 0;
    std::string::~string(&name);
    std::allocator<char>::~allocator(&__a);
    if ( !v5 )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "onOfflineOpExec",
        537);
      v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v21, (const char (*)[13])off_26158AC0);
      google::protobuf::Message::ShortDebugString[abi:cxx11](&name, &bin->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &name);
      std::string::~string(&name);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v7 = proto::OfflineOpBin::gcg_settle_op(bin);
      settle_op = proto::OfflineOpGCGSettle::settle_data(v7);
      is_notify = 0;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_info_.game_uid);
      }
      game_uid = this->game_info_.game_uid;
      if ( game_uid != proto::GCGSettleData::game_uid(settle_op) )
        goto LABEL_20;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_info_.app_id);
      }
      app_id = this->game_info_.app_id;
      if ( app_id != proto::GCGSettleData::app_id(settle_op) )
        goto LABEL_20;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->game_info_.thread_index);
      }
      thread_index = this->game_info_.thread_index;
      if ( thread_index != proto::GCGSettleData::thread_index(settle_op) )
        goto LABEL_20;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->game_info_.verify_code);
      }
      verify_code = this->game_info_.verify_code;
      if ( verify_code != proto::GCGSettleData::verify_code(settle_op) )
        goto LABEL_20;
      if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->game_info_.business_type);
      }
      business_type = this->game_info_.business_type;
      if ( business_type == proto::GCGSettleData::business_type(settle_op) )
        v13 = 1;
      else
LABEL_20:
        v13 = 0;
      if ( v13 )
      {
        is_notify = 1;
        PlayerGCGComp::resetGameInfo(this);
        if ( PlayerGCGComp::isInGCGDungeon(this) )
          PlayerGCGComp::trySettleDungeon(this);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/card_game/player_gcg_comp.cpp",
          "onOfflineOpExec",
          557);
        v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v20,
                (const char (*)[24])"settle data not match. ");
        GCGGameBriefInfo::getDesc[abi:cxx11]((std::string *)&v21, &this->game_info_);
        v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)&v21);
        google::protobuf::Message::ShortDebugString[abi:cxx11](&name, &bin->google::protobuf::Message);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &name);
        std::string::~string(&name);
        std::string::~string(&v21);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      PlayerGCGComp::settle(this, settle_op, is_notify);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "onOfflineOpExec",
      528);
    v2 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"extra case error :");
    val = proto::OfflineOpBin::detail_case(bin);
    v3 = common::milog::MiLogStream::operator<<<proto::OfflineOpBin::DetailCase,(proto::OfflineOpBin::DetailCase*)0>(
           v2,
           &val);
    v4 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v3, (const char (*)[2])" ");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&name, &bin->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, &name);
    std::string::~string(&name);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
};

// Line 565: range 00000000175C458E-00000000175C5CF7
void __cdecl PlayerGCGComp::settle(PlayerGCGComp *const this, const proto::GCGSettleData *settle_data, bool is_notify)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t Uid; // ecx
  google::protobuf::uint32 v7; // ecx
  const google::protobuf::Map<unsigned int,unsigned int> *v8; // rax
  google::protobuf::Map<unsigned int,unsigned int>::const_pointer v9; // rdx
  unsigned int *p_second; // rax
  google::protobuf::Map<unsigned int,unsigned int>::const_pointer v11; // rdx
  unsigned int *v12; // rax
  GCGBasic *Basic; // r15
  char v14; // r14
  uint32_t matched; // eax
  GCGLevelChallenge *LevelChallenge; // r15
  char v17; // r14
  uint32_t v18; // eax
  GCGTavernChallenge *TavernChallenge; // rax
  common::milog::MiLogStream *v20; // r14
  const unsigned int *v21; // rax
  _DWORD *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  uint32_t *v26; // rax
  uint32_t *v27; // rdx
  uint32_t *v28; // rax
  uint32_t *v29; // rdx
  uint32_t *v30; // rax
  uint32_t *v31; // rdx
  GCGWeekChallenge *WeekChallenge; // r15
  char v33; // r14
  uint32_t v34; // eax
  GCGLevelChallenge *v35; // r15
  char v36; // r14
  uint32_t v37; // eax
  GCGLevelChallenge *v38; // r15
  char v39; // r14
  uint32_t v40; // eax
  common::milog::MiLogStream *v41; // r14
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  GCGLevelChallenge *v45; // r15
  char v46; // r14
  uint32_t v47; // eax
  const google::protobuf::RepeatedField<unsigned int> *v48; // r14
  google::protobuf::RepeatedField<unsigned int> *v49; // rax
  google::protobuf::uint32 v50; // eax
  google::protobuf::uint32 v51; // eax
  signed int v52; // eax
  signed int v53; // eax
  google::protobuf::uint32 v55; // eax
  uint32_t v56; // eax
  uint32_t v57; // eax
  common::milog::MiLogStream *v58; // r14
  common::milog::MiLogStream *v59; // r14
  const google::protobuf::RepeatedField<unsigned int> *v60; // rax
  const unsigned int *v61; // r14
  const google::protobuf::RepeatedField<unsigned int> *v62; // rax
  const unsigned int *v63; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v64; // rax
  _DWORD *v65; // rdx
  common::milog::MiLogStream *v66; // r14
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  unsigned int *v69; // r8
  bool *v70; // r9
  PlayerEventComp *EventComp; // r14
  PlayerEventComp *v72; // r14
  bool is_add_proficiency; // [rsp+26h] [rbp-38Ah]
  uint32_t opponent_uid; // [rsp+28h] [rbp-388h]
  uint32_t score; // [rsp+2Ch] [rbp-384h]
  uint32_t opponent_score; // [rsp+30h] [rbp-380h]
  uint32_t npc_id; // [rsp+34h] [rbp-37Ch]
  uint32_t npc_refresh_time; // [rsp+38h] [rbp-378h]
  uint32_t npc_finish_time; // [rsp+3Ch] [rbp-374h]
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+40h] [rbp-370h] BYREF
  std::set<unsigned int>::iterator __for_end_1; // [rsp+48h] [rbp-368h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-360h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+58h] [rbp-358h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+60h] [rbp-350h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+68h] [rbp-348h]
  const google::protobuf::RepeatedField<unsigned int> *param_list_0; // [rsp+70h] [rbp-340h]
  const google::protobuf::RepeatedField<unsigned int> *param_list; // [rsp+78h] [rbp-338h]
  const google::protobuf::Map<unsigned int,unsigned int> *score_map; // [rsp+80h] [rbp-330h]
  const GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+88h] [rbp-328h]
  std::set<unsigned int> *__for_range_1; // [rsp+90h] [rbp-320h]
  const unsigned int *p_controller_id; // [rsp+98h] [rbp-318h]
  std::shared_ptr<Config> v93; // [rsp+A0h] [rbp-310h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+B0h] [rbp-300h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+C0h] [rbp-2F0h] BYREF
  common::milog::MiLogStream v96; // [rsp+E0h] [rbp-2D0h] BYREF
  char v97[688]; // [rsp+100h] [rbp-2B0h] BYREF

  v3 = (unsigned __int64)v97;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(640LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "12 48 1 10 is_win:566 64 4 22 self_controller_id:567 80 4 26 opponent_controller_id:568 96 4 10 "
                        "npc_id:632 112 4 16 challenge_id:591 128 16 13 event_ptr:760 160 16 32 challenge_progress_event_"
                        "ptr:764 192 24 8 iter:612 256 48 26 challenge_progress_map:588 336 48 33 finish_challenge_progre"
                        "ss_map:590 416 48 15 card_id_set:747 496 112 10 notify:596";
  *(_QWORD *)(v3 + 16) = PlayerGCGComp::settle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862732] = -218959118;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862739] = -202116109;
  *(_BYTE *)(v3 + 48) = 0;
  *(_DWORD *)(v3 + 64) = 1;
  *(_DWORD *)(v3 + 80) = 2;
  opponent_uid = 0;
  __for_range = proto::GCGSettleData::uid_map(settle_data);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v3 + 192),
    __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v3 + 192),
            &__for_end) )
  {
    p_controller_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)(v3 + 192));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)(p_controller_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_controller_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_controller_id + 1) >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4(p_controller_id + 1);
    }
    if ( Uid == p_controller_id[1] )
    {
      v7 = proto::GCGSettleData::winner_controller(settle_data);
      if ( *(_BYTE *)(((unsigned __int64)p_controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_controller_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(p_controller_id);
      }
      if ( v7 == *p_controller_id )
        *(_BYTE *)(v3 + 48) = 1;
      if ( *(_BYTE *)(((unsigned __int64)p_controller_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_controller_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_controller_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(p_controller_id);
      }
      if ( *p_controller_id != *(_DWORD *)(v3 + 64) )
        std::swap<unsigned int>((unsigned int *)(v3 + 64), (unsigned int *)(v3 + 80));
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)(p_controller_id + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_controller_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_controller_id + 1) >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4(p_controller_id + 1);
      }
      opponent_uid = p_controller_id[1];
    }
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++((google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)(v3 + 192));
  }
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 256));
  v8 = proto::GCGSettleData::challenge_progress_map(settle_data);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    (std::map<unsigned int,unsigned int> *)(v3 + 256),
    v8);
  std::map<unsigned int,unsigned int>::map(
    (std::map<unsigned int,unsigned int> *const)(v3 + 336),
    (const std::map<unsigned int,unsigned int> *)(v3 + 256));
  __for_range_0 = proto::GCGSettleData::forbid_finish_challenge_list(settle_data);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v3 + 112) = *__for_begin;
    std::map<unsigned int,unsigned int>::erase(
      (std::map<unsigned int,unsigned int> *const)(v3 + 336),
      (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 112));
    ++__for_begin;
  }
  proto::GCGSettleNotify::GCGSettleNotify((proto::GCGSettleNotify *const)(v3 + 496));
  switch ( proto::GCGSettleData::business_type(settle_data) )
  {
    case 2u:
      score_map = proto::GCGSettleData::score_map(settle_data);
      score = 0;
      opponent_score = 0;
      google::protobuf::Map<unsigned int,unsigned int>::find(
        (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v3 + 192),
        score_map,
        (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 64));
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, score_map);
      if ( google::protobuf::operator!=(
             (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v3 + 192),
             &__for_end) )
      {
        v9 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator->((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)(v3 + 192));
        p_second = &v9->second;
        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_second);
        }
        score = v9->second;
      }
      google::protobuf::Map<unsigned int,unsigned int>::find(
        (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v3 + 192),
        score_map,
        (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 80));
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, score_map);
      if ( google::protobuf::operator!=(
             (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v3 + 192),
             &__for_end) )
      {
        v11 = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator->((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)(v3 + 192));
        v12 = &v11->second;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        opponent_score = v11->second;
      }
      Basic = PlayerGCGComp::getBasic(this);
      v14 = *(_BYTE *)(v3 + 48);
      matched = proto::GCGSettleData::match_id(settle_data);
      GCGBasic::onMatchSettle(Basic, matched, v14, score, opponent_score, opponent_uid == 0);
      goto LABEL_65;
    case 4u:
      LevelChallenge = PlayerGCGComp::getLevelChallenge(this);
      v17 = *(_BYTE *)(v3 + 48);
      v18 = proto::GCGSettleData::game_id(settle_data);
      GCGLevelChallenge::onSettle(
        LevelChallenge,
        v18,
        v17,
        (const std::map<unsigned int,unsigned int> *)(v3 + 336),
        (proto::GCGSettleNotify *)(v3 + 496));
      TavernChallenge = PlayerGCGComp::getTavernChallenge(this);
      GCGTavernChallenge::settle(TavernChallenge, *(_BYTE *)(v3 + 48));
      goto LABEL_65;
    case 5u:
      *(_DWORD *)(v3 + 96) = 0;
      param_list = proto::GCGSettleData::custom_param_list(settle_data);
      if ( google::protobuf::RepeatedField<unsigned int>::empty(param_list) )
      {
        common::milog::MiLogStream::create(
          &v96,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/player_gcg_comp.cpp",
          "settle",
          636);
        v20 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                &v96,
                (const char (*)[62])"GCG_GAME_CONST_CHALLENGE settle custom param list empty, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        *(_DWORD *)(v3 + 112) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v96);
      }
      else
      {
        v21 = google::protobuf::RepeatedField<unsigned int>::operator[](param_list, 0);
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        *(_DWORD *)(v3 + 96) = *v22;
      }
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "settle",
        642);
      v23 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v96,
              (const char (*)[33])"GCG_GAME_CONST_CHALLENGE npc_id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 96));
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_63;
    case 6u:
    case 7u:
      v35 = PlayerGCGComp::getLevelChallenge(this);
      v36 = *(_BYTE *)(v3 + 48);
      v37 = proto::GCGSettleData::game_id(settle_data);
      GCGLevelChallenge::onSettle(
        v35,
        v37,
        v36,
        (const std::map<unsigned int,unsigned int> *)(v3 + 336),
        (proto::GCGSettleNotify *)(v3 + 496));
      goto LABEL_65;
    case 8u:
      param_list_0 = proto::GCGSettleData::custom_param_list(settle_data);
      if ( google::protobuf::RepeatedField<unsigned int>::size(param_list_0) > 2 )
      {
        v26 = (uint32_t *)google::protobuf::RepeatedField<unsigned int>::operator[](param_list_0, 0);
        v27 = v26;
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v26);
        }
        npc_id = *v27;
        v28 = (uint32_t *)google::protobuf::RepeatedField<unsigned int>::operator[](param_list_0, 1);
        v29 = v28;
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v28);
        }
        npc_refresh_time = *v29;
        v30 = (uint32_t *)google::protobuf::RepeatedField<unsigned int>::operator[](param_list_0, 2);
        v31 = v30;
        if ( *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v30 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v30);
        }
        npc_finish_time = *v31;
        WeekChallenge = PlayerGCGComp::getWeekChallenge(this);
        v33 = *(_BYTE *)(v3 + 48);
        v34 = proto::GCGSettleData::game_id(settle_data);
        GCGWeekChallenge::onSettle(
          WeekChallenge,
          v34,
          v33,
          npc_id,
          npc_refresh_time,
          npc_finish_time,
          (const std::map<unsigned int,unsigned int> *)(v3 + 336),
          (proto::GCGSettleNotify *)(v3 + 496));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v96,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/card_game/player_gcg_comp.cpp",
          "settle",
          650);
        v25 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                &v96,
                (const char (*)[66])"GCG_GAME_WEEK_CHALLENGE settle custom param list size error, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
LABEL_63:
        *(_DWORD *)(v3 + 112) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream(&v96);
      }
LABEL_65:
      if ( is_notify )
      {
        v48 = proto::GCGSettleData::forbid_finish_challenge_list(settle_data);
        v49 = proto::GCGSettleNotify::mutable_forbid_finish_challenge_list((proto::GCGSettleNotify *const)(v3 + 496));
        google::protobuf::RepeatedField<unsigned int>::operator=(v49, v48);
        v50 = proto::GCGSettleData::game_id(settle_data);
        proto::GCGSettleNotify::set_game_id((proto::GCGSettleNotify *const)(v3 + 496), v50);
        proto::GCGSettleNotify::set_is_win((proto::GCGSettleNotify *const)(v3 + 496), *(_BYTE *)(v3 + 48));
        v51 = proto::GCGSettleData::winner_controller(settle_data);
        proto::GCGSettleNotify::set_win_controller_id((proto::GCGSettleNotify *const)(v3 + 496), v51);
        v52 = proto::GCGSettleData::reason(settle_data);
        proto::GCGSettleNotify::set_reason((proto::GCGSettleNotify *const)(v3 + 496), (proto::GCGEndReason)v52);
        v53 = proto::GCGSettleData::business_type(settle_data);
        proto::GCGSettleNotify::set_business_type(
          (proto::GCGSettleNotify *const)(v3 + 496),
          (proto::GCGGameBusinessType)v53);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 496));
      }
      if ( !*(_BYTE *)(v3 + 48) || proto::GCGSettleData::card_group_id(settle_data) )
        goto LABEL_92;
      is_add_proficiency = 0;
      v55 = proto::GCGSettleData::business_type(settle_data);
      if ( v55 > 0xB )
        goto LABEL_82;
      if ( v55 >= 5 )
      {
        v56 = proto::GCGSettleData::game_id(settle_data);
        if ( !GCGLevelChallenge::isLevelHasWin(&this->level_challenge_, v56) )
        {
          v57 = proto::GCGSettleData::game_id(settle_data);
          GCGLevelChallenge::recordLevelwin(&this->level_challenge_, v57);
          is_add_proficiency = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v96,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/player_gcg_comp.cpp",
            "settle",
            734);
          v58 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v96,
                  (const char (*)[25])"level has win, level_id:");
          *(_DWORD *)(v3 + 112) = proto::GCGSettleData::game_id(settle_data);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, (const unsigned int *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream(&v96);
        }
      }
      else if ( v55 > 1 )
      {
        if ( v55 - 2 > 2 )
        {
LABEL_82:
          common::milog::MiLogStream::create(
            &v96,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/card_game/player_gcg_comp.cpp",
            "settle",
            740);
          v59 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v96,
                  (const char (*)[24])"invalid bussiness type:");
          *(_DWORD *)(v3 + 112) = proto::GCGSettleData::business_type(settle_data);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream(&v96);
        }
        else
        {
          is_add_proficiency = 1;
        }
      }
      if ( is_add_proficiency )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v93);
        gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v93)->design_config.txt_config_mgr.gcg_game_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v93);
        v60 = proto::GCGSettleData::card_id_list(settle_data);
        v61 = google::protobuf::RepeatedField<unsigned int>::begin(v60);
        v62 = proto::GCGSettleData::card_id_list(settle_data);
        v63 = google::protobuf::RepeatedField<unsigned int>::end(v62);
        std::set<unsigned int>::set<unsigned int const*>((std::set<unsigned int> *const)(v3 + 416), v61, v63);
        __for_range_1 = (std::set<unsigned int> *)(v3 + 416);
        __for_begin_0._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 416))._M_node;
        __for_end_1._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v3 + 416))._M_node;
        while ( std::operator!=(&__for_begin_0, &__for_end_1) )
        {
          v64 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
          v65 = v64;
          if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v64);
          }
          *(_DWORD *)(v3 + 96) = *v65;
          if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *(_DWORD *)(v3 + 96)) == GCG_CARD_CHARACTER )
          {
            GCGDeckSystem::addCardProficiency(&this->deck_system_, *(_DWORD *)(v3 + 96));
            common::milog::MiLogStream::create(
              &v96,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/card_game/player_gcg_comp.cpp",
              "settle",
              753);
            v66 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v96,
                    (const char (*)[32])off_26158F00);
            *(_DWORD *)(v3 + 112) = proto::GCGSettleData::game_id(settle_data);
            v67 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v66,
                    (const unsigned int *)(v3 + 112));
            v68 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v67, (const char (*)[10])" card_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v68, (const unsigned int *)(v3 + 96));
            common::milog::MiLogStream::~MiLogStream(&v96);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 416));
      }
LABEL_92:
      *(_DWORD *)(v3 + 112) = proto::GCGSettleData::business_type(settle_data);
      *(_DWORD *)(v3 + 96) = proto::GCGSettleData::game_id(settle_data);
      common::tools::perf::make_shared<GCGLevelSettleEvent,unsigned int,unsigned int,bool &>(
        (unsigned int *)(v3 + 160),
        (unsigned int *)(v3 + 96),
        (bool *)(v3 + 112),
        (unsigned int *)(v3 + 48),
        v69,
        v70);
      std::shared_ptr<BaseEvent>::shared_ptr<GCGLevelSettleEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v3 + 128),
        (std::shared_ptr<GCGLevelSettleEvent> *)(v3 + 160));
      std::shared_ptr<GCGLevelSettleEvent>::~shared_ptr((std::shared_ptr<GCGLevelSettleEvent> *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, (const std::shared_ptr<BaseEvent> *)(v3 + 128));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      common::tools::perf::make_shared<GCGChallengeProgressEvent,bool &,std::map<unsigned int,unsigned int> &>(
        (bool *)&p_event_ptr,
        (std::map<unsigned int,unsigned int> *)(v3 + 48),
        (bool *)(v3 + 256),
        (std::map<unsigned int,unsigned int> *)(v3 + 48));
      std::shared_ptr<BaseEvent>::shared_ptr<GCGChallengeProgressEvent,void>(
        (std::shared_ptr<BaseEvent> *const)(v3 + 160),
        (std::shared_ptr<GCGChallengeProgressEvent> *)&p_event_ptr);
      std::shared_ptr<GCGChallengeProgressEvent>::~shared_ptr((std::shared_ptr<GCGChallengeProgressEvent> *const)&p_event_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v72 = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr(&p_event_ptr, (const std::shared_ptr<BaseEvent> *)(v3 + 160));
      PlayerEventComp::notifyEvent(v72, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 160));
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 128));
      proto::GCGSettleNotify::~GCGSettleNotify((proto::GCGSettleNotify *const)(v3 + 496));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 336));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 256));
      if ( v97 == (char *)v3 )
      {
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8024) = 0LL;
        *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
        *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
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
      }
      return;
    case 9u:
      v38 = PlayerGCGComp::getLevelChallenge(this);
      v39 = *(_BYTE *)(v3 + 48);
      v40 = proto::GCGSettleData::game_id(settle_data);
      GCGLevelChallenge::onSettle(
        v38,
        v40,
        v39,
        (const std::map<unsigned int,unsigned int> *)(v3 + 336),
        (proto::GCGSettleNotify *)(v3 + 496));
      common::milog::MiLogStream::create(
        &v96,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "settle",
        676);
      v41 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v96,
              (const char (*)[43])"GCG_GAME_BREAK_CHALLENGE settle, level_id:");
      *(_DWORD *)(v3 + 96) = proto::GCGSettleData::game_id(settle_data);
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v3 + 96));
      v43 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v42, (const char (*)[9])" is_win:");
      v44 = common::milog::MiLogStream::operator<<(v43, *(_BYTE *)(v3 + 48));
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v44, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      goto LABEL_63;
    case 0xBu:
      v45 = PlayerGCGComp::getLevelChallenge(this);
      v46 = *(_BYTE *)(v3 + 48);
      v47 = proto::GCGSettleData::game_id(settle_data);
      GCGLevelChallenge::onGuideLevelSettle(v45, v47, v46);
      goto LABEL_65;
    default:
      goto LABEL_65;
  }
};

// Line 769: range 00000000175C5CF8-00000000175C5E63
void __cdecl PlayerGCGComp::resetGameInfo(PlayerGCGComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  __int64 v2; // rdx
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-50h] BYREF
  std::string val; // [rsp+40h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/player_gcg_comp.cpp",
    "resetGameInfo",
    770);
  v1 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v3, (const char (*)[16])"resetGameInfo. ");
  GCGGameBriefInfo::getDesc[abi:cxx11](&val, &this->game_info_);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v3);
  if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->game_info_.business_type);
  }
  GCGGameBriefInfo::reset(&this->game_info_);
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->last_enter_game_time_, (((_BYTE)this + 52) & 7u) + 3, v2);
  this->last_enter_game_time_ = 0;
  PlayerGCGComp::notifyGameInfo(this, 0);
};

// Line 778: range 00000000175C5E64-00000000175C5ED3
void __cdecl PlayerGCGComp::afterSetGameInfo(PlayerGCGComp *const this)
{
  if ( PlayerGCGComp::isInGame(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->game_info_.business_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->game_info_.business_type);
    }
    if ( this->game_info_.business_type != GCG_GAME_TAVERN_CHALLENGE )
      GCGTavernChallenge::onEnterOtherGame(&this->tavern_challenge_);
  }
};

// Line 789: range 00000000175C5ED4-00000000175C6678
int32_t __cdecl PlayerGCGComp::checkServerGCGVerify(
        const PlayerGCGComp *const this,
        const proto::ServerGCGVerify *proto)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t v5; // r14d
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  GCGDungeonContext *v8; // rdx
  uint32_t *p_game_uid; // rax
  uint32_t game_uid; // r14d
  GCGDungeonContext *v11; // rdx
  uint32_t *p_app_id; // rax
  uint32_t app_id; // r14d
  GCGDungeonContext *v14; // rdx
  uint32_t *p_thread_index; // rax
  uint32_t thread_index; // r14d
  GCGDungeonContext *v17; // rdx
  uint32_t *p_verify_code; // rax
  uint32_t verify_code; // r14d
  char v20; // al
  GCGDungeonContext *v21; // rdx
  uint32_t *v22; // rax
  uint32_t v23; // ecx
  GCGDungeonContext *v24; // rdx
  uint32_t *v25; // rax
  uint32_t v26; // ecx
  GCGDungeonContext *v27; // rdx
  uint32_t *v28; // rax
  uint32_t v29; // ecx
  GCGDungeonContext *v30; // rdx
  uint32_t *v31; // rax
  uint32_t v32; // ecx
  char v33; // al
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // r14
  int32_t result; // eax
  common::milog::MiLogStream v38; // [rsp+10h] [rbp-110h] BYREF
  std::string val; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-D0h] BYREF
  char v41[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 dungeon_scene_ptr:790 64 28 15 context_opt:799";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::checkServerGCGVerify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = 0x4000000;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getDungeonComp(this->player_);
  PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v2 + 32));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 32), 0LL) )
  {
    v5 = 12119;
  }
  else
  {
    v6 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::getDungeonType(v6) == DUNGEON_GCG )
    {
      v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      DungeonScene::getDungeonExtraData<GCGDungeonContext>((std::optional<GCGDungeonContext> *)(v2 + 64), v7);
      if ( !std::optional<GCGDungeonContext>::has_value((const std::optional<GCGDungeonContext> *const)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v40,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/card_game/player_gcg_comp.cpp",
          "checkServerGCGVerify",
          802);
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v40, (const char (*)[19])"getExtraData fail.");
        common::milog::MiLogStream::~MiLogStream(&v40);
        v5 = -1;
      }
      else
      {
        v8 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
        p_game_uid = &v8->game_uid;
        if ( *(_BYTE *)(((unsigned __int64)p_game_uid >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_game_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_game_uid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_game_uid);
        }
        game_uid = v8->game_uid;
        if ( game_uid != proto::ServerGCGVerify::game_uid(proto) )
          goto LABEL_25;
        v11 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
        p_app_id = &v11->app_id;
        if ( *(_BYTE *)(((unsigned __int64)p_app_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_app_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_app_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_app_id);
        }
        app_id = v11->app_id;
        if ( app_id != proto::ServerGCGVerify::app_id(proto) )
          goto LABEL_25;
        v14 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
        p_thread_index = &v14->thread_index;
        if ( *(_BYTE *)(((unsigned __int64)p_thread_index >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_thread_index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_thread_index >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load4(p_thread_index);
        }
        thread_index = v14->thread_index;
        if ( thread_index != proto::ServerGCGVerify::thread_index(proto) )
          goto LABEL_25;
        v17 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
        p_verify_code = &v17->verify_code;
        if ( *(_BYTE *)(((unsigned __int64)p_verify_code >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_verify_code & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_verify_code >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(p_verify_code);
        }
        verify_code = v17->verify_code;
        if ( verify_code == proto::ServerGCGVerify::verify_code(proto) )
          v20 = 1;
        else
LABEL_25:
          v20 = 0;
        if ( v20 )
        {
          v5 = 0;
        }
        else
        {
          v21 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
          v22 = &v21->game_uid;
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v22);
          }
          v23 = v21->game_uid;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.game_uid >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->game_info_.game_uid);
          }
          if ( v23 != this->game_info_.game_uid )
            goto LABEL_49;
          v24 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
          v25 = &v24->app_id;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          v26 = v24->app_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.app_id >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->game_info_.app_id);
          }
          if ( v26 != this->game_info_.app_id )
            goto LABEL_49;
          v27 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
          v28 = &v27->thread_index;
          if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v28);
          }
          v29 = v27->thread_index;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->game_info_.thread_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->game_info_.thread_index);
          }
          if ( v29 != this->game_info_.thread_index )
            goto LABEL_49;
          v30 = std::optional<GCGDungeonContext>::operator->((std::optional<GCGDungeonContext> *const)(v2 + 64));
          v31 = &v30->verify_code;
          if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v31);
          }
          v32 = v30->verify_code;
          if ( *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_info_.verify_code >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->game_info_.verify_code);
          }
          if ( v32 == this->game_info_.verify_code )
            v33 = 1;
          else
LABEL_49:
            v33 = 0;
          if ( v33 )
          {
            common::milog::MiLogStream::create(
              &v38,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/card_game/player_gcg_comp.cpp",
              "checkServerGCGVerify",
              818);
            v34 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    &v38,
                    (const char (*)[19])"verify not match. ");
            google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &proto->google::protobuf::Message);
            v35 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v34, &val);
            v36 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v35, (const char (*)[8])" info: ");
            GCGGameBriefInfo::getDesc[abi:cxx11]((std::string *)&v40, &this->game_info_);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, (const std::string *)&v40);
            std::string::~string(&v40);
            std::string::~string(&val);
            common::milog::MiLogStream::~MiLogStream(&v38);
          }
          v5 = -1;
        }
      }
    }
    else
    {
      v5 = 12119;
    }
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
  result = v5;
  if ( v41 == (char *)v2 )
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

// Line 824: range 00000000175C667A-00000000175C6716
bool __cdecl PlayerGCGComp::isInGCGDungeon(const PlayerGCGComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  PlayerDungeonComp *DungeonComp; // rax
  uint32_t dungeon_id; // [rsp+18h] [rbp-18h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  dungeon_id = ConstValueExcelConfigMgr::getGCGDungeonId(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  DungeonComp = Player::getDungeonComp(this->player_);
  return PlayerDungeonComp::getCurDungeonId(DungeonComp) == dungeon_id;
};

// Line 831: range 00000000175C6718-00000000175C7309
int32_t __cdecl PlayerGCGComp::checkCanEnterGame(PlayerGCGComp *const this, const GCGEnterCheckOption *option)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  bool HasDefaultDeck; // r14
  const data::GCGPlayingExcelConfigMgrBase *v11; // rcx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  data::SceneType SceneType; // eax
  Scene *v15; // rax
  SceneGalleryComp *GalleryComp; // rax
  char v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  uint32_t SceneId; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  bool v21; // r15
  PlayerMatchComp *MatchComp; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t OwnerUid; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  char v27; // r15
  int32_t result; // eax
  bool is_ignore_deck; // [rsp+26h] [rbp-11Ah]
  bool is_ignore_resource; // [rsp+27h] [rbp-119h]
  GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+28h] [rbp-118h]
  const data::GCGGameRewardExcelConfig *game_reward_config_ptr; // [rsp+30h] [rbp-110h]
  const PlayerSceneComp *scene_comp; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v34; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-F0h] BYREF
  char v36[208]; // [rsp+70h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 now:832 64 16 13 scene_ptr:865 96 24 10 notify:858";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::checkCanEnterGame;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_enter_game_time_);
  }
  if ( this->last_enter_game_time_ + 10 > *(_DWORD *)(v2 + 48) )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "checkCanEnterGame",
      835);
    v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v35,
           (const char (*)[27])"enter game frequent. now: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v6,
           (const char (*)[25])" last_enter_game_time_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->last_enter_game_time_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v8 = 12124;
    goto LABEL_98;
  }
  if ( *(_BYTE *)(((unsigned __int64)&option->is_ignore_deck >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)option + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_ignore_deck >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&option->is_ignore_deck);
  }
  is_ignore_deck = option->is_ignore_deck;
  if ( *(_BYTE *)(((unsigned __int64)option >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)option & 7) + 3) >= *(_BYTE *)(((unsigned __int64)option >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(option);
  }
  if ( option->level_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    p_gcg_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.gcg_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)option >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)option & 7) + 3) >= *(_BYTE *)(((unsigned __int64)option >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(option);
    }
    HasDefaultDeck = GCGGameExcelConfigMgr::isLevelHasDefaultDeck(p_gcg_game_config_mgr, option->level_id);
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( HasDefaultDeck )
      is_ignore_deck = 1;
  }
  is_ignore_resource = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  v11 = gcg_playing_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)option >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)option & 7) + 3) >= *(_BYTE *)(((unsigned __int64)option >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(option);
  }
  game_reward_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(v11, option->level_id);
  if ( game_reward_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&game_reward_config_ptr->is_ignore_resource >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)game_reward_config_ptr + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&game_reward_config_ptr->is_ignore_resource >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load1(&game_reward_config_ptr->is_ignore_resource);
    }
    is_ignore_resource = game_reward_config_ptr->is_ignore_resource;
  }
  if ( is_ignore_resource || PlayerGCGComp::isResourceComplete(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    scene_comp = Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 64));
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 64), 0LL) )
    {
      v8 = 555;
LABEL_97:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
      goto LABEL_98;
    }
    if ( *(_BYTE *)(((unsigned __int64)&option->is_in_gcg_dungeon >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)option + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_in_gcg_dungeon >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&option->is_in_gcg_dungeon);
    }
    if ( !option->is_in_gcg_dungeon )
    {
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      SceneType = Scene::getSceneType(v13);
      if ( !SceneExcelConfigMgr::isPlayerScene(SceneType) )
      {
        v8 = 12105;
        goto LABEL_97;
      }
      v15 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      GalleryComp = Scene::getGalleryComp(v15);
      if ( SceneGalleryComp::isAnyGalleryStarted(GalleryComp) )
      {
        v8 = 523;
        goto LABEL_97;
      }
      v17 = 0;
      if ( *(_BYTE *)(((unsigned __int64)&option->is_check_tavern >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)option + 7) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_check_tavern >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&option->is_check_tavern);
      }
      v21 = 0;
      if ( option->is_check_tavern )
      {
        v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        SceneId = Scene::getSceneId(v18);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v34);
        v17 = 1;
        v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
        if ( SceneId != ConstValueExcelConfigMgr::getGCGTavernSceneId(&v20->design_config.txt_config_mgr.const_value_config_mgr) )
          v21 = 1;
      }
      if ( v17 )
        std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( v21 )
      {
        v8 = 12122;
        goto LABEL_97;
      }
    }
    else if ( !PlayerGCGComp::isInGCGDungeon(this) )
    {
      v8 = 12119;
      goto LABEL_97;
    }
    if ( *(_BYTE *)(((unsigned __int64)&option->is_ignore_transfer >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)option + 11) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_ignore_transfer >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load1(&option->is_ignore_transfer);
    }
    if ( !option->is_ignore_transfer && PlayerSceneComp::isInTransfer(scene_comp) )
    {
      v8 = 170;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&option->is_ignore_match >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)option + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_ignore_match >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_load1(&option->is_ignore_match);
      }
      if ( option->is_ignore_match )
        goto LABEL_73;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      MatchComp = Player::getMatchComp(this->player_);
      if ( PlayerMatchComp::isInMatch(MatchComp) )
      {
        v8 = 12134;
      }
      else
      {
LABEL_73:
        if ( *(_BYTE *)(((unsigned __int64)&option->is_ignore_self_world >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)option + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_ignore_self_world >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load1(&option->is_ignore_self_world);
        }
        if ( option->is_ignore_self_world )
          goto LABEL_103;
        v24 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        OwnerUid = Scene::getOwnerUid(v24);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        if ( OwnerUid == Player::getUid(this->player_) )
        {
LABEL_103:
          if ( !is_ignore_deck && !PlayerGCGComp::isCurDeckValid(this) )
          {
            v8 = 12111;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&option->is_ignore_client_version >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)option + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_ignore_client_version >> 3)
                                                                 + 0x7FFF8000) )
            {
              __asan_report_load1(&option->is_ignore_client_version);
            }
            if ( option->is_ignore_client_version )
              goto LABEL_96;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v34);
            v26 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34);
            if ( *(char *)(((unsigned __int64)&v26->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
              v26 = (std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load1(&v26->is_client_data_version_not_latest_ban_gcg);
            if ( !v26->is_client_data_version_not_latest_ban_gcg )
              goto LABEL_93;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            if ( !Player::isClientDataVersionLatest(this->player_) )
              v27 = 1;
            else
LABEL_93:
              v27 = 0;
            std::shared_ptr<Config>::~shared_ptr(&v34);
            if ( v27 )
            {
              common::milog::MiLogStream::create(
                &v35,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/card_game/player_gcg_comp.cpp",
                "checkCanEnterGame",
                921);
              common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v35,
                (const char (*)[49])"[MATCH] player client_data_version is not latest");
              common::milog::MiLogStream::~MiLogStream(&v35);
              v8 = 12135;
            }
            else
            {
LABEL_96:
              v8 = 0;
            }
          }
        }
        else
        {
          v8 = 12103;
        }
      }
    }
    goto LABEL_97;
  }
  if ( *(_BYTE *)(((unsigned __int64)&option->is_ignore_resource_notify >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)option + 10) & 7) >= *(_BYTE *)(((unsigned __int64)&option->is_ignore_resource_notify >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load1(&option->is_ignore_resource_notify);
  }
  if ( !option->is_ignore_resource_notify )
  {
    proto::GCGGameCreateFailReasonNotify::GCGGameCreateFailReasonNotify((proto::GCGGameCreateFailReasonNotify *const)(v2 + 96));
    proto::GCGGameCreateFailReasonNotify::set_reason(
      (proto::GCGGameCreateFailReasonNotify *const)(v2 + 96),
      GCGGameCreateFailReasonNotify_GCGGameCreateReason_REASON_RESOURCE_NOT_COMPLETE);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
    proto::GCGGameCreateFailReasonNotify::~GCGGameCreateFailReasonNotify((proto::GCGGameCreateFailReasonNotify *const)(v2 + 96));
  }
  v8 = 12112;
LABEL_98:
  result = v8;
  if ( v36 == (char *)v2 )
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

// Line 929: range 00000000175C730A-00000000175C7337
void __cdecl PlayerGCGComp::onMatchConfirmRefuse(PlayerGCGComp *const this, uint32_t match_id)
{
  GCGBasic *Basic; // rax

  Basic = PlayerGCGComp::getBasic(this);
  GCGBasic::onMatchConfirmRefuse(Basic, match_id);
};

// Line 934: range 00000000175C7338-00000000175C7394
void __cdecl PlayerGCGComp::onBeginEnterGame(PlayerGCGComp *const this)
{
  uint32_t Now; // edi
  __int64 v2; // rdx

  Now = common::tools::TimeUtils::getNow();
  v2 = (*(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
  {
    Now = (_DWORD)this + 1332;
    __asan_report_store4(&this->last_enter_game_time_, (((_BYTE)this + 52) & 7u) + 3, v2);
  }
  this->last_enter_game_time_ = Now;
};

// Line 939: range 00000000175C7396-00000000175C73EF
void __cdecl PlayerGCGComp::clearEnterGameTime(PlayerGCGComp *const this)
{
  __int64 v1; // rdx

  v1 = (*(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_enter_game_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v1 )
    __asan_report_store4(&this->last_enter_game_time_, (((_BYTE)this + 52) & 7u) + 3, v1);
  this->last_enter_game_time_ = 0;
};

// Line 944: range 00000000175C73F0-00000000175C7916
__int64 __fastcall PlayerGCGComp::checkCanMatch(
        PlayerGCGComp *const this,
        uint32_t match_id,
        proto::PlayerStartMatchRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isGCGMatchClosed; // r14
  common::milog::MiLogStream *v11; // r13
  GCGBasic *Basic; // rax
  common::milog::MiLogStream *v13; // rax
  GCGBasic *v14; // rax
  unsigned int val; // [rsp+28h] [rbp-C8h] BYREF
  uint32_t ban_match_expire_time; // [rsp+2Ch] [rbp-C4h]
  uint32_t punish_end_time; // [rsp+30h] [rbp-C0h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+38h] [rbp-B8h]
  GCGEnterCheckOption option; // [rsp+44h] [rbp-ACh] BYREF
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 match_id:943";
  *(_QWORD *)(v3 + 16) = PlayerGCGComp::checkCanMatch;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = match_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0xCE6u) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "checkCanMatch",
      947);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v22,
           (const char (*)[36])"OPEN_STATE_GCG_MATCH not open, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 141LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    isGCGMatchClosed = FeatureSwitchMgr::isGCGMatchClosed(&v9->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( isGCGMatchClosed )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "checkCanMatch",
        952);
      v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v22, (const char (*)[23])off_26159360);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 142LL;
    }
    else
    {
      Basic = PlayerGCGComp::getBasic(this);
      ban_match_expire_time = GCGBasic::getBanMatchExpireTime(Basic);
      if ( common::tools::TimeUtils::getNow() >= ban_match_expire_time )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.gcg_playing_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( data::GCGPlayingExcelConfigMgrBase::findGCGMatchExcelConfig(gcg_playing_config_mgr, *(_DWORD *)(v3 + 32)) )
        {
          v14 = PlayerGCGComp::getBasic(this);
          punish_end_time = GCGBasic::getMatchPunishEndTime(v14, *(_DWORD *)(v3 + 32));
          if ( common::tools::TimeUtils::getNow() >= punish_end_time )
          {
            *(_QWORD *)&option.level_id = 0LL;
            *(_DWORD *)&option.is_in_gcg_dungeon = 0;
            result = (unsigned int)PlayerGCGComp::checkCanEnterGame(this, &option);
          }
          else
          {
            proto::PlayerStartMatchRsp::set_punish_end_time(rsp_0, punish_end_time);
            result = 12115LL;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/card_game/player_gcg_comp.cpp",
            "checkCanMatch",
            965);
          v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v22,
                  (const char (*)[41])"findGCGMatchExcelConfig fail. match_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v22);
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        proto::PlayerStartMatchRsp::set_punish_end_time(rsp_0, ban_match_expire_time);
        result = 12147LL;
      }
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

// Line 979: range 00000000175C7918-00000000175C7A4B
bool __cdecl PlayerGCGComp::isCurDeckValid(const PlayerGCGComp *const this)
{
  uint32_t cur_deck_id; // [rsp+1Ch] [rbp-34h]
  common::milog::MiLogStream v3; // [rsp+20h] [rbp-30h] BYREF

  cur_deck_id = GCGDeckSystem::getCurDeckId(&this->deck_system_);
  if ( cur_deck_id )
  {
    if ( (unsigned __int8)GCGDeckSystem::isDeckValid(&this->deck_system_, cur_deck_id) != 1 )
    {
      common::milog::MiLogStream::create(
        &v3,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "isCurDeckValid",
        988);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v3, (const char (*)[18])off_26159480);
      common::milog::MiLogStream::~MiLogStream(&v3);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/card_game/player_gcg_comp.cpp",
      "isCurDeckValid",
      983);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v3, (const char (*)[17])"cur_deck_id is 0");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 0;
  }
};

// Line 995: range 00000000175C7A4C-00000000175C7AD6
void __cdecl PlayerGCGComp::fillGCGPlayerData(
        const PlayerGCGComp *const this,
        uint32_t game_id,
        proto::GCGPlayerData *data)
{
  PlayerMpComp *MpComp; // rbx
  proto::OnlinePlayerInfo *v4; // rax
  proto::GCGDuelExtra *v5; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  v4 = proto::GCGPlayerData::mutable_player_info(data);
  PlayerMpComp::fillOnlinePlayerInfo(MpComp, v4);
  v5 = proto::GCGPlayerData::mutable_duel_extra(data);
  PlayerGCGComp::fillGCGDuelExtra(this, game_id, v5);
};

// Line 1001: range 00000000175C7AD8-00000000175C8377
void __cdecl PlayerGCGComp::fillGCGDuelExtra(
        const PlayerGCGComp *const this,
        uint32_t game_id,
        proto::GCGDuelExtra *extra)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const GCGBasic *Basic; // rax
  uint32_t Level; // edx
  std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  uint32_t *p_field_id; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rax
  _DWORD *v14; // rdx
  std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  const unsigned int *M_current; // r15
  std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const unsigned int *v18; // r14
  google::protobuf::RepeatedField<unsigned int> *v19; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v20; // rax
  _DWORD *v21; // rdx
  char *v22; // rsi
  unsigned int *v23; // rax
  data::GCGCardFaceType *v24; // rdx
  char v25; // cl
  google::protobuf::RepeatedPtrField<proto::GCGChallengeData> *v26; // rdi
  google::protobuf::RepeatedField<unsigned int> *v27; // rax
  const proto::PlayerLoginReq *SessionLoginReq; // rax
  google::protobuf::uint32 v29; // edx
  common::milog::MiLogStream *v30; // r14
  data::GCGCardFaceType face_type; // [rsp+24h] [rbp-19Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-198h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-190h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-188h]
  google::protobuf::Map<unsigned int,unsigned int> *card_face_map; // [rsp+40h] [rbp-180h]
  std::vector<unsigned int> *__for_range_0; // [rsp+48h] [rbp-178h]
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+50h] [rbp-170h]
  const data::GCGGameRewardExcelConfig *config_ptr; // [rsp+58h] [rbp-168h]
  std::shared_ptr<Config> v42; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v43; // [rsp+70h] [rbp-150h] BYREF
  std::string val; // [rsp+90h] [rbp-130h] BYREF
  char v45[272]; // [rsp+B0h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 card_id:1024 48 16 13 deck_ptr:1006 80 24 16 card_id_vec:1012 144 48 35 forbid_finish_"
                        "challenge_id_set:1046";
  *(_QWORD *)(v3 + 16) = PlayerGCGComp::fillGCGDuelExtra;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862726] = -202116109;
  Basic = PlayerGCGComp::getBasic(this);
  Level = GCGBasic::getLevel(Basic);
  proto::GCGDuelExtra::set_level(extra, Level);
  GCGDeckSystem::getCurDeckId(&this->deck_system_);
  GCGDeckSystem::findConstDeck((const GCGDeckSystem *const)(v3 + 48), (_DWORD)this + 296);
  if ( std::operator!=<GCGDSDeck const>((const std::shared_ptr<const GCGDSDeck> *)(v3 + 48), 0LL) )
  {
    v8 = std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    if ( GCGDSDeck::isValid(v8) )
    {
      v10 = std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v10->card_back_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->card_back_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v10 = (std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v10->card_back_id);
      }
      proto::GCGDuelExtra::set_card_back_id(extra, v10->card_back_id);
      v11 = std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      p_field_id = &v11->field_id;
      if ( *(_BYTE *)(((unsigned __int64)p_field_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_field_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_field_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_field_id);
      }
      proto::GCGDuelExtra::set_field_id(extra, v11->field_id);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 80));
      __for_range = &std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48))->character_card_vec;
      __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v3 + 32) = *v14;
        if ( *(_DWORD *)(v3 + 32) )
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v3 + 80),
            (const std::vector<unsigned int>::value_type *)(v3 + 32));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      v15 = std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      M_current = std::vector<unsigned int>::end(&v15->card_vec)._M_current;
      v17 = std::__shared_ptr_access<GCGDSDeck const,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<const GCGDSDeck,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
      v18 = std::vector<unsigned int>::begin(&v17->card_vec)._M_current;
      __for_begin._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 80))._M_current;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
        &__for_end,
        (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
      std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,void>(
        (std::vector<unsigned int> *const)(v3 + 80),
        __for_end,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v18,
        (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
      v19 = proto::GCGDuelExtra::mutable_card_id_list(extra);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(
        (const std::vector<unsigned int> *)(v3 + 80),
        v19);
      card_face_map = proto::GCGDuelExtra::mutable_card_face_map(extra);
      __for_range_0 = (std::vector<unsigned int> *)(v3 + 80);
      __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 80))._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
      {
        v20 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        v21 = v20;
        if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v20);
        }
        *(_DWORD *)(v3 + 32) = *v21;
        face_type = GCGDeckSystem::getCardFaceType(&this->deck_system_, *(_DWORD *)(v3 + 32));
        if ( face_type )
        {
          v22 = (char *)(v3 + 32);
          v23 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
                  card_face_map,
                  (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v3 + 32));
          v24 = (data::GCGCardFaceType *)v23;
          v25 = *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000);
          if ( v25 != 0 && (char)(((unsigned __int8)v23 & 7) + 3) >= v25 )
          {
            LOBYTE(v22) = v25 != 0;
            __asan_report_store4(v23, v22, v23);
          }
          *v24 = face_type;
        }
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 80));
    }
  }
  if ( game_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42)->design_config.txt_config_mgr.gcg_playing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v42);
    config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGGameRewardExcelConfig(gcg_playing_config_mgr, game_id);
    if ( config_ptr )
    {
      if ( (unsigned __int8)std::string::empty(&config_ptr->field_id_str) != 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->field_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->field_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->field_id);
        }
        proto::GCGDuelExtra::set_field_id(extra, config_ptr->field_id);
      }
    }
  }
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 144));
  v26 = proto::GCGDuelExtra::mutable_challenge_list(extra);
  PlayerGCGComp::fillGCGChallengeData(this, game_id, v26, (std::set<unsigned int> *)(v3 + 144));
  v27 = proto::GCGDuelExtra::mutable_forbid_finish_challenge_list(extra);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
    (const std::set<unsigned int> *)(v3 + 144),
    v27);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SessionLoginReq = Player::getSessionLoginReq(this->player_);
  v29 = proto::PlayerLoginReq::client_data_version(SessionLoginReq);
  proto::GCGDuelExtra::set_client_version(extra, v29);
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/player_gcg_comp.cpp",
    "fillGCGDuelExtra",
    1050);
  v30 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v43, (const char (*)[8])"extra: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11](&val, extra);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, &val);
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v43);
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 144));
  std::shared_ptr<GCGDSDeck const>::~shared_ptr((std::shared_ptr<const GCGDSDeck> *const)(v3 + 48));
  if ( v45 == (char *)v3 )
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
};

// Line 1054: range 00000000175C8378-00000000175C8A9A
void __cdecl PlayerGCGComp::fillGCGChallengeData(
        const PlayerGCGComp *const this,
        uint32_t game_id,
        google::protobuf::RepeatedPtrField<proto::GCGChallengeData> *repeated_list,
        std::set<unsigned int> *forbid_finish_challenge_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerWatcherComp *WatcherComp; // rax
  unsigned int *v8; // rax
  unsigned int *v9; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v11; // rax
  _DWORD *v12; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v13; // rax
  _DWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  google::protobuf::RepeatedField<unsigned int> *v16; // rax
  unsigned int watcher_id; // [rsp+2Ch] [rbp-194h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-190h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-188h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-180h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-178h] BYREF
  const GCGPlayingExcelConfigMgr *gcg_playing_config_mgr; // [rsp+50h] [rbp-170h]
  const std::set<unsigned int> *watcher_id_set; // [rsp+58h] [rbp-168h]
  const std::set<unsigned int> *__for_range; // [rsp+60h] [rbp-160h]
  std::set<unsigned int> *__for_range_1; // [rsp+68h] [rbp-158h]
  const data::GCGChallengeExcelConfig *challenge_config_ptr; // [rsp+70h] [rbp-150h]
  proto::GCGChallengeData *proto; // [rsp+78h] [rbp-148h]
  const std::unordered_set<unsigned int> *watcher_challenge_id_set; // [rsp+80h] [rbp-140h]
  const std::unordered_set<unsigned int> *__for_range_0; // [rsp+88h] [rbp-138h]
  std::shared_ptr<Config> v32; // [rsp+90h] [rbp-130h] BYREF
  common::milog::MiLogStream v33; // [rsp+A0h] [rbp-120h] BYREF
  char v34[256]; // [rsp+C0h] [rbp-100h] BYREF

  v4 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 17 challenge_id:1071 64 48 21 challenge_id_set:1057 144 48 30 exceeded_challenge_id_set:1058";
  *(_QWORD *)(v4 + 16) = PlayerGCGComp::fillGCGChallengeData;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -219021312;
  v6[536862724] = 62194;
  v6[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  gcg_playing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.gcg_playing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v32);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 64));
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v4 + 144));
  GCGLevelChallenge::getUnfinishedCanTakeRewardChallengeSet(
    &this->level_challenge_,
    game_id,
    (std::set<unsigned int> *)(v4 + 64),
    forbid_finish_challenge_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  WatcherComp = Player::getWatcherComp(this->player_);
  watcher_id_set = PlayerWatcherComp::getWatcherIdSetByTriggerType(WatcherComp, 0x521u);
  __for_range = watcher_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(watcher_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(watcher_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    watcher_id = *v9;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    watcher_challenge_id_set = WatcherExcelConfigMgr::getGCGChallengeIdSetByWatcherId(
                                 &v10->design_config.txt_config_mgr.watcher_config_mgr,
                                 watcher_id);
    std::shared_ptr<Config>::~shared_ptr(&v32);
    __for_range_0 = watcher_challenge_id_set;
    __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(watcher_challenge_id_set)._M_cur;
    __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
    {
      v11 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v4 + 48) = *v12;
      std::set<unsigned int>::emplace<unsigned int &>(
        (std::set<unsigned int> *const)(v4 + 64),
        (unsigned int *)(v4 + 48),
        (unsigned int *)(v4 + 48));
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_1 = (std::set<unsigned int> *)(v4 + 64);
  __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v4 + 64))._M_node;
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
  {
    v13 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    *(_DWORD *)(v4 + 48) = *v14;
    challenge_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGChallengeExcelConfig(
                             gcg_playing_config_mgr,
                             *(_DWORD *)(v4 + 48));
    if ( challenge_config_ptr )
    {
      proto = google::protobuf::RepeatedPtrField<proto::GCGChallengeData>::Add(repeated_list);
      if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&challenge_config_ptr->id);
      }
      proto::GCGChallengeData::set_challenge_id(proto, challenge_config_ptr->id);
      if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->type >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&challenge_config_ptr->type);
      }
      proto::GCGChallengeData::set_challenge_type(proto, challenge_config_ptr->type);
      v16 = proto::GCGChallengeData::mutable_param_list(proto);
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&challenge_config_ptr->param_vec, v16);
      if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->progress >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)challenge_config_ptr + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->progress >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&challenge_config_ptr->progress);
      }
      proto::GCGChallengeData::set_progress(proto, challenge_config_ptr->progress);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/card_game/player_gcg_comp.cpp",
        "fillGCGChallengeData",
        1076);
      v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v33,
              (const char (*)[49])"findGCGChallengeExcelConfig fail. challenge_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin_0);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 144));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v4 + 64));
  if ( v34 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 1088: range 00000000175C8A9C-00000000175C8D45
void __fastcall PlayerGCGComp::startSingleGame(
        PlayerGCGComp *const this,
        uint32_t game_id,
        proto::GCGGameBusinessType business_type,
        const std::vector<unsigned int> *param_vec)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  google::protobuf::RepeatedField<unsigned int> *v10; // rax
  proto::GCGPlayerData *v11; // rax
  google::protobuf::uint32 Now; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-E0h] BYREF
  char v16[192]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 game_id:1087 48 4 18 business_type:1087 64 64 8 req:1091";
  *(_QWORD *)(v4 + 16) = PlayerGCGComp::startSingleGame;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 32) = game_id;
  *(_DWORD *)(v4 + 48) = business_type;
  PlayerGCGComp::tryGiveUpGame(this);
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/player_gcg_comp.cpp",
    "startSingleGame",
    1090);
  v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
         &v15,
         (const char (*)[26])"startSingleGame game_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" business_type: ");
  common::milog::MiLogStream::operator<<<proto::GCGGameBusinessType,(proto::GCGGameBusinessType*)0>(
    v9,
    (const proto::GCGGameBusinessType *)(v4 + 48));
  common::milog::MiLogStream::~MiLogStream(&v15);
  proto::ServerGCGCreateSingleGameReq::ServerGCGCreateSingleGameReq((proto::ServerGCGCreateSingleGameReq *const)(v4 + 64));
  proto::ServerGCGCreateSingleGameReq::set_game_id(
    (proto::ServerGCGCreateSingleGameReq *const)(v4 + 64),
    *(_DWORD *)(v4 + 32));
  proto::ServerGCGCreateSingleGameReq::set_business_type(
    (proto::ServerGCGCreateSingleGameReq *const)(v4 + 64),
    *(proto::GCGGameBusinessType *)(v4 + 48));
  v10 = proto::ServerGCGCreateSingleGameReq::mutable_custom_param_list((proto::ServerGCGCreateSingleGameReq *const)(v4 + 64));
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(param_vec, v10);
  v11 = proto::ServerGCGCreateSingleGameReq::mutable_player_data((proto::ServerGCGCreateSingleGameReq *const)(v4 + 64));
  PlayerGCGComp::fillGCGPlayerData(this, *(_DWORD *)(v4 + 32), v11);
  Now = common::tools::TimeUtils::getNow();
  proto::ServerGCGCreateSingleGameReq::set_try_create_time((proto::ServerGCGCreateSingleGameReq *const)(v4 + 64), Now);
  PlayerGCGComp::sendToGameMode(this, (const google::protobuf::Message *)(v4 + 64));
  PlayerGCGComp::onBeginEnterGame(this);
  proto::ServerGCGCreateSingleGameReq::~ServerGCGCreateSingleGameReq((proto::ServerGCGCreateSingleGameReq *const)(v4 + 64));
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1102: range 00000000175C8D46-00000000175C9058
void __fastcall PlayerGCGComp::startMultiGame(
        PlayerGCGComp *const this,
        uint32_t game_id,
        proto::GCGGameBusinessType business_type,
        Player *opponent_player)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerGCGComp *GCGComp; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  proto::GCGPlayerData *v13; // rax
  PlayerGCGComp *v14; // r14
  proto::GCGPlayerData *v15; // rax
  google::protobuf::uint32 Now; // eax
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 12 game_id:1101 64 4 18 business_type:1101 80 48 8 req:1106";
  *(_QWORD *)(v4 + 16) = PlayerGCGComp::startMultiGame;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862724] = -202116109;
  *(_DWORD *)(v4 + 48) = game_id;
  *(_DWORD *)(v4 + 64) = business_type;
  PlayerGCGComp::tryGiveUpGame(this);
  GCGComp = Player::getGCGComp(opponent_player);
  PlayerGCGComp::tryGiveUpGame(GCGComp);
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/card_game/player_gcg_comp.cpp",
    "startMultiGame",
    1105);
  v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v19,
         (const char (*)[25])"startMultiGame game_id: ");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
  v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" business_type: ");
  v11 = common::milog::MiLogStream::operator<<<proto::GCGGameBusinessType,(proto::GCGGameBusinessType*)0>(
          v10,
          (const proto::GCGGameBusinessType *)(v4 + 64));
  v12 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v11, (const char (*)[12])" opponent: ");
  operator<<(v12, opponent_player);
  common::milog::MiLogStream::~MiLogStream(&v19);
  proto::ServerGCGCreateMultiGameReq::ServerGCGCreateMultiGameReq((proto::ServerGCGCreateMultiGameReq *const)(v4 + 80));
  proto::ServerGCGCreateMultiGameReq::set_game_id(
    (proto::ServerGCGCreateMultiGameReq *const)(v4 + 80),
    *(_DWORD *)(v4 + 48));
  proto::ServerGCGCreateMultiGameReq::set_business_type(
    (proto::ServerGCGCreateMultiGameReq *const)(v4 + 80),
    *(proto::GCGGameBusinessType *)(v4 + 64));
  v13 = proto::ServerGCGCreateMultiGameReq::mutable_player_data_1((proto::ServerGCGCreateMultiGameReq *const)(v4 + 80));
  PlayerGCGComp::fillGCGPlayerData(this, *(_DWORD *)(v4 + 48), v13);
  v14 = Player::getGCGComp(opponent_player);
  v15 = proto::ServerGCGCreateMultiGameReq::mutable_player_data_2((proto::ServerGCGCreateMultiGameReq *const)(v4 + 80));
  PlayerGCGComp::fillGCGPlayerData(v14, *(_DWORD *)(v4 + 48), v15);
  Now = common::tools::TimeUtils::getNow();
  proto::ServerGCGCreateMultiGameReq::set_try_create_time((proto::ServerGCGCreateMultiGameReq *const)(v4 + 80), Now);
  PlayerGCGComp::sendToGameMode(this, (const google::protobuf::Message *)(v4 + 80));
  PlayerGCGComp::onBeginEnterGame(this);
  proto::ServerGCGCreateMultiGameReq::~ServerGCGCreateMultiGameReq((proto::ServerGCGCreateMultiGameReq *const)(v4 + 80));
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 1117: range 00000000175C905A-00000000175C922D
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerGCGComp::setIsResourceComplete(PlayerGCGComp *const this, bool is_complete)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-80h] BYREF
  char v7[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 event_ptr:1119";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::setIsResourceComplete;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_resource_complete_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_resource_complete_, is_complete, &this->is_resource_complete_);
  this->is_resource_complete_ = is_complete;
  common::tools::perf::make_shared<GCGResourceCompleteEvent,bool &>((bool *)(v2 + 32), &this->is_resource_complete_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr<GCGResourceCompleteEvent,void>(
    &p_event_ptr,
    (const std::shared_ptr<GCGResourceCompleteEvent> *)(v2 + 32));
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<GCGResourceCompleteEvent>::~shared_ptr((std::shared_ptr<GCGResourceCompleteEvent> *const)(v2 + 32));
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

// Line 1125: range 00000000175C922E-00000000175C92E2
void __cdecl PlayerGCGComp::onGMSetDropPacketAndNum(PlayerGCGComp *const this, const std::string *name, uint32_t num)
{
  std::string *p_k; // rsi
  std::map<std::string,unsigned int>::mapped_type *v5; // rax
  uint32_t *v6; // rdx
  char v7; // cl
  std::string __k; // [rsp+20h] [rbp-30h] BYREF

  common::tools::StringUtils::toUpper(&__k, name);
  p_k = &__k;
  v5 = std::map<std::string,unsigned int>::operator[](&this->drop_packet_map_, &__k);
  v6 = v5;
  v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
  if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
  {
    LOBYTE(p_k) = v7 != 0;
    __asan_report_store4(v5, p_k, v5);
  }
  *v6 = num;
  std::string::~string(&__k);
};

// Line 1130: range 00000000175C92E4-00000000175C9515
int32_t __cdecl PlayerGCGComp::checkAndDecDropPackNum(PlayerGCGComp *const this, const std::string *name)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t v5; // r14d
  std::map<std::string,unsigned int>::mapped_type *v6; // rax
  uint32_t *v7; // rdx
  char *v8; // rsi
  std::map<std::string,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  char v11; // cl
  int32_t result; // eax
  uint32_t num; // [rsp+1Ch] [rbp-94h]
  char v14[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 15 upper_name:1131";
  *(_QWORD *)(v2 + 16) = PlayerGCGComp::checkAndDecDropPackNum;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  common::tools::StringUtils::toUpper((std::string *)(v2 + 32), name);
  if ( std::map<std::string,unsigned int>::count(
         &this->drop_packet_map_,
         (const std::map<std::string,unsigned int>::key_type *)(v2 + 32)) )
  {
    v6 = std::map<std::string,unsigned int>::operator[](
           &this->drop_packet_map_,
           (const std::map<std::string,unsigned int>::key_type *)(v2 + 32));
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    num = *v7;
    if ( *v7 )
    {
      v8 = (char *)(v2 + 32);
      v9 = std::map<std::string,unsigned int>::operator[](
             &this->drop_packet_map_,
             (const std::map<std::string,unsigned int>::key_type *)(v2 + 32));
      v10 = v9;
      v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
      if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(v9, v8, v9);
      }
      *v10 = num - 1;
      v5 = 0;
    }
    else
    {
      v5 = -1;
    }
  }
  else
  {
    v5 = -1;
  }
  std::string::~string((void *)(v2 + 32));
  result = v5;
  if ( v14 == (char *)v2 )
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
  return result;
};
