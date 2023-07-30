// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/mist_trial_activity.cpp

// Line 38: range 00000000145662A6-00000000145663A3
void __cdecl MistTrialBestAvatar::toClient(
        const MistTrialBestAvatar *const this,
        proto::MistTrialBestAvatar *proto_best_avatar)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialBestAvatar::set_avatar_id(proto_best_avatar, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialBestAvatar::set_avatar_type(proto_best_avatar, this->avatar_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialBestAvatar::set_costume_id(proto_best_avatar, this->costume_id);
};

// Line 45: range 00000000145663A4-00000000145664A3
void __cdecl MistTrialBestAvatar::toBin(
        const MistTrialBestAvatar *const this,
        proto::MistTrialBestAvatarBin *best_avatar_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialBestAvatarBin::set_avatar_id(best_avatar_bin, this->avatar_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialBestAvatarBin::set_avatar_type(best_avatar_bin, this->avatar_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialBestAvatarBin::set_costume_id(best_avatar_bin, this->costume_id);
};

// Line 52: range 00000000145664A4-00000000145665A3
void __cdecl MistTrialBestAvatar::fromBin(
        MistTrialBestAvatar *const this,
        const proto::MistTrialBestAvatarBin *best_avatar_bin)
{
  uint32_t v2; // ecx
  google::protobuf::uint32 v3; // edi
  uint32_t v4; // ecx

  v2 = proto::MistTrialBestAvatarBin::avatar_id(best_avatar_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->avatar_id = v2;
  v3 = proto::MistTrialBestAvatarBin::avatar_type(best_avatar_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_type >> 3) + 0x7FFF8000) )
  {
    v3 = (_DWORD)this + 4;
    __asan_report_store4(&this->avatar_type);
  }
  this->avatar_type = v3;
  v4 = proto::MistTrialBestAvatarBin::costume_id(best_avatar_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->costume_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->costume_id);
  }
  this->costume_id = v4;
};

// Line 59: range 00000000145665A4-000000001456673E
void __cdecl MistTrialLevelData::toClient(
        const MistTrialLevelData *const this,
        proto::MistTrialLevelData *client_mist_trial_data)
{
  proto::MistTrialBestAvatar *v2; // rax
  proto::MistTrialBestAvatar *v3; // rax
  std::vector<MistTrialBestAvatar>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<MistTrialBestAvatar>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<MistTrialBestAvatar> *__for_range; // [rsp+20h] [rbp-20h]
  const MistTrialBestAvatar *data; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MistTrialLevelData::set_level_id(client_mist_trial_data, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::MistTrialLevelData::set_is_open(client_mist_trial_data, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialLevelData::set_first_pass_time(client_mist_trial_data, this->first_pass_time);
  __for_range = &this->best_avatar_vec;
  __for_begin._M_current = std::vector<MistTrialBestAvatar>::begin(&this->best_avatar_vec)._M_current;
  __for_end._M_current = std::vector<MistTrialBestAvatar>::end(&this->best_avatar_vec)._M_current;
  while ( __gnu_cxx::operator!=<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>(&__for_begin, &__for_end) )
  {
    data = __gnu_cxx::__normal_iterator<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>::operator*(&__for_begin);
    v2 = proto::MistTrialLevelData::add_best_avatar_list(client_mist_trial_data);
    MistTrialBestAvatar::toClient(data, v2);
    __gnu_cxx::__normal_iterator<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>::operator++(&__for_begin);
  }
  v3 = proto::MistTrialLevelData::mutable_best_hit_avatar(client_mist_trial_data);
  MistTrialBestAvatar::toClient(&this->best_hit_avatar, v3);
};

// Line 71: range 0000000014566740-0000000014566972
void __cdecl MistTrialLevelData::toBin(const MistTrialLevelData *const this, proto::MistTrialLevelBin *bin)
{
  proto::MistTrialBestAvatarBin *v2; // rax
  proto::MistTrialBestAvatarBin *v3; // rax
  std::vector<MistTrialBestAvatar>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<MistTrialBestAvatar>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<MistTrialBestAvatar> *__for_range; // [rsp+20h] [rbp-20h]
  const MistTrialBestAvatar *data; // [rsp+28h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MistTrialLevelBin::set_level_id(bin, this->level_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::MistTrialLevelBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialLevelBin::set_try_times(bin, this->try_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::MistTrialLevelBin::set_success_times(bin, this->success_times);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::MistTrialLevelBin::set_first_pass_time(bin, this->first_pass_time);
  __for_range = &this->best_avatar_vec;
  __for_begin._M_current = std::vector<MistTrialBestAvatar>::begin(&this->best_avatar_vec)._M_current;
  __for_end._M_current = std::vector<MistTrialBestAvatar>::end(&this->best_avatar_vec)._M_current;
  while ( __gnu_cxx::operator!=<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>(&__for_begin, &__for_end) )
  {
    data = __gnu_cxx::__normal_iterator<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>::operator*(&__for_begin);
    v2 = proto::MistTrialLevelBin::add_best_avatar_list(bin);
    MistTrialBestAvatar::toBin(data, v2);
    __gnu_cxx::__normal_iterator<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>::operator++(&__for_begin);
  }
  v3 = proto::MistTrialLevelBin::mutable_best_hit_avatar(bin);
  MistTrialBestAvatar::toBin(&this->best_hit_avatar, v3);
};

// Line 85: range 0000000014566974-0000000014566CAF
void __cdecl MistTrialLevelData::fromBin(MistTrialLevelData *const this, const proto::MistTrialLevelBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  bool is_open; // cl
  uint32_t v7; // ecx
  uint32_t v8; // edx
  uint32_t pass_time; // ecx
  const proto::MistTrialBestAvatarBin *v10; // rax
  google::protobuf::RepeatedPtrField<proto::MistTrialBestAvatarBin>::const_iterator __for_begin; // [rsp+10h] [rbp-80h] BYREF
  google::protobuf::RepeatedPtrField<proto::MistTrialBestAvatarBin>::const_iterator __for_end; // [rsp+18h] [rbp-78h] BYREF
  const google::protobuf::RepeatedPtrField<proto::MistTrialBestAvatarBin> *__for_range; // [rsp+20h] [rbp-70h]
  const proto::MistTrialBestAvatarBin *best_avatar_bin; // [rsp+28h] [rbp-68h]
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 7 data:93";
  *(_QWORD *)(v2 + 16) = MistTrialLevelData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  v5 = proto::MistTrialLevelBin::level_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->level_id = v5;
  is_open = proto::MistTrialLevelBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v7 = proto::MistTrialLevelBin::try_times(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->try_times >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->try_times >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->try_times);
  }
  this->try_times = v7;
  v8 = proto::MistTrialLevelBin::success_times(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->success_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->success_times);
  }
  this->success_times = v8;
  pass_time = proto::MistTrialLevelBin::first_pass_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_pass_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->first_pass_time);
  }
  this->first_pass_time = pass_time;
  __for_range = proto::MistTrialLevelBin::best_avatar_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MistTrialBestAvatarBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MistTrialBestAvatarBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialBestAvatarBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    best_avatar_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialBestAvatarBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 0;
    MistTrialBestAvatar::fromBin((MistTrialBestAvatar *const)(v2 + 32), best_avatar_bin);
    std::vector<MistTrialBestAvatar>::push_back(
      &this->best_avatar_vec,
      (const std::vector<MistTrialBestAvatar>::value_type *)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialBestAvatarBin const>::operator++(&__for_begin);
  }
  v10 = proto::MistTrialLevelBin::best_hit_avatar(bin);
  MistTrialBestAvatar::fromBin(&this->best_hit_avatar, v10);
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

// Line 101: range 0000000014566CB0-0000000014566D93
int32_t __cdecl MistTrialActivity::fromScheduleBin(
        MistTrialActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,MistTrialLevelData>::key_type __k; // [rsp+1Ch] [rbp-44h] BYREF
  google::protobuf::RepeatedPtrField<proto::MistTrialLevelBin>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::RepeatedPtrField<proto::MistTrialLevelBin>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const proto::MistTrialScheduleBin *schedule_bin; // [rsp+30h] [rbp-30h]
  const google::protobuf::RepeatedPtrField<proto::MistTrialLevelBin> *__for_range; // [rsp+38h] [rbp-28h]
  const proto::MistTrialLevelBin *level_bin; // [rsp+40h] [rbp-20h]
  MistTrialLevelData *level_data; // [rsp+48h] [rbp-18h]

  schedule_bin = proto::ActivityScheduleBin::mist_trial_bin(bin);
  std::map<unsigned int,MistTrialLevelData>::clear(&this->level_data_map_);
  __for_range = proto::MistTrialScheduleBin::level_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MistTrialLevelBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MistTrialLevelBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialLevelBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialLevelBin const>::operator*(&__for_begin);
    __k = proto::MistTrialLevelBin::level_id(level_bin);
    level_data = std::map<unsigned int,MistTrialLevelData>::operator[](&this->level_data_map_, &__k);
    MistTrialLevelData::fromBin(level_data, level_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialLevelBin const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 113: range 0000000014566D94-0000000014566E60
int32_t __cdecl MistTrialActivity::toScheduleBin(const MistTrialActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,MistTrialLevelData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,MistTrialLevelData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::MistTrialScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,MistTrialLevelData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,MistTrialLevelData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,MistTrialLevelData> >::type *level_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,MistTrialLevelData> >::type *level_data; // [rsp+40h] [rbp-10h]
  proto::MistTrialLevelBin *level_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_mist_trial_bin(bin);
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,MistTrialLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,MistTrialLevelData>(v7);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,MistTrialLevelData> >::type *)std::get<1ul,unsigned int const,MistTrialLevelData>(v7);
    level_bin = proto::MistTrialScheduleBin::add_level_bin_list(schedule_bin);
    MistTrialLevelData::toBin(level_data, level_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 124: range 0000000014566E62-0000000014566E80
int32_t __cdecl MistTrialActivity::init(MistTrialActivity *const this)
{
  MistTrialActivity::registerObserver(this);
  return 0;
};

// Line 130: range 0000000014566E82-000000001456729A
void __cdecl MistTrialActivity::onPreStart(MistTrialActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  uint32_t v7; // ecx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const ActivityMistTrialExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-B8h]
  const std::vector<unsigned int> *level_vec_ptr; // [rsp+30h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-A8h]
  MistTrialLevelData *level_data; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v16; // [rsp+60h] [rbp-80h] BYREF
  char v17[96]; // [rsp+80h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 level_id:140";
  *(_QWORD *)(v1 + 16) = MistTrialActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  level_vec_ptr = ActivityMistTrialExcelConfigMgr::findTrialLevelIdVecByScheduleId(config_mgr, this->schedule_id_);
  if ( level_vec_ptr )
  {
    std::map<unsigned int,MistTrialLevelData>::clear(&this->level_data_map_);
    __for_range = level_vec_ptr;
    __for_begin._M_current = std::vector<unsigned int>::begin(level_vec_ptr)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(level_vec_ptr)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v5;
      if ( data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
             config_mgr,
             *(_DWORD *)(v1 + 32)) )
      {
        level_data = std::map<unsigned int,MistTrialLevelData>::operator[](
                       &this->level_data_map_,
                       (const std::map<unsigned int,MistTrialLevelData>::key_type *)(v1 + 32));
        v7 = *(_DWORD *)(v1 + 32);
        if ( *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)level_data >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(level_data);
        }
        level_data->level_id = v7;
        if ( *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)level_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&level_data->is_open >> 3)
                                                                 + 0x7FFF8000) )
        {
          __asan_report_store1(&level_data->is_open);
        }
        level_data->is_open = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/mist_trial_activity.cpp",
          "onPreStart",
          145);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v16,
               (const char (*)[49])"[MIST_TRIAL] level_config_ptr is null, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v16);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/mist_trial_activity.cpp",
      "onPreStart",
      135);
    v4 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v16,
           (const char (*)[54])"[MIST_TRIAL] schedule level vec is null, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 155: range 000000001456729C-00000000145672B6
void __cdecl MistTrialActivity::onStart(MistTrialActivity *const this)
{
  MistTrialActivity::registerObserver(this);
};

// Line 160: range 00000000145672B8-000000001456766B
int32_t __cdecl MistTrialActivity::toClient(MistTrialActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  unsigned int val; // [rsp+14h] [rbp-8Ch] BYREF
  std::map<unsigned int,MistTrialLevelData>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,MistTrialLevelData>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  proto::MistTrialActivityDetailInfo *info; // [rsp+28h] [rbp-78h]
  std::map<unsigned int,MistTrialLevelData> *__for_range; // [rsp+30h] [rbp-70h]
  std::pair<unsigned int const,MistTrialLevelData> *__in; // [rsp+38h] [rbp-68h]
  std::tuple_element<0,std::pair<unsigned int const,MistTrialLevelData> >::type *level_id; // [rsp+40h] [rbp-60h]
  std::tuple_element<1,std::pair<unsigned int const,MistTrialLevelData> >::type *level_data; // [rsp+48h] [rbp-58h]
  proto::MistTrialLevelData *client_level_data; // [rsp+50h] [rbp-50h]
  const data::ActivityMistTrialLevelDataExcelConfig *level_data_config_ptr; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v18; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+70h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "toClient",
      163);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v19,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_mist_trial_activity_info(activity_info);
    __for_range = &this->level_data_map_;
    __for_begin._M_node = std::map<unsigned int,MistTrialLevelData>::begin(&this->level_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator*(&__for_begin);
      level_id = std::get<0ul,unsigned int const,MistTrialLevelData>(__in);
      level_data = std::get<1ul,unsigned int const,MistTrialLevelData>(__in);
      client_level_data = proto::MistTrialActivityDetailInfo::add_trial_level_data_list(info);
      MistTrialLevelData::toClient(level_data, client_level_data);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v18);
      p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      level_data_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
                                p_activity_mist_trial_config_mgr,
                                *level_id);
      std::shared_ptr<Config>::~shared_ptr(&v18);
      if ( level_data_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&level_data_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_data_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data_config_ptr->open_day >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        open_day = level_data_config_ptr->open_day;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
        proto::MistTrialLevelData::set_open_time(client_level_data, BeginTimeByOpenDay);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/mist_trial_activity.cpp",
          "toClient",
          174);
        v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v19,
               (const char (*)[49])"[MIST_TRIAL] level_config_ptr is null, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, level_id);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 183: range 000000001456766C-0000000014567A83
int32_t __cdecl MistTrialActivity::execAction(MistTrialActivity *const this, const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r12
  common::milog::MiLogStream *v7; // rax
  __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> >::reference v8; // rax
  int v9; // r15d
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 12 level_id:196 64 32 16 level_id_str:194";
  *(_QWORD *)(v3 + 16) = MistTrialActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_MIST_TRIAL_DUNGEON_CHALLENGE )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      __for_range = &action_exec->param;
      __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
      __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        v8 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        std::string::basic_string(v3 + 64, v8);
        *(_DWORD *)(v3 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(
               (const std::string *)(v3 + 64),
               (unsigned int *)(v3 + 48),
               1) )
        {
          v9 = 0;
        }
        else if ( MistTrialActivity::openLevel(this, *(_DWORD *)(v3 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v15,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/mist_trial_activity.cpp",
            "execAction",
            203);
          v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v15,
                  (const char (*)[42])"[MIST_TRIAL] openLevel failed, level_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v15);
          v2 = -1;
          v9 = 1;
        }
        else
        {
          v9 = 2;
        }
        std::string::~string((void *)(v3 + 64));
        if ( v9 && v9 != 2 )
          goto LABEL_21;
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      BaseActivity::notifyClientData(this, 0);
      v2 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "execAction",
        190);
      v6 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v15,
             (const char (*)[32])"[MIST_TRIAL] action param size ");
      __for_end._M_current = (const std::string *)std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_253FD4A0);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v2 = -1;
    }
  }
  else
  {
    v2 = BaseActivity::execAction(this, action_exec);
  }
