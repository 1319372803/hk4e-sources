// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/music_game_activity.cpp

// Line 26: range 0000000016BFB522-0000000016BFB806
void __cdecl MusicGameUgcSaveRecord::fromBin(
        MusicGameUgcSaveRecord *const this,
        const proto::MusicGameUgcSaveBin *music_save_bin)
{
  uint64_t v2; // rax
  uint32_t v3; // edx
  uint32_t v4; // ecx
  uint32_t v5; // edx
  uint32_t v6; // ecx
  uint32_t v7; // edx
  uint32_t v8; // ecx
  bool is_published; // dl
  bool is_changed_after_publish; // cl
  uint64_t v11; // rax

  v2 = proto::MusicGameUgcSaveBin::ugc_guid(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ugc_guid = v2;
  v3 = proto::MusicGameUgcSaveBin::music_id(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id);
  }
  this->music_id = v3;
  v4 = proto::MusicGameUgcSaveBin::save_idx(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->save_idx);
  }
  this->save_idx = v4;
  v5 = proto::MusicGameUgcSaveBin::save_time(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->save_time);
  }
  this->save_time = v5;
  v6 = proto::MusicGameUgcSaveBin::max_score(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = v6;
  v7 = proto::MusicGameUgcSaveBin::note_count(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->note_count);
  }
  this->note_count = v7;
  v8 = proto::MusicGameUgcSaveBin::version(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->version);
  }
  this->version = v8;
  is_published = proto::MusicGameUgcSaveBin::is_published(music_save_bin);
  if ( *(char *)(((unsigned __int64)&this->is_published >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_published);
  this->is_published = is_published;
  is_changed_after_publish = proto::MusicGameUgcSaveBin::is_changed_after_publish(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_changed_after_publish);
  }
  this->is_changed_after_publish = is_changed_after_publish;
  v11 = proto::MusicGameUgcSaveBin::import_from_ugc_guid(music_save_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->import_from_ugc_guid);
  this->import_from_ugc_guid = v11;
};

// Line 40: range 0000000016BFB808-0000000016BFBAF2
void __cdecl MusicGameUgcSaveRecord::toBin(
        const MusicGameUgcSaveRecord *const this,
        proto::MusicGameUgcSaveBin *music_save_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::MusicGameUgcSaveBin::set_ugc_guid(music_save_bin, this->ugc_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSaveBin::set_music_id(music_save_bin, this->music_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSaveBin::set_save_idx(music_save_bin, this->save_idx);
  if ( *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSaveBin::set_save_time(music_save_bin, this->save_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSaveBin::set_max_score(music_save_bin, this->max_score);
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSaveBin::set_note_count(music_save_bin, this->note_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSaveBin::set_version(music_save_bin, this->version);
  if ( *(char *)(((unsigned __int64)&this->is_published >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_published);
  proto::MusicGameUgcSaveBin::set_is_published(music_save_bin, this->is_published);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_changed_after_publish);
  }
  proto::MusicGameUgcSaveBin::set_is_changed_after_publish(music_save_bin, this->is_changed_after_publish);
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::MusicGameUgcSaveBin::set_import_from_ugc_guid(music_save_bin, this->import_from_ugc_guid);
};

// Line 54: range 0000000016BFBAF4-0000000016BFBD8E
void __cdecl MusicGameUgcSaveRecord::toClient(
        const MusicGameUgcSaveRecord *const this,
        proto::UgcMusicBriefInfo *brief_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::UgcMusicBriefInfo::set_ugc_guid(brief_info, this->ugc_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::UgcMusicBriefInfo::set_music_id(brief_info, this->music_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->save_idx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::UgcMusicBriefInfo::set_save_idx(brief_info, this->save_idx);
  if ( *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::UgcMusicBriefInfo::set_save_time(brief_info, this->save_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::UgcMusicBriefInfo::set_max_score(brief_info, this->max_score);
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::UgcMusicBriefInfo::set_note_count(brief_info, this->note_count);
  if ( *(char *)(((unsigned __int64)&this->is_published >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_published);
  proto::UgcMusicBriefInfo::set_is_published(brief_info, this->is_published);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_changed_after_publish >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_changed_after_publish);
  }
  proto::UgcMusicBriefInfo::set_is_changed_after_publish(brief_info, this->is_changed_after_publish);
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::UgcMusicBriefInfo::set_import_from_ugc_guid(brief_info, this->import_from_ugc_guid);
};

// Line 67: range 0000000016BFBD90-0000000016BFBFF7
void __cdecl MusicGameUgcSearchRecord::fromBin(
        MusicGameUgcSearchRecord *const this,
        const proto::MusicGameUgcSearchBin *music_search_bin)
{
  uint64_t v2; // rax
  uint32_t v3; // edx
  uint32_t v4; // ecx
  uint32_t v5; // edx
  uint32_t v6; // ecx
  uint32_t v7; // edx
  const std::string *v8; // rax
  bool is_psn_platform; // dl
  uint64_t v10; // rax

  v2 = proto::MusicGameUgcSearchBin::ugc_guid(music_search_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ugc_guid = v2;
  v3 = proto::MusicGameUgcSearchBin::music_id(music_search_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->music_id);
  }
  this->music_id = v3;
  v4 = proto::MusicGameUgcSearchBin::publish_time(music_search_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->publish_time);
  }
  this->publish_time = v4;
  v5 = proto::MusicGameUgcSearchBin::max_score(music_search_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->max_score);
  }
  this->max_score = v5;
  v6 = proto::MusicGameUgcSearchBin::note_count(music_search_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->note_count);
  }
  this->note_count = v6;
  v7 = proto::MusicGameUgcSearchBin::version(music_search_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version);
  }
  this->version = v7;
  v8 = proto::MusicGameUgcSearchBin::creator_nickname[abi:cxx11](music_search_bin);
  std::string::operator=(&this->creator_nickname, v8);
  is_psn_platform = proto::MusicGameUgcSearchBin::is_psn_platform(music_search_bin);
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_psn_platform);
  this->is_psn_platform = is_psn_platform;
  v10 = proto::MusicGameUgcSearchBin::import_from_ugc_guid(music_search_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->import_from_ugc_guid);
  this->import_from_ugc_guid = v10;
};

// Line 80: range 0000000016BFBFF8-0000000016BFC258
void __cdecl MusicGameUgcSearchRecord::toBin(
        const MusicGameUgcSearchRecord *const this,
        proto::MusicGameUgcSearchBin *music_search_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::MusicGameUgcSearchBin::set_ugc_guid(music_search_bin, this->ugc_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSearchBin::set_music_id(music_search_bin, this->music_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->publish_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSearchBin::set_publish_time(music_search_bin, this->publish_time);
  if ( *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSearchBin::set_max_score(music_search_bin, this->max_score);
  if ( *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->note_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSearchBin::set_note_count(music_search_bin, this->note_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcSearchBin::set_version(music_search_bin, this->version);
  proto::MusicGameUgcSearchBin::set_creator_nickname(music_search_bin, &this->creator_nickname);
  if ( *(char *)(((unsigned __int64)&this->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_psn_platform);
  proto::MusicGameUgcSearchBin::set_is_psn_platform(music_search_bin, this->is_psn_platform);
  if ( *(_BYTE *)(((unsigned __int64)&this->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::MusicGameUgcSearchBin::set_import_from_ugc_guid(music_search_bin, this->import_from_ugc_guid);
};

// Line 93: range 0000000016BFC25A-0000000016BFC33A
void __cdecl MusicGameUgcPlayRecord::fromBin(
        MusicGameUgcPlayRecord *const this,
        const proto::MusicGameUgcPlayBin *music_play_bin)
{
  uint64_t v2; // rax
  uint32_t v3; // edx
  uint32_t v4; // ecx

  v2 = proto::MusicGameUgcPlayBin::ugc_guid(music_play_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->ugc_guid = v2;
  v3 = proto::MusicGameUgcPlayBin::version(music_play_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->version);
  }
  this->version = v3;
  v4 = proto::MusicGameUgcPlayBin::score(music_play_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score);
  }
  this->score = v4;
};

// Line 100: range 0000000016BFC33C-0000000016BFC41D
void __cdecl MusicGameUgcPlayRecord::toBin(
        const MusicGameUgcPlayRecord *const this,
        proto::MusicGameUgcPlayBin *music_play_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::MusicGameUgcPlayBin::set_ugc_guid(music_play_bin, this->ugc_guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->version >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcPlayBin::set_version(music_play_bin, this->version);
  if ( *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MusicGameUgcPlayBin::set_score(music_play_bin, this->score);
};

// Line 107: range 0000000016BFC41E-0000000016BFCC22
int32_t __cdecl MusicGameActivity::fromScheduleBin(
        MusicGameActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // ecx
  uint32_t v6; // ecx
  bool is_unlock; // cl
  std::remove_reference<MusicGameUgcSaveRecord&>::type *v8; // r14
  unsigned __int64 n; // rax
  __int64 v10; // rdi
  __int64 v11; // rdi
  uint64_t import_from_ugc_guid; // rdi
  bool is_finish_all_cond_level; // dl
  uint32_t v14; // ecx
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::MusicGameUgcSaveBin>::const_iterator __for_begin_0; // [rsp+10h] [rbp-1D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::MusicGameUgcSaveBin>::const_iterator __for_end_0; // [rsp+18h] [rbp-1C8h] BYREF
  const proto::MusicGameScheduleBin *schedule_bin; // [rsp+20h] [rbp-1C0h]
  const google::protobuf::Map<unsigned int,proto::MusicGameRecordBin> *__for_range; // [rsp+28h] [rbp-1B8h]
  const google::protobuf::RepeatedPtrField<proto::MusicGameUgcSaveBin> *__for_range_0; // [rsp+30h] [rbp-1B0h]
  const google::protobuf::RepeatedPtrField<proto::MusicGameUgcSearchBin> *__for_range_1; // [rsp+38h] [rbp-1A8h]
  const google::protobuf::RepeatedPtrField<proto::MusicGameUgcPlayBin> *__for_range_2; // [rsp+40h] [rbp-1A0h]
  const proto::MusicGameUgcPlayBin *music_play_bin; // [rsp+48h] [rbp-198h]
  const proto::MusicGameUgcSearchBin *music_search_bin; // [rsp+50h] [rbp-190h]
  const proto::MusicGameUgcSaveBin *music_save_bin; // [rsp+58h] [rbp-188h]
  const unsigned int *p_music_basic_id; // [rsp+60h] [rbp-180h]
  MusicGameRecord *record; // [rsp+68h] [rbp-178h]
  google::protobuf::Map<unsigned int,proto::MusicGameRecordBin>::const_iterator __for_begin; // [rsp+70h] [rbp-170h] BYREF
  google::protobuf::Map<unsigned int,proto::MusicGameRecordBin>::const_iterator __for_end; // [rsp+90h] [rbp-150h] BYREF
  char v31[304]; // [rsp+B0h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 16 10 record:136 64 48 10 record:120 144 80 10 record:128";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = 62194;
  v4[536862727] = -202116109;
  schedule_bin = proto::ActivityScheduleBin::music_game_bin(bin);
  __for_range = proto::MusicGameScheduleBin::music_game_record_map(schedule_bin);
  google::protobuf::Map<unsigned int,proto::MusicGameRecordBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::MusicGameRecordBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_music_basic_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::MusicGameRecordBin>::const_iterator::operator*(&__for_begin);
    record = std::map<unsigned int,MusicGameRecord>::operator[](&this->music_game_record_map_, p_music_basic_id);
    v5 = proto::MusicGameRecordBin::max_score((const proto::MusicGameRecordBin *const)(p_music_basic_id + 2));
    if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(record);
    }
    record->max_score = v5;
    v6 = proto::MusicGameRecordBin::max_combo((const proto::MusicGameRecordBin *const)(p_music_basic_id + 2));
    if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&record->max_combo);
    }
    record->max_combo = v6;
    is_unlock = proto::MusicGameRecordBin::is_unlock((const proto::MusicGameRecordBin *const)(p_music_basic_id + 2));
    if ( *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&record->is_unlock);
    }
    record->is_unlock = is_unlock;
    google::protobuf::Map<unsigned int,proto::MusicGameRecordBin>::const_iterator::operator++(&__for_begin);
  }
  std::map<unsigned long,MusicGameUgcSaveRecord>::clear(&this->ugc_save_record_map_);
  __for_range_0 = proto::MusicGameScheduleBin::music_game_ugc_save_bin(schedule_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::MusicGameUgcSaveBin>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::MusicGameUgcSaveBin>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcSaveBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    music_save_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcSaveBin const>::operator*(&__for_begin_0);
    *(_QWORD *)(v2 + 64) = 0LL;
    *(_QWORD *)(v2 + 72) = 0LL;
    *(_QWORD *)(v2 + 80) = 0LL;
    *(_QWORD *)(v2 + 88) = 0LL;
    *(_QWORD *)(v2 + 96) = 0LL;
    *(_QWORD *)(v2 + 104) = 0LL;
    MusicGameUgcSaveRecord::fromBin((MusicGameUgcSaveRecord *const)(v2 + 64), music_save_bin);
    v8 = std::move<MusicGameUgcSaveRecord &>((MusicGameUgcSaveRecord *)(v2 + 64));
    n = (unsigned __int64)std::map<unsigned long,MusicGameUgcSaveRecord>::operator[](
                            &this->ugc_save_record_map_,
                            (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v2 + 64));
    if ( *(char *)((n >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((n + 47) >> 3) + 0x7FFF8000) != 0
      && (char)((n + 47) & 7) >= *(_BYTE *)(((n + 47) >> 3) + 0x7FFF8000) )
    {
      n = __asan_report_store_n(n, 48LL);
    }
    if ( *(char *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v8->import_from_ugc_guid + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v8 + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&v8->import_from_ugc_guid + 7) >> 3)
                                                      + 0x7FFF8000) )
    {
      n = __asan_report_load_n(v8, 48LL);
    }
    v10 = *(_QWORD *)&v8->music_id;
    *(_QWORD *)n = v8->ugc_guid;
    *(_QWORD *)(n + 8) = v10;
    v11 = *(_QWORD *)&v8->note_count;
    *(_QWORD *)(n + 16) = *(_QWORD *)&v8->save_time;
    *(_QWORD *)(n + 24) = v11;
    import_from_ugc_guid = v8->import_from_ugc_guid;
    *(_QWORD *)(n + 32) = *(_QWORD *)&v8->is_published;
    *(_QWORD *)(n + 40) = import_from_ugc_guid;
    google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcSaveBin const>::operator++(&__for_begin_0);
  }
  ActivityLru<unsigned long,MusicGameUgcSearchRecord>::clear(&this->ugc_search_record_lru_);
  __for_range_1 = proto::MusicGameScheduleBin::music_game_ugc_search_bin(schedule_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::MusicGameUgcSearchBin>::begin(__for_range_1).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::MusicGameUgcSearchBin>::end(__for_range_1).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcSearchBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcSearchBin> *const)&__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcSearchBin>::iterator *)&__for_end_0) )
  {
    music_search_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcSearchBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcSearchBin> *const)&__for_begin_0);
    MusicGameUgcSearchRecord::MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v2 + 144));
    MusicGameUgcSearchRecord::fromBin((MusicGameUgcSearchRecord *const)(v2 + 144), music_search_bin);
    ActivityLru<unsigned long,MusicGameUgcSearchRecord>::append(
      &this->ugc_search_record_lru_,
      (const unsigned __int64 *)(v2 + 144),
      (const MusicGameUgcSearchRecord *)(v2 + 144));
    MusicGameUgcSearchRecord::~MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v2 + 144));
    google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcSearchBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcSearchBin> *const)&__for_begin_0);
  }
  ActivityLru<unsigned long,MusicGameUgcPlayRecord>::clear(&this->ugc_play_record_lru_);
  __for_range_2 = proto::MusicGameScheduleBin::music_game_ugc_play_bin(schedule_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::MusicGameUgcPlayBin>::begin(__for_range_2).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::MusicGameUgcPlayBin>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcPlayBin const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcPlayBin> *const)&__for_begin_0,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcPlayBin>::iterator *)&__for_end_0) )
  {
    music_play_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcPlayBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcPlayBin> *const)&__for_begin_0);
    *(_QWORD *)(v2 + 32) = 0LL;
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    MusicGameUgcPlayRecord::fromBin((MusicGameUgcPlayRecord *const)(v2 + 32), music_play_bin);
    ActivityLru<unsigned long,MusicGameUgcPlayRecord>::append(
      &this->ugc_play_record_lru_,
      (const unsigned __int64 *)(v2 + 32),
      (const MusicGameUgcPlayRecord *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::MusicGameUgcPlayBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::MusicGameUgcPlayBin> *const)&__for_begin_0);
  }
  is_finish_all_cond_level = proto::MusicGameScheduleBin::is_finish_all_cond_level(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_finish_all_cond_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_all_cond_level_);
  this->is_finish_all_cond_level_ = is_finish_all_cond_level;
  v14 = proto::MusicGameScheduleBin::cur_trans_no(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->cur_trans_no_);
  }
  this->cur_trans_no_ = v14;
  result = 0;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
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

