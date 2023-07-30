// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/expedition_activity.cpp

// Line 33: range 0000000015047EC0-00000000150481C7
int32_t __cdecl ExpeditionPath::fromBin(ExpeditionPath *const this, const proto::ExpeditionPathDataBin *proto)
{
  __m128i v2; // xmm0
  uint32_t v3; // edx
  uint32_t v4; // ecx
  uint32_t refreshed; // edx
  google::protobuf::uint32 v6; // edi
  uint32_t started; // edx
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  uint32_t v9; // edx
  uint32_t v10; // ecx
  float v11; // ecx
  const std::string *v12; // rax
  uint32_t v13; // edx

  v3 = proto::ExpeditionPathDataBin::path_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->path_id = v3;
  v4 = proto::ExpeditionPathDataBin::mark_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->mark_id);
  }
  this->mark_id = v4;
  refreshed = proto::ExpeditionPathDataBin::refresh_time(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->refresh_time);
  }
  this->refresh_time = refreshed;
  v6 = proto::ExpeditionPathDataBin::state(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    v6 = (_DWORD)this + 12;
    __asan_report_store4(&this->state);
  }
  this->state = v6;
  started = proto::ExpeditionPathDataBin::start_time(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->start_time);
  }
  this->start_time = started;
  v8 = proto::ExpeditionPathDataBin::avatar_id_list(proto);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->avatar_id_set, v8);
  v9 = proto::ExpeditionPathDataBin::assist_uid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->assist_uid);
  }
  this->assist_uid = v9;
  v10 = proto::ExpeditionPathDataBin::assist_avatar_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assist_avatar_id);
  }
  this->assist_avatar_id = v10;
  *(float *)v2.m128i_i32 = proto::ExpeditionPathDataBin::bonus_probability(proto);
  v11 = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->bonus_probability);
  }
  this->bonus_probability = v11;
  v12 = proto::ExpeditionPathDataBin::transaction[abi:cxx11](proto);
  std::string::operator=(&this->transaction, v12);
  v13 = proto::ExpeditionPathDataBin::assist_costume_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->assist_costume_id);
  }
  this->assist_costume_id = v13;
  return 0;
};

// Line 50: range 00000000150481C8-00000000150484BE
int32_t __cdecl ExpeditionPath::toBin(const ExpeditionPath *const this, proto::ExpeditionPathDataBin *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_path_id(proto, this->path_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_mark_id(proto, this->mark_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_refresh_time(proto, this->refresh_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_state(proto, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_start_time(proto, this->start_time);
  v2 = proto::ExpeditionPathDataBin::mutable_avatar_id_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->avatar_id_set, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_assist_uid(proto, this->assist_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_assist_avatar_id(proto, this->assist_avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_bonus_probability(proto, this->bonus_probability);
  proto::ExpeditionPathDataBin::set_transaction(proto, &this->transaction);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathDataBin::set_assist_costume_id(proto, this->assist_costume_id);
  return 0;
};

// Line 67: range 00000000150484C0-0000000015048799
void __cdecl ExpeditionPath::toClient(const ExpeditionPath *const this, proto::ExpeditionPathInfo *proto)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_path_id(proto, this->path_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_mark_id(proto, this->mark_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_state(proto, this->state);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_start_time(proto, this->start_time);
  v2 = proto::ExpeditionPathInfo::mutable_avatar_id_list(proto);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->avatar_id_set, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_assist_uid(proto, this->assist_uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_avatar_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_assist_avatar_id(proto, this->assist_avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->bonus_probability >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_bonus_probability(proto, this->bonus_probability);
  if ( *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->challenge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_challenge_id(proto, this->challenge_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->assist_costume_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionPathInfo::set_assist_costume_id(proto, this->assist_costume_id);
};

// Line 81: range 000000001504879A-00000000150488D2
int32_t __cdecl ExpeditionAssistRecordInfo::fromBin(
        ExpeditionAssistRecordInfo *const this,
        const proto::ExpeditionAssistRecordBin *proto)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  uint32_t v4; // edx
  const std::string *v5; // rax
  const std::string *v6; // rax

  v2 = proto::ExpeditionAssistRecordBin::avatar_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = v2;
  v3 = proto::ExpeditionAssistRecordBin::assist_time(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->assist_time);
  }
  this->assist_time = v3;
  v4 = proto::ExpeditionAssistRecordBin::target_uid(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->target_uid);
  }
  this->target_uid = v4;
  v5 = proto::ExpeditionAssistRecordBin::target_nick_name[abi:cxx11](proto);
  std::string::operator=(&this->target_nick_name, v5);
  v6 = proto::ExpeditionAssistRecordBin::online_id[abi:cxx11](proto);
  std::string::operator=(&this->online_id, v6);
  return 0;
};

// Line 92: range 00000000150488D4-00000000150489F3
int32_t __cdecl ExpeditionAssistRecordInfo::toBin(
        const ExpeditionAssistRecordInfo *const this,
        proto::ExpeditionAssistRecordBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionAssistRecordBin::set_avatar_id(proto, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionAssistRecordBin::set_assist_time(proto, this->assist_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->target_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionAssistRecordBin::set_target_uid(proto, this->target_uid);
  proto::ExpeditionAssistRecordBin::set_target_nick_name(proto, &this->target_nick_name);
  proto::ExpeditionAssistRecordBin::set_online_id(proto, &this->online_id);
  return 0;
};

// Line 103: range 00000000150489F4-0000000015048ACB
int32_t __cdecl ExpeditionAssistRecordInfo::toClient(
        const ExpeditionAssistRecordInfo *const this,
        proto::ExpeditionAssistInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionAssistInfo::set_avatar_id(proto, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->assist_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionAssistInfo::set_assist_time(proto, this->assist_time);
  proto::ExpeditionAssistInfo::set_target_nick_name(proto, &this->target_nick_name);
  proto::ExpeditionAssistInfo::set_online_id(proto, &this->online_id);
  return 0;
};

// Line 113: range 0000000015048ACC-0000000015048B7C
int32_t __cdecl ExpeditionChallenge::fromBin(
        ExpeditionChallenge *const this,
        const proto::ExpeditionChallengeDataBin *proto)
{
  uint32_t v2; // ecx
  bool is_finished; // cl

  v2 = proto::ExpeditionChallengeDataBin::id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->id = v2;
  is_finished = proto::ExpeditionChallengeDataBin::is_finished(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finished);
  }
  this->is_finished = is_finished;
  return 0;
};

// Line 121: range 0000000015048B7E-0000000015048C30
int32_t __cdecl ExpeditionChallenge::toBin(
        const ExpeditionChallenge *const this,
        proto::ExpeditionChallengeDataBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionChallengeDataBin::set_id(proto, this->id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::ExpeditionChallengeDataBin::set_is_finished(proto, this->is_finished);
  return 0;
};

// Line 129: range 0000000015048C32-0000000015048D3F
void __cdecl ExpeditionChallenge::toClient(
        const ExpeditionChallenge *const this,
        const ExpeditionActivity *expedition_activity,
        proto::ExpeditionChallengeInfo *proto)
{
  google::protobuf::uint32 ExpeditionChallengeOpenTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionChallengeInfo::set_id(proto, this->id);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ExpeditionChallengeOpenTime = ExpeditionActivity::getExpeditionChallengeOpenTime(expedition_activity, this->id);
  proto::ExpeditionChallengeInfo::set_open_time(proto, ExpeditionChallengeOpenTime);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::ExpeditionChallengeInfo::set_is_finished(proto, this->is_finished);
};

// Line 136: range 0000000015048D40-00000000150490C9
int32_t __cdecl ExpeditionActivity::fromScheduleBin(
        ExpeditionActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  uint32_t refresh_time; // edx
  const google::protobuf::RepeatedField<unsigned int> *v3; // rax
  uint32_t v4; // edx
  const google::protobuf::RepeatedPtrField<proto::ExpeditionAssistRecordBin> *v5; // rax
  uint32_t v6; // edx
  uint32_t v7; // ecx
  bool is_content_closed; // dl
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  std::map<unsigned int,ExpeditionPath>::key_type __k; // [rsp+14h] [rbp-6Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::ExpeditionPathDataBin>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  google::protobuf::RepeatedPtrField<proto::ExpeditionPathDataBin>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const proto::ExpeditionScheduleBin *expedition_bin; // [rsp+28h] [rbp-58h]
  const google::protobuf::RepeatedPtrField<proto::ExpeditionPathDataBin> *__for_range; // [rsp+30h] [rbp-50h]
  const google::protobuf::RepeatedPtrField<proto::ExpeditionChallengeDataBin> *__for_range_0; // [rsp+38h] [rbp-48h]
  const proto::ExpeditionChallengeDataBin *challenge_data_bin; // [rsp+40h] [rbp-40h]
  ExpeditionChallenge *expedition_challenge; // [rsp+48h] [rbp-38h]
  const proto::ExpeditionPathDataBin *path_data_bin; // [rsp+50h] [rbp-30h]
  ExpeditionPath *expedition_path; // [rsp+58h] [rbp-28h]

  expedition_bin = proto::ActivityScheduleBin::expedition_bin(bin);
  refresh_time = proto::ExpeditionScheduleBin::last_refresh_time(expedition_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = refresh_time;
  v3 = proto::ExpeditionScheduleBin::candidate_path_id_list(expedition_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v3, &this->candidate_path_id_vec_);
  __for_range = proto::ExpeditionScheduleBin::path_data_list(expedition_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ExpeditionPathDataBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ExpeditionPathDataBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ExpeditionPathDataBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    path_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ExpeditionPathDataBin const>::operator*(&__for_begin);
    __k = proto::ExpeditionPathDataBin::path_id(path_data_bin);
    expedition_path = std::map<unsigned int,ExpeditionPath>::operator[](&this->expedition_path_map_, &__k);
    ExpeditionPath::fromBin(expedition_path, path_data_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::ExpeditionPathDataBin const>::operator++(&__for_begin);
  }
  v4 = proto::ExpeditionScheduleBin::expedition_count(expedition_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expedition_count_);
  }
  this->expedition_count_ = v4;
  v5 = proto::ExpeditionScheduleBin::assist_record_list(expedition_bin);
  common::tools::MiscUtils::fromRepeated<ExpeditionAssistRecordInfo,proto::ExpeditionAssistRecordBin,int (ExpeditionAssistRecordInfo::*)(proto::ExpeditionAssistRecordBin const&)>(
    &this->assist_record_vec_,
    v5,
    (int (*)(ExpeditionAssistRecordInfo *, const proto::ExpeditionAssistRecordBin *))ExpeditionAssistRecordInfo::fromBin);
  __for_range_0 = proto::ExpeditionScheduleBin::challenge_data_list(expedition_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ExpeditionChallengeDataBin>::begin(__for_range_0).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ExpeditionChallengeDataBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ExpeditionChallengeDataBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ExpeditionChallengeDataBin> *const)&__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ExpeditionChallengeDataBin>::iterator *)&__for_end) )
  {
    challenge_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ExpeditionChallengeDataBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ExpeditionChallengeDataBin> *const)&__for_begin);
    __k = proto::ExpeditionChallengeDataBin::id(challenge_data_bin);
    expedition_challenge = std::map<unsigned int,ExpeditionChallenge>::operator[](
                             &this->expedition_challenge_map_,
                             &__k);
    ExpeditionChallenge::fromBin(expedition_challenge, challenge_data_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::ExpeditionChallengeDataBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ExpeditionChallengeDataBin> *const)&__for_begin);
  }
  v6 = proto::ExpeditionScheduleBin::expedition_finish_count(expedition_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expedition_finish_count_);
  }
  this->expedition_finish_count_ = v6;
  v7 = proto::ExpeditionScheduleBin::cur_challenge_id(expedition_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_challenge_id_);
  }
  this->cur_challenge_id_ = v7;
  is_content_closed = proto::ExpeditionScheduleBin::is_content_closed(expedition_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  v9 = proto::ExpeditionScheduleBin::history_path_id_list(expedition_bin);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(&this->history_path_id_set_, v9);
  return 0;
};

// Line 161: range 00000000150490CA-000000001504948A
int32_t __cdecl ExpeditionActivity::toScheduleBin(
        const ExpeditionActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax
  google::protobuf::RepeatedPtrField<proto::ExpeditionAssistRecordBin> *v3; // rax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::ExpeditionScheduleBin *expedition_bin; // [rsp+28h] [rbp-68h]
  const std::map<unsigned int,ExpeditionPath> *__for_range; // [rsp+30h] [rbp-60h]
  const std::map<unsigned int,ExpeditionChallenge> *__for_range_0; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,ExpeditionChallenge> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,ExpeditionChallenge> >::type *__0; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,ExpeditionChallenge> >::type *expedition_challenge; // [rsp+50h] [rbp-40h]
  proto::ExpeditionChallengeDataBin *challenge_data_bin; // [rsp+58h] [rbp-38h]
  const std::pair<unsigned int const,ExpeditionPath> *v15; // [rsp+60h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,ExpeditionPath> >::type *_; // [rsp+68h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *expedition_path; // [rsp+70h] [rbp-20h]
  proto::ExpeditionPathDataBin *path_data_bin; // [rsp+78h] [rbp-18h]

  expedition_bin = proto::ActivityScheduleBin::mutable_expedition_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionScheduleBin::set_last_refresh_time(expedition_bin, this->last_refresh_time_);
  v2 = proto::ExpeditionScheduleBin::mutable_candidate_path_id_list(expedition_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->candidate_path_id_vec_, v2);
  __for_range = &this->expedition_path_map_;
  __for_begin._M_node = std::map<unsigned int,ExpeditionPath>::begin(&this->expedition_path_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ExpeditionPath>(v15);
    expedition_path = (std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *)std::get<1ul,unsigned int const,ExpeditionPath>(v15);
    path_data_bin = proto::ExpeditionScheduleBin::add_path_data_list(expedition_bin);
    ExpeditionPath::toBin(expedition_path, path_data_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionScheduleBin::set_expedition_count(expedition_bin, this->expedition_count_);
  v3 = proto::ExpeditionScheduleBin::mutable_assist_record_list(expedition_bin);
  common::tools::MiscUtils::toRepeated<ExpeditionAssistRecordInfo,proto::ExpeditionAssistRecordBin,int (ExpeditionAssistRecordInfo::*)(proto::ExpeditionAssistRecordBin&)const>(
    &this->assist_record_vec_,
    v3,
    (int (*)(const ExpeditionAssistRecordInfo *, proto::ExpeditionAssistRecordBin *))ExpeditionAssistRecordInfo::toBin);
  __for_range_0 = &this->expedition_challenge_map_;
  __for_begin._M_node = std::map<unsigned int,ExpeditionChallenge>::begin(&this->expedition_challenge_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExpeditionChallenge>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self *)&__for_end) )
  {
    v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionChallenge> > *const)&__for_begin);
    __0 = std::get<0ul,unsigned int const,ExpeditionChallenge>(v11);
    expedition_challenge = (std::tuple_element<1,const std::pair<unsigned int const,ExpeditionChallenge> >::type *)std::get<1ul,unsigned int const,ExpeditionChallenge>(v11);
    challenge_data_bin = proto::ExpeditionScheduleBin::add_challenge_data_list(expedition_bin);
    ExpeditionChallenge::toBin(expedition_challenge, challenge_data_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionChallenge> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ExpeditionScheduleBin::set_expedition_finish_count(expedition_bin, this->expedition_finish_count_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ExpeditionScheduleBin::set_cur_challenge_id(expedition_bin, this->cur_challenge_id_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::ExpeditionScheduleBin::set_is_content_closed(expedition_bin, this->is_content_closed_);
  v4 = proto::ExpeditionScheduleBin::mutable_history_path_id_list(expedition_bin);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(&this->history_path_id_set_, v4);
  return 0;
};

// Line 186: range 000000001504948C-0000000015049872
int32_t __cdecl ExpeditionActivity::toClient(ExpeditionActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  uint32_t v4; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  std::map<unsigned int,ExpeditionPath>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,ExpeditionPath>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  proto::ExpeditionActivityDetailInfo *expedition_info; // [rsp+28h] [rbp-88h]
  std::map<unsigned int,ExpeditionPath> *__for_range; // [rsp+30h] [rbp-80h]
  std::map<unsigned int,ExpeditionChallenge> *__for_range_0; // [rsp+38h] [rbp-78h]
  const std::pair<unsigned int const,ExpeditionChallenge> *v11; // [rsp+40h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,ExpeditionChallenge> >::type *__0; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,ExpeditionChallenge> >::type *expedition_challenge; // [rsp+50h] [rbp-60h]
  proto::ExpeditionChallengeInfo *challenge_info; // [rsp+58h] [rbp-58h]
  const std::pair<unsigned int const,ExpeditionPath> *v15; // [rsp+60h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,ExpeditionPath> >::type *_; // [rsp+68h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *expedition_path; // [rsp+70h] [rbp-40h]
  proto::ExpeditionPathInfo *path_info; // [rsp+78h] [rbp-38h]
  common::milog::MiLogStream v19; // [rsp+80h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "toClient",
      189);
    v2 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v19,
           (const char (*)[50])"[EXPEDITION] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  else
  {
    expedition_info = proto::ActivityInfo::mutable_expedition_info(activity_info);
    __for_range = &this->expedition_path_map_;
    __for_begin._M_node = std::map<unsigned int,ExpeditionPath>::begin(&this->expedition_path_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,ExpeditionPath>(v15);
      expedition_path = (std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *)std::get<1ul,unsigned int const,ExpeditionPath>(v15);
      path_info = proto::ExpeditionActivityDetailInfo::add_path_info_list(expedition_info);
      ExpeditionPath::toClient(expedition_path, path_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ExpeditionActivityDetailInfo::set_expedition_count(expedition_info, this->expedition_count_);
    __for_range_0 = &this->expedition_challenge_map_;
    __for_begin._M_node = std::map<unsigned int,ExpeditionChallenge>::begin(&this->expedition_challenge_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,ExpeditionChallenge>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self *)&__for_end) )
    {
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> > *const)&__for_begin);
      __0 = std::get<0ul,unsigned int const,ExpeditionChallenge>(v11);
      expedition_challenge = (std::tuple_element<1,const std::pair<unsigned int const,ExpeditionChallenge> >::type *)std::get<1ul,unsigned int const,ExpeditionChallenge>(v11);
      challenge_info = proto::ExpeditionActivityDetailInfo::add_challenge_info_list(expedition_info);
      ExpeditionChallenge::toClient(expedition_challenge, this, challenge_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> > *const)&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::ExpeditionActivityDetailInfo::set_is_content_closed(expedition_info, this->is_content_closed_);
    v4 = ExpeditionActivity::calExpeditionContentCloseTime(this);
    proto::ExpeditionActivityDetailInfo::set_content_close_time(expedition_info, v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ExpeditionActivityDetailInfo::set_cur_challenge_id(expedition_info, this->cur_challenge_id_);
    return 0;
  }
};

// Line 216: range 0000000015049874-0000000015049909
int32_t __cdecl ExpeditionActivity::init(ExpeditionActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    if ( !this->is_content_closed_ )
      BaseActivity::isSettled(this);
  }
  return 0;
};

// Line 226: range 000000001504990A-00000000150499BE
void __cdecl ExpeditionActivity::onLogin(ExpeditionActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Player::isRelogin(this->player_) )
    {
      ExpeditionActivity::startExpeditionTimer(this);
      ExpeditionActivity::checkAndDealWithFinishedPath(this);
      ExpeditionActivity::tryRefresh(this);
    }
    BaseActivity::onLogin(this);
  }
};

// Line 244: range 00000000150499C0-0000000015049A25
void __cdecl ExpeditionActivity::onDailyRefresh(ExpeditionActivity *const this)
{
  ExpeditionActivity::tryRefresh(this);
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 254: range 0000000015049A26-0000000015049C16
void __cdecl ExpeditionActivity::onPreStart(ExpeditionActivity *const this)
{
  uint32_t v1; // ecx
  std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+20h] [rbp-40h]
  const std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *expedition_challenge_config; // [rsp+40h] [rbp-20h]
  ExpeditionChallenge *expedition_challenge; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_expedition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_range = &conf_mgr->expedition_challenge_excel_config_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::begin(&conf_mgr->expedition_challenge_excel_config_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ExpeditionChallengeExcelConfig>::end(&conf_mgr->expedition_challenge_excel_config_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(v6);
    expedition_challenge_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionChallengeExcelConfig>(v6);
    expedition_challenge = std::map<unsigned int,ExpeditionChallenge>::operator[](&this->expedition_challenge_map_, id);
    if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v1 = *id;
    if ( *(_BYTE *)(((unsigned __int64)expedition_challenge >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)expedition_challenge & 7) + 3) >= *(_BYTE *)(((unsigned __int64)expedition_challenge >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_store4(expedition_challenge);
    }
    expedition_challenge->id = v1;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)expedition_challenge + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_finished >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store1(&expedition_challenge->is_finished);
    }
    expedition_challenge->is_finished = 0;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_group_load >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)expedition_challenge + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_group_load >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_store1(&expedition_challenge->is_group_load);
    }
    expedition_challenge->is_group_load = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionChallengeExcelConfig>,false,false>::operator++(&__for_begin);
  }
};

// Line 266: range 0000000015049C18-0000000015049C3E
void __cdecl ExpeditionActivity::onStart(ExpeditionActivity *const this)
{
  ExpeditionActivity::tryRefresh(this);
  ExpeditionActivity::startExpeditionTimer(this);
};

// Line 272: range 0000000015049C40-0000000015049CBD
void __cdecl ExpeditionActivity::onSettle(ExpeditionActivity *const this)
{
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( std::operator!=<PlayerUnixTimer>(0LL, &this->expedtion_timer_ptr_) )
  {
    v1 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedtion_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v1) )
    {
      v3 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedtion_timer_ptr_);
      common::tools::MiTimer::cancel(v3);
    }
  }
  ExpeditionActivity::closeExpeditionContent(this);
};

