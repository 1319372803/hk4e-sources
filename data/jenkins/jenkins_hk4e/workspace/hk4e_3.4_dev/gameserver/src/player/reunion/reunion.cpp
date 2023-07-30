// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/reunion/reunion.cpp

// Line 27: range 0000000016CE8CBA-0000000016CE8DE3
int32_t __cdecl ReunionSignInRecord::fromBin(
        ReunionSignInRecord *const this,
        const proto::ReunionSignInBin *record_bin)
{
  uint32_t v2; // edx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  bool v6; // dl
  uint32_t sign_in_time; // edx
  char v8; // al
  const google::protobuf::RepeatedField<unsigned int> *v9; // rax
  const proto::ReunionSignInBin *record_bina; // [rsp+0h] [rbp-20h]

  record_bina = record_bin;
  v2 = proto::ReunionSignInBin::reunion_sign_in_id(record_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(record_bin) = v3 != 0;
    __asan_report_store4(this, record_bin, v2);
  }
  this->reunion_sign_in_id = v2;
  v4 = proto::ReunionSignInBin::sign_in_count(record_bina);
  v5 = *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000);
  LOBYTE(record_bin) = v5 != 0;
  v6 = v5 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v5;
  if ( v6 )
    __asan_report_store4(&this->sign_in_count, record_bin, v6);
  this->sign_in_count = v4;
  sign_in_time = proto::ReunionSignInBin::last_sign_in_time(record_bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(record_bin) = v8 != 0;
    __asan_report_store4(&this->last_sign_in_time, record_bin, sign_in_time);
  }
  this->last_sign_in_time = sign_in_time;
  std::vector<unsigned int>::clear(&this->reward_day_vec);
  v9 = proto::ReunionSignInBin::reward_day_list(record_bina);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v9, &this->reward_day_vec);
  return 0;
};

// Line 37: range 0000000016CE8DE4-0000000016CE8EF7
int32_t __cdecl ReunionSignInRecord::toBin(const ReunionSignInRecord *const this, proto::ReunionSignInBin *record_bin)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ReunionSignInBin::set_reunion_sign_in_id(record_bin, this->reunion_sign_in_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sign_in_count);
  }
  proto::ReunionSignInBin::set_sign_in_count(record_bin, this->sign_in_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_sign_in_time);
  }
  proto::ReunionSignInBin::set_last_sign_in_time(record_bin, this->last_sign_in_time);
  v2 = proto::ReunionSignInBin::mutable_reward_day_list(record_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->reward_day_vec, v2);
  return 0;
};

// Line 46: range 0000000016CE8EF8-0000000016CE9007
void __cdecl ReunionSignInRecord::toClient(
        const ReunionSignInRecord *const this,
        proto::ReunionSignInInfo *sign_in_info)
{
  google::protobuf::RepeatedField<unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ReunionSignInInfo::set_config_id(sign_in_info, this->reunion_sign_in_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sign_in_count);
  }
  proto::ReunionSignInInfo::set_sign_in_count(sign_in_info, this->sign_in_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_sign_in_time);
  }
  proto::ReunionSignInInfo::set_last_sign_in_time(sign_in_info, this->last_sign_in_time);
  v2 = proto::ReunionSignInInfo::mutable_reward_day_list(sign_in_info);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->reward_day_vec, v2);
};

// Line 54: range 0000000016CE9008-0000000016CE90E3
void __cdecl ReunionSignInRecord::clear(ReunionSignInRecord *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rsi
  bool v3; // dl

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->reunion_sign_in_id = 0;
  v2 = (((_BYTE)this + 4) & 7u) + 3;
  v3 = *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_count >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->sign_in_count, v2, v3);
  this->sign_in_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_sign_in_time, v2, (_BYTE)this + 8);
  }
  this->last_sign_in_time = 0;
  std::vector<unsigned int>::clear(&this->reward_day_vec);
};

// Line 62: range 0000000016CE90E4-0000000016CE9566
int32_t __cdecl ReunionMissionRecord::fromBin(
        ReunionMissionRecord *const this,
        const proto::ReunionMissionBin *record_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t v5; // edx
  char v6; // al
  uint32_t v7; // edx
  char v8; // al
  int32_t result; // eax
  const proto::ReunionMissionBin *record_bina; // [rsp+0h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-C0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+30h] [rbp-B0h]
  bool *__for_begin_2; // [rsp+38h] [rbp-A8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+40h] [rbp-A0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-98h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+50h] [rbp-90h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+58h] [rbp-88h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+60h] [rbp-80h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+68h] [rbp-78h]
  const google::protobuf::RepeatedField<bool> *__for_range_2; // [rsp+70h] [rbp-70h]
  google::protobuf::RepeatedField<bool>::const_iterator __for_end_2; // [rsp+78h] [rbp-68h]
  char v23[96]; // [rsp+80h] [rbp-60h] BYREF

  record_bina = record_bin;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 watcher_id:75";
  *(_QWORD *)(v2 + 16) = ReunionMissionRecord::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::ReunionMissionBin::mission_id(record_bin);
  v6 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(record_bin) = v6 != 0;
    __asan_report_store4(this, record_bin, v5);
  }
  this->mission_id = v5;
  std::set<unsigned int>::clear(&this->taken_reward_watcher_set);
  __for_range = proto::ReunionMissionBin::taken_reward_watcher_list(record_bina);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    record_bin = (const proto::ReunionMissionBin *)(v2 + 32);
    std::set<unsigned int>::insert(
      &this->taken_reward_watcher_set,
      (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  std::set<unsigned int>::clear(&this->finished_watcher_set);
  __for_range_0 = proto::ReunionMissionBin::finished_watcher_list(record_bina);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_0);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    record_bin = (const proto::ReunionMissionBin *)(v2 + 32);
    std::set<unsigned int>::insert(&this->finished_watcher_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  std::set<unsigned int>::clear(&this->watcher_set);
  __for_range_1 = proto::ReunionMissionBin::watcher_list(record_bina);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(__for_begin_1);
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_1;
    record_bin = (const proto::ReunionMissionBin *)(v2 + 32);
    std::set<unsigned int>::insert(&this->watcher_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_1;
  }
  v7 = proto::ReunionMissionBin::cur_score(record_bina);
  v8 = *(_BYTE *)(((unsigned __int64)&this->cur_score >> 3) + 0x7FFF8000);
  if ( v8 != 0 && v8 <= 3 )
  {
    LOBYTE(record_bin) = v8 != 0;
    __asan_report_store4(&this->cur_score, record_bin, v7);
  }
  this->cur_score = v7;
  __for_range_2 = proto::ReunionMissionBin::is_taken_reward_list(record_bina);
  __for_begin_2 = (bool *)google::protobuf::RepeatedField<bool>::begin(__for_range_2);
  __for_end_2 = google::protobuf::RepeatedField<bool>::end(__for_range_2);
  while ( __for_begin_2 != __for_end_2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)__for_begin_2 & 7) >= *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__for_begin_2);
    }
    std::vector<bool>::push_back(&this->is_taken_reward_vec, *__for_begin_2++);
  }
  result = 0;
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

// Line 89: range 0000000016CE9568-0000000016CE989A
int32_t __cdecl ReunionMissionRecord::toBin(
        const ReunionMissionRecord *const this,
        proto::ReunionMissionBin *record_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  unsigned int *v4; // rax
  google::protobuf::uint32 *v5; // rdx
  unsigned int *v6; // rax
  google::protobuf::uint32 *v7; // rdx
  bool v8; // dl
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-40h]
  const std::set<unsigned int> *__for_range_0; // [rsp+38h] [rbp-38h]
  const std::set<unsigned int> *__for_range_1; // [rsp+40h] [rbp-30h]
  const std::vector<bool> *__for_range_2; // [rsp+48h] [rbp-28h]
  std::vector<bool>::const_iterator __for_begin_0; // [rsp+50h] [rbp-20h] BYREF
  std::vector<bool>::const_iterator __for_end_0; // [rsp+60h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::ReunionMissionBin::set_mission_id(record_bin, this->mission_id);
  __for_range = &this->taken_reward_watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->taken_reward_watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->taken_reward_watcher_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::ReunionMissionBin::add_taken_reward_watcher_list(record_bin, *v3);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->finished_watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finished_watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    proto::ReunionMissionBin::add_finished_watcher_list(record_bin, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_1 = &this->watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    proto::ReunionMissionBin::add_watcher_list(record_bin, *v7);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_score);
  }
  proto::ReunionMissionBin::set_cur_score(record_bin, this->cur_score);
  __for_range_2 = &this->is_taken_reward_vec;
  __for_begin_0 = std::vector<bool>::begin(&this->is_taken_reward_vec);
  __for_end_0 = std::vector<bool>::end(__for_range_2);
  while ( std::_Bit_iterator_base::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v8 = std::_Bit_const_iterator::operator*(&__for_begin_0);
    proto::ReunionMissionBin::add_is_taken_reward_list(record_bin, v8);
    std::_Bit_const_iterator::operator++(&__for_begin_0);
  }
  return 0;
};

// Line 113: range 0000000016CE989C-0000000016CE9968
void __cdecl ReunionMissionRecord::clear(ReunionMissionRecord *const this)
{
  __int64 v1; // rsi

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this, v1, (_BYTE)this);
  }
  this->mission_id = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_score, v1, (_BYTE)this - 104);
  }
  this->cur_score = 0;
  std::set<unsigned int>::clear(&this->taken_reward_watcher_set);
  std::set<unsigned int>::clear(&this->finished_watcher_set);
  std::set<unsigned int>::clear(&this->watcher_set);
  std::vector<bool>::clear(&this->is_taken_reward_vec);
};

// Line 123: range 0000000016CE996A-0000000016CE9ABF
int32_t __cdecl ReunionPrivilegeRecord::fromBin(
        ReunionPrivilegeRecord *const this,
        const proto::ReunionPrivilegeBin *record_bin)
{
  uint32_t v2; // ecx
  char v3; // dl
  bool v4; // dl
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  uint32_t v8; // ecx
  char v9; // dl
  bool v10; // dl
  uint32_t refresh_time; // ecx
  char v12; // dl
  bool v13; // dl
  const proto::ReunionPrivilegeBin *record_bina; // [rsp+0h] [rbp-10h]

  record_bina = record_bin;
  v2 = proto::ReunionPrivilegeBin::privilege_id(record_bin);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(record_bin) = v3 != 0;
  v4 = v3 != 0 && (char)(((unsigned __int8)this & 7) + 3) >= v3;
  if ( v4 )
    __asan_report_store4(this, record_bin, v4);
  this->privilege_id = v2;
  v5 = proto::ReunionPrivilegeBin::cur_day_count(record_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000);
  LOBYTE(record_bin) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 4) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->cur_day_count, record_bin, v7);
  this->cur_day_count = v5;
  v8 = proto::ReunionPrivilegeBin::total_count(record_bina);
  v9 = *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000);
  LOBYTE(record_bin) = v9 != 0;
  v10 = v9 != 0 && (char)((((_BYTE)this + 12) & 7) + 3) >= v9;
  if ( v10 )
    __asan_report_store4(&this->total_count, record_bin, v10);
  this->total_count = v8;
  refresh_time = proto::ReunionPrivilegeBin::last_refresh_time(record_bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000);
  LOBYTE(record_bin) = v12 != 0;
  v13 = v12 != 0 && (char)((((_BYTE)this + 8) & 7) + 3) >= v12;
  if ( v13 )
    __asan_report_store4(&this->last_refresh_time, record_bin, v13);
  this->last_refresh_time = refresh_time;
  return 0;
};

// Line 132: range 0000000016CE9AC0-0000000016CE9C11
int32_t __cdecl ReunionPrivilegeRecord::toBin(
        const ReunionPrivilegeRecord *const this,
        proto::ReunionPrivilegeBin *record_bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::ReunionPrivilegeBin::set_privilege_id(record_bin, this->privilege_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_day_count);
  }
  proto::ReunionPrivilegeBin::set_cur_day_count(record_bin, this->cur_day_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_count);
  }
  proto::ReunionPrivilegeBin::set_total_count(record_bin, this->total_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time);
  }
  proto::ReunionPrivilegeBin::set_last_refresh_time(record_bin, this->last_refresh_time);
  return 0;
};