// Line 146: range 0000000016BFCC24-0000000016BFD170
int32_t __cdecl MusicGameActivity::toScheduleBin(const MusicGameActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,MusicGameRecord>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::map<unsigned int,MusicGameRecord>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  proto::MusicGameScheduleBin *schedule_bin; // [rsp+20h] [rbp-B0h]
  google::protobuf::Map<unsigned int,proto::MusicGameRecordBin> *record_bin_map; // [rsp+28h] [rbp-A8h]
  const std::map<unsigned int,MusicGameRecord> *__for_range; // [rsp+30h] [rbp-A0h]
  const std::map<long unsigned int,MusicGameUgcSaveRecord> *__for_range_0; // [rsp+38h] [rbp-98h]
  const std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>> *__for_range_1; // [rsp+40h] [rbp-90h]
  const std::list<std::pair<long unsigned int,MusicGameUgcPlayRecord>> *__for_range_2; // [rsp+48h] [rbp-88h]
  const std::pair<long unsigned int,MusicGameUgcPlayRecord> *v11; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcPlayRecord> >::type *__1; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcPlayRecord> >::type *play_record; // [rsp+60h] [rbp-70h]
  proto::MusicGameUgcPlayBin *play_bin; // [rsp+68h] [rbp-68h]
  const std::pair<long unsigned int,MusicGameUgcSearchRecord> *v15; // [rsp+70h] [rbp-60h]
  std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *__0; // [rsp+78h] [rbp-58h]
  std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *search_record; // [rsp+80h] [rbp-50h]
  proto::MusicGameUgcSearchBin *search_bin; // [rsp+88h] [rbp-48h]
  const std::pair<long unsigned int const,MusicGameUgcSaveRecord> *v19; // [rsp+90h] [rbp-40h]
  std::tuple_element<0,const std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *_; // [rsp+98h] [rbp-38h]
  std::tuple_element<1,const std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *save_record; // [rsp+A0h] [rbp-30h]
  proto::MusicGameUgcSaveBin *save_bin; // [rsp+A8h] [rbp-28h]
  const std::pair<unsigned int const,MusicGameRecord> *v23; // [rsp+B0h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,MusicGameRecord> >::type *music_basic_id; // [rsp+B8h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,MusicGameRecord> >::type *record; // [rsp+C0h] [rbp-10h]
  proto::MusicGameRecordBin *record_bin; // [rsp+C8h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_music_game_bin(bin);
  record_bin_map = proto::MusicGameScheduleBin::mutable_music_game_record_map(schedule_bin);
  __for_range = &this->music_game_record_map_;
  __for_begin._M_node = std::map<unsigned int,MusicGameRecord>::begin(&this->music_game_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,MusicGameRecord>::end(&this->music_game_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v23 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MusicGameRecord>>::operator*(&__for_begin);
    music_basic_id = std::get<0ul,unsigned int const,MusicGameRecord>(v23);
    record = (std::tuple_element<1,const std::pair<unsigned int const,MusicGameRecord> >::type *)std::get<1ul,unsigned int const,MusicGameRecord>(v23);
    record_bin = google::protobuf::Map<unsigned int,proto::MusicGameRecordBin>::operator[](
                   record_bin_map,
                   music_basic_id);
    if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::MusicGameRecordBin::set_max_score(record_bin, record->max_score);
    if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::MusicGameRecordBin::set_max_combo(record_bin, record->max_combo);
    if ( *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&record->is_unlock);
    }
    proto::MusicGameRecordBin::set_is_unlock(record_bin, record->is_unlock);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,MusicGameRecord>>::operator++(&__for_begin);
  }
  proto::MusicGameScheduleBin::clear_music_game_ugc_save_bin(schedule_bin);
  __for_range_0 = &this->ugc_save_record_map_;
  __for_begin._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::begin(&this->ugc_save_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)&__for_end) )
  {
    v19 = std::_Rb_tree_const_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator*((const std::_Rb_tree_const_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)&__for_begin);
    _ = std::get<0ul,unsigned long const,MusicGameUgcSaveRecord>(v19);
    save_record = (std::tuple_element<1,const std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *)std::get<1ul,unsigned long const,MusicGameUgcSaveRecord>(v19);
    save_bin = proto::MusicGameScheduleBin::add_music_game_ugc_save_bin(schedule_bin);
    MusicGameUgcSaveRecord::toBin(save_record, save_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator++((std::_Rb_tree_const_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)&__for_begin);
  }
  proto::MusicGameScheduleBin::clear_music_game_ugc_search_bin(schedule_bin);
  __for_range_1 = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::getPairList[abi:cxx11](&this->ugc_search_record_lru_);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Base_ptr)std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::begin(__for_range_1)._M_node;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Base_ptr)std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >::_Self *)&__for_begin,
            (const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >::_Self *)&__for_end) )
  {
    v15 = std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator*((const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)&__for_begin);
    __0 = (std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *)std::get<0ul,unsigned long,MusicGameUgcSearchRecord>(v15);
    search_record = (std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *)std::get<1ul,unsigned long,MusicGameUgcSearchRecord>(v15);
    search_bin = proto::MusicGameScheduleBin::add_music_game_ugc_search_bin(schedule_bin);
    MusicGameUgcSearchRecord::toBin(search_record, search_bin);
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator++((std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)&__for_begin);
  }
  proto::MusicGameScheduleBin::clear_music_game_ugc_play_bin(schedule_bin);
  __for_range_2 = ActivityLru<unsigned long,MusicGameUgcPlayRecord>::getPairList[abi:cxx11](&this->ugc_play_record_lru_);
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Base_ptr)std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::begin(__for_range_2)._M_node;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Base_ptr)std::list<std::pair<unsigned long,MusicGameUgcPlayRecord>>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >::_Self *)&__for_begin,
            (const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> >::_Self *)&__for_end) )
  {
    v11 = std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::operator*((const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)&__for_begin);
    __1 = (std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcPlayRecord> >::type *)std::get<0ul,unsigned long,MusicGameUgcPlayRecord>(v11);
    play_record = (std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcPlayRecord> >::type *)std::get<1ul,unsigned long,MusicGameUgcPlayRecord>(v11);
    play_bin = proto::MusicGameScheduleBin::add_music_game_ugc_play_bin(schedule_bin);
    MusicGameUgcPlayRecord::toBin(play_record, play_bin);
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcPlayRecord>>::operator++((std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcPlayRecord> > *const)&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_finish_all_cond_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_all_cond_level_);
  proto::MusicGameScheduleBin::set_is_finish_all_cond_level(schedule_bin, this->is_finish_all_cond_level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MusicGameScheduleBin::set_cur_trans_no(schedule_bin, this->cur_trans_no_);
  return 0;
};

// Line 185: range 0000000016BFD172-0000000016BFDB0C
int32_t __cdecl MusicGameActivity::toClient(MusicGameActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rcx
  int32_t result; // eax
  unsigned __int64 UgcComp; // rax
  unsigned __int64 v8; // rdx
  std::map<unsigned int,MusicGameRecord>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::map<unsigned int,MusicGameRecord>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  proto::MusicGameActivityDetailInfo *proto_detail; // [rsp+28h] [rbp-108h]
  google::protobuf::Map<unsigned int,proto::MusicGameRecord> *proto_record_map; // [rsp+30h] [rbp-100h]
  std::map<unsigned int,MusicGameRecord> *__for_range; // [rsp+38h] [rbp-F8h]
  std::map<long unsigned int,MusicGameUgcSaveRecord> *__for_range_0; // [rsp+40h] [rbp-F0h]
  const std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>> *__for_range_1; // [rsp+48h] [rbp-E8h]
  const std::pair<long unsigned int,MusicGameUgcSearchRecord> *v16; // [rsp+50h] [rbp-E0h]
  std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *__0; // [rsp+58h] [rbp-D8h]
  std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *search_record; // [rsp+60h] [rbp-D0h]
  proto::UgcMusicBriefInfo *add_search_record; // [rsp+68h] [rbp-C8h]
  const std::pair<long unsigned int const,MusicGameUgcSaveRecord> *v20; // [rsp+70h] [rbp-C0h]
  std::tuple_element<0,const std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *_; // [rsp+78h] [rbp-B8h]
  std::tuple_element<1,const std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *save_record; // [rsp+80h] [rbp-B0h]
  proto::UgcMusicBriefInfo *add_save_record; // [rsp+88h] [rbp-A8h]
  const std::pair<unsigned int const,MusicGameRecord> *v24; // [rsp+90h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,MusicGameRecord> >::type *music_basic_id; // [rsp+98h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,MusicGameRecord> >::type *record; // [rsp+A0h] [rbp-90h]
  proto::MusicGameRecord *proto_record; // [rsp+A8h] [rbp-88h]
  common::milog::MiLogStream v28; // [rsp+B0h] [rbp-80h] BYREF
  char v29[96]; // [rsp+D0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 play_record:226";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "toClient",
      188);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v28,
           (const char (*)[37])"BaseActivity::toClient fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = -1;
  }
  else
  {
    proto_detail = proto::ActivityInfo::mutable_music_game_info(activity_info);
    proto_record_map = proto::MusicGameActivityDetailInfo::mutable_music_game_record_map(proto_detail);
    __for_range = &this->music_game_record_map_;
    __for_begin._M_node = std::map<unsigned int,MusicGameRecord>::begin(&this->music_game_record_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,MusicGameRecord>::end(&this->music_game_record_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord>>::operator*(&__for_begin);
      music_basic_id = std::get<0ul,unsigned int const,MusicGameRecord>(v24);
      record = (std::tuple_element<1,const std::pair<unsigned int const,MusicGameRecord> >::type *)std::get<1ul,unsigned int const,MusicGameRecord>(v24);
      proto_record = google::protobuf::Map<unsigned int,proto::MusicGameRecord>::operator[](
                       proto_record_map,
                       music_basic_id);
      if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MusicGameRecord::set_max_score(proto_record, record->max_score);
      if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MusicGameRecord::set_max_combo(proto_record, record->max_combo);
      if ( *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_unlock >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&record->is_unlock);
      }
      proto::MusicGameRecord::set_is_unlock(proto_record, record->is_unlock);
      std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord>>::operator++(&__for_begin);
    }
    __for_range_0 = &this->ugc_save_record_map_;
    __for_begin._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::begin(&this->ugc_save_record_map_)._M_node;
    __for_end._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)&__for_begin,
              (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)&__for_end) )
    {
      v20 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator*((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)&__for_begin);
      _ = std::get<0ul,unsigned long const,MusicGameUgcSaveRecord>(v20);
      save_record = (std::tuple_element<1,const std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *)std::get<1ul,unsigned long const,MusicGameUgcSaveRecord>(v20);
      add_save_record = proto::MusicGameActivityDetailInfo::add_ugc_record_list(proto_detail);
      MusicGameUgcSaveRecord::toClient(save_record, add_save_record);
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
      if ( ActivityLru<unsigned long,MusicGameUgcPlayRecord>::get(
             &this->ugc_play_record_lru_,
             &save_record->ugc_guid,
             (MusicGameUgcPlayRecord *)(v2 + 32)) )
      {
        proto::UgcMusicBriefInfo::set_self_max_score(add_save_record, *(_DWORD *)(v2 + 44));
        proto::UgcMusicBriefInfo::set_is_played(add_save_record, 1);
      }
      std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator++((std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)&__for_begin);
    }
    __for_range_1 = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::getPairList[abi:cxx11](&this->ugc_search_record_lru_);
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Base_ptr)std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::begin(__for_range_1)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Base_ptr)std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >::_Self *)&__for_begin,
              (const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> >::_Self *)&__for_end) )
    {
      v16 = std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator*((const std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)&__for_begin);
      __0 = (std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *)std::get<0ul,unsigned long,MusicGameUgcSearchRecord>(v16);
      search_record = (std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *)std::get<1ul,unsigned long,MusicGameUgcSearchRecord>(v16);
      add_search_record = proto::MusicGameActivityDetailInfo::add_ugc_search_list(proto_detail);
      if ( *(_BYTE *)(((unsigned __int64)search_record >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::UgcMusicBriefInfo::set_ugc_guid(add_search_record, search_record->ugc_guid);
      if ( *(_BYTE *)(((unsigned __int64)&search_record->music_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&search_record->music_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::UgcMusicBriefInfo::set_music_id(add_search_record, search_record->music_id);
      if ( *(_BYTE *)(((unsigned __int64)&search_record->publish_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)search_record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&search_record->publish_time >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::UgcMusicBriefInfo::set_publish_time(add_search_record, search_record->publish_time);
      if ( *(_BYTE *)(((unsigned __int64)&search_record->max_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&search_record->max_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::UgcMusicBriefInfo::set_max_score(add_search_record, search_record->max_score);
      if ( *(_BYTE *)(((unsigned __int64)&search_record->note_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)search_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&search_record->note_count >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::UgcMusicBriefInfo::set_note_count(add_search_record, search_record->note_count);
      proto::UgcMusicBriefInfo::set_creator_nickname(add_search_record, &search_record->creator_nickname);
      if ( *(char *)(((unsigned __int64)&search_record->is_psn_platform >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&search_record->is_psn_platform);
      proto::UgcMusicBriefInfo::set_is_psn_platform(add_search_record, search_record->is_psn_platform);
      if ( *(_BYTE *)(((unsigned __int64)&search_record->import_from_ugc_guid >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      proto::UgcMusicBriefInfo::set_import_from_ugc_guid(add_search_record, search_record->import_from_ugc_guid);
      *(_QWORD *)(v2 + 32) = 0LL;
      *(_DWORD *)(v2 + 40) = 0;
      *(_DWORD *)(v2 + 44) = 0;
      if ( ActivityLru<unsigned long,MusicGameUgcPlayRecord>::get(
             &this->ugc_play_record_lru_,
             &search_record->ugc_guid,
             (MusicGameUgcPlayRecord *)(v2 + 32)) )
      {
        proto::UgcMusicBriefInfo::set_self_max_score(add_search_record, *(_DWORD *)(v2 + 44));
        proto::UgcMusicBriefInfo::set_is_played(add_search_record, 1);
      }
      std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator++((std::_List_const_iterator<std::pair<long unsigned int,MusicGameUgcSearchRecord> > *const)&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = (unsigned __int64)Player::getUgcComp(this->player_);
    if ( *(_BYTE *)((UgcComp >> 3) + 0x7FFF8000) )
      UgcComp = __asan_report_load8();
    v8 = *(_QWORD *)UgcComp + 80LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      UgcComp = __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(unsigned __int64))v8)(UgcComp) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "toClient",
        236);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        &v28,
        (const char (*)[27])"UgcComp notifyAllData fail");
      common::milog::MiLogStream::~MiLogStream(&v28);
    }
    result = 0;
  }
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

// Line 243: range 0000000016BFDB0E-0000000016BFDBA4
void __cdecl MusicGameActivity::onClear(MusicGameActivity *const this)
{
  std::map<unsigned int,MusicGameRecord>::clear(&this->music_game_record_map_);
  std::map<unsigned long,MusicGameUgcSaveRecord>::clear(&this->ugc_save_record_map_);
  ActivityLru<unsigned long,MusicGameUgcSearchRecord>::clear(&this->ugc_search_record_lru_);
  ActivityLru<unsigned long,MusicGameUgcPlayRecord>::clear(&this->ugc_play_record_lru_);
  if ( *(char *)(((unsigned __int64)&this->is_finish_all_cond_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_all_cond_level_);
  this->is_finish_all_cond_level_ = 0;
};

// Line 252: range 0000000016BFDBA6-0000000016BFDD14
int32_t __cdecl MusicGameActivity::init(MusicGameActivity *const this)
{
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *p_ugc_search_record_lru; // rcx
  ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *p_ugc_play_record_lru; // rcx
  const data::MusicGameDrumConfig *music_game_drum_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6)->design_config.txt_config_mgr.activity_music_game_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  music_game_drum_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameDrumConfig(
                                 p_activity_music_game_config_mgr,
                                 this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(v6);
  if ( music_game_drum_config_ptr )
  {
    p_ugc_search_record_lru = &this->ugc_search_record_lru_;
    if ( *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_history_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_history_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ActivityLru<unsigned long,MusicGameUgcSearchRecord>::setMaxSize(
      p_ugc_search_record_lru,
      music_game_drum_config_ptr->ugc_max_history_num);
    p_ugc_play_record_lru = &this->ugc_play_record_lru_;
    if ( *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_saved_score_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)music_game_drum_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_saved_score_num >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ActivityLru<unsigned long,MusicGameUgcPlayRecord>::setMaxSize(
      p_ugc_play_record_lru,
      music_game_drum_config_ptr->ugc_max_saved_score_num);
  }
  return 0;
};

// Line 263: range 0000000016BFDD16-0000000016BFE1BE
int32_t __cdecl MusicGameActivity::execAction(MusicGameActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v13; // rdx
  std::map<unsigned int,MusicGameRecord>::mapped_type *v14; // rdx
  bool *p_is_unlock; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  const data::MusicInfoConfig *music_config_ptr; // [rsp+20h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v20; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 music_id:268 64 4 18 music_basic_id:280";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::execAction;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_UNLOCK_MUSIC_BY_MUSIC_GAME_ACTIVITY )
  {
    *(_DWORD *)(v2 + 48) = 0;
    if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&action_exec->param, (unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "execAction",
        271);
      v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v21,
             (const char (*)[25])"parse param fail, param:");
      v6 = common::milog::MiLogStream::operator<<<std::string>(v5, &action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v7, this);
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = -1;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      music_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicInfoConfig(
                           &v9->design_config.txt_config_mgr.activity_music_game_config_mgr,
                           *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( music_config_ptr )
      {
        __for_range = &music_config_ptr->level_id;
        __for_begin._M_current = std::vector<unsigned int>::begin(&music_config_ptr->level_id)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&music_config_ptr->level_id)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v13 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 64) = *v13;
          v14 = std::map<unsigned int,MusicGameRecord>::operator[](
                  &this->music_game_record_map_,
                  (const std::map<unsigned int,MusicGameRecord>::key_type *)(v2 + 64));
          p_is_unlock = &v14->is_unlock;
          if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
          {
            __asan_report_store1(p_is_unlock);
          }
          v14->is_unlock = 1;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
        BaseActivity::notifyClientData(this, 0);
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/music_game_activity.cpp",
          "execAction",
          277);
        v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v21,
                (const char (*)[36])"findMusicInfoConfig fail, music_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" activity:");
        common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v12, this);
        common::milog::MiLogStream::~MiLogStream(&v21);
        result = -1;
      }
    }
  }
  else
  {
    result = BaseActivity::execAction(this, action_exec);
  }
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

// Line 294: range 0000000016BFE1C0-0000000016BFECDF
int32_t __cdecl MusicGameActivity::startMusicGame(
        MusicGameActivity *const this,
        const proto::MusicGameStartReq *req,
        proto::MusicGameStartRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerMpComp *MpComp; // rax
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // rax
  uint64_t v10; // rdx
  bool v11; // si
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  uint32_t MusicIdByUgcGuid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // r14
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v15; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::pointer v21; // rdx
  bool *p_is_unlock; // rax
  uint64_t v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  PlayerMpComp *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t CurAvatarId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // r14
  uint64_t TransNo; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string v35; // [rsp+0h] [rbp-1C0h]
  proto::MusicGameStartRsp *rsp_0a; // [rsp+8h] [rbp-1B8h]
  const proto::MusicGameStartReq *reqa; // [rsp+10h] [rbp-1B0h]
  MusicGameActivity *thisa; // [rsp+18h] [rbp-1A8h]
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self __y; // [rsp+20h] [rbp-1A0h] BYREF
  const data::MusicGameBasicConfig *music_game_basic_config_ptr; // [rsp+28h] [rbp-198h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-190h] BYREF
  std::shared_ptr<google::protobuf::Message> v42; // [rsp+40h] [rbp-180h] BYREF
  common::milog::MiLogStream v43; // [rsp+50h] [rbp-170h] BYREF
  char v44[336]; // [rsp+70h] [rbp-150h] BYREF

  *(&v35._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v35._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v35._M_string_length = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v44;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 1 10 holder:303 64 4 18 music_basic_id:345 80 8 12 ugc_guid:309 112 8 8 iter:352 144 16 11 "
                        "log_ptr:304 176 80 17 search_record:333";
  *(_QWORD *)(v3 + 16) = MusicGameActivity::startMusicGame;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MpComp = Player::getMpComp(this->player_);
  if ( PlayerMpComp::isInMpMode(MpComp) )
  {
    common::milog::MiLogStream::create(
      &v43,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/music_game_activity.cpp",
      "startMusicGame",
      298);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v43,
      (const char (*)[28])"is in mp mode, ignore start");
    common::milog::MiLogStream::~MiLogStream(&v43);
    v7 = 1202;
    goto LABEL_52;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v43, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE14u, v35);
  std::string::~string(&v43);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMusicGameStart>();
  if ( !proto::MusicGameStartReq::ugc_guid(reqa) )
  {
    *(_DWORD *)(v3 + 64) = proto::MusicGameStartReq::music_basic_id(reqa);
    proto::MusicGameStartRsp::set_music_basic_id(rsp_0a, *(_DWORD *)(v3 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v42);
    v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v42);
    music_game_basic_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameBasicConfig(
                                    &v20->design_config.txt_config_mgr.activity_music_game_config_mgr,
                                    *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v42);
    if ( !music_game_basic_config_ptr )
    {
      v7 = 10024;
      goto LABEL_51;
    }
    *(std::map<unsigned int,MusicGameRecord>::iterator *)(v3 + 112) = std::map<unsigned int,MusicGameRecord>::find(
                                                                        &thisa->music_game_record_map_,
                                                                        (const std::map<unsigned int,MusicGameRecord>::key_type *)(v3 + 64));
    __y._M_node = std::map<unsigned int,MusicGameRecord>::end(&thisa->music_game_record_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Self *)(v3 + 112),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Self *)&__y) )
    {
      v7 = 10021;
      goto LABEL_51;
    }
    v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> > *const)(v3 + 112));
    p_is_unlock = &v21->second.is_unlock;
    if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_unlock);
    }
    if ( !v21->second.is_unlock )
    {
      v7 = 10022;
      goto LABEL_51;
    }
    v23 = *(unsigned int *)(v3 + 64);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->current_music_game_id_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&thisa->current_music_game_id_);
    thisa->current_music_game_id_ = v23;
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    if ( *(_BYTE *)(((unsigned __int64)&music_game_basic_config_ptr->music_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)music_game_basic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_game_basic_config_ptr->music_id >> 3)
                                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMusicGameStart::set_music_id(v24, music_game_basic_config_ptr->music_id);
    v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    if ( *(_BYTE *)(((unsigned __int64)&music_game_basic_config_ptr->music_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&music_game_basic_config_ptr->music_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMusicGameStart::set_level_id(v25, music_game_basic_config_ptr->music_level);
    v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    proto_log::PlayerLogBodyMusicGameStart::set_game_type(v26, 1u);
LABEL_44:
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v27 = Player::getMpComp(thisa->player_);
    PlayerMpComp::refreshMpModeAvailability(v27);
    v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(thisa->player_);
    CurAvatarId = PlayerAvatarComp::getCurAvatarId(AvatarComp);
    proto_log::PlayerLogBodyMusicGameStart::set_avatar_id(v28, CurAvatarId);
    v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    TransNo = MusicGameActivity::genNextTransNo(thisa);
    proto_log::PlayerLogBodyMusicGameStart::set_trans_no(v31, TransNo);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v42, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMusicGameStart,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMusicGameStart> *)(v3 + 144));
    Player::printStatLog(player, &p_body_ptr, &v42, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v42);
    v7 = 0;
    goto LABEL_51;
  }
  *(_QWORD *)(v3 + 80) = proto::MusicGameStartReq::ugc_guid(reqa);
  proto::MusicGameStartRsp::set_ugc_guid(rsp_0a, *(_QWORD *)(v3 + 80));
  if ( MusicGameActivity::isUgcGuidOpening(thisa, *(_QWORD *)(v3 + 80)) )
  {
    v10 = *(_QWORD *)(v3 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->current_music_game_id_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&thisa->current_music_game_id_);
    thisa->current_music_game_id_ = v10;
    v11 = !proto::MusicGameStartReq::is_save_score(reqa);
    if ( *(char *)(((unsigned __int64)&thisa->is_try_self_ugc_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&thisa->is_try_self_ugc_);
    thisa->is_try_self_ugc_ = v11;
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    MusicIdByUgcGuid = MusicGameActivity::getMusicIdByUgcGuid(thisa, *(_QWORD *)(v3 + 80));
    proto_log::PlayerLogBodyMusicGameStart::set_music_id(v12, MusicIdByUgcGuid);
    if ( *(char *)(((unsigned __int64)&thisa->is_try_self_ugc_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&thisa->is_try_self_ugc_);
    if ( thisa->is_try_self_ugc_ )
    {
      *(std::map<long unsigned int,MusicGameUgcSaveRecord>::iterator *)(v3 + 112) = std::map<unsigned long,MusicGameUgcSaveRecord>::find(
                                                                                      &thisa->ugc_save_record_map_,
                                                                                      (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v3 + 80));
      __y._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(&thisa->ugc_save_record_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)(v3 + 112),
             &__y) )
      {
        v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        v15 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v3 + 112));
        if ( *(_BYTE *)(((unsigned __int64)&v15->second.version >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v15 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v15->second.version >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyMusicGameStart::set_version_num(v14, v15->second.version);
      }
      v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      proto_log::PlayerLogBodyMusicGameStart::set_game_type(v16, 3u);
    }
    else
    {
      MusicGameUgcSearchRecord::MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v3 + 176));
      if ( ActivityLru<unsigned long,MusicGameUgcSearchRecord>::find(
             &thisa->ugc_search_record_lru_,
             (const unsigned __int64 *)(v3 + 80),
             (MusicGameUgcSearchRecord *)(v3 + 176)) )
      {
        v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
        proto_log::PlayerLogBodyMusicGameStart::set_version_num(v17, *(_DWORD *)(v3 + 200));
      }
      v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      proto_log::PlayerLogBodyMusicGameStart::set_game_type(v18, 2u);
      MusicGameUgcSearchRecord::~MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v3 + 176));
    }
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
    proto_log::PlayerLogBodyMusicGameStart::set_share_code(v19, *(_QWORD *)(v3 + 80));
    goto LABEL_44;
  }
  common::milog::MiLogStream::create(
    &v43,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/music_game_activity.cpp",
    "startMusicGame",
    313);
  v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v43,
         (const char (*)[29])"music is not open, ugc_guid:");
  common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v3 + 80));
  common::milog::MiLogStream::~MiLogStream(&v43);
  v7 = 10021;
LABEL_51:
  std::shared_ptr<proto_log::PlayerLogBodyMusicGameStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMusicGameStart> *const)(v3 + 144));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
LABEL_52:
  result = v7;
  if ( v44 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 379: range 0000000016BFECE0-0000000016C00315
int32_t __cdecl MusicGameActivity::settleMusicGame(
        MusicGameActivity *const this,
        const proto::MusicGameSettleReq *req,
        proto::MusicGameSettleRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  google::protobuf::uint32 v7; // edx
  google::protobuf::uint64 v8; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r14
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v12; // rdx
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  google::protobuf::uint32 v15; // r15d
  PlayerEventComp *v17; // r15
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // r14
  uint32_t MusicIdByUgcGuid; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::pointer v37; // rax
  bool *p_is_unlock; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rdx
  uint32_t v42; // ecx
  uint32_t v43; // ecx
  uint32_t v44; // ecx
  uint32_t v45; // ecx
  unsigned int *v46; // r9
  PlayerEventComp *EventComp; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v48; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v50; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v51; // r14
  uint64_t CurTransNo; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v53; // r14
  google::protobuf::uint32 restarted; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v55; // r14
  google::protobuf::uint32 v56; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // r14
  google::protobuf::uint32 v58; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v59; // r14
  google::protobuf::uint32 v60; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  google::protobuf::RepeatedField<unsigned int> *v62; // r14
  const google::protobuf::RepeatedField<unsigned int> *v63; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // r14
  google::protobuf::uint32 v65; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v66; // r14
  google::protobuf::uint32 is_full_combo; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v68; // rax
  google::protobuf::RepeatedField<unsigned int> *v69; // r14
  const google::protobuf::RepeatedField<unsigned int> *v70; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // r14
  google::protobuf::uint32 v72; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v73; // r14
  bool is_custom_delay; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v75; // r14
  google::protobuf::uint32 v76; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // r14
  bool is_custom_speed; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // r14
  float v80; // xmm0_4
  Player *player; // r14
  int32_t result; // eax
  std::string v83; // [rsp+0h] [rbp-200h]
  unsigned int *v84; // [rsp+0h] [rbp-200h]
  proto::MusicGameSettleRsp *rsp_0a; // [rsp+8h] [rbp-1F8h]
  const proto::MusicGameSettleReq *reqa; // [rsp+10h] [rbp-1F0h]
  MusicGameActivity *thisa; // [rsp+18h] [rbp-1E8h]
  bool is_need_notify; // [rsp+26h] [rbp-1DAh]
  bool is_need_notify_0; // [rsp+27h] [rbp-1D9h]
  unsigned int v90; // [rsp+28h] [rbp-1D8h] BYREF
  unsigned int __args_0; // [rsp+2Ch] [rbp-1D4h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self __y; // [rsp+30h] [rbp-1D0h] BYREF
  const data::MusicGameBasicConfig *music_basic_config_ptr; // [rsp+38h] [rbp-1C8h]
  const data::MusicInfoConfig *music_info_config_ptr; // [rsp+40h] [rbp-1C0h]
  MusicGameRecord *record; // [rsp+48h] [rbp-1B8h]
  std::string v96; // [rsp+50h] [rbp-1B0h] BYREF
  char v97[400]; // [rsp+70h] [rbp-190h] BYREF

  *(&v83._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v83._anon_0._M_allocated_capacity = (std::string::size_type)req;
  v83._M_string_length = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v97;
  v83._M_dataplus._M_p = v97;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 1 10 holder:384 64 4 18 music_basic_id:466 80 8 12 ugc_guid:395 112 8 8 iter:496 144 16 11 "
                        "log_ptr:385 176 16 13 event_ptr:445 208 16 15 play_record:424 240 80 17 search_record:414";
  *(_QWORD *)(v4 + 16) = MusicGameActivity::settleMusicGame;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = 61956;
  v6[536862722] = -234881024;
  v6[536862723] = 62194;
  v6[536862723] = -234881024;
  v6[536862724] = 62194;
  v6[536862725] = 62194;
  v6[536862726] = 62194;
  v6[536862727] = 62194;
  v6[536862730] = -202116109;
  v7 = proto::MusicGameSettleReq::music_basic_id(req);
  proto::MusicGameSettleRsp::set_music_basic_id((proto::MusicGameSettleRsp *const)v83._M_string_length, v7);
  v8 = proto::MusicGameSettleReq::ugc_guid(req);
  proto::MusicGameSettleRsp::set_ugc_guid((proto::MusicGameSettleRsp *const)v83._M_string_length, v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v96, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xE15u, v83);
  std::string::~string(&v96);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMusicGameStopV2>();
  if ( *(_BYTE *)(((unsigned __int64)&thisa->current_music_game_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !thisa->current_music_game_id_ )
  {
    v3 = 10023;
    goto LABEL_88;
  }
  if ( !proto::MusicGameSettleReq::ugc_guid(reqa) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&thisa->current_music_game_id_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v4 + 64) = thisa->current_music_game_id_;
    MusicGameActivity::tryClearCurrentMusicGameState(thisa);
    if ( !proto::MusicGameSettleReq::music_basic_id(reqa) )
    {
      v3 = 0;
      goto LABEL_88;
    }
    if ( proto::MusicGameSettleReq::music_basic_id(reqa) != *(_DWORD *)(v4 + 64) )
    {
      v3 = 10025;
      goto LABEL_88;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 208));
    v23 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208));
    music_basic_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameBasicConfig(
                               &v23->design_config.txt_config_mgr.activity_music_game_config_mgr,
                               *(_DWORD *)(v4 + 64));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
    if ( !music_basic_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v96,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "settleMusicGame",
        480);
      v24 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              (common::milog::MiLogStream *const)&v96,
              (const char (*)[47])"findMusicGameBasicConfig fail! music_basic_id:");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v4 + 64));
      v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v26, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v96);
      v3 = 10024;
      goto LABEL_88;
    }
    if ( std::vector<unsigned int>::empty(&music_basic_config_ptr->score_level_list) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v96,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/music_game_activity.cpp",
        "settleMusicGame",
        485);
      v27 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&v96,
              (const char (*)[43])"score_level_list is empty! music_basic_id:");
      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v4 + 64));
      v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v28, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v29, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v96);
      v3 = -1;
      goto LABEL_88;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 208));
    p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 208))->design_config.txt_config_mgr.activity_music_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)music_basic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    music_info_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicInfoConfig(
                              p_activity_music_game_config_mgr,
                              music_basic_config_ptr->music_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 208));
    if ( !music_info_config_ptr )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v96,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/music_game_activity.cpp",
        "settleMusicGame",
        492);
      v31 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&v96,
              (const char (*)[43])"findMusicInfoConfig fail! music_basic_id: ");
      v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v4 + 64));
      v33 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v32, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v33, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v96);
      v3 = -1;
      goto LABEL_88;
    }
    *(std::map<unsigned int,MusicGameRecord>::iterator *)(v4 + 112) = std::map<unsigned int,MusicGameRecord>::find(
                                                                        &thisa->music_game_record_map_,
                                                                        (const std::map<unsigned int,MusicGameRecord>::key_type *)(v4 + 64));
    __y._M_node = std::map<unsigned int,MusicGameRecord>::end(&thisa->music_game_record_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Self *)(v4 + 112),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Self *)&__y) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v96,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "settleMusicGame",
        499);
      v34 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&v96,
              (const char (*)[34])"record not found! music_basic_id:");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 64));
      v36 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v35, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v36, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v96);
      v3 = 10021;
      goto LABEL_88;
    }
    v37 = std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> > *const)(v4 + 112));
    record = &v37->second;
    p_is_unlock = &v37->second.is_unlock;
    if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_unlock);
    }
    if ( !record->is_unlock )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v96,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "settleMusicGame",
        506);
      v39 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)&v96,
              (const char (*)[37])"record not unlocked! music_basic_id:");
      v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v4 + 64));
      v41 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v40, (const char (*)[11])" activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v41, thisa);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v96);
      v3 = 10022;
      goto LABEL_88;
    }
    is_need_notify_0 = 0;
    v42 = proto::MusicGameSettleReq::score(reqa);
    if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v42 > record->max_score )
    {
      v43 = proto::MusicGameSettleReq::score(reqa);
      if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(record);
      }
      record->max_score = v43;
      proto::MusicGameSettleRsp::set_is_new_record(rsp_0a, 1);
      is_need_notify_0 = 1;
    }
    v44 = proto::MusicGameSettleReq::combo(reqa);
    if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v44 > record->max_combo )
    {
      v45 = proto::MusicGameSettleReq::combo(reqa);
      if ( *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->max_combo >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&record->max_combo);
      }
      record->max_combo = v45;
      is_need_notify_0 = 1;
    }
    __args_0 = proto::MusicGameSettleReq::combo(reqa);
    v90 = proto::MusicGameSettleReq::score(reqa);
    common::tools::perf::make_shared<FleurFairMusicGameSettleEvent,unsigned int const&,unsigned int &,unsigned int,unsigned int>(
      (const unsigned int *)(v4 + 176),
      &music_info_config_ptr->music_id,
      (unsigned int *)(v4 + 64),
      &v90,
      &__args_0,
      v46,
      v84,
      (unsigned int *)rsp_0a);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(thisa->player_);
    std::shared_ptr<BaseEvent>::shared_ptr<FleurFairMusicGameSettleEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v4 + 208),
      (const std::shared_ptr<FleurFairMusicGameSettleEvent> *)(v4 + 176));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v4 + 208));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 208));
    if ( is_need_notify_0 )
      BaseActivity::notifyClientData(thisa, 0);
    v48 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    if ( *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)music_basic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_id >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMusicGameStopV2::set_music_id(v48, music_basic_config_ptr->music_id);
    v49 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    if ( *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&music_basic_config_ptr->music_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMusicGameStopV2::set_level_id(v49, music_basic_config_ptr->music_level);
    v50 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    proto_log::PlayerLogBodyMusicGameStopV2::set_game_type(v50, 1u);
    std::shared_ptr<FleurFairMusicGameSettleEvent>::~shared_ptr((std::shared_ptr<FleurFairMusicGameSettleEvent> *const)(v4 + 176));
    goto LABEL_85;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->current_music_game_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_QWORD *)(v4 + 80) = thisa->current_music_game_id_;
  MusicGameActivity::tryClearCurrentMusicGameState(thisa);
  if ( proto::MusicGameSettleReq::ugc_guid(reqa) != *(_QWORD *)(v4 + 80) )
  {
    v3 = 10025;
    goto LABEL_88;
  }
  if ( *(char *)(((unsigned __int64)&thisa->is_try_self_ugc_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&thisa->is_try_self_ugc_);
  if ( thisa->is_try_self_ugc_ )
  {
    v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    proto_log::PlayerLogBodyMusicGameStopV2::set_game_type(v10, 3u);
    *(std::map<long unsigned int,MusicGameUgcSaveRecord>::iterator *)(v4 + 112) = std::map<unsigned long,MusicGameUgcSaveRecord>::find(
                                                                                    &thisa->ugc_save_record_map_,
                                                                                    (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v4 + 80));
    __y._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(&thisa->ugc_save_record_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)(v4 + 112),
           &__y) )
    {
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
      v12 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v4 + 112));
      if ( *(_BYTE *)(((unsigned __int64)&v12->second.version >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v12 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v12->second.version >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyMusicGameStopV2::set_version_num(v11, v12->second.version);
    }
LABEL_43:
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    MusicIdByUgcGuid = MusicGameActivity::getMusicIdByUgcGuid(thisa, *(_QWORD *)(v4 + 80));
    proto_log::PlayerLogBodyMusicGameStopV2::set_music_id(v20, MusicIdByUgcGuid);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    proto_log::PlayerLogBodyMusicGameStopV2::set_share_code(v22, *(_QWORD *)(v4 + 80));
LABEL_85:
    v51 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    CurTransNo = MusicGameActivity::getCurTransNo(thisa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_trans_no(v51, CurTransNo);
    v53 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    restarted = proto::MusicGameSettleReq::restart_times(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_restart_times(v53, restarted);
    v55 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v56 = proto::MusicGameSettleReq::score(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_score(v55, v56);
    v57 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v58 = proto::MusicGameSettleReq::score_rating(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_score_rating(v57, v58);
    v59 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v60 = proto::MusicGameSettleReq::star_rating(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_star_rating(v59, v60);
    v61 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v62 = proto_log::PlayerLogBodyMusicGameStopV2::mutable_note_list(v61);
    v63 = proto::MusicGameSettleReq::note_list(reqa);
    google::protobuf::RepeatedField<unsigned int>::CopyFrom(v62, v63);
    v64 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v65 = proto::MusicGameSettleReq::max_combo(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_max_combo(v64, v65);
    v66 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    is_full_combo = proto::MusicGameSettleReq::is_full_combo(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_is_full_combo(v66, is_full_combo);
    v68 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v69 = proto_log::PlayerLogBodyMusicGameStopV2::mutable_button_list(v68);
    v70 = proto::MusicGameSettleReq::button_list(reqa);
    google::protobuf::RepeatedField<unsigned int>::CopyFrom(v69, v70);
    v71 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v72 = proto::MusicGameSettleReq::volume(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_volume(v71, v72);
    v73 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    is_custom_delay = proto::MusicGameSettleReq::is_custom_delay(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_is_custom_delay(v73, is_custom_delay);
    v75 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v76 = proto::MusicGameSettleReq::delay(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_delay(v75, v76);
    v77 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    is_custom_speed = proto::MusicGameSettleReq::is_custom_speed(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_is_custom_speed(v77, is_custom_speed);
    v79 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    v80 = proto::MusicGameSettleReq::speed(reqa);
    proto_log::PlayerLogBodyMusicGameStopV2::set_speed(v79, v80);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 208),
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMusicGameStopV2,void>(
      (std::shared_ptr<google::protobuf::Message> *const)(v4 + 176),
      (const std::shared_ptr<proto_log::PlayerLogBodyMusicGameStopV2> *)(v4 + 144));
    Player::printStatLog(player, (MessagePtr *)(v4 + 176), (MessagePtr *)(v4 + 208), 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 176));
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 208));
    v3 = 0;
    goto LABEL_88;
  }
  MusicGameUgcSearchRecord::MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v4 + 240));
  if ( !ActivityLru<unsigned long,MusicGameUgcSearchRecord>::get(
          &thisa->ugc_search_record_lru_,
          (const unsigned __int64 *)(v4 + 80),
          (MusicGameUgcSearchRecord *)(v4 + 240)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v96,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "settleMusicGame",
      417);
    v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)&v96,
            (const char (*)[35])"find search record fail, ugc_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v13, (const unsigned __int64 *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v96);
    v3 = -1;
    v14 = 0;
  }
  else
  {
    if ( proto::MusicGameSettleReq::is_save_score(reqa) )
    {
      is_need_notify = 0;
      *(_QWORD *)(v4 + 208) = 0LL;
      *(_DWORD *)(v4 + 216) = 0;
      *(_DWORD *)(v4 + 220) = 0;
      if ( !ActivityLru<unsigned long,MusicGameUgcPlayRecord>::get(
              &thisa->ugc_play_record_lru_,
              (const unsigned __int64 *)(v4 + 80),
              (MusicGameUgcPlayRecord *)(v4 + 208))
        || *(_DWORD *)(v4 + 264) != *(_DWORD *)(v4 + 216)
        || (v15 = *(_DWORD *)(v4 + 220), v15 < proto::MusicGameSettleReq::score(reqa)) )
      {
        *(_DWORD *)(v4 + 220) = proto::MusicGameSettleReq::score(reqa);
        is_need_notify = 1;
      }
      *(_QWORD *)(v4 + 208) = *(_QWORD *)(v4 + 80);
      *(_DWORD *)(v4 + 216) = *(_DWORD *)(v4 + 264);
      MusicGameActivity::putMusicGameUgcPlayRecord(thisa, *(_QWORD *)(v4 + 80), *(MusicGameUgcPlayRecord *)(v4 + 208));
      if ( is_need_notify )
        BaseActivity::notifyClientData(thisa, 0);
    }
    if ( !MusicGameActivity::isMyUgc(thisa, *(_QWORD *)(v4 + 80)) )
    {
      common::tools::perf::make_shared<MusicGameSettleOthersUgcEvent>();
      if ( std::operator!=<MusicGameSettleOthersUgcEvent>(
             0LL,
             (const std::shared_ptr<MusicGameSettleOthersUgcEvent> *)(v4 + 176)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = Player::getEventComp(thisa->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<MusicGameSettleOthersUgcEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v4 + 208),
          (const std::shared_ptr<MusicGameSettleOthersUgcEvent> *)(v4 + 176));
        PlayerEventComp::notifyEvent(v17, (BaseEventPtr *)(v4 + 208));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 208));
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v96,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/music_game_activity.cpp",
          "settleMusicGame",
          452);
        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          (common::milog::MiLogStream *const)&v96,
          (const char (*)[51])"MusicGameSettleOthersUgcEvent event_ptr is nullptr");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v96);
      }
      std::shared_ptr<MusicGameSettleOthersUgcEvent>::~shared_ptr((std::shared_ptr<MusicGameSettleOthersUgcEvent> *const)(v4 + 176));
    }
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    proto_log::PlayerLogBodyMusicGameStopV2::set_game_type(v18, 2u);
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameStopV2,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 144));
    proto_log::PlayerLogBodyMusicGameStopV2::set_version_num(v19, *(_DWORD *)(v4 + 264));
    v14 = 1;
  }
  MusicGameUgcSearchRecord::~MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v4 + 240));
  if ( v14 == 1 )
    goto LABEL_43;
