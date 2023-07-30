// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/ugc/music_game_ugc.cpp

// Line 24: range 00000000179796CA-0000000017979A3D
void __cdecl MusicContent::fromRedis(MusicContent *const this, const proto::UgcMusicContentRedisData *proto_music)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // edx
  char v6; // al
  const proto::UgcMusicNoteRedisData *v7; // rax
  std::vector<std::pair<unsigned int,unsigned int>> *v8; // rax
  std::vector<std::pair<unsigned int,unsigned int>> *v9; // rdx
  const proto::UgcMusicContentRedisData *proto_musica; // [rsp+0h] [rbp-130h]
  unsigned int __x; // [rsp+18h] [rbp-118h] BYREF
  unsigned int __y; // [rsp+1Ch] [rbp-114h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicTrackRedisData>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicTrackRedisData>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicNoteRedisData>::const_iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicNoteRedisData>::const_iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::UgcMusicTrackRedisData> *__for_range; // [rsp+40h] [rbp-F0h]
  const proto::UgcMusicTrackRedisData *music_track; // [rsp+48h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::UgcMusicNoteRedisData> *__for_range_0; // [rsp+50h] [rbp-E0h]
  std::pair<unsigned int,unsigned int> __args_0; // [rsp+58h] [rbp-D8h] BYREF
  char v21[208]; // [rsp+60h] [rbp-D0h] BYREF

  proto_musica = proto_music;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 21 tmp_note_track_vec:29 96 32 13 music_note:30";
  *(_QWORD *)(v2 + 16) = MusicContent::fromRedis;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  v5 = proto::UgcMusicContentRedisData::music_id(proto_music);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto_music) = v6 != 0;
    __asan_report_store4(this, proto_music, v5);
  }
  this->music_id = v5;
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::clear(&this->note_track_vec_vec);
  __for_range = proto::UgcMusicContentRedisData::music_track_list(proto_musica);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicTrackRedisData>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicTrackRedisData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrackRedisData const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    music_track = google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrackRedisData const>::operator*(&__for_begin);
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 32));
    __for_range_0 = proto::UgcMusicTrackRedisData::music_note_list(music_track);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicNoteRedisData>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicNoteRedisData>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicNoteRedisData const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      v7 = google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicNoteRedisData const>::operator*(&__for_begin_0);
      proto::UgcMusicNoteRedisData::UgcMusicNoteRedisData((proto::UgcMusicNoteRedisData *const)(v2 + 96), v7);
      __y = proto::UgcMusicNoteRedisData::end_time((const proto::UgcMusicNoteRedisData *const)(v2 + 96));
      __x = proto::UgcMusicNoteRedisData::start_time((const proto::UgcMusicNoteRedisData *const)(v2 + 96));
      __args_0 = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
      std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
        (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 32),
        &__args_0,
        &__args_0);
      proto::UgcMusicNoteRedisData::~UgcMusicNoteRedisData((proto::UgcMusicNoteRedisData *const)(v2 + 96));
      google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicNoteRedisData const>::operator++(&__for_begin_0);
    }
    v8 = std::move<std::vector<std::pair<unsigned int,unsigned int>> &>((std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 32));
    std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::emplace_back<std::vector<std::pair<unsigned int,unsigned int>>>(
      &this->note_track_vec_vec,
      v8,
      v9);
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrackRedisData const>::operator++(&__for_begin);
  }
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 39: range 0000000017979A3E-0000000017979C1A
void __cdecl MusicContent::toRedis(const MusicContent *const this, proto::UgcMusicContentRedisData *proto_music)
{
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_begin_0; // [rsp+20h] [rbp-40h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_end_0; // [rsp+28h] [rbp-38h] BYREF
  const std::vector<std::vector<std::pair<unsigned int,unsigned int>>> *__for_range; // [rsp+30h] [rbp-30h]
  const std::vector<std::pair<unsigned int,unsigned int>> *music_track; // [rsp+38h] [rbp-28h]
  proto::UgcMusicTrackRedisData *proto_music_track; // [rsp+40h] [rbp-20h]
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+48h] [rbp-18h]
  const std::pair<unsigned int,unsigned int> *music_note; // [rsp+50h] [rbp-10h]
  proto::UgcMusicNoteRedisData *proto_music_note; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::UgcMusicContentRedisData::set_music_id(proto_music, this->music_id);
  __for_range = &this->note_track_vec_vec;
  __for_begin._M_current = std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::begin(&this->note_track_vec_vec)._M_current;
  __for_end._M_current = std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::end(&this->note_track_vec_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>(
            &__for_begin,
            &__for_end) )
  {
    music_track = __gnu_cxx::__normal_iterator<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>::operator*(&__for_begin);
    proto_music_track = proto::UgcMusicContentRedisData::add_music_track_list(proto_music);
    __for_range_0 = music_track;
    __for_begin_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(music_track)._M_current;
    __for_end_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      music_note = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
      proto_music_note = proto::UgcMusicTrackRedisData::add_music_note_list(proto_music_track);
      if ( *(_BYTE *)(((unsigned __int64)music_note >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)music_note & 7) + 3) >= *(_BYTE *)(((unsigned __int64)music_note >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(music_note);
      }
      proto::UgcMusicNoteRedisData::set_start_time(proto_music_note, music_note->first);
      if ( *(_BYTE *)(((unsigned __int64)&music_note->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)music_note + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_note->second >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&music_note->second);
      }
      proto::UgcMusicNoteRedisData::set_end_time(proto_music_note, music_note->second);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>::operator++(&__for_begin);
  }
};