LABEL_21:
  result = v2;
  if ( v16 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 217: range 0000000014567A84-0000000014567B62
bool __cdecl MistTrialActivity::isContainsWatcher(MistTrialActivity *const this, uint32_t watcher_id)
{
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // rcx
  bool isContainsWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  isContainsWatcher = ActivityMistTrialExcelConfigMgr::isContainsWatcher(
                        p_activity_mist_trial_config_mgr,
                        this->schedule_id_,
                        watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isContainsWatcher || BaseActivity::isContainsWatcher(this, watcher_id);
};

// Line 226: range 0000000014567B64-00000000145681F9
int32_t __cdecl MistTrialActivity::fillWatcherProtoList(
        MistTrialActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  ActivityMistTrialExcelConfigMgr *v8; // rcx
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  proto::ActivityWatcherInfo *v15; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::map<unsigned int,MistTrialLevelData>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::map<unsigned int,MistTrialLevelData>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+30h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-E8h] BYREF
  std::map<unsigned int,MistTrialLevelData> *__for_range; // [rsp+40h] [rbp-E0h]
  const std::pair<unsigned int const,MistTrialLevelData> *v22; // [rsp+48h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,MistTrialLevelData> >::type *level_id; // [rsp+50h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,MistTrialLevelData> >::type *level_data; // [rsp+58h] [rbp-C8h]
  const data::ActivityMistTrialLevelDataExcelConfig *level_config_ptr; // [rsp+60h] [rbp-C0h]
  const std::set<unsigned int> *watcher_id_set_ptr; // [rsp+68h] [rbp-B8h]
  const std::set<unsigned int> *__for_range_0; // [rsp+70h] [rbp-B0h]
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+78h] [rbp-A8h]
  std::shared_ptr<Config> v29; // [rsp+80h] [rbp-A0h] BYREF
  common::milog::MiLogStream v30; // [rsp+90h] [rbp-90h] BYREF
  char v31[112]; // [rsp+B0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:246";
  *(_QWORD *)(v2 + 16) = MistTrialActivity::fillWatcherProtoList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,MistTrialLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,MistTrialLevelData>(v22);
    level_data = (std::tuple_element<1,const std::pair<unsigned int const,MistTrialLevelData> >::type *)std::get<1ul,unsigned int const,MistTrialLevelData>(v22);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
                         p_activity_mist_trial_config_mgr,
                         *level_id);
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( !level_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/mist_trial_activity.cpp",
        "fillWatcherProtoList",
        237);
      v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             &v30,
             (const char (*)[49])"[MIST_TRIAL] level_config_ptr is null, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, level_id);
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = -1;
      goto LABEL_26;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v8 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    watcher_id_set_ptr = ActivityMistTrialExcelConfigMgr::findWatcherIdSetByLevelId(v8, *level_id);
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( !watcher_id_set_ptr )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "fillWatcherProtoList",
        243);
      v9 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v30,
             (const char (*)[51])"[MIST_TRIAL] watcher_id_set_ptr is null, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, level_id);
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = -1;
      goto LABEL_26;
    }
    __for_range_0 = watcher_id_set_ptr;
    __for_begin_0._M_node = std::set<unsigned int>::begin(watcher_id_set_ptr)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v10;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v29);
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
      watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                             &v11->design_config.txt_config_mgr.new_activity_config_mgr,
                             *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v29);
      if ( watcher_config_ptr )
      {
        v15 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
        BaseActivity::fillWatcherProto(this, v15, watcher_config_ptr);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/mist_trial_activity.cpp",
          "fillWatcherProtoList",
          251);
        v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v30,
                (const char (*)[35])"[MIST_TRIAL] findWatcherConfig id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v12,
                (const unsigned int *)(v2 + 32));
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
        common::milog::MiLogStream::~MiLogStream(&v30);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_26:
  if ( v31 == (char *)v2 )
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

// Line 261: range 00000000145681FA-000000001456838A
_BOOL8 __fastcall MistTrialActivity::isTrialLevelOpen(MistTrialActivity *const this, uint32_t trial_level_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::pointer v6; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v9[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 18 trial_level_id:260 64 8 8 iter:262";
  *(_QWORD *)(v2 + 16) = MistTrialActivity::isTrialLevelOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = trial_level_id;
  *(std::map<unsigned int,MistTrialLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,MistTrialLevelData>::find(
                                                                        &this->level_data_map_,
                                                                        (const std::map<unsigned int,MistTrialLevelData>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> > *const)(v2 + 64));
    p_is_open = &v6->second.is_open;
    if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_open);
    }
    result = v6->second.is_open;
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

// Line 271: range 000000001456855C-000000001456990B
void __fastcall MistTrialActivity::onMistTrialDungeonSettle(
        MistTrialActivity *const this,
        DungeonScene *dungeon_scene,
        __int32 trial_level_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::pointer v6; // rax
  uint32_t Uid; // eax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // r14
  const std::string *v11; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // r14
  uint32_t DungeonId; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  unsigned __int64 v15; // rax
  PlayerAvatarComp *AvatarComp; // rax
  Avatar *v17; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  proto_log::AvatarLog *v19; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v23; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::pointer v26; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  google::protobuf::uint32 DungeonResult; // eax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v29; // rax
  _QWORD *v30; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  uint32_t v32; // eax
  uint32_t MistTrialDamageBeared; // eax
  uint32_t MistTrialStrongestBlow; // eax
  uint32_t MistTrialElementBurstCount; // eax
  _BOOL4 isSettledAndSuccess; // edx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v38; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  std::__detail::_Node_iterator<std::pair<const data::ElementReactionType,unsigned int>,false,false>::reference v40; // rax
  _QWORD *v41; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  Player *player; // r14
  std::string v44; // [rsp+0h] [rbp-320h]
  DungeonScene *dungeon_scenea; // [rsp+10h] [rbp-310h]
  MistTrialActivity *thisa; // [rsp+18h] [rbp-308h]
  uint32_t total_reaction_count; // [rsp+28h] [rbp-2F8h]
  uint32_t dungeon_begin_time; // [rsp+2Ch] [rbp-2F4h]
  uint32_t dungeon_settle_time; // [rsp+30h] [rbp-2F0h]
  uint32_t dungeon_id; // [rsp+34h] [rbp-2ECh]
  uint32_t now; // [rsp+38h] [rbp-2E8h]
  uint32_t exhibition_id; // [rsp+44h] [rbp-2DCh]
  std::set<unsigned int>::iterator __for_begin; // [rsp+48h] [rbp-2D8h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+50h] [rbp-2D0h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+58h] [rbp-2C8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+60h] [rbp-2C0h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+68h] [rbp-2B8h]
  const std::set<unsigned int> *watcher_id_set_ptr; // [rsp+70h] [rbp-2B0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+78h] [rbp-2A8h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_1; // [rsp+80h] [rbp-2A0h]
  proto_log::PlayerLogBodySettleMistTrialDungeon *settle_log; // [rsp+88h] [rbp-298h]
  const MistTrialDungeonContext *context; // [rsp+90h] [rbp-290h]
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+98h] [rbp-288h]
  const std::set<unsigned int> *__for_range_2; // [rsp+A0h] [rbp-280h]
  const std::set<unsigned int> *needed_reaction_set_ptr; // [rsp+A8h] [rbp-278h]
  std::unordered_map<data::ElementReactionType,unsigned int> *__for_range_3; // [rsp+B0h] [rbp-270h]
  proto_log::MistTrialExhibitionLog *exhibition_log; // [rsp+B8h] [rbp-268h]
  std::tuple_element<0,std::pair<const data::ElementReactionType,unsigned int> >::type *reaction_type; // [rsp+C0h] [rbp-260h]
  std::tuple_element<1,std::pair<const data::ElementReactionType,unsigned int> >::type *reaction_count; // [rsp+C8h] [rbp-258h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *stat_id; // [rsp+D0h] [rbp-250h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *progress; // [rsp+D8h] [rbp-248h]
  proto_log::MistTrialStatLog *stat_log; // [rsp+E0h] [rbp-240h]
  uint64_t guid; // [rsp+E8h] [rbp-238h]
  common::milog::MiLogStream v74; // [rsp+F0h] [rbp-230h] BYREF
  char v75[528]; // [rsp+110h] [rbp-210h] BYREF

  *(&v44._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v44._anon_0._M_allocated_capacity = (std::string::size_type)dungeon_scene;
  HIDWORD(v44._M_string_length) = trial_level_id;
  v3 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 1 10 holder:292 64 4 14 watcher_id:317 80 4 18 trial_level_id:270 96 8 14 level_iter:276 1"
                        "28 8 26 mist_trial_context_opt:356 160 16 11 log_ptr:293 192 16 22 add_exhibition_log:338 224 16"
                        " 11 evt_ptr:288 256 16 14 avatar_ptr:299 288 56 12 stat_map:284 384 56 22 reaction_count_map:375";
  *(_QWORD *)(v3 + 16) = MistTrialActivity::onMistTrialDungeonSettle;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -219021312;
  v5[536862727] = -219021312;
  v5[536862728] = -219021312;
  v5[536862730] = -234881024;
  v5[536862731] = -218959118;
  v5[536862733] = -218103808;
  v5[536862734] = -202116109;
  *(_DWORD *)(v3 + 80) = HIDWORD(v44._M_string_length);
  if ( MistTrialActivity::isTrialLevelOpen(this, *(_DWORD *)(v3 + 80)) )
  {
    *(std::map<unsigned int,MistTrialLevelData>::iterator *)(v3 + 96) = std::map<unsigned int,MistTrialLevelData>::find(
                                                                          &this->level_data_map_,
                                                                          (const std::map<unsigned int,MistTrialLevelData>::key_type *)(v3 + 80));
    *(std::map<unsigned int,MistTrialLevelData>::iterator *)(v3 + 128) = std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_);
    if ( !std::operator==(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self *)(v3 + 96),
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self *)(v3 + 128)) )
    {
      v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v6->second.try_times >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v6 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second.try_times >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++v6->second.try_times;
      common::milog::MiLogStream::create(
        &v74,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/mist_trial_activity.cpp",
        "onMistTrialDungeonSettle",
        283);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        &v74,
        (const char (*)[38])"[MIST_TRIAL] onMistTrialDungeonSettle");
      common::milog::MiLogStream::~MiLogStream(&v74);
      std::unordered_map<unsigned int,unsigned int>::unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 288));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Uid = Player::getUid(this->player_);
      DungeonScene::getMistTrialStatValueMap(
        dungeon_scene,
        Uid,
        (std::unordered_map<unsigned int,unsigned int> *)(v3 + 288));
      if ( DungeonScene::isSettledAndSuccess(dungeon_scene) )
      {
        *(_DWORD *)(v3 + 64) = DungeonScene::getDungeonId(dungeon_scene);
        common::tools::perf::make_shared<FinishMistTrialDungeonEvent,unsigned int,std::unordered_map<unsigned int,unsigned int> &>(
          (unsigned int *)(v3 + 224),
          (std::unordered_map<unsigned int,unsigned int> *)(v3 + 64),
          (unsigned int *)(v3 + 288),
          (std::unordered_map<unsigned int,unsigned int> *)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<FinishMistTrialDungeonEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v3 + 256),
          (const std::shared_ptr<FinishMistTrialDungeonEvent> *)(v3 + 224));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 256));
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 256));
        std::shared_ptr<FinishMistTrialDungeonEvent>::~shared_ptr((std::shared_ptr<FinishMistTrialDungeonEvent> *const)(v3 + 224));
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v74, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xD48u, v44);
      std::string::~string(&v74);
      common::tools::perf::make_shared<proto_log::PlayerLogBodySettleMistTrialDungeon>();
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      v11 = DungeonScene::getTransaction[abi:cxx11](dungeon_scenea);
      proto_log::PlayerLogBodySettleMistTrialDungeon::set_dungeon_transaction(v10, v11);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      DungeonId = DungeonScene::getDungeonId(dungeon_scenea);
      proto_log::PlayerLogBodySettleMistTrialDungeon::set_dungeon_id(v12, DungeonId);
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
      proto_log::PlayerLogBodySettleMistTrialDungeon::set_mist_trial_level_id(v14, *(_DWORD *)(v3 + 80));
      __for_range = &thisa->informal_avatar_guid_vec_;
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::vector<unsigned long>::begin(&thisa->informal_avatar_guid_vec_)._M_current;
      *(std::vector<long unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned long>::end(&thisa->informal_avatar_guid_vec_);
      while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(
                (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)&__for_end,
                (const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *)(v3 + 128)) )
      {
        v15 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*((const __gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_end);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8();
        guid = *(_QWORD *)v15;
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = Player::getAvatarComp(thisa->player_);
        PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v3 + 256), (uint64_t)AvatarComp);
        if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v3 + 256)) )
        {
          v17 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
          v18 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          v19 = proto_log::PlayerLogBodySettleMistTrialDungeon::add_trial_avatar_log_list(v18);
          Avatar::getAvatarLog(v17, v19);
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 256));
        __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++((__gnu_cxx::__normal_iterator<long unsigned int*,std::vector<long unsigned int> > *const)&__for_end);
      }
      dungeon_begin_time = DungeonScene::getDungeonBeginTime(dungeon_scenea);
      dungeon_settle_time = DungeonScene::getDungeonSettleTime(dungeon_scenea);
      if ( dungeon_settle_time > dungeon_begin_time )
      {
        v20 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        proto_log::PlayerLogBodySettleMistTrialDungeon::set_duration(v20, dungeon_settle_time - dungeon_begin_time);
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 256));
      v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
      watcher_id_set_ptr = ActivityMistTrialExcelConfigMgr::findWatcherIdSetByLevelId(
                             &v21->design_config.txt_config_mgr.activity_mist_trial_config_mgr,
                             *(_DWORD *)(v3 + 80));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 256));
      if ( watcher_id_set_ptr )
      {
        __for_range_0 = watcher_id_set_ptr;
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<unsigned int>::begin(watcher_id_set_ptr)._M_node;
        *(std::set<unsigned int>::iterator *)(v3 + 128) = std::set<unsigned int>::end(__for_range_0);
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end,
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 128)) )
        {
          v23 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end);
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 64) = *v23;
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                 &thisa->finished_watcher_id_set_,
                 (const unsigned int *)(v3 + 64)) )
          {
            v24 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
            proto_log::PlayerLogBodySettleMistTrialDungeon::add_finished_watcher_list(v24, *(_DWORD *)(v3 + 64));
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_end);
        }
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> > *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&v26->second.try_times >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v26 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->second.try_times >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodySettleMistTrialDungeon::set_try_times(v25, v26->second.try_times);
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        DungeonResult = DungeonScene::getDungeonResult(dungeon_scenea);
        proto_log::PlayerLogBodySettleMistTrialDungeon::set_dungeon_settle_type(v27, DungeonResult);
        __for_range_1 = (std::unordered_map<unsigned int,unsigned int> *)(v3 + 288);
        __for_begin_0._M_cur = std::unordered_map<unsigned int,unsigned int>::begin((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 288))._M_cur;
        __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(__for_range_1)._M_cur;
        while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin_0, &__for_end) )
        {
          v29 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin_0);
          v30 = v29;
          if ( ((unsigned __int8)v29 & 7) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v29->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v29 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v29->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v29, 8LL);
          }
          *(_QWORD *)(v3 + 128) = *v30;
          stat_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 128));
          progress = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 128));
          v31 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
          stat_log = proto_log::PlayerLogBodySettleMistTrialDungeon::add_stat_log_list(v31);
          if ( *(_BYTE *)(((unsigned __int64)stat_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)stat_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stat_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::MistTrialStatLog::set_stat_id(stat_log, *stat_id);
          if ( *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::MistTrialStatLog::set_progress(stat_log, *progress);
          std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin_0);
        }
        dungeon_id = DungeonScene::getDungeonId(dungeon_scenea);
        settle_log = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
        *(_DWORD *)(v3 + 192) = dungeon_id;
        *(_QWORD *)(v3 + 200) = settle_log;
        if ( DungeonScene::isSettledAndSuccess(dungeon_scenea) )
        {
          *(std::optional<MistTrialDungeonContext> *)(v3 + 128) = DungeonScene::getDungeonExtraData<MistTrialDungeonContext>(dungeon_scenea);
          if ( std::optional<MistTrialDungeonContext>::has_value((const std::optional<MistTrialDungeonContext> *const)(v3 + 128)) )
          {
            context = std::optional<MistTrialDungeonContext>::value((std::optional<MistTrialDungeonContext> *const)(v3 + 128));
            now = Scene::getSceneTimeSeconds((Scene *const)dungeon_scenea);
            if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( now <= context->gallery_start_time )
              v32 = 0;
            else
              v32 = now - context->gallery_start_time;
            MistTrialActivity::onMistTrialDungeonSettle(DungeonScene &,unsigned int)::{lambda(data::ExhibitionServerTriggerType,unsigned int)#1}::operator()(
              (const MistTrialActivity::onMistTrialDungeonSettle::<lambda(data::ExhibitionServerTriggerType, uint32_t)> *const)(v3 + 192),
              EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_SHORTEST_SUCCESS_TIME,
              v32);
          }
        }
        MistTrialDamageBeared = DungeonScene::getMistTrialDamageBeared(dungeon_scenea);
        MistTrialActivity::onMistTrialDungeonSettle(DungeonScene &,unsigned int)::{lambda(data::ExhibitionServerTriggerType,unsigned int)#1}::operator()(
          (const MistTrialActivity::onMistTrialDungeonSettle::<lambda(data::ExhibitionServerTriggerType, uint32_t)> *const)(v3 + 192),
          EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_LEAST_TAKE_DAMAGE,
          MistTrialDamageBeared);
        MistTrialStrongestBlow = DungeonScene::getMistTrialStrongestBlow(dungeon_scenea);
        MistTrialActivity::onMistTrialDungeonSettle(DungeonScene &,unsigned int)::{lambda(data::ExhibitionServerTriggerType,unsigned int)#1}::operator()(
          (const MistTrialActivity::onMistTrialDungeonSettle::<lambda(data::ExhibitionServerTriggerType, uint32_t)> *const)(v3 + 192),
          EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_STRONGEST_BLOW,
          MistTrialStrongestBlow);
        MistTrialElementBurstCount = DungeonScene::getMistTrialElementBurstCount(dungeon_scenea);
        MistTrialActivity::onMistTrialDungeonSettle(DungeonScene &,unsigned int)::{lambda(data::ExhibitionServerTriggerType,unsigned int)#1}::operator()(
          (const MistTrialActivity::onMistTrialDungeonSettle::<lambda(data::ExhibitionServerTriggerType, uint32_t)> *const)(v3 + 192),
          EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_ELEMENT_BURST_COUNT,
          MistTrialElementBurstCount);
        isSettledAndSuccess = DungeonScene::isSettledAndSuccess(dungeon_scenea);
        MistTrialActivity::onMistTrialDungeonSettle(DungeonScene &,unsigned int)::{lambda(data::ExhibitionServerTriggerType,unsigned int)#1}::operator()(
          (const MistTrialActivity::onMistTrialDungeonSettle::<lambda(data::ExhibitionServerTriggerType, uint32_t)> *const)(v3 + 192),
          EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_SUCCESS,
          isSettledAndSuccess);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 256));
        v37 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
        exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
                               &v37->design_config.txt_config_mgr.exhibition_config_mgr,
                               dungeon_id,
                               EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_ELEMENT_REACTION_COUNT);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 256));
        if ( exhibition_set_ptr )
        {
          DungeonScene::getMistTrialElementReactionCount(
            (std::unordered_map<data::ElementReactionType,unsigned int> *)(v3 + 384),
            dungeon_scenea);
          __for_range_2 = exhibition_set_ptr;
          __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set_ptr)._M_node;
          __for_end_0._M_node = std::set<unsigned int>::end(__for_range_2)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end_0) )
          {
            v38 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            exhibition_id = *v38;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v3 + 256));
            v39 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 256));
            needed_reaction_set_ptr = ExhibitionExcelConfigMgr::getElementReactionSetByExhibitionId(
                                        &v39->design_config.txt_config_mgr.exhibition_config_mgr,
                                        exhibition_id);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 256));
            if ( needed_reaction_set_ptr )
            {
              total_reaction_count = 0;
              __for_range_3 = (std::unordered_map<data::ElementReactionType,unsigned int> *)(v3 + 384);
              __for_begin_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<data::ElementReactionType,unsigned int>::begin((std::unordered_map<data::ElementReactionType,unsigned int> *const)(v3 + 384))._M_cur;
              __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::unordered_map<data::ElementReactionType,unsigned int>::end(__for_range_3)._M_cur;
              while ( std::__detail::operator!=<std::pair<data::ElementReactionType const,unsigned int>,false>(
                        (const std::__detail::_Node_iterator_base<std::pair<const data::ElementReactionType,unsigned int>,false> *)&__for_begin_0,
                        (const std::__detail::_Node_iterator_base<std::pair<const data::ElementReactionType,unsigned int>,false> *)&__for_end) )
              {
                v40 = std::__detail::_Node_iterator<std::pair<data::ElementReactionType const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<const data::ElementReactionType,unsigned int>,false,false> *const)&__for_begin_0);
                v41 = v40;
                if ( ((unsigned __int8)v40 & 7) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000)
                  && *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
                  || *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)v40 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v40->second + 3) >> 3)
                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load_n(v40, 8LL);
                }
                *(_QWORD *)(v3 + 128) = *v41;
                reaction_type = std::get<0ul,data::ElementReactionType const,unsigned int>((std::pair<const data::ElementReactionType,unsigned int> *)(v3 + 128));
                reaction_count = std::get<1ul,data::ElementReactionType const,unsigned int>((std::pair<const data::ElementReactionType,unsigned int> *)(v3 + 128));
                if ( *(_BYTE *)(((unsigned __int64)reaction_type >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)reaction_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reaction_type >> 3)
                                                                                  + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                *(std::tuple_element<0,std::pair<const data::ElementReactionType,unsigned int> >::type *)(v3 + 64) = *reaction_type;
                if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                       needed_reaction_set_ptr,
                       (const unsigned int *)(v3 + 64)) )
                {
                  if ( *(_BYTE *)(((unsigned __int64)reaction_count >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)reaction_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reaction_count >> 3)
                                                                                     + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  total_reaction_count += *reaction_count;
                }
                std::__detail::_Node_iterator<std::pair<data::ElementReactionType const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<const data::ElementReactionType,unsigned int>,false,false> *const)&__for_begin_0);
              }
              v42 = std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodySettleMistTrialDungeon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
              exhibition_log = proto_log::PlayerLogBodySettleMistTrialDungeon::add_exhibition_log_list(v42);
              proto_log::MistTrialExhibitionLog::set_exhibition_id(exhibition_log, exhibition_id);
              proto_log::MistTrialExhibitionLog::set_trigger_type(exhibition_log, 0x12u);
              proto_log::MistTrialExhibitionLog::set_value(exhibition_log, total_reaction_count);
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          std::unordered_map<data::ElementReactionType,unsigned int>::~unordered_map((std::unordered_map<data::ElementReactionType,unsigned int> *const)(v3 + 384));
        }
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(v3 + 256),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodySettleMistTrialDungeon,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v3 + 224),
          (const std::shared_ptr<proto_log::PlayerLogBodySettleMistTrialDungeon> *)(v3 + 160));
        Player::printStatLog(player, (MessagePtr *)(v3 + 224), (MessagePtr *)(v3 + 256), 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 224));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 256));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v74,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/mist_trial_activity.cpp",
          "onMistTrialDungeonSettle",
          314);
        v22 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v74,
                (const char (*)[51])"[MIST_TRIAL] watcher_id_set_ptr is null, level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream(&v74);
      }
      std::shared_ptr<proto_log::PlayerLogBodySettleMistTrialDungeon>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodySettleMistTrialDungeon> *const)(v3 + 160));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
      std::unordered_map<unsigned int,unsigned int>::~unordered_map((std::unordered_map<unsigned int,unsigned int> *const)(v3 + 288));
    }
  }
  if ( v75 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = -168430091;
  }
};