// Line 282: range 0000000015049CBE-0000000015049E7A
void __cdecl ExpeditionActivity::onClear(ExpeditionActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::vector<unsigned int>::clear(&this->candidate_path_id_vec_);
  std::map<unsigned int,ExpeditionPath>::clear(&this->expedition_path_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expedition_count_);
  }
  this->expedition_count_ = 0;
  std::vector<ExpeditionAssistRecordInfo>::clear(&this->assist_record_vec_);
  std::map<unsigned int,ExpeditionChallenge>::clear(&this->expedition_challenge_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_finish_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expedition_finish_count_);
  }
  this->expedition_finish_count_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_challenge_id_);
  }
  this->cur_challenge_id_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  std::set<unsigned int>::clear(&this->history_path_id_set_);
};

// Line 296: range 0000000015049E7C-0000000015049EF3
int32_t __cdecl ExpeditionActivity::execAction(
        ExpeditionActivity *const this,
        const data::NewActivityExec *action_exec)
{
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type != NEW_ACTIVITY_ACTION_CLOSE_EXPEDITION_CONTENT )
    return BaseActivity::execAction(this, action_exec);
  ExpeditionActivity::closeExpeditionContent(this);
  return 0;
};

// Line 312: range 000000001504A03A-000000001504A68B
void __cdecl ExpeditionActivity::startExpeditionTimer(ExpeditionActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // r14
  PlayerUnixTimer *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::weak_ptr<ExpeditionActivity> v11; // [rsp+20h] [rbp-F0h] BYREF
  std::enable_shared_from_this<BaseActivity> v12; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 12 this_ptr:320 64 16 12 this_wtr:321 96 16 14 player_ptr:322";
  *(_QWORD *)(v1 + 16) = ExpeditionActivity::startExpeditionTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( std::operator!=<PlayerUnixTimer>(0LL, &this->expedtion_timer_ptr_) )
  {
    v4 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedtion_timer_ptr_);
    if ( common::tools::MiTimer::isActive(v4) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/expedition_activity.cpp",
        "startExpeditionTimer",
        315);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        &v13,
        (const char (*)[44])"[EXPEDITION] expedtion_timer_ptr_ is active");
      common::milog::MiLogStream::~MiLogStream(&v13);
      v6 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedtion_timer_ptr_);
      common::tools::MiTimer::cancel(v6);
    }
  }
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/expedition_activity.cpp",
    "startExpeditionTimer",
    319);
  v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v13,
         (const char (*)[41])"[EXPEDITION] startExpeditionTimer, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v13);
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v12);
  std::dynamic_pointer_cast<ExpeditionActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v12);
  std::weak_ptr<ExpeditionActivity>::weak_ptr<ExpeditionActivity,void>(
    (std::weak_ptr<ExpeditionActivity> *const)(v1 + 64),
    (const std::shared_ptr<ExpeditionActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toThisPtr<Player>((Player *)(v1 + 96));
  std::weak_ptr<ExpeditionActivity>::weak_ptr(&v11, (const std::weak_ptr<ExpeditionActivity> *)(v1 + 64));
  common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player> &,ExpeditionActivity::startExpeditionTimer(void)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Player> *)&v12,
    (ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *)(v1 + 96),
    (std::shared_ptr<Player> *)&v11,
    (ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *)(v1 + 96));
  std::shared_ptr<PlayerUnixTimer>::operator=(&this->expedtion_timer_ptr_, (std::shared_ptr<PlayerUnixTimer> *)&v12);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&v12);
  ExpeditionActivity::startExpeditionTimer(void)::{lambda(unsigned long)#1}::~startExpeditionTimer((ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *const)&v11);
  if ( std::operator==<PlayerUnixTimer>(0LL, &this->expedtion_timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "startExpeditionTimer",
      334);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v13,
           (const char (*)[55])"[EXPEDITION] create expedtion_timer_ptr_ failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_17:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    goto LABEL_22;
  }
  v9 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->expedtion_timer_ptr_);
  if ( PlayerUnixTimer::startS(v9, 3u, 1, "./src/player/activity/expedition_activity.cpp", "startExpeditionTimer", 338) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "startExpeditionTimer",
      340);
    v8 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v13,
           (const char (*)[54])"[EXPEDITION] expedtion_timer_ptr_ start failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_17;
  }
LABEL_22:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
  std::weak_ptr<ExpeditionActivity>::~weak_ptr((std::weak_ptr<ExpeditionActivity> *const)(v1 + 64));
  std::shared_ptr<ExpeditionActivity>::~shared_ptr((std::shared_ptr<ExpeditionActivity> *const)(v1 + 32));
  if ( v14 == (char *)v1 )
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

// Line 323: range 0000000015049EF4-000000001504A01C
void __cdecl ExpeditionActivity::startExpeditionTimer(void)::{lambda(unsigned long)#1}::operator()(
        const ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ExpeditionActivity *v5; // rdx
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 this_ptr:325";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::startExpeditionTimer(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<ExpeditionActivity>::lock((const std::weak_ptr<ExpeditionActivity> *const)(v2 + 32));
  if ( std::operator!=<ExpeditionActivity>(0LL, (const std::shared_ptr<ExpeditionActivity> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ExpeditionActivity::onExpeditionTimer(v5, now_ms);
  }
  std::shared_ptr<ExpeditionActivity>::~shared_ptr((std::shared_ptr<ExpeditionActivity> *const)(v2 + 32));
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

// Line 323: range 000000001516B366-000000001516B38B
void __cdecl ExpeditionActivity::startExpeditionTimer(void)::{lambda(unsigned long)#1}::startExpeditionTimer(
        ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *const this,
        ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<ExpeditionActivity>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 323: range 000000001516BF82-000000001516BFA7
void __cdecl ExpeditionActivity::startExpeditionTimer(void)::{lambda(unsigned long)#1}::startExpeditionTimer(
        ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *const this,
        const ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<ExpeditionActivity>::weak_ptr(&this->__this_wtr, &a2->__this_wtr);
};

// Line 323: range 000000001504A01E-000000001504A038
void __cdecl ExpeditionActivity::startExpeditionTimer(void)::{lambda(unsigned long)#1}::~startExpeditionTimer(
        ExpeditionActivity::startExpeditionTimer::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<ExpeditionActivity>::~weak_ptr(&this->__this_wtr);
};

// Line 346: range 000000001504A68C-000000001504A6AA
void __cdecl ExpeditionActivity::onExpeditionTimer(ExpeditionActivity *const this, uint64_t now_ms)
{
  ExpeditionActivity::checkAndDealWithFinishedPath(this);
};

// Line 351: range 000000001504A6AC-000000001504A75D
void __cdecl ExpeditionActivity::closeExpeditionContent(ExpeditionActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    ExpeditionActivity::unloadExpeditionChallengeGroups(this);
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 363: range 000000001504A75E-000000001504A94A
uint32_t __cdecl ExpeditionActivity::calExpeditionContentCloseTime(ExpeditionActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  uint32_t content_duration; // [rsp+1Ch] [rbp-94h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 22 content_close_time:365";
  *(_QWORD *)(v1 + 16) = ExpeditionActivity::calExpeditionContentCloseTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  content_duration = ConstValueExcelConfigMgr::getActivityExpeditionContentDuration(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  v5 = content_duration + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 32) = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v5);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/expedition_activity.cpp",
    "calExpeditionContentCloseTime",
    366);
  v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v10,
         (const char (*)[34])"[EXPEDITION] content_close_time: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
  common::milog::MiLogStream::~MiLogStream(&v10);
  result = *(_DWORD *)(v1 + 32);
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

// Line 371: range 000000001504A94C-000000001504AAD7
void __cdecl ExpeditionActivity::tryRefresh(ExpeditionActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t now; // [rsp+18h] [rbp-18h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-10h] BYREF

  ExpeditionActivity::tryRefreshChallengeGroup(this);
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v5);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->last_refresh_time_ || !common::tools::TimeUtils::isSameDay(now, this->last_refresh_time_, time_offset) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_refresh_time_);
    }
    this->last_refresh_time_ = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->expedition_count_);
    }
    this->expedition_count_ = 0;
    ExpeditionActivity::removeExpiredExpeditionPath(this);
    ExpeditionActivity::tryGenerateCandidatePathPool(this);
    ExpeditionActivity::tryFetchCandidatePath(this);
  }
};