// Line 141: range 0000000016CE9C12-0000000016CE9D33
void __cdecl ReunionPrivilegeRecord::clear(ReunionPrivilegeRecord *const this)
{
  bool v1; // dl
  bool v2; // dl
  bool v3; // dl
  bool v4; // dl

  v1 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  if ( v1 )
    __asan_report_store4(this, ((unsigned __int8)this & 7u) + 3, v1);
  this->privilege_id = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->cur_day_count, (((_BYTE)this + 4) & 7u) + 3, v2);
  this->cur_day_count = 0;
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000);
  if ( v3 )
    __asan_report_store4(&this->last_refresh_time, (((_BYTE)this + 8) & 7u) + 3, v3);
  this->last_refresh_time = 0;
  v4 = *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->total_count, (((_BYTE)this + 12) & 7u) + 3, v4);
  this->total_count = 0;
};

// Line 149: range 0000000016CE9D34-0000000016CE9E31
void __cdecl ReunionPrivilegeRecord::toClient(
        const ReunionPrivilegeRecord *const this,
        proto::ReunionPrivilegeInfo *privilege_info)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::ReunionPrivilegeInfo::set_privilege_id(privilege_info, this->privilege_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_day_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_day_count);
  }
  proto::ReunionPrivilegeInfo::set_cur_day_count(privilege_info, this->cur_day_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->total_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->total_count);
  }
  proto::ReunionPrivilegeInfo::set_total_count(privilege_info, this->total_count);
};

// Line 156: range 0000000016CE9E32-0000000016CEA00D
int32_t __cdecl Reunion::fromBin(Reunion *const this, const proto::ReunionRecordBin *record_bin)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  char v4; // al
  uint32_t gift_reward_id; // ecx
  char v6; // dl
  bool v7; // dl
  const proto::ReunionSignInBin *v8; // rax
  const proto::ReunionMissionBin *v9; // rax
  const proto::ReunionPrivilegeBin *v10; // rsi
  uint32_t v11; // edx
  char v12; // al
  bool is_activated; // cl
  char v14; // dl
  __int64 v15; // rdx
  const std::string *v16; // rax
  const proto::ReunionRecordBin *record_bina; // [rsp+0h] [rbp-20h]

  record_bina = record_bin;
  LOBYTE(v2) = proto::ReunionRecordBin::is_taken_first_gift_reward(record_bin);
  v3 = v2;
  v4 = *(_BYTE *)(((unsigned __int64)&this->is_taken_first_gift_reward_ >> 3) + 0x7FFF8000);
  if ( v4 < 0 )
  {
    LOBYTE(record_bin) = v4 != 0;
    __asan_report_store1(&this->is_taken_first_gift_reward_, record_bin, v3);
  }
  this->is_taken_first_gift_reward_ = v3;
  gift_reward_id = proto::ReunionRecordBin::first_gift_reward_id(record_bina);
  v6 = *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000);
  LOBYTE(record_bin) = v6 != 0;
  v7 = v6 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v6;
  if ( v7 )
    __asan_report_store4(&this->first_gift_reward_id_, record_bin, v7);
  this->first_gift_reward_id_ = gift_reward_id;
  v8 = proto::ReunionRecordBin::sign_in_bin(record_bina);
  ReunionSignInRecord::fromBin(&this->sign_in_record_, v8);
  v9 = proto::ReunionRecordBin::mission_bin(record_bina);
  ReunionMissionRecord::fromBin(&this->mission_record_, v9);
  v10 = proto::ReunionRecordBin::privilege_bin(record_bina);
  ReunionPrivilegeRecord::fromBin(&this->privilege_record_, v10);
  v11 = proto::ReunionRecordBin::reunion_finish_time(record_bina);
  v12 = *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000);
  if ( v12 != 0 && v12 <= 3 )
  {
    LOBYTE(v10) = v12 != 0;
    __asan_report_store4(&this->finish_time_, v10, v11);
  }
  this->finish_time_ = v11;
  is_activated = proto::ReunionRecordBin::is_activated(record_bina);
  v14 = *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000);
  LOBYTE(v10) = v14 != 0;
  v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 36) & 7) >= v14);
  if ( (_BYTE)v15 )
    __asan_report_store1(&this->is_activated_, v10, v15);
  this->is_activated_ = is_activated;
  v16 = proto::ReunionRecordBin::game_version[abi:cxx11](record_bina);
  std::string::operator=(&this->game_version_, v16);
  return 0;
};

// Line 168: range 0000000016CEA00E-0000000016CEA1E3
int32_t __cdecl Reunion::toBin(const Reunion *const this, proto::ReunionRecordBin *record_bin)
{
  proto::ReunionSignInBin *v2; // rax
  proto::ReunionMissionBin *v3; // rax
  proto::ReunionPrivilegeBin *v4; // rax

  if ( *(char *)(((unsigned __int64)&this->is_taken_first_gift_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_taken_first_gift_reward_);
  proto::ReunionRecordBin::set_is_taken_first_gift_reward(record_bin, this->is_taken_first_gift_reward_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->first_gift_reward_id_);
  }
  proto::ReunionRecordBin::set_first_gift_reward_id(record_bin, this->first_gift_reward_id_);
  v2 = proto::ReunionRecordBin::mutable_sign_in_bin(record_bin);
  ReunionSignInRecord::toBin(&this->sign_in_record_, v2);
  v3 = proto::ReunionRecordBin::mutable_mission_bin(record_bin);
  ReunionMissionRecord::toBin(&this->mission_record_, v3);
  v4 = proto::ReunionRecordBin::mutable_privilege_bin(record_bin);
  ReunionPrivilegeRecord::toBin(&this->privilege_record_, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_time_);
  }
  proto::ReunionRecordBin::set_reunion_finish_time(record_bin, this->finish_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_activated_);
  }
  proto::ReunionRecordBin::set_is_activated(record_bin, this->is_activated_);
  proto::ReunionRecordBin::set_game_version(record_bin, &this->game_version_);
  return 0;
};

// Line 181: range 0000000016CEA1E4-0000000016CEA284
int32_t __cdecl Reunion::onLogin(Reunion *const this)
{
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  if ( !Player::isRelogin(this->player_) )
  {
    Reunion::tryAutoSignIn(this);
    Reunion::tryRefreshPrivilegeCount(this);
  }
  return 0;
};

// Line 196: range 0000000016CEA286-0000000016CEA45F
int32_t __cdecl Reunion::onDailyRefresh(Reunion *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::ReunionBriefInfo *v5; // rdx
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:204";
  *(_QWORD *)(v1 + 16) = Reunion::onDailyRefresh;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( !Reunion::isFinished(this) && Reunion::isActivated(this) )
  {
    Reunion::tryAutoSignIn(this);
    Reunion::tryRefreshPrivilegeCount(this);
    proto::ReunionDailyRefreshNotify::ReunionDailyRefreshNotify((proto::ReunionDailyRefreshNotify *const)(v1 + 32));
    v5 = proto::ReunionDailyRefreshNotify::mutable_reunion_brief_info((proto::ReunionDailyRefreshNotify *const)(v1 + 32));
    Reunion::fillBriefInfo(this, v5);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
    proto::ReunionDailyRefreshNotify::~ReunionDailyRefreshNotify((proto::ReunionDailyRefreshNotify *const)(v1 + 32));
  }
  result = 0;
  if ( v7 == (char *)v1 )
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
  return result;
};

// Line 211: range 0000000016CEA460-0000000016CEAD30
__int64 __fastcall Reunion::activate(Reunion *const this, __int32 schedule_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  GameserverService *v8; // rsi
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t v10; // ecx
  char v11; // al
  uint32_t v12; // ecx
  char v13; // dl
  bool v14; // dl
  __int64 v15; // rsi
  uint32_t v16; // ecx
  char v17; // al
  uint32_t v18; // ecx
  char v19; // al
  __int64 v20; // rsi
  uint32_t v21; // ecx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rcx
  Player *player; // r14
  __int64 result; // rax
  std::string v31; // [rsp+0h] [rbp-F0h]
  Reunion *thisa; // [rsp+8h] [rbp-E8h]
  google::protobuf::uint32 now; // [rsp+14h] [rbp-DCh]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v35; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v36; // [rsp+40h] [rbp-B0h] BYREF
  char v37[144]; // [rsp+60h] [rbp-90h] BYREF

  v31._M_string_length = (std::string::size_type)this;
  HIDWORD(v31._M_dataplus._M_p) = schedule_id;
  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 10 holder:244 48 4 15 schedule_id:210 64 16 11 log_ptr:245";
  *(_QWORD *)(v2 + 16) = Reunion::activate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = schedule_id;
  if ( !Reunion::isFinished(this) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "activate",
      214);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      &v36,
      (const char (*)[38])"[REUNION] ongoing reunion not finish!");
    common::milog::MiLogStream::~MiLogStream(&v36);
    v5 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    *(&v31._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::ReunionExcelConfigMgrBase::findReunionScheduleExcelConfig(
                                                                          &v6->design_config.txt_config_mgr.reunion_config_mgr,
                                                                          *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v35);
    if ( *(&v31._anon_0._M_allocated_capacity + 1) )
    {
      Reunion::clearAll(this);
      HIDWORD(v31._anon_0._M_allocated_capacity) = common::tools::TimeUtils::getNow();
      v8 = ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
      v10 = 86400
          * ConstValueExcelConfigMgr::getReunionLastTime(&v9->design_config.txt_config_mgr.const_value_config_mgr)
          + HIDWORD(v31._anon_0._M_allocated_capacity);
      v11 = *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v8) = v11 != 0;
        __asan_report_store4(&this->finish_time_, v8, (_BYTE)this + 32);
      }
      this->finish_time_ = v10;
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v35);
      if ( *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1) + 16) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1) + 16) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(&v31._anon_0._M_allocated_capacity + 1) + 16);
      }
      v12 = *(_DWORD *)(*(&v31._anon_0._M_allocated_capacity + 1) + 16);
      v13 = *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000);
      LOBYTE(v8) = v13 != 0;
      v14 = v13 != 0 && (char)((((_BYTE)this + 28) & 7) + 3) >= v13;
      if ( v14 )
        __asan_report_store4(&this->first_gift_reward_id_, v8, v14);
      this->first_gift_reward_id_ = v12;
      v15 = ((v31._anon_0._M_local_buf[8] + 20) & 7u) + 3;
      if ( *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1) + 20) >> 3) + 0x7FFF8000) != 0
        && (char)(((v31._anon_0._M_local_buf[8] + 20) & 7) + 3) >= *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1)
                                                                              + 20) >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(*(&v31._anon_0._M_allocated_capacity + 1) + 20);
      }
      v16 = *(_DWORD *)(*(&v31._anon_0._M_allocated_capacity + 1) + 20);
      v17 = *(_BYTE *)(((unsigned __int64)&this->sign_in_record_ >> 3) + 0x7FFF8000);
      if ( v17 != 0 && v17 <= 3 )
      {
        LOBYTE(v15) = v17 != 0;
        __asan_report_store4(&this->sign_in_record_, v15, (_BYTE)this + 32);
      }
      this->sign_in_record_.reunion_sign_in_id = v16;
      if ( *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(*(&v31._anon_0._M_allocated_capacity + 1) + 24);
      }
      v18 = *(_DWORD *)(*(&v31._anon_0._M_allocated_capacity + 1) + 24);
      v19 = *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000);
      if ( v19 != 0 && v19 <= 3 )
      {
        LOBYTE(v15) = v19 != 0;
        __asan_report_store4(&this->mission_record_, v15, (_BYTE)this + 72);
      }
      this->mission_record_.mission_id = v18;
      v20 = ((v31._anon_0._M_local_buf[8] + 28) & 7u) + 3;
      if ( *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1) + 28) >> 3) + 0x7FFF8000) != 0
        && (char)(((v31._anon_0._M_local_buf[8] + 28) & 7) + 3) >= *(_BYTE *)(((*(&v31._anon_0._M_allocated_capacity + 1)
                                                                              + 28) >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(*(&v31._anon_0._M_allocated_capacity + 1) + 28);
      }
      v21 = *(_DWORD *)(*(&v31._anon_0._M_allocated_capacity + 1) + 28);
      v22 = *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v20) = v22 != 0;
        __asan_report_store4(&this->privilege_record_, v20, (_BYTE)this + 16);
      }
      this->privilege_record_.privilege_id = v21;
      v23 = ((_BYTE)this + 36) & 7;
      v24 = (*(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000));
      if ( (_BYTE)v24 )
        __asan_report_store1(&this->is_activated_, v23, v24);
      this->is_activated_ = 1;
      std::string::operator=(&this->game_version_, &off_25F349C0);
      if ( Reunion::postActivate(this) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reunion/reunion.cpp",
          "activate",
          240);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          &v36,
          (const char (*)[30])"[REUNION] postActivate failed");
        common::milog::MiLogStream::~MiLogStream(&v36);
        v5 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v36, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xBF5u, v31);
        std::string::~string(&v36);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyReunionActivate>();
        v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyReunionActivate::set_game_version(v26, &thisa->game_version_);
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        proto_log::PlayerLogBodyReunionActivate::set_start_time(v27, now);
        v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionActivate,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->finish_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->finish_time_);
        }
        proto_log::PlayerLogBodyReunionActivate::set_finish_time(v28, thisa->finish_time_);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&thisa->player_);
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v35, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyReunionActivate,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyReunionActivate> *)(v2 + 64));
        Player::printStatLog(player, &p_body_ptr, &v35, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v35);
        v5 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyReunionActivate>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyReunionActivate> *const)(v2 + 64));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "activate",
        220);
      v7 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v36,
             (const char (*)[52])"[REUNION] schedule_config_ptr is null, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v36);
      v5 = -1;
    }
  }
  result = v5;
  if ( v37 == (char *)v2 )
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