LABEL_88:
  std::shared_ptr<proto_log::PlayerLogBodyMusicGameStopV2>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMusicGameStopV2> *const)(v4 + 144));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v3;
  if ( v84 == (unsigned int *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8028) = 0;
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
  return result;
};

// Line 557: range 0000000016C00316-0000000016C0033C
void __cdecl MusicGameActivity::onLogin(MusicGameActivity *const this)
{
  BaseActivity::onLogin(this);
  MusicGameActivity::tryClearCurrentMusicGameState(this);
};

// Line 563: range 0000000016C0033E-0000000016C00364
void __cdecl MusicGameActivity::onSettle(MusicGameActivity *const this)
{
  BaseActivity::onSettle(this);
  MusicGameActivity::tryClearCurrentMusicGameState(this);
};

// Line 570: range 0000000016C00366-0000000016C003F7
void __cdecl MusicGameActivity::tryClearCurrentMusicGameState(MusicGameActivity *const this)
{
  PlayerMpComp *MpComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->current_music_game_id_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->current_music_game_id_ )
  {
    this->current_music_game_id_ = 0LL;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MpComp = Player::getMpComp(this->player_);
    PlayerMpComp::refreshMpModeAvailability(MpComp);
  }
};

// Line 580: range 0000000016C003F8-0000000016C00B3C
void __fastcall MusicGameActivity::onWatcherFinish(MusicGameActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t WatcherComp; // eax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerWatcherComp *v19; // rax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  const std::unordered_set<unsigned int> *cond_watcher_id_set; // [rsp+28h] [rbp-E8h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  const unsigned int *cond_watcher_id; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  std::string val; // [rsp+60h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 19 prev_watcher_id:586 48 4 14 watcher_id:579 64 16 20 prev_watcher_ptr:609";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::onWatcherFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = watcher_id;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->finished_watcher_id_set_,
          (const unsigned int *)(v2 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/music_game_activity.cpp",
      "onWatcherFinish",
      583);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v25, (const char (*)[12])"watcher_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           v6,
           (const char (*)[25])" not finished! activity:");
    BaseActivity::toString[abi:cxx11](&val, this);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_32;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 64));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  *(_DWORD *)(v2 + 32) = ActivityMusicGameConfigMgr::findPreWatcherIdByWatcherId(
                           &v8->design_config.txt_config_mgr.activity_music_game_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           (const unsigned int *)(v2 + 32)) )
    {
      goto LABEL_32;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), WatcherComp);
    if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/music_game_activity.cpp",
        "onWatcherFinish",
        612);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[12])"watcher_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v12,
              (const char (*)[20])" not found player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v14 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( BaseWatcher::getWatcherTriggerType(v14) == TRIGGER_FLEUR_FAIR_MUSIC_GAME_REACH_SCORE )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::tryAddWatcherProgress(v19, *(_DWORD *)(v2 + 32), 1u);
        goto LABEL_31;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/music_game_activity.cpp",
        "onWatcherFinish",
        617);
      v15 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[51])"error prev watcher trigger type, prev_watcher_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])" watcher_id: ");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])" player_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