// Line 388: range 000000001504AAD8-000000001504AE56
void __cdecl ExpeditionActivity::removeExpiredExpeditionPath(ExpeditionActivity *const this)
{
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::pointer v5; // rax
  time_t v6; // rdx
  char v7; // al
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  uint32_t now; // [rsp+18h] [rbp-B8h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-B4h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self __y; // [rsp+20h] [rbp-B0h] BYREF
  ExpeditionPath *expedition_path; // [rsp+28h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-90h] BYREF
  char v18[112]; // [rsp+60h] [rbp-70h] BYREF

  v1 = (std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *)v2;
  }
  v1->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Base_ptr)1102416563;
  v1[1]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Base_ptr)"1 32 8 8 iter:391";
  v1[2]._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Base_ptr)ExpeditionActivity::removeExpiredExpeditionPath;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  v1[4]._M_node = std::map<unsigned int,ExpeditionPath>::begin(&this->expedition_path_map_)._M_node;
  while ( 1 )
  {
    __y._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
    if ( !std::operator!=(v1 + 4, &__y) )
      break;
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator->(v1 + 4);
    expedition_path = &v5->second;
    v6 = time_offset;
    if ( *(_BYTE *)(((unsigned __int64)&v5->second.refresh_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v5->second.refresh_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( common::tools::TimeUtils::isSameDay(now, expedition_path->refresh_time, v6) )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( expedition_path->state == EXPEDITION_LOCKED || expedition_path->state == EXPEDITION_NONE )
      v7 = 1;
    else
LABEL_14:
      v7 = 0;
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/expedition_activity.cpp",
        "removeExpiredExpeditionPath",
        398);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v17,
             (const char (*)[47])"[EXPEDITION] removeExpiredExpeditionPath uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              v9,
              (const char (*)[24])" remove path, path_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &expedition_path->path_id);
      common::milog::MiLogStream::~MiLogStream(&v17);
      v1[4]._M_node = std::map<unsigned int,ExpeditionPath>::erase[abi:cxx11](&this->expedition_path_map_, v1[4])._M_node;
    }
    else
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(v1 + 4);
    }
  }
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 409: range 000000001504AE58-000000001504B57F
void __cdecl ExpeditionActivity::tryGenerateCandidatePathPool(ExpeditionActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v4; // rdx
  common::milog::MiLogStream *v5; // rax
  unsigned int *M_current; // r15
  unsigned int *v7; // r14
  std::vector<unsigned int>::iterator v8; // rax
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // r14
  unsigned int *v10; // rbx
  std::vector<unsigned int>::iterator v11; // rax
  unsigned int *__last; // [rsp+10h] [rbp-1D0h]
  uint32_t count; // [rsp+2Ch] [rbp-1B4h]
  std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::const_iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::const_iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+48h] [rbp-198h] BYREF
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+50h] [rbp-190h]
  const std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig> *__for_range; // [rsp+58h] [rbp-188h]
  const std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig> *v20; // [rsp+60h] [rbp-180h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig> >::type *difficulty_id; // [rsp+68h] [rbp-178h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig> >::type *difficulty_config; // [rsp+70h] [rbp-170h]
  std::vector<unsigned int> *__for_range_0; // [rsp+78h] [rbp-168h]
  std::shared_ptr<Config> v24; // [rsp+80h] [rbp-160h] BYREF
  common::milog::MiLogStream v25; // [rsp+90h] [rbp-150h] BYREF
  char v26[304]; // [rsp+B0h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 11 path_id:425 64 24 15 path_id_vec:421 128 24 14 source_vec:422 192 24 14 target_vec:444";
  *(_QWORD *)(v1 + 16) = ExpeditionActivity::tryGenerateCandidatePathPool;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    std::vector<unsigned int>::clear(&this->candidate_path_id_vec_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_expedition_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v24);
    __for_range = &conf_mgr->expedition_difficulty_excel_config_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::begin(&conf_mgr->expedition_difficulty_excel_config_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,data::ExpeditionDifficultyExcelConfig>::end(&conf_mgr->expedition_difficulty_excel_config_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false>(
              &__for_begin,
              &__for_end) )
    {
      v20 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false>::operator*(&__for_begin);
      difficulty_id = std::get<0ul,unsigned int const,data::ExpeditionDifficultyExcelConfig>(v20);
      difficulty_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ExpeditionDifficultyExcelConfig>(v20);
      if ( *(_BYTE *)(((unsigned __int64)&difficulty_config->min_refresh_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&difficulty_config->min_refresh_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      count = difficulty_config->min_refresh_count;
      if ( *(_BYTE *)(((unsigned __int64)difficulty_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)difficulty_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ActivityExpeditionExcelConfigMgr::findPathVecByDifficultyId(
        (std::vector<unsigned int> *)(v1 + 64),
        conf_mgr,
        *difficulty_id);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
      if ( *(_BYTE *)(((unsigned __int64)difficulty_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)difficulty_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)difficulty_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( *difficulty_id == 1 )
      {
        __for_range_0 = (std::vector<unsigned int> *)(v1 + 64);
        __for_begin_0._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
        __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
        {
          v4 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
          if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = *v4;
          if ( !std::set<unsigned int>::count(
                  &this->history_path_id_set_,
                  (const std::set<unsigned int>::key_type *)(v1 + 48)) )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v1 + 128),
              (const std::vector<unsigned int>::value_type *)(v1 + 48));
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
        }
      }
      else
      {
        std::vector<unsigned int>::operator=(
          (std::vector<unsigned int> *const)(v1 + 128),
          (const std::vector<unsigned int> *)(v1 + 64));
      }
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/expedition_activity.cpp",
          "tryGenerateCandidatePathPool",
          440);
        v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v25,
               (const char (*)[49])"[EXPEDITION] source_vec is empty, difficulty_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, difficulty_id);
        common::milog::MiLogStream::~MiLogStream(&v25);
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 192));
        common::tools::RandomUtils::randomSelect<unsigned int>(
          (const std::vector<unsigned int> *)(v1 + 128),
          (std::vector<unsigned int> *)(v1 + 192),
          count);
        __last = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 192))._M_current;
        M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 192))._M_current;
        __for_begin_0._M_current = std::vector<unsigned int>::end(&this->candidate_path_id_vec_)._M_current;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end_0,
          &__for_begin_0);
        std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
          &this->candidate_path_id_vec_,
          (std::vector<unsigned int>::const_iterator)__for_end_0._M_current,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last);
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 192));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ExpeditionDifficultyExcelConfig>,false,false>::operator++(&__for_begin);
    }
    v7 = std::vector<unsigned int>::end(&this->candidate_path_id_vec_)._M_current;
    v8._M_current = std::vector<unsigned int>::begin(&this->candidate_path_id_vec_)._M_current;
    std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      &this->history_path_id_set_,
      v8,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v7);
    RandGenerator = common::tools::RandomUtils::getRandGenerator();
    v10 = std::vector<unsigned int>::end(&this->candidate_path_id_vec_)._M_current;
    v11._M_current = std::vector<unsigned int>::begin(&this->candidate_path_id_vec_)._M_current;
    std::shuffle<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &>(
      v11,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v10,
      RandGenerator);
  }
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 454: range 000000001504B580-000000001504BF59
void __cdecl ExpeditionActivity::tryFetchCandidatePath(ExpeditionActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v4; // rdx
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // r15
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v7; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rdx
  std::vector<unsigned int>::reference v9; // rdx
  uint32_t v10; // ecx
  uint32_t v11; // ecx
  uint32_t cur_challenge_id; // ecx
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  bool is_cur_challenge_finished; // [rsp+13h] [rbp-16Dh]
  uint32_t now; // [rsp+14h] [rbp-16Ch]
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self __x; // [rsp+18h] [rbp-168h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-160h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-158h] BYREF
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-150h]
  const std::vector<unsigned int> *mark_id_vec; // [rsp+38h] [rbp-148h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-140h]
  ExpeditionChallenge *challenge_map_ptr; // [rsp+48h] [rbp-138h]
  ExpeditionPath *expedition_path; // [rsp+50h] [rbp-130h]
  const data::ExpeditionPathExcelConfig *path_config_ptr; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v33; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v34; // [rsp+70h] [rbp-110h] BYREF
  char v35[240]; // [rsp+90h] [rbp-F0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 4 11 path_id:502 64 4 11 mark_id:510 80 4 11 mark_id:470 96 8 8 iter:495 128 24 22 remain_mark_id_vec:469";
  *(_QWORD *)(v1 + 16) = ExpeditionActivity::tryFetchCandidatePath;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -218103808;
  v3[536862725] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ && !std::vector<unsigned int>::empty(&this->candidate_path_id_vec_) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v33);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_expedition_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v33);
    mark_id_vec = ActivityExpeditionExcelConfigMgr::getMarkIdVec(conf_mgr);
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
    __for_range = mark_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(mark_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(mark_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v4 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 80) = *v4;
      if ( !ExpeditionActivity::isMarkIdInUse(this, *(_DWORD *)(v1 + 80)) )
        std::vector<unsigned int>::push_back(
          (std::vector<unsigned int> *const)(v1 + 128),
          (const std::vector<unsigned int>::value_type *)(v1 + 80));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 128)) )
    {
      is_cur_challenge_finished = 0;
      challenge_map_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,ExpeditionChallenge>>(
                            &this->expedition_challenge_map_,
                            &this->cur_challenge_id_);
      if ( challenge_map_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&challenge_map_ptr->is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)challenge_map_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge_map_ptr->is_finished >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load1(&challenge_map_ptr->is_finished);
        }
        is_cur_challenge_finished = challenge_map_ptr->is_finished;
      }
      now = common::tools::TimeUtils::getNow();
      RandGenerator = common::tools::RandomUtils::getRandGenerator();
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 128))._M_current;
      v7._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 128))._M_current;
      std::shuffle<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul> &>(
        v7,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
        RandGenerator);
      *(std::vector<unsigned int>::iterator *)(v1 + 96) = std::vector<unsigned int>::begin(&this->candidate_path_id_vec_);
      while ( 1 )
      {
        __for_end._M_current = std::vector<unsigned int>::end(&this->candidate_path_id_vec_)._M_current;
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 96),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end)
          || std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 128)) )
        {
          break;
        }
        v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 96));
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 48) = *v8;
        __for_begin._M_current = (const unsigned int *)std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
        __x._M_node = std::map<unsigned int,ExpeditionPath>::find(
                        &this->expedition_path_map_,
                        (const std::map<unsigned int,ExpeditionPath>::key_type *)(v1 + 48))._M_node;
        if ( std::operator!=(
               &__x,
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self *)&__for_begin) )
        {
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 96));
        }
        else
        {
          v9 = std::vector<unsigned int>::back((std::vector<unsigned int> *const)(v1 + 128));
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 64) = *v9;
          std::vector<unsigned int>::pop_back((std::vector<unsigned int> *const)(v1 + 128));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
            &__for_end,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 96));
          *(std::vector<unsigned int>::iterator *)(v1 + 96) = std::vector<unsigned int>::erase(
                                                                &this->candidate_path_id_vec_,
                                                                __for_end);
          expedition_path = std::map<unsigned int,ExpeditionPath>::operator[](
                              &this->expedition_path_map_,
                              (const std::map<unsigned int,ExpeditionPath>::key_type *)(v1 + 48));
          v10 = *(_DWORD *)(v1 + 48);
          if ( *(_BYTE *)(((unsigned __int64)expedition_path >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)expedition_path >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(expedition_path);
          }
          expedition_path->path_id = v10;
          v11 = *(_DWORD *)(v1 + 64);
          if ( *(_BYTE *)(((unsigned __int64)&expedition_path->mark_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)expedition_path + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->mark_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_store4(&expedition_path->mark_id);
          }
          expedition_path->mark_id = v11;
          if ( *(_BYTE *)(((unsigned __int64)&expedition_path->refresh_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&expedition_path->refresh_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&expedition_path->refresh_time);
          }
          expedition_path->refresh_time = now;
          if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_store4(&expedition_path->state);
          }
          expedition_path->state = EXPEDITION_NONE;
          path_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionPathExcelConfig(
                              conf_mgr,
                              *(_DWORD *)(v1 + 48));
          if ( path_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)path_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( path_config_ptr->difficulty_id == 1 )
            {
              if ( !is_cur_challenge_finished )
              {
                if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_store4(&expedition_path->state);
                }
                expedition_path->state = EXPEDITION_LOCKED;
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3)
                                                                    + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              cur_challenge_id = this->cur_challenge_id_;
              if ( *(_BYTE *)(((unsigned __int64)&expedition_path->challenge_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&expedition_path->challenge_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&expedition_path->challenge_id);
              }
              expedition_path->challenge_id = cur_challenge_id;
            }
          }
          common::milog::MiLogStream::create(
            &v34,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/expedition_activity.cpp",
            "tryFetchCandidatePath",
            529);
          v13 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v34,
                  (const char (*)[41])"[EXPEDITION] tryFetchCandidatePath uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v1 + 80) = Player::getUid(this->player_);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v1 + 80));
          v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v14,
                  (const char (*)[21])" add path, path_id: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v1 + 48));
          v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])" ,mark_id: ");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v1 + 64));
          v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])" state:");
          v20 = common::milog::MiLogStream::operator<<<proto::ExpeditionState,(proto::ExpeditionState*)0>(
                  v19,
                  &expedition_path->state);
          v21 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v20,
                  (const char (*)[15])" challenge_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &expedition_path->challenge_id);
          common::milog::MiLogStream::~MiLogStream(&v34);
        }
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
  }
  if ( v35 == (char *)v1 )
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

// Line 535: range 000000001504BF5A-000000001504C229
std::string *__cdecl ExpeditionActivity::createPathTransaction[abi:cxx11](
        std::string *retstr,
        ExpeditionActivity *const this,
        uint32_t path_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // rbx
  uint32_t Uid; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  time_t Now; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  char v16[560]; // [rsp+20h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 48 392 6 ss:537";
  *(_QWORD *)(v3 + 16) = ExpeditionActivity::createPathTransaction[abi:cxx11];
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  v5[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v7 = std::ostream::operator<<(v3 + 64, Uid);
  v8 = std::operator<<<std::char_traits<char>>(v7, "-");
  v9 = std::ostream::operator<<(v8, path_id);
  v10 = std::operator<<<std::char_traits<char>>(v9, "-");
  Now = common::tools::TimeUtils::getNow();
  v12 = std::ostream::operator<<(v10, Now);
  v13 = std::operator<<<std::char_traits<char>>(v12, "-");
  std::ostream::operator<<(v13, ++ExpeditionActivity::createPathTransaction[abi:cxx11](unsigned int)::transaction_id);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v3 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 48);
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
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
  }
  return retstr;
};