// Line 338: range 000000001456838C-000000001456855B
void __cdecl MistTrialActivity::onMistTrialDungeonSettle(DungeonScene &,unsigned int)::{lambda(data::ExhibitionServerTriggerType,unsigned int)#1}::operator()(
        const MistTrialActivity::onMistTrialDungeonSettle::<lambda(data::ExhibitionServerTriggerType, uint32_t)> *const __closure,
        data::ExhibitionServerTriggerType trigger_type,
        uint32_t value)
{
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  uint32_t exhibition_id; // [rsp+14h] [rbp-4Ch]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::set<unsigned int> *exhibition_set_ptr; // [rsp+28h] [rbp-38h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  proto_log::MistTrialExhibitionLog *exhibition_log; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v12[2]; // [rsp+40h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v12);
  p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12)->design_config.txt_config_mgr.exhibition_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  exhibition_set_ptr = ExhibitionExcelConfigMgr::getServerKeyExhibitionSetByParamAndTriggerType(
                         p_exhibition_config_mgr,
                         __closure->__dungeon_id,
                         trigger_type);
  std::shared_ptr<Config>::~shared_ptr(v12);
  if ( exhibition_set_ptr )
  {
    __for_range = exhibition_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(exhibition_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(exhibition_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      exhibition_id = *v4;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__settle_log >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      exhibition_log = proto_log::PlayerLogBodySettleMistTrialDungeon::add_exhibition_log_list(__closure->__settle_log);
      proto_log::MistTrialExhibitionLog::set_exhibition_id(exhibition_log, exhibition_id);
      proto_log::MistTrialExhibitionLog::set_trigger_type(exhibition_log, trigger_type);
      proto_log::MistTrialExhibitionLog::set_value(exhibition_log, value);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
};

// Line 403: range 000000001456990C-000000001456993E
void __cdecl MistTrialActivity::onSettle(MistTrialActivity *const this)
{
  BaseActivity::delWatchers(this);
  MistTrialActivity::delMistTrialWatchers(this);
  MistTrialActivity::unregisterObserver(this);
};

// Line 410: range 0000000014569940-0000000014569978
void __cdecl MistTrialActivity::onClear(MistTrialActivity *const this)
{
  BaseActivity::delWatchers(this);
  MistTrialActivity::delMistTrialWatchers(this);
  std::map<unsigned int,MistTrialLevelData>::clear(&this->level_data_map_);
};

// Line 417: range 000000001456997A-000000001456A41E
__int64 __fastcall MistTrialActivity::openLevel(MistTrialActivity *const this, uint32_t level_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::pointer v7; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::pointer v9; // rdx
  bool *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  uint32_t WatcherComp; // eax
  bool v25; // r14
  PlayerWatcherComp *v26; // rax
  bool v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const data::ActivityMistTrialLevelDataExcelConfig *level_config_ptr; // [rsp+30h] [rbp-E0h]
  const std::set<unsigned int> *watcher_id_set_ptr; // [rsp+38h] [rbp-D8h]
  const std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-D0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v38; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v39; // [rsp+60h] [rbp-B0h] BYREF
  char v40[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 watcher_id:443 48 4 12 level_id:416 64 8 14 level_iter:418";
  *(_QWORD *)(v2 + 16) = MistTrialActivity::openLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = level_id;
  *(std::map<unsigned int,MistTrialLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,MistTrialLevelData>::find(
                                                                        &this->level_data_map_,
                                                                        (const std::map<unsigned int,MistTrialLevelData>::key_type *)(v2 + 48));
  __for_end._M_node = std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self *)&__for_end) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "openLevel",
      421);
    v5 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v39,
           (const char (*)[43])"[MIST_TRIAL] level_id not found, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
    goto LABEL_41;
  }
  v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> > *const)(v2 + 64));
  p_is_open = &v7->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_open);
  }
  if ( v7->second.is_open )
  {
    result = 0LL;
    goto LABEL_41;
  }
  v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> > *const)(v2 + 64));
  v10 = &v9->second.is_open;
  if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(v10);
  }
  v9->second.is_open = 1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
  level_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
                       &v11->design_config.txt_config_mgr.activity_mist_trial_config_mgr,
                       *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v38);
  if ( !level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/mist_trial_activity.cpp",
      "openLevel",
      433);
    v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v39,
            (const char (*)[49])"[MIST_TRIAL] level_config_ptr is null, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
    goto LABEL_41;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v13 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
  watcher_id_set_ptr = ActivityMistTrialExcelConfigMgr::findWatcherIdSetByLevelId(
                         &v13->design_config.txt_config_mgr.activity_mist_trial_config_mgr,
                         *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v38);
  if ( !watcher_id_set_ptr )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "openLevel",
      439);
    v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v39,
            (const char (*)[51])"[MIST_TRIAL] watcher_id_set_ptr is null, level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v39);
    result = 0xFFFFFFFFLL;
    goto LABEL_41;
  }
  __for_range = watcher_id_set_ptr;
  __for_begin._M_node = std::set<unsigned int>::begin(watcher_id_set_ptr)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      result = 0LL;
      goto LABEL_41;
    }
    v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v15;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v16->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "openLevel",
        448);
      v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v39,
              (const char (*)[35])"[MIST_TRIAL] findWatcherConfig id:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_23:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::~MiLogStream(&v39);
      goto LABEL_39;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/mist_trial_activity.cpp",
        "openLevel",
        453);
      v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v39,
              (const char (*)[25])"[MIST_TRIAL] watcher_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v21, (const char (*)[18])" already finished");
      common::milog::MiLogStream::~MiLogStream(&v39);
      goto LABEL_39;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->taken_watcher_id_set_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/mist_trial_activity.cpp",
        "openLevel",
        459);
      v22 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v39,
              (const char (*)[25])"[MIST_TRIAL] watcher_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 32));
      v19 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v23,
              (const char (*)[20])" taken reward, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_23;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v38, WatcherComp);
    v25 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v38);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v38);
    if ( !v25 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v26 = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::addWatcher(
        (PlayerWatcherComp *const)&v38,
        (const WatcherConfig *)v26,
        (uint32_t)watcher_config_ptr);
      v27 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v38);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v38);
      if ( v27 )
        break;
    }
LABEL_39:
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v39,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/mist_trial_activity.cpp",
    "openLevel",
    468);
  v28 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          &v39,
          (const char (*)[28])"[MIST_TRIAL] addWatcher id:");
  v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 32));
  v30 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v29, (const char (*)[14])" failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
  common::milog::MiLogStream::~MiLogStream(&v39);
  result = 0xFFFFFFFFLL;
LABEL_41:
  if ( v40 == (char *)v2 )
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