// Line 54: range 0000000017979C1C-0000000017979F8F
void __cdecl MusicContent::fromClient(MusicContent *const this, const proto::UgcMusicRecord *proto_music)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // edx
  char v6; // al
  const proto::UgcMusicNote *v7; // rax
  std::vector<std::pair<unsigned int,unsigned int>> *v8; // rax
  std::vector<std::pair<unsigned int,unsigned int>> *v9; // rdx
  const proto::UgcMusicRecord *proto_musica; // [rsp+0h] [rbp-130h]
  unsigned int __x; // [rsp+18h] [rbp-118h] BYREF
  unsigned int __y; // [rsp+1Ch] [rbp-114h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicNote>::const_iterator __for_begin_0; // [rsp+30h] [rbp-100h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicNote>::const_iterator __for_end_0; // [rsp+38h] [rbp-F8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::UgcMusicTrack> *__for_range; // [rsp+40h] [rbp-F0h]
  const proto::UgcMusicTrack *music_track; // [rsp+48h] [rbp-E8h]
  const google::protobuf::RepeatedPtrField<proto::UgcMusicNote> *__for_range_0; // [rsp+50h] [rbp-E0h]
  std::pair<unsigned int,unsigned int> __args_0; // [rsp+58h] [rbp-D8h] BYREF
  char v21[208]; // [rsp+60h] [rbp-D0h] BYREF

  proto_musica = proto_music;
  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 24 21 tmp_note_track_vec:59 96 32 13 music_note:60";
  *(_QWORD *)(v2 + 16) = MusicContent::fromClient;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234881024;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  v5 = proto::UgcMusicRecord::music_id(proto_music);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(proto_music) = v6 != 0;
    __asan_report_store4(this, proto_music, v5);
  }
  this->music_id = v5;
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::clear(&this->note_track_vec_vec);
  __for_range = proto::UgcMusicRecord::music_track_list(proto_musica);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrack const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    music_track = google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrack const>::operator*(&__for_begin);
    std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 32));
    __for_range_0 = proto::UgcMusicTrack::music_note_list(music_track);
    __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicNote>::begin(__for_range_0).it_;
    __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicNote>::end(__for_range_0).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicNote const>::operator!=(
              &__for_begin_0,
              &__for_end_0) )
    {
      v7 = google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicNote const>::operator*(&__for_begin_0);
      proto::UgcMusicNote::UgcMusicNote((proto::UgcMusicNote *const)(v2 + 96), v7);
      __y = proto::UgcMusicNote::end_time((const proto::UgcMusicNote *const)(v2 + 96));
      __x = proto::UgcMusicNote::start_time((const proto::UgcMusicNote *const)(v2 + 96));
      __args_0 = std::make_pair<unsigned int,unsigned int>(&__x, &__y);
      std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<std::pair<unsigned int,unsigned int>>(
        (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 32),
        &__args_0,
        &__args_0);
      proto::UgcMusicNote::~UgcMusicNote((proto::UgcMusicNote *const)(v2 + 96));
      google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicNote const>::operator++(&__for_begin_0);
    }
    v8 = std::move<std::vector<std::pair<unsigned int,unsigned int>> &>((std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 32));
    std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::emplace_back<std::vector<std::pair<unsigned int,unsigned int>>>(
      &this->note_track_vec_vec,
      v8,
      v9);
    std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrack const>::operator++(&__for_begin);
  }
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 69: range 0000000017979F90-000000001797A16C
void __cdecl MusicContent::toClient(const MusicContent *const this, proto::UgcMusicRecord *proto_music)
{
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_begin_0; // [rsp+20h] [rbp-40h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::const_iterator __for_end_0; // [rsp+28h] [rbp-38h] BYREF
  const std::vector<std::vector<std::pair<unsigned int,unsigned int>>> *__for_range; // [rsp+30h] [rbp-30h]
  const std::vector<std::pair<unsigned int,unsigned int>> *music_track; // [rsp+38h] [rbp-28h]
  proto::UgcMusicTrack *proto_music_track; // [rsp+40h] [rbp-20h]
  const std::vector<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+48h] [rbp-18h]
  const std::pair<unsigned int,unsigned int> *music_note; // [rsp+50h] [rbp-10h]
  proto::UgcMusicNote *proto_music_note; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::UgcMusicRecord::set_music_id(proto_music, this->music_id);
  __for_range = &this->note_track_vec_vec;
  __for_begin._M_current = std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::begin(&this->note_track_vec_vec)._M_current;
  __for_end._M_current = std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::end(&this->note_track_vec_vec)._M_current;
  while ( __gnu_cxx::operator!=<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>(
            &__for_begin,
            &__for_end) )
  {
    music_track = __gnu_cxx::__normal_iterator<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>::operator*(&__for_begin);
    proto_music_track = proto::UgcMusicRecord::add_music_track_list(proto_music);
    __for_range_0 = music_track;
    __for_begin_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin(music_track)._M_current;
    __for_end_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
              &__for_begin_0,
              &__for_end_0) )
    {
      music_note = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
      proto_music_note = proto::UgcMusicTrack::add_music_note_list(proto_music_track);
      if ( *(_BYTE *)(((unsigned __int64)music_note >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)music_note & 7) + 3) >= *(_BYTE *)(((unsigned __int64)music_note >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(music_note);
      }
      proto::UgcMusicNote::set_start_time(proto_music_note, music_note->first);
      if ( *(_BYTE *)(((unsigned __int64)&music_note->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)music_note + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&music_note->second >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load4(&music_note->second);
      }
      proto::UgcMusicNote::set_end_time(proto_music_note, music_note->second);
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
    }
    __gnu_cxx::__normal_iterator<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>::operator++(&__for_begin);
  }
};

// Line 84: range 000000001797A16E-000000001797A180
int32_t __cdecl MusicGameUgc::toBin(MusicGameUgc *const this, proto::UgcBin *ugc_bin)
{
  return 0;
};

// Line 89: range 000000001797A182-000000001797A194
int32_t __cdecl MusicGameUgc::fromBin(MusicGameUgc *const this, const proto::UgcBin *ugc_bin)
{
  return 0;
};

// Line 94: range 000000001797A196-000000001797A1A0
void __cdecl MusicGameUgc::onRefresh(MusicGameUgc *const this)
{
  ;
};

// Line 98: range 000000001797A1A2-000000001797A1AC
void __cdecl MusicGameUgc::onLogin(MusicGameUgc *const this)
{
  ;
};

// Line 102: range 000000001797A1AE-000000001797A1B8
void __cdecl MusicGameUgc::onDailyRefresh(MusicGameUgc *const this)
{
  ;
};

// Line 106: range 000000001797A1BA-000000001797A1C4
void __cdecl MusicGameUgc::clear(MusicGameUgc *const this)
{
  ;
};

// Line 110: range 000000001797A1C6-000000001797A244
MusicGameActivityPtr __cdecl MusicGameUgc::getMusicGameActivityPtr(MusicGameUgc *const this)
{
  __int64 v1; // rsi
  MusicGameActivityPtr result; // rax

  if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v1 + 24);
  Player::getActivityComp(*(Player *const *)(v1 + 24));
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this, v1);
  result = PlayerActivityComp::findOpenningActivity<MusicGameActivity>((PlayerActivityComp *const)this);
  result._M_ptr = (std::__shared_ptr<MusicGameActivity,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 115: range 000000001797A246-000000001797A376
bool __cdecl MusicGameUgc::isOpening(MusicGameUgc *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  bool isOpening; // r14
  std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
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
  *(_QWORD *)(v1 + 8) = "1 32 16 16 activity_ptr:116";
  *(_QWORD *)(v1 + 16) = MusicGameUgc::isOpening;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v1 + 32));
  if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v1 + 32)) )
  {
    isOpening = 0;
  }
  else
  {
    v5 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    isOpening = BaseActivity::isOpening(v5, 0);
  }
  std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v1 + 32));
  result = isOpening;
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