// Line 254: range 0000000016CEAD32-0000000016CEADA1
int32_t __cdecl Reunion::deactivate(Reunion *const this)
{
  __int64 v1; // rsi
  __int64 v2; // rdx

  Reunion::delMissionWatchers(this);
  Reunion::clearAll(this);
  v1 = ((_BYTE)this + 36) & 7;
  v2 = (*(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v1 >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store1(&this->is_activated_, v1, v2);
  this->is_activated_ = 0;
  return 0;
};

// Line 262: range 0000000016CEADA2-0000000016CEAE57
int32_t __cdecl Reunion::postActivate(Reunion *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  Reunion::tryAutoSignIn(this);
  if ( Reunion::tryAddReunionWatchers(this) )
  {
    common::milog::MiLogStream::create(
      &v2,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "postActivate",
      269);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v2,
      (const char (*)[39])"[REUNION] tryAddReunionWatchers failed");
    common::milog::MiLogStream::~MiLogStream(&v2);
    return -1;
  }
  else
  {
    Reunion::tryRefreshPrivilegeCount(this);
    return 0;
  }
};

// Line 279: range 0000000016CEAE58-0000000016CEAEFC
bool __cdecl Reunion::isFinished(const Reunion *const this)
{
  uint32_t now; // [rsp+1Ch] [rbp-4h]

  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_time_);
  }
  if ( !this->finish_time_ )
    return 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_time_);
  }
  return now >= this->finish_time_;
};

// Line 289: range 0000000016CEAEFE-0000000016CEB059
void __cdecl Reunion::clearAll(Reunion *const this)
{
  __int64 v1; // rsi
  bool v2; // dl
  __int64 v3; // rsi
  __int64 v4; // rdx

  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->finish_time_, v1, (_BYTE)this + 32);
  }
  this->finish_time_ = 0;
  if ( *(char *)(((unsigned __int64)&this->is_taken_first_gift_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_first_gift_reward_, v1, &this->is_taken_first_gift_reward_);
  this->is_taken_first_gift_reward_ = 0;
  v2 = *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                        + 0x7FFF8000);
  if ( v2 )
    __asan_report_store4(&this->first_gift_reward_id_, (((_BYTE)this + 28) & 7u) + 3, v2);
  this->first_gift_reward_id_ = 0;
  ReunionSignInRecord::clear(&this->sign_in_record_);
  ReunionMissionRecord::clear(&this->mission_record_);
  ReunionPrivilegeRecord::clear(&this->privilege_record_);
  v3 = ((_BYTE)this + 36) & 7;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v3 >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store1(&this->is_activated_, v3, v4);
  this->is_activated_ = 0;
  std::string::clear(&this->game_version_);
};

// Line 301: range 0000000016CEB05A-0000000016CEB341
bool __cdecl Reunion::tryAutoSignIn(Reunion *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  time_t v4; // rdx
  time_t v5; // rcx
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rcx
  __int64 reunion_sign_in_id; // rsi
  bool v8; // dl
  uint32_t now; // [rsp+1Ch] [rbp-54h]
  uint32_t time_offset; // [rsp+20h] [rbp-50h]
  uint32_t new_sign_in_count; // [rsp+24h] [rbp-4Ch]
  const data::ReunionSignInExcelConfig *sign_in_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-30h] BYREF

  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "tryAutoSignIn",
      304);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v14,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v3->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    v4 = time_offset;
    v5 = now;
    if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.last_sign_in_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->sign_in_record_.last_sign_in_time);
    }
    if ( common::tools::TimeUtils::isSameDay(this->sign_in_record_.last_sign_in_time, v5, v4) )
    {
      return 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.sign_in_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.sign_in_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->sign_in_record_.sign_in_count);
      }
      new_sign_in_count = this->sign_in_record_.sign_in_count + 1;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v13);
      p_reunion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.reunion_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_record_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->sign_in_record_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->sign_in_record_);
      }
      reunion_sign_in_id = this->sign_in_record_.reunion_sign_in_id;
      sign_in_config_ptr = ReunionExcelConfigMgr::findReunionSignInExcelConfigByDayIndex(
                             p_reunion_config_mgr,
                             reunion_sign_in_id,
                             new_sign_in_count);
      std::shared_ptr<Config>::~shared_ptr(&v13);
      if ( sign_in_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.last_sign_in_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.last_sign_in_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->sign_in_record_.last_sign_in_time, reunion_sign_in_id, (_BYTE)this + 40);
        }
        this->sign_in_record_.last_sign_in_time = now;
        v8 = *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.sign_in_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.sign_in_count >> 3)
                                                              + 0x7FFF8000);
        if ( v8 )
          __asan_report_store4(&this->sign_in_record_.sign_in_count, (((_BYTE)this + 36) & 7u) + 3, v8);
        this->sign_in_record_.sign_in_count = new_sign_in_count;
        return 1;
      }
      else
      {
        return 0;
      }
    }
  }
};

// Line 326: range 0000000016CEB342-0000000016CEB625
int32_t __cdecl Reunion::getWatcherSet(
        Reunion *const this,
        const std::set<unsigned int> *watcher_id_set,
        std::set<unsigned int> *cur_watcher_set)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rdx
  PlayerBasicComp *BasicComp; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rax
  _DWORD *v9; // rdx
  int32_t result; // eax
  uint32_t player_level; // [rsp+2Ch] [rbp-B4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-B0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-A8h] BYREF
  const ReunionExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-A0h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v17; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v18; // [rsp+60h] [rbp-80h] BYREF
  char v19[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 watcher_id:331";
  *(_QWORD *)(v3 + 16) = Reunion::getWatcherSet;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/reunion/reunion.cpp",
    "getWatcherSet",
    327);
  v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
         &v18,
         (const char (*)[40])"[REUNION] getWatcherSet watcher_id_set:");
  common::milog::MiLogStream::operator<<<unsigned int>(v6, watcher_id_set);
  common::milog::MiLogStream::~MiLogStream(&v18);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.reunion_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  player_level = PlayerBasicComp::getLevel(BasicComp);
  std::set<unsigned int>::clear(cur_watcher_set);
  __for_range = watcher_id_set;
  __for_begin._M_node = std::set<unsigned int>::begin(watcher_id_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(watcher_id_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    *(_DWORD *)(v3 + 32) = *v9;
    if ( ReunionExcelConfigMgr::isLevelInWatcherLevelRange(config_mgr, *(_DWORD *)(v3 + 32), player_level) )
      std::set<unsigned int>::insert(cur_watcher_set, (const std::set<unsigned int>::value_type *)(v3 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = 0;
  if ( v19 == (char *)v3 )
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

// Line 342: range 0000000016CEB626-0000000016CEBA2E
int32_t __cdecl Reunion::delMissionWatchers(Reunion *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rax
  _DWORD *v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t WatcherComp; // eax
  bool v11; // r14
  PlayerWatcherComp *v12; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-B8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 watcher_id:343";
  *(_QWORD *)(v1 + 16) = Reunion::delMissionWatchers;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->mission_record_.watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->mission_record_.watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->mission_record_.watcher_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 32) = *v5;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v6->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( watcher_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v19, WatcherComp);
      v11 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v19);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v19);
      if ( v11 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        v12 = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::delWatcher(v12, *(_DWORD *)(v1 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "delMissionWatchers",
        348);
      v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v20,
             (const char (*)[22])"findWatcherConfig id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->mission_record_.watcher_set);
  std::set<unsigned int>::clear(&this->mission_record_.finished_watcher_set);
  std::set<unsigned int>::clear(&this->mission_record_.taken_reward_watcher_set);
  result = 0;
  if ( v21 == (char *)v1 )
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

// Line 363: range 0000000016CEBA30-0000000016CEBB7E
int32_t __cdecl Reunion::tryRefreshPrivilegeCount(Reunion *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  time_t v2; // rdx
  time_t v3; // rcx
  __int64 v5; // rsi
  bool v6; // dl
  uint32_t now; // [rsp+18h] [rbp-18h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-10h] BYREF

  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v9);
  v2 = time_offset;
  v3 = now;
  if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.last_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->privilege_record_.last_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->privilege_record_.last_refresh_time);
  }
  if ( common::tools::TimeUtils::isSameDay(this->privilege_record_.last_refresh_time, v3, v2) )
    return 0;
  v5 = (((_BYTE)this + 20) & 7u) + 3;
  v6 = *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3)
                                                        + 0x7FFF8000);
  if ( v6 )
    __asan_report_store4(&this->privilege_record_.cur_day_count, v5, v6);
  this->privilege_record_.cur_day_count = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.last_refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->privilege_record_.last_refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->privilege_record_.last_refresh_time, v5, (_BYTE)this + 24);
  }
  this->privilege_record_.last_refresh_time = now;
  return 0;
};