// Line 477: range 000000001456A420-000000001456A8FC
int32_t __cdecl MistTrialActivity::delMistTrialWatchers(MistTrialActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  uint32_t WatcherComp; // eax
  bool v8; // r14
  PlayerWatcherComp *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  std::map<unsigned int,MistTrialLevelData>::iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::map<unsigned int,MistTrialLevelData>::iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,MistTrialLevelData> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,MistTrialLevelData> *v17; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,MistTrialLevelData> >::type *level_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,MistTrialLevelData> >::type *_; // [rsp+48h] [rbp-B8h]
  const std::set<unsigned int> *watcher_id_set_ptr; // [rsp+50h] [rbp-B0h]
  const std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v22; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v23; // [rsp+70h] [rbp-90h] BYREF
  char v24[112]; // [rsp+90h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 watcher_id:486";
  *(_QWORD *)(v1 + 16) = MistTrialActivity::delMistTrialWatchers;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->level_data_map_;
  __for_begin._M_node = std::map<unsigned int,MistTrialLevelData>::begin(&this->level_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator*(&__for_begin);
    level_id = std::get<0ul,unsigned int const,MistTrialLevelData>(v17);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,MistTrialLevelData> >::type *)std::get<1ul,unsigned int const,MistTrialLevelData>(v17);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)level_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    watcher_id_set_ptr = ActivityMistTrialExcelConfigMgr::findWatcherIdSetByLevelId(
                           p_activity_mist_trial_config_mgr,
                           *level_id);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    if ( watcher_id_set_ptr )
    {
      __for_range_0 = watcher_id_set_ptr;
      __for_begin_0._M_node = std::set<unsigned int>::begin(watcher_id_set_ptr)._M_node;
      __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 32) = *v6;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v22, WatcherComp);
        v8 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v22);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v22);
        if ( v8 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v9 = Player::getWatcherComp(this->player_);
          PlayerWatcherComp::delWatcher(v9, *(_DWORD *)(v1 + 32));
        }
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/mist_trial_activity.cpp",
          "delMistTrialWatchers",
          492);
        v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v23,
                (const char (*)[38])"[MIST_TRIAL] del watcher, watcher_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v23);
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "delMistTrialWatchers",
        483);
      v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v23,
             (const char (*)[51])"[MIST_TRIAL] watcher_id_set_ptr is null, level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, level_id);
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v24 == (char *)v1 )
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

// Line 499: range 000000001456A8FE-000000001456AE1C
void __cdecl MistTrialActivity::registerObserver(MistTrialActivity *const this)
{
  unsigned __int64 v1; // r14
  __int64 v2; // rax
  _DWORD *v3; // r15
  PlayerEventComp *EventComp; // r12
  PlayerEventComp *v5; // rbx
  PlayerEventComp *v6; // rbx
  PlayerEventComp *v7; // rbx
  std::enable_shared_from_this<BaseActivity> v8; // [rsp+50h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+60h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+80h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:500 64 16 12 this_wtr:506";
  *(_QWORD *)(v1 + 16) = MistTrialActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v8);
  std::dynamic_pointer_cast<MistTrialActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v8);
  if ( std::operator==<MistTrialActivity>(0LL, (const std::shared_ptr<MistTrialActivity> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "registerObserver",
      503);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      &v9,
      (const char (*)[58])"[MIST_TRIAL] dynamic cast to MistTrialActivity ptr fails.");
    common::milog::MiLogStream::~MiLogStream(&v9);
  }
  else
  {
    std::weak_ptr<MistTrialActivity>::weak_ptr<MistTrialActivity,void>(
      (std::weak_ptr<MistTrialActivity> *const)(v1 + 64),
      (const std::shared_ptr<MistTrialActivity> *)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::weak_ptr<MistTrialActivity>::weak_ptr(
      (std::weak_ptr<MistTrialActivity> *const)&v8,
      (const std::weak_ptr<MistTrialActivity> *)(v1 + 64));
    PlayerEventComp::tryRegisterObserver<MistTrialActivity,GalleryMistTrialStartEvent>(
      EventComp,
      (std::weak_ptr<MistTrialActivity> *)&v8,
      (void (*)(MistTrialActivity *, const GalleryMistTrialStartEvent *))MistTrialActivity::onGalleryStartEvent,
      0LL);
    std::weak_ptr<MistTrialActivity>::~weak_ptr((std::weak_ptr<MistTrialActivity> *const)&v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = Player::getEventComp(this->player_);
    std::weak_ptr<MistTrialActivity>::weak_ptr(
      (std::weak_ptr<MistTrialActivity> *const)&v8,
      (const std::weak_ptr<MistTrialActivity> *)(v1 + 64));
    PlayerEventComp::tryRegisterObserver<MistTrialActivity,GalleryMistTrialSettleEvent>(
      v5,
      (std::weak_ptr<MistTrialActivity> *)&v8,
      (void (*)(MistTrialActivity *, const GalleryMistTrialSettleEvent *))MistTrialActivity::onGallerySettleEvent,
      0LL);
    std::weak_ptr<MistTrialActivity>::~weak_ptr((std::weak_ptr<MistTrialActivity> *const)&v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v6 = Player::getEventComp(this->player_);
    std::weak_ptr<MistTrialActivity>::weak_ptr(
      (std::weak_ptr<MistTrialActivity> *const)&v8,
      (const std::weak_ptr<MistTrialActivity> *)(v1 + 64));
    PlayerEventComp::tryRegisterObserver<MistTrialActivity,PostEnterSceneEvent>(
      v6,
      (std::weak_ptr<MistTrialActivity> *)&v8,
      (void (*)(MistTrialActivity *, const PostEnterSceneEvent *))MistTrialActivity::onPostEnterSceneEvent,
      0LL);
    std::weak_ptr<MistTrialActivity>::~weak_ptr((std::weak_ptr<MistTrialActivity> *const)&v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = Player::getEventComp(this->player_);
    std::weak_ptr<MistTrialActivity>::weak_ptr(
      (std::weak_ptr<MistTrialActivity> *const)&v8,
      (const std::weak_ptr<MistTrialActivity> *)(v1 + 64));
    PlayerEventComp::tryRegisterObserver<MistTrialActivity,LeaveSceneEvent>(
      v7,
      (std::weak_ptr<MistTrialActivity> *)&v8,
      (void (*)(MistTrialActivity *, const LeaveSceneEvent *))MistTrialActivity::onLeaveSceneEvent,
      0LL);
    std::weak_ptr<MistTrialActivity>::~weak_ptr((std::weak_ptr<MistTrialActivity> *const)&v8);
    std::weak_ptr<MistTrialActivity>::~weak_ptr((std::weak_ptr<MistTrialActivity> *const)(v1 + 64));
  }
  std::shared_ptr<MistTrialActivity>::~shared_ptr((std::shared_ptr<MistTrialActivity> *const)(v1 + 32));
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

// Line 514: range 000000001456AE1E-000000001456AF22
void __cdecl MistTrialActivity::unregisterObserver(MistTrialActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 526: range 000000001456AF24-000000001456B02B
void __cdecl MistTrialActivity::onGalleryStartEvent(
        MistTrialActivity *const this,
        const GalleryMistTrialStartEvent *event)
{
  common::milog::MiLogStream *v3; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v5,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/mist_trial_activity.cpp",
      "onGalleryStartEvent",
      533);
    v3 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v5,
           (const char (*)[51])"[MIST_TRIAL] mist_trial_test, onGalleryStartEvent:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v5);
  }
};

// Line 537: range 000000001456B02C-000000001456B2C9
void __cdecl MistTrialActivity::onGallerySettleEvent(
        MistTrialActivity *const this,
        const GalleryMistTrialSettleEvent *event)
{
  common::milog::MiLogStream *v3; // rbx
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // r12
  uint32_t dungeon_id; // ebx
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+18h] [rbp-48h] BYREF
  uint32_t level_id; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/mist_trial_activity.cpp",
      "onGallerySettleEvent",
      543);
    v3 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v13,
           (const char (*)[55])"[MIST_TRIAL] mist_trial_test, onGallerySettleEventuid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    dungeon_id = event->dungeon_id;
    ScheduleId = BaseActivity::getScheduleId(this);
    level_id = ActivityMistTrialExcelConfigMgr::findLevelIdByScheduleIdAndDungeonId(
                 p_activity_mist_trial_config_mgr,
                 ScheduleId,
                 dungeon_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( level_id )
    {
      MistTrialActivity::settleExhibitonData(this, event);
      MistTrialActivity::sendMistTrialSettleNotify(this, level_id);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "onGallerySettleEvent",
        547);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v13,
             (const char (*)[53])"[MISTTRIAL] activity_config not found, schedule_id: ");
      val = BaseActivity::getScheduleId(this);
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->dungeon_id);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
  }
};

// Line 559: range 000000001456B2CA-000000001456B9D9
__int64 __fastcall MistTrialActivity::sendMistTrialSettleNotify(
        const MistTrialActivity *const this,
        uint32_t trial_level_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  PlayerExhibitionComp *ExhibitionComp; // rcx
  int v11; // r14d
  unsigned int *v12; // rax
  _DWORD *v13; // rdx
  int v14; // r14d
  unsigned int *v15; // rax
  _DWORD *v16; // rdx
  proto::MistTrialBestAvatar *v17; // rax
  MistTrialBestAvatar *p_best_hit_avatar; // r14
  proto::MistTrialBestAvatar *v19; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-214h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-210h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-208h] BYREF
  const data::ActivityMistTrialLevelDataExcelConfig *activity_mist_trial_config_ptr; // [rsp+30h] [rbp-200h]
  google::protobuf::Map<unsigned int,unsigned int> *exhibition_record_map; // [rsp+38h] [rbp-1F8h]
  google::protobuf::Map<unsigned int,unsigned int> *exhibition_list_data_result_map; // [rsp+40h] [rbp-1F0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-1E8h]
  const MistTrialLevelData *level_data_ptr; // [rsp+50h] [rbp-1E0h]
  const std::vector<MistTrialBestAvatar> *__for_range_0; // [rsp+58h] [rbp-1D8h]
  const MistTrialBestAvatar *data; // [rsp+60h] [rbp-1D0h]
  const unsigned int *id; // [rsp+68h] [rbp-1C8h]
  std::shared_ptr<Config> v32; // [rsp+70h] [rbp-1C0h] BYREF
  common::milog::MiLogStream v33; // [rsp+80h] [rbp-1B0h] BYREF
  char v34[400]; // [rsp+A0h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 18 trial_level_id:558 48 12 9 param:573 80 208 10 notify:567";
  *(_QWORD *)(v2 + 16) = MistTrialActivity::sendMistTrialSettleNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862721] = 0x4000000;
  v4[536862722] = 62194;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
  *(_DWORD *)(v2 + 32) = trial_level_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  activity_mist_trial_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
                                     &v5->design_config.txt_config_mgr.activity_mist_trial_config_mgr,
                                     *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( activity_mist_trial_config_ptr )
  {
    proto::MistTrialSettleNotify::MistTrialSettleNotify((proto::MistTrialSettleNotify *const)(v2 + 80));
    if ( *(_BYTE *)(((unsigned __int64)&activity_mist_trial_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&activity_mist_trial_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::MistTrialSettleNotify::set_dungeon_scene_id(
      (proto::MistTrialSettleNotify *const)(v2 + 80),
      activity_mist_trial_config_ptr->dungeon_id);
    exhibition_record_map = proto::MistTrialSettleNotify::mutable_exhibition_list_data_record_map((proto::MistTrialSettleNotify *const)(v2 + 80));
    exhibition_list_data_result_map = proto::MistTrialSettleNotify::mutable_exhibition_list_data_result_map((proto::MistTrialSettleNotify *const)(v2 + 80));
    __for_range = &activity_mist_trial_config_ptr->battle_statistics_data;
    __for_begin._M_current = std::vector<unsigned int>::begin(&activity_mist_trial_config_ptr->battle_statistics_data)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&activity_mist_trial_config_ptr->battle_statistics_data)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ExhibitionComp = Player::getExhibitionComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(ExhibitionListDataParam *)(v2 + 48) = PlayerExhibitionComp::getExhibitionListDataParam(ExhibitionComp, *id);
      v11 = *(_DWORD *)(v2 + 52);
      v12 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
              exhibition_record_map,
              (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v12);
      }
      *v13 = v11;
      v14 = *(_DWORD *)(v2 + 56);
      v15 = google::protobuf::Map<unsigned int,unsigned int>::operator[](
              exhibition_list_data_result_map,
              (const google::protobuf::Map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      v16 = v15;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v15);
      }
      *v16 = v14;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    level_data_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,MistTrialLevelData> const>(
                       &this->level_data_map_,
                       (const std::map<unsigned int,MistTrialLevelData>::key_type *)(v2 + 32));
    if ( level_data_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&level_data_ptr->first_pass_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)level_data_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data_ptr->first_pass_time >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::MistTrialSettleNotify::set_first_pass_time(
        (proto::MistTrialSettleNotify *const)(v2 + 80),
        level_data_ptr->first_pass_time);
      __for_range_0 = &level_data_ptr->best_avatar_vec;
      __for_begin._M_current = (const unsigned int *)std::vector<MistTrialBestAvatar>::begin(&level_data_ptr->best_avatar_vec)._M_current;
      __for_end._M_current = (const unsigned int *)std::vector<MistTrialBestAvatar>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>(
                (const __gnu_cxx::__normal_iterator<const MistTrialBestAvatar*,std::vector<MistTrialBestAvatar> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<const MistTrialBestAvatar*,std::vector<MistTrialBestAvatar> > *)&__for_end) )
      {
        data = __gnu_cxx::__normal_iterator<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>::operator*((const __gnu_cxx::__normal_iterator<const MistTrialBestAvatar*,std::vector<MistTrialBestAvatar> > *const)&__for_begin);
        v17 = proto::MistTrialSettleNotify::add_best_avatar_list((proto::MistTrialSettleNotify *const)(v2 + 80));
        MistTrialBestAvatar::toClient(data, v17);
        __gnu_cxx::__normal_iterator<MistTrialBestAvatar const*,std::vector<MistTrialBestAvatar>>::operator++((__gnu_cxx::__normal_iterator<const MistTrialBestAvatar*,std::vector<MistTrialBestAvatar> > *const)&__for_begin);
      }
      p_best_hit_avatar = &level_data_ptr->best_hit_avatar;
      v19 = proto::MistTrialSettleNotify::mutable_best_hit_avatar((proto::MistTrialSettleNotify *const)(v2 + 80));
      MistTrialBestAvatar::toClient(p_best_hit_avatar, v19);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 80));
    v9 = 0;
    proto::MistTrialSettleNotify::~MistTrialSettleNotify((proto::MistTrialSettleNotify *const)(v2 + 80));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "sendMistTrialSettleNotify",
      563);
    v6 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           &v33,
           (const char (*)[68])"[MISTTRIAL] activity_mist_trial_config_ptr not found, schedule_id: ");
    val = BaseActivity::getScheduleId(this);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v7, (const char (*)[18])", trial_level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v33);
    v9 = 5;
  }
  result = v9;
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
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