// Line 125: range 000000001797A378-000000001797A9E2
void __cdecl MusicGameUgc::getUgc(MusicGameUgc *const this, const proto::GetUgcReq *req, proto::GetUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  MusicGameActivity *v7; // rax
  common::milog::MiLogStream *v8; // rax
  proto::GetUgcType ugc_type; // eax
  MusicGameActivity *v10; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  proto::RecordUsage v15; // eax
  PlayerUgcComp *UgcComp; // rax
  int32_t v17; // edx
  bool is_edit; // [rsp+2Bh] [rbp-115h]
  unsigned int val; // [rsp+2Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-110h] BYREF
  char v22[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 8 12 ugc_guid:126 80 16 16 activity_ptr:134 112 40 14 server_req:157";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::getUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218103808;
  v5[536862725] = -202116109;
  *(_QWORD *)(v3 + 48) = proto::GetUgcReq::ugc_guid(req);
  if ( *(_QWORD *)(v3 + 48) )
  {
    MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 80));
    if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ugc/music_game_ugc.cpp",
        "getUgc",
        137);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v21, (const char (*)[21])"activity is not open");
      common::milog::MiLogStream::~MiLogStream(&v21);
      proto::GetUgcRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v7 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      if ( !MusicGameActivity::isUgcGuidValid(v7, *(_QWORD *)(v3 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/ugc/music_game_ugc.cpp",
          "getUgc",
          144);
        v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v21,
               (const char (*)[18])"invalid ugc_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v8,
          (const unsigned __int64 *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v21);
        proto::GetUgcRsp::set_retcode(rsp_0, -1);
      }
      else
      {
        ugc_type = proto::GetUgcReq::get_ugc_type(req);
        is_edit = ugc_type == GET_UGC_TYPE_MINE;
        if ( ugc_type == GET_UGC_TYPE_MINE
          && (v10 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80)),
              !MusicGameActivity::isMyUgc(v10, *(_QWORD *)(v3 + 48))) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/ugc/music_game_ugc.cpp",
            "getUgc",
            152);
          v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v21,
                  (const char (*)[25])"enter other's ugc, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
          v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" ugc_guid: ");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v14,
            (const unsigned __int64 *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v21);
          proto::GetUgcRsp::set_retcode(rsp_0, 11157);
        }
        else
        {
          proto::ServerGetUgcReq::ServerGetUgcReq((proto::ServerGetUgcReq *const)(v3 + 112));
          proto::ServerGetUgcReq::set_ugc_type((proto::ServerGetUgcReq *const)(v3 + 112), UGC_TYPE_MUSIC_GAME);
          proto::ServerGetUgcReq::set_ugc_guid((proto::ServerGetUgcReq *const)(v3 + 112), *(_QWORD *)(v3 + 48));
          proto::ServerGetUgcReq::set_is_edit((proto::ServerGetUgcReq *const)(v3 + 112), is_edit);
          proto::ServerGetUgcReq::set_is_require_brief((proto::ServerGetUgcReq *const)(v3 + 112), !is_edit);
          v15 = proto::GetUgcReq::ugc_record_usage(req);
          proto::ServerGetUgcReq::set_ugc_record_usage((proto::ServerGetUgcReq *const)(v3 + 112), v15);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          UgcComp = Player::getUgcComp(this->player_);
          v17 = PlayerUgcComp::requestUgc(UgcComp, (proto::ServerGetUgcReq *)(v3 + 112));
          proto::GetUgcRsp::set_retcode(rsp_0, v17);
          proto::ServerGetUgcReq::~ServerGetUgcReq((proto::ServerGetUgcReq *const)(v3 + 112));
        }
      }
    }
    std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/music_game_ugc.cpp",
      "getUgc",
      129);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v21,
           (const char (*)[28])"enter req ugc_guid=0, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    proto::GetUgcRsp::set_retcode(rsp_0, -1);
  }
  if ( v22 == (char *)v3 )
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

// Line 168: range 000000001797A9E4-000000001797B042
void __cdecl MusicGameUgc::serverGetUgc(
        MusicGameUgc *const this,
        const proto::ServerGetUgcRsp *server_rsp,
        proto::GetUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  google::protobuf::int32 v7; // edx
  const proto::UgcMusicContentRedisData *v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  google::protobuf::uint64 v12; // rax
  const std::string *v13; // rax
  google::protobuf::uint32 v14; // eax
  google::protobuf::uint32 v15; // eax
  google::protobuf::uint32 v16; // eax
  google::protobuf::uint32 v17; // eax
  google::protobuf::uint32 v18; // eax
  bool is_psn_platform; // al
  google::protobuf::uint64 v20; // rax
  MusicGameActivity *v21; // rax
  int val; // [rsp+2Ch] [rbp-124h] BYREF
  unsigned __int64 v24; // [rsp+30h] [rbp-120h] BYREF
  const proto::UgcRedisData *ugc_redis_data; // [rsp+38h] [rbp-118h]
  proto::UgcMusicRecord *music_record; // [rsp+40h] [rbp-110h]
  const proto::UgcBriefRedisData *ugc_brief_redis_data; // [rsp+48h] [rbp-108h]
  const proto::UgcMusicBriedRedisData *ugc_music_brief_redis_data; // [rsp+50h] [rbp-100h]
  proto::UgcMusicBriefInfo *music_brief_record; // [rsp+58h] [rbp-F8h]
  common::milog::MiLogStream v30; // [rsp+60h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+80h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 12 ugc_guid:195 64 16 16 activity_ptr:176 96 32 17 music_content:186";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::serverGetUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( proto::ServerGetUgcRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/music_game_ugc.cpp",
      "serverGetUgc",
      171);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v30,
           (const char (*)[33])"internal server get ugc retcode:");
    val = proto::ServerGetUgcRsp::retcode(server_rsp);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v7 = proto::ServerGetUgcRsp::retcode(server_rsp);
    proto::GetUgcRsp::set_retcode(rsp_0, v7);
    goto LABEL_15;
  }
  MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 64));
  if ( !std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 64)) )
  {
    ugc_redis_data = proto::ServerGetUgcRsp::ugc_redis_data(server_rsp);
    music_record = proto::GetUgcRsp::mutable_music_record(rsp_0);
    MusicContent::MusicContent((MusicContent *const)(v3 + 96));
    v8 = proto::UgcRedisData::music_content(ugc_redis_data);
    MusicContent::fromRedis((MusicContent *const)(v3 + 96), v8);
    MusicContent::toClient((const MusicContent *const)(v3 + 96), music_record);
    if ( !proto::ServerGetUgcRsp::is_edit(server_rsp) )
    {
      ugc_brief_redis_data = proto::ServerGetUgcRsp::ugc_brief_redis_data(server_rsp);
      ugc_music_brief_redis_data = proto::UgcBriefRedisData::music_brief(ugc_brief_redis_data);
      *(_QWORD *)(v3 + 32) = proto::UgcBriefRedisData::ugc_guid(ugc_brief_redis_data);
      if ( proto::ServerGetUgcRsp::ugc_guid(server_rsp) != *(_QWORD *)(v3 + 32) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/ugc/music_game_ugc.cpp",
          "serverGetUgc",
          198);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v30,
               (const char (*)[40])"brief not exist or not match, ugc_guid:");
        v24 = proto::ServerGetUgcRsp::ugc_guid(server_rsp);
        v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, &v24);
        v11 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                v10,
                (const char (*)[17])" brief_ugc_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v11,
          (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v30);
        proto::GetUgcRsp::set_retcode(rsp_0, -1);