LABEL_31:
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
    goto LABEL_32;
  }
  if ( *(char *)(((unsigned __int64)&this->is_finish_all_cond_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_all_cond_level_);
  if ( !this->is_finish_all_cond_level_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 64));
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    cond_watcher_id_set = ActivityMusicGameConfigMgr::getCondWatcherIdSet(&v9->design_config.txt_config_mgr.activity_music_game_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
    __for_range = cond_watcher_id_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(cond_watcher_id_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(cond_watcher_id_set)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      cond_watcher_id = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              &this->finished_watcher_id_set_,
              cond_watcher_id) )
        goto LABEL_32;
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_finish_all_cond_level_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_finish_all_cond_level_);
    this->is_finish_all_cond_level_ = 1;
    BaseActivity::updateAllConds(this);
  }
LABEL_32:
  if ( v27 == (char *)v2 )
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

// Line 625: range 0000000016C00B3E-0000000016C00BE3
bool __cdecl MusicGameActivity::checkCondIsMeet(MusicGameActivity *const this, const data::NewActivityCond *cond)
{
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type != NEW_ACTIVITY_COND_FINISH_MUSIC_GAME_ALL_LEVEL )
    return BaseActivity::checkCondIsMeet(this, cond);
  if ( *(char *)(((unsigned __int64)&this->is_finish_all_cond_level_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_all_cond_level_);
  return this->is_finish_all_cond_level_;
};

// Line 640: range 0000000016C00BE4-0000000016C00F7A
void __cdecl MusicGameActivity::fillScoreAndUpdateSearchRecord(
        MusicGameActivity *const this,
        proto::UgcMusicBriefInfo *music_brief_info)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  const std::string *v6; // rax
  MusicGameUgcSearchRecord p_search_record; // [rsp+10h] [rbp-160h] BYREF
  char v8[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 8 12 ugc_guid:641 80 16 15 play_record:648 112 80 17 search_record:665";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::fillScoreAndUpdateSearchRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862726] = -202116109;
  *(_QWORD *)(v2 + 48) = proto::UgcMusicBriefInfo::ugc_guid(music_brief_info);
  proto::UgcMusicBriefInfo::set_self_max_score(music_brief_info, 0);
  proto::UgcMusicBriefInfo::set_is_played(music_brief_info, 0);
  *(_QWORD *)(v2 + 80) = 0LL;
  *(_DWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 92) = 0;
  if ( ActivityLru<unsigned long,MusicGameUgcPlayRecord>::get(
         &this->ugc_play_record_lru_,
         (const unsigned __int64 *)(v2 + 48),
         (MusicGameUgcPlayRecord *)(v2 + 80)) )
  {
    v5 = *(_DWORD *)(v2 + 88);
    if ( v5 == proto::UgcMusicBriefInfo::version(music_brief_info) )
    {
      proto::UgcMusicBriefInfo::set_self_max_score(music_brief_info, *(_DWORD *)(v2 + 92));
      proto::UgcMusicBriefInfo::set_is_played(music_brief_info, 1);
    }
    else
    {
      ActivityLru<unsigned long,MusicGameUgcPlayRecord>::remove(
        &this->ugc_play_record_lru_,
        (const unsigned __int64 *)(v2 + 48));
    }
  }
  MusicGameUgcSearchRecord::MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v2 + 112));
  *(_QWORD *)(v2 + 112) = *(_QWORD *)(v2 + 48);
  *(_DWORD *)(v2 + 120) = proto::UgcMusicBriefInfo::music_id(music_brief_info);
  *(_DWORD *)(v2 + 124) = proto::UgcMusicBriefInfo::publish_time(music_brief_info);
  *(_DWORD *)(v2 + 128) = proto::UgcMusicBriefInfo::max_score(music_brief_info);
  *(_DWORD *)(v2 + 132) = proto::UgcMusicBriefInfo::note_count(music_brief_info);
  *(_DWORD *)(v2 + 136) = proto::UgcMusicBriefInfo::version(music_brief_info);
  v6 = proto::UgcMusicBriefInfo::creator_nickname[abi:cxx11](music_brief_info);
  std::string::operator=(v2 + 144, v6);
  *(_BYTE *)(v2 + 176) = proto::UgcMusicBriefInfo::is_psn_platform(music_brief_info);
  *(_QWORD *)(v2 + 184) = proto::UgcMusicBriefInfo::import_from_ugc_guid(music_brief_info);
  MusicGameUgcSearchRecord::MusicGameUgcSearchRecord(&p_search_record, (const MusicGameUgcSearchRecord *)(v2 + 112));
  MusicGameActivity::putMusicGameUgcSearchRecord(this, *(_QWORD *)(v2 + 48), &p_search_record);
  MusicGameUgcSearchRecord::~MusicGameUgcSearchRecord(&p_search_record);
  BaseActivity::notifyClientData(this, 0);
  MusicGameUgcSearchRecord::~MusicGameUgcSearchRecord((MusicGameUgcSearchRecord *const)(v2 + 112));
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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
};