// Line 376: range 0000000016CEBB80-0000000016CEC37C
void __cdecl Reunion::onWatcherProgressUpdate(Reunion *const this, const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  proto::ReunionWatcherInfo *v10; // rsi
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  std::string eventa; // [rsp+0h] [rbp-130h]
  const WatcherProgressUpdateEvent *eventb; // [rsp+0h] [rbp-130h]
  Reunion *thisa; // [rsp+8h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v21; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-F0h] BYREF
  char v23[208]; // [rsp+60h] [rbp-D0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:404 64 16 11 log_ptr:405 96 32 10 notify:399";
  *(_QWORD *)(v2 + 16) = Reunion::onWatcherProgressUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "onWatcherProgressUpdate",
      379);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v22,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_reunion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.reunion_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->watcher_id);
    }
    *(&eventa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::ReunionExcelConfigMgrBase::findReunionWatcherExcelConfig(
                                                                             p_reunion_config_mgr,
                                                                             event->watcher_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
    if ( !*(&eventa._anon_0._M_allocated_capacity + 1) )
      goto LABEL_45;
    if ( *(char *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 104) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(*(&eventa._anon_0._M_allocated_capacity + 1) + 104);
    if ( *(_BYTE *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 104) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/reunion/reunion.cpp",
        "onWatcherProgressUpdate",
        386);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             &v22,
             (const char (*)[21])" [REUNION] watcher: ");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->watcher_id);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v8, (const char (*)[17])" marked disused.");
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    else
    {
LABEL_45:
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
             &this->mission_record_.watcher_set,
             &event->watcher_id) )
      {
        if ( *(char *)(((unsigned __int64)&event->is_finished >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&event->is_finished);
        if ( event->is_finished
          && !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                &this->mission_record_.finished_watcher_set,
                &event->watcher_id) )
        {
          std::set<unsigned int>::insert(&this->mission_record_.finished_watcher_set, &event->watcher_id);
          proto::UpdateReunionWatcherNotify::UpdateReunionWatcherNotify((proto::UpdateReunionWatcherNotify *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->mission_record_);
          }
          proto::UpdateReunionWatcherNotify::set_mission_id(
            (proto::UpdateReunionWatcherNotify *const)(v2 + 96),
            this->mission_record_.mission_id);
          v10 = proto::UpdateReunionWatcherNotify::mutable_watcher_info((proto::UpdateReunionWatcherNotify *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(eventa._M_dataplus._M_p + 24);
          }
          Reunion::fillWatcherInfo(this, *((_DWORD *)eventa._M_dataplus._M_p + 6), v10);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v22, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBF7u, eventa);
          std::string::~string(&v22);
          common::tools::perf::make_shared<proto_log::PlayerLogBodyReunionMissionStateChange>();
          v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          proto_log::PlayerLogBodyReunionMissionStateChange::set_game_version(v12, &thisa->game_version_);
          v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->mission_record_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&thisa->mission_record_);
          }
          proto_log::PlayerLogBodyReunionMissionStateChange::set_mission_id(v13, thisa->mission_record_.mission_id);
          v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&eventb->watcher_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&eventb->watcher_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&eventb->watcher_id);
          }
          proto_log::PlayerLogBodyReunionMissionStateChange::set_watcher_id(v14, eventb->watcher_id);
          v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          proto_log::PlayerLogBodyReunionMissionStateChange::set_state(v15, 2u);
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&thisa->player_);
          player = thisa->player_;
          std::shared_ptr<google::protobuf::Message>::shared_ptr(&v21, 0LL);
          std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange,void>(
            &p_body_ptr,
            (const std::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange> *)(v2 + 64));
          Player::printStatLog(player, &p_body_ptr, &v21, 0xEu);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
          std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v21);
          std::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange> *const)(v2 + 64));
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
          proto::UpdateReunionWatcherNotify::~UpdateReunionWatcherNotify((proto::UpdateReunionWatcherNotify *const)(v2 + 96));
        }
      }
    }
  }
  if ( v23 == (char *)v2 )
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

// Line 415: range 0000000016CEC37E-0000000016CEC423
bool __cdecl Reunion::hasSignInReward(const Reunion *const this)
{
  std::vector<unsigned int>::size_type v3; // rcx

  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
    return 0;
  v3 = std::vector<unsigned int>::size(&this->sign_in_record_.reward_day_vec);
  if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.sign_in_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sign_in_record_.sign_in_count >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sign_in_record_.sign_in_count);
  }
  return v3 < this->sign_in_record_.sign_in_count;
};

// Line 424: range 0000000016CEC424-0000000016CECB44
bool __cdecl Reunion::hasMissionReward(const Reunion *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  bool result; // al
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rax
  _DWORD *v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  uint32_t cur_score; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v13; // rax
  uint32_t *v14; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  uint32_t now; // [rsp+1Ch] [rbp-E4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
  const data::ReunionMissionExcelConfig *mission_config_ptr; // [rsp+30h] [rbp-D0h]
  const data::ReunionWatcherExcelConfig *watcher_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+70h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 14 watcher_id:430 64 8 5 i:453";
  *(_QWORD *)(v1 + 16) = Reunion::hasMissionReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    result = 0;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    __for_range = &this->mission_record_.finished_watcher_set;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->mission_record_.finished_watcher_set)._M_node;
    *(std::set<unsigned int>::iterator *)(v1 + 64) = std::set<unsigned int>::end(&this->mission_record_.finished_watcher_set);
    while ( std::operator!=(&__for_begin, (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v1 + 64)) )
    {
      v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      *(_DWORD *)(v1 + 48) = *v7;
      if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
              &this->mission_record_.taken_reward_watcher_set,
              (const unsigned int *)(v1 + 48)) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v25);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
        watcher_config_ptr = data::ReunionExcelConfigMgrBase::findReunionWatcherExcelConfig(
                               &v8->design_config.txt_config_mgr.reunion_config_mgr,
                               *(_DWORD *)(v1 + 48));
        std::shared_ptr<Config>::~shared_ptr(&v25);
        if ( watcher_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_unlock_day >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_unlock_day >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&watcher_config_ptr->reward_unlock_day);
          }
          if ( now >= Reunion::getBeginTimeByOpenDay(this, watcher_config_ptr->reward_unlock_day) )
          {
            result = 1;
            goto LABEL_43;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/reunion/reunion.cpp",
            "hasMissionReward",
            439);
          v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 &v26,
                 (const char (*)[48])"[REUNION] watcher config not found, watcher_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 48));
          common::milog::MiLogStream::~MiLogStream(&v26);
        }
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    p_reunion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.reunion_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->mission_record_);
    }
    mission_config_ptr = data::ReunionExcelConfigMgrBase::findReunionMissionExcelConfig(
                           p_reunion_config_mgr,
                           this->mission_record_.mission_id);
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( mission_config_ptr )
    {
      for ( *(_QWORD *)(v1 + 64) = 0LL; ; ++*(_QWORD *)(v1 + 64) )
      {
        if ( std::vector<unsigned int>::size(&mission_config_ptr->target_score_list) <= *(_QWORD *)(v1 + 64) )
        {
          result = 0;
          goto LABEL_43;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->mission_record_.cur_score);
        }
        cur_score = this->mission_record_.cur_score;
        v13 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    &mission_config_ptr->target_score_list,
                                                                                                    *(_QWORD *)(v1 + 64));
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        if ( cur_score >= *v14
          && (std::vector<bool>::size(&this->mission_record_.is_taken_reward_vec) <= *(_QWORD *)(v1 + 64)
           || !std::vector<bool>::operator[](&this->mission_record_.is_taken_reward_vec, *(_QWORD *)(v1 + 64))) )
        {
          break;
        }
      }
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/reunion/reunion.cpp",
        "hasMissionReward",
        459);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v26, (const char (*)[16])" reward @index:");
      v17 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v16,
              (const unsigned __int64 *)(v1 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              v17,
              (const char (*)[23])" wait to take. @score:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              &this->mission_record_.cur_score);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v19, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "hasMissionReward",
        450);
      v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v26,
              (const char (*)[48])"[REUNION] mission config not found, mission_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->mission_record_.mission_id);
      common::milog::MiLogStream::~MiLogStream(&v26);
      result = 0;
    }
  }
LABEL_43:
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

// Line 469: range 0000000016CECB46-0000000016CECF6E
void __cdecl Reunion::fillBriefInfo(const Reunion *const this, proto::ReunionBriefInfo *brief_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool hasSignInReward; // dl
  bool hasMissionReward; // dl
  uint32_t LastActivateReunionTime; // edx
  proto::ReunionPrivilegeInfo *v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 18 first_day_time:480";
  *(_QWORD *)(v2 + 16) = Reunion::fillBriefInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->finish_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->finish_time_);
  }
  proto::ReunionBriefInfo::set_finish_time(brief_info, this->finish_time_);
  if ( *(char *)(((unsigned __int64)&this->is_taken_first_gift_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_taken_first_gift_reward_);
  proto::ReunionBriefInfo::set_is_taken_first_gift(brief_info, this->is_taken_first_gift_reward_);
  if ( *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->first_gift_reward_id_);
  }
  proto::ReunionBriefInfo::set_first_gift_reward_id(brief_info, this->first_gift_reward_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->sign_in_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->sign_in_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->sign_in_record_);
  }
  proto::ReunionBriefInfo::set_sign_in_config_id(brief_info, this->sign_in_record_.reunion_sign_in_id);
  hasSignInReward = Reunion::hasSignInReward(this);
  proto::ReunionBriefInfo::set_sign_in_has_reward(brief_info, hasSignInReward);
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_);
  }
  proto::ReunionBriefInfo::set_mission_id(brief_info, this->mission_record_.mission_id);
  hasMissionReward = Reunion::hasMissionReward(this);
  proto::ReunionBriefInfo::set_mission_has_reward(brief_info, hasMissionReward);
  if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->privilege_record_);
  }
  proto::ReunionBriefInfo::set_privilege_id(brief_info, this->privilege_record_.privilege_id);
  proto::ReunionBriefInfo::set_version(brief_info, &this->game_version_);
  if ( *(_BYTE *)(((unsigned __int64)&this->reunion_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->reunion_comp_);
  LastActivateReunionTime = PlayerReunionComp::getLastActivateReunionTime(this->reunion_comp_);
  proto::ReunionBriefInfo::set_start_time(brief_info, LastActivateReunionTime);
  *(_DWORD *)(v2 + 32) = Reunion::getBeginTimeByOpenDay(this, 0);
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/reunion/reunion.cpp",
    "fillBriefInfo",
    481);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(&v9, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v9);
  proto::ReunionBriefInfo::set_first_day_start_time(brief_info, *(_DWORD *)(v2 + 32));
  v8 = proto::ReunionBriefInfo::mutable_privilege_info(brief_info);
  Reunion::fillPrivilegeInfo(this, v8);
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 487: range 0000000016CECF70-0000000016CECF99
void __cdecl Reunion::fillSignInInfo(Reunion *const this, proto::ReunionSignInInfo *sign_in_info)
{
  ReunionSignInRecord::toClient(&this->sign_in_record_, sign_in_info);
};

// Line 492: range 0000000016CECF9A-0000000016CED4E0
__int64 __fastcall Reunion::fillWatcherInfo(
        Reunion *const this,
        uint32_t watcher_id,
        proto::ReunionWatcherInfo *watcher_info)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t WatcherComp; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int v13; // r15d
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Progress; // eax
  bool v16; // al
  uint32_t BeginTimeByOpenDay; // eax
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const data::ReunionWatcherExcelConfig *watcher_config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 watcher_id:491 64 16 15 watcher_ptr:506";
  *(_QWORD *)(v4 + 16) = Reunion::fillWatcherInfo;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 48) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v4 + 64));
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  watcher_config_ptr = data::ReunionExcelConfigMgrBase::findReunionWatcherExcelConfig(
                         &v7->design_config.txt_config_mgr.reunion_config_mgr,
                         *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 64));
  if ( !watcher_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "fillWatcherInfo",
      496);
    v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v22,
           (const char (*)[48])"[REUNION] watcher config not found, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    v3 = -1;
    goto LABEL_23;
  }
  proto::ReunionWatcherInfo::set_watcher_id(watcher_info, *(_DWORD *)(v4 + 48));
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->mission_record_.finished_watcher_set,
         (const unsigned int *)(v4 + 48)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&watcher_config_ptr->progress);
    }
    proto::ReunionWatcherInfo::set_cur_progress(watcher_info, watcher_config_ptr->progress);
LABEL_18:
    if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&watcher_config_ptr->progress);
    }
    proto::ReunionWatcherInfo::set_total_progress(watcher_info, watcher_config_ptr->progress);
    v16 = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &this->mission_record_.taken_reward_watcher_set,
            (const unsigned int *)(v4 + 48));
    proto::ReunionWatcherInfo::set_is_taken_reward(watcher_info, v16);
    if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_unlock_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_unlock_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&watcher_config_ptr->reward_unlock_day);
    }
    BeginTimeByOpenDay = Reunion::getBeginTimeByOpenDay(this, watcher_config_ptr->reward_unlock_day);
    proto::ReunionWatcherInfo::set_reward_unlock_time(watcher_info, BeginTimeByOpenDay);
    v3 = 0;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v4 + 64), WatcherComp);
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "fillWatcherInfo",
      509);
    v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            &v22,
            (const char (*)[29])"[REUNION] findWatcher fails:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    v3 = -1;
    v13 = 0;
  }
  else
  {
    v14 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    Progress = BaseWatcher::getProgress(v14);
    proto::ReunionWatcherInfo::set_cur_progress(watcher_info, Progress);
    v13 = 1;
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 64));
  if ( v13 == 1 )
    goto LABEL_18;
LABEL_23:
  result = v3;
  if ( v23 == (char *)v4 )
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