// Line 543: range 000000001504C22A-000000001504D1B6
// local variable allocation has failed, the output may be wrong!
void __cdecl ExpeditionActivity::checkAndDealWithFinishedPath(ExpeditionActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  PlayerBasicComp *BasicComp; // rax
  const ActivityExpeditionExcelConfigMgr *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t assist_avatar_id; // ecx
  uint32_t Uid; // eax
  PlayerBasicComp *v14; // rax
  const std::string *v15; // rax
  GameserverService *v16; // r14
  unsigned __int64 v17; // rdx
  GameserverService *v18; // r14
  common::minet::Packet *v19; // r14
  uint32_t v20; // eax
  common::minet::Packet *v21; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // r14
  unsigned __int64 v23; // rax
  void (__fastcall *v24)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<ActivityExpeditionFinishEvent> *); // r15
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  Player *v29; // r14
  std::string v30; // [rsp+0h] [rbp-1F0h] OVERLAPPED BYREF
  std::map<unsigned int,ExpeditionPath>::iterator __for_begin; // [rsp+20h] [rbp-1D0h] BYREF
  std::map<unsigned int,ExpeditionPath>::iterator __for_end; // [rsp+28h] [rbp-1C8h] BYREF
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+30h] [rbp-1C0h]
  std::map<unsigned int,ExpeditionPath> *__for_range; // [rsp+38h] [rbp-1B8h]
  std::pair<unsigned int const,ExpeditionPath> *__in; // [rsp+40h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,ExpeditionPath> >::type *path_id; // [rsp+48h] [rbp-1A8h]
  std::tuple_element<1,std::pair<unsigned int const,ExpeditionPath> >::type *expedition_path; // [rsp+50h] [rbp-1A0h]
  const data::ExpeditionPathExcelConfig *path_config_ptr; // [rsp+58h] [rbp-198h]
  proto::OfflineMsgBin *msg; // [rsp+60h] [rbp-190h]
  proto::ExpeditionActivityAssistOp *op; // [rsp+68h] [rbp-188h]
  std::shared_ptr<ActivityExpeditionFinishEvent> __r; // [rsp+70h] [rbp-180h] BYREF
  std::string value; // [rsp+80h] [rbp-170h] BYREF
  char v43[336]; // [rsp+A0h] [rbp-150h] BYREF

  v30._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v43;
  v30._M_dataplus._M_p = v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 1 10 holder:544 64 16 13 event_ptr:566 96 16 11 log_ptr:595 128 16 14 packet_ptr:583 160 32"
                        " 19 offline_msg_req:572 224 32 10 ticket:574";
  *(_QWORD *)(v1 + 16) = ExpeditionActivity::checkAndDealWithFinishedPath;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862724] = -219021312;
  v3[536862726] = -218959118;
  v3[536862728] = -202116109;
  if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(v30._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&value, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xC31u, v30);
  std::string::~string(&value);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 128));
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128))->design_config.txt_config_mgr.activity_expedition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 128));
  *((_DWORD *)&v30._anon_0._M_allocated_capacity + 2) = common::tools::TimeUtils::getNow();
  v30._anon_0._M_local_buf[3] = 0;
  __for_range = (std::map<unsigned int,ExpeditionPath> *)(v30._M_string_length + 984);
  __for_begin._M_node = std::map<unsigned int,ExpeditionPath>::begin((std::map<unsigned int,ExpeditionPath> *const)(v30._M_string_length + 984))._M_node;
  __for_end._M_node = std::map<unsigned int,ExpeditionPath>::end((std::map<unsigned int,ExpeditionPath> *const)(v30._M_string_length + 984))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator*(&__for_begin);
    path_id = std::get<0ul,unsigned int const,ExpeditionPath>(__in);
    expedition_path = std::get<1ul,unsigned int const,ExpeditionPath>(__in);
    v5 = conf_mgr;
    if ( *(_BYTE *)(((unsigned __int64)path_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)path_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)path_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    path_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionPathExcelConfig(v5, *path_id);
    if ( path_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( expedition_path->state == EXPEDITION_STARTED )
      {
        if ( *(_BYTE *)(((unsigned __int64)path_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)path_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)path_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *((_DWORD *)&v30._anon_0._M_allocated_capacity + 3) = ActivityExpeditionExcelConfigMgr::getExpeditionNeedTime(
                                                                conf_mgr,
                                                                *path_id);
        if ( *((_DWORD *)&v30._anon_0._M_allocated_capacity + 3) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( *((_DWORD *)&v30._anon_0._M_allocated_capacity + 2) >= expedition_path->start_time
                                                                    + *((_DWORD *)&v30._anon_0._M_allocated_capacity + 3) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&value,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/expedition_activity.cpp",
              "checkAndDealWithFinishedPath",
              562);
            v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                   (common::milog::MiLogStream *const)&value,
                   (const char (*)[48])"[EXPEDITION] checkAndDealWithFinishedPath uid: ");
            if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            HIDWORD(v30._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v30._M_string_length
                                                                                               + 24));
            v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v7,
                   (const unsigned int *)&v30._anon_0._M_allocated_capacity + 1);
            v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])" ,path_id: ");
            v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, path_id);
            common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])off_256E5880);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
            if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_store4(&expedition_path->state);
            }
            expedition_path->state = EXPEDITION_FINISHED;
            if ( *(_BYTE *)(((v30._M_string_length + 1112) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((v30._M_string_length + 1112) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            ++*(_DWORD *)(v30._M_string_length + 1112);
            common::tools::perf::make_shared<ActivityExpeditionFinishEvent>();
            std::shared_ptr<BaseEvent>::shared_ptr<ActivityExpeditionFinishEvent,void>(
              (std::shared_ptr<BaseEvent> *const)(v1 + 64),
              &__r);
            std::shared_ptr<ActivityExpeditionFinishEvent>::~shared_ptr(&__r);
            if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(*(Player *const *)(v30._M_string_length + 24));
            std::shared_ptr<BaseEvent>::shared_ptr(
              (std::shared_ptr<BaseEvent> *const)&__r,
              (const std::shared_ptr<BaseEvent> *)(v1 + 64));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
            if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( expedition_path->assist_uid )
            {
              proto::SendOfflineMsgReq::SendOfflineMsgReq((proto::SendOfflineMsgReq *const)(v1 + 160));
              msg = proto::SendOfflineMsgReq::mutable_msg((proto::SendOfflineMsgReq *const)(v1 + 160));
              if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)expedition_path + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              assist_avatar_id = expedition_path->assist_avatar_id;
              if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              ExpeditionActivity::createAssistOpTicket[abi:cxx11](
                (std::string *)(v1 + 224),
                (ExpeditionActivity *const)v30._M_string_length,
                expedition_path->assist_uid,
                assist_avatar_id);
              proto::OfflineMsgBin::set_ticket(msg, (const std::string *)(v1 + 224));
              op = proto::OfflineMsgBin::mutable_expedition_assist_op(msg);
              if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)expedition_path + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto::ExpeditionActivityAssistOp::set_avatar_id(op, expedition_path->assist_avatar_id);
              if ( *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto::ExpeditionActivityAssistOp::set_assist_time(op, expedition_path->start_time);
              if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Uid = Player::getUid(*(const Player *const *)(v30._M_string_length + 24));
              proto::ExpeditionActivityAssistOp::set_target_uid(op, Uid);
              if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v14 = Player::getBasicComp(*(Player *const *)(v30._M_string_length + 24));
              v15 = PlayerBasicComp::getNickName[abi:cxx11](v14);
              proto::ExpeditionActivityAssistOp::set_target_nick_name(op, v15);
              if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              Player::getOnlineId[abi:cxx11](&value, *(Player *const *)(v30._M_string_length + 24));
              proto::ExpeditionActivityAssistOp::set_online_id(op, &value);
              std::string::~string(&value);
              if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              proto::ExpeditionActivityAssistOp::set_assist_uid(op, expedition_path->assist_uid);
              common::minet::PacketUtils::createPacket<proto::SendOfflineMsgReq>((const proto::SendOfflineMsgReq *)(v1 + 128));
              if ( std::operator!=<common::minet::Packet>(
                     0LL,
                     (const std::shared_ptr<common::minet::Packet> *)(v1 + 128)) )
              {
                v16 = ServiceBox::findService<GameserverService>();
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)&__r,
                  (const std::shared_ptr<common::minet::Packet> *)(v1 + 128));
                ServiceBase::setPacketSource(v16, (common::minet::PacketPtr)__PAIR128__(v17, &__r));
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
                v18 = ServiceBox::findService<GameserverService>();
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)&__r,
                  (const std::shared_ptr<common::minet::Packet> *)(v1 + 128));
                GameserverService::setPacketGameThreadIndex(v18, (common::minet::PacketPtr *)&__r);
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
                v19 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v20 = Player::getUid(*(const Player *const *)(v30._M_string_length + 24));
                common::minet::Packet::setUserId(v19, v20);
                v21 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 128));
                common::minet::Packet::setTargetService(v21, 9u);
                v22 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
                if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v23 = (unsigned __int64)(v22->_vptr_NetworkMgrBase + 8);
                if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
                  v23 = __asan_report_load8();
                v24 = *(void (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<ActivityExpeditionFinishEvent> *))v23;
                std::shared_ptr<common::minet::Packet>::shared_ptr(
                  (std::shared_ptr<common::minet::Packet> *const)&__r,
                  (const std::shared_ptr<common::minet::Packet> *)(v1 + 128));
                v24(v22, &__r);
                std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)&__r);
              }
              std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v1 + 128));
              std::string::~string((void *)(v1 + 224));
              proto::SendOfflineMsgReq::~SendOfflineMsgReq((proto::SendOfflineMsgReq *const)(v1 + 160));
            }
            common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityExpeditionFinish>();
            v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)path_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)path_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)path_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyActivityExpeditionFinish::set_path_id(v25, *path_id);
            v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            if ( *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)path_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3)
                                                                             + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyActivityExpeditionFinish::set_difficulty_id(v26, path_config_ptr->difficulty_id);
            v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            proto_log::PlayerLogBodyActivityExpeditionFinish::set_transaction_no(v27, &expedition_path->transaction);
            v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
            proto_log::PlayerLogBodyActivityExpeditionFinish::set_result(v28, 1u);
            if ( *(_BYTE *)(((v30._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v29 = *(Player **)(v30._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(
              (std::shared_ptr<google::protobuf::Message> *const)&__r,
              0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish,void>(
              (std::shared_ptr<google::protobuf::Message> *const)(v1 + 128),
              (const std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish> *)(v1 + 96));
            Player::printStatLog(v29, (MessagePtr *)(v1 + 128), (MessagePtr *)&__r, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v1 + 128));
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
            v30._anon_0._M_local_buf[3] = 1;
            std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish> *const)(v1 + 96));
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v1 + 64));
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&value,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "checkAndDealWithFinishedPath",
        553);
      v6 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             (common::milog::MiLogStream *const)&value,
             (const char (*)[61])"[EXPEDITION] findExpeditionPathExcelConfig failed, path_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, path_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&value);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(&__for_begin);
  }
  if ( v30._anon_0._M_local_buf[3] )
    BaseActivity::notifyClientData((BaseActivity *const)v30._M_string_length, 0);
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v30._M_dataplus._M_p == (std::string::pointer)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 614: range 000000001504D1B8-000000001504D346
__int64 __fastcall ExpeditionActivity::isAvatarInExpedition(const ExpeditionActivity *const this, uint32_t avatar_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  const std::map<unsigned int,ExpeditionPath> *__for_range; // [rsp+20h] [rbp-80h]
  const std::pair<unsigned int const,ExpeditionPath> *v9; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,ExpeditionPath> >::type *_; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *expedition_path; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 avatar_id:613";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::isAvatarInExpedition;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = avatar_id;
  __for_range = &this->expedition_path_map_;
  __for_begin._M_node = std::map<unsigned int,ExpeditionPath>::begin(&this->expedition_path_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ExpeditionPath>(v9);
    expedition_path = (std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *)std::get<1ul,unsigned int const,ExpeditionPath>(v9);
    if ( std::set<unsigned int>::count(
           &expedition_path->avatar_id_set,
           (const std::set<unsigned int>::key_type *)(v2 + 32)) )
    {
      result = 1LL;
      goto LABEL_10;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_10:
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

// Line 627: range 000000001504D348-000000001504D477
bool __cdecl ExpeditionActivity::isAssistAvatarInExpedition(
        const ExpeditionActivity *const this,
        uint32_t assist_uid,
        uint32_t assist_avatar_id)
{
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,ExpeditionPath> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,ExpeditionPath> *v8; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,ExpeditionPath> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *expedition_path; // [rsp+38h] [rbp-8h]

  __for_range = &this->expedition_path_map_;
  __for_begin._M_node = std::map<unsigned int,ExpeditionPath>::begin(&this->expedition_path_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ExpeditionPath>(v8);
    expedition_path = (std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *)std::get<1ul,unsigned int const,ExpeditionPath>(v8);
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( assist_uid == expedition_path->assist_uid )
    {
      if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)expedition_path + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( assist_avatar_id == expedition_path->assist_avatar_id )
        return 1;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 641: range 000000001504D478-000000001504D565
bool __cdecl ExpeditionActivity::isMarkIdInUse(const ExpeditionActivity *const this, uint32_t mark_id)
{
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,ExpeditionPath>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::map<unsigned int,ExpeditionPath> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,ExpeditionPath> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,ExpeditionPath> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *expedition_path; // [rsp+38h] [rbp-8h]

  __for_range = &this->expedition_path_map_;
  __for_begin._M_node = std::map<unsigned int,ExpeditionPath>::begin(&this->expedition_path_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,ExpeditionPath>(v6);
    expedition_path = (std::tuple_element<1,const std::pair<unsigned int const,ExpeditionPath> >::type *)std::get<1ul,unsigned int const,ExpeditionPath>(v6);
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->mark_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->mark_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( mark_id == expedition_path->mark_id )
      return 1;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 654: range 000000001504D566-000000001504D85D
std::string *__cdecl ExpeditionActivity::createAssistOpTicket[abi:cxx11](
        std::string *retstr,
        ExpeditionActivity *const this,
        uint32_t assist_uid,
        uint32_t assist_avatar_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  uint32_t Uid; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  time_t Now; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  char v20[560]; // [rsp+20h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 392 6 ss:656";
  *(_QWORD *)(v4 + 16) = ExpeditionActivity::createAssistOpTicket[abi:cxx11];
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v6[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v8 = std::ostream::operator<<(v4 + 64, Uid);
  v9 = std::operator<<<std::char_traits<char>>(v8, "-");
  v10 = std::ostream::operator<<(v9, assist_uid);
  v11 = std::operator<<<std::char_traits<char>>(v10, "-");
  v12 = std::ostream::operator<<(v11, assist_avatar_id);
  v13 = std::operator<<<std::char_traits<char>>(v12, "-");
  Now = common::tools::TimeUtils::getNow();
  v15 = std::ostream::operator<<(v13, Now);
  v16 = std::operator<<<std::char_traits<char>>(v15, "-");
  std::ostream::operator<<(
    v16,
    ++ExpeditionActivity::createAssistOpTicket[abi:cxx11](unsigned int,unsigned int)::transaction_id);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v4 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 48);
  if ( v20 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF803C) = 0;
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
  }
  return retstr;
};

// Line 662: range 000000001504D85E-000000001504DBC0
int32_t __cdecl ExpeditionActivity::onExpeditionAssist(
        ExpeditionActivity *const this,
        const proto::ExpeditionActivityAssistOp *op)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const std::string *v5; // rax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<ExpeditionAssistRecordInfo*,std::vector<ExpeditionAssistRecordInfo> > __i; // [rsp+10h] [rbp-100h] BYREF
  __gnu_cxx::__normal_iterator<const ExpeditionAssistRecordInfo*,std::vector<ExpeditionAssistRecordInfo> > __position; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-F0h] BYREF
  char v20[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 80 22 assist_record_info:664";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::onExpeditionAssist;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862724] = -202116109;
  ExpeditionAssistRecordInfo::ExpeditionAssistRecordInfo((ExpeditionAssistRecordInfo *const)(v2 + 48));
  *(_DWORD *)(v2 + 48) = proto::ExpeditionActivityAssistOp::avatar_id(op);
  *(_DWORD *)(v2 + 52) = proto::ExpeditionActivityAssistOp::assist_time(op);
  *(_DWORD *)(v2 + 56) = proto::ExpeditionActivityAssistOp::target_uid(op);
  v5 = proto::ExpeditionActivityAssistOp::target_nick_name[abi:cxx11](op);
  std::string::operator=(v2 + 64, v5);
  v6 = proto::ExpeditionActivityAssistOp::online_id[abi:cxx11](op);
  std::string::operator=(v2 + 96, v6);
  std::vector<ExpeditionAssistRecordInfo>::push_back(
    &this->assist_record_vec_,
    (const std::vector<ExpeditionAssistRecordInfo>::value_type *)(v2 + 48));
  if ( std::vector<ExpeditionAssistRecordInfo>::size(&this->assist_record_vec_) > 0x64 )
  {
    __i._M_current = std::vector<ExpeditionAssistRecordInfo>::begin(&this->assist_record_vec_)._M_current;
    __gnu_cxx::__normal_iterator<ExpeditionAssistRecordInfo const*,std::vector<ExpeditionAssistRecordInfo>>::__normal_iterator<ExpeditionAssistRecordInfo*>(
      &__position,
      &__i);
    std::vector<ExpeditionAssistRecordInfo>::erase(&this->assist_record_vec_, __position);
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/expedition_activity.cpp",
    "onExpeditionAssist",
    677);
  v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
         &v19,
         (const char (*)[44])"[EXPEDITION] onExpeditionAssist avatar_id: ");
  v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" ,assist_time: ");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 52));
  v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])" ,target_uid: ");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 56));
  v13 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v12, (const char (*)[21])" ,target_nick_name: ");
  v14 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v2 + 64));
  v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])" ,online_id: ");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v2 + 96));
  common::milog::MiLogStream::~MiLogStream(&v19);
  ExpeditionAssistRecordInfo::~ExpeditionAssistRecordInfo((ExpeditionAssistRecordInfo *const)(v2 + 48));
  result = 0;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
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

// Line 684: range 000000001504DBC2-000000001504DEA6
__int64 __fastcall ExpeditionActivity::getExpeditionChallengeOpenTime(
        const ExpeditionActivity *const this,
        uint32_t id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t schedule_begin_time; // [rsp+1Ch] [rbp-A4h]
  ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+20h] [rbp-A0h]
  const data::ExpeditionChallengeExcelConfig *challenge_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-80h] BYREF
  char v14[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 id:683";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::getExpeditionChallengeOpenTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  schedule_begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(p_new_activity_config_mgr, this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_expedition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  challenge_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionChallengeExcelConfig(
                           conf_mgr,
                           *(_DWORD *)(v2 + 32));
  if ( challenge_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->unlock_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)challenge_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->unlock_time >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = 3600 * challenge_config_ptr->unlock_time + schedule_begin_time;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "getExpeditionChallengeOpenTime",
      692);
    v7 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v13, this);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           v7,
           (const char (*)[41])" config not found @expedition challenge:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0LL;
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