// Line 682: range 0000000016C00F7C-0000000016C013F8
void __fastcall MusicGameActivity::onPlayerSaveUgc(
        MusicGameActivity *const this,
        __int64 ugc_guid,
        const proto::UgcMusicBriefInfo *music_brief_info)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  google::protobuf::uint32 v8; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v10; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  google::protobuf::RepeatedField<unsigned int> *v12; // r14
  const google::protobuf::RepeatedField<unsigned int> *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  google::protobuf::RepeatedField<unsigned int> *v15; // r14
  const google::protobuf::RepeatedField<unsigned int> *v16; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // r14
  google::protobuf::uint32 v18; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // r14
  google::protobuf::uint32 v20; // eax
  Player *player; // r14
  std::string v22; // [rsp+0h] [rbp-140h]
  const proto::UgcMusicBriefInfo *music_brief_infoa; // [rsp+8h] [rbp-138h]
  MusicGameActivity *thisa; // [rsp+18h] [rbp-128h]
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self __y; // [rsp+28h] [rbp-118h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-100h] BYREF
  std::string v28; // [rsp+50h] [rbp-F0h] BYREF
  char v29[208]; // [rsp+70h] [rbp-D0h] BYREF

  *(&v22._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v22._anon_0._M_allocated_capacity = ugc_guid;
  v22._M_string_length = (std::string::size_type)music_brief_info;
  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 1 10 holder:684 64 8 8 iter:687 96 8 12 ugc_guid:681 128 16 11 log_ptr:685";
  *(_QWORD *)(v3 + 16) = MusicGameActivity::onPlayerSaveUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202178560;
  *(_QWORD *)(v3 + 96) = ugc_guid;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v28, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xE16u, v22);
  std::string::~string(&v28);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyMusicGameSaveUgc>();
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  v8 = proto::UgcMusicBriefInfo::save_page_type(music_brief_infoa);
  proto_log::PlayerLogBodyMusicGameSaveUgc::set_save_page_type(v7, v8);
  *(std::map<long unsigned int,MusicGameUgcSaveRecord>::iterator *)(v3 + 64) = std::map<unsigned long,MusicGameUgcSaveRecord>::find(
                                                                                 &thisa->ugc_save_record_map_,
                                                                                 (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v3 + 96));
  __y._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(&thisa->ugc_save_record_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)(v3 + 64),
         &__y) )
  {
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
    v10 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v10->second.version >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second.version >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyMusicGameSaveUgc::set_version_num(v9, v10->second.version);
  }
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  v12 = proto_log::PlayerLogBodyMusicGameSaveUgc::mutable_before_note_list(v11);
  v13 = proto::UgcMusicBriefInfo::before_note_list(music_brief_infoa);
  google::protobuf::RepeatedField<unsigned int>::CopyFrom(v12, v13);
  v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  v15 = proto_log::PlayerLogBodyMusicGameSaveUgc::mutable_after_note_list(v14);
  v16 = proto::UgcMusicBriefInfo::after_note_list(music_brief_infoa);
  google::protobuf::RepeatedField<unsigned int>::CopyFrom(v15, v16);
  v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  v18 = proto::UgcMusicBriefInfo::real_time_edit_time(music_brief_infoa);
  proto_log::PlayerLogBodyMusicGameSaveUgc::set_real_time_edit_time(v17, v18);
  v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGameSaveUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
  v20 = proto::UgcMusicBriefInfo::time_line_edit_time(music_brief_infoa);
  proto_log::PlayerLogBodyMusicGameSaveUgc::set_time_line_edit_time(v19, v20);
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMusicGameSaveUgc,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyMusicGameSaveUgc> *)(v3 + 128));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyMusicGameSaveUgc>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMusicGameSaveUgc> *const)(v3 + 128));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  if ( v29 == (char *)v3 )
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
};