// Line 521: range 0000000016CED4E2-0000000016CEDA65
void __cdecl Reunion::fillMissionInfo(Reunion *const this, proto::ReunionMissionInfo *mission_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rax
  _DWORD *v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  bool v12; // dl
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  std::vector<bool> *__for_range_0; // [rsp+38h] [rbp-C8h]
  const data::ReunionWatcherExcelConfig *watcher_config_ptr; // [rsp+40h] [rbp-C0h]
  proto::ReunionWatcherInfo *watcher_info; // [rsp+48h] [rbp-B8h]
  std::vector<bool>::iterator __for_begin_0; // [rsp+50h] [rbp-B0h] BYREF
  std::vector<bool>::iterator __for_end_0; // [rsp+60h] [rbp-A0h] BYREF
  std::_Bit_iterator::reference v21; // [rsp+70h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-80h] BYREF
  char v23[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:523";
  *(_QWORD *)(v2 + 16) = Reunion::fillMissionInfo;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_);
  }
  proto::ReunionMissionInfo::set_mission_id(mission_info, this->mission_record_.mission_id);
  __for_range = &this->mission_record_.watcher_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->mission_record_.watcher_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->mission_record_.watcher_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    watcher_config_ptr = data::ReunionExcelConfigMgrBase::findReunionWatcherExcelConfig(
                           &v7->design_config.txt_config_mgr.reunion_config_mgr,
                           *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v21);
    if ( watcher_config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&watcher_config_ptr->is_disuse >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&watcher_config_ptr->is_disuse);
      if ( watcher_config_ptr->is_disuse )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/reunion/reunion.cpp",
          "fillMissionInfo",
          533);
        v9 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               &v22,
               (const char (*)[21])" [REUNION] watcher: ");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v10, (const char (*)[17])" marked disused.");
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        watcher_info = proto::ReunionMissionInfo::add_watcher_list(mission_info);
        if ( (unsigned int)Reunion::fillWatcherInfo(this, *(_DWORD *)(v2 + 32), watcher_info) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/reunion/reunion.cpp",
            "fillMissionInfo",
            539);
          v11 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v22,
                  (const char (*)[45])"[REUNION] fillWatcherInfo fails, watcher_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v22);
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "fillMissionInfo",
        528);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v22,
             (const char (*)[48])"[REUNION] watcher config not found, watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_.cur_score);
  }
  proto::ReunionMissionInfo::set_cur_score(mission_info, this->mission_record_.cur_score);
  __for_range_0 = &this->mission_record_.is_taken_reward_vec;
  __for_begin_0 = std::vector<bool>::begin(&this->mission_record_.is_taken_reward_vec);
  __for_end_0 = std::vector<bool>::end(__for_range_0);
  while ( std::_Bit_iterator_base::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v21 = std::_Bit_iterator::operator*(&__for_begin_0);
    v12 = std::_Bit_reference::operator bool(&v21);
    proto::ReunionMissionInfo::add_is_taken_reward_list(mission_info, v12);
    std::_Bit_iterator::operator++(&__for_begin_0);
  }
  if ( v23 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 551: range 0000000016CEDA66-0000000016CEDA92
void __cdecl Reunion::fillPrivilegeInfo(const Reunion *const this, proto::ReunionPrivilegeInfo *mission_info)
{
  ReunionPrivilegeRecord::toClient(&this->privilege_record_, mission_info);
};

// Line 556: range 0000000016CEDA94-0000000016CEE41D
int32_t __cdecl Reunion::takeFirstGift(Reunion *const this, uint32_t *reward_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  int32_t M_array_high; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 v11; // rsi
  uint32_t first_gift_reward_id; // ecx
  char v13; // dl
  bool v14; // dl
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeFirstGift,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeFirstGift,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  Player *player; // r14
  int32_t result; // eax
  std::string v19; // [rsp+0h] [rbp-170h]
  char *v20; // [rsp+0h] [rbp-170h]
  PlayerItemComp *ItemComp; // [rsp+8h] [rbp-168h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-160h]
  PlayerItemComp *__l; // [rsp+10h] [rbp-160h]
  std::allocator<unsigned int> __a; // [rsp+37h] [rbp-139h] BYREF
  std::initializer_list<unsigned int> v26; // [rsp+38h] [rbp-138h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-120h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+60h] [rbp-110h] BYREF
  std::string v29; // [rsp+80h] [rbp-F0h] BYREF
  char v30[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v30;
  v19._M_dataplus._M_p = v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 10 holder:557 64 16 11 log_ptr:586 96 24 17 action_reason:571";
  *(_QWORD *)(v2 + 16) = Reunion::takeFirstGift;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v29, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBF8u, v19);
  std::string::~string(&v29);
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v29,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "takeFirstGift",
      560);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)&v29,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
    M_array_high = 9002;
    goto LABEL_43;
  }
  if ( *(char *)(((unsigned __int64)&this->is_taken_first_gift_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_taken_first_gift_reward_);
  if ( this->is_taken_first_gift_reward_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeFirstGift",
      565);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)&v29,
      (const char (*)[39])"[REUNION] first gift cannot take twice");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
    M_array_high = 9003;
    goto LABEL_43;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->first_gift_reward_id_);
  }
  if ( this->first_gift_reward_id_ )
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v2 + 96),
      ACTION_REASON_REUNION_FIRST_GIFT_REWARD,
      ITEM_LIMIT_REUNION_REWARD);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->first_gift_reward_id_);
    }
    LODWORD(v26._M_array) = this->first_gift_reward_id_;
    __la._M_array = (std::initializer_list<unsigned int>::iterator)&v26;
    __la._M_len = 1LL;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&reward_id_vec, __la, &__a);
    HIDWORD(v26._M_array) = PlayerItemComp::checkGrantRewards(ItemComp, &reward_id_vec, (const ActionReason *)(v2 + 96));
    std::vector<unsigned int>::~vector(&reward_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( HIDWORD(v26._M_array) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "takeFirstGift",
        577);
      v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             (common::milog::MiLogStream *const)&v29,
             (const char (*)[36])"checkGrantRewards fail, reward_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->first_gift_reward_id_);
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v29);
      M_array_high = HIDWORD(v26._M_array);
      goto LABEL_43;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    __l = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->first_gift_reward_id_);
    }
    LODWORD(v26._M_array) = this->first_gift_reward_id_;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&reward_id_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v26), &__a);
    PlayerItemComp::grantRewards(__l, &reward_id_vec, (const ActionReason *)(v2 + 96), 0LL);
    std::vector<unsigned int>::~vector(&reward_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  v11 = (((_BYTE)this + 28) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->first_gift_reward_id_);
  }
  first_gift_reward_id = this->first_gift_reward_id_;
  v13 = *(_BYTE *)(((unsigned __int64)reward_id >> 3) + 0x7FFF8000);
  LOBYTE(v11) = v13 != 0;
  v14 = v13 != 0 && (char)(((unsigned __int8)reward_id & 7) + 3) >= v13;
  if ( v14 )
    __asan_report_store4(reward_id, v11, v14);
  *reward_id = first_gift_reward_id;
  if ( *(char *)(((unsigned __int64)&this->is_taken_first_gift_reward_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_taken_first_gift_reward_, v11, &this->is_taken_first_gift_reward_);
  this->is_taken_first_gift_reward_ = 1;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyReunionTakeFirstGift>();
  v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeFirstGift,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeFirstGift,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyReunionTakeFirstGift::set_game_version(v15, &this->game_version_);
  v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeFirstGift,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeFirstGift,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_gift_reward_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->first_gift_reward_id_);
  }
  proto_log::PlayerLogBodyReunionTakeFirstGift::set_reward_id(v16, this->first_gift_reward_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyReunionTakeFirstGift,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v26._M_len,
    (const std::shared_ptr<proto_log::PlayerLogBodyReunionTakeFirstGift> *)(v2 + 64));
  Player::printStatLog(player, (MessagePtr *)&v26._M_len, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v26._M_len);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  M_array_high = 0;
  std::shared_ptr<proto_log::PlayerLogBodyReunionTakeFirstGift>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyReunionTakeFirstGift> *const)(v2 + 64));
LABEL_43:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = M_array_high;
  if ( v20 == (char *)v2 )
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