LABEL_13:
        MusicContent::~MusicContent((MusicContent *const)(v3 + 96));
        goto LABEL_14;
      }
      music_brief_record = proto::GetUgcRsp::mutable_music_brief_info(rsp_0);
      v12 = proto::UgcBriefRedisData::ugc_guid(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_ugc_guid(music_brief_record, v12);
      v13 = proto::UgcBriefRedisData::creator_nickname[abi:cxx11](ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_creator_nickname(music_brief_record, v13);
      v14 = proto::UgcBriefRedisData::publish_time(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_publish_time(music_brief_record, v14);
      v15 = proto::UgcMusicBriedRedisData::music_id(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_music_id(music_brief_record, v15);
      v16 = proto::UgcMusicBriedRedisData::note_count(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_note_count(music_brief_record, v16);
      v17 = proto::UgcMusicBriedRedisData::max_score(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_max_score(music_brief_record, v17);
      v18 = proto::UgcBriefRedisData::version(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_version(music_brief_record, v18);
      is_psn_platform = proto::UgcBriefRedisData::is_psn_platform(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_is_psn_platform(music_brief_record, is_psn_platform);
      v20 = proto::UgcMusicBriedRedisData::import_from_ugc_guid(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_import_from_ugc_guid(music_brief_record, v20);
      v21 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      MusicGameActivity::fillScoreAndUpdateSearchRecord(v21, music_brief_record);
    }
    proto::GetUgcRsp::set_retcode(rsp_0, 0);
    goto LABEL_13;
  }
  common::milog::MiLogStream::create(
    &v30,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/ugc/music_game_ugc.cpp",
    "serverGetUgc",
    179);
  common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v30, (const char (*)[19])"activity not found");
  common::milog::MiLogStream::~MiLogStream(&v30);
  proto::GetUgcRsp::set_retcode(rsp_0, -1);
LABEL_14:
  std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 64));
LABEL_15:
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 220: range 000000001797B044-000000001797B5D7
void __cdecl MusicGameUgc::getUgcBriefInfo(
        MusicGameUgc *const this,
        const proto::GetUgcBriefInfoReq *req,
        proto::GetUgcBriefInfoRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rbx
  MusicGameActivity *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  unsigned int val; // [rsp+2Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-F0h] BYREF
  char v15[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 12 ugc_guid:221 64 16 16 activity_ptr:229 96 32 14 server_req:244";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::getUgcBriefInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_QWORD *)(v3 + 32) = proto::GetUgcBriefInfoReq::ugc_guid(req);
  if ( *(_QWORD *)(v3 + 32) )
  {
    MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 64));
    if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ugc/music_game_ugc.cpp",
        "getUgcBriefInfo",
        232);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v14, (const char (*)[21])"activity is not open");
      common::milog::MiLogStream::~MiLogStream(&v14);
      proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v7 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( !MusicGameActivity::isUgcGuidValid(v7, *(_QWORD *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/ugc/music_game_ugc.cpp",
          "getUgcBriefInfo",
          239);
        v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v14,
               (const char (*)[18])"invalid ugc_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v8,
          (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v14);
        proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, -1);
      }
      else
      {
        proto::ServerGetUgcBriefReq::ServerGetUgcBriefReq((proto::ServerGetUgcBriefReq *const)(v3 + 96));
        proto::ServerGetUgcBriefReq::set_ugc_type((proto::ServerGetUgcBriefReq *const)(v3 + 96), UGC_TYPE_MUSIC_GAME);
        proto::ServerGetUgcBriefReq::set_ugc_guid((proto::ServerGetUgcBriefReq *const)(v3 + 96), *(_QWORD *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        if ( sendProtoToActivityService<proto::ServerGetUgcBriefReq>(
               this->player_,
               (proto::ServerGetUgcBriefReq *)(v3 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v14,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/ugc/music_game_ugc.cpp",
            "getUgcBriefInfo",
            251);
          v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 &v14,
                 (const char (*)[24])"request brief ugc_guid:");
          v10 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v9,
                  (const unsigned __int64 *)(v3 + 32));
          v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v10,
                  (const char (*)[14])" failed, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v14);
          proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, -1);
        }
        else
        {
          proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 0);
        }
        proto::ServerGetUgcBriefReq::~ServerGetUgcBriefReq((proto::ServerGetUgcBriefReq *const)(v3 + 96));
      }
    }
    std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/music_game_ugc.cpp",
      "getUgcBriefInfo",
      224);
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v14,
           (const char (*)[28])"enter req ugc_guid=0, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, -1);
  }
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 259: range 000000001797B5D8-000000001797BA1C
void __cdecl MusicGameUgc::serverGetUgcBrief(
        MusicGameUgc *const this,
        const proto::ServerGetUgcBriefRsp *server_rsp,
        proto::GetUgcBriefInfoRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  google::protobuf::int32 v7; // edx
  google::protobuf::uint64 v8; // rax
  const std::string *v9; // rax
  google::protobuf::uint32 v10; // eax
  google::protobuf::uint32 v11; // eax
  google::protobuf::uint32 v12; // eax
  google::protobuf::uint32 v13; // eax
  google::protobuf::uint32 v14; // eax
  bool is_psn_platform; // al
  google::protobuf::uint64 v16; // rax
  MusicGameActivity *v17; // rax
  int val; // [rsp+24h] [rbp-ACh] BYREF
  const proto::UgcBriefRedisData *ugc_brief_redis_data; // [rsp+28h] [rbp-A8h]
  const proto::UgcMusicBriedRedisData *ugc_music_brief_redis_data; // [rsp+30h] [rbp-A0h]
  proto::UgcMusicBriefInfo *music_brief_record; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-90h] BYREF
  char v24[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:267";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::serverGetUgcBrief;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( proto::ServerGetUgcBriefRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/music_game_ugc.cpp",
      "serverGetUgcBrief",
      262);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v23,
           (const char (*)[33])"internal server get ugc retcode:");
    val = proto::ServerGetUgcBriefRsp::retcode(server_rsp);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    v7 = proto::ServerGetUgcBriefRsp::retcode(server_rsp);
    proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, v7);
  }
  else
  {
    MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 32));
    if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ugc/music_game_ugc.cpp",
        "serverGetUgcBrief",
        270);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v23, (const char (*)[19])"activity not found");
      common::milog::MiLogStream::~MiLogStream(&v23);
      proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      ugc_brief_redis_data = proto::ServerGetUgcBriefRsp::ugc_brief_redis_data(server_rsp);
      ugc_music_brief_redis_data = proto::UgcBriefRedisData::music_brief(ugc_brief_redis_data);
      music_brief_record = proto::GetUgcBriefInfoRsp::mutable_music_brief_info(rsp_0);
      v8 = proto::UgcBriefRedisData::ugc_guid(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_ugc_guid(music_brief_record, v8);
      v9 = proto::UgcBriefRedisData::creator_nickname[abi:cxx11](ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_creator_nickname(music_brief_record, v9);
      v10 = proto::UgcBriefRedisData::publish_time(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_publish_time(music_brief_record, v10);
      v11 = proto::UgcMusicBriedRedisData::music_id(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_music_id(music_brief_record, v11);
      v12 = proto::UgcMusicBriedRedisData::note_count(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_note_count(music_brief_record, v12);
      v13 = proto::UgcMusicBriedRedisData::max_score(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_max_score(music_brief_record, v13);
      v14 = proto::UgcBriefRedisData::version(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_version(music_brief_record, v14);
      is_psn_platform = proto::UgcBriefRedisData::is_psn_platform(ugc_brief_redis_data);
      proto::UgcMusicBriefInfo::set_is_psn_platform(music_brief_record, is_psn_platform);
      v16 = proto::UgcMusicBriedRedisData::import_from_ugc_guid(ugc_music_brief_redis_data);
      proto::UgcMusicBriefInfo::set_import_from_ugc_guid(music_brief_record, v16);
      v17 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      MusicGameActivity::fillScoreAndUpdateSearchRecord(v17, music_brief_record);
      proto::GetUgcBriefInfoRsp::set_retcode(rsp_0, 0);
    }
    std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 32));
  }
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 295: range 000000001797BA1E-000000001797C4EE
void __cdecl MusicGameUgc::saveUgc(MusicGameUgc *const this, const proto::SaveUgcReq *req, proto::SaveUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MusicGameActivity *v6; // r14
  const proto::UgcMusicBriefInfo *v7; // rax
  uint32_t v8; // eax
  common::milog::MiLogStream *v9; // r14
  const proto::UgcMusicBriefInfo *v10; // rax
  MusicGameActivity *v11; // r14
  uint32_t v12; // r15d
  uint32_t v13; // eax
  PlayerUgcComp *UgcComp; // r14
  uint32_t Uid; // eax
  const proto::UgcMusicRecord *v16; // rax
  const proto::UgcMusicBriefInfo *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  const proto::UgcMusicBriefInfo *v21; // rax
  MusicGameActivity *v22; // rax
  common::milog::MiLogStream *v23; // rax
  google::protobuf::uint32 Now; // eax
  const proto::UgcMusicRecord *v25; // rax
  proto::UgcMusicContentRedisData *v26; // rax
  google::protobuf::uint32 v27; // eax
  google::protobuf::uint32 v28; // eax
  google::protobuf::uint32 v29; // eax
  google::protobuf::uint64 v30; // rax
  MusicGameActivity *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // r14
  unsigned int val; // [rsp+2Ch] [rbp-1B4h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::const_iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::const_iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  const proto::UgcMusicBriefInfo *brief_info; // [rsp+40h] [rbp-1A0h]
  const google::protobuf::RepeatedPtrField<proto::UgcMusicTrack> *__for_range; // [rsp+48h] [rbp-198h]
  proto::UgcRedisData *ugc_redis_data; // [rsp+50h] [rbp-190h]
  proto::UgcBriefRedisData *ugc_brief_redis_data; // [rsp+58h] [rbp-188h]
  proto::UgcMusicBriedRedisData *ugc_music_brief_redis_data; // [rsp+60h] [rbp-180h]
  const proto::UgcMusicTrack *track_list; // [rsp+68h] [rbp-178h]
  common::milog::MiLogStream v45; // [rsp+70h] [rbp-170h] BYREF
  char v46[336]; // [rsp+90h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v46;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 7 idx:311 64 4 14 note_count:322 80 8 12 ugc_guid:318 112 16 16 activity_ptr:296 144 32 1"
                        "7 music_content:346 208 40 14 server_req:340";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::saveUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -218103808;
  v5[536862728] = -202116109;
  MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 112));
  if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      &v45,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ugc/music_game_ugc.cpp",
      "saveUgc",
      299);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v45, (const char (*)[21])"activity is not open");
    common::milog::MiLogStream::~MiLogStream(&v45);
    proto::SaveUgcRsp::set_retcode(rsp_0, -1);
  }
  else
  {
    v6 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    v7 = proto::SaveUgcReq::music_brief_info(req);
    v8 = proto::UgcMusicBriefInfo::music_id(v7);
    if ( !MusicGameActivity::isMusicIdOpening(v6, v8) )
    {
      common::milog::MiLogStream::create(
        &v45,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ugc/music_game_ugc.cpp",
        "saveUgc",
        306);
      v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v45,
             (const char (*)[29])"music is not open, music_id:");
      v10 = proto::SaveUgcReq::music_brief_info(req);
      val = proto::UgcMusicBriefInfo::music_id(v10);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v45);
      proto::SaveUgcRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      *(_DWORD *)(v3 + 48) = 0;
      brief_info = proto::SaveUgcReq::music_brief_info(req);
      v11 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      v12 = proto::UgcMusicBriefInfo::save_idx(brief_info);
      v13 = proto::UgcMusicBriefInfo::music_id(brief_info);
      if ( MusicGameActivity::genUgcIdxByMusicIdAndSaveIdx(v11, v13, v12, (uint32_t *)(v3 + 48)) )
      {
        proto::SaveUgcRsp::set_retcode(rsp_0, -1);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        UgcComp = Player::getUgcComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        Uid = Player::getUid(this->player_);
        *(_QWORD *)(v3 + 80) = PlayerUgcComp::genUgcGuid(UgcComp, *(_DWORD *)(v3 + 48), 1u, Uid);
        proto::SaveUgcRsp::set_ugc_guid(rsp_0, *(_QWORD *)(v3 + 80));
        *(_DWORD *)(v3 + 64) = 0;
        v16 = proto::SaveUgcReq::music_record(req);
        __for_range = proto::UgcMusicRecord::music_track_list(v16);
        __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::begin(__for_range).it_;
        __for_end.it_ = google::protobuf::RepeatedPtrField<proto::UgcMusicTrack>::end(__for_range).it_;
        while ( google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrack const>::operator!=(
                  &__for_begin,
                  &__for_end) )
        {
          track_list = google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrack const>::operator*(&__for_begin);
          *(_DWORD *)(v3 + 64) += proto::UgcMusicTrack::music_note_list_size(track_list);
          google::protobuf::internal::RepeatedPtrIterator<proto::UgcMusicTrack const>::operator++(&__for_begin);
        }
        v17 = proto::SaveUgcReq::music_brief_info(req);
        if ( proto::UgcMusicBriefInfo::note_count(v17) == *(_DWORD *)(v3 + 64) )
        {
          v22 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          if ( !MusicGameActivity::isUgcNoteCountValid(v22, *(_DWORD *)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              &v45,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/ugc/music_game_ugc.cpp",
              "saveUgc",
              335);
            v23 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v45,
                    (const char (*)[37])"save ugc fails, invalid note count: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v45);
            proto::SaveUgcRsp::set_retcode(rsp_0, -1);
          }
          else
          {
            proto::ServerSaveUgcReq::ServerSaveUgcReq((proto::ServerSaveUgcReq *const)(v3 + 208));
            proto::ServerSaveUgcReq::set_ugc_type((proto::ServerSaveUgcReq *const)(v3 + 208), UGC_TYPE_MUSIC_GAME);
            ugc_redis_data = proto::ServerSaveUgcReq::mutable_ugc_redis_data((proto::ServerSaveUgcReq *const)(v3 + 208));
            proto::UgcRedisData::set_ugc_guid(ugc_redis_data, *(_QWORD *)(v3 + 80));
            Now = common::tools::TimeUtils::getNow();
            proto::UgcRedisData::set_save_time(ugc_redis_data, Now);
            MusicContent::MusicContent((MusicContent *const)(v3 + 144));
            v25 = proto::SaveUgcReq::music_record(req);
            MusicContent::fromClient((MusicContent *const)(v3 + 144), v25);
            v26 = proto::UgcRedisData::mutable_music_content(ugc_redis_data);
            MusicContent::toRedis((const MusicContent *const)(v3 + 144), v26);
            ugc_brief_redis_data = proto::ServerSaveUgcReq::mutable_ugc_brief_redis_data((proto::ServerSaveUgcReq *const)(v3 + 208));
            proto::UgcBriefRedisData::set_ugc_guid(ugc_brief_redis_data, *(_QWORD *)(v3 + 80));
            ugc_music_brief_redis_data = proto::UgcBriefRedisData::mutable_music_brief(ugc_brief_redis_data);
            v27 = proto::UgcMusicBriefInfo::music_id(brief_info);
            proto::UgcMusicBriedRedisData::set_music_id(ugc_music_brief_redis_data, v27);
            v28 = proto::UgcMusicBriefInfo::note_count(brief_info);
            proto::UgcMusicBriedRedisData::set_note_count(ugc_music_brief_redis_data, v28);
            v29 = proto::UgcMusicBriefInfo::max_score(brief_info);
            proto::UgcMusicBriedRedisData::set_max_score(ugc_music_brief_redis_data, v29);
            v30 = proto::UgcMusicBriefInfo::import_from_ugc_guid(brief_info);
            proto::UgcMusicBriedRedisData::set_import_from_ugc_guid(ugc_music_brief_redis_data, v30);
            v31 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
            MusicGameActivity::onPlayerSaveUgc(v31, *(_QWORD *)(v3 + 80), brief_info);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            if ( sendProtoToActivityService<proto::ServerSaveUgcReq>(
                   this->player_,
                   (proto::ServerSaveUgcReq *)(v3 + 208)) )
            {
              common::milog::MiLogStream::create(
                &v45,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/ugc/music_game_ugc.cpp",
                "saveUgc",
                364);
              v32 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      &v45,
                      (const char (*)[15])"save ugc_guid:");
              v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v32,
                      (const unsigned __int64 *)(v3 + 80));
              v34 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                      v33,
                      (const char (*)[14])" failed, uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              val = Player::getUid(this->player_);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &val);
              common::milog::MiLogStream::~MiLogStream(&v45);
              proto::SaveUgcRsp::set_retcode(rsp_0, -1);
            }
            else
            {
              proto::SaveUgcRsp::set_retcode(rsp_0, 0);
            }
            MusicContent::~MusicContent((MusicContent *const)(v3 + 144));
            proto::ServerSaveUgcReq::~ServerSaveUgcReq((proto::ServerSaveUgcReq *const)(v3 + 208));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v45,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ugc/music_game_ugc.cpp",
            "saveUgc",
            329);
          v18 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  &v45,
                  (const char (*)[29])"save ugc fails, note count: ");
          v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v18,
                  (const unsigned int *)(v3 + 64));
          v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  v19,
                  (const char (*)[21])" client note count: ");
          v21 = proto::SaveUgcReq::music_brief_info(req);
          val = proto::UgcMusicBriefInfo::note_count(v21);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
          common::milog::MiLogStream::~MiLogStream(&v45);
          proto::SaveUgcRsp::set_retcode(rsp_0, -1);
        }
      }
    }
  }
  std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 112));
  if ( v46 == (char *)v3 )
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
};