// Line 700: range 0000000016C013FA-0000000016C0176D
void __cdecl MusicGameActivity::updateSaveUgcMusicBrief(
        MusicGameActivity *const this,
        const proto::UgcBriefRedisData *music_brief_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::map<long unsigned int,MusicGameUgcSaveRecord>::mapped_type *v5; // rax
  uint64_t v6; // rdx
  const proto::UgcMusicBriedRedisData *v7; // rax
  google::protobuf::uint32 v8; // edx
  uint32_t SaveIdxByUgcGuid; // ecx
  uint32_t Now; // esi
  const proto::UgcMusicBriedRedisData *v11; // rax
  google::protobuf::uint32 v12; // ecx
  const proto::UgcMusicBriedRedisData *v13; // rax
  google::protobuf::uint32 v14; // edx
  bool is_published; // cl
  const proto::UgcMusicBriedRedisData *v16; // rax
  google::protobuf::uint64 v17; // rax
  MusicGameUgcSaveRecord *save_record; // [rsp+18h] [rbp-68h]
  char v20[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 ugc_guid:701";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::updateSaveUgcMusicBrief;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = proto::UgcBriefRedisData::ugc_guid(music_brief_info);
  v5 = std::map<unsigned long,MusicGameUgcSaveRecord>::operator[](
         &this->ugc_save_record_map_,
         (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v2 + 32));
  save_record = v5;
  v6 = *(_QWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5);
  save_record->ugc_guid = v6;
  v7 = proto::UgcBriefRedisData::music_brief(music_brief_info);
  v8 = proto::UgcMusicBriedRedisData::music_id(v7);
  if ( *(_BYTE *)(((unsigned __int64)&save_record->music_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&save_record->music_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&save_record->music_id);
  }
  save_record->music_id = v8;
  SaveIdxByUgcGuid = MusicGameActivity::getSaveIdxByUgcGuid(this, *(_QWORD *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&save_record->save_idx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)save_record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&save_record->save_idx >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_store4(&save_record->save_idx);
  }
  save_record->save_idx = SaveIdxByUgcGuid;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&save_record->save_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&save_record->save_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&save_record->save_time);
  }
  save_record->save_time = Now;
  v11 = proto::UgcBriefRedisData::music_brief(music_brief_info);
  v12 = proto::UgcMusicBriedRedisData::max_score(v11);
  if ( *(_BYTE *)(((unsigned __int64)&save_record->max_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)save_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&save_record->max_score >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_store4(&save_record->max_score);
  }
  save_record->max_score = v12;
  v13 = proto::UgcBriefRedisData::music_brief(music_brief_info);
  v14 = proto::UgcMusicBriedRedisData::note_count(v13);
  if ( *(_BYTE *)(((unsigned __int64)&save_record->note_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&save_record->note_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&save_record->note_count);
  }
  save_record->note_count = v14;
  if ( *(char *)(((unsigned __int64)&save_record->is_published >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&save_record->is_published);
  is_published = save_record->is_published;
  if ( *(_BYTE *)(((unsigned __int64)&save_record->is_changed_after_publish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)save_record + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&save_record->is_changed_after_publish >> 3)
                                                             + 0x7FFF8000) )
  {
    __asan_report_store1(&save_record->is_changed_after_publish);
  }
  save_record->is_changed_after_publish = is_published;
  v16 = proto::UgcBriefRedisData::music_brief(music_brief_info);
  v17 = proto::UgcMusicBriedRedisData::import_from_ugc_guid(v16);
  if ( *(_BYTE *)(((unsigned __int64)&save_record->import_from_ugc_guid >> 3) + 0x7FFF8000) )
    __asan_report_store8(&save_record->import_from_ugc_guid);
  save_record->import_from_ugc_guid = v17;
  BaseActivity::notifyClientData(this, 0);
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

// Line 717: range 0000000016C0176E-0000000016C01F06
void __fastcall MusicGameActivity::updateSaveUgcMusicVersion(
        MusicGameActivity *const this,
        __int64 ugc_guid,
        __int32 version)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v9; // rdx
  uint32_t v10; // r14d
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v11; // rdx
  uint32_t *p_version; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v13; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v14; // rdx
  bool *p_is_changed_after_publish; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  __int64 v20; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  PlayerUgcComp *UgcComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Player *player; // r14
  std::string v25; // [rsp+0h] [rbp-170h]
  MusicGameActivity *thisa; // [rsp+18h] [rbp-158h]
  google::protobuf::uint32 import_from_uid; // [rsp+2Ch] [rbp-144h]
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self __y; // [rsp+30h] [rbp-140h] BYREF
  uint64_t import_from_ugc_guid; // [rsp+38h] [rbp-138h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-130h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-110h] BYREF
  char v33[240]; // [rsp+80h] [rbp-F0h] BYREF

  *(&v25._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v25._anon_0._M_allocated_capacity = ugc_guid;
  HIDWORD(v25._M_string_length) = version;
  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 1 10 holder:746 48 4 11 version:716 64 8 8 iter:718 96 8 12 ugc_guid:716 128 16 13 event_pt"
                        "r:735 160 16 11 log_ptr:747";
  *(_QWORD *)(v3 + 16) = MusicGameActivity::updateSaveUgcMusicVersion;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_QWORD *)(v3 + 96) = ugc_guid;
  *(_DWORD *)(v3 + 48) = HIDWORD(v25._M_string_length);
  *(std::map<long unsigned int,MusicGameUgcSaveRecord>::iterator *)(v3 + 64) = std::map<unsigned long,MusicGameUgcSaveRecord>::find(
                                                                                 &this->ugc_save_record_map_,
                                                                                 (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v3 + 96));
  __y._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(&this->ugc_save_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "updateSaveUgcMusicVersion",
      721);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v32,
           (const char (*)[33])"find save record fail, ugc_guid:");
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v6,
           (const unsigned __int64 *)(v3 + 96));
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])" version:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second.version >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v9 + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second.version >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v9->second.version < *(_DWORD *)(v3 + 48) )
    {
      v10 = *(_DWORD *)(v3 + 48);
      v11 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v3 + 64));
      p_version = &v11->second.version;
      if ( *(_BYTE *)(((unsigned __int64)p_version >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_version & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_version >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_version);
      }
      v11->second.version = v10;
      v13 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v3 + 64));
      if ( *(char *)(((unsigned __int64)&v13->second.is_published >> 3) + 0x7FFF8000) < 0 )
        v13 = (std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer)__asan_report_store1(&v13->second.is_published);
      v13->second.is_published = 1;
      v14 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v3 + 64));
      p_is_changed_after_publish = &v14->second.is_changed_after_publish;
      if ( *(_BYTE *)(((unsigned __int64)p_is_changed_after_publish >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_changed_after_publish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_changed_after_publish >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_changed_after_publish);
      }
      v14->second.is_changed_after_publish = 0;
    }
    BaseActivity::notifyClientData(this, 0);
    common::tools::perf::make_shared<MusicGameSaveUgcEvent>();
    if ( std::operator!=<MusicGameSaveUgcEvent>(0LL, (const std::shared_ptr<MusicGameSaveUgcEvent> *)(v3 + 128)) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<MusicGameSaveUgcEvent,void>(
        &p_event_ptr,
        (const std::shared_ptr<MusicGameSaveUgcEvent> *)(v3 + 128));
      PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "updateSaveUgcMusicVersion",
        742);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        &v32,
        (const char (*)[43])"MusicGameSaveUgcEvent event_ptr is nullptr");
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v32, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xE17u, v25);
    std::string::~string(&v32);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyMusicGamePublishUgc>();
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    proto_log::PlayerLogBodyMusicGamePublishUgc::set_version_num(v18, *(_DWORD *)(v3 + 48));
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    proto_log::PlayerLogBodyMusicGamePublishUgc::set_share_code(v19, *(_QWORD *)(v3 + 96));
    v20 = (__int64)std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)(v20 + 48) >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8();
    import_from_ugc_guid = *(_QWORD *)(v20 + 48);
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    proto_log::PlayerLogBodyMusicGamePublishUgc::set_is_original(v21, import_from_ugc_guid == 0);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    UgcComp = Player::getUgcComp(thisa->player_);
    import_from_uid = PlayerUgcComp::getUgcOwnerUid(UgcComp, import_from_ugc_guid);
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMusicGamePublishUgc,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
    proto_log::PlayerLogBodyMusicGamePublishUgc::set_import_from_uid(v23, import_from_uid);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr,
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMusicGamePublishUgc,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyMusicGamePublishUgc> *)(v3 + 160));
    Player::printStatLog(player, &p_body_ptr, (MessagePtr *)&p_event_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&p_event_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyMusicGamePublishUgc>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMusicGamePublishUgc> *const)(v3 + 160));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
    std::shared_ptr<MusicGameSaveUgcEvent>::~shared_ptr((std::shared_ptr<MusicGameSaveUgcEvent> *const)(v3 + 128));
  }
  if ( v33 == (char *)v3 )
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
};