// Line 697: range 000000001504DEA8-000000001504E4D8
void __cdecl ExpeditionActivity::unloadExpeditionChallengeGroups(ExpeditionActivity *const this)
{
  std::shared_ptr<Scene> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  const ActivityExpeditionExcelConfigMgr *v5; // rcx
  Scene *v6; // rax
  unsigned __int64 v7; // rax
  void (__fastcall *v8)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64); // [rsp+8h] [rbp-128h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+10h] [rbp-120h]
  std::allocator<unsigned int> __a; // [rsp+27h] [rbp-109h] BYREF
  unsigned int val; // [rsp+28h] [rbp-108h] BYREF
  uint32_t now; // [rsp+2Ch] [rbp-104h]
  std::map<unsigned int,ExpeditionChallenge>::iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::map<unsigned int,ExpeditionChallenge>::iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+40h] [rbp-F0h]
  std::map<unsigned int,ExpeditionChallenge> *__for_range; // [rsp+48h] [rbp-E8h]
  std::pair<unsigned int const,ExpeditionChallenge> *__in; // [rsp+50h] [rbp-E0h]
  std::tuple_element<0,std::pair<unsigned int const,ExpeditionChallenge> >::type *id; // [rsp+58h] [rbp-D8h]
  std::tuple_element<1,std::pair<unsigned int const,ExpeditionChallenge> >::type *expedition_challenge; // [rsp+60h] [rbp-D0h]
  const data::ExpeditionChallengeExcelConfig *challenge_config_ptr; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+70h] [rbp-C0h] BYREF
  std::vector<unsigned int> v22; // [rsp+80h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+A0h] [rbp-90h] BYREF
  char v24[112]; // [rsp+C0h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<Scene> *)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<Scene> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 scene_ptr:698";
  v1[1]._M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)ExpeditionActivity::unloadExpeditionChallengeGroups;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
  std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(v1 + 2, &__r);
  std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
  if ( std::operator==<Scene>(0LL, v1 + 2) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "unloadExpeditionChallengeGroups",
      701);
    v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v23,
           (const char (*)[45])"[EXPEDITION] getMainWorldScene failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__r);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.activity_expedition_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
    __for_range = &this->expedition_challenge_map_;
    __for_begin._M_node = std::map<unsigned int,ExpeditionChallenge>::begin(&this->expedition_challenge_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,ExpeditionChallenge>::end(&this->expedition_challenge_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,ExpeditionChallenge>(__in);
      expedition_challenge = std::get<1ul,unsigned int const,ExpeditionChallenge>(__in);
      v5 = conf_mgr;
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      challenge_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionChallengeExcelConfig(v5, *id);
      if ( challenge_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_group_load >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)expedition_challenge + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_group_load >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_load1(&expedition_challenge->is_group_load);
        }
        if ( expedition_challenge->is_group_load )
        {
          v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v1[2]);
          BlockGroupComp = Scene::getBlockGroupComp(v6);
          if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v7 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
          if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
            v7 = __asan_report_load8();
          v8 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v7;
          if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          val = challenge_config_ptr->group_id;
          std::allocator<unsigned int>::allocator(&__a);
          std::vector<unsigned int>::vector(&v22, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
          v8(BlockGroupComp, &v22, 1LL);
          std::vector<unsigned int>::~vector(&v22);
          std::allocator<unsigned int>::~allocator(&__a);
          if ( *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_group_load >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)expedition_challenge + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_group_load >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_store1(&expedition_challenge->is_group_load);
          }
          expedition_challenge->is_group_load = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/expedition_activity.cpp",
          "unloadExpeditionChallengeGroups",
          712);
        common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
          &v23,
          (const char (*)[55])"[EXPEDITION] findExpeditionChallengeExcelConfig failed");
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<Scene>::~shared_ptr(v1 + 2);
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<Scene,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 725: range 000000001504E4DA-000000001504EB32
void __fastcall ExpeditionActivity::onExpeditionChallengeEnterRegion(
        ExpeditionActivity *const this,
        uint32_t group_id,
        bool is_puzzle_finished)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::pointer v12; // rax
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<proto::ExpeditionChallengeEnterRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto::ExpeditionChallengeEnterRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  Player *player; // r14
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-F8h]
  const data::ExpeditionChallengeExcelConfig *challenge_config_ptr; // [rsp+30h] [rbp-F0h]
  ExpeditionChallenge *expedition_challenge; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<const google::protobuf::Message> v26; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+70h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 group_id:724 64 8 8 iter:735 96 16 14 notify_ptr:749";
  *(_QWORD *)(v3 + 16) = ExpeditionActivity::onExpeditionChallengeEnterRegion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = group_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_expedition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v26);
  challenge_config_ptr = ActivityExpeditionExcelConfigMgr::findExpeditionChallengeExcelConfigByGroupId(
                           conf_mgr,
                           *(_DWORD *)(v3 + 48));
  if ( challenge_config_ptr )
  {
    *(std::map<unsigned int,ExpeditionChallenge>::iterator *)(v3 + 64) = std::map<unsigned int,ExpeditionChallenge>::find(
                                                                           &this->expedition_challenge_map_,
                                                                           &challenge_config_ptr->id);
    __y._M_node = std::map<unsigned int,ExpeditionChallenge>::end(&this->expedition_challenge_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self *)(v3 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "onExpeditionChallengeEnterRegion",
        738);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v27,
             (const char (*)[53])"[EXPEDITION] find expedition challenge failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])" ,challenge id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &challenge_config_ptr->id);
      common::milog::MiLogStream::~MiLogStream(&v27);
    }
    else
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> > *const)(v3 + 64));
      expedition_challenge = &v12->second;
      p_is_finished = &v12->second.is_finished;
      if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_finished);
      }
      if ( expedition_challenge->is_finished )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/expedition_activity.cpp",
          "onExpeditionChallengeEnterRegion",
          745);
        v14 = common::milog::MiLogStream::operator<<<char [95],(char *[95])0>(
                &v27,
                (const char (*)[95])"[EXPEDITION] onExpeditionChallengeEnterRegion, expedition challenge is already finished, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v15,
                (const char (*)[17])" ,challenge id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v16,
          (const unsigned int *)expedition_challenge);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      else
      {
        common::tools::perf::make_shared<proto::ExpeditionChallengeEnterRegionNotify>();
        v17 = std::__shared_ptr_access<proto::ExpeditionChallengeEnterRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ExpeditionChallengeEnterRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        proto::ExpeditionChallengeEnterRegionNotify::set_is_puzzle_finished(v17, is_puzzle_finished);
        v18 = std::__shared_ptr_access<proto::ExpeditionChallengeEnterRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ExpeditionChallengeEnterRegionNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)expedition_challenge >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)expedition_challenge & 7) + 3) >= *(_BYTE *)(((unsigned __int64)expedition_challenge >> 3)
                                                                                 + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ExpeditionChallengeEnterRegionNotify::set_id(v18, expedition_challenge->id);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::dynamic_pointer_cast<google::protobuf::Message const,proto::ExpeditionChallengeEnterRegionNotify>((const std::shared_ptr<proto::ExpeditionChallengeEnterRegionNotify> *)&v26);
        Player::sendMessage(player, &v26, 0LL);
        std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v26);
        std::shared_ptr<proto::ExpeditionChallengeEnterRegionNotify>::~shared_ptr((std::shared_ptr<proto::ExpeditionChallengeEnterRegionNotify> *const)(v3 + 96));
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "onExpeditionChallengeEnterRegion",
      730);
    v6 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v27,
           (const char (*)[71])"[EXPEDITION] findExpeditionChallengeExcelConfigByGroupId failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" ,group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  if ( v28 == (char *)v3 )
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