// Line 372: range 000000001797C4F0-000000001797C7BE
void __cdecl MusicGameUgc::serverSaveUgc(
        MusicGameUgc *const this,
        const proto::ServerSaveUgcRsp *server_rsp,
        proto::SaveUgcRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  google::protobuf::int32 v7; // edx
  MusicGameActivity *v8; // r14
  const proto::UgcBriefRedisData *v9; // rax
  int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:380";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::serverSaveUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( proto::ServerSaveUgcRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/music_game_ugc.cpp",
      "serverSaveUgc",
      375);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v12,
           (const char (*)[34])"internal server save ugc retcode:");
    val = proto::ServerSaveUgcRsp::retcode(server_rsp);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = proto::ServerSaveUgcRsp::retcode(server_rsp);
    proto::SaveUgcRsp::set_retcode(rsp_0, v7);
  }
  else
  {
    MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 32));
    if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ugc/music_game_ugc.cpp",
        "serverSaveUgc",
        383);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v12, (const char (*)[21])"activity is not open");
      common::milog::MiLogStream::~MiLogStream(&v12);
      proto::SaveUgcRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v8 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v9 = proto::ServerSaveUgcRsp::ugc_brief_redis_data(server_rsp);
      MusicGameActivity::updateSaveUgcMusicBrief(v8, v9);
      proto::SaveUgcRsp::set_retcode(rsp_0, 0);
    }
    std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 32));
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