// Line 758: range 0000000016C01F08-0000000016C0229F
int32_t __cdecl MusicGameActivity::fillSavedUgcMusicBrief(
        MusicGameActivity *const this,
        proto::UgcBriefRedisData *brief_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::pointer v7; // rax
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Base_ptr M_node; // [rsp+18h] [rbp-A8h] BYREF
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  proto::UgcMusicBriedRedisData *music_brief_info; // [rsp+28h] [rbp-98h]
  const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *iter; // [rsp+30h] [rbp-90h]
  const MusicGameUgcSaveRecord *save_record; // [rsp+38h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 8 12 ugc_guid:759";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::fillSavedUgcMusicBrief;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  *(_QWORD *)(v2 + 32) = proto::UgcBriefRedisData::ugc_guid(brief_info);
  music_brief_info = proto::UgcBriefRedisData::mutable_music_brief(brief_info);
  M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::find(
             &this->ugc_save_record_map_,
             (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v2 + 32))._M_node;
  iter = (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> > *)&M_node;
  __y._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(&this->ugc_save_record_map_)._M_node;
  if ( std::operator==(iter, &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "fillSavedUgcMusicBrief",
      764);
    v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v13,
           (const char (*)[60])"fillSavedUgcMusicBrief failed ugc_guid not found, ugc_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, (const unsigned __int64 *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator->(iter);
    save_record = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)&v7->second.music_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->second.music_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::UgcMusicBriedRedisData::set_music_id(music_brief_info, save_record->music_id);
    if ( *(_BYTE *)(((unsigned __int64)&save_record->note_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&save_record->note_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::UgcMusicBriedRedisData::set_note_count(music_brief_info, save_record->note_count);
    if ( *(_BYTE *)(((unsigned __int64)&save_record->max_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)save_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&save_record->max_score >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::UgcMusicBriedRedisData::set_max_score(music_brief_info, save_record->max_score);
    if ( *(_BYTE *)(((unsigned __int64)&save_record->version >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)save_record + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&save_record->version >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::UgcBriefRedisData::set_version(brief_info, save_record->version + 1);
    if ( *(_BYTE *)(((unsigned __int64)&save_record->import_from_ugc_guid >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    proto::UgcMusicBriedRedisData::set_import_from_ugc_guid(music_brief_info, save_record->import_from_ugc_guid);
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

// Line 780: range 0000000016C022A0-0000000016C023E3
void __cdecl MusicGameActivity::fillSearchGuidVersionMap(
        MusicGameActivity *const this,
        proto::ServerCheckUgcUpdateReq *server_req)
{
  uint32_t version; // ebx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<long unsigned int,unsigned int> *ugc_guid_version_map; // [rsp+28h] [rbp-38h]
  const std::list<std::pair<long unsigned int,MusicGameUgcSearchRecord>> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<long unsigned int,MusicGameUgcSearchRecord> *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *_; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *search_record; // [rsp+48h] [rbp-18h]

  ugc_guid_version_map = proto::ServerCheckUgcUpdateReq::mutable_ugc_guid_version_map(server_req);
  __for_range = ActivityLru<unsigned long,MusicGameUgcSearchRecord>::getPairList[abi:cxx11](&this->ugc_search_record_lru_);
  __for_begin._M_node = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::begin(__for_range)._M_node;
  __for_end._M_node = std::list<std::pair<unsigned long,MusicGameUgcSearchRecord>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator*(&__for_begin);
    _ = (std::tuple_element<0,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *)std::get<0ul,unsigned long,MusicGameUgcSearchRecord>(v9);
    search_record = (std::tuple_element<1,const std::pair<long unsigned int,MusicGameUgcSearchRecord> >::type *)std::get<1ul,unsigned long,MusicGameUgcSearchRecord>(v9);
    if ( *(_BYTE *)(((unsigned __int64)&search_record->version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&search_record->version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    version = search_record->version;
    v3 = google::protobuf::Map<unsigned long,unsigned int>::operator[](ugc_guid_version_map, &search_record->ugc_guid);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = version;
    std::_List_const_iterator<std::pair<unsigned long,MusicGameUgcSearchRecord>>::operator++(&__for_begin);
  }
};

// Line 789: range 0000000016C023E4-0000000016C028FA
__int64 __fastcall MusicGameActivity::genUgcIdxByMusicIdAndSaveIdx(
        MusicGameActivity *const this,
        uint32_t music_id,
        uint32_t save_idx,
        unsigned __int64 idx)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 result; // rax
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  int v19; // ecx
  const data::MusicInfoConfig *music_config_ptr; // [rsp+20h] [rbp-C0h]
  const data::MusicGameDrumConfig *music_game_drum_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-A0h] BYREF
  char v26[128]; // [rsp+60h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 16 max_save_idx:803 48 4 12 music_id:788 64 4 12 save_idx:788";
  *(_QWORD *)(v4 + 16) = MusicGameActivity::genUgcIdxByMusicIdAndSaveIdx;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  *(_DWORD *)(v4 + 48) = music_id;
  *(_DWORD *)(v4 + 64) = save_idx;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  music_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicInfoConfig(
                       &v7->design_config.txt_config_mgr.activity_music_game_config_mgr,
                       *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( music_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_music_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    music_game_drum_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameDrumConfig(
                                   p_activity_music_game_config_mgr,
                                   this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( music_game_drum_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_per_music_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)music_game_drum_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_per_music_num >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v4 + 32) = music_game_drum_config_ptr->ugc_per_music_num;
      if ( *(_DWORD *)(v4 + 64) < *(_DWORD *)(v4 + 32) )
      {
        v19 = *(_DWORD *)(v4 + 64) | (*(_DWORD *)(v4 + 48) << 8);
        if ( *(_BYTE *)((idx >> 3) + 0x7FFF8000) != 0 && (char)((idx & 7) + 3) >= *(_BYTE *)((idx >> 3) + 0x7FFF8000) )
          __asan_report_store4(idx);
        *(_DWORD *)idx = v19;
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/music_game_activity.cpp",
          "genUgcIdxByMusicIdAndSaveIdx",
          806);
        v14 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v25,
                (const char (*)[44])"genUgcIdxByMusicIdAndSaveIdx fail save_idx:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v4 + 64));
        v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" max_save_idx:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                (const unsigned int *)(v4 + 32));
        v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" music_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "genUgcIdxByMusicIdAndSaveIdx",
        800);
      v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v25,
              (const char (*)[40])"findMusicGameDrumConfig fail, activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v13, this);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "genUgcIdxByMusicIdAndSaveIdx",
      793);
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v25,
           (const char (*)[36])"findMusicInfoConfig fail, music_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" activity:");
    common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v10, this);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
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

// Line 815: range 0000000016C028FC-0000000016C02914
uint32_t __cdecl MusicGameActivity::getMusicIdByUgcGuid(MusicGameActivity *const this, uint64_t ugc_guid)
{
  return BYTE6(ugc_guid);
};

// Line 820: range 0000000016C02916-0000000016C0292E
uint32_t __cdecl MusicGameActivity::getSaveIdxByUgcGuid(MusicGameActivity *const this, uint64_t ugc_guid)
{
  return BYTE5(ugc_guid);
};

// Line 825: range 0000000016C02930-0000000016C02B36
bool __cdecl MusicGameActivity::isMusicIdOpening(MusicGameActivity *const this, uint32_t music_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::pointer v6; // rdx
  bool *p_is_unlock; // rax
  bool result; // al
  std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 music_basic_id:826 64 8 8 iter:827";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::isMusicIdOpening;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  *(_DWORD *)(v2 + 48) = ActivityMusicGameConfigMgr::findMusicBasicIdByMusicId(
                           &v5->design_config.txt_config_mgr.activity_music_game_config_mgr,
                           music_id);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  *(std::map<unsigned int,MusicGameRecord>::iterator *)(v2 + 64) = std::map<unsigned int,MusicGameRecord>::find(
                                                                     &this->music_game_record_map_,
                                                                     (const std::map<unsigned int,MusicGameRecord>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,MusicGameRecord>::end(&this->music_game_record_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> >::_Self *)(v2 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MusicGameRecord> > *const)(v2 + 64));
    p_is_unlock = &v6->second.is_unlock;
    if ( *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_unlock & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlock >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_unlock);
    }
    result = v6->second.is_unlock;
  }
  else
  {
    result = 0;
  }
  if ( v11 == (char *)v2 )
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

// Line 836: range 0000000016C02B38-0000000016C02B61
bool __cdecl MusicGameActivity::isUgcGuidOpening(MusicGameActivity *const this, uint64_t ugc_guid)
{
  return MusicGameActivity::isMusicIdOpening(this, HIWORD(ugc_guid));
};

// Line 841: range 0000000016C02B62-0000000016C02F78
__int64 __fastcall MusicGameActivity::isUgcGuidValid(MusicGameActivity *const this, uint64_t ugc_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const data::MusicGameDrumConfig *music_game_drum_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 save_idx:847 64 8 12 ugc_guid:840";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::isUgcGuidValid;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = ugc_guid;
  if ( !MusicGameActivity::isUgcGuidOpening(this, *(_QWORD *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/music_game_activity.cpp",
      "isUgcGuidValid",
      844);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v14,
           (const char (*)[29])"music is not open, ugc_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, (const unsigned __int64 *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0LL;
  }
  else
  {
    *(_DWORD *)(v2 + 48) = MusicGameActivity::getSaveIdxByUgcGuid(this, *(_QWORD *)(v2 + 64));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_music_game_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    music_game_drum_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameDrumConfig(
                                   p_activity_music_game_config_mgr,
                                   this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( music_game_drum_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_per_music_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)music_game_drum_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_per_music_num >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( music_game_drum_config_ptr->ugc_per_music_num > *(_DWORD *)(v2 + 48) )
      {
        result = 1LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/music_game_activity.cpp",
          "isUgcGuidValid",
          856);
        v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v14,
               (const char (*)[28])"invalid save_idx, ugc_guid:");
        v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v9,
                (const unsigned __int64 *)(v2 + 64));
        v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" save_idx:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v14);
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/music_game_activity.cpp",
        "isUgcGuidValid",
        851);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v14,
             (const char (*)[40])"findMusicGameDrumConfig fail, activity:");
      common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v8, this);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = 0LL;
    }
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
  return result;
};

// Line 863: range 0000000016C02F7A-0000000016C0310E
bool __cdecl MusicGameActivity::isUgcNoteCountValid(MusicGameActivity *const this, uint32_t note_count)
{
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rdx
  const data::MusicGameDrumConfig *music_game_drum_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.activity_music_game_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  music_game_drum_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameDrumConfig(
                                 p_activity_music_game_config_mgr,
                                 this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( music_game_drum_config_ptr )
  {
    if ( !note_count )
      return 0;
    if ( *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_note_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_note_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    return note_count <= music_game_drum_config_ptr->ugc_max_note_num;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "isUgcNoteCountValid",
      867);
    v3 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v7,
           (const char (*)[40])"findMusicGameDrumConfig fail, activity:");
    common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v3, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
};

// Line 874: range 0000000016C03110-0000000016C033A5
void __fastcall MusicGameActivity::putMusicGameUgcSearchRecord(
        MusicGameActivity *const this,
        uint64_t ugc_guid,
        MusicGameUgcSearchRecord *p_search_record)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  ActivityLru<long unsigned int,MusicGameUgcSearchRecord> *p_ugc_search_record_lru; // rcx
  const data::MusicGameDrumConfig *music_game_drum_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-80h] BYREF
  char v13[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 12 ugc_guid:873";
  *(_QWORD *)(v3 + 16) = MusicGameActivity::putMusicGameUgcSearchRecord;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  *(_QWORD *)(v3 + 32) = ugc_guid;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_music_game_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  music_game_drum_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameDrumConfig(
                                 p_activity_music_game_config_mgr,
                                 this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( music_game_drum_config_ptr )
  {
    p_ugc_search_record_lru = &this->ugc_search_record_lru_;
    if ( *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_history_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_history_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ActivityLru<unsigned long,MusicGameUgcSearchRecord>::setMaxSize(
      p_ugc_search_record_lru,
      music_game_drum_config_ptr->ugc_max_history_num);
    ActivityLru<unsigned long,MusicGameUgcSearchRecord>::put(
      &this->ugc_search_record_lru_,
      (const unsigned __int64 *)(v3 + 32),
      p_search_record);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "putMusicGameUgcSearchRecord",
      878);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v12,
           (const char (*)[40])"findMusicGameDrumConfig fail, activity:");
    common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 886: range 0000000016C033A6-0000000016C0368D
void __fastcall MusicGameActivity::putMusicGameUgcPlayRecord(
        MusicGameActivity *const this,
        uint64_t ugc_guid,
        MusicGameUgcPlayRecord play_record)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  ActivityMusicGameConfigMgr *p_activity_music_game_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  ActivityLru<long unsigned int,MusicGameUgcPlayRecord> *p_ugc_play_record_lru; // rcx
  const data::MusicGameDrumConfig *music_game_drum_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-A0h] BYREF
  char v13[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 12 ugc_guid:885 64 16 15 play_record:885";
  *(_QWORD *)(v3 + 16) = MusicGameActivity::putMusicGameUgcPlayRecord;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  *(_QWORD *)(v3 + 32) = ugc_guid;
  *(MusicGameUgcPlayRecord *)(v3 + 64) = play_record;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_activity_music_game_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_music_game_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  music_game_drum_config_ptr = data::ActivityMusicGameConfigMgrBase::findMusicGameDrumConfig(
                                 p_activity_music_game_config_mgr,
                                 this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( music_game_drum_config_ptr )
  {
    p_ugc_play_record_lru = &this->ugc_play_record_lru_;
    if ( *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_saved_score_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)music_game_drum_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_game_drum_config_ptr->ugc_max_saved_score_num >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    ActivityLru<unsigned long,MusicGameUgcPlayRecord>::setMaxSize(
      p_ugc_play_record_lru,
      music_game_drum_config_ptr->ugc_max_saved_score_num);
    ActivityLru<unsigned long,MusicGameUgcPlayRecord>::put(
      &this->ugc_play_record_lru_,
      (const unsigned __int64 *)(v3 + 32),
      (const MusicGameUgcPlayRecord *)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/music_game_activity.cpp",
      "putMusicGameUgcPlayRecord",
      890);
    v7 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v12,
           (const char (*)[40])"findMusicGameDrumConfig fail, activity:");
    common::milog::MiLogStream::operator<<<MusicGameActivity,(MusicGameActivity*)0>(v7, this);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v3 )
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

// Line 899: range 0000000016C0368E-0000000016C036FB
uint64_t __cdecl MusicGameActivity::genNextTransNo(MusicGameActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ++this->cur_trans_no_;
  return MusicGameActivity::getCurTransNo(this);
};

// Line 906: range 0000000016C036FC-0000000016C03799
uint64_t __cdecl MusicGameActivity::getCurTransNo(MusicGameActivity *const this)
{
  unsigned __int64 v1; // rbx

  if ( *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_trans_no_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v1 = (unsigned __int64)this->cur_trans_no_ << 32;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  return v1 | Player::getUid(this->player_);
};

// Line 911: range 0000000016C0379A-0000000016C038D9
bool __fastcall MusicGameActivity::isMyUgc(MusicGameActivity *const this, uint64_t ugc_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:912 64 8 12 ugc_guid:910";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::isMyUgc;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(_QWORD *)(v2 + 64) = ugc_guid;
  *(std::map<long unsigned int,MusicGameUgcSaveRecord>::iterator *)(v2 + 32) = std::map<unsigned long,MusicGameUgcSaveRecord>::find(
                                                                                 &this->ugc_save_record_map_,
                                                                                 (const std::map<long unsigned int,MusicGameUgcSaveRecord>::key_type *)(v2 + 64));
  __y._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(&this->ugc_save_record_map_)._M_node;
  result = std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::_Self *)(v2 + 32),
             &__y);
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

// Line 918: range 0000000016C038DA-0000000016C03B23
void __cdecl MusicGameActivity::tryRemoveNotFindUgcGuidVec(
        MusicGameActivity *const this,
        const std::vector<long unsigned int> *removed_ugc_guid_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::vector<long unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::vector<long unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-80h] BYREF
  char v11[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 12 ugc_guid:923";
  *(_QWORD *)(v2 + 16) = MusicGameActivity::tryRemoveNotFindUgcGuidVec;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( !std::vector<unsigned long>::empty(removed_ugc_guid_vec) )
  {
    __for_range = removed_ugc_guid_vec;
    __for_begin._M_current = std::vector<unsigned long>::begin(removed_ugc_guid_vec)._M_current;
    __for_end._M_current = std::vector<unsigned long>::end(removed_ugc_guid_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin, &__for_end) )
    {
      v5 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      *(_QWORD *)(v2 + 32) = *(_QWORD *)v5;
      ActivityLru<unsigned long,MusicGameUgcSearchRecord>::remove(
        &this->ugc_search_record_lru_,
        (const unsigned __int64 *)(v2 + 32));
      ActivityLru<unsigned long,MusicGameUgcPlayRecord>::remove(
        &this->ugc_play_record_lru_,
        (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/music_game_activity.cpp",
        "tryRemoveNotFindUgcGuidVec",
        927);
      v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v10,
             (const char (*)[52])"remove search record and play record ugc, ugc_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, (const unsigned __int64 *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v10);
      __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin);
    }
    BaseActivity::notifyClientData(this, 0);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 935: range 0000000016C03B24-0000000016C03C88
void __cdecl MusicGameActivity::unpublishAllUgc(MusicGameActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::map<long unsigned int,MusicGameUgcSaveRecord>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<long unsigned int,MusicGameUgcSaveRecord>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<long unsigned int,MusicGameUgcSaveRecord> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<long unsigned int const,MusicGameUgcSaveRecord> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *ugc_guid; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<long unsigned int const,MusicGameUgcSaveRecord> >::type *save_record; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->ugc_save_record_map_;
  __for_begin._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::begin(&this->ugc_save_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned long,MusicGameUgcSaveRecord>::end(&this->ugc_save_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator*(&__for_begin);
    ugc_guid = std::get<0ul,unsigned long const,MusicGameUgcSaveRecord>(__in);
    save_record = std::get<1ul,unsigned long const,MusicGameUgcSaveRecord>(__in);
    if ( *(char *)(((unsigned __int64)&save_record->is_published >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&save_record->is_published);
    save_record->is_published = 0;
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/music_game_activity.cpp",
      "unpublishAllUgc",
      939);
    v1 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v8,
           (const char (*)[25])"unpublish ugc, ugc_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v1, ugc_guid);
    common::milog::MiLogStream::~MiLogStream(&v8);
    std::_Rb_tree_iterator<std::pair<unsigned long const,MusicGameUgcSaveRecord>>::operator++(&__for_begin);
  }
  BaseActivity::notifyClientData(this, 0);
};