// Line 756: range 000000001504EB34-000000001504F949
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall ExpeditionActivity::onExpeditionChallengeFinished(ExpeditionActivity *const this, uint32_t group_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  common::milog::MiLogStream *v9; // rbx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::pointer v12; // rax
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v26; // rbx
  PlayerItemComp *v27; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t v29; // edx
  std::__shared_ptr_access<proto::ExpeditionChallengeFinishedNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  Player *v31; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  Player *v35; // r14
  __int64 result; // rax
  std::string v37; // [rsp+0h] [rbp-190h] OVERLAPPED BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self __y; // [rsp+20h] [rbp-170h] BYREF
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+28h] [rbp-168h]
  const data::ExpeditionChallengeExcelConfig *challenge_config_ptr; // [rsp+30h] [rbp-160h]
  ExpeditionChallenge *expedition_challenge; // [rsp+38h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v43; // [rsp+50h] [rbp-140h] BYREF
  common::milog::MiLogStream v44; // [rsp+60h] [rbp-130h] BYREF
  char v45[272]; // [rsp+80h] [rbp-110h] BYREF

  v37._M_string_length = (std::string::size_type)this;
  HIDWORD(v37._M_dataplus._M_p) = group_id;
  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 10 holder:811 48 4 12 group_id:755 64 8 8 iter:766 96 16 14 notify_ptr:806 128 16 11 log_"
                        "ptr:812 160 24 10 reason:794";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::onExpeditionChallengeFinished;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = HIDWORD(v37._M_dataplus._M_p);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v43);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v43)->design_config.txt_config_mgr.activity_expedition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v43);
  challenge_config_ptr = ActivityExpeditionExcelConfigMgr::findExpeditionChallengeExcelConfigByGroupId(
                           conf_mgr,
                           *(_DWORD *)(v2 + 48));
  if ( challenge_config_ptr )
  {
    *(std::map<unsigned int,ExpeditionChallenge>::iterator *)(v2 + 64) = std::map<unsigned int,ExpeditionChallenge>::find(
                                                                           (std::map<unsigned int,ExpeditionChallenge> *const)(v37._M_string_length + 1064),
                                                                           &challenge_config_ptr->id);
    __y._M_node = std::map<unsigned int,ExpeditionChallenge>::end((std::map<unsigned int,ExpeditionChallenge> *const)(v37._M_string_length + 1064))._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> >::_Self *)(v2 + 64),
           &__y) )
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "onExpeditionChallengeFinished",
        769);
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v44,
             (const char (*)[53])"[EXPEDITION] find expedition challenge failed, uid: ");
      if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HIDWORD(v37._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v37._M_string_length + 24));
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v9,
              (const unsigned int *)&v37._anon_0._M_allocated_capacity + 1);
      v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])" ,challenge id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &challenge_config_ptr->id);
      common::milog::MiLogStream::~MiLogStream(&v44);
      v8 = -1;
    }
    else
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionChallenge> > *const)(v2 + 64));
      expedition_challenge = &v12->second;
      p_is_finished = &v12->second.is_finished;
      if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_finished);
      }
      if ( expedition_challenge->is_finished )
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/expedition_activity.cpp",
          "onExpeditionChallengeFinished",
          776);
        v14 = common::milog::MiLogStream::operator<<<char [95],(char *[95])0>(
                &v44,
                (const char (*)[95])"[EXPEDITION] onExpeditionChallengeEnterRegion, expedition challenge is already finished, uid: ");
        if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HIDWORD(v37._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v37._M_string_length + 24));
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)&v37._anon_0._M_allocated_capacity + 1);
        v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v15,
                (const char (*)[17])" ,challenge id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v16,
          (const unsigned int *)expedition_challenge);
        common::milog::MiLogStream::~MiLogStream(&v44);
        v8 = -1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/expedition_activity.cpp",
          "onExpeditionChallengeFinished",
          780);
        v17 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                &v44,
                (const char (*)[50])"[EXPEDITION] onExpeditionChallengeFinished, uid: ");
        if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HIDWORD(v37._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v37._M_string_length + 24));
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)&v37._anon_0._M_allocated_capacity + 1);
        v19 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v18,
                (const char (*)[17])" ,challenge id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &challenge_config_ptr->id);
        v21 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" ,group_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v44);
        if ( *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_finished >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)expedition_challenge + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&expedition_challenge->is_finished >> 3)
                                                                           + 0x7FFF8000) )
        {
          __asan_report_store1(&expedition_challenge->is_finished);
        }
        expedition_challenge->is_finished = 1;
        if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( ExpeditionActivity::isChallengeExpired(
               (const ExpeditionActivity *const)v37._M_string_length,
               challenge_config_ptr->id) )
        {
          common::milog::MiLogStream::create(
            &v44,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/expedition_activity.cpp",
            "onExpeditionChallengeFinished",
            787);
          v22 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(
                  &v44,
                  (const ExpeditionActivity *)v37._M_string_length);
          v23 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v22, (const char (*)[12])" challenge:");
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &challenge_config_ptr->id);
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" expired.");
          common::milog::MiLogStream::~MiLogStream(&v44);
          v8 = 0;
        }
        else
        {
          ExpeditionActivity::unlockTopExpeditionPath((ExpeditionActivity *const)v37._M_string_length);
          ActionReason::ActionReason(
            (ActionReason *const)(v2 + 160),
            ACTION_REASON_EXPEDITION_REWARD,
            ITEM_LIMIT_ACTIVITY_EXPEDITION_REWARD);
          if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->reward_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *((_DWORD *)&v37._anon_0._M_allocated_capacity + 2) = challenge_config_ptr->reward_id;
          if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ItemComp = Player::getItemComp(*(Player *const *)(v37._M_string_length + 24));
          *((_DWORD *)&v37._anon_0._M_allocated_capacity + 3) = PlayerItemComp::checkGrantReward(
                                                                  ItemComp,
                                                                  *((uint32_t *)&v37._anon_0._M_allocated_capacity + 2),
                                                                  (const ActionReason *)(v2 + 160));
          if ( *((_DWORD *)&v37._anon_0._M_allocated_capacity + 3) )
          {
            common::milog::MiLogStream::create(
              &v44,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/expedition_activity.cpp",
              "onExpeditionChallengeFinished",
              799);
            v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    &v44,
                    (const char (*)[44])"[EXPEDITION] checkGrantReward failed, uid: ");
            if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            HIDWORD(v37._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v37._M_string_length
                                                                                               + 24));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v26,
              (const unsigned int *)&v37._anon_0._M_allocated_capacity + 1);
            common::milog::MiLogStream::~MiLogStream(&v44);
            v8 = -1;
          }
          else
          {
            if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v27 = Player::getItemComp(*(Player *const *)(v37._M_string_length + 24));
            PlayerItemComp::grantReward(
              v27,
              *((uint32_t *)&v37._anon_0._M_allocated_capacity + 2),
              (const ActionReason *)(v2 + 160),
              0LL);
            if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            ActivityComp = Player::getActivityComp(*(Player *const *)(v37._M_string_length + 24));
            if ( *(_BYTE *)(((v37._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(v37._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((v37._M_string_length + 36) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              ActivityComp = (PlayerActivityComp *)(v37._M_string_length + 36);
              __asan_report_load4();
            }
            v29 = *(_DWORD *)(v37._M_string_length + 36);
            if ( *(_BYTE *)(((v37._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((v37._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
            {
              ActivityComp = (PlayerActivityComp *)(v37._M_string_length + 32);
              __asan_report_load4();
            }
            PlayerActivityComp::logGetActivityReward(
              ActivityComp,
              *(_DWORD *)(v37._M_string_length + 32),
              v29,
              *((uint32_t *)&v37._anon_0._M_allocated_capacity + 2));
            BaseActivity::notifyClientData((BaseActivity *const)v37._M_string_length, 0);
            common::tools::perf::make_shared<proto::ExpeditionChallengeFinishedNotify>();
            v30 = std::__shared_ptr_access<proto::ExpeditionChallengeFinishedNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ExpeditionChallengeFinishedNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( *(_BYTE *)(((unsigned __int64)expedition_challenge >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)expedition_challenge & 7) + 3) >= *(_BYTE *)(((unsigned __int64)expedition_challenge >> 3)
                                                                                     + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto::ExpeditionChallengeFinishedNotify::set_id(v30, expedition_challenge->id);
            if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v31 = *(Player **)(v37._M_string_length + 24);
            std::dynamic_pointer_cast<google::protobuf::Message const,proto::ExpeditionChallengeFinishedNotify>((const std::shared_ptr<proto::ExpeditionChallengeFinishedNotify> *)&v43);
            Player::sendMessage(v31, (common::minet::ConstMessagePtr *)&v43, 0LL);
            std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&v43);
            if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            BasicComp = Player::getBasicComp(*(Player *const *)(v37._M_string_length + 24));
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xC34u, v37);
            std::string::~string(&v44);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish>();
            v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyActivityExpeditionChallengeFinish::set_challenge_id(v33, challenge_config_ptr->id);
            v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            proto_log::PlayerLogBodyActivityExpeditionChallengeFinish::set_result(v34, 1u);
            if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v35 = *(Player **)(v37._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v43, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish> *)(v2 + 128));
            Player::printStatLog(v35, &p_body_ptr, &v43, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v43);
            v8 = 0;
            std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionChallengeFinish> *const)(v2 + 128));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
            std::shared_ptr<proto::ExpeditionChallengeFinishedNotify>::~shared_ptr((std::shared_ptr<proto::ExpeditionChallengeFinishedNotify> *const)(v2 + 96));
          }
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "onExpeditionChallengeFinished",
      761);
    v5 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
           &v44,
           (const char (*)[71])"[EXPEDITION] findExpeditionChallengeExcelConfigByGroupId failed, uid: ");
    if ( *(_BYTE *)(((v37._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HIDWORD(v37._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v37._M_string_length + 24));
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
           v5,
           (const unsigned int *)&v37._anon_0._M_allocated_capacity + 1);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])" ,group_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v44);
    v8 = -1;
  }
  result = v8;
  if ( v45 == (char *)v2 )
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

// Line 821: range 000000001504F94A-000000001504FD5A
__int64 __fastcall ExpeditionActivity::accelerateExpeditionByGm(
        ExpeditionActivity *const this,
        uint32_t path_id,
        uint32_t sub_time)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::pointer v10; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self __y; // [rsp+20h] [rbp-C0h] BYREF
  ExpeditionPath *expedition_path; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-B0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 path_id:820 64 8 8 iter:822";
  *(_QWORD *)(v3 + 16) = ExpeditionActivity::accelerateExpeditionByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = path_id;
  *(std::map<unsigned int,ExpeditionPath>::iterator *)(v3 + 64) = std::map<unsigned int,ExpeditionPath>::find(
                                                                    &this->expedition_path_map_,
                                                                    (const std::map<unsigned int,ExpeditionPath>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "accelerateExpeditionByGm",
      825);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v15,
           (const char (*)[36])"[EXPEDITION] path id invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,path_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
    goto LABEL_19;
  }
  v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *const)(v3 + 64));
  expedition_path = &v10->second;
  if ( *(_BYTE *)(((unsigned __int64)&v10->second.state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second.state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( expedition_path->state != EXPEDITION_STARTED )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "accelerateExpeditionByGm",
      832);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v15,
           (const char (*)[39])"[EXPEDITION] path state invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( sub_time < expedition_path->start_time )
    expedition_path->start_time -= sub_time;
  result = 0LL;
LABEL_19:
  if ( v16 == (char *)v3 )
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

// Line 845: range 000000001504FD5C-000000001504FDA3
int32_t __cdecl ExpeditionActivity::resetExpeditionByGm(ExpeditionActivity *const this)
{
  ExpeditionActivity::unloadExpeditionChallengeGroups(this);
  BaseActivity::clear(this);
  ExpeditionActivity::tryRefresh(this);
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 854: range 000000001504FDA4-000000001504FE0A
int32_t __cdecl ExpeditionActivity::resetExpeditionCountByGm(ExpeditionActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->expedition_count_);
  }
  this->expedition_count_ = 0;
  BaseActivity::notifyClientData(this, 0);
  return 0;
};

// Line 861: range 000000001504FE0C-000000001504FE2A
int32_t __cdecl ExpeditionActivity::generateCandidatePathPoolByGm(ExpeditionActivity *const this)
{
  ExpeditionActivity::tryGenerateCandidatePathPool(this);
  return 0;
};

// Line 867: range 000000001504FE2C-0000000015051B26
int32_t __cdecl ExpeditionActivity::startExpedition(
        ExpeditionActivity *const this,
        const proto::ExpeditionStartReq *req,
        proto::ExpeditionStartRsp *rsp_0)
{
  int32_t v3; // r14d
  __m128i v4; // xmm0
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  const google::protobuf::RepeatedField<unsigned int> *v8; // rax
  google::protobuf::RepeatedField<unsigned int> *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::pointer v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::set<unsigned int>::size_type v17; // r15
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v20; // rdx
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  ExpeditionComp *ExpeditionComp; // rax
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  PlayerSocialComp *SocialComp; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t v32; // ecx
  uint32_t v33; // ecx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  __m128i v35; // xmm0
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::reference v36; // rax
  _QWORD *v37; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v40; // rax
  float bonus_probability; // xmm1_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v45; // rax
  google::protobuf::RepeatedField<unsigned int> *v46; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v47; // rax
  Player *v48; // r14
  int32_t result; // eax
  std::string v50; // [rsp+0h] [rbp-320h]
  google::protobuf::uint32 assist_costume_id; // [rsp+24h] [rbp-2FCh]
  float elem_coef; // [rsp+28h] [rbp-2F8h]
  uint32_t daily_count_limit; // [rsp+2Ch] [rbp-2F4h]
  uint32_t avatar_size; // [rsp+30h] [rbp-2F0h]
  uint32_t now; // [rsp+34h] [rbp-2ECh]
  int super_elem_coef; // [rsp+38h] [rbp-2E8h]
  uint32_t avatar_id; // [rsp+3Ch] [rbp-2E4h]
  float level_prob; // [rsp+44h] [rbp-2DCh]
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin_1; // [rsp+48h] [rbp-2D8h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end; // [rsp+50h] [rbp-2D0h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+58h] [rbp-2C8h] BYREF
  google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator __for_begin_0; // [rsp+60h] [rbp-2C0h] BYREF
  ExpeditionPath *expedition_path; // [rsp+68h] [rbp-2B8h]
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+70h] [rbp-2B0h]
  const data::ExpeditionPathExcelConfig *path_config_ptr; // [rsp+78h] [rbp-2A8h]
  const data::ExpeditionDifficultyExcelConfig *difficulty_config_ptr; // [rsp+80h] [rbp-2A0h]
  std::set<unsigned int> *__for_range; // [rsp+88h] [rbp-298h]
  const proto::FriendBrief *friend_brief_ptr; // [rsp+90h] [rbp-290h]
  const google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo> *__for_range_0; // [rsp+98h] [rbp-288h]
  const proto::SocialShowAvatarInfo *avatar_info; // [rsp+A0h] [rbp-280h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_1; // [rsp+A8h] [rbp-278h]
  std::shared_ptr<Config> v72; // [rsp+B0h] [rbp-270h] BYREF
  std::shared_ptr<google::protobuf::Message> v73; // [rsp+C0h] [rbp-260h] BYREF
  char v74[592]; // [rsp+D0h] [rbp-250h] BYREF

  *(&v50._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v50._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v50._M_string_length = (std::string::size_type)rsp_0;
  v5 = (unsigned __int64)v74;
  v50._M_dataplus._M_p = v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(544LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "15 32 1 11 holder:1007 48 4 11 path_id:868 64 4 14 assist_uid:871 80 4 20 assist_avatar_id:872 9"
                        "6 4 17 difficulty_id:927 112 4 13 avatar_id:944 128 4 14 elem_type:1025 144 8 8 iter:891 176 8 1"
                        "6 avatar_info:1019 208 16 12 log_ptr:1039 240 16 21 formal_avatar_ptr:946 272 24 14 avatar_vec:9"
                        "43 336 24 19 super_elem_vec:1017 400 32 19 transaction_no:1033 464 48 17 avatar_id_set:869";
  *(_QWORD *)(v5 + 16) = ExpeditionActivity::startExpedition;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556927;
  v7[536862722] = -234556924;
  v7[536862723] = -234556924;
  v7[536862724] = 61956;
  v7[536862724] = -234881024;
  v7[536862725] = 62194;
  v7[536862725] = -234881024;
  v7[536862726] = 62194;
  v7[536862727] = 62194;
  v7[536862728] = 62194;
  v7[536862729] = -218959360;
  v7[536862730] = 62194;
  v7[536862731] = -218959360;
  v7[536862732] = 62194;
  v7[536862733] = -219021312;
  v7[536862734] = 62194;
  v7[536862736] = -202116109;
  *(_DWORD *)(v5 + 48) = proto::ExpeditionStartReq::path_id(req);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 464));
  v8 = proto::ExpeditionStartReq::avatar_id_list(req);
  common::tools::MiscUtils::setFromRepeated<std::set<unsigned int>,unsigned int>(
    (std::set<unsigned int> *)(v5 + 464),
    v8);
  *(_DWORD *)(v5 + 64) = proto::ExpeditionStartReq::assist_uid(req);
  *(_DWORD *)(v5 + 80) = proto::ExpeditionStartReq::assist_avatar_id(req);
  proto::ExpeditionStartRsp::set_path_id((proto::ExpeditionStartRsp *const)v50._M_string_length, *(_DWORD *)(v5 + 48));
  v9 = proto::ExpeditionStartRsp::mutable_avatar_id_list((proto::ExpeditionStartRsp *const)v50._M_string_length);
  common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
    (const std::set<unsigned int> *)(v5 + 464),
    v9);
  proto::ExpeditionStartRsp::set_assist_uid(
    (proto::ExpeditionStartRsp *const)v50._M_string_length,
    *(_DWORD *)(v5 + 64));
  proto::ExpeditionStartRsp::set_assist_avatar_id(
    (proto::ExpeditionStartRsp *const)v50._M_string_length,
    *(_DWORD *)(v5 + 80));
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "startExpedition",
      881);
    v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)(v5 + 400),
            (const char (*)[47])"[EXPEDITION] activity content is closed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v5 + 128) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v5 + 128));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
    v3 = -1;
    goto LABEL_109;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( Player::getUid(this->player_) == *(_DWORD *)(v5 + 64) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "startExpedition",
      887);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
      (common::milog::MiLogStream *const)(v5 + 400),
      (const char (*)[22])"target cannot be self");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
    v3 = -1;
    goto LABEL_109;
  }
  *(std::map<unsigned int,ExpeditionPath>::iterator *)(v5 + 144) = std::map<unsigned int,ExpeditionPath>::find(
                                                                     &this->expedition_path_map_,
                                                                     (const std::map<unsigned int,ExpeditionPath>::key_type *)(v5 + 48));
  *(std::map<unsigned int,ExpeditionPath>::iterator *)(v5 + 176) = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self *)(v5 + 144),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self *)(v5 + 176)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/expedition_activity.cpp",
      "startExpedition",
      894);
    v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v5 + 400),
            (const char (*)[36])"[EXPEDITION] path id invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_17:
    *(_DWORD *)(v5 + 128) = Player::getUid(this->player_);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 128));
    v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])" ,path_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
    v3 = -1;
    goto LABEL_109;
  }
  v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *const)(v5 + 144));
  expedition_path = &v14->second;
  if ( *(_BYTE *)(((unsigned __int64)&v14->second.state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v14 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->second.state >> 3) + 0x7FFF8000) )
  {
    *(double *)v4.m128i_i64 = __asan_report_load4();
  }
  if ( expedition_path->state )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 400),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/expedition_activity.cpp",
      "startExpedition",
      901);
    v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v5 + 400),
            (const char (*)[39])"[EXPEDITION] path state invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_17;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v72);
  v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v72);
  daily_count_limit = ConstValueExcelConfigMgr::getActivityExpeditionDailyCountLimit(&v15->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v72);
  if ( *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
  {
    *(double *)v4.m128i_i64 = __asan_report_load4();
  }
  if ( daily_count_limit > this->expedition_count_ )
  {
    v17 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v5 + 464));
    if ( v17 != proto::ExpeditionStartReq::avatar_id_list_size(req) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "startExpedition",
        915);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v5 + 400),
        (const char (*)[32])"[EXPEDITION] avatar id repeated");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
      v3 = -1;
      goto LABEL_109;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v73);
    conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v73)->design_config.txt_config_mgr.activity_expedition_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v73);
    path_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionPathExcelConfig(
                        conf_mgr,
                        *(_DWORD *)(v5 + 48));
    if ( !path_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "startExpedition",
        923);
      v18 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
              (common::milog::MiLogStream *const)(v5 + 400),
              (const char (*)[61])"[EXPEDITION] findExpeditionPathExcelConfig failed, path_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
      v3 = -1;
      goto LABEL_109;
    }
    if ( *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)path_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      *(double *)v4.m128i_i64 = __asan_report_load4();
    }
    *(_DWORD *)(v5 + 96) = path_config_ptr->difficulty_id;
    difficulty_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionDifficultyExcelConfig(
                              conf_mgr,
                              *(_DWORD *)(v5 + 96));
    if ( !difficulty_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "startExpedition",
        931);
      v19 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              (common::milog::MiLogStream *const)(v5 + 400),
              (const char (*)[73])"[EXPEDITION] findExpeditionDifficultyExcelConfig failed, difficulty_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
      v3 = -1;
      goto LABEL_109;
    }
    avatar_size = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v5 + 464));
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->min_player >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->min_player >> 3) + 0x7FFF8000) <= 3 )
    {
      *(double *)v4.m128i_i64 = __asan_report_load4();
    }
    if ( avatar_size < difficulty_config_ptr->min_player )
      goto LABEL_44;
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->max_player >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)difficulty_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->max_player >> 3)
                                                                           + 0x7FFF8000) )
    {
      *(double *)v4.m128i_i64 = __asan_report_load4();
    }
    if ( avatar_size > difficulty_config_ptr->max_player )
    {
LABEL_44:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 400),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "startExpedition",
        939);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v5 + 400),
        (const char (*)[33])"[EXPEDITION] avatar size invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
      v3 = -1;
      goto LABEL_109;
    }
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v5 + 272));
    __for_range = (std::set<unsigned int> *)(v5 + 464);
    __for_begin._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v5 + 464))._M_node;
    __for_begin_0.it_ = (void *const *)std::set<unsigned int>::end((const std::set<unsigned int> *const)(v5 + 464))._M_node;
    while ( std::operator!=(&__for_begin, (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin_0) )
    {
      v20 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        *(double *)v4.m128i_i64 = __asan_report_load4();
      }
      *(_DWORD *)(v5 + 112) = *v20;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v5 + 240), AvatarComp);
      if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v5 + 240)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/expedition_activity.cpp",
          "startExpedition",
          949);
        v22 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                (common::milog::MiLogStream *const)(v5 + 400),
                (const char (*)[52])"[EXPEDITION] formal_avatar_ptr is null, avatar_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
        v3 = -1;
        v23 = 0;
      }
      else
      {
        v24 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
        ExpeditionComp = FormalAvatar::getExpeditionComp(v24);
        if ( ExpeditionComp::isExpeditionNotNone(ExpeditionComp) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/expedition_activity.cpp",
            "startExpedition",
            956);
          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)(v5 + 400),
            (const char (*)[41])"[EXPEDITION] avatar in normal expedition");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
          v3 = -1;
          v23 = 0;
        }
        else if ( (unsigned __int8)ExpeditionActivity::isAvatarInExpedition(this, *(_DWORD *)(v5 + 112)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 400),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/expedition_activity.cpp",
            "startExpedition",
            963);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v5 + 400),
            (const char (*)[42])"[EXPEDITION] avatar already in expedition");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
          v3 = -1;
          v23 = 0;
        }
        else
        {
          v26 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
          *(_DWORD *)(v5 + 128) = Creature::getLevel(v26);
          *(std::pair<unsigned int,unsigned int> *)(v5 + 176) = std::make_pair<unsigned int &,unsigned int>(
                                                                  (unsigned int *)(v5 + 112),
                                                                  (unsigned int *)(v5 + 128));
          std::vector<std::pair<unsigned int,unsigned int>>::push_back(
            (std::vector<std::pair<unsigned int,unsigned int>> *const)(v5 + 272),
            (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)(v5 + 176));
          v23 = 1;
        }
      }
      std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v5 + 240));
      if ( v23 != 1 )
        goto LABEL_108;
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    assist_costume_id = 0;
    if ( *(_DWORD *)(v5 + 64) && *(_DWORD *)(v5 + 80) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SocialComp = Player::getSocialComp(this->player_);
      friend_brief_ptr = PlayerSocialComp::findFriendBrief(SocialComp, *(_DWORD *)(v5 + 64));
      if ( !friend_brief_ptr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/expedition_activity.cpp",
          "startExpedition",
          977);
        v28 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v5 + 400),
                (const char (*)[40])"[EXPEDITION] friend_brief_ptr is null: ");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v28,
                (const unsigned int *)(v5 + 64));
        v30 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v29, (const char (*)[3])", ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
        v3 = -1;