// Line 395: range 000000001797C7C0-000000001797CEC6
void __cdecl MusicGameUgc::publishUgc(
        MusicGameUgc *const this,
        const proto::PublishUgcReq *req,
        proto::PublishUgcRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  MusicGameActivity *v6; // rax
  common::milog::MiLogStream *v7; // rax
  MusicGameActivity *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerBasicComp *BasicComp; // rax
  const std::string *v11; // rax
  bool isPsnPlatform; // al
  google::protobuf::uint32 Now; // eax
  MusicGameActivity *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  proto::UgcBriefRedisData *brief_redis_data; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-F0h] BYREF
  char v22[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 12 ugc_guid:396 64 16 16 activity_ptr:399 96 32 14 server_req:421";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::publishUgc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  *(_QWORD *)(v3 + 32) = proto::PublishUgcReq::ugc_guid(req);
  proto::PublishUgcRsp::set_ugc_guid(rsp_0, *(_QWORD *)(v3 + 32));
  MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 64));
  if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ugc/music_game_ugc.cpp",
      "publishUgc",
      402);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v21, (const char (*)[19])"activity not found");
    common::milog::MiLogStream::~MiLogStream(&v21);
    proto::PublishUgcRsp::set_retcode(rsp_0, -1);
  }
  else
  {
    v6 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( !MusicGameActivity::isUgcGuidValid(v6, *(_QWORD *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ugc/music_game_ugc.cpp",
        "publishUgc",
        409);
      v7 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v21,
             (const char (*)[18])"invalid ugc_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
      proto::PublishUgcRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v8 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( !MusicGameActivity::isMyUgc(v8, *(_QWORD *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/ugc/music_game_ugc.cpp",
          "publishUgc",
          416);
        v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v21, (const char (*)[20])off_26255A00);
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v9,
          (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v21);
        proto::PublishUgcRsp::set_retcode(rsp_0, 11157);
      }
      else
      {
        proto::ServerPublishUgcReq::ServerPublishUgcReq((proto::ServerPublishUgcReq *const)(v3 + 96));
        proto::ServerPublishUgcReq::set_ugc_type((proto::ServerPublishUgcReq *const)(v3 + 96), UGC_TYPE_MUSIC_GAME);
        brief_redis_data = proto::ServerPublishUgcReq::mutable_ugc_brief_redis_data((proto::ServerPublishUgcReq *const)(v3 + 96));
        proto::UgcBriefRedisData::set_ugc_guid(brief_redis_data, *(_QWORD *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        v11 = PlayerBasicComp::getNickName[abi:cxx11](BasicComp);
        proto::UgcBriefRedisData::set_creator_nickname(brief_redis_data, v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        isPsnPlatform = Player::isPsnPlatform(this->player_);
        proto::UgcBriefRedisData::set_is_psn_platform(brief_redis_data, isPsnPlatform);
        Now = common::tools::TimeUtils::getNow();
        proto::UgcBriefRedisData::set_publish_time(brief_redis_data, Now);
        v14 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        if ( MusicGameActivity::fillSavedUgcMusicBrief(v14, brief_redis_data) )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/ugc/music_game_ugc.cpp",
            "publishUgc",
            430);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v21,
            (const char (*)[30])"fillSavedUgcMusicBrief failed");
          common::milog::MiLogStream::~MiLogStream(&v21);
          proto::PublishUgcRsp::set_retcode(rsp_0, -1);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          if ( sendProtoToActivityService<proto::ServerPublishUgcReq>(
                 this->player_,
                 (proto::ServerPublishUgcReq *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v21,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/ugc/music_game_ugc.cpp",
              "publishUgc",
              438);
            v15 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    &v21,
                    (const char (*)[18])"publish ugc_guid:");
            v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                    v15,
                    (const unsigned __int64 *)(v3 + 32));
            v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v16,
                    (const char (*)[14])" failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
            common::milog::MiLogStream::~MiLogStream(&v21);
            proto::PublishUgcRsp::set_retcode(rsp_0, -1);
          }
          else
          {
            proto::PublishUgcRsp::set_retcode(rsp_0, 0);
          }
        }
        proto::ServerPublishUgcReq::~ServerPublishUgcReq((proto::ServerPublishUgcReq *const)(v3 + 96));
      }
    }
  }
  std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 64));
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
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