// Line 593: range 000000001456B9DA-000000001456D0CC
void __cdecl MistTrialActivity::settleExhibitonData(
        MistTrialActivity *const this,
        const GalleryMistTrialSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  uint32_t DungeonId; // r15d
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::pointer v34; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  PlayerExhibitionComp *p_duration_time; // rdi
  uint32_t duration_time; // ecx
  PlayerExhibitionComp *v38; // rcx
  DungeonScene *v39; // rax
  PlayerExhibitionComp *v41; // r14
  DungeonScene *v42; // rax
  uint32_t MistTrialDamageBeared; // ecx
  PlayerExhibitionComp *v44; // rcx
  DungeonScene *v45; // rax
  PlayerExhibitionComp *v47; // r14
  DungeonScene *v48; // rax
  uint32_t MistTrialStrongestBlow; // ecx
  DungeonScene *v50; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t AvatarId; // edx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rdx
  proto::AvatarType v56; // ecx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  uint32_t CostumeId; // edx
  PlayerExhibitionComp *v59; // r14
  DungeonScene *v60; // rax
  PlayerExhibitionComp *v61; // r14
  DungeonScene *v62; // rax
  uint32_t MistTrialElementBurstCount; // ecx
  PlayerExhibitionComp *p_dungeon_id; // rdi
  uint32_t Now; // edi
  unsigned __int64 v66; // rax
  PlayerAvatarComp *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v77; // rax
  bool is_shortest_duration; // [rsp+2Bh] [rbp-1A5h]
  unsigned int shortesat_success_time; // [rsp+2Ch] [rbp-1A4h]
  unsigned int least_beared_damage; // [rsp+30h] [rbp-1A0h]
  uint32_t strongest_blow; // [rsp+34h] [rbp-19Ch]
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-198h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+40h] [rbp-190h] BYREF
  MistTrialLevelData *level_data; // [rsp+48h] [rbp-188h]
  uint64_t best_hit_avatar_guid; // [rsp+50h] [rbp-180h]
  std::vector<long unsigned int> *__for_range; // [rsp+58h] [rbp-178h]
  common::milog::MiLogStream v88; // [rsp+60h] [rbp-170h] BYREF
  std::unordered_map<data::ElementReactionType,unsigned int> type_cnt_map; // [rsp+80h] [rbp-150h] BYREF
  char v90[272]; // [rsp+C0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v90;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 4 18 trial_level_id:620 64 8 14 level_iter:621 96 8 8 guid:695 128 12 15 best_avatar:703 16"
                        "0 16 21 dungeon_scene_ptr:601 192 16 14 avatar_ptr:697";
  *(_QWORD *)(v2 + 16) = MistTrialActivity::settleExhibitonData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -219020288;
  v4[536862725] = -219021312;
  v4[536862726] = -202178560;
  common::milog::MiLogStream::create(
    &v88,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/mist_trial_activity.cpp",
    "settleExhibitonData",
    594);
  v5 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
         &v88,
         (const char (*)[62])"[MIST_TRIAL] mist_trial_test, settleExhibitonData begin, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v88);
  if ( *(char *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_success);
  if ( !event->is_success )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/mist_trial_activity.cpp",
      "settleExhibitonData",
      597);
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      &v88,
      (const char (*)[55])"MistTrialActivity::settleExhibitonData is not success.");
    common::milog::MiLogStream::~MiLogStream(&v88);
    goto LABEL_131;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 160));
  if ( std::operator==<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v2 + 160), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v88,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "settleExhibitonData",
      604);
    v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v88,
           (const char (*)[56])"cur_scene is not dungeon_scene! event.dungeon_scene_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &event->dungeon_scene_id);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    SceneId = Scene::getSceneId((const Scene *const)v9);
    if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->dungeon_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( SceneId == event->dungeon_scene_id )
    {
      v16 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      if ( DungeonScene::isSettledAndSuccess(v16) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 192));
        p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
        v23 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        DungeonId = DungeonScene::getDungeonId(v23);
        ScheduleId = BaseActivity::getScheduleId(this);
        *(_DWORD *)(v2 + 48) = ActivityMistTrialExcelConfigMgr::findLevelIdByScheduleIdAndDungeonId(
                                 p_activity_mist_trial_config_mgr,
                                 ScheduleId,
                                 DungeonId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
        *(std::map<unsigned int,MistTrialLevelData>::iterator *)(v2 + 64) = std::map<unsigned int,MistTrialLevelData>::find(
                                                                              &this->level_data_map_,
                                                                              (const std::map<unsigned int,MistTrialLevelData>::key_type *)(v2 + 48));
        __for_end._M_current = (unsigned __int64 *)std::map<unsigned int,MistTrialLevelData>::end(&this->level_data_map_)._M_node;
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self *)(v2 + 64),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> >::_Self *)&__for_end) )
        {
          common::milog::MiLogStream::create(
            &v88,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/mist_trial_activity.cpp",
            "settleExhibitonData",
            624);
          v26 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v88,
                  (const char (*)[27])"level not found! level_id:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v2 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v27,
                  (const char (*)[16])" dungeon_scene:");
          v29 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          v30 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v28, v29);
          v31 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v30,
                  (const char (*)[25])" event.dungeon_scene_id:");
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &event->dungeon_scene_id);
          v33 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v32, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v33, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v88);
        }
        else
        {
          v34 = std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,MistTrialLevelData> > *const)(v2 + 64));
          level_data = &v34->second;
          if ( *(_BYTE *)(((unsigned __int64)&v34->second.success_times >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v34->second.success_times >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ++level_data->success_times;
          is_shortest_duration = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ExhibitionComp = Player::getExhibitionComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          shortesat_success_time = PlayerExhibitionComp::getReplaceableValueWithParam(
                                     ExhibitionComp,
                                     event->dungeon_id,
                                     EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_SHORTEST_SUCCESS_TIME);
          if ( *(_BYTE *)(((unsigned __int64)&level_data->success_times >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_data->success_times >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( level_data->success_times == 1 )
            goto LABEL_42;
          if ( *(_BYTE *)(((unsigned __int64)&event->duration_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->duration_time >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( shortesat_success_time > event->duration_time )
          {
LABEL_42:
            is_shortest_duration = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            p_duration_time = Player::getExhibitionComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&event->duration_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->duration_time >> 3)
                                                                   + 0x7FFF8000) )
            {
              p_duration_time = (PlayerExhibitionComp *)&event->duration_time;
              __asan_report_load4();
            }
            duration_time = event->duration_time;
            if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                   + 0x7FFF8000) )
            {
              p_duration_time = (PlayerExhibitionComp *)&event->dungeon_id;
              __asan_report_load4();
            }
            PlayerExhibitionComp::setReplaceableDataWithParam(
              p_duration_time,
              event->dungeon_id,
              EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_SHORTEST_SUCCESS_TIME,
              duration_time);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v38 = Player::getExhibitionComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          least_beared_damage = PlayerExhibitionComp::getReplaceableValueWithParam(
                                  v38,
                                  event->dungeon_id,
                                  EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_LEAST_TAKE_DAMAGE);
          if ( *(_BYTE *)(((unsigned __int64)&level_data->success_times >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_data->success_times >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( level_data->success_times == 1
            || (v39 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160)),
                least_beared_damage > DungeonScene::getMistTrialDamageBeared(v39)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v41 = Player::getExhibitionComp(this->player_);
            v42 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            MistTrialDamageBeared = DungeonScene::getMistTrialDamageBeared(v42);
            if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            PlayerExhibitionComp::setReplaceableDataWithParam(
              v41,
              event->dungeon_id,
              EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_LEAST_TAKE_DAMAGE,
              MistTrialDamageBeared);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v44 = Player::getExhibitionComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          strongest_blow = PlayerExhibitionComp::getReplaceableValueWithParam(
                             v44,
                             event->dungeon_id,
                             EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_STRONGEST_BLOW);
          if ( *(_BYTE *)(((unsigned __int64)&level_data->success_times >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&level_data->success_times >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( level_data->success_times == 1
            || (v45 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160)),
                strongest_blow < DungeonScene::getMistTrialStrongestBlow(v45)) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v47 = Player::getExhibitionComp(this->player_);
            v48 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            MistTrialStrongestBlow = DungeonScene::getMistTrialStrongestBlow(v48);
            if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            PlayerExhibitionComp::setMaxReplaceableDataWithParam(
              v47,
              event->dungeon_id,
              EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_STRONGEST_BLOW,
              MistTrialStrongestBlow);
            v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            best_hit_avatar_guid = DungeonScene::getMistTrialStrongestBlowAvatarGuid(v50);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            AvatarComp = Player::getAvatarComp(this->player_);
            PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 192), (uint64_t)AvatarComp);
            if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 192)) )
            {
              v52 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              AvatarId = Avatar::getAvatarId(v52);
              if ( *(_BYTE *)(((unsigned __int64)&level_data->best_hit_avatar >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_data->best_hit_avatar >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&level_data->best_hit_avatar);
              }
              level_data->best_hit_avatar.avatar_id = AvatarId;
              v54 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              if ( *(_BYTE *)((v54 >> 3) + 0x7FFF8000) )
                v54 = __asan_report_load8();
              v55 = *(_QWORD *)v54 + 400LL;
              if ( *(_BYTE *)((v55 >> 3) + 0x7FFF8000) )
                v54 = __asan_report_load8();
              v56 = (*(unsigned int (__fastcall **)(unsigned __int64))v55)(v54);
              if ( *(_BYTE *)(((unsigned __int64)&level_data->best_hit_avatar.avatar_type >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)level_data + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->best_hit_avatar.avatar_type >> 3)
                                                                          + 0x7FFF8000) )
              {
                __asan_report_store4(&level_data->best_hit_avatar.avatar_type);
              }
              level_data->best_hit_avatar.avatar_type = v56;
              v57 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
              CostumeId = Avatar::getCostumeId(v57);
              if ( *(_BYTE *)(((unsigned __int64)&level_data->best_hit_avatar.costume_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&level_data->best_hit_avatar.costume_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_store4(&level_data->best_hit_avatar.costume_id);
              }
              level_data->best_hit_avatar.costume_id = CostumeId;
            }
            std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 192));
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v59 = Player::getExhibitionComp(this->player_);
          v60 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          DungeonScene::getMistTrialElementReactionCount(&type_cnt_map, v60);
          if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::setMaxReplaceableDataByMapWithParam(
            v59,
            event->dungeon_id,
            EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_ELEMENT_REACTION_COUNT,
            &type_cnt_map);
          std::unordered_map<data::ElementReactionType,unsigned int>::~unordered_map(&type_cnt_map);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v61 = Player::getExhibitionComp(this->player_);
          v62 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          MistTrialElementBurstCount = DungeonScene::getMistTrialElementBurstCount(v62);
          if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          PlayerExhibitionComp::setMaxReplaceableDataWithParam(
            v61,
            event->dungeon_id,
            EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_ELEMENT_BURST_COUNT,
            MistTrialElementBurstCount);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          p_dungeon_id = Player::getExhibitionComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3)
                                                                 + 0x7FFF8000) )
          {
            p_dungeon_id = (PlayerExhibitionComp *)&event->dungeon_id;
            __asan_report_load4();
          }
          PlayerExhibitionComp::addSuccessTimesWithParam(
            p_dungeon_id,
            event->dungeon_id,
            EXHIBITION_SERVER_TRIGGER_MIST_TRIAL_SUCCESS,
            1u);
          if ( *(_BYTE *)(((unsigned __int64)&level_data->first_pass_time >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->first_pass_time >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( !level_data->first_pass_time )
          {
            Now = common::tools::TimeUtils::getNow();
            if ( *(_BYTE *)(((unsigned __int64)&level_data->first_pass_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)level_data + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_data->first_pass_time >> 3)
                                                                        + 0x7FFF8000) )
            {
              Now = (_DWORD)level_data + 20;
              __asan_report_store4(&level_data->first_pass_time);
            }
            level_data->first_pass_time = Now;
          }
          if ( is_shortest_duration )
          {
            std::vector<MistTrialBestAvatar>::clear(&level_data->best_avatar_vec);
            __for_range = &this->informal_avatar_guid_vec_;
            __for_begin._M_current = std::vector<unsigned long>::begin(&this->informal_avatar_guid_vec_)._M_current;
            __for_end._M_current = std::vector<unsigned long>::end(__for_range)._M_current;
            while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
            {
              v66 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
              if ( *(_BYTE *)((v66 >> 3) + 0x7FFF8000) )
                v66 = __asan_report_load8();
              *(_QWORD *)(v2 + 96) = *(_QWORD *)v66;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v67 = Player::getAvatarComp(this->player_);
              PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v2 + 192), (uint64_t)v67);
              if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 192)) )
              {
                common::milog::MiLogStream::create(
                  &v88,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "settleExhibitonData",
                  700);
                v68 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                        &v88,
                        (const char (*)[23])"findAvatar find, guid:");
                v69 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v68,
                        (const unsigned __int64 *)(v2 + 96));
                v70 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        v69,
                        (const char (*)[16])" dungeon_scene:");
                v71 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                v72 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v70, v71);
                v73 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v72, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                operator<<(v73, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v88);
              }
              else
              {
                *(_DWORD *)(v2 + 128) = 0;
                *(_DWORD *)(v2 + 132) = 0;
                *(_DWORD *)(v2 + 136) = 0;
                v74 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                *(_DWORD *)(v2 + 128) = Avatar::getAvatarId(v74);
                v75 = (unsigned __int64)std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                if ( *(_BYTE *)((v75 >> 3) + 0x7FFF8000) )
                  v75 = __asan_report_load8();
                v76 = *(_QWORD *)v75 + 400LL;
                if ( *(_BYTE *)((v76 >> 3) + 0x7FFF8000) )
                  v75 = __asan_report_load8();
                *(_DWORD *)(v2 + 132) = (*(__int64 (__fastcall **)(unsigned __int64))v76)(v75);
                v77 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
                *(_DWORD *)(v2 + 136) = Avatar::getCostumeId(v77);
                std::vector<MistTrialBestAvatar>::push_back(
                  &level_data->best_avatar_vec,
                  (const std::vector<MistTrialBestAvatar>::value_type *)(v2 + 128));
              }
              std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 192));
              __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
            }
          }
        }
        goto LABEL_130;
      }
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "settleExhibitonData",
        616);
      v17 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v88,
              (const char (*)[36])"dungeon not success! dungeon_scene:");
      v18 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v19 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v17, v18);
      v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v19,
              (const char (*)[25])" event.dungeon_scene_id:");
      v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &event->dungeon_scene_id);
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v88,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "settleExhibitonData",
        610);
      v11 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v88,
              (const char (*)[35])"scene_id not match! dungeon_scene:");
      v12 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
      v13 = common::milog::MiLogStream::operator<<<DungeonScene,(DungeonScene*)0>(v11, v12);
      v14 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v13,
              (const char (*)[25])" event.dungeon_scene_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &event->dungeon_scene_id);
      v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
  }
  operator<<(v8, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v88);
LABEL_130:
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 160));
LABEL_131:
  if ( v90 == (char *)v2 )
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
};