LABEL_108:
        std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v5 + 272));
        goto LABEL_109;
      }
      *(_DWORD *)(v5 + 128) = 0;
      __for_range_0 = proto::FriendBrief::show_avatar_info_list(friend_brief_ptr);
      __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::begin(__for_range_0).it_;
      *(google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::const_iterator *)(v5 + 176) = google::protobuf::RepeatedPtrField<proto::SocialShowAvatarInfo>::end(__for_range_0);
      while ( google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator!=(
                &__for_begin_0,
                (const google::protobuf::internal::RepeatedPtrIterator<const proto::SocialShowAvatarInfo>::iterator *)(v5 + 176)) )
      {
        avatar_info = google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator*(&__for_begin_0);
        if ( proto::SocialShowAvatarInfo::avatar_id(avatar_info) == *(_DWORD *)(v5 + 80) )
        {
          *(_DWORD *)(v5 + 128) = proto::SocialShowAvatarInfo::level(avatar_info);
          assist_costume_id = proto::SocialShowAvatarInfo::costume_id(avatar_info);
          break;
        }
        google::protobuf::internal::RepeatedPtrIterator<proto::SocialShowAvatarInfo const>::operator++(&__for_begin_0);
      }
      if ( !*(_DWORD *)(v5 + 128) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/expedition_activity.cpp",
          "startExpedition",
          994);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          (common::milog::MiLogStream *const)(v5 + 400),
          (const char (*)[38])"[EXPEDITION] assist avatar is invalid");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
        v3 = -1;
        goto LABEL_108;
      }
      if ( ExpeditionActivity::isAssistAvatarInExpedition(this, *(_DWORD *)(v5 + 64), *(_DWORD *)(v5 + 80)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/expedition_activity.cpp",
          "startExpedition",
          1000);
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          (common::milog::MiLogStream *const)(v5 + 400),
          (const char (*)[49])"[EXPEDITION] assist avatar already in expedition");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
        v3 = -1;
        goto LABEL_108;
      }
      *(std::pair<unsigned int,unsigned int> *)(v5 + 176) = std::make_pair<unsigned int const&,unsigned int &>(
                                                              (const unsigned int *)(v5 + 80),
                                                              (unsigned int *)(v5 + 128));
      std::vector<std::pair<unsigned int,unsigned int>>::push_back(
        (std::vector<std::pair<unsigned int,unsigned int>> *const)(v5 + 272),
        (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)(v5 + 176));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v5 + 400), BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32), 0xC30u, v50);
    std::string::~string((void *)(v5 + 400));
    now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&expedition_path->state);
    }
    expedition_path->state = EXPEDITION_STARTED;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&expedition_path->start_time);
    }
    expedition_path->start_time = now;
    std::set<unsigned int>::operator=(&expedition_path->avatar_id_set, (const std::set<unsigned int> *)(v5 + 464));
    v32 = *(_DWORD *)(v5 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&expedition_path->assist_uid);
    }
    expedition_path->assist_uid = v32;
    v33 = *(_DWORD *)(v5 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&expedition_path->assist_avatar_id);
    }
    expedition_path->assist_avatar_id = v33;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_costume_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&expedition_path->assist_costume_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&expedition_path->assist_costume_id);
    }
    expedition_path->assist_costume_id = assist_costume_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v5 + 240));
    v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
    *(float *)v4.m128i_i32 = ConstValueExcelConfigMgr::getActivityExpeditionSuperElemCoef(&v34->design_config.txt_config_mgr.const_value_config_mgr);
    super_elem_coef = _mm_cvtsi128_si32(v4);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 240));
    ActivityExpeditionExcelConfigMgr::findSuperElemVecByPathId(
      (std::vector<unsigned int> *)(v5 + 336),
      conf_mgr,
      *(_DWORD *)(v5 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&expedition_path->bonus_probability);
    }
    v35 = 0LL;
    expedition_path->bonus_probability = 0.0;
    __for_range_1 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v5 + 272);
    __for_begin_1._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v5 + 272))._M_current;
    __for_end._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
              &__for_begin_1,
              &__for_end) )
    {
      v36 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin_1);
      v37 = v36;
      if ( ((unsigned __int8)v36 & 7) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v36->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v36 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v36->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v36, 8LL);
      }
      *(_QWORD *)(v5 + 176) = *v37;
      avatar_id = *(_DWORD *)(v5 + 176);
      *(float *)v35.m128i_i32 = ActivityExpeditionExcelConfigMgr::findBonusProbabilityByAvatarLevel(
                                  conf_mgr,
                                  *(_DWORD *)(v5 + 180));
      level_prob = COERCE_FLOAT(_mm_cvtsi128_si32(v35));
      elem_coef = 1.0;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v5 + 240));
      v38 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 240));
      *(_DWORD *)(v5 + 128) = AvatarExcelConfigMgr::getAvatarInitElemType(
                                &v38->design_config.txt_config_mgr.avatar_config_mgr,
                                avatar_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 240));
      __for_begin_0.it_ = (void *const *)std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 336))._M_current;
      M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 336))._M_current;
      v40._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 336))._M_current;
      __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                     v40,
                                                                                     (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                     (const unsigned int *)(v5 + 128))._M_current;
      if ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
             (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0) )
      {
        elem_coef = *(float *)&super_elem_coef;
      }
      if ( *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)expedition_path + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v35 = (__m128i)LODWORD(level_prob);
      expedition_path->bonus_probability = (float)(level_prob * elem_coef) + expedition_path->bonus_probability;
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin_1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    bonus_probability = expedition_path->bonus_probability;
    if ( *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->coef >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&difficulty_config_ptr->coef >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    expedition_path->bonus_probability = difficulty_config_ptr->coef * bonus_probability;
    ExpeditionActivity::createPathTransaction[abi:cxx11](
      (std::string *)(v5 + 400),
      *((ExpeditionActivity *const *)&v50._anon_0._M_allocated_capacity + 1),
      *(_DWORD *)(v5 + 48));
    std::string::operator=(&expedition_path->transaction, v5 + 400);
    if ( *(_BYTE *)(((*(&v50._anon_0._M_allocated_capacity + 1) + 1032) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v50._anon_0._M_allocated_capacity + 1) + 1032) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ++*(_DWORD *)(*(&v50._anon_0._M_allocated_capacity + 1) + 1032);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityExpeditionStart>();
    v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 208));
    proto_log::PlayerLogBodyActivityExpeditionStart::set_path_id(v42, *(_DWORD *)(v5 + 48));
    v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 208));
    proto_log::PlayerLogBodyActivityExpeditionStart::set_difficulty_id(v43, *(_DWORD *)(v5 + 96));
    v44 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 208));
    proto_log::PlayerLogBodyActivityExpeditionStart::set_transaction_no(v44, (const std::string *)(v5 + 400));
    v45 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 208));
    v46 = proto_log::PlayerLogBodyActivityExpeditionStart::mutable_avatar_id_list(v45);
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      (const std::set<unsigned int> *)(v5 + 464),
      v46);
    v47 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 208));
    proto_log::PlayerLogBodyActivityExpeditionStart::set_assist_avatar_id(v47, *(_DWORD *)(v5 + 80));
    if ( *(_BYTE *)(((*(&v50._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v48 = *(Player **)(*(&v50._anon_0._M_allocated_capacity + 1) + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)(v5 + 240),
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionStart,void>(
      &v73,
      (const std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionStart> *)(v5 + 208));
    Player::printStatLog(v48, &v73, (MessagePtr *)(v5 + 240), 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v73);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v5 + 240));
    BaseActivity::notifyClientData(*((BaseActivity *const *)&v50._anon_0._M_allocated_capacity + 1), 0);
    v3 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionStart> *const)(v5 + 208));
    std::string::~string((void *)(v5 + 400));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 336));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 32));
    goto LABEL_108;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v5 + 400),
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/expedition_activity.cpp",
    "startExpedition",
    909);
  v16 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          (common::milog::MiLogStream *const)(v5 + 400),
          (const char (*)[43])"[EXPEDITION] expedition count limit, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v5 + 128) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 128));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 400));
  v3 = -1;
LABEL_109:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 464));
  result = v3;
  if ( v50._M_dataplus._M_p == (std::string::pointer)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1053: range 0000000015051B28-0000000015052661
int32_t __cdecl ExpeditionActivity::recallExpedition(
        ExpeditionActivity *const this,
        const proto::ExpeditionRecallReq *req,
        proto::ExpeditionRecallRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  int32_t v7; // r14d
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::pointer v11; // rax
  common::milog::MiLogStream *v12; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  time_t v15; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string v22; // [rsp+0h] [rbp-140h]
  ExpeditionActivity *thisa; // [rsp+18h] [rbp-128h]
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  uint32_t now; // [rsp+28h] [rbp-118h]
  uint32_t time_offset; // [rsp+2Ch] [rbp-114h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self __y; // [rsp+30h] [rbp-110h] BYREF
  ExpeditionPath *expedition_path; // [rsp+38h] [rbp-108h]
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+40h] [rbp-100h]
  const data::ExpeditionPathExcelConfig *path_config_ptr; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v32; // [rsp+60h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+90h] [rbp-B0h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v22._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v22._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 1 11 holder:1085 48 4 12 path_id:1054 64 8 9 iter:1063 96 16 12 log_ptr:1106";
  *(_QWORD *)(v3 + 16) = ExpeditionActivity::recallExpedition;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = proto::ExpeditionRecallReq::path_id(req);
  proto::ExpeditionRecallRsp::set_path_id((proto::ExpeditionRecallRsp *const)v22._M_string_length, *(_DWORD *)(v3 + 48));
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "recallExpedition",
      1059);
    v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v33,
           (const char (*)[47])"[EXPEDITION] activity content is closed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = -1;
    goto LABEL_46;
  }
  *(std::map<unsigned int,ExpeditionPath>::iterator *)(v3 + 64) = std::map<unsigned int,ExpeditionPath>::find(
                                                                    &this->expedition_path_map_,
                                                                    (const std::map<unsigned int,ExpeditionPath>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "recallExpedition",
      1066);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v33,
           (const char (*)[36])"[EXPEDITION] path id invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_13:
    val = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" ,path_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = -1;
    goto LABEL_46;
  }
  v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *const)(v3 + 64));
  expedition_path = &v11->second;
  if ( *(_BYTE *)(((unsigned __int64)&v11->second.state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v11 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->second.state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( expedition_path->state != EXPEDITION_STARTED )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "recallExpedition",
      1073);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v33,
           (const char (*)[39])"[EXPEDITION] path state invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_13;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.activity_expedition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
  path_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionPathExcelConfig(
                      conf_mgr,
                      *(_DWORD *)(v3 + 48));
  if ( path_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v33, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC31u, v22);
    std::string::~string(&v33);
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v14->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v32);
    v15 = time_offset;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( common::tools::TimeUtils::isSameDay(now, expedition_path->start_time, v15) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&thisa->expedition_count_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->expedition_count_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( thisa->expedition_count_ )
        --thisa->expedition_count_;
    }
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&expedition_path->state);
    }
    expedition_path->state = EXPEDITION_NONE;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&expedition_path->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&expedition_path->start_time);
    }
    expedition_path->start_time = 0;
    std::set<unsigned int>::clear(&expedition_path->avatar_id_set);
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&expedition_path->assist_uid >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&expedition_path->assist_uid);
    }
    expedition_path->assist_uid = 0;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->assist_avatar_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&expedition_path->assist_avatar_id);
    }
    expedition_path->assist_avatar_id = 0;
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&expedition_path->bonus_probability);
    }
    expedition_path->bonus_probability = 0.0;
    std::string::clear(&expedition_path->transaction);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityExpeditionFinish>();
    v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyActivityExpeditionFinish::set_path_id(v16, *(_DWORD *)(v3 + 48));
    v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)path_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyActivityExpeditionFinish::set_difficulty_id(v17, path_config_ptr->difficulty_id);
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyActivityExpeditionFinish::set_transaction_no(v18, &expedition_path->transaction);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyActivityExpeditionFinish::set_result(v19, 2u);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v32, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish> *)(v3 + 96));
    Player::printStatLog(player, &p_body_ptr, &v32, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v32);
    BaseActivity::notifyClientData(thisa, 0);
    v7 = 0;
    std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionFinish> *const)(v3 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "recallExpedition",
      1081);
    v12 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v33,
            (const char (*)[61])"[EXPEDITION] findExpeditionPathExcelConfig failed, path_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = -1;
  }
LABEL_46:
  result = v7;
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
  return result;
};

// Line 1119: range 0000000015052662-000000001505320C
int32_t __cdecl ExpeditionActivity::takeExpeditionReward(
        ExpeditionActivity *const this,
        const proto::ExpeditionTakeRewardReq *req,
        proto::ExpeditionTakeRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t *v13; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v15; // r14
  PlayerItemComp *v16; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // edx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string v25; // [rsp+0h] [rbp-180h]
  proto::ExpeditionTakeRewardRsp *rsp_0a; // [rsp+8h] [rbp-178h]
  ExpeditionActivity *thisa; // [rsp+18h] [rbp-168h]
  unsigned int val; // [rsp+20h] [rbp-160h] BYREF
  uint32_t reward_level; // [rsp+24h] [rbp-15Ch]
  uint32_t reward_id; // [rsp+28h] [rbp-158h]
  int32_t ret; // [rsp+2Ch] [rbp-154h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self __y; // [rsp+30h] [rbp-150h] BYREF
  ExpeditionPath *expedition_path; // [rsp+38h] [rbp-148h]
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+40h] [rbp-140h]
  const data::ExpeditionPathExcelConfig *path_config_ptr; // [rsp+48h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-130h] BYREF
  std::shared_ptr<google::protobuf::Message> v37; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v38; // [rsp+70h] [rbp-110h] BYREF
  char v39[240]; // [rsp+90h] [rbp-F0h] BYREF

  *(&v25._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v25._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v25._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 1 11 holder:1145 48 4 12 path_id:1120 64 8 9 iter:1123 96 16 12 log_ptr:1163 128 24 11 reason:1150";
  *(_QWORD *)(v3 + 16) = ExpeditionActivity::takeExpeditionReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = proto::ExpeditionTakeRewardReq::path_id(req);
  proto::ExpeditionTakeRewardRsp::set_path_id(
    (proto::ExpeditionTakeRewardRsp *const)v25._M_string_length,
    *(_DWORD *)(v3 + 48));
  *(std::map<unsigned int,ExpeditionPath>::iterator *)(v3 + 64) = std::map<unsigned int,ExpeditionPath>::find(
                                                                    &this->expedition_path_map_,
                                                                    (const std::map<unsigned int,ExpeditionPath>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/expedition_activity.cpp",
      "takeExpeditionReward",
      1126);
    v6 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v38,
           (const char (*)[36])"[EXPEDITION] path id invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Player::getUid(this->player_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,path_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v38);
    v9 = -1;
    goto LABEL_46;
  }
  v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *const)(v3 + 64));
  expedition_path = &v10->second;
  if ( *(_BYTE *)(((unsigned __int64)&v10->second.state >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)v10 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second.state >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( expedition_path->state != EXPEDITION_FINISHED )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/expedition_activity.cpp",
      "takeExpeditionReward",
      1133);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v38,
           (const char (*)[39])"[EXPEDITION] path state invalid, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v37);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37)->design_config.txt_config_mgr.activity_expedition_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v37);
  path_config_ptr = data::ActivityExpeditionExcelConfigMgrBase::findExpeditionPathExcelConfig(
                      conf_mgr,
                      *(_DWORD *)(v3 + 48));
  if ( !path_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/expedition_activity.cpp",
      "takeExpeditionReward",
      1141);
    v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v38,
            (const char (*)[61])"[EXPEDITION] findExpeditionPathExcelConfig failed, path_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v38);
    v9 = -1;
    goto LABEL_46;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v38, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC32u, v25);
  std::string::~string(&v38);
  if ( *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)expedition_path + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->bonus_probability >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  reward_level = ExpeditionActivity::calcRewardLevel(thisa, expedition_path->bonus_probability);
  if ( reward_level < std::vector<unsigned int>::size(&path_config_ptr->level_reward_list) )
  {
    v13 = (uint32_t *)std::vector<unsigned int>::operator[](&path_config_ptr->level_reward_list, reward_level);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reward_id = *v13;
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 128),
      ACTION_REASON_EXPEDITION_REWARD,
      ITEM_LIMIT_ACTIVITY_EXPEDITION_REWARD);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    ret = PlayerItemComp::checkGrantReward(ItemComp, reward_id, (const ActionReason *)(v3 + 128));
    if ( ret )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "takeExpeditionReward",
        1154);
      v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v38,
              (const char (*)[45])"[EXPEDITION] checkGrantRewards failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(thisa->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
      common::milog::MiLogStream::~MiLogStream(&v38);
      v9 = ret;
      goto LABEL_45;
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = Player::getItemComp(thisa->player_);
    PlayerItemComp::grantReward(v16, reward_id, (const ActionReason *)(v3 + 128), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ActivityComp = Player::getActivityComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      ActivityComp = (PlayerActivityComp *)&thisa->schedule_id_;
      __asan_report_load4();
    }
    schedule_id = thisa->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ActivityComp = (PlayerActivityComp *)&thisa->activity_id_;
      __asan_report_load4();
    }
    PlayerActivityComp::logGetActivityReward(ActivityComp, thisa->activity_id_, schedule_id, reward_id);
    proto::ExpeditionTakeRewardRsp::set_reward_level(rsp_0a, reward_level);
    if ( *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_path->state >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_store4(&expedition_path->state);
    }
    expedition_path->state = EXPEDITION_REWARDED;
    common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityExpeditionTakeReward>();
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyActivityExpeditionTakeReward::set_path_id(v19, *(_DWORD *)(v3 + 48));
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)path_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&path_config_ptr->difficulty_id >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyActivityExpeditionTakeReward::set_difficulty_id(v20, path_config_ptr->difficulty_id);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyActivityExpeditionTakeReward::set_transaction_no(v21, &expedition_path->transaction);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityExpeditionTakeReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto_log::PlayerLogBodyActivityExpeditionTakeReward::set_result(v22, reward_level);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v37, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionTakeReward,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionTakeReward> *)(v3 + 96));
    Player::printStatLog(player, &p_body_ptr, &v37, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v37);
    std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionTakeReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityExpeditionTakeReward> *const)(v3 + 96));
  }
  std::map<unsigned int,ExpeditionPath>::erase(
    &thisa->expedition_path_map_,
    (const std::map<unsigned int,ExpeditionPath>::key_type *)(v3 + 48));
  ExpeditionActivity::tryFetchCandidatePath(thisa);
  BaseActivity::notifyClientData(thisa, 0);
  v9 = 0;