// Line 446: range 000000001797CEC8-000000001797D1D7
void __cdecl MusicGameUgc::serverPublishUgc(
        MusicGameUgc *const this,
        const proto::ServerPublishUgcRsp *server_rsp,
        proto::PublishUgcRsp *rsp_0)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // r13
  google::protobuf::int32 v7; // edx
  MusicGameActivity *v8; // r14
  uint32_t v9; // r15d
  uint64_t v10; // rax
  google::protobuf::uint64 v11; // rdx
  int val; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 16 activity_ptr:454";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::serverPublishUgc;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( proto::ServerPublishUgcRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/music_game_ugc.cpp",
      "serverPublishUgc",
      449);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v14,
           (const char (*)[37])"internal server publish ugc retcode:");
    val = proto::ServerPublishUgcRsp::retcode(server_rsp);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = proto::ServerPublishUgcRsp::retcode(server_rsp);
    proto::PublishUgcRsp::set_retcode(rsp_0, v7);
  }
  else
  {
    MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 32));
    if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/ugc/music_game_ugc.cpp",
        "serverPublishUgc",
        457);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v14, (const char (*)[21])"activity is not open");
      common::milog::MiLogStream::~MiLogStream(&v14);
      proto::PublishUgcRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      v8 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      v9 = proto::ServerPublishUgcRsp::version(server_rsp);
      v10 = proto::ServerPublishUgcRsp::ugc_guid(server_rsp);
      MusicGameActivity::updateSaveUgcMusicVersion(v8, v10, v9);
      v11 = proto::ServerPublishUgcRsp::ugc_guid(server_rsp);
      proto::PublishUgcRsp::set_ugc_guid(rsp_0, v11);
      proto::PublishUgcRsp::set_retcode(rsp_0, 0);
    }
    std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 32));
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