// Line 713: range 000000001456D0CE-000000001456DAAB
void __cdecl MistTrialActivity::onPostEnterSceneEvent(MistTrialActivity *const this, const PostEnterSceneEvent *event)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  DungeonScene *v7; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  ActivityMistTrialExcelConfigMgr *p_activity_mist_trial_config_mgr; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t DungeonId; // r15d
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  AbilityComp *AbilityComp; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned int val; // [rsp+24h] [rbp-11Ch] BYREF
  const data::ActivityMistTrialLevelDataExcelConfig *activity_mist_trial_config_ptr; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v31; // [rsp+30h] [rbp-110h] BYREF
  char v32[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 12 level_id:727 48 4 15 floor_level:746 64 16 21 dungeon_scene_ptr:719 96 16 12 team_ptr:"
                        "740 128 32 10 notify:753";
  *(_QWORD *)(v3 + 16) = MistTrialActivity::onPostEnterSceneEvent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -202116109;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v3 + 64));
    if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 64), 0LL)
      && (v7 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
          DungeonScene::isEnterByMistTrialActivity(v7)) )
    {
      v9 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      SceneId = Scene::getSceneId((const Scene *const)v9);
      if ( *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        *(double *)v2.m128i_i64 = __asan_report_load4();
      }
      if ( SceneId == event->dst_scene_id )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 96));
        p_activity_mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96))->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
        v14 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        DungeonId = DungeonScene::getDungeonId(v14);
        ScheduleId = BaseActivity::getScheduleId(this);
        *(_DWORD *)(v3 + 32) = ActivityMistTrialExcelConfigMgr::findLevelIdByScheduleIdAndDungeonId(
                                 p_activity_mist_trial_config_mgr,
                                 ScheduleId,
                                 DungeonId);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
        if ( *(_DWORD *)(v3 + 32) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 96));
          v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          activity_mist_trial_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
                                             &v21->design_config.txt_config_mgr.activity_mist_trial_config_mgr,
                                             *(_DWORD *)(v3 + 32));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
          if ( activity_mist_trial_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            Player::getAvatarComp(this->player_);
            PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v3 + 96));
            if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v3 + 96)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/mist_trial_activity.cpp",
                "onPostEnterSceneEvent",
                743);
              v23 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v31,
                      (const char (*)[39])"getTeamEntity team_ptr is null, [uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
              v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v23,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v24, (const char (*)[2])"]");
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              v25 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
              AbilityComp = Creature::getAbilityComp(v25);
              *(float *)v2.m128i_i32 = AbilityComp::getDynamicValue<float>(
                                         AbilityComp,
                                         &activity_mist_trial_config_ptr->server_global_value_key);
              *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(v2);
              if ( *(float *)(v3 + 48) == 0.0 )
              {
                common::milog::MiLogStream::create(
                  &v31,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onPostEnterSceneEvent",
                  749);
                common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                  &v31,
                  (const char (*)[61])"[MIST_TRIAL] onPostEnterSceneEvent, cur floor level is zero ");
                common::milog::MiLogStream::~MiLogStream(&v31);
              }
              else
              {
                proto::MistTrialFloorLevelNotify::MistTrialFloorLevelNotify((proto::MistTrialFloorLevelNotify *const)(v3 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&activity_mist_trial_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&activity_mist_trial_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                proto::MistTrialFloorLevelNotify::set_dungeon_scene_id(
                  (proto::MistTrialFloorLevelNotify *const)(v3 + 128),
                  activity_mist_trial_config_ptr->dungeon_id);
                proto::MistTrialFloorLevelNotify::set_floor_level(
                  (proto::MistTrialFloorLevelNotify *const)(v3 + 128),
                  (int)*(float *)(v3 + 48));
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 128));
                common::milog::MiLogStream::create(
                  &v31,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onPostEnterSceneEvent",
                  757);
                v27 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        &v31,
                        (const char (*)[55])"[MIST_TRIAL] onPostEnterSceneEvent, cur floor level = ");
                common::milog::MiLogStream::operator<<<float,(float *)0>(v27, (const float *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v31);
                proto::MistTrialFloorLevelNotify::~MistTrialFloorLevelNotify((proto::MistTrialFloorLevelNotify *const)(v3 + 128));
              }
            }
            std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v3 + 96));
          }
          else
          {
            common::milog::MiLogStream::create(
              &v31,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/mist_trial_activity.cpp",
              "onPostEnterSceneEvent",
              736);
            v22 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    &v31,
                    (const char (*)[65])"[MISTTRIAL] activity_mist_trial_config_ptr not found, level_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v31);
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/mist_trial_activity.cpp",
            "onPostEnterSceneEvent",
            730);
          v17 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                  &v31,
                  (const char (*)[53])"[MISTTRIAL] activity_config not found, schedule_id: ");
          val = BaseActivity::getScheduleId(this);
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v18,
                  (const char (*)[14])", dungeon_id:");
          v20 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          *(_DWORD *)(v3 + 48) = DungeonScene::getDungeonId(v20);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v31);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/mist_trial_activity.cpp",
          "onPostEnterSceneEvent",
          724);
        v11 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                &v31,
                (const char (*)[63])"[MISTTRIAL]  cur dungeon scene_id not equal event.dst_scene_id");
        v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                v11,
                (const char (*)[24])", event.dst_scene_id = ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->dst_scene_id);
        common::milog::MiLogStream::~MiLogStream(&v31);
      }
    }
    else if ( !std::vector<unsigned long>::empty(&this->informal_avatar_guid_vec_) )
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "onPostEnterSceneEvent",
        761);
      v28 = common::milog::MiLogStream::operator<<<char [94],(char *[94])0>(
              &v31,
              (const char (*)[94])"informal avatars not delete in onLeaveSceneEvent, try delete again, informal_avatar_guid_vec:");
      common::milog::MiLogStream::operator<<<unsigned long>(v28, &this->informal_avatar_guid_vec_);
      common::milog::MiLogStream::~MiLogStream(&v31);
      MistTrialActivity::checkRecallDungeonAvatars(this);
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 64));
  }
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 767: range 000000001456DAAC-000000001456DC23
void __cdecl MistTrialActivity::onLeaveSceneEvent(MistTrialActivity *const this, const LeaveSceneEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  DungeonScene *v5; // rax
  char v6[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 21 dungeon_scene_ptr:768";
  *(_QWORD *)(v2 + 16) = MistTrialActivity::onLeaveSceneEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene<DungeonScene>((PlayerSceneComp *const)(v2 + 32));
  if ( !std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v2 + 32)) )
  {
    v5 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( DungeonScene::isEnterByMistTrialActivity(v5) )
      MistTrialActivity::checkRecallDungeonAvatars(this);
  }
  std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v2 + 32));
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

// Line 780: range 000000001456E08A-000000001456FA85
int32_t __cdecl MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(
        MistTrialActivity *const this,
        const proto::MistTrialSelectAvatarAndEnterDungeonReq *req)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::DetailCase v10; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  const proto::TrialAvatarGrantRecordBin *GrantRecordBin; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // r15d
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // r15d
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  DungeonScene *v35; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  common::milog::MiLogStream *v39; // r14
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rax
  Avatar *v41; // rax
  PlayerDungeonComp *DungeonComp; // r14
  __int32 v43; // r8d
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rcx
  std::vector<MistTrialSelectAvatarIndex> *v49; // rax
  DungeonScene *v50; // rax
  DungeonScene *v51; // r14
  DungeonScene *v52; // r14
  PlayerAvatarComp *AvatarComp; // rax
  DungeonScene *v54; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  uint32_t mist_trial_avatar_id; // [rsp+28h] [rbp-2B8h]
  __int32 scene_id; // [rsp+2Ch] [rbp-2B4h]
  google::protobuf::RepeatedPtrField<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex>::const_iterator __for_begin_0; // [rsp+30h] [rbp-2B0h] BYREF
  google::protobuf::RepeatedPtrField<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex>::const_iterator __for_end_0; // [rsp+38h] [rbp-2A8h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-2A0h]
  const ActivityMistTrialExcelConfigMgr *mist_trial_config_mgr; // [rsp+48h] [rbp-298h]
  const data::ActivityMistTrialLevelDataExcelConfig *trial_level_config_ptr; // [rsp+50h] [rbp-290h]
  const google::protobuf::RepeatedPtrField<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex> *__for_range_0; // [rsp+58h] [rbp-288h]
  const proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex *proto_select_avatar_index; // [rsp+60h] [rbp-280h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+68h] [rbp-278h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+70h] [rbp-270h]
  PlayerAvatarComp *avatar_comp; // [rsp+78h] [rbp-268h]
  std::vector<MistTrialSelectAvatarIndex> *__for_range_1; // [rsp+80h] [rbp-260h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *enter_dungeon_retcode; // [rsp+88h] [rbp-258h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+90h] [rbp-250h]
  const MistTrialSelectAvatarIndex *select_avatar_index; // [rsp+98h] [rbp-248h]
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+A0h] [rbp-240h] BYREF
  EnterDungeonOption v74; // [rsp+C0h] [rbp-220h] BYREF
  common::milog::MiLogStream v75; // [rsp+E0h] [rbp-200h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+100h] [rbp-1E0h] BYREF
  char v77[432]; // [rsp+130h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 12 trial_id:789 64 4 19 dungeon_context:935 80 16 17 cur_scene_ptr:893 112 16 15 dungeon_"
                        "ptr:906 144 16 27 mist_trial_activity_wtr:938 176 16 18 base_event_ptr:973 208 16 23 select_avat"
                        "ar_index:807 240 24 27 select_avatar_index_vec:802 304 48 17 avatar_id_set:842";
  *(_QWORD *)(v3 + 16) = MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v75,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/mist_trial_activity.cpp",
      "onMistTrialSelectAvatarAndEnterDungeonReq",
      784);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      &v75,
      (const char (*)[34])"[MIST_TRIAL] is not in self world");
    common::milog::MiLogStream::~MiLogStream(&v75);
    v2 = 512;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 208));
    mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208))->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
    *(_DWORD *)(v3 + 48) = proto::MistTrialSelectAvatarAndEnterDungeonReq::trial_id(req);
    if ( !MistTrialActivity::isTrialLevelOpen(this, *(_DWORD *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v75,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "onMistTrialSelectAvatarAndEnterDungeonReq",
        792);
      v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v75,
             (const char (*)[48])"[MIST_TRIAL] trial level is not open, trial_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v75);
      v2 = -1;
    }
    else
    {
      trial_level_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialLevelDataExcelConfig(
                                 mist_trial_config_mgr,
                                 *(_DWORD *)(v3 + 48));
      if ( trial_level_config_ptr )
      {
        std::vector<MistTrialSelectAvatarIndex>::vector((std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240));
        v9 = proto::MistTrialSelectAvatarAndEnterDungeonReq::select_trial_avatar_id_list(req);
        if ( !google::protobuf::RepeatedField<unsigned int>::empty(v9) )
        {
          __for_range = proto::MistTrialSelectAvatarAndEnterDungeonReq::select_trial_avatar_id_list(req);
          __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
          __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
          while ( __for_begin != __for_end )
          {
            if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            mist_trial_avatar_id = *__for_begin;
            *(_DWORD *)(v3 + 208) = 0;
            *(_QWORD *)(v3 + 216) = 0LL;
            *(_DWORD *)(v3 + 208) = mist_trial_avatar_id;
            std::vector<MistTrialSelectAvatarIndex>::push_back(
              (std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240),
              (const std::vector<MistTrialSelectAvatarIndex>::value_type *)(v3 + 208));
            ++__for_begin;
          }
        }
        else
        {
          __for_range_0 = proto::MistTrialSelectAvatarAndEnterDungeonReq::select_avatar_index_list(req);
          __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex>::begin(__for_range_0).it_;
          __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex>::end(__for_range_0).it_;
          while ( google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex const>::operator!=(
                    &__for_begin_0,
                    &__for_end_0) )
          {
            proto_select_avatar_index = google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex const>::operator*(&__for_begin_0);
            *(_DWORD *)(v3 + 208) = 0;
            *(_QWORD *)(v3 + 216) = 0LL;
            v10 = proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::detail_case(proto_select_avatar_index);
            if ( v10 == kFormalAvatarGuid )
            {
              *(_QWORD *)(v3 + 216) = proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::formal_avatar_guid(proto_select_avatar_index);
            }
            else
            {
              if ( v10 != kMistTrialAvatarId )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onMistTrialSelectAvatarAndEnterDungeonReq",
                  826);
                v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v75,
                        (const char (*)[34])"[MIST_TRIAL] invalid detail_case:");
                *(_DWORD *)(v3 + 64) = proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::detail_case(proto_select_avatar_index);
                common::milog::MiLogStream::operator<<<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::DetailCase,(proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::DetailCase*)0>(
                  v11,
                  (const proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::DetailCase *)(v3 + 64));
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = -1;
                goto LABEL_108;
              }
              *(_DWORD *)(v3 + 208) = proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex::mist_trial_avatar_id(proto_select_avatar_index);
            }
            std::vector<MistTrialSelectAvatarIndex>::push_back(
              (std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240),
              (const std::vector<MistTrialSelectAvatarIndex>::value_type *)(v3 + 208));
            google::protobuf::internal::RepeatedPtrIterator<proto::MistTrialSelectAvatarAndEnterDungeonReq_SelectAvatarIndex const>::operator++(&__for_begin_0);
          }
        }
        if ( std::vector<MistTrialSelectAvatarIndex>::empty((const std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240))
          || std::vector<MistTrialSelectAvatarIndex>::size((const std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240)) > 4 )
        {
          common::milog::MiLogStream::create(
            &v75,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/mist_trial_activity.cpp",
            "onMistTrialSelectAvatarAndEnterDungeonReq",
            835);
          v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v75,
                  (const char (*)[62])"[MIST_TRIAL] select_avatar_index_vec size is invalid, size = ");
          __for_end_0.it_ = (void *const *)std::vector<MistTrialSelectAvatarIndex>::size((const std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240));
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v13,
            (const unsigned __int64 *)&__for_end_0);
          common::milog::MiLogStream::~MiLogStream(&v75);
          v2 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          avatar_comp = Player::getAvatarComp(this->player_);
          std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 304));
          __for_range_1 = (std::vector<MistTrialSelectAvatarIndex> *)(v3 + 240);
          __for_begin_0.it_ = (void *const *)std::vector<MistTrialSelectAvatarIndex>::begin((std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240))._M_current;
          __for_end_0.it_ = (void *const *)std::vector<MistTrialSelectAvatarIndex>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<MistTrialSelectAvatarIndex *,std::vector<MistTrialSelectAvatarIndex>>(
                    (const __gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex*,std::vector<MistTrialSelectAvatarIndex> > *)&__for_begin_0,
                    (const __gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex*,std::vector<MistTrialSelectAvatarIndex> > *)&__for_end_0) )
          {
            select_avatar_index = __gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex *,std::vector<MistTrialSelectAvatarIndex>>::operator*((const __gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex*,std::vector<MistTrialSelectAvatarIndex> > *const)&__for_begin_0);
            if ( *(_BYTE *)(((unsigned __int64)select_avatar_index >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)select_avatar_index >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            if ( select_avatar_index->mist_trial_avatar_id )
            {
              *(_DWORD *)(v3 + 64) = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                                       &trial_level_config_ptr->mist_trial_avatar_id_map,
                                       &select_avatar_index->mist_trial_avatar_id,
                                       0);
              if ( !*(_DWORD *)(v3 + 64) )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onMistTrialSelectAvatarAndEnterDungeonReq",
                  850);
                v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                        &v75,
                        (const char (*)[43])"[MIST_TRIAL] invalid mist_trial_avatar_id:");
                v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v14,
                        &select_avatar_index->mist_trial_avatar_id);
                v16 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v15,
                        (const char (*)[17])" trial_level_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = -1;
                goto LABEL_107;
              }
              PlayerAvatarComp::findTrialAvatarByAvatarId(
                (const PlayerAvatarComp *const)(v3 + 208),
                (uint32_t)avatar_comp);
              if ( std::operator!=<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v3 + 208))
                && (v17 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208)),
                    GrantRecordBin = TrialAvatar::getGrantRecordBin(v17),
                    proto::TrialAvatarGrantRecordBin::grant_reason(GrantRecordBin) != 4) )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onMistTrialSelectAvatarAndEnterDungeonReq",
                  856);
                v20 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                        &v75,
                        (const char (*)[68])"[MIST_TRIAL] already has another same-name trial_avatar, avatar_id:");
                v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v20,
                        (const unsigned int *)(v3 + 64));
                v22 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v21,
                        (const char (*)[17])" trial_level_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = 9151;
                v23 = 0;
              }
              else
              {
                v24 = std::set<unsigned int>::insert(
                        (std::set<unsigned int> *const)(v3 + 304),
                        (const std::set<unsigned int>::value_type *)(v3 + 64));
                if ( !v24.second )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/mist_trial_activity.cpp",
                    "onMistTrialSelectAvatarAndEnterDungeonReq",
                    861);
                  v25 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          &v75,
                          (const char (*)[34])"[MIST_TRIAL] duplicate avatar_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v3 + 64));
                  common::milog::MiLogStream::~MiLogStream(&v75);
                  v2 = -1;
                  v23 = 0;
                }
                else
                {
                  v23 = 1;
                }
              }
              std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v3 + 208));
              if ( v23 != 1 )
                goto LABEL_107;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&select_avatar_index->formal_avatar_guid >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( !select_avatar_index->formal_avatar_guid )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onMistTrialSelectAvatarAndEnterDungeonReq",
                  887);
                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v75,
                  (const char (*)[28])"invalid select_avatar_index");
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = -1;
                goto LABEL_107;
              }
              PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 208), (uint64_t)avatar_comp);
              if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 208)) )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onMistTrialSelectAvatarAndEnterDungeonReq",
                  870);
                v26 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        &v75,
                        (const char (*)[42])"[MIST_TRIAL] findFormalAvatar fail, guid:");
                common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                  v26,
                  &select_avatar_index->formal_avatar_guid);
                common::milog::MiLogStream::~MiLogStream(&v75);
                v2 = 104;
                v27 = 0;
              }
              else
              {
                v28 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                *(_DWORD *)(v3 + 64) = Avatar::getAvatarId(v28);
                if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int> const,unsigned int>(
                        &trial_level_config_ptr->avatar_id_map,
                        (const unsigned int *)(v3 + 64)) )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/mist_trial_activity.cpp",
                    "onMistTrialSelectAvatarAndEnterDungeonReq",
                    876);
                  v29 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                          &v75,
                          (const char (*)[24])"[MIST_TRIAL] avatar_id:");
                  v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v29,
                          (const unsigned int *)(v3 + 64));
                  v31 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                          v30,
                          (const char (*)[31])" not usable in trial_level_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v75);
                  v2 = -1;
                  v27 = 0;
                }
                else
                {
                  v32 = std::set<unsigned int>::insert(
                          (std::set<unsigned int> *const)(v3 + 304),
                          (const std::set<unsigned int>::value_type *)(v3 + 64));
                  if ( !v32.second )
                  {
                    common::milog::MiLogStream::create(
                      &v75,
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/player/activity/mist_trial_activity.cpp",
                      "onMistTrialSelectAvatarAndEnterDungeonReq",
                      881);
                    v33 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                            &v75,
                            (const char (*)[34])"[MIST_TRIAL] duplicate avatar_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v33,
                      (const unsigned int *)(v3 + 64));
                    common::milog::MiLogStream::~MiLogStream(&v75);
                    v2 = -1;
                    v27 = 0;
                  }
                  else
                  {
                    v27 = 1;
                  }
                }
              }
              std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 208));
              if ( v27 != 1 )
                goto LABEL_107;
            }
            __gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex *,std::vector<MistTrialSelectAvatarIndex>>::operator++((__gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex*,std::vector<MistTrialSelectAvatarIndex> > *const)&__for_begin_0);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          Player::getSceneComp(this->player_);
          PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 80));
          if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 80), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v75,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/mist_trial_activity.cpp",
              "onMistTrialSelectAvatarAndEnterDungeonReq",
              896);
            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v75,
              (const char (*)[38])"[MIST_TRIAL] cur_scene_ptr is nullptr");
            common::milog::MiLogStream::~MiLogStream(&v75);
            v2 = -1;
          }
          else
          {
            v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
            scene_id = Scene::getSceneId(v34);
            if ( scene_id )
            {
              std::dynamic_pointer_cast<DungeonScene,Scene>((const std::shared_ptr<Scene> *)(v3 + 112));
              if ( std::operator!=<DungeonScene>((const std::shared_ptr<DungeonScene> *)(v3 + 112), 0LL) )
              {
                v35 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
                if ( DungeonScene::isEnterByMistTrialActivity(v35) )
                {
                  common::milog::MiLogStream::create(
                    &v75,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/mist_trial_activity.cpp",
                    "onMistTrialSelectAvatarAndEnterDungeonReq",
                    909);
                  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    &v75,
                    (const char (*)[41])"[MIST_TRIAL] tryReviveTrialAvatars ready");
                  common::milog::MiLogStream::~MiLogStream(&v75);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Player::getCurAvatar((Player *const)(v3 + 208));
                  if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 208), 0LL) )
                  {
                    v37 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                    if ( Creature::getLifeState(v37) != LIFE_ALIVE )
                    {
                      common::milog::MiLogStream::create(
                        &v75,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/activity/mist_trial_activity.cpp",
                        "onMistTrialSelectAvatarAndEnterDungeonReq",
                        914);
                      v39 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                              &v75,
                              (const char (*)[24])"revive dead cur avatar:");
                      v40 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v39, v40);
                      common::milog::MiLogStream::~MiLogStream(&v75);
                      v41 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                      Avatar::setLifeAlive(v41, 0x73u, 0LL, 1);
                    }
                  }
                  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 208));
                }
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              DungeonComp = Player::getDungeonComp(this->player_);
              memset(&v74, 0, sizeof(v74));
              EnterDungeonOption::EnterDungeonOption(&v74);
              memset(&level_config_id_map, 0, sizeof(level_config_id_map));
              std::map<unsigned int,unsigned int>::map(&level_config_id_map);
              v43 = proto::MistTrialSelectAvatarAndEnterDungeonReq::enter_point_id(req);
              if ( *(_BYTE *)(((unsigned __int64)&trial_level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&trial_level_config_ptr->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              PlayerDungeonComp::enterDungeon(
                &__in,
                DungeonComp,
                trial_level_config_ptr->dungeon_id,
                scene_id,
                v43,
                &level_config_id_map,
                v74);
              std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
              enter_dungeon_retcode = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
              dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
              if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                        + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              if ( *enter_dungeon_retcode )
              {
                common::milog::MiLogStream::create(
                  &v75,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/activity/mist_trial_activity.cpp",
                  "onMistTrialSelectAvatarAndEnterDungeonReq",
                  922);
                v44 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        &v75,
                        (const char (*)[44])"[MIST_TRIAL] enterDungeon fail, dungeon_id:");
                v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v44,
                        &trial_level_config_ptr->dungeon_id);
                v46 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v45,
                        (const char (*)[24])" enter_dungeon_retcode:");
                v47 = common::milog::MiLogStream::operator<<<int,(int *)0>(v46, enter_dungeon_retcode);
                v48 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v47, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                operator<<(v48, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v75);
                if ( *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)enter_dungeon_retcode & 7) + 3) >= *(_BYTE *)(((unsigned __int64)enter_dungeon_retcode >> 3)
                                                                                          + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v2 = *enter_dungeon_retcode;
              }
              else if ( std::operator==<DungeonScene>(0LL, dungeon_scene_ptr) )
              {
                v2 = 0;
              }
              else
              {
                v49 = std::move<std::vector<MistTrialSelectAvatarIndex> &>((std::vector<MistTrialSelectAvatarIndex> *)(v3 + 240));
                std::vector<MistTrialSelectAvatarIndex>::operator=(&this->select_avatar_index_vec_, v49);
                *(_DWORD *)(v3 + 64) = 0;
                v50 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                DungeonScene::setDungeonExtraData<MistTrialDungeonContext>(
                  v50,
                  (const MistTrialDungeonContext *)(v3 + 64));
                toThisPtr<MistTrialActivity>((MistTrialActivity *)(v3 + 208));
                std::weak_ptr<MistTrialActivity>::weak_ptr<MistTrialActivity,void>(
                  (std::weak_ptr<MistTrialActivity> *const)(v3 + 144),
                  (const std::shared_ptr<MistTrialActivity> *)(v3 + 208));
                std::shared_ptr<MistTrialActivity>::~shared_ptr((std::shared_ptr<MistTrialActivity> *const)(v3 + 208));
                v51 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                std::weak_ptr<MistTrialActivity>::weak_ptr(
                  (std::weak_ptr<MistTrialActivity> *const)(v3 + 208),
                  (const std::weak_ptr<MistTrialActivity> *)(v3 + 144));
                std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::function<MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1},void,void>(
                  (std::function<int(DungeonScene&,std::vector<std::shared_ptr<Avatar>>&,std::shared_ptr<Avatar>&)> *const)&v75,
                  (MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *)(v3 + 208));
                DungeonScene::registerDungeonInitEnterSceneAvatarCallback(
                  v51,
                  (DungeonInitEnterSceneAvatarCallback *)&v75);
                std::function<int ()(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)>::~function((std::function<int(DungeonScene&,std::vector<std::shared_ptr<Avatar>>&,std::shared_ptr<Avatar>&)> *const)&v75);
                MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::~vector((MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const)(v3 + 208));
                v52 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::function<MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#2},void,void>(
                  (std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v75,
                  *(MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *)(v3 + 48));
                DungeonScene::registerDungeonSettleCallback(v52, (DungeonSettleCallback *)&v75);
                std::function<void ()(Player &,DungeonScene &,proto::DungeonSettleNotify &)>::~function((std::function<void(Player&,DungeonScene&,proto::DungeonSettleNotify&)> *const)&v75);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                AvatarComp = Player::getAvatarComp(this->player_);
                PlayerAvatarComp::delAllBuffs(AvatarComp);
                v54 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr);
                DungeonScene::enableMistTrialStat(v54, &trial_level_config_ptr->statistics_id_list);
                common::tools::perf::make_shared<ManualTransportEvent>();
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                EventComp = Player::getEventComp(this->player_);
                std::shared_ptr<BaseEvent>::shared_ptr<ManualTransportEvent,void>(
                  (std::shared_ptr<BaseEvent> *const)(v3 + 208),
                  (const std::shared_ptr<ManualTransportEvent> *)(v3 + 176));
                PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 208));
                std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 208));
                v2 = 0;
                std::shared_ptr<ManualTransportEvent>::~shared_ptr((std::shared_ptr<ManualTransportEvent> *const)(v3 + 176));
                std::weak_ptr<MistTrialActivity>::~weak_ptr((std::weak_ptr<MistTrialActivity> *const)(v3 + 144));
              }
              std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
              std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v3 + 112));
            }
            else
            {
              common::milog::MiLogStream::create(
                &v75,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/mist_trial_activity.cpp",
                "onMistTrialSelectAvatarAndEnterDungeonReq",
                902);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v75,
                (const char (*)[31])"[MIST_TRIAL] cur_scene_id is 0");
              common::milog::MiLogStream::~MiLogStream(&v75);
              v2 = -1;
            }
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 80));
LABEL_107:
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 304));
        }