// Line 595: range 0000000016CEE41E-0000000016CEED6E
__int64 __fastcall Reunion::takeSignInReward(Reunion *const this, __int32 reward_day)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int32 M_allocated_capacity_high; // r14d
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rdi
  uint32_t v8; // edx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  PlayerItemComp *ItemComp; // rax
  PlayerItemComp *v19; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v26; // [rsp+0h] [rbp-130h]
  Reunion *thisa; // [rsp+8h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> v29; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+60h] [rbp-D0h] BYREF

  v26._M_string_length = (std::string::size_type)this;
  HIDWORD(v26._M_dataplus._M_p) = reward_day;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:636 48 4 14 reward_day:594 64 16 11 log_ptr:637 96 24 17 action_reason:622";
  *(_QWORD *)(v2 + 16) = Reunion::takeSignInReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = reward_day;
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "takeSignInReward",
      598);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v30,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v30);
    M_allocated_capacity_high = 9002;
    goto LABEL_37;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  p_reunion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.reunion_config_mgr;
  v8 = *(_DWORD *)(v2 + 48);
  if ( *(_BYTE *)(((v26._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v26._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    p_reunion_config_mgr = (ReunionExcelConfigMgr *)(v26._M_string_length + 32);
    __asan_report_load4(v26._M_string_length + 32);
  }
  *(&v26._anon_0._M_allocated_capacity + 1) = (std::string::size_type)ReunionExcelConfigMgr::findReunionSignInExcelConfigByDayIndex(
                                                                        p_reunion_config_mgr,
                                                                        *(_DWORD *)(v26._M_string_length + 32),
                                                                        v8);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v29);
  if ( !*(&v26._anon_0._M_allocated_capacity + 1) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "takeSignInReward",
      604);
    v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v30,
           (const char (*)[49])"[REUNION] sign in config not found, sign_in_id: ");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v9,
            (const unsigned int *)(v26._M_string_length + 32));
    v11 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v10, (const char (*)[15])", reward_day: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v30);
    M_allocated_capacity_high = -1;
    goto LABEL_37;
  }
  if ( *(_BYTE *)(((v26._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v26._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((v26._M_string_length + 36) >> 3)
                                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(v26._M_string_length + 36);
  }
  if ( *(_DWORD *)(v26._M_string_length + 36) >= *(_DWORD *)(v2 + 48) )
  {
    if ( common::tools::MiscUtils::isContains<unsigned int>(
           (std::vector<unsigned int> *)(v26._M_string_length + 48),
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/reunion/reunion.cpp",
        "takeSignInReward",
        616);
      v17 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v30,
              (const char (*)[30])"already rewarded, reward_day:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v30);
      M_allocated_capacity_high = 9004;
      goto LABEL_37;
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(*(&v26._anon_0._M_allocated_capacity
                                                                                    + 1)
                                                                                  + 16)) )
    {
      ActionReason::ActionReason(
        (ActionReason *const)(v2 + 96),
        ACTION_REASON_REUNION_SIGN_IN_REWARD,
        ITEM_LIMIT_REUNION_REWARD);
      if ( *(_BYTE *)(((v26._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v26._M_string_length + 8);
      ItemComp = Player::getItemComp(*(Player *const *)(v26._M_string_length + 8));
      HIDWORD(v26._anon_0._M_allocated_capacity) = PlayerItemComp::checkGrantRewards(
                                                     ItemComp,
                                                     (const std::vector<unsigned int> *)(*(&v26._anon_0._M_allocated_capacity
                                                                                         + 1)
                                                                                       + 16),
                                                     (const ActionReason *)(v2 + 96));
      if ( HIDWORD(v26._anon_0._M_allocated_capacity) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/reunion/reunion.cpp",
          "takeSignInReward",
          628);
        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          &v30,
          (const char (*)[23])"checkGrantRewards fail");
        common::milog::MiLogStream::~MiLogStream(&v30);
        M_allocated_capacity_high = HIDWORD(v26._anon_0._M_allocated_capacity);
        goto LABEL_37;
      }
      if ( *(_BYTE *)(((v26._M_string_length + 8) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v26._M_string_length + 8);
      v19 = Player::getItemComp(*(Player *const *)(v26._M_string_length + 8));
      PlayerItemComp::grantRewards(
        v19,
        (const std::vector<unsigned int> *)(*(&v26._anon_0._M_allocated_capacity + 1) + 16),
        (const ActionReason *)(v2 + 96),
        0LL);
    }
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v26._M_string_length + 48),
      (const std::vector<unsigned int>::value_type *)(v2 + 48));
    if ( *(_BYTE *)(((v26._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v26._M_string_length + 8);
    BasicComp = Player::getBasicComp(*(Player *const *)(v26._M_string_length + 8));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v30, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xBF6u, v26);
    std::string::~string(&v30);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyReunionTakeSignInReward>();
    v21 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyReunionTakeSignInReward::set_game_version(v21, &thisa->game_version_);
    v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->sign_in_record_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->sign_in_record_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&thisa->sign_in_record_);
    }
    proto_log::PlayerLogBodyReunionTakeSignInReward::set_set_id(v22, thisa->sign_in_record_.reunion_sign_in_id);
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeSignInReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyReunionTakeSignInReward::set_day_index(v23, *(_DWORD *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&thisa->player_);
    player = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v29, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyReunionTakeSignInReward,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyReunionTakeSignInReward> *)(v2 + 64));
    Player::printStatLog(player, &p_body_ptr, &v29, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v29);
    M_allocated_capacity_high = 0;
    std::shared_ptr<proto_log::PlayerLogBodyReunionTakeSignInReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyReunionTakeSignInReward> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "takeSignInReward",
      610);
    v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            &v30,
            (const char (*)[22])"[REUNION] reward_day:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
    v14 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            v13,
            (const char (*)[31])" sign_in_record.sign_in_count:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v14,
            (const unsigned int *)(v26._M_string_length + 36));
    v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((v26._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v26._M_string_length + 8);
    operator<<(v16, *(const Player **)(v26._M_string_length + 8));
    common::milog::MiLogStream::~MiLogStream(&v30);
    M_allocated_capacity_high = -1;
  }
LABEL_37:
  result = M_allocated_capacity_high;
  if ( v31 == (char *)v2 )
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

// Line 647: range 0000000016CEED70-0000000016CEFB81
__int64 __fastcall Reunion::takeMissionWatcherReward(Reunion *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  unsigned int v7; // r14d
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // rsi
  uint32_t v21; // edx
  char v22; // al
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  Player *player; // r14
  __int64 result; // rax
  std::string v30; // [rsp+0h] [rbp-1A0h]
  char *v31; // [rsp+0h] [rbp-1A0h]
  PlayerItemComp *ItemComp; // [rsp+8h] [rbp-198h]
  std::initializer_list<unsigned int> __la; // [rsp+10h] [rbp-190h]
  PlayerItemComp *__l; // [rsp+10h] [rbp-190h]
  std::allocator<unsigned int> __a; // [rsp+3Bh] [rbp-165h] BYREF
  _DWORD v36[5]; // [rsp+3Ch] [rbp-164h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v38; // [rsp+60h] [rbp-140h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+70h] [rbp-130h] BYREF
  std::string v40; // [rsp+90h] [rbp-110h] BYREF
  char v41[240]; // [rsp+B0h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v41;
  v30._M_dataplus._M_p = v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 1 10 holder:648 64 4 15 unlock_time:680 80 4 14 watcher_id:646 96 16 11 log_ptr:705 128 24 "
                        "17 action_reason:689";
  *(_QWORD *)(v2 + 16) = Reunion::takeMissionWatcherReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 80) = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v40, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xBF9u, v30);
  std::string::~string(&v40);
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionWatcherReward",
      652);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)&v40,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    v7 = 9002;
    goto LABEL_55;
  }
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->mission_record_.watcher_set,
          (const unsigned int *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionWatcherReward",
      657);
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           (common::milog::MiLogStream *const)&v40,
           (const char (*)[44])"[REUNION] watcher_id NOT exist, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    v7 = 5;
    goto LABEL_55;
  }
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->mission_record_.taken_reward_watcher_set,
         (const unsigned int *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionWatcherReward",
      662);
    v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           (common::milog::MiLogStream *const)&v40,
           (const char (*)[58])"[REUNION] watcher_id reward has been granted, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    v7 = 9005;
    goto LABEL_55;
  }
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->mission_record_.finished_watcher_set,
          (const unsigned int *)(v2 + 80)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionWatcherReward",
      667);
    v10 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)&v40,
            (const char (*)[44])"[REUNION] watcher not finished, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    v7 = 9006;
    goto LABEL_55;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
  *(_QWORD *)&v36[3] = data::ReunionExcelConfigMgrBase::findReunionWatcherExcelConfig(
                         &v11->design_config.txt_config_mgr.reunion_config_mgr,
                         *(_DWORD *)(v2 + 80));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v38);
  if ( !*(_QWORD *)&v36[3] )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionWatcherReward",
      675);
    v12 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            (common::milog::MiLogStream *const)&v40,
            (const char (*)[48])"[REUNION] watcher config not found, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    v7 = 5;
    goto LABEL_55;
  }
  v36[1] = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 152LL) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 152LL) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(*(_QWORD *)&v36[3] + 152LL);
  }
  *(_DWORD *)(v2 + 64) = Reunion::getBeginTimeByOpenDay(this, *(_DWORD *)(*(_QWORD *)&v36[3] + 152LL));
  if ( v36[1] < *(_DWORD *)(v2 + 64) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v40,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionWatcherReward",
      683);
    v13 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)&v40,
            (const char (*)[19])"[REUNION] watcher:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 80));
    v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v14,
            (const char (*)[20])" will unlock @time:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
    v7 = 9009;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 144LL) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 144LL) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(*(_QWORD *)&v36[3] + 144LL);
  }
  if ( *(_DWORD *)(*(_QWORD *)&v36[3] + 144LL) )
  {
    ActionReason::ActionReason(
      (ActionReason *const)(v2 + 128),
      ACTION_REASON_REUNION_WATCHER_REWARD,
      ITEM_LIMIT_REUNION_REWARD);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 144LL) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 144LL) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(*(_QWORD *)&v36[3] + 144LL);
    }
    v36[0] = *(_DWORD *)(*(_QWORD *)&v36[3] + 144LL);
    __la._M_array = v36;
    __la._M_len = 1LL;
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&reward_id_vec, __la, &__a);
    v36[2] = PlayerItemComp::checkGrantRewards(ItemComp, &reward_id_vec, (const ActionReason *)(v2 + 128));
    std::vector<unsigned int>::~vector(&reward_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
    if ( v36[2] )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "takeMissionWatcherReward",
        695);
      v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)&v40,
              (const char (*)[36])"checkGrantRewards fail, reward_id: ");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v16,
              (const unsigned int *)(*(_QWORD *)&v36[3] + 144LL));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v18, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
      v7 = v36[2];
      goto LABEL_55;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    __l = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 144LL) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 144LL) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(*(_QWORD *)&v36[3] + 144LL);
    }
    v36[0] = *(_DWORD *)(*(_QWORD *)&v36[3] + 144LL);
    std::allocator<unsigned int>::allocator(&__a);
    std::vector<unsigned int>::vector(&reward_id_vec, (std::initializer_list<unsigned int>)__PAIR128__(1LL, v36), &__a);
    PlayerItemComp::grantRewards(__l, &reward_id_vec, (const ActionReason *)(v2 + 128), 0LL);
    std::vector<unsigned int>::~vector(&reward_id_vec);
    std::allocator<unsigned int>::~allocator(&__a);
  }
  std::set<unsigned int>::insert(
    &this->mission_record_.taken_reward_watcher_set,
    (const std::set<unsigned int>::value_type *)(v2 + 80));
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 148LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v36[3]) - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 148LL) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&v36[3] + 148LL);
  }
  v19 = *(_DWORD *)(*(_QWORD *)&v36[3] + 148LL);
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_.cur_score);
  }
  v20 = v19;
  v21 = SAFE_ADD<unsigned int,unsigned int>(this->mission_record_.cur_score, v19);
  v22 = *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000);
  if ( v22 != 0 && v22 <= 3 )
  {
    LOBYTE(v20) = v22 != 0;
    __asan_report_store4(&this->mission_record_.cur_score, v20, v21);
  }
  this->mission_record_.cur_score = v21;
  common::tools::perf::make_shared<proto_log::PlayerLogBodyReunionTakeWatcherReward>();
  v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyReunionTakeWatcherReward::set_game_version(v23, &this->game_version_);
  v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_);
  }
  proto_log::PlayerLogBodyReunionTakeWatcherReward::set_mission_id(v24, this->mission_record_.mission_id);
  v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  proto_log::PlayerLogBodyReunionTakeWatcherReward::set_watcher_id(v25, *(_DWORD *)(v2 + 80));
  v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 148LL) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v36[3]) - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(*(_QWORD *)&v36[3] + 148LL) >> 3)
                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(*(_QWORD *)&v36[3] + 148LL);
  }
  proto_log::PlayerLogBodyReunionTakeWatcherReward::set_delta_score(v26, *(_DWORD *)(*(_QWORD *)&v36[3] + 148LL));
  v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeWatcherReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_.cur_score);
  }
  proto_log::PlayerLogBodyReunionTakeWatcherReward::set_cur_score(v27, this->mission_record_.cur_score);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v38, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyReunionTakeWatcherReward,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyReunionTakeWatcherReward> *)(v2 + 96));
  Player::printStatLog(player, &p_body_ptr, &v38, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v38);
  v7 = 0;
  std::shared_ptr<proto_log::PlayerLogBodyReunionTakeWatcherReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyReunionTakeWatcherReward> *const)(v2 + 96));
LABEL_55:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  result = v7;
  if ( v31 == (char *)v2 )
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
  return result;
};