LABEL_45:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
LABEL_46:
  result = v9;
  if ( v39 == (char *)v3 )
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

// Line 1180: range 000000001505320E-000000001505326B
int32_t __cdecl ExpeditionActivity::getExpeditionAssistInfoList(
        ExpeditionActivity *const this,
        const proto::GetExpeditionAssistInfoListReq *req,
        proto::GetExpeditionAssistInfoListRsp *rsp_0)
{
  google::protobuf::RepeatedPtrField<proto::ExpeditionAssistInfo> *v3; // rax

  v3 = proto::GetExpeditionAssistInfoListRsp::mutable_assist_info_list(rsp_0);
  common::tools::MiscUtils::toRepeated<ExpeditionAssistRecordInfo,proto::ExpeditionAssistInfo,int (ExpeditionAssistRecordInfo::*)(proto::ExpeditionAssistInfo&)const>(
    &this->assist_record_vec_,
    v3,
    (int (*)(const ExpeditionAssistRecordInfo *, proto::ExpeditionAssistInfo *))ExpeditionAssistRecordInfo::toClient);
  return 0;
};

// Line 1187: range 000000001505326C-000000001505401B
void __cdecl ExpeditionActivity::tryRefreshChallengeGroup(ExpeditionActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Scene *v11; // rax
  unsigned __int64 v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  ExpeditionChallenge *v17; // rax
  uint32_t v18; // ecx
  Scene *v19; // rax
  unsigned __int64 v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  uint32_t v29; // ecx
  void (__fastcall *v30)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD); // [rsp+8h] [rbp-158h]
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-150h]
  void (__fastcall *__la)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // [rsp+10h] [rbp-150h]
  SceneBlockGroupComp *BlockGroupComp; // [rsp+20h] [rbp-140h]
  SceneBlockGroupComp *v34; // [rsp+20h] [rbp-140h]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-12Dh] BYREF
  unsigned int val; // [rsp+34h] [rbp-12Ch] BYREF
  uint32_t schedule_begin_time; // [rsp+38h] [rbp-128h]
  uint32_t now_time; // [rsp+3Ch] [rbp-124h]
  uint32_t time_offset; // [rsp+40h] [rbp-120h]
  uint32_t begin_days; // [rsp+44h] [rbp-11Ch]
  uint32_t now_days; // [rsp+48h] [rbp-118h]
  uint32_t passed_days; // [rsp+4Ch] [rbp-114h]
  const ActivityExpeditionExcelConfigMgr *conf_mgr; // [rsp+50h] [rbp-110h]
  const data::ExpeditionChallengeExcelConfig *challenge_config_ptr; // [rsp+58h] [rbp-108h]
  ExpeditionChallenge *challenge_info_ptr; // [rsp+60h] [rbp-100h]
  ExpeditionChallenge *challenge_info; // [rsp+68h] [rbp-F8h]
  std::shared_ptr<Config> v47; // [rsp+70h] [rbp-F0h] BYREF
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+80h] [rbp-E0h] BYREF
  std::vector<unsigned int> v49; // [rsp+90h] [rbp-D0h] BYREF
  common::milog::MiLogStream v50; // [rsp+B0h] [rbp-B0h] BYREF
  char v51[144]; // [rsp+D0h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 23 today_challenge_id:1212 48 4 29 today_challenge_group_id:1213 64 16 14 scene_ptr:1193";
  *(_QWORD *)(v1 + 16) = ExpeditionActivity::tryRefreshChallengeGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202178560;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v1 + 64), &__r);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v50,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/expedition_activity.cpp",
        "tryRefreshChallengeGroup",
        1196);
      v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v50,
             (const char (*)[45])"[EXPEDITION] getMainWorldScene failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v50);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v47);
      conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v47)->design_config.txt_config_mgr.activity_expedition_config_mgr;
      std::shared_ptr<Config>::~shared_ptr(&v47);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r)->design_config.txt_config_mgr.new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      schedule_begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(
                              p_new_activity_config_mgr,
                              this->schedule_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      now_time = common::tools::TimeUtils::getNow();
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&__r);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
      time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v6->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
      begin_days = common::tools::TimeUtils::getTimeDay(schedule_begin_time, time_offset);
      now_days = common::tools::TimeUtils::getTimeDay(now_time, time_offset);
      if ( now_days >= begin_days )
      {
        passed_days = now_days - begin_days;
        *(_DWORD *)(v1 + 32) = 0;
        *(_DWORD *)(v1 + 48) = 0;
        challenge_config_ptr = ActivityExpeditionExcelConfigMgr::findChallengeConfigByDays(conf_mgr, passed_days);
        if ( challenge_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 32) = challenge_config_ptr->id;
          if ( *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&challenge_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = challenge_config_ptr->group_id;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( this->cur_challenge_group_id_ == *(_DWORD *)(v1 + 48) )
        {
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/expedition_activity.cpp",
            "tryRefreshChallengeGroup",
            1223);
          v7 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v50, this);
          v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" same group:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 (const unsigned int *)(v1 + 48));
          v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" @challenge:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v50);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( this->cur_challenge_group_id_ )
          {
            challenge_info_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,ExpeditionChallenge>>(
                                   &this->expedition_challenge_map_,
                                   &this->cur_challenge_group_id_);
            if ( challenge_info_ptr )
            {
              if ( *(_BYTE *)(((unsigned __int64)&challenge_info_ptr->is_group_load >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)challenge_info_ptr + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge_info_ptr->is_group_load >> 3)
                                                                               + 0x7FFF8000) )
              {
                __asan_report_load1(&challenge_info_ptr->is_group_load);
              }
              if ( challenge_info_ptr->is_group_load )
              {
                v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
                BlockGroupComp = Scene::getBlockGroupComp(v11);
                if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v12 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
                if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
                  v12 = __asan_report_load8();
                v30 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD))v12;
                if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->cur_challenge_group_id_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                val = this->cur_challenge_group_id_;
                __l._M_array = &val;
                __l._M_len = 1LL;
                std::allocator<unsigned int>::allocator(&__a);
                std::vector<unsigned int>::vector(&v49, __l, &__a);
                v30(BlockGroupComp, &v49, 0LL);
                std::vector<unsigned int>::~vector(&v49);
                std::allocator<unsigned int>::~allocator(&__a);
                if ( *(_BYTE *)(((unsigned __int64)&challenge_info_ptr->is_group_load >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)challenge_info_ptr + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge_info_ptr->is_group_load >> 3)
                                                                                 + 0x7FFF8000) )
                {
                  __asan_report_store1(&challenge_info_ptr->is_group_load);
                }
                challenge_info_ptr->is_group_load = 0;
                common::milog::MiLogStream::create(
                  &v50,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/expedition_activity.cpp",
                  "tryRefreshChallengeGroup",
                  1234);
                v13 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v50, this);
                v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                        v13,
                        (const char (*)[14])" unreg group:");
                v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v14,
                        &this->cur_challenge_group_id_);
                v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v15,
                        (const char (*)[13])" @challenge:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)challenge_info_ptr);
                common::milog::MiLogStream::~MiLogStream(&v50);
              }
            }
          }
          if ( *(_DWORD *)(v1 + 48) )
          {
            v17 = std::map<unsigned int,ExpeditionChallenge>::operator[](
                    &this->expedition_challenge_map_,
                    (const std::map<unsigned int,ExpeditionChallenge>::key_type *)(v1 + 32));
            challenge_info = v17;
            v18 = *(_DWORD *)(v1 + 32);
            if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v17);
            }
            challenge_info->id = v18;
            if ( *(_BYTE *)(((unsigned __int64)&challenge_info->is_group_load >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)challenge_info + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge_info->is_group_load >> 3)
                                                                         + 0x7FFF8000) )
            {
              __asan_report_load1(&challenge_info->is_group_load);
            }
            if ( !challenge_info->is_group_load )
            {
              v19 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
              v34 = Scene::getBlockGroupComp(v19);
              if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v20 = (unsigned __int64)(v34->_vptr_SceneCompBase + 12);
              if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                v20 = __asan_report_load8();
              __la = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v20;
              val = *(_DWORD *)(v1 + 48);
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(&v49, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val), &__a);
              __la(v34, &v49, 0LL, 0LL);
              std::vector<unsigned int>::~vector(&v49);
              std::allocator<unsigned int>::~allocator(&__a);
              if ( *(_BYTE *)(((unsigned __int64)&challenge_info->is_group_load >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)challenge_info + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&challenge_info->is_group_load >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_store1(&challenge_info->is_group_load);
              }
              challenge_info->is_group_load = 1;
              common::milog::MiLogStream::create(
                &v50,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/activity/expedition_activity.cpp",
                "tryRefreshChallengeGroup",
                1246);
              v21 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v50, this);
              v22 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v21,
                      (const char (*)[12])" reg group:");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      (const unsigned int *)(v1 + 48));
              v24 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v23,
                      (const char (*)[13])" @challenge:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v1 + 32));
              common::milog::MiLogStream::~MiLogStream(&v50);
            }
          }
          common::milog::MiLogStream::create(
            &v50,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/expedition_activity.cpp",
            "tryRefreshChallengeGroup",
            1250);
          v25 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v50, this);
          v26 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])" challenge:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->cur_challenge_id_);
          v28 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v27, (const char (*)[5])off_256E6C80);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v1 + 32));
          common::milog::MiLogStream::~MiLogStream(&v50);
          v29 = *(_DWORD *)(v1 + 32);
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_challenge_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&this->cur_challenge_id_);
          }
          this->cur_challenge_id_ = v29;
          BaseActivity::notifyClientData(this, 0);
        }
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  }
  if ( v51 == (char *)v1 )
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

// Line 1256: range 000000001505401C-0000000015054242
_BOOL8 __fastcall ExpeditionActivity::isChallengeExpired(const ExpeditionActivity *const this, uint32_t challenge_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  _BOOL8 result; // rax
  uint32_t now_time; // [rsp+14h] [rbp-9Ch]
  uint32_t challenge_open_time; // [rsp+18h] [rbp-98h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-94h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 challenge_id:1255";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::isChallengeExpired;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = challenge_id;
  now_time = common::tools::TimeUtils::getNow();
  challenge_open_time = ExpeditionActivity::getExpeditionChallengeOpenTime(this, *(_DWORD *)(v2 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( now_time >= challenge_open_time )
  {
    result = !common::tools::TimeUtils::isSameDay(now_time, challenge_open_time, time_offset);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/expedition_activity.cpp",
      "isChallengeExpired",
      1262);
    v6 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v14, this);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" challenge:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" not open.");
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  if ( v15 == (char *)v2 )
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

// Line 1273: range 0000000015054244-00000000150543E7
void __cdecl ExpeditionActivity::unlockTopExpeditionPath(ExpeditionActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::map<unsigned int,ExpeditionPath>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,ExpeditionPath>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,ExpeditionPath> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<unsigned int const,ExpeditionPath> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,ExpeditionPath> >::type *id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,ExpeditionPath> >::type *path; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->expedition_path_map_;
  __for_begin._M_node = std::map<unsigned int,ExpeditionPath>::begin(&this->expedition_path_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator*(&__for_begin);
    id = std::get<0ul,unsigned int const,ExpeditionPath>(__in);
    path = std::get<1ul,unsigned int const,ExpeditionPath>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&path->state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)path + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&path->state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( path->state == EXPEDITION_LOCKED )
    {
      path->state = EXPEDITION_NONE;
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/expedition_activity.cpp",
        "unlockTopExpeditionPath",
        1279);
      v1 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v11, this);
      v2 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v1, (const char (*)[7])" path:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, id);
      v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             v3,
             (const char (*)[24])" unlocked on challenge:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->cur_challenge_id_);
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator++(&__for_begin);
  }
};

// Line 1285: range 00000000150543E8-0000000015054743
__int64 __fastcall ExpeditionActivity::calcRewardLevel(const ExpeditionActivity *const this, float probability)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  const float *v6; // rdx
  std::vector<unsigned int>::size_type v7; // r15
  std::vector<unsigned int>::const_reference v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 result; // rax
  float __val; // [rsp+1Ch] [rbp-D4h] BYREF
  float __lo; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t weight; // [rsp+24h] [rbp-CCh]
  const std::vector<unsigned int> *reward_level_vec; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 level:1288 64 4 16 probability:1284";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::calcRewardLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(float *)(v2 + 64) = probability;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  reward_level_vec = ConstValueExcelConfigMgr::getActivityExpeditionRewardLevelVec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  *(_DWORD *)(v2 + 48) = 1120403456;
  __lo = 0.0;
  __val = 100.0 * *(float *)(v2 + 64);
  v6 = std::clamp<float>(&__val, &__lo, (const float *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  weight = (int)*v6;
  for ( *(_DWORD *)(v2 + 48) = 0; ; ++*(_DWORD *)(v2 + 48) )
  {
    v7 = *(unsigned int *)(v2 + 48);
    if ( v7 >= std::vector<unsigned int>::size(reward_level_vec) )
      break;
    v8 = std::vector<unsigned int>::operator[](reward_level_vec, *(unsigned int *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( weight < *v8 )
      break;
  }
  common::milog::MiLogStream::create(
    &v21,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/expedition_activity.cpp",
    "calcRewardLevel",
    1296);
  v9 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v21, this);
  v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" reward_level:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
  v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])", prob:");
  v13 = common::milog::MiLogStream::operator<<<float,(float *)0>(v12, (const float *)(v2 + 64));
  v14 = common::milog::MiLogStream::operator<<<char [3],(char *[3])0>(v13, (const char (*)[3])", ");
  common::milog::MiLogStream::operator<<<unsigned int>(v14, reward_level_vec);
  common::milog::MiLogStream::~MiLogStream(&v21);
  result = *(unsigned int *)(v2 + 48);
  if ( v22 == (char *)v2 )
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

// Line 1301: range 0000000015054744-00000000150549E1
__int64 __fastcall ExpeditionActivity::unlockPathByGm(ExpeditionActivity *const this, uint32_t path_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::pointer v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self __y; // [rsp+10h] [rbp-B0h] BYREF
  ExpeditionPath *path; // [rsp+18h] [rbp-A8h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+40h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 path_id:1300 64 8 9 iter:1302";
  *(_QWORD *)(v2 + 16) = ExpeditionActivity::unlockPathByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = path_id;
  *(std::map<unsigned int,ExpeditionPath>::iterator *)(v2 + 64) = std::map<unsigned int,ExpeditionPath>::find(
                                                                    &this->expedition_path_map_,
                                                                    (const std::map<unsigned int,ExpeditionPath>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,ExpeditionPath>::end(&this->expedition_path_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ExpeditionPath> > *const)(v2 + 64));
    path = &v5->second;
    if ( *(_BYTE *)(((unsigned __int64)&v5->second.state >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second.state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( path->state == EXPEDITION_LOCKED )
    {
      path->state = EXPEDITION_NONE;
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/expedition_activity.cpp",
        "unlockPathByGm",
        1309);
      v6 = common::milog::MiLogStream::operator<<<ExpeditionActivity,(ExpeditionActivity*)0>(&v13, this);
      v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])" path:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             v8,
             (const char (*)[24])" unlocked on challenge:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cur_challenge_id_);
      common::milog::MiLogStream::~MiLogStream(&v13);
      BaseActivity::notifyClientData(this, 0);
    }
  }
  result = 0LL;
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