LABEL_108:
        std::vector<MistTrialSelectAvatarIndex>::~vector((std::vector<MistTrialSelectAvatarIndex> *const)(v3 + 240));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v75,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/mist_trial_activity.cpp",
          "onMistTrialSelectAvatarAndEnterDungeonReq",
          798);
        v8 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               &v75,
               (const char (*)[58])"[MIST_TRIAL] trial_level_config_ptr is nullptr, trial_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v75);
        v2 = -1;
      }
    }
  }
  result = v2;
  if ( v77 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
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
  }
  return result;
};

// Line 939: range 000000001456DC24-000000001456DDEC
int __cdecl MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::operator()(
        const MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const __closure,
        DungeonScene *dungeon_scene,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int inited; // r14d
  MistTrialActivity *v8; // rcx
  int result; // eax
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-90h] BYREF
  char v13[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 27 mist_trial_activity_ptr:941";
  *(_QWORD *)(v4 + 16) = MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<MistTrialActivity>::lock((const std::weak_ptr<MistTrialActivity> *const)(v4 + 32));
  if ( std::operator==<MistTrialActivity>(0LL, (const std::shared_ptr<MistTrialActivity> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "operator()",
      944);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v12,
      (const char (*)[32])"mist_trial_activity_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v12);
    inited = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    inited = MistTrialActivity::initEnterDungeonAvatar(v8, enter_scene_avatar_vec, appear_avatar_ptr);
  }
  std::shared_ptr<MistTrialActivity>::~shared_ptr((std::shared_ptr<MistTrialActivity> *const)(v4 + 32));
  result = inited;
  if ( v13 == (char *)v4 )
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

// Line 939: range 00000000145E94D4-00000000145E94F9
void __cdecl MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::vector(
        MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const this,
        MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *a2)
{
  std::weak_ptr<MistTrialActivity>::weak_ptr(&this->__mist_trial_activity_wtr, &a2->__mist_trial_activity_wtr);
};

// Line 939: range 00000000145E95C4-00000000145E95E9
void __cdecl MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::vector(
        MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const this,
        const MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *a2)
{
  std::weak_ptr<MistTrialActivity>::weak_ptr(&this->__mist_trial_activity_wtr, &a2->__mist_trial_activity_wtr);
};

// Line 939: range 000000001456DDEE-000000001456DE08
void __cdecl MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(DungeonScene &,std::vector<std::shared_ptr<Avatar>> &,std::shared_ptr<Avatar>&)#1}::~vector(
        MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(DungeonScene&, std::vector<std::shared_ptr<Avatar>>&, AvatarPtr&)> *const this)
{
  std::weak_ptr<MistTrialActivity>::~weak_ptr(&this->__mist_trial_activity_wtr);
};

// Line 950: range 000000001456DE0A-000000001456E088
void __cdecl MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#2}::operator()(
        const MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq::<lambda(Player&, DungeonScene&, proto::DungeonSettleNotify&)> *const __closure,
        Player *player,
        DungeonScene *dungeon_scene,
        proto::DungeonSettleNotify *notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  MistTrialActivity *v7; // rcx
  uint32_t now; // [rsp+24h] [rbp-9Ch]
  MistTrialDungeonContext *context; // [rsp+28h] [rbp-98h]
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 26 mist_trial_context_opt:953 64 16 27 mist_trial_activity_ptr:961";
  *(_QWORD *)(v4 + 16) = MistTrialActivity::onMistTrialSelectAvatarAndEnterDungeonReq(proto::MistTrialSelectAvatarAndEnterDungeonReq const&)::{lambda(Player &,DungeonScene &,proto::DungeonSettleNotify &)#2}::operator();
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  *(std::optional<MistTrialDungeonContext> *)(v4 + 32) = DungeonScene::getDungeonExtraData<MistTrialDungeonContext>(dungeon_scene);
  if ( std::optional<MistTrialDungeonContext>::has_value((const std::optional<MistTrialDungeonContext> *const)(v4 + 32)) )
  {
    context = std::optional<MistTrialDungeonContext>::value((std::optional<MistTrialDungeonContext> *const)(v4 + 32));
    now = Scene::getSceneTimeSeconds((Scene *const)dungeon_scene);
    if ( *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)context & 7) + 3) >= *(_BYTE *)(((unsigned __int64)context >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DungeonSettleNotify::set_use_time(notify, now - context->gallery_start_time);
  }
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<MistTrialActivity>((PlayerActivityComp *const)(v4 + 64));
  if ( !std::operator==<MistTrialActivity>(0LL, (const std::shared_ptr<MistTrialActivity> *)(v4 + 64)) )
  {
    v7 = std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MistTrialActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__closure & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    MistTrialActivity::onMistTrialDungeonSettle(v7, dungeon_scene, __closure->__trial_id);
  }
  std::shared_ptr<MistTrialActivity>::~shared_ptr((std::shared_ptr<MistTrialActivity> *const)(v4 + 64));
  if ( v12 == (char *)v4 )
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

// Line 979: range 000000001456FA86-000000001456FB81
int32_t __cdecl MistTrialActivity::initEnterDungeonAvatar(
        MistTrialActivity *const this,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( !MistTrialActivity::internalInitEnterDungeonAvatar(this, enter_scene_avatar_vec, appear_avatar_ptr) )
    return 0;
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/activity/mist_trial_activity.cpp",
    "initEnterDungeonAvatar",
    982);
  v3 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v5,
         (const char (*)[45])"internalInitEnterDungeonAvatar fail, player:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  operator<<(v3, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v5);
  MistTrialActivity::checkRecallDungeonAvatars(this);
  return -1;
};

// Line 990: range 000000001456FB82-0000000014570093
int32_t __cdecl MistTrialActivity::internalInitEnterDungeonAvatar(
        MistTrialActivity *const this,
        std::vector<std::shared_ptr<Avatar>> *enter_scene_avatar_vec,
        AvatarPtr *appear_avatar_ptr)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  common::milog::MiLogStream *v7; // rcx
  unsigned __int64 v8; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  PlayerAvatarComp *v12; // rax
  const std::shared_ptr<Avatar> *v13; // rdx
  int32_t result; // eax
  std::vector<long unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::vector<long unsigned int>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<long unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 8 8 guid:996 64 16 14 avatar_ptr:998";
  *(_QWORD *)(v4 + 16) = MistTrialActivity::internalInitEnterDungeonAvatar;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -202178560;
  if ( MistTrialActivity::checkGrantDungeonAvatars(this) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "internalInitEnterDungeonAvatar",
      993);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v19,
           (const char (*)[39])"checkGrantDungeonAvatars fail, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v3 = -1;
  }
  else
  {
    __for_range = &this->informal_avatar_guid_vec_;
    __for_begin._M_current = std::vector<unsigned long>::begin(&this->informal_avatar_guid_vec_)._M_current;
    __for_end._M_current = std::vector<unsigned long>::end(&this->informal_avatar_guid_vec_)._M_current;
    while ( __gnu_cxx::operator!=<unsigned long *,std::vector<unsigned long>>(&__for_begin, &__for_end) )
    {
      v8 = (unsigned __int64)__gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator*(&__for_begin);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      *(_QWORD *)(v4 + 32) = *(_QWORD *)v8;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      AvatarComp = Player::getAvatarComp(this->player_);
      PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v4 + 64), (uint64_t)AvatarComp);
      if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/mist_trial_activity.cpp",
          "internalInitEnterDungeonAvatar",
          1001);
        v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                &v19,
                (const char (*)[23])"findAvatar fail, guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v10,
          (const unsigned __int64 *)(v4 + 32));
        common::milog::MiLogStream::~MiLogStream(&v19);
        v3 = -1;
        v11 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<Avatar>>::push_back(
          enter_scene_avatar_vec,
          (const std::vector<std::shared_ptr<Avatar>>::value_type *)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = Player::getAvatarComp(this->player_);
        if ( PlayerAvatarComp::getCurAvatarGuid(v12) == *(_QWORD *)(v4 + 32) )
          std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, (const std::shared_ptr<Avatar> *)(v4 + 64));
        v11 = 1;
      }
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
      if ( v11 != 1 )
        goto LABEL_28;
      __gnu_cxx::__normal_iterator<unsigned long *,std::vector<unsigned long>>::operator++(&__for_begin);
    }
    if ( std::operator==<Avatar>(0LL, appear_avatar_ptr) )
    {
      if ( std::vector<std::shared_ptr<Avatar>>::empty(enter_scene_avatar_vec) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/mist_trial_activity.cpp",
          "internalInitEnterDungeonAvatar",
          1014);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v19,
          (const char (*)[32])"enter_scene_avatar_vec is empty");
        common::milog::MiLogStream::~MiLogStream(&v19);
        v3 = -1;
        goto LABEL_28;
      }
      v13 = std::vector<std::shared_ptr<Avatar>>::operator[](enter_scene_avatar_vec, 0LL);
      std::shared_ptr<Avatar>::operator=(appear_avatar_ptr, v13);
    }
    v3 = 0;
  }