// Line 717: range 0000000016CEFB82-0000000016CF0A50
__int64 __fastcall Reunion::takeMissionReward(Reunion *const this, uint32_t reward_index)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned int M_array_high; // r14d
  PlayerBasicComp *BasicComp; // rax
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v11; // rax
  std::vector<unsigned int>::const_reference v12; // rax
  _DWORD *v13; // rdx
  std::vector<unsigned int>::const_reference v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rcx
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rcx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  Player *player; // r14
  __int64 result; // rax
  std::string v34; // [rsp+0h] [rbp-1C0h]
  std::vector<unsigned int>::size_type v35; // [rsp+8h] [rbp-1B8h]
  std::vector<unsigned int>::size_type v36; // [rsp+8h] [rbp-1B8h]
  std::vector<bool>::size_type v37; // [rsp+8h] [rbp-1B8h]
  std::vector<bool>::size_type v38; // [rsp+8h] [rbp-1B8h]
  PlayerItemComp *ItemComp; // [rsp+8h] [rbp-1B8h]
  std::initializer_list<unsigned int> __l; // [rsp+10h] [rbp-1B0h]
  PlayerItemComp *__la; // [rsp+10h] [rbp-1B0h]
  std::allocator<unsigned int> __a; // [rsp+3Fh] [rbp-181h] BYREF
  std::initializer_list<unsigned int> v43; // [rsp+40h] [rbp-180h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-170h] BYREF
  std::vector<bool>::reference v45; // [rsp+60h] [rbp-160h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+70h] [rbp-150h] BYREF
  common::milog::MiLogStream v47; // [rsp+90h] [rbp-130h] BYREF
  char v48[272]; // [rsp+B0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v48;
  v34._M_dataplus._M_p = v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 10 holder:724 48 4 14 need_score:738 64 4 13 reward_id:739 80 4 16 reward_index:716 96 16"
                        " 19 is_taken_reward:757 128 16 11 log_ptr:780 160 24 17 action_reason:766";
  *(_QWORD *)(v2 + 16) = Reunion::takeMissionReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 80) = reward_index;
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionReward",
      720);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v47,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v47);
    M_array_high = 9002;
    goto LABEL_60;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v47, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xBFAu, v34);
  std::string::~string(&v47);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v45);
  p_reunion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v45)->design_config.txt_config_mgr.reunion_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_);
  }
  v43._M_len = (std::initializer_list<unsigned int>::size_type)data::ReunionExcelConfigMgrBase::findReunionMissionExcelConfig(
                                                                 p_reunion_config_mgr,
                                                                 this->mission_record_.mission_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v45);
  if ( v43._M_len )
  {
    v35 = *(unsigned int *)(v2 + 80);
    if ( v35 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v43._M_len + 24))
      || (v36 = *(unsigned int *)(v2 + 80),
          v36 >= std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v43._M_len + 48))) )
    {
      common::milog::MiLogStream::create(
        &v47,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/reunion/reunion.cpp",
        "takeMissionReward",
        734);
      v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v47,
              (const char (*)[41])"[REUNION] req reward_index out of bound:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v47);
      M_array_high = -1;
    }
    else
    {
      v12 = std::vector<unsigned int>::operator[](
              (const std::vector<unsigned int> *const)(v43._M_len + 24),
              *(unsigned int *)(v2 + 80));
      v13 = v12;
      if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v12);
      }
      *(_DWORD *)(v2 + 48) = *v13;
      v14 = std::vector<unsigned int>::operator[](
              (const std::vector<unsigned int> *const)(v43._M_len + 48),
              *(unsigned int *)(v2 + 80));
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      *(_DWORD *)(v2 + 64) = *v15;
      if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->mission_record_.cur_score);
      }
      if ( this->mission_record_.cur_score >= *(_DWORD *)(v2 + 48) )
      {
        v37 = *(unsigned int *)(v2 + 80);
        if ( v37 >= std::vector<bool>::size(&this->mission_record_.is_taken_reward_vec) )
          std::vector<bool>::resize(
            &this->mission_record_.is_taken_reward_vec,
            (unsigned int)(*(_DWORD *)(v2 + 80) + 1),
            0);
        v38 = *(unsigned int *)(v2 + 80);
        if ( v38 < std::vector<bool>::size(&this->mission_record_.is_taken_reward_vec) )
        {
          *(std::vector<bool>::reference *)(v2 + 96) = std::vector<bool>::operator[](
                                                         &this->mission_record_.is_taken_reward_vec,
                                                         *(unsigned int *)(v2 + 80));
          if ( !std::_Bit_reference::operator bool((const std::_Bit_reference *const)(v2 + 96)) )
          {
            if ( *(_DWORD *)(v2 + 64) )
            {
              ActionReason::ActionReason(
                (ActionReason *const)(v2 + 160),
                ACTION_REASON_REUNION_WATCHER_REWARD,
                ITEM_LIMIT_REUNION_REWARD);
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              ItemComp = Player::getItemComp(this->player_);
              LODWORD(v43._M_array) = *(_DWORD *)(v2 + 64);
              __l._M_array = (std::initializer_list<unsigned int>::iterator)&v43;
              __l._M_len = 1LL;
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(&reward_id_vec, __l, &__a);
              HIDWORD(v43._M_array) = PlayerItemComp::checkGrantRewards(
                                        ItemComp,
                                        &reward_id_vec,
                                        (const ActionReason *)(v2 + 160));
              std::vector<unsigned int>::~vector(&reward_id_vec);
              std::allocator<unsigned int>::~allocator(&__a);
              if ( HIDWORD(v43._M_array) )
              {
                common::milog::MiLogStream::create(
                  &v47,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reunion/reunion.cpp",
                  "takeMissionReward",
                  772);
                v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                        &v47,
                        (const char (*)[36])"checkGrantRewards fail, reward_id: ");
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        (const unsigned int *)(v2 + 64));
                v25 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v24, (const char (*)[8])"@index:");
                v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v25,
                        (const unsigned int *)(v2 + 80));
                v27 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v26, (const char (*)[9])" player:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                operator<<(v27, this->player_);
                common::milog::MiLogStream::~MiLogStream(&v47);
                M_array_high = HIDWORD(v43._M_array);
                goto LABEL_59;
              }
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              __la = Player::getItemComp(this->player_);
              LODWORD(v43._M_array) = *(_DWORD *)(v2 + 64);
              std::allocator<unsigned int>::allocator(&__a);
              std::vector<unsigned int>::vector(
                &reward_id_vec,
                (std::initializer_list<unsigned int>)__PAIR128__(1LL, &v43),
                &__a);
              PlayerItemComp::grantRewards(__la, &reward_id_vec, (const ActionReason *)(v2 + 160), 0LL);
              std::vector<unsigned int>::~vector(&reward_id_vec);
              std::allocator<unsigned int>::~allocator(&__a);
            }
            v45 = std::vector<bool>::operator[](&this->mission_record_.is_taken_reward_vec, *(unsigned int *)(v2 + 80));
            std::_Bit_reference::operator=(&v45, 1);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyReunionTakeMissionReward>();
            if ( std::operator!=<proto_log::PlayerLogBodyReunionTakeMissionReward>(
                   0LL,
                   (const std::shared_ptr<proto_log::PlayerLogBodyReunionTakeMissionReward> *)(v2 + 128)) )
            {
              v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              proto_log::PlayerLogBodyReunionTakeMissionReward::set_game_version(v28, &this->game_version_);
              v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->mission_record_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->mission_record_);
              }
              proto_log::PlayerLogBodyReunionTakeMissionReward::set_mission_id(v29, this->mission_record_.mission_id);
              v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              proto_log::PlayerLogBodyReunionTakeMissionReward::set_score(v30, *(_DWORD *)(v2 + 48));
              v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionTakeMissionReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
              proto_log::PlayerLogBodyReunionTakeMissionReward::set_reward_index(v31, *(_DWORD *)(v2 + 80));
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              player = this->player_;
              std::shared_ptr<google::protobuf::Message>::shared_ptr(
                (std::shared_ptr<google::protobuf::Message> *const)&v45,
                0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyReunionTakeMissionReward,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyReunionTakeMissionReward> *)(v2 + 128));
              Player::printStatLog(player, &p_body_ptr, (MessagePtr *)&v45, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v45);
            }
            M_array_high = 0;
            std::shared_ptr<proto_log::PlayerLogBodyReunionTakeMissionReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyReunionTakeMissionReward> *const)(v2 + 128));
            goto LABEL_59;
          }
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/reunion/reunion.cpp",
            "takeMissionReward",
            760);
          v21 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v47,
                  (const char (*)[38])"[REUNION] mission is rewarded @index:");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 80));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v22, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v47);
          M_array_high = 9007;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v47,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/reunion/reunion.cpp",
            "takeMissionReward",
            753);
          v20 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  &v47,
                  (const char (*)[50])"[REUNION] index out of bound is_taken_reward_vec ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v20, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v47);
          M_array_high = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v47,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/reunion/reunion.cpp",
          "takeMissionReward",
          742);
        v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                &v47,
                (const char (*)[44])"[REUNION] req reward_index score not reach:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v16,
                &this->mission_record_.cur_score);
        v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v17, (const char (*)[5])off_25F35840);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v19, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v47);
        M_array_high = 9008;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v47,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/reunion/reunion.cpp",
      "takeMissionReward",
      728);
    v9 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v47,
           (const char (*)[48])"[REUNION] mission config not found, mission_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->mission_record_.mission_id);
    common::milog::MiLogStream::~MiLogStream(&v47);
    M_array_high = -1;
  }
LABEL_59:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
LABEL_60:
  result = M_array_high;
  if ( v34._M_dataplus._M_p == (std::string::pointer)v2 )
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

// Line 794: range 0000000016CF0A52-0000000016CF10DF
uint32_t __cdecl Reunion::getCurDayPrivilegeRemainNum(Reunion *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t result; // eax
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  uint32_t total_count; // ecx
  uint32_t total_num; // ecx
  uint32_t cur_day_count; // ecx
  uint32_t daily_num; // ecx
  const unsigned int *v12; // rax
  _DWORD *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const data::ReunionPrivilegeExcelConfig *privilege_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-A0h] BYREF
  char v22[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 20 remain_total_num:812 48 4 20 remain_daily_num:818 64 4 14 result_num:819";
  *(_QWORD *)(v1 + 16) = Reunion::getCurDayPrivilegeRemainNum;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "getCurDayPrivilegeRemainNum",
      797);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v21,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    p_reunion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.reunion_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->privilege_record_);
    }
    privilege_config_ptr = data::ReunionExcelConfigMgrBase::findReunionPrivilegeExcelConfig(
                             p_reunion_config_mgr,
                             this->privilege_record_.privilege_id);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( privilege_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.total_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->privilege_record_.total_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->privilege_record_.total_count);
      }
      total_count = this->privilege_record_.total_count;
      if ( *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->total_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->total_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&privilege_config_ptr->total_num);
      }
      if ( total_count < privilege_config_ptr->total_num )
      {
        if ( *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->total_num >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->total_num >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&privilege_config_ptr->total_num);
        }
        total_num = privilege_config_ptr->total_num;
        if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.total_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->privilege_record_.total_count >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->privilege_record_.total_count);
        }
        *(_DWORD *)(v1 + 32) = total_num - this->privilege_record_.total_count;
        if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->privilege_record_.cur_day_count);
        }
        cur_day_count = this->privilege_record_.cur_day_count;
        if ( *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->daily_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)privilege_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->daily_num >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&privilege_config_ptr->daily_num);
        }
        if ( cur_day_count < privilege_config_ptr->daily_num )
        {
          if ( *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->daily_num >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)privilege_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&privilege_config_ptr->daily_num >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&privilege_config_ptr->daily_num);
          }
          daily_num = privilege_config_ptr->daily_num;
          if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->privilege_record_.cur_day_count);
          }
          *(_DWORD *)(v1 + 48) = daily_num - this->privilege_record_.cur_day_count;
          v12 = std::min<unsigned int>((const unsigned int *)(v1 + 32), (const unsigned int *)(v1 + 48));
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          *(_DWORD *)(v1 + 64) = *v13;
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/reunion/reunion.cpp",
            "getCurDayPrivilegeRemainNum",
            820);
          v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  &v21,
                  (const char (*)[28])"[REUNION] remain_daily_num:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v1 + 48));
          v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v15,
                  (const char (*)[19])" remain_total_num:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v1 + 32));
          v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" result:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v1 + 64));
          common::milog::MiLogStream::~MiLogStream(&v21);
          result = *(_DWORD *)(v1 + 64);
        }
        else
        {
          result = 0;
        }
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "getCurDayPrivilegeRemainNum",
        804);
      v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v21,
             (const char (*)[54])"[REUNION] privilege_config_ptr is null, privilege_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->privilege_record_.privilege_id);
      common::milog::MiLogStream::~MiLogStream(&v21);
      result = 0;
    }
  }
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
  return result;
};

// Line 825: range 0000000016CF10E0-0000000016CF137E
bool __cdecl Reunion::isPrivilegeMatch(Reunion *const this, uint32_t privilege_type, uint32_t sub_type)
{
  bool isPrivilegeTypeMatch; // bl
  ReunionExcelConfigMgr *p_reunion_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  const ReunionExcelConfigMgr *p_privilege_record; // rdi
  const data::ReunionPrivilegeExcelConfig *privilege_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-30h] BYREF

  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "isPrivilegeMatch",
      828);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v13,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v13);
    return 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    p_reunion_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.reunion_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->privilege_record_);
    }
    privilege_config_ptr = data::ReunionExcelConfigMgrBase::findReunionPrivilegeExcelConfig(
                             p_reunion_config_mgr,
                             this->privilege_record_.privilege_id);
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( privilege_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v12);
      p_privilege_record = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.reunion_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->privilege_record_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_privilege_record = (const ReunionExcelConfigMgr *)&this->privilege_record_;
        __asan_report_load4(&this->privilege_record_);
      }
      isPrivilegeTypeMatch = ReunionExcelConfigMgr::isPrivilegeTypeMatch(
                               p_privilege_record,
                               this->privilege_record_.privilege_id,
                               privilege_type,
                               sub_type);
      std::shared_ptr<Config>::~shared_ptr(&v12);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "isPrivilegeMatch",
        835);
      v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v13,
             (const char (*)[54])"[REUNION] privilege_config_ptr is null, privilege_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->privilege_record_.privilege_id);
      common::milog::MiLogStream::~MiLogStream(&v13);
      return 0;
    }
  }
  return isPrivilegeTypeMatch;
};

// Line 843: range 0000000016CF1380-0000000016CF14F2
int32_t __cdecl Reunion::addPrivilegeCount(Reunion *const this)
{
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( Reunion::isFinished(this) || !Reunion::isActivated(this) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "addPrivilegeCount",
      846);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v3,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->privilege_record_.cur_day_count >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->privilege_record_.cur_day_count);
    }
    ++this->privilege_record_.cur_day_count;
    if ( *(_BYTE *)(((unsigned __int64)&this->privilege_record_.total_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->privilege_record_.total_count >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->privilege_record_.total_count);
    }
    ++this->privilege_record_.total_count;
    Reunion::sendPrivilegeNotify(this);
    return 0;
  }
};