// Line 470: range 000000001797D1D8-000000001797D58A
void __cdecl MusicGameUgc::checkUgcUpdate(
        MusicGameUgc *const this,
        const proto::CheckUgcUpdateReq *req,
        proto::CheckUgcUpdateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  MusicGameActivity *v6; // rax
  common::milog::MiLogStream *v7; // r14
  unsigned int val; // [rsp+2Ch] [rbp-114h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-110h] BYREF
  char v11[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 16 activity_ptr:471 64 96 14 server_req:478";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::checkUgcUpdate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862725] = -202116109;
  MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 32));
  if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ugc/music_game_ugc.cpp",
      "checkUgcUpdate",
      474);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v10, (const char (*)[19])"activity not found");
    common::milog::MiLogStream::~MiLogStream(&v10);
    proto::CheckUgcUpdateRsp::set_retcode(rsp_0, -1);
  }
  else
  {
    proto::ServerCheckUgcUpdateReq::ServerCheckUgcUpdateReq((proto::ServerCheckUgcUpdateReq *const)(v3 + 64));
    proto::ServerCheckUgcUpdateReq::set_ugc_type((proto::ServerCheckUgcUpdateReq *const)(v3 + 64), UGC_TYPE_MUSIC_GAME);
    v6 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    MusicGameActivity::fillSearchGuidVersionMap(v6, (proto::ServerCheckUgcUpdateReq *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    if ( sendProtoToActivityService<proto::ServerCheckUgcUpdateReq>(
           this->player_,
           (proto::ServerCheckUgcUpdateReq *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/ugc/music_game_ugc.cpp",
        "checkUgcUpdate",
        485);
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             &v10,
             (const char (*)[28])"checkUgcUpdate failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      proto::CheckUgcUpdateRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 0);
    }
    proto::ServerCheckUgcUpdateReq::~ServerCheckUgcUpdateReq((proto::ServerCheckUgcUpdateReq *const)(v3 + 64));
  }
  std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 32));
  if ( v11 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 493: range 000000001797D58C-000000001797D904
void __cdecl MusicGameUgc::serverCheckUgcUpdate(
        MusicGameUgc *const this,
        const proto::ServerCheckUgcUpdateRsp *server_rsp,
        proto::CheckUgcUpdateRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rbx
  google::protobuf::int32 v7; // edx
  google::protobuf::RepeatedField<long unsigned int> *updated; // r14
  const google::protobuf::RepeatedField<long unsigned int> *v9; // rax
  const google::protobuf::RepeatedField<long unsigned int> *ugc_guid_list; // rax
  MusicGameActivity *v11; // rax
  int val; // [rsp+2Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 16 activity_ptr:500 64 24 25 not_find_ugc_guid_vec:510";
  *(_QWORD *)(v3 + 16) = MusicGameUgc::serverCheckUgcUpdate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  if ( proto::ServerCheckUgcUpdateRsp::retcode(server_rsp) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/ugc/music_game_ugc.cpp",
      "serverCheckUgcUpdate",
      496);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v14,
           (const char (*)[42])"internal server check ugc update retcode:");
    val = proto::ServerCheckUgcUpdateRsp::retcode(server_rsp);
    common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v7 = proto::ServerCheckUgcUpdateRsp::retcode(server_rsp);
    proto::CheckUgcUpdateRsp::set_retcode(rsp_0, v7);
  }
  else
  {
    MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v3 + 32));
    if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/ugc/music_game_ugc.cpp",
        "serverCheckUgcUpdate",
        503);
      common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v14, (const char (*)[19])"activity not found");
      common::milog::MiLogStream::~MiLogStream(&v14);
      proto::CheckUgcUpdateRsp::set_retcode(rsp_0, -1);
    }
    else
    {
      updated = proto::CheckUgcUpdateRsp::mutable_update_ugc_guid_list(rsp_0);
      v9 = proto::ServerCheckUgcUpdateRsp::update_ugc_guid_list(server_rsp);
      google::protobuf::RepeatedField<unsigned long>::CopyFrom(updated, v9);
      std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 64));
      ugc_guid_list = proto::ServerCheckUgcUpdateRsp::not_find_ugc_guid_list(server_rsp);
      common::tools::MiscUtils::repeatedToVector<unsigned long,unsigned long>(
        ugc_guid_list,
        (std::vector<long unsigned int> *)(v3 + 64));
      v11 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      MusicGameActivity::tryRemoveNotFindUgcGuidVec(v11, (const std::vector<long unsigned int> *)(v3 + 64));
      proto::CheckUgcUpdateRsp::set_retcode(rsp_0, 0);
      std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 64));
    }
    std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v3 + 32));
  }
  if ( v15 == (char *)v3 )
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

// Line 518: range 000000001797D906-000000001797DAB4
void __cdecl MusicGameUgc::onBanUgcPublish(MusicGameUgc *const this, bool is_ban)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  MusicGameActivity *v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-90h] BYREF
  char v7[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 16 activity_ptr:519";
  *(_QWORD *)(v2 + 16) = MusicGameUgc::onBanUgcPublish;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  MusicGameUgc::getMusicGameActivityPtr((MusicGameUgc *const)(v2 + 32));
  if ( std::operator==<MusicGameActivity>(0LL, (const std::shared_ptr<MusicGameActivity> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/ugc/music_game_ugc.cpp",
      "onBanUgcPublish",
      522);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v6, (const char (*)[19])"activity not found");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  else if ( is_ban )
  {
    v5 = std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MusicGameActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    MusicGameActivity::unpublishAllUgc(v5);
  }
  std::shared_ptr<MusicGameActivity>::~shared_ptr((std::shared_ptr<MusicGameActivity> *const)(v2 + 32));
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