LABEL_28:
  result = v3;
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
  return result;
};

// Line 1023: range 0000000014570094-00000000145707F8
int32_t __cdecl MistTrialActivity::checkGrantDungeonAvatars(MistTrialActivity *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  uint32_t AvatarComp; // esi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // r15d
  std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // r15d
  std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  int32_t result; // eax
  std::vector<MistTrialSelectAvatarIndex>::iterator __for_begin; // [rsp+18h] [rbp-108h] BYREF
  std::vector<MistTrialSelectAvatarIndex>::iterator __for_end; // [rsp+20h] [rbp-100h] BYREF
  std::vector<long unsigned int>::value_type __x; // [rsp+28h] [rbp-F8h] BYREF
  const ActivityMistTrialExcelConfigMgr *mist_trial_config_mgr; // [rsp+30h] [rbp-F0h]
  std::vector<MistTrialSelectAvatarIndex> *__for_range; // [rsp+38h] [rbp-E8h]
  const MistTrialSelectAvatarIndex *select_avatar_index; // [rsp+40h] [rbp-E0h]
  const data::ActivityMistTrialAvatarDataExcelConfig *mist_trial_avatar_config_ptr; // [rsp+48h] [rbp-D8h]
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-D0h] BYREF
  char v25[176]; // [rsp+70h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 22 mirror_avatar_ptr:1056 64 32 17 grant_record:1044";
  *(_QWORD *)(v2 + 16) = MistTrialActivity::checkGrantDungeonAvatars;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  if ( !std::vector<unsigned long>::empty(&this->informal_avatar_guid_vec_) )
  {
    v1 = 0;
  }
  else if ( std::vector<MistTrialSelectAvatarIndex>::empty(&this->select_avatar_index_vec_) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/mist_trial_activity.cpp",
      "checkGrantDungeonAvatars",
      1030);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v24,
           (const char (*)[42])"select_avatar_index_vec is empty, player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v5, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v1 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 32));
    mist_trial_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32))->design_config.txt_config_mgr.activity_mist_trial_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
    __for_range = &this->select_avatar_index_vec_;
    __for_begin._M_current = std::vector<MistTrialSelectAvatarIndex>::begin(&this->select_avatar_index_vec_)._M_current;
    __for_end._M_current = std::vector<MistTrialSelectAvatarIndex>::end(&this->select_avatar_index_vec_)._M_current;
    while ( __gnu_cxx::operator!=<MistTrialSelectAvatarIndex *,std::vector<MistTrialSelectAvatarIndex>>(
              &__for_begin,
              &__for_end) )
    {
      select_avatar_index = __gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex *,std::vector<MistTrialSelectAvatarIndex>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)select_avatar_index >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)select_avatar_index >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( select_avatar_index->mist_trial_avatar_id )
      {
        mist_trial_avatar_config_ptr = data::ActivityMistTrialExcelConfigMgrBase::findActivityMistTrialAvatarDataExcelConfig(
                                         mist_trial_config_mgr,
                                         select_avatar_index->mist_trial_avatar_id);
        if ( !mist_trial_avatar_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/mist_trial_activity.cpp",
            "checkGrantDungeonAvatars",
            1041);
          v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                 &v24,
                 (const char (*)[57])"mist_trial_avatar_config_ptr null, mist_trial_avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v6,
            &select_avatar_index->mist_trial_avatar_id);
          common::milog::MiLogStream::~MiLogStream(&v24);
          v1 = -1;
          goto LABEL_34;
        }
        proto::TrialAvatarGrantRecord::TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v2 + 64));
        proto::TrialAvatarGrantRecord::set_grant_reason((proto::TrialAvatarGrantRecord *const)(v2 + 64), 4u);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&mist_trial_avatar_config_ptr->trial_avatar_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&mist_trial_avatar_config_ptr->trial_avatar_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        PlayerAvatarComp::grantTrialAvatar(
          (PlayerAvatarComp *const)(v2 + 32),
          AvatarComp,
          (const proto::TrialAvatarGrantRecord *)mist_trial_avatar_config_ptr->trial_avatar_id,
          v2 + 64);
        if ( std::operator==<TrialAvatar>(0LL, (const std::shared_ptr<TrialAvatar> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/mist_trial_activity.cpp",
            "checkGrantDungeonAvatars",
            1049);
          v8 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                 &v24,
                 (const char (*)[45])"grantTrialAvatar fail, mist_trial_avatar_id:");
          v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v8,
                 &select_avatar_index->mist_trial_avatar_id);
          v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v9,
                  (const char (*)[18])" trial_avatar_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v10,
            &mist_trial_avatar_config_ptr->trial_avatar_id);
          common::milog::MiLogStream::~MiLogStream(&v24);
          v1 = -1;
          v11 = 0;
        }
        else
        {
          v12 = std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<TrialAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          __x = Avatar::getGuid(v12);
          std::vector<unsigned long>::push_back(&this->informal_avatar_guid_vec_, &__x);
          v11 = 1;
        }
        std::shared_ptr<TrialAvatar>::~shared_ptr((std::shared_ptr<TrialAvatar> *const)(v2 + 32));
        proto::TrialAvatarGrantRecord::~TrialAvatarGrantRecord((proto::TrialAvatarGrantRecord *const)(v2 + 64));
        if ( v11 != 1 )
          goto LABEL_34;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&select_avatar_index->formal_avatar_guid >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MistTrialActivity::createMistTrialMirrorAvatar((MistTrialActivity *const)(v2 + 32), (uint64_t)this);
        if ( std::operator==<MirrorAvatar>(0LL, (const std::shared_ptr<MirrorAvatar> *)(v2 + 32)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/mist_trial_activity.cpp",
            "checkGrantDungeonAvatars",
            1059);
          v13 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v24,
                  (const char (*)[54])"createMistTrialMirrorAvatar fail, formal_avatar_guid:");
          common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v13,
            &select_avatar_index->formal_avatar_guid);
          common::milog::MiLogStream::~MiLogStream(&v24);
          v1 = -1;
          v14 = 0;
        }
        else
        {
          v15 = std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MirrorAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
          __x = Avatar::getGuid(v15);
          std::vector<unsigned long>::push_back(&this->informal_avatar_guid_vec_, &__x);
          v14 = 1;
        }
        std::shared_ptr<MirrorAvatar>::~shared_ptr((std::shared_ptr<MirrorAvatar> *const)(v2 + 32));
        if ( v14 != 1 )
          goto LABEL_34;
      }
      __gnu_cxx::__normal_iterator<MistTrialSelectAvatarIndex *,std::vector<MistTrialSelectAvatarIndex>>::operator++(&__for_begin);
    }
    v1 = 0;
  }
LABEL_34:
  result = v1;
  if ( v25 == (char *)v2 )
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

// Line 1069: range 00000000145707FA-0000000014570F12
MistTrialActivity *__fastcall MistTrialActivity::createMistTrialMirrorAvatar(
        MistTrialActivity *const this,
        uint64_t formal_avatar_guid,
        __int64 a3)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerAvatarComp *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned __int64 v13; // rax
  PlayerAvatarComp *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  proto::AvatarBin *v18; // rax
  signed int v19; // esi
  proto::AvatarSnapshotBin *avatar_snapshot_bin_ptr; // [rsp+28h] [rbp-158h]
  std::shared_ptr<Avatar> __x; // [rsp+30h] [rbp-150h] BYREF
  common::milog::MiLogStream v24; // [rsp+40h] [rbp-140h] BYREF
  char v25[288]; // [rsp+60h] [rbp-120h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 8 18 snapshot_guid:1089 64 8 23 formal_avatar_guid:1068 96 16 22 formal_avatar_ptr:1070 128"
                        " 24 15 avatar_vec:1076 192 24 22 snapshot_guid_vec:1078";
  *(_QWORD *)(v3 + 16) = MistTrialActivity::createMistTrialMirrorAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862726] = -218103808;
  v5[536862727] = -202116109;
  *(_QWORD *)(v3 + 64) = a3;
  if ( *(_BYTE *)(((formal_avatar_guid + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  AvatarComp = Player::getAvatarComp(*(Player *const *)(formal_avatar_guid + 24));
  PlayerAvatarComp::findFormalAvatar((const PlayerAvatarComp *const)(v3 + 96), (uint64_t)AvatarComp);
  if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/mist_trial_activity.cpp",
      "createMistTrialMirrorAvatar",
      1073);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v24,
           (const char (*)[43])"findFormalAvatar fail, formal_avatar_guid:");
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, (const unsigned __int64 *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v24);
    std::shared_ptr<MirrorAvatar>::shared_ptr((std::shared_ptr<MirrorAvatar> *const)this, 0LL);
  }
  else
  {
    std::vector<std::shared_ptr<Avatar>>::vector((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 128));
    std::shared_ptr<Avatar>::shared_ptr<FormalAvatar,void>(&__x, (const std::shared_ptr<FormalAvatar> *)(v3 + 96));
    std::vector<std::shared_ptr<Avatar>>::push_back((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 128), &__x);
    std::shared_ptr<Avatar>::~shared_ptr(&__x);
    std::vector<unsigned long>::vector((std::vector<long unsigned int> *const)(v3 + 192));
    if ( *(_BYTE *)(((formal_avatar_guid + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v8 = Player::getAvatarComp(*(Player *const *)(formal_avatar_guid + 24));
    if ( PlayerAvatarComp::saveAvatarSnapshotBatch(
           v8,
           AVATAR_SNAPSHOT_TYPE_MIST_TRIAL_ACTIVITY,
           (const std::vector<std::shared_ptr<Avatar>> *)(v3 + 128),
           (std::vector<long unsigned int> *)(v3 + 192)) )
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "createMistTrialMirrorAvatar",
        1081);
      v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v24,
             (const char (*)[50])"saveAvatarSnapshotBatch fail, formal_avatar_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v9, (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v24);
      std::shared_ptr<MirrorAvatar>::shared_ptr((std::shared_ptr<MirrorAvatar> *const)this, 0LL);
    }
    else if ( std::vector<unsigned long>::size((const std::vector<long unsigned int> *const)(v3 + 192)) == 1 )
    {
      v13 = (unsigned __int64)std::vector<unsigned long>::operator[](
                                (std::vector<long unsigned int> *const)(v3 + 192),
                                0LL);
      if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
        v13 = __asan_report_load8();
      *(_QWORD *)(v3 + 32) = *(_QWORD *)v13;
      if ( *(_BYTE *)(((formal_avatar_guid + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = Player::getAvatarComp(*(Player *const *)(formal_avatar_guid + 24));
      avatar_snapshot_bin_ptr = PlayerAvatarComp::findSavedAvatarSnapshot(v14, *(_QWORD *)(v3 + 32));
      if ( avatar_snapshot_bin_ptr )
      {
        v18 = proto::AvatarSnapshotBin::mutable_avatar_bin(avatar_snapshot_bin_ptr);
        proto::AvatarBin::set_cur_elem_energy(v18, 0.0);
        if ( *(_BYTE *)(((formal_avatar_guid + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = (unsigned int)Player::getAvatarComp(*(Player *const *)(formal_avatar_guid + 24));
        if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_store16(this);
        PlayerAvatarComp::findMirrorAvatarOrCreateFromSnapshot(
          (PlayerAvatarComp *const)this,
          (proto::AvatarSnapshotType)v19,
          2uLL);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/mist_trial_activity.cpp",
          "createMistTrialMirrorAvatar",
          1093);
        v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v24,
                (const char (*)[45])"findSavedAvatarSnapshot fail, snapshot_guid:");
        v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v15,
                (const unsigned __int64 *)(v3 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v16,
                (const char (*)[21])" formal_avatar_guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v17,
          (const unsigned __int64 *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v24);
        std::shared_ptr<MirrorAvatar>::shared_ptr((std::shared_ptr<MirrorAvatar> *const)this, 0LL);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/mist_trial_activity.cpp",
        "createMistTrialMirrorAvatar",
        1086);
      v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              &v24,
              (const char (*)[35])"snapshot_guid_vec's size is not 1:");
      v11 = common::milog::MiLogStream::operator<<<unsigned long>(
              v10,
              (const std::vector<long unsigned int> *)(v3 + 192));
      v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v11,
              (const char (*)[21])" formal_avatar_guid:");
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v24);
      std::shared_ptr<MirrorAvatar>::shared_ptr((std::shared_ptr<MirrorAvatar> *const)this, 0LL);
    }
    std::vector<unsigned long>::~vector((std::vector<long unsigned int> *const)(v3 + 192));
    std::vector<std::shared_ptr<Avatar>>::~vector((std::vector<std::shared_ptr<Avatar>> *const)(v3 + 128));
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v3 + 96));
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 1101: range 0000000014570F14-00000000145710AF
void __cdecl MistTrialActivity::checkRecallDungeonAvatars(MistTrialActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( !std::vector<unsigned long>::empty(&this->informal_avatar_guid_vec_) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/mist_trial_activity.cpp",
      "checkRecallDungeonAvatars",
      1106);
    v1 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v4,
           (const char (*)[33])"remove informal_avatar_guid_vec:");
    common::milog::MiLogStream::operator<<<unsigned long>(v1, &this->informal_avatar_guid_vec_);
    common::milog::MiLogStream::~MiLogStream(&v4);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    AvatarComp = Player::getAvatarComp(this->player_);
    if ( PlayerAvatarComp::delInformalAvatarOrSnapshotBatch(
           AvatarComp,
           AVATAR_SNAPSHOT_TYPE_MIST_TRIAL_ACTIVITY,
           &this->informal_avatar_guid_vec_) )
    {
      common::milog::MiLogStream::create(
        &v4,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/mist_trial_activity.cpp",
        "checkRecallDungeonAvatars",
        1109);
      v3 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
             &v4,
             (const char (*)[65])"delInformalAvatarOrSnapshotBatch fail, informal_avatar_guid_vec:");
      common::milog::MiLogStream::operator<<<unsigned long>(v3, &this->informal_avatar_guid_vec_);
      common::milog::MiLogStream::~MiLogStream(&v4);
    }
    std::vector<unsigned long>::clear(&this->informal_avatar_guid_vec_);
  }
};