// Line 857: range 0000000016CF14F4-0000000016CF20A3
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl Reunion::tryAddReunionWatchers(Reunion *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v5; // r14d
  const ReunionExcelConfigMgr *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerBasicComp *BasicComp; // rax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::set<unsigned int>::iterator v11; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  uint32_t WatcherComp; // eax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rax
  PlayerWatcherComp *v21; // rax
  bool v22; // r14
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  Player *v30; // r14
  int32_t result; // eax
  std::string v32; // [rsp+0h] [rbp-1D0h] OVERLAPPED BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-1B0h] BYREF
  const ReunionExcelConfigMgr *config_mgr; // [rsp+28h] [rbp-1A8h]
  const data::ReunionMissionExcelConfig *mission_config_ptr; // [rsp+30h] [rbp-1A0h]
  const std::set<unsigned int> *watcher_set_ptr; // [rsp+38h] [rbp-198h]
  std::set<unsigned int> *__for_range; // [rsp+40h] [rbp-190h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+48h] [rbp-188h]
  std::shared_ptr<Config> v39; // [rsp+50h] [rbp-180h] BYREF
  std::shared_ptr<BaseWatcher> __a; // [rsp+60h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> v41; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-150h] BYREF
  common::milog::MiLogStream v43; // [rsp+A0h] [rbp-130h] BYREF
  common::milog::MiLogStream v44; // [rsp+C0h] [rbp-110h] BYREF
  char v45[240]; // [rsp+E0h] [rbp-F0h] BYREF

  v32._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v45;
  v32._M_dataplus._M_p = v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 1 10 holder:881 64 4 14 watcher_id:883 80 16 11 log_ptr:902 112 48 18 watcher_id_set:877";
  *(_QWORD *)(v1 + 16) = Reunion::tryAddReunionWatchers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = 61956;
  v3[536862723] = 62194;
  v3[536862725] = -202116109;
  if ( Reunion::isFinished((const Reunion *const)v32._M_string_length)
    || !Reunion::isActivated((const Reunion *const)v32._M_string_length) )
  {
    common::milog::MiLogStream::create(
      &v44,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/reunion/reunion.cpp",
      "tryAddReunionWatchers",
      860);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v44,
      (const char (*)[32])"[REUNION] reunion not activated");
    common::milog::MiLogStream::~MiLogStream(&v44);
    v5 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v41);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v41)->design_config.txt_config_mgr.reunion_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v41);
    v6 = config_mgr;
    if ( *(_BYTE *)(((v32._M_string_length + 72) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v32._M_string_length + 72) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v32._M_string_length + 72);
    }
    mission_config_ptr = data::ReunionExcelConfigMgrBase::findReunionMissionExcelConfig(
                           v6,
                           *(_DWORD *)(v32._M_string_length + 72));
    if ( mission_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->watcher_group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mission_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->watcher_group_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&mission_config_ptr->watcher_group_id);
      }
      watcher_set_ptr = ReunionExcelConfigMgr::findReunionMissionWatcherSet(
                          config_mgr,
                          mission_config_ptr->watcher_group_id);
      if ( watcher_set_ptr )
      {
        std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 112));
        Reunion::getWatcherSet(
          (Reunion *const)v32._M_string_length,
          watcher_set_ptr,
          (std::set<unsigned int> *)(v1 + 112));
        if ( *(_BYTE *)(((v32._M_string_length + 8) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v32._M_string_length + 8);
        BasicComp = Player::getBasicComp(*(Player *const *)(v32._M_string_length + 8));
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v44, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xBF7u, v32);
        std::string::~string(&v44);
        M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 112))._M_node;
        v11._M_node = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 112))._M_node;
        std::set<unsigned int>::insert<std::_Rb_tree_const_iterator<unsigned int>>(
          (std::set<unsigned int> *const)(v32._M_string_length + 176),
          v11,
          (std::_Rb_tree_const_iterator<unsigned int>)M_node);
        __for_range = (std::set<unsigned int> *)(v1 + 112);
        *((std::set<unsigned int>::iterator *)&v32._anon_0._M_allocated_capacity + 1) = std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v1 + 112));
        __for_end._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v1 + 112))._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&v32._anon_0._M_allocated_capacity + 1,
                  &__for_end) )
        {
          v12 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&v32._anon_0._M_allocated_capacity + 1);
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v12);
          }
          *(_DWORD *)(v1 + 64) = *v13;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v39);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
          watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                                 &v14->design_config.txt_config_mgr.watcher_config_mgr,
                                 *(_DWORD *)(v1 + 64));
          std::shared_ptr<Config>::~shared_ptr(&v39);
          if ( watcher_config_ptr )
          {
            if ( *(_BYTE *)(((v32._M_string_length + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v32._M_string_length + 8);
            WatcherComp = (unsigned int)Player::getWatcherComp(*(Player *const *)(v32._M_string_length + 8));
            PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&__a, WatcherComp);
            v19 = std::operator!=<BaseWatcher>(0LL, &__a);
            std::shared_ptr<BaseWatcher>::~shared_ptr(&__a);
            if ( v19 )
            {
              common::milog::MiLogStream::create(
                &v43,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/reunion/reunion.cpp",
                "tryAddReunionWatchers",
                893);
              v20 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      &v43,
                      (const char (*)[30])"[REUNION] findWatcher finded:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v1 + 64));
              common::milog::MiLogStream::~MiLogStream(&v43);
            }
            else
            {
              if ( *(_BYTE *)(((v32._M_string_length + 8) >> 3) + 0x7FFF8000) )
                __asan_report_load8(v32._M_string_length + 8);
              v21 = Player::getWatcherComp(*(Player *const *)(v32._M_string_length + 8));
              PlayerWatcherComp::addWatcher(
                (PlayerWatcherComp *const)&v41,
                (const WatcherConfig *)v21,
                (uint32_t)watcher_config_ptr);
              v22 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v41);
              std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v41);
              if ( v22 )
              {
                common::milog::MiLogStream::create(
                  &v44,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/reunion/reunion.cpp",
                  "tryAddReunionWatchers",
                  898);
                v23 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        &v44,
                        (const char (*)[34])"[REUNION] addWatcherAndNotify id:");
                v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v23,
                        (const unsigned int *)(v1 + 64));
                v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                        v24,
                        (const char (*)[13])" fails, uid:");
                if ( *(_BYTE *)(((v32._M_string_length + 8) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v32._M_string_length + 8);
                HIDWORD(v32._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v32._M_string_length + 8));
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)&v32._anon_0._M_allocated_capacity + 1);
                common::milog::MiLogStream::~MiLogStream(&v44);
              }
              else
              {
                common::tools::perf::make_shared<proto_log::PlayerLogBodyReunionMissionStateChange>();
                v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
                proto_log::PlayerLogBodyReunionMissionStateChange::set_game_version(
                  v26,
                  (const std::string *)(v32._M_string_length + 296));
                v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
                if ( *(_BYTE *)(((v32._M_string_length + 72) >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((v32._M_string_length + 72) >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(v32._M_string_length + 72);
                }
                proto_log::PlayerLogBodyReunionMissionStateChange::set_mission_id(
                  v27,
                  *(_DWORD *)(v32._M_string_length + 72));
                v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
                proto_log::PlayerLogBodyReunionMissionStateChange::set_watcher_id(v28, *(_DWORD *)(v1 + 64));
                v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyReunionMissionStateChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 80));
                proto_log::PlayerLogBodyReunionMissionStateChange::set_state(v29, 1u);
                if ( *(_BYTE *)(((v32._M_string_length + 8) >> 3) + 0x7FFF8000) )
                  __asan_report_load8(v32._M_string_length + 8);
                v30 = *(Player **)(v32._M_string_length + 8);
                std::shared_ptr<google::protobuf::Message>::shared_ptr(&v41, 0LL);
                std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange,void>(
                  (std::shared_ptr<google::protobuf::Message> *const)&__a,
                  (const std::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange> *)(v1 + 80));
                Player::printStatLog(v30, (MessagePtr *)&__a, &v41, 0xEu);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__a);
                std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v41);
                std::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyReunionMissionStateChange> *const)(v1 + 80));
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/reunion/reunion.cpp",
              "tryAddReunionWatchers",
              888);
            v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                    &v42,
                    (const char (*)[32])"[REUNION] findWatcherConfig id:");
            v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v15,
                    (const unsigned int *)(v1 + 64));
            v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v16,
                    (const char (*)[13])" fails, uid:");
            if ( *(_BYTE *)(((v32._M_string_length + 8) >> 3) + 0x7FFF8000) )
              __asan_report_load8(v32._M_string_length + 8);
            HIDWORD(v32._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v32._M_string_length + 8));
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v17,
              (const unsigned int *)&v32._anon_0._M_allocated_capacity + 1);
            common::milog::MiLogStream::~MiLogStream(&v42);
          }
          std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&v32._anon_0._M_allocated_capacity + 1);
        }
        v5 = 0;
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 112));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v44,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/reunion/reunion.cpp",
          "tryAddReunionWatchers",
          874);
        v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               &v44,
               (const char (*)[39])"[REUNION] watcher_set_ptr, mission_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v8,
          (const unsigned int *)(v32._M_string_length + 72));
        common::milog::MiLogStream::~MiLogStream(&v44);
        v5 = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v44,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/reunion/reunion.cpp",
        "tryAddReunionWatchers",
        868);
      v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v44,
             (const char (*)[51])"[REUNION] schedule_config_ptr is null, mission_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v7,
        (const unsigned int *)(v32._M_string_length + 72));
      common::milog::MiLogStream::~MiLogStream(&v44);
      v5 = -1;
    }
  }
  result = v5;
  if ( v32._M_dataplus._M_p == (std::string::pointer)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 913: range 0000000016CF20A4-0000000016CF2216
uint32_t __cdecl Reunion::getBeginTimeByOpenDay(const Reunion *const this, uint32_t day)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t LastActivateReunionTime; // eax
  PlayerGmComp *GmComp; // rax
  uint32_t time_offset; // [rsp+18h] [rbp-48h]
  uint32_t from_day; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v8; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v9; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v2->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v8);
  if ( *(_BYTE *)(((unsigned __int64)&this->reunion_comp_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->reunion_comp_);
  LastActivateReunionTime = PlayerReunionComp::getLastActivateReunionTime(this->reunion_comp_);
  from_day = common::tools::TimeUtils::getTimeDay(LastActivateReunionTime, time_offset);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  GmComp = Player::getGmComp(this->player_);
  if ( !PlayerGmComp::getGmSetValue<bool>(GmComp, 0xBu) )
    return common::tools::TimeUtils::getDailyStartTime(from_day + day, time_offset);
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/reunion/reunion.cpp",
    "getBeginTimeByOpenDay",
    918);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v9, (const char (*)[23])off_25F35E00);
  common::milog::MiLogStream::~MiLogStream(&v9);
  return 1;
};

// Line 925: range 0000000016CF2218-0000000016CF2380
void __cdecl Reunion::sendPrivilegeNotify(const Reunion *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  proto::ReunionPrivilegeInfo *v4; // rdx
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 10 notify:926";
  *(_QWORD *)(v1 + 16) = Reunion::sendPrivilegeNotify;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  proto::ReunionPrivilegeChangeNotify::ReunionPrivilegeChangeNotify((proto::ReunionPrivilegeChangeNotify *const)(v1 + 32));
  v4 = proto::ReunionPrivilegeChangeNotify::mutable_privilege_info((proto::ReunionPrivilegeChangeNotify *const)(v1 + 32));
  Reunion::fillPrivilegeInfo(this, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::ReunionPrivilegeChangeNotify::~ReunionPrivilegeChangeNotify((proto::ReunionPrivilegeChangeNotify *const)(v1 + 32));
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

// Line 932: range 0000000016CF2382-0000000016CF23E1
void __cdecl Reunion::addScoreByGm(Reunion *const this, uint32_t score)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mission_record_.cur_score >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mission_record_.cur_score);
  }
  this->mission_record_.cur_score += score;
};
