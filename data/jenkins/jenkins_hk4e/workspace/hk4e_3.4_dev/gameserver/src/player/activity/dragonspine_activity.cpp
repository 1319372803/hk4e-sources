// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/dragonspine_activity.cpp

// Line 31: range 00000000165B9D6E-00000000165BA4A5
int32_t __cdecl DragonSpineActivity::fromScheduleBin(
        DragonSpineActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  uint32_t v5; // edx
  DragonSpineChapterRecord *v6; // r15
  unsigned int *v7; // rcx
  DragonSpineChapterRecord *v8; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >,bool> v9; // rax
  common::milog::MiLogStream *v10; // r14
  int v11; // r14d
  uint32_t v12; // edx
  uint32_t v13; // ecx
  uint32_t v14; // edx
  unsigned int *v15; // r8
  std::set<std::pair<unsigned int,unsigned int>> *v16; // rax
  std::set<std::pair<unsigned int,unsigned int>> *v17; // rdx
  bool is_content_closed; // dl
  uint64_t v19; // rax
  int32_t result; // eax
  int32_t v21; // [rsp+Ch] [rbp-1A4h]
  unsigned int __args_0; // [rsp+20h] [rbp-190h] BYREF
  unsigned int val; // [rsp+24h] [rbp-18Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::DragonSpineBanDropSubject>::const_iterator __for_begin_0; // [rsp+28h] [rbp-188h] BYREF
  google::protobuf::RepeatedPtrField<proto::DragonSpineBanDropSubject>::const_iterator __for_end_0; // [rsp+30h] [rbp-180h] BYREF
  google::protobuf::RepeatedPtrField<proto::DragonSpineChapterBin>::const_iterator __for_begin; // [rsp+38h] [rbp-178h] BYREF
  google::protobuf::RepeatedPtrField<proto::DragonSpineChapterBin>::const_iterator __for_end; // [rsp+40h] [rbp-170h] BYREF
  const proto::DragonSpineScheduleBin *schedule_bin; // [rsp+48h] [rbp-168h]
  const google::protobuf::RepeatedPtrField<proto::DragonSpineChapterBin> *__for_range; // [rsp+50h] [rbp-160h]
  const google::protobuf::RepeatedPtrField<proto::DragonSpineBanDropSubject> *__for_range_0; // [rsp+58h] [rbp-158h]
  const proto::DragonSpineBanDropSubject *drop_list; // [rsp+60h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::Uint32PairBin> *__for_range_1; // [rsp+68h] [rbp-148h]
  const proto::Uint32PairBin *pair_bin; // [rsp+70h] [rbp-140h]
  const proto::DragonSpineChapterBin *chapter_bin; // [rsp+78h] [rbp-138h]
  common::milog::MiLogStream v35; // [rsp+80h] [rbp-130h] BYREF
  char v36[272]; // [rsp+A0h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 48 14 subject_set:51 112 72 10 chapter:38";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  schedule_bin = proto::ActivityScheduleBin::dragon_spine_bin(bin);
  v5 = proto::DragonSpineScheduleBin::weapon_enhance_stage(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dragon_sword_cur_enhance_level_);
  }
  this->dragon_sword_cur_enhance_level_ = v5;
  std::map<unsigned int,DragonSpineChapterRecord>::clear(&this->chapter_map_);
  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::clear(&this->banned_drop_subject_set_);
  __for_range = proto::DragonSpineScheduleBin::chapter_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::DragonSpineChapterBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::DragonSpineChapterBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::DragonSpineChapterBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    chapter_bin = google::protobuf::internal::RepeatedPtrIterator<proto::DragonSpineChapterBin const>::operator*(&__for_begin);
    DragonSpineChapterRecord::DragonSpineChapterRecord((DragonSpineChapterRecord *const)(v2 + 112));
    DragonSpineChapterRecord::fromBin((DragonSpineChapterRecord *const)(v2 + 112), chapter_bin);
    v6 = std::move<DragonSpineChapterRecord &>((DragonSpineChapterRecord *)(v2 + 112));
    val = proto::DragonSpineChapterBin::chapter_id(chapter_bin);
    v9 = std::map<unsigned int,DragonSpineChapterRecord>::emplace<unsigned int,DragonSpineChapterRecord>(
           &this->chapter_map_,
           &val,
           v6,
           v7,
           v8);
    if ( !v9.second )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "fromScheduleBin",
        42);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v35,
              (const char (*)[51])"[DRAGON_SPINE] duplicated chapter_id, chapter_id: ");
      val = proto::DragonSpineChapterBin::chapter_id(chapter_bin);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v35);
      v21 = -1;
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
    DragonSpineChapterRecord::~DragonSpineChapterRecord((DragonSpineChapterRecord *const)(v2 + 112));
    if ( v11 != 1 )
      goto LABEL_30;
    google::protobuf::internal::RepeatedPtrIterator<proto::DragonSpineChapterBin const>::operator++(&__for_begin);
  }
  v12 = proto::DragonSpineScheduleBin::shimmering_essence(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->shimmering_essence_);
  }
  this->shimmering_essence_ = v12;
  v13 = proto::DragonSpineScheduleBin::warm_essence(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->warm_essence_);
  }
  this->warm_essence_ = v13;
  v14 = proto::DragonSpineScheduleBin::wondrous_essence(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->wondrous_essence_);
  }
  this->wondrous_essence_ = v14;
  __for_range_0 = proto::DragonSpineScheduleBin::banned_drop_subject_list(schedule_bin);
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::DragonSpineBanDropSubject>::begin(__for_range_0).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::DragonSpineBanDropSubject>::end(__for_range_0).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::DragonSpineBanDropSubject const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
  {
    drop_list = google::protobuf::internal::RepeatedPtrIterator<proto::DragonSpineBanDropSubject const>::operator*(&__for_begin_0);
    std::set<std::pair<unsigned int,unsigned int>>::set((std::set<std::pair<unsigned int,unsigned int>> *const)(v2 + 32));
    __for_range_1 = proto::DragonSpineBanDropSubject::drop_subject_list(drop_list);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::begin(__for_range_1).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::Uint32PairBin>::end(__for_range_1).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin,
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin>::iterator *)&__for_end) )
    {
      pair_bin = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin);
      val = proto::Uint32PairBin::value(pair_bin);
      __args_0 = proto::Uint32PairBin::key(pair_bin);
      std::set<std::pair<unsigned int,unsigned int>>::emplace<unsigned int,unsigned int>(
        (std::set<std::pair<unsigned int,unsigned int>> *const)(v2 + 32),
        &__args_0,
        &val,
        &__args_0,
        v15);
      google::protobuf::internal::RepeatedPtrIterator<proto::Uint32PairBin const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32PairBin> *const)&__for_begin);
    }
    v16 = std::move<std::set<std::pair<unsigned int,unsigned int>> &>((std::set<std::pair<unsigned int,unsigned int>> *)(v2 + 32));
    std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::emplace<std::set<std::pair<unsigned int,unsigned int>>>(
      &this->banned_drop_subject_set_,
      v16,
      v17);
    std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::DragonSpineBanDropSubject const>::operator++(&__for_begin_0);
  }
  is_content_closed = proto::DragonSpineScheduleBin::is_content_closed(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  v19 = proto::DragonSpineScheduleBin::activity_weapon_guid(schedule_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->activity_weapon_guid_);
  this->activity_weapon_guid_ = v19;
  v21 = 0;
LABEL_30:
  result = v21;
  if ( v36 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
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

// Line 64: range 00000000165BA4A6-00000000165BA92C
int32_t __cdecl DragonSpineActivity::toScheduleBin(
        const DragonSpineActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>> >,std::equal_to<std::set<std::pair<unsigned int,unsigned int>> >,std::allocator<std::set<std::pair<unsigned int,unsigned int>> > >::const_iterator __for_begin_0; // [rsp+10h] [rbp-90h] BYREF
  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>> >,std::equal_to<std::set<std::pair<unsigned int,unsigned int>> >,std::allocator<std::set<std::pair<unsigned int,unsigned int>> > >::const_iterator __for_end_0; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,DragonSpineChapterRecord>::const_iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,DragonSpineChapterRecord>::const_iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  proto::DragonSpineScheduleBin *schedule_bin; // [rsp+30h] [rbp-70h]
  const std::map<unsigned int,DragonSpineChapterRecord> *__for_range; // [rsp+38h] [rbp-68h]
  const std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>> >,std::equal_to<std::set<std::pair<unsigned int,unsigned int>> >,std::allocator<std::set<std::pair<unsigned int,unsigned int>> > > *__for_range_0; // [rsp+40h] [rbp-60h]
  const std::set<std::pair<unsigned int,unsigned int>> *subject_set; // [rsp+48h] [rbp-58h]
  proto::DragonSpineBanDropSubject *subject_set_bin; // [rsp+50h] [rbp-50h]
  const std::set<std::pair<unsigned int,unsigned int>> *__for_range_1; // [rsp+58h] [rbp-48h]
  const std::pair<unsigned int,unsigned int> *v13; // [rsp+60h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *subject_type; // [rsp+68h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *subject_key; // [rsp+70h] [rbp-30h]
  proto::Uint32PairBin *subject_bin; // [rsp+78h] [rbp-28h]
  const std::pair<unsigned int const,DragonSpineChapterRecord> *v17; // [rsp+80h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter_id; // [rsp+88h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter; // [rsp+90h] [rbp-10h]
  proto::DragonSpineChapterBin *chapter_bin; // [rsp+98h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_dragon_spine_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineScheduleBin::set_weapon_enhance_stage(schedule_bin, this->dragon_sword_cur_enhance_level_);
  __for_range = &this->chapter_map_;
  __for_begin._M_node = std::map<unsigned int,DragonSpineChapterRecord>::begin(&this->chapter_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DragonSpineChapterRecord>::end(&this->chapter_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator*(&__for_begin);
    chapter_id = std::get<0ul,unsigned int const,DragonSpineChapterRecord>(v17);
    chapter = (std::tuple_element<1,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *)std::get<1ul,unsigned int const,DragonSpineChapterRecord>(v17);
    chapter_bin = proto::DragonSpineScheduleBin::add_chapter_list(schedule_bin);
    DragonSpineChapterRecord::toBin(chapter, chapter_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineScheduleBin::set_shimmering_essence(schedule_bin, this->shimmering_essence_);
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::DragonSpineScheduleBin::set_warm_essence(schedule_bin, this->warm_essence_);
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineScheduleBin::set_wondrous_essence(schedule_bin, this->wondrous_essence_);
  __for_range_0 = &this->banned_drop_subject_set_;
  __for_begin_0._M_cur = std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::begin(&this->banned_drop_subject_set_)._M_cur;
  __for_end_0._M_cur = std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<std::set<std::pair<unsigned int,unsigned int>>,true>(&__for_begin_0, &__for_end_0) )
  {
    subject_set = std::__detail::_Node_const_iterator<std::set<std::pair<unsigned int,unsigned int>>,true,true>::operator*(&__for_begin_0);
    subject_set_bin = proto::DragonSpineScheduleBin::add_banned_drop_subject_list(schedule_bin);
    __for_range_1 = subject_set;
    __for_begin._M_node = std::set<std::pair<unsigned int,unsigned int>>::begin(subject_set)._M_node;
    __for_end._M_node = std::set<std::pair<unsigned int,unsigned int>>::end(__for_range_1)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)&__for_end) )
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)&__for_begin);
      subject_type = (std::tuple_element<0,const std::pair<unsigned int,unsigned int> >::type *)std::get<0ul,unsigned int,unsigned int>(v13);
      subject_key = (std::tuple_element<1,const std::pair<unsigned int,unsigned int> >::type *)std::get<1ul,unsigned int,unsigned int>(v13);
      subject_bin = proto::DragonSpineBanDropSubject::add_drop_subject_list(subject_set_bin);
      if ( *(_BYTE *)(((unsigned __int64)subject_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)subject_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)subject_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::Uint32PairBin::set_key(subject_bin, *subject_type);
      if ( *(_BYTE *)(((unsigned __int64)subject_key >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)subject_key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)subject_key >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::Uint32PairBin::set_value(subject_bin, *subject_key);
      std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)&__for_begin);
    }
    std::__detail::_Node_const_iterator<std::set<std::pair<unsigned int,unsigned int>>,true,true>::operator++(&__for_begin_0);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::DragonSpineScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::DragonSpineScheduleBin::set_activity_weapon_guid(schedule_bin, this->activity_weapon_guid_);
  return 0;
};

// Line 91: range 00000000165BA92E-00000000165BAB69
int32_t __cdecl DragonSpineChapterRecord::toBin(
        const DragonSpineChapterRecord *const this,
        proto::DragonSpineChapterBin *bin)
{
  google::protobuf::uint32 *v2; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-18h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-10h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineChapterBin::set_chapter_id(bin, this->chapter_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::DragonSpineChapterBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineChapterBin::set_progress(bin, this->progress);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::DragonSpineChapterBin::set_is_finish(bin, this->is_finish);
  __for_range = &this->finished_mission_set;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->finished_mission_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->finished_mission_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v2 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DragonSpineChapterBin::add_finished_mission_list(bin, *v2);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineChapterBin::set_open_time(bin, this->open_time);
  return 0;
};

// Line 105: range 00000000165BAB6A-00000000165BAE6A
int32_t __cdecl DragonSpineChapterRecord::fromBin(
        DragonSpineChapterRecord *const this,
        const proto::DragonSpineChapterBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // edx
  bool is_open; // cl
  uint32_t v7; // edx
  bool is_finish; // cl
  uint32_t v9; // edx
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+20h] [rbp-70h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-68h]
  char v14[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 mission_id:110";
  *(_QWORD *)(v2 + 16) = DragonSpineChapterRecord::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  v5 = proto::DragonSpineChapterBin::chapter_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->chapter_id = v5;
  is_open = proto::DragonSpineChapterBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  v7 = proto::DragonSpineChapterBin::progress(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->progress);
  }
  this->progress = v7;
  is_finish = proto::DragonSpineChapterBin::is_finish(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = is_finish;
  __for_range = proto::DragonSpineChapterBin::finished_mission_list(bin);
  __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(__for_range);
  __for_end = google::protobuf::RepeatedField<unsigned int>::end(__for_range);
  while ( __for_begin != __for_end )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin;
    std::set<unsigned int>::insert(&this->finished_mission_set, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin;
  }
  v9 = proto::DragonSpineChapterBin::open_time(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->open_time);
  }
  this->open_time = v9;
  result = 0;
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

// Line 119: range 00000000165BAE6C-00000000165BAFC2
void __cdecl DragonSpineChapterRecord::toClient(
        DragonSpineChapterRecord *const this,
        proto::DragonSpineChapterInfo *client_info)
{
  google::protobuf::uint32 v2; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineChapterInfo::set_chapter_id(client_info, this->chapter_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::DragonSpineChapterInfo::set_is_open(client_info, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineChapterInfo::set_progress(client_info, this->progress);
  v2 = std::set<unsigned int>::size(&this->finished_mission_set);
  proto::DragonSpineChapterInfo::set_finished_mission_num(client_info, v2);
  if ( *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->open_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineChapterInfo::set_open_time(client_info, this->open_time);
};

// Line 128: range 00000000165BAFC4-00000000165BB4BE
int32_t __cdecl DragonSpineActivity::toClient(DragonSpineActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  proto::DragonSpineChapterInfo *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint32_t content_duration; // ecx
  unsigned int val; // [rsp+18h] [rbp-88h] BYREF
  uint32_t content_finish_time; // [rsp+1Ch] [rbp-84h]
  std::map<unsigned int,DragonSpineChapterRecord>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,DragonSpineChapterRecord>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  proto::DragonSpineActivityDetailInfo *info; // [rsp+30h] [rbp-70h]
  std::map<unsigned int,DragonSpineChapterRecord> *__for_range; // [rsp+38h] [rbp-68h]
  const data::DragonSpinePreviewExcelConfig *preview_config_ptr; // [rsp+40h] [rbp-60h]
  std::pair<unsigned int const,DragonSpineChapterRecord> *__in; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter_id; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v17; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v18; // [rsp+70h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "toClient",
      131);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v18,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    return -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_dragon_spine_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::DragonSpineActivityDetailInfo::set_weapon_enhance_level(info, this->dragon_sword_cur_enhance_level_);
    __for_range = &this->chapter_map_;
    __for_begin._M_node = std::map<unsigned int,DragonSpineChapterRecord>::begin(&this->chapter_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,DragonSpineChapterRecord>::end(&this->chapter_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator*(&__for_begin);
      chapter_id = std::get<0ul,unsigned int const,DragonSpineChapterRecord>(__in);
      chapter = std::get<1ul,unsigned int const,DragonSpineChapterRecord>(__in);
      v4 = proto::DragonSpineActivityDetailInfo::add_chapter_info_list(info);
      DragonSpineChapterRecord::toClient(chapter, v4);
      std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::DragonSpineActivityDetailInfo::set_shimmering_essence(info, this->shimmering_essence_);
    if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::DragonSpineActivityDetailInfo::set_warm_essence(info, this->warm_essence_);
    if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::DragonSpineActivityDetailInfo::set_wondrous_essence(info, this->wondrous_essence_);
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::DragonSpineActivityDetailInfo::set_is_content_closed(info, this->is_content_closed_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    preview_config_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpinePreviewConfig(&v5->design_config.txt_config_mgr.activity_dragon_spine_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( preview_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->content_duration >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->content_duration >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      content_duration = preview_config_ptr->content_duration;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      content_finish_time = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, content_duration);
      proto::DragonSpineActivityDetailInfo::set_content_finish_time(info, content_finish_time);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "toClient",
        147);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        &v18,
        (const char (*)[42])"[DRAGON_SPINE] preview_config_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v18);
      return -1;
    }
  }
};

// Line 156: range 00000000165BB4C0-00000000165BB4F2
void __cdecl DragonSpineActivity::onStart(DragonSpineActivity *const this)
{
  DragonSpineActivity::initAbilityGroup(this);
  DragonSpineActivity::initEventObserver(this);
  DragonSpineActivity::addDragonSpineWatchers(this);
};

// Line 163: range 00000000165BB4F4-00000000165BB8C3
void __cdecl DragonSpineActivity::onPreStart(DragonSpineActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int v6; // r14d
  uint32_t openday; // ecx
  DragonSpineChapterRecord *v8; // rax
  unsigned int *v9; // rcx
  DragonSpineChapterRecord *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  const data::DragonSpineStageExcelConfig *chapter_config_ptr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 4 14 chapter_id:171 48 72 11 chapter:173";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::onPreStart;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61956;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::map<unsigned int,DragonSpineChapterRecord>::clear(&this->chapter_map_);
  for ( *(_DWORD *)(v1 + 32) = 1; *(_DWORD *)(v1 + 32) <= 4u; ++*(_DWORD *)(v1 + 32) )
  {
    DragonSpineChapterRecord::DragonSpineChapterRecord((DragonSpineChapterRecord *const)(v1 + 48));
    *(_DWORD *)(v1 + 48) = *(_DWORD *)(v1 + 32);
    *(_BYTE *)(v1 + 52) = 0;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v14);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
    chapter_config_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpineChapterConfigByChapterId(
                           &v4->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                           *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v14);
    if ( chapter_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->openday >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->openday >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      openday = chapter_config_ptr->openday;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 64) = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, openday);
      v8 = std::move<DragonSpineChapterRecord &>((DragonSpineChapterRecord *)(v1 + 48));
      v11 = std::map<unsigned int,DragonSpineChapterRecord>::emplace<unsigned int &,DragonSpineChapterRecord>(
              &this->chapter_map_,
              (unsigned int *)(v1 + 32),
              v8,
              v9,
              v10);
      if ( !v11.second )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/dragonspine_activity.cpp",
          "onPreStart",
          185);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v15,
                (const char (*)[34])"chapter duplicated!, chapter_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
        v6 = 0;
      }
      else
      {
        v6 = 1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "onPreStart",
        179);
      v5 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
             &v15,
             (const char (*)[60])"[DRAGON_SPINE] chapter excel config not found, chapter_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = 0;
    }
    DragonSpineChapterRecord::~DragonSpineChapterRecord((DragonSpineChapterRecord *const)(v1 + 48));
    if ( v6 != 1 )
      break;
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 192: range 00000000165BB8C4-00000000165BB9B0
void __cdecl DragonSpineActivity::onLogin(DragonSpineActivity *const this)
{
  char v1; // al

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_6;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ || BaseActivity::isSettled(this) )
LABEL_6:
    v1 = 1;
  else
    v1 = 0;
  if ( !v1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Player::isRelogin(this->player_) )
    {
      DragonSpineActivity::initAbilityGroup(this);
      DragonSpineActivity::addDragonSpineWatchers(this);
      DragonSpineActivity::initEventObserver(this);
    }
  }
};

// Line 207: range 00000000165BB9B2-00000000165BB9E4
void __cdecl DragonSpineActivity::onSettle(DragonSpineActivity *const this)
{
  DragonSpineActivity::clearAbilityGroup(this);
  BaseActivity::delWatchers(this);
  DragonSpineActivity::delDragonSpineWatchers(this);
};

// Line 214: range 00000000165BB9E6-00000000165BBCE0
void __cdecl DragonSpineActivity::onClear(DragonSpineActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:224";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->obtain_item_obs_wtr_);
  BaseActivity::delWatchers(this);
  DragonSpineActivity::delDragonSpineWatchers(this);
  std::map<unsigned int,DragonSpineChapterRecord>::clear(&this->chapter_map_);
  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::clear(&this->banned_drop_subject_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->dragon_sword_cur_enhance_level_);
  }
  this->dragon_sword_cur_enhance_level_ = 0;
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->shimmering_essence_ )
    DragonSpineActivity::subShimmeringEssence(this, this->shimmering_essence_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->warm_essence_ )
    DragonSpineActivity::subWarmEssence(this, this->warm_essence_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->wondrous_essence_ )
    DragonSpineActivity::subWondrousEssence(this, this->wondrous_essence_, (const SubItemReason *)(v1 + 32), 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->activity_weapon_guid_);
  this->activity_weapon_guid_ = 0LL;
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

// Line 242: range 00000000165BBCE2-00000000165BBFF3
int32_t __cdecl DragonSpineActivity::execAction(
        DragonSpineActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r13
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int32_t result; // eax
  unsigned __int64 val; // [rsp+18h] [rbp-88h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-80h] BYREF
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 chapter_id:253";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_OPEN_DRAGON_SPINE_PHASE )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "execAction",
        249);
      v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v14,
             (const char (*)[34])"[DRAGON_SPINE] action param size ");
      val = std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_25D23E60);
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
      goto LABEL_16;
    }
    *(_DWORD *)(v2 + 32) = 0;
    v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 32), 1) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "execAction",
        256);
      v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v14,
             (const char (*)[25])"[DRAGON_SPINE] strToNum ");
      v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v14);
      result = -1;
      goto LABEL_16;
    }
    DragonSpineActivity::openChapter(this, *(_DWORD *)(v2 + 32));
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_CLOSE_DRAGON_SPINE_CONTENT )
    {
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_16;
    }
    DragonSpineActivity::closeDragonSpineContent(this);
  }
  result = 0;
LABEL_16:
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

// Line 274: range 00000000165BBFF4-00000000165BC42A
void __fastcall DragonSpineActivity::openChapter(DragonSpineActivity *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::pointer v8; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  char v11[192]; // [rsp+20h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 chapter_id:273 64 8 16 chapter_iter:286 96 32 10 notify:294";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::openChapter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 48) = chapter_id;
  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_8:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    if ( DragonSpineActivity::isChapterOpen(this, *(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "openChapter",
        282);
      v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[50])"[DRAGON_SPINE] chapter already open, chapter_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    }
    else
    {
      *(std::map<unsigned int,DragonSpineChapterRecord>::iterator *)(v2 + 64) = std::map<unsigned int,DragonSpineChapterRecord>::find(
                                                                                  &this->chapter_map_,
                                                                                  (const std::map<unsigned int,DragonSpineChapterRecord>::key_type *)(v2 + 48));
      __y._M_node = std::map<unsigned int,DragonSpineChapterRecord>::end(&this->chapter_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::_Self *)(v2 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/dragonspine_activity.cpp",
          "openChapter",
          289);
        v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[47])"[DRAGON_SPINE] chapter not found, chapter_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      }
      else
      {
        v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> > *const)(v2 + 64));
        p_is_open = &v8->second.is_open;
        if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(p_is_open);
        }
        v8->second.is_open = 1;
        proto::DragonSpineChapterOpenNotify::DragonSpineChapterOpenNotify((proto::DragonSpineChapterOpenNotify *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::DragonSpineChapterOpenNotify::set_schedule_id(
          (proto::DragonSpineChapterOpenNotify *const)(v2 + 96),
          this->schedule_id_);
        proto::DragonSpineChapterOpenNotify::set_chapter_id(
          (proto::DragonSpineChapterOpenNotify *const)(v2 + 96),
          *(_DWORD *)(v2 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
        proto::DragonSpineChapterOpenNotify::~DragonSpineChapterOpenNotify((proto::DragonSpineChapterOpenNotify *const)(v2 + 96));
      }
    }
  }
  if ( v11 == (char *)v2 )
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

// Line 301: range 00000000165BC42C-00000000165BC63B
_BOOL8 __fastcall DragonSpineActivity::isChapterOpen(DragonSpineActivity *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::pointer v7; // rdx
  bool *p_is_open; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 chapter_id:300 64 8 16 chapter_iter:307";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::isChapterOpen;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  if ( !BaseActivity::isOpening(this, 0) )
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
    result = 0LL;
  }
  else
  {
    *(std::map<unsigned int,DragonSpineChapterRecord>::iterator *)(v2 + 64) = std::map<unsigned int,DragonSpineChapterRecord>::find(
                                                                                &this->chapter_map_,
                                                                                (const std::map<unsigned int,DragonSpineChapterRecord>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,DragonSpineChapterRecord>::end(&this->chapter_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::_Self *)(v2 + 64),
           &__y) )
    {
      result = 0LL;
    }
    else
    {
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> > *const)(v2 + 64));
      p_is_open = &v7->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_open);
      }
      result = v7->second.is_open;
    }
  }
  if ( v10 == (char *)v2 )
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

// Line 316: range 00000000165BC63C-00000000165BC7A8
void __cdecl DragonSpineActivity::addDragonSpineWatchers(DragonSpineActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  std::map<unsigned int,DragonSpineChapterRecord>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,DragonSpineChapterRecord>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,DragonSpineChapterRecord> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<unsigned int const,DragonSpineChapterRecord> *v5; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->chapter_map_;
  __for_begin._M_node = std::map<unsigned int,DragonSpineChapterRecord>::begin(&this->chapter_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DragonSpineChapterRecord>::end(&this->chapter_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator*(&__for_begin);
    chapter_id = std::get<0ul,unsigned int const,DragonSpineChapterRecord>(v5);
    chapter = (std::tuple_element<1,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *)std::get<1ul,unsigned int const,DragonSpineChapterRecord>(v5);
    if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( DragonSpineActivity::addChapterWatchers(this, *chapter_id) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "addDragonSpineWatchers",
        321);
      v1 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v8,
             (const char (*)[54])"[DRAGON_SPINE] addChapterWatchers fails, chapter_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, chapter_id);
      common::milog::MiLogStream::~MiLogStream(&v8);
      return;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator++(&__for_begin);
  }
};

// Line 328: range 00000000165BC7AA-00000000165BCD09
void __cdecl DragonSpineActivity::delDragonSpineWatchers(DragonSpineActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t WatcherComp; // eax
  bool v11; // r14
  PlayerWatcherComp *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-100h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-F8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-F0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+70h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 14 watcher_id:330 64 24 15 watcher_vec:329";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::delDragonSpineWatchers;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,unsigned int>>(
    (std::vector<unsigned int> *)(v1 + 64),
    &v4->design_config.txt_config_mgr.activity_dragon_spine_config_mgr.watcher_mission_map_);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  __for_range = (std::vector<unsigned int> *)(v1 + 64);
  __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = *v5;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v6->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v1 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( watcher_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v20, WatcherComp);
      v11 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v20);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v20);
      if ( v11 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::delWatcher(v12, *(_DWORD *)(v1 + 48));
      }
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/dragonspine_activity.cpp",
        "delDragonSpineWatchers",
        344);
      v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v21,
              (const char (*)[29])"[DRAGON_SPINE] del watcher: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "delDragonSpineWatchers",
        335);
      v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
             &v21,
             (const char (*)[37])"[DRAGON_SPINE] findWatcherConfig id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  if ( v22 == (char *)v1 )
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

// Line 349: range 00000000165BCD0A-00000000165BD60D
__int64 __fastcall DragonSpineActivity::addChapterWatchers(DragonSpineActivity *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  uint32_t WatcherComp; // eax
  bool v19; // r14
  PlayerWatcherComp *v20; // rax
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::set<unsigned int> *chapter_watcher_set_ptr; // [rsp+28h] [rbp-D8h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v32; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v33; // [rsp+50h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:357 64 4 14 chapter_id:348";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::addChapterWatchers;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = chapter_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
  chapter_watcher_set_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpineChapterWatcherSet(
                              &v5->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                              *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( !chapter_watcher_set_ptr )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "addChapterWatchers",
      353);
    v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v33,
           (const char (*)[55])"[DRAGON_SPINE] chapter watcher not found, chapter_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v33);
    result = 0xFFFFFFFFLL;
    goto LABEL_34;
  }
  __for_range = chapter_watcher_set_ptr;
  __for_begin._M_node = std::set<unsigned int>::begin(chapter_watcher_set_ptr)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(chapter_watcher_set_ptr)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v8;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v32);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v9->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v32);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "addChapterWatchers",
        362);
      v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v33,
              (const char (*)[37])"[DRAGON_SPINE] findWatcherConfig id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_13:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      result = 0xFFFFFFFFLL;
      goto LABEL_34;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/dragonspine_activity.cpp",
        "addChapterWatchers",
        368);
      v13 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v33,
              (const char (*)[27])"[DRAGON_SPINE] watcher_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" already finished");
      common::milog::MiLogStream::~MiLogStream(&v33);
      goto LABEL_32;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->taken_watcher_id_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/dragonspine_activity.cpp",
        "addChapterWatchers",
        374);
      v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v33,
              (const char (*)[27])"[DRAGON_SPINE] watcher_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v16,
              (const char (*)[20])" taken reward, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_31:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v33);
      goto LABEL_32;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v32, WatcherComp);
    v19 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v32);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v32);
    if ( !v19 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::addWatcher(
        (PlayerWatcherComp *const)&v32,
        (const WatcherConfig *)v20,
        (uint32_t)watcher_config_ptr);
      v21 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v32);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v32);
      if ( v21 )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/dragonspine_activity.cpp",
          "addChapterWatchers",
          385);
        v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v33,
                (const char (*)[30])"[DRAGON_SPINE] addWatcher id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_13;
      }
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/dragonspine_activity.cpp",
        "addChapterWatchers",
        389);
      v24 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v33,
              (const char (*)[29])"[DRAGON_SPINE] add watcher: ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v2 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v25, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_31;
    }
LABEL_32:
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_34:
  if ( v34 == (char *)v2 )
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

// Line 396: range 00000000165BD60E-00000000165BD6A9
bool __cdecl DragonSpineActivity::isContainsWatcher(DragonSpineActivity *const this, uint32_t watcher_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isContainsWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isContainsWatcher = ActivityDragonSpineExcelConfigMgr::isContainsWatcher(
                        &v2->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                        watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isContainsWatcher || BaseActivity::isContainsWatcher(this, watcher_id);
};

// Line 406: range 00000000165BD6AA-00000000165BDBE7
int32_t __cdecl DragonSpineActivity::fillWatcherProtoList(
        DragonSpineActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  ActivityDragonSpineExcelConfigMgr *p_activity_dragon_spine_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  proto::ActivityWatcherInfo *v13; // rax
  unsigned int val; // [rsp+14h] [rbp-FCh] BYREF
  std::map<unsigned int,DragonSpineChapterRecord>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::map<unsigned int,DragonSpineChapterRecord>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-E8h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-E0h] BYREF
  std::map<unsigned int,DragonSpineChapterRecord> *__for_range; // [rsp+38h] [rbp-D8h]
  const std::pair<unsigned int const,DragonSpineChapterRecord> *v20; // [rsp+40h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter_id; // [rsp+48h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *chapter; // [rsp+50h] [rbp-C0h]
  const std::set<unsigned int> *chapter_watcher_set_ptr; // [rsp+58h] [rbp-B8h]
  const std::set<unsigned int> *__for_range_0; // [rsp+60h] [rbp-B0h]
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v26; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-90h] BYREF
  char v28[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:416";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::fillWatcherProtoList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &this->chapter_map_;
  __for_begin._M_node = std::map<unsigned int,DragonSpineChapterRecord>::begin(&this->chapter_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,DragonSpineChapterRecord>::end(&this->chapter_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator*(&__for_begin);
    chapter_id = std::get<0ul,unsigned int const,DragonSpineChapterRecord>(v20);
    chapter = (std::tuple_element<1,const std::pair<unsigned int const,DragonSpineChapterRecord> >::type *)std::get<1ul,unsigned int const,DragonSpineChapterRecord>(v20);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    p_activity_dragon_spine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_dragon_spine_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    chapter_watcher_set_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpineChapterWatcherSet(
                                p_activity_dragon_spine_config_mgr,
                                *chapter_id);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( !chapter_watcher_set_ptr )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "fillWatcherProtoList",
        412);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v27,
             (const char (*)[55])"[DRAGON_SPINE] chapter watcher not found, chapter_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, chapter_id);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
      goto LABEL_22;
    }
    __for_range_0 = chapter_watcher_set_ptr;
    __for_begin_0._M_node = std::set<unsigned int>::begin(chapter_watcher_set_ptr)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v8 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v8;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
      watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                             &v9->design_config.txt_config_mgr.new_activity_config_mgr,
                             *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( watcher_config_ptr )
      {
        v13 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
        BaseActivity::fillWatcherProto(this, v13, watcher_config_ptr);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/dragonspine_activity.cpp",
          "fillWatcherProtoList",
          421);
        v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v27,
                (const char (*)[37])"[DRAGON_SPINE] findWatcherConfig id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v10,
                (const unsigned int *)(v2 + 32));
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_22:
  if ( v28 == (char *)v2 )
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

// Line 431: range 00000000165BDBE8-00000000165BE7D2
__int64 __fastcall DragonSpineActivity::afterTakenWatcherReward(DragonSpineActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::set<unsigned int>::size_type v21; // r14
  uint32_t v22; // esi
  std::set<unsigned int>::size_type v23; // r14
  uint32_t old_progress; // [rsp+1Ch] [rbp-E4h]
  const data::DragonSpineMissionExcelConfig *mission_config_ptr; // [rsp+20h] [rbp-E0h]
  DragonSpineChapterRecord *chapter_ptr; // [rsp+28h] [rbp-D8h]
  const data::DragonSpineStageExcelConfig *chapter_config_ptr; // [rsp+30h] [rbp-D0h]
  const std::set<unsigned int> *chapter_mission_set_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v29; // [rsp+40h] [rbp-C0h] BYREF
  char v30[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 chapter_id:443 48 4 14 watcher_id:430 64 32 17 change_notify:491";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::afterTakenWatcherReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  v6 = !ActivityDragonSpineExcelConfigMgr::isContainsWatcher(
          &v5->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
          *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "afterTakenWatcherReward",
      434);
    v7 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[48])"[DRAGON_SPINE] not contain watcher, watcher_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(_DWORD *)(v2 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    mission_config_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpineMissionConfigByWatcherId(
                           &v11->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                           *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( mission_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)mission_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->chapter_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = mission_config_ptr->chapter_id;
      chapter_ptr = DragonSpineActivity::findChapter(this, *(_DWORD *)(v2 + 32));
      if ( !chapter_ptr )
        goto LABEL_16;
      if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->is_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)chapter_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&chapter_ptr->is_open >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&chapter_ptr->is_open);
      }
      if ( chapter_ptr->is_open )
      {
        if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->is_finish >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)chapter_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&chapter_ptr->is_finish >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load1(&chapter_ptr->is_finish);
        }
        if ( chapter_ptr->is_finish )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 64),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/dragonspine_activity.cpp",
            "afterTakenWatcherReward",
            453);
          v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  (common::milog::MiLogStream *const)(v2 + 64),
                  (const char (*)[49])"[DRAGON_SPINE] chapter has finished, chapter_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
          result = 0LL;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v29);
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
          chapter_config_ptr = data::ActivityDragonSpineExcelConfigMgrBase::findDragonSpineStageExcelConfig(
                                 &v15->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                                 *(_DWORD *)(v2 + 32));
          std::shared_ptr<Config>::~shared_ptr(&v29);
          if ( chapter_config_ptr )
          {
            if ( std::set<unsigned int>::count(&chapter_ptr->finished_mission_set, &mission_config_ptr->id) )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 64),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/dragonspine_activity.cpp",
                "afterTakenWatcherReward",
                466);
              v17 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                      (common::milog::MiLogStream *const)(v2 + 64),
                      (const char (*)[62])"[DRAGON_SPINE] mission already has been finished, mission_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &mission_config_ptr->id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
              result = 0xFFFFFFFFLL;
            }
            else
            {
              std::set<unsigned int>::insert(&chapter_ptr->finished_mission_set, &mission_config_ptr->id);
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v29);
              v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
              chapter_mission_set_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpineMissionSet(
                                          &v18->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                                          *(_DWORD *)(v2 + 32));
              std::shared_ptr<Config>::~shared_ptr(&v29);
              if ( chapter_mission_set_ptr )
              {
                if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                old_progress = chapter_ptr->progress;
                if ( std::set<unsigned int>::size(chapter_mission_set_ptr) )
                {
                  v21 = 100 * std::set<unsigned int>::size(&chapter_ptr->finished_mission_set);
                  v22 = v21 / std::set<unsigned int>::size(chapter_mission_set_ptr);
                  if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&chapter_ptr->progress);
                  }
                  chapter_ptr->progress = v22;
                }
                else
                {
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 64),
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/activity/dragonspine_activity.cpp",
                    "afterTakenWatcherReward",
                    481);
                  v20 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                          (common::milog::MiLogStream *const)(v2 + 64),
                          (const char (*)[53])"[DRAGON_SPINE] chapter mission num is 0, chapter_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v20,
                    (const unsigned int *)(v2 + 32));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
                  if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_store4(&chapter_ptr->progress);
                  }
                  chapter_ptr->progress = 0;
                }
                if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                if ( old_progress != chapter_ptr->progress )
                {
                  proto::DragonSpineChapterProgressChangeNotify::DragonSpineChapterProgressChangeNotify((proto::DragonSpineChapterProgressChangeNotify *const)(v2 + 64));
                  proto::DragonSpineChapterProgressChangeNotify::set_chapter_id(
                    (proto::DragonSpineChapterProgressChangeNotify *const)(v2 + 64),
                    *(_DWORD *)(v2 + 32));
                  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                        + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  proto::DragonSpineChapterProgressChangeNotify::set_schedule_id(
                    (proto::DragonSpineChapterProgressChangeNotify *const)(v2 + 64),
                    this->schedule_id_);
                  if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&chapter_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4();
                  }
                  proto::DragonSpineChapterProgressChangeNotify::set_cur_progress(
                    (proto::DragonSpineChapterProgressChangeNotify *const)(v2 + 64),
                    chapter_ptr->progress);
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
                  proto::DragonSpineChapterProgressChangeNotify::~DragonSpineChapterProgressChangeNotify((proto::DragonSpineChapterProgressChangeNotify *const)(v2 + 64));
                }
                v23 = std::set<unsigned int>::size(&chapter_ptr->finished_mission_set);
                if ( v23 == std::set<unsigned int>::size(chapter_mission_set_ptr) )
                  DragonSpineActivity::onChapterFinish(this, *(_DWORD *)(v2 + 32));
                result = 0LL;
              }
              else
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 64),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/dragonspine_activity.cpp",
                  "afterTakenWatcherReward",
                  474);
                v19 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                        (common::milog::MiLogStream *const)(v2 + 64),
                        (const char (*)[60])"[DRAGON_SPINE] cannot find chapter mission set, chapter_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
                result = 0xFFFFFFFFLL;
              }
            }
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 64),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/dragonspine_activity.cpp",
              "afterTakenWatcherReward",
              460);
            v16 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    (common::milog::MiLogStream *const)(v2 + 64),
                    (const char (*)[61])"[DRAGON_SPINE] cannot find chapter excel config, chapter_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
            result = 0xFFFFFFFFLL;
          }
        }
      }
      else
      {
LABEL_16:
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/dragonspine_activity.cpp",
          "afterTakenWatcherReward",
          447);
        v13 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                (common::milog::MiLogStream *const)(v2 + 64),
                (const char (*)[45])"[DRAGON_SPINE] chapter not open, chapter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "afterTakenWatcherReward",
        440);
      v12 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
              (common::milog::MiLogStream *const)(v2 + 64),
              (const char (*)[57])"[DRAGON_SPINE] cannot find activity mission, watcher_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v30 == (char *)v2 )
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

// Line 507: range 00000000165BE7D4-00000000165BF5AC
void __fastcall DragonSpineActivity::onWatcherFinish(DragonSpineActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  data::DragonSpineMissionFinishExecType type; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const std::string *v12; // rax
  bool v13; // r14
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  uint32_t *v16; // rdx
  PlayerItemComp *ItemComp; // rax
  ItemParam *v18; // rax
  PlayerItemComp *v19; // rax
  common::milog::MiLogStream *v20; // r14
  int v21; // r14d
  common::milog::MiLogStream *v22; // rax
  std::allocator<char> __a; // [rsp+1Bh] [rbp-235h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-234h] BYREF
  uint32_t material_id; // [rsp+20h] [rbp-230h]
  uint32_t count; // [rsp+24h] [rbp-22Ch]
  std::vector<data::DragonSpineMissionFinishConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-228h] BYREF
  std::vector<data::DragonSpineMissionFinishConfig>::const_iterator __for_end; // [rsp+30h] [rbp-220h] BYREF
  std::vector<std::set<std::pair<unsigned int,unsigned int>>>::const_iterator __for_begin_0; // [rsp+38h] [rbp-218h] BYREF
  const data::DragonSpineMissionExcelConfig *mission_config_ptr; // [rsp+40h] [rbp-210h]
  DragonSpineChapterRecord *chapter_ptr; // [rsp+48h] [rbp-208h]
  const ActivityDragonSpineExcelConfigMgr *config_mgr; // [rsp+50h] [rbp-200h]
  const std::vector<data::DragonSpineMissionFinishConfig> *__for_range; // [rsp+58h] [rbp-1F8h]
  const data::DragonSpineMissionFinishConfig *finish_config; // [rsp+60h] [rbp-1F0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+68h] [rbp-1E8h]
  const std::vector<std::set<std::pair<unsigned int,unsigned int>>> *__for_range_0; // [rsp+70h] [rbp-1E0h]
  const std::set<std::pair<unsigned int,unsigned int>> *ban_drop_set; // [rsp+78h] [rbp-1D8h]
  common::milog::MiLogStream v38; // [rsp+80h] [rbp-1D0h] BYREF
  char v39[432]; // [rsp+A0h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 4 14 chapter_id:515 64 4 14 watcher_id:506 80 8 17 ban_drop_iter:540 112 8 10 reason:580 14"
                        "4 16 14 item_param:572 176 24 19 material_id_vec:562 240 24 18 item_param_vec:568 304 48 22 bann"
                        "ed_subject_set:528";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::onWatcherFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = 61956;
  v4[536862722] = -234881024;
  v4[536862723] = 62194;
  v4[536862723] = -234881024;
  v4[536862724] = 62194;
  v4[536862725] = 62194;
  v4[536862726] = -218959360;
  v4[536862727] = 62194;
  v4[536862728] = -218959360;
  v4[536862729] = 62194;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 64) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 144));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144));
  mission_config_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpineMissionConfigByWatcherId(
                         &v5->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                         *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 144));
  if ( mission_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&mission_config_ptr->chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)mission_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mission_config_ptr->chapter_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = mission_config_ptr->chapter_id;
    chapter_ptr = DragonSpineActivity::findChapter(this, *(_DWORD *)(v2 + 48));
    if ( chapter_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&chapter_ptr->is_finish >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)chapter_ptr + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&chapter_ptr->is_finish >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load1(&chapter_ptr->is_finish);
      }
      if ( chapter_ptr->is_finish )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/dragonspine_activity.cpp",
          "onWatcherFinish",
          524);
        v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v38,
               (const char (*)[49])"[DRAGON_SPINE] chapter has finished, chapter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
      else
      {
        std::set<std::pair<unsigned int,unsigned int>>::set((std::set<std::pair<unsigned int,unsigned int>> *const)(v2 + 304));
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 144));
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 144))->design_config.txt_config_mgr.activity_dragon_spine_config_mgr;
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 144));
        __for_range = &mission_config_ptr->finish_exec;
        __for_begin._M_current = std::vector<data::DragonSpineMissionFinishConfig>::begin(&mission_config_ptr->finish_exec)._M_current;
        __for_end._M_current = std::vector<data::DragonSpineMissionFinishConfig>::end(&mission_config_ptr->finish_exec)._M_current;
        while ( __gnu_cxx::operator!=<data::DragonSpineMissionFinishConfig const*,std::vector<data::DragonSpineMissionFinishConfig>>(
                  &__for_begin,
                  &__for_end) )
        {
          finish_config = __gnu_cxx::__normal_iterator<data::DragonSpineMissionFinishConfig const*,std::vector<data::DragonSpineMissionFinishConfig>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)&finish_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&finish_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( finish_config->type )
          {
            if ( *(_BYTE *)(((unsigned __int64)&finish_config->type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&finish_config->type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            type = finish_config->type;
            if ( type == DRAGON_SPINE_EXEC_TYPE_BAN_DROP )
            {
              *(std::map<unsigned int,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::const_iterator *)(v2 + 80) = std::map<unsigned int,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::find(&config_mgr->mission_ban_drop_config_map_, &mission_config_ptr->id);
              *(std::map<unsigned int,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::const_iterator *)(v2 + 112) = std::map<unsigned int,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::end(&config_mgr->mission_ban_drop_config_map_);
              if ( std::operator==(
                     (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::set<std::pair<unsigned int,unsigned int>>> > >::_Self *)(v2 + 80),
                     (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::set<std::pair<unsigned int,unsigned int>>> > >::_Self *)(v2 + 112)) )
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/dragonspine_activity.cpp",
                  "onWatcherFinish",
                  543);
                v10 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        &v38,
                        (const char (*)[55])"[DRAGON_SPINE] ban drop config not found, mission_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &mission_config_ptr->id);
                common::milog::MiLogStream::~MiLogStream(&v38);
                break;
              }
              __for_range_0 = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<std::set<std::pair<unsigned int,unsigned int>>> > > *const)(v2 + 80))->second;
              __for_begin_0._M_current = std::vector<std::set<std::pair<unsigned int,unsigned int>>>::begin(__for_range_0)._M_current;
              *(std::vector<std::set<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 112) = std::vector<std::set<std::pair<unsigned int,unsigned int>>>::end(__for_range_0);
              while ( __gnu_cxx::operator!=<std::set<std::pair<unsigned int,unsigned int>> const*,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>(
                        &__for_begin_0,
                        (const __gnu_cxx::__normal_iterator<const std::set<std::pair<unsigned int,unsigned int>>*,std::vector<std::set<std::pair<unsigned int,unsigned int>>> > *)(v2 + 112)) )
              {
                ban_drop_set = __gnu_cxx::__normal_iterator<std::set<std::pair<unsigned int,unsigned int>> const*,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::operator*(&__for_begin_0);
                if ( !std::set<std::pair<unsigned int,unsigned int>>::empty(ban_drop_set) )
                  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::insert(
                    &this->banned_drop_subject_set_,
                    ban_drop_set);
                __gnu_cxx::__normal_iterator<std::set<std::pair<unsigned int,unsigned int>> const*,std::vector<std::set<std::pair<unsigned int,unsigned int>>>>::operator++(&__for_begin_0);
              }
            }
            else if ( type == DRAGON_SPINE_EXEC_TYPE_CLEAR_ITEM )
            {
              if ( !std::vector<std::string>::size(&finish_config->param) )
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/dragonspine_activity.cpp",
                  "onWatcherFinish",
                  559);
                v11 = common::milog::MiLogStream::operator<<<char [89],(char *[89])0>(
                        &v38,
                        (const char (*)[89])"[DRAGON_SPINE] DRAGON_SPINE_EXEC_TYPE_CLEAR_ITEM param size greater than 1, mission_id: ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &mission_config_ptr->id);
                common::milog::MiLogStream::~MiLogStream(&v38);
                break;
              }
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 176));
              std::allocator<char>::allocator(&__a);
              std::string::basic_string<std::allocator<char>>((std::string *const)&v38, ",", &__a);
              v12 = std::vector<std::string>::operator[](&finish_config->param, 0LL);
              v13 = common::tools::StringUtils::splitToList<unsigned int>(
                      v12,
                      (const std::string *)&v38,
                      (std::vector<unsigned int> *)(v2 + 176),
                      0) != 0;
              std::string::~string(&v38);
              std::allocator<char>::~allocator(&__a);
              if ( v13 )
              {
                common::milog::MiLogStream::create(
                  &v38,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/dragonspine_activity.cpp",
                  "onWatcherFinish",
                  565);
                v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        &v38,
                        (const char (*)[35])"[DRAGON_SPINE] splitToList failed ");
                common::milog::MiLogStream::operator<<<std::string>(v14, &finish_config->param);
                common::milog::MiLogStream::~MiLogStream(&v38);
                v15 = 0;
              }
              else
              {
                std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 240));
                __for_range_1 = (std::vector<unsigned int> *)(v2 + 176);
                __for_begin_0._M_current = (const std::set<std::pair<unsigned int,unsigned int>> *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 176))._M_current;
                *(std::vector<unsigned int>::iterator *)(v2 + 112) = std::vector<unsigned int>::end(__for_range_1);
                while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin_0,
                          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v2 + 112)) )
                {
                  v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
                  if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  material_id = *v16;
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  ItemComp = Player::getItemComp(this->player_);
                  count = PlayerItemComp::getPackMaterialCount(ItemComp, material_id);
                  *(_DWORD *)(v2 + 144) = 0;
                  *(_DWORD *)(v2 + 148) = 0;
                  *(_DWORD *)(v2 + 152) = 0;
                  *(_DWORD *)(v2 + 156) = 0;
                  *(_DWORD *)(v2 + 144) = material_id;
                  *(_DWORD *)(v2 + 148) = count;
                  if ( *(_DWORD *)(v2 + 148) )
                  {
                    v18 = std::move<ItemParam &>((ItemParam *)(v2 + 144));
                    std::vector<ItemParam>::emplace_back<ItemParam>((std::vector<ItemParam> *const)(v2 + 240), v18, v18);
                  }
                  __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin_0);
                }
                SubItemReason::SubItemReason((SubItemReason *const)(v2 + 112), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                v19 = Player::getItemComp(this->player_);
                if ( PlayerItemComp::subItemBatch(
                       v19,
                       (const std::vector<ItemParam> *)(v2 + 240),
                       (const SubItemReason *)(v2 + 112)) )
                {
                  common::milog::MiLogStream::create(
                    &v38,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/activity/dragonspine_activity.cpp",
                    "onWatcherFinish",
                    583);
                  v20 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          &v38,
                          (const char (*)[40])"[DRAGON_SPINE] subItemBatch fails, uid:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  val = Player::getUid(this->player_);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
                  common::milog::MiLogStream::~MiLogStream(&v38);
                  v21 = 0;
                }
                else
                {
                  v21 = 1;
                }
                std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 240));
                if ( v21 )
                  v15 = 2;
                else
                  v15 = 1;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 176));
              if ( !v15 )
                break;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v38,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/dragonspine_activity.cpp",
                "onWatcherFinish",
                589);
              v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      &v38,
                      (const char (*)[39])"[DRAGON_SPINE] not support exec type: ");
              common::milog::MiLogStream::operator<<<data::DragonSpineMissionFinishExecType,(data::DragonSpineMissionFinishExecType*)0>(
                v22,
                &finish_config->type);
              common::milog::MiLogStream::~MiLogStream(&v38);
            }
          }
          __gnu_cxx::__normal_iterator<data::DragonSpineMissionFinishConfig const*,std::vector<data::DragonSpineMissionFinishConfig>>::operator++(&__for_begin);
        }
        std::set<std::pair<unsigned int,unsigned int>>::~set((std::set<std::pair<unsigned int,unsigned int>> *const)(v2 + 304));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "onWatcherFinish",
        519);
      v7 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v38,
             (const char (*)[45])"[DRAGON_SPINE] chapter not open, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "onWatcherFinish",
      511);
    v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v38,
           (const char (*)[57])"[DRAGON_SPINE] cannot find activity mission, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  if ( v39 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
  }
};

// Line 596: range 00000000165BF5AE-00000000165BF9AE
int32_t __cdecl DragonSpineActivity::findActivityDrops(
        DragonSpineActivity *const this,
        std::vector<std::pair<unsigned int,data::ItemLimitType>> *drop_id_type_vec,
        std::vector<std::pair<unsigned int,unsigned int>> *activity_drop_subject_vec,
        uint32_t level)
{
  std::map<unsigned int,unsigned int> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  data::ItemLimitType *v7; // r8
  int32_t result; // eax
  data::ItemLimitType DropItemLimitType; // [rsp+20h] [rbp-130h] BYREF
  data::NewActivityType activity_type; // [rsp+24h] [rbp-12Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-128h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-120h] BYREF
  const NewActivityExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-118h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-110h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+48h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *drop_id; // [rsp+50h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+58h] [rbp-F8h]
  std::shared_ptr<Config> v20; // [rsp+60h] [rbp-F0h] BYREF
  std::set<unsigned int> p_activity_meet_cond_set; // [rsp+70h] [rbp-E0h] BYREF
  char v22[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v4 = (std::map<unsigned int,unsigned int> *)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (std::map<unsigned int,unsigned int> *)v5;
  }
  *(_QWORD *)v4->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v4->_M_t._M_impl._M_header._M_color = "1 48 48 18 drop_count_map:602";
  v4->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)DragonSpineActivity::findActivityDrops;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.new_activity_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v20);
    std::set<unsigned int>::set(&p_activity_meet_cond_set, &this->meet_cond_set_);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    NewActivityExcelConfigMgr::findActivityDrop(
      v4 + 1,
      config_mgr,
      this->activity_id_,
      &p_activity_meet_cond_set,
      activity_drop_subject_vec,
      &this->banned_drop_subject_set_,
      level);
    std::set<unsigned int>::~set(&p_activity_meet_cond_set);
    if ( !std::map<unsigned int,unsigned int>::empty(v4 + 1) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(config_mgr, this->activity_id_);
      __for_range = v4 + 1;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(v4 + 1)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(v4 + 1)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        drop_id = std::get<0ul,unsigned int const,unsigned int>(__in);
        _ = std::get<1ul,unsigned int const,unsigned int>(__in);
        DropItemLimitType = NewActivityExcelConfigMgr::getDropItemLimitType(config_mgr, activity_type);
        std::vector<std::pair<unsigned int,data::ItemLimitType>>::emplace_back<unsigned int const&,data::ItemLimitType>(
          drop_id_type_vec,
          drop_id,
          &DropItemLimitType,
          drop_id,
          v7);
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
    }
    std::map<unsigned int,unsigned int>::~map(v4 + 1);
  }
  result = 0;
  if ( v22 == (char *)v4 )
  {
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 616: range 00000000165BF9B0-00000000165C06DC
void __fastcall DragonSpineActivity::onChapterFinish(DragonSpineActivity *const this, __int32 chapter_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  PlayerItemComp *ItemComp; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityDragonSpineExcelConfigMgr *p_activity_dragon_spine_config_mgr; // rcx
  PlayerBasicComp *BasicComp; // rax
  ActivityAbilityGroupExcelConfigMgr *p_activity_ability_group_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  Player *v16; // r14
  std::string v17; // [rsp+0h] [rbp-1A0h]
  std::allocator<std::string > __a; // [rsp+2Eh] [rbp-172h] BYREF
  std::allocator<long unsigned int> v19; // [rsp+2Fh] [rbp-171h] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+30h] [rbp-170h] BYREF
  const data::DragonSpineEnhanceExcelConfig *enhance_config_ptr; // [rsp+40h] [rbp-160h]
  const data::ActivityAbilityGroupRuleConfig *ability_group_config_ptr; // [rsp+48h] [rbp-158h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-150h] BYREF
  std::shared_ptr<google::protobuf::Message> v24; // [rsp+60h] [rbp-140h] BYREF
  std::vector<std::string> group_vec; // [rsp+70h] [rbp-130h] BYREF
  std::vector<long unsigned int> guid_vec; // [rsp+90h] [rbp-110h] BYREF
  char v27[240]; // [rsp+B0h] [rbp-F0h] BYREF

  *(&v17._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v17._anon_0._M_allocated_capacity) = chapter_id;
  v2 = (unsigned __int64)v27;
  v17._M_dataplus._M_p = v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 1 10 holder:650 48 4 14 chapter_id:615 64 16 14 weapon_ptr:632 96 16 11 log_ptr:665 128 32 10 notify:671";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::onChapterFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = chapter_id;
  __l._M_len = (std::initializer_list<long unsigned int>::size_type)DragonSpineActivity::findChapter(
                                                                      this,
                                                                      *(_DWORD *)(v2 + 48));
  if ( !__l._M_len )
    goto LABEL_8;
  if ( *(_BYTE *)(((__l._M_len + 4) >> 3) + 0x7FFF8000) != 0
    && ((LOBYTE(__l._M_len) + 4) & 7) >= *(_BYTE *)(((__l._M_len + 4) >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(__l._M_len + 4);
  }
  if ( *(_BYTE *)(__l._M_len + 4) == 1 )
  {
    if ( *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) != 0
      && ((LOBYTE(__l._M_len) + 12) & 7) >= *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(__l._M_len + 12);
    }
    if ( *(_BYTE *)(__l._M_len + 12) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "onChapterFinish",
        625);
      v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[49])"[DRAGON_SPINE] chapter has finished, chapter_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    }
    else
    {
      if ( *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) != 0
        && ((LOBYTE(__l._M_len) + 12) & 7) >= *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(__l._M_len + 12);
      }
      *(_BYTE *)(__l._M_len + 12) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v2 + 64), (uint64_t)ItemComp);
      if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/dragonspine_activity.cpp",
          "onChapterFinish",
          635);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          (common::milog::MiLogStream *const)(v2 + 128),
          (const char (*)[43])"[DRAGON_SPINE] cannot find activity weapon");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      LOBYTE(v17._M_string_length) = !ActivityDragonSpineExcelConfigMgr::isChapterCanEnhanceWeapon(
                                        &v8->design_config.txt_config_mgr.activity_dragon_spine_config_mgr,
                                        *(_DWORD *)(v2 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
      if ( LOBYTE(v17._M_string_length) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/dragonspine_activity.cpp",
          "onChapterFinish",
          641);
        v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
               (common::milog::MiLogStream *const)(v2 + 128),
               (const char (*)[58])"[DRAGON_SPINE] chapter cannot enhance weapon, chapter_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v24);
        p_activity_dragon_spine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_dragon_spine_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        enhance_config_ptr = ActivityDragonSpineExcelConfigMgr::findDragonSpineEnhanceConfigByChapterId(
                               p_activity_dragon_spine_config_mgr,
                               this->dragon_sword_cur_enhance_level_ + 1);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
        if ( enhance_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v2 + 128), BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xBEBu, v17);
          std::string::~string((void *)(v2 + 128));
          if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ++*(_DWORD *)(*(&v17._anon_0._M_allocated_capacity + 1) + 1024);
          if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 968) >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          if ( *(_QWORD *)(*(&v17._anon_0._M_allocated_capacity + 1) + 968) )
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v24);
            p_activity_ability_group_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.activity_ability_group_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&enhance_config_ptr->activity_ability_group_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)enhance_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&enhance_config_ptr->activity_ability_group_id >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ability_group_config_ptr = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
                                         p_activity_ability_group_config_mgr,
                                         enhance_config_ptr->activity_ability_group_id);
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v24);
            if ( ability_group_config_ptr )
            {
              if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v17._M_string_length = (std::string::size_type)Player::getAbilityGroupComp(*(Player *const *)(*(&v17._anon_0._M_allocated_capacity + 1) + 24));
              std::allocator<std::string>::allocator(&__a);
              std::vector<std::string>::vector(&group_vec, 1uLL, &ability_group_config_ptr->ability_group_name, &__a);
              if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 968) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              __l._M_array = *(std::initializer_list<long unsigned int>::iterator *)(*(&v17._anon_0._M_allocated_capacity
                                                                                     + 1)
                                                                                   + 968);
              std::allocator<unsigned long>::allocator(&v19);
              std::vector<unsigned long>::vector(
                &guid_vec,
                (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
                &v19);
              PlayerAbilityGroupComp::addGuidFilterAbilityGroup(
                (PlayerAbilityGroupComp *const)v17._M_string_length,
                &guid_vec,
                &group_vec,
                0);
              std::vector<unsigned long>::~vector(&guid_vec);
              std::allocator<unsigned long>::~allocator(&v19);
              std::vector<std::string>::~vector(&group_vec);
              std::allocator<std::string>::~allocator(&__a);
              if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              AbilityGroupComp = Player::getAbilityGroupComp(*(Player *const *)(*(&v17._anon_0._M_allocated_capacity + 1)
                                                                              + 24));
              PlayerAbilityGroupComp::tryRefreshAbilityGroup(AbilityGroupComp);
              common::tools::perf::make_shared<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon>();
              v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
              if ( *(_BYTE *)(((unsigned __int64)&enhance_config_ptr->activity_ability_group_id >> 3) + 0x7FFF8000) != 0
                && (char)((((_BYTE)enhance_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&enhance_config_ptr->activity_ability_group_id >> 3)
                                                                                  + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto_log::PlayerLogBodyDragonSpineEnhanceWeapon::set_activity_ability_group_id(
                v15,
                enhance_config_ptr->activity_ability_group_id);
              if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v16 = *(Player **)(*(&v17._anon_0._M_allocated_capacity + 1) + 24);
              std::shared_ptr<google::protobuf::Message>::shared_ptr(&v24, 0LL);
              std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon,void>(
                &p_body_ptr,
                (const std::shared_ptr<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon> *)(v2 + 96));
              Player::printStatLog(v16, &p_body_ptr, &v24, 0xEu);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
              std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v24);
              std::shared_ptr<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDragonSpineEnhanceWeapon> *const)(v2 + 96));
            }
            else
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 128),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/dragonspine_activity.cpp",
                "onChapterFinish",
                659);
              v13 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                      (common::milog::MiLogStream *const)(v2 + 128),
                      (const char (*)[66])"[DRAGON_SPINE] cannot find ActivityAbilityGroupRuleConfig, index:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                &enhance_config_ptr->activity_ability_group_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
            }
          }
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
        }
      }
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v2 + 64));
      proto::DragonSpineChapterFinishNotify::DragonSpineChapterFinishNotify((proto::DragonSpineChapterFinishNotify *const)(v2 + 128));
      proto::DragonSpineChapterFinishNotify::set_chapter_id(
        (proto::DragonSpineChapterFinishNotify *const)(v2 + 128),
        *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((v17._anon_0._M_local_buf[8] + 36) & 7) + 3) >= *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1)
                                                                              + 36) >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::DragonSpineChapterFinishNotify::set_schedule_id(
        (proto::DragonSpineChapterFinishNotify *const)(v2 + 128),
        *(_DWORD *)(*(&v17._anon_0._M_allocated_capacity + 1) + 36));
      if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::DragonSpineChapterFinishNotify::set_weapon_enhance_level(
        (proto::DragonSpineChapterFinishNotify *const)(v2 + 128),
        *(_DWORD *)(*(&v17._anon_0._M_allocated_capacity + 1) + 1024));
      if ( *(_BYTE *)(((*(&v17._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(
        *(Player *const *)(*(&v17._anon_0._M_allocated_capacity + 1) + 24),
        (const google::protobuf::Message *)(v2 + 128));
      proto::DragonSpineChapterFinishNotify::~DragonSpineChapterFinishNotify((proto::DragonSpineChapterFinishNotify *const)(v2 + 128));
    }
  }
  else
  {
LABEL_8:
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "onChapterFinish",
      620);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[45])"[DRAGON_SPINE] chapter not open, chapter_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
  }
  if ( v17._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 679: range 00000000165C06DE-00000000165C07A1
void __cdecl DragonSpineActivity::closeDragonSpineContent(DragonSpineActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->obtain_item_obs_wtr_);
    DragonSpineActivity::clearAbilityGroup(this);
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 693: range 00000000165C07A2-00000000165C08FA
DragonSpineChapterRecord *__fastcall DragonSpineActivity::findChapter(
        DragonSpineActivity *const this,
        uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  DragonSpineChapterRecord *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 chapter_id:692 64 8 8 iter:694";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::findChapter;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = chapter_id;
  *(std::map<unsigned int,DragonSpineChapterRecord>::iterator *)(v2 + 64) = std::map<unsigned int,DragonSpineChapterRecord>::find(
                                                                              &this->chapter_map_,
                                                                              (const std::map<unsigned int,DragonSpineChapterRecord>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,DragonSpineChapterRecord>::end(&this->chapter_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,DragonSpineChapterRecord> > *const)(v2 + 64))->second;
  }
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

// Line 704: range 00000000165C08FC-00000000165C0B5B
__int64 __fastcall DragonSpineActivity::checkAddShimmeringEssence(
        const DragonSpineActivity *const this,
        uint32_t add_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:703";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::checkAddShimmeringEssence;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->shimmering_essence_ && *(_DWORD *)(v2 + 32) + this->shimmering_essence_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->shimmering_essence_ || *(_DWORD *)(v2 + 32) + this->shimmering_essence_ <= *(_DWORD *)(v2 + 32) )
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
      "./src/player/activity/dragonspine_activity.cpp",
      "checkAddShimmeringEssence",
      707);
    v5 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v9,
           (const char (*)[55])"[DRAGON_SPINE] shimmering essence over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->shimmering_essence_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 881LL;
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

// Line 714: range 00000000165C0B5C-00000000165C0DCF
__int64 __fastcall DragonSpineActivity::checkAddWarmEssence(const DragonSpineActivity *const this, uint32_t add_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:713";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::checkAddWarmEssence;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->warm_essence_ && *(_DWORD *)(v2 + 32) + this->warm_essence_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->warm_essence_ || *(_DWORD *)(v2 + 32) + this->warm_essence_ <= *(_DWORD *)(v2 + 32) )
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
      "./src/player/activity/dragonspine_activity.cpp",
      "checkAddWarmEssence",
      717);
    v5 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v9,
           (const char (*)[49])"[DRAGON_SPINE] warm essence over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->warm_essence_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 882LL;
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

// Line 724: range 00000000165C0DD0-00000000165C102F
__int64 __fastcall DragonSpineActivity::checkAddWondrousEssence(
        const DragonSpineActivity *const this,
        uint32_t add_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:723";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::checkAddWondrousEssence;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->wondrous_essence_ && *(_DWORD *)(v2 + 32) + this->wondrous_essence_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->wondrous_essence_ || *(_DWORD *)(v2 + 32) + this->wondrous_essence_ <= *(_DWORD *)(v2 + 32) )
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
      "./src/player/activity/dragonspine_activity.cpp",
      "checkAddWondrousEssence",
      727);
    v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v9,
           (const char (*)[53])"[DRAGON_SPINE] wondrous essence over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->wondrous_essence_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 883LL;
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

// Line 734: range 00000000165C1030-00000000165C11F8
__int64 __fastcall DragonSpineActivity::checkSubShimmeringEssence(
        const DragonSpineActivity *const this,
        uint32_t sub_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:733";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::checkSubShimmeringEssence;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->shimmering_essence_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "checkSubShimmeringEssence",
      737);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v9,
           (const char (*)[56])"[DRAGON_SPINE] shimmering essence not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->shimmering_essence_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_25D25180);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 884LL;
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

// Line 744: range 00000000165C11FA-00000000165C13CA
__int64 __fastcall DragonSpineActivity::checkSubWarmEssence(const DragonSpineActivity *const this, uint32_t sub_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:743";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::checkSubWarmEssence;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->warm_essence_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "checkSubWarmEssence",
      747);
    v5 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v9,
           (const char (*)[50])"[DRAGON_SPINE] warm essence not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->warm_essence_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_25D25180);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 885LL;
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

// Line 754: range 00000000165C13CC-00000000165C1594
__int64 __fastcall DragonSpineActivity::checkSubWondrousEssence(
        const DragonSpineActivity *const this,
        uint32_t sub_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:753";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::checkSubWondrousEssence;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->wondrous_essence_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "checkSubWondrousEssence",
      757);
    v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v9,
           (const char (*)[54])"[DRAGON_SPINE] wondrous essence not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->wondrous_essence_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_25D25180);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 886LL;
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

// Line 764: range 00000000165C1596-00000000165C1964
int32_t __cdecl DragonSpineActivity::addShimmeringEssence(
        DragonSpineActivity *const this,
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
  DragonSpineActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_essence; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:770";
  *(_QWORD *)(v4 + 16) = DragonSpineActivity::addShimmeringEssence;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = DragonSpineActivity::checkAddShimmeringEssence(this, add_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_essence = thisa->shimmering_essence_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_essence, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->shimmering_essence_);
    }
    thisa->shimmering_essence_ = v9;
    if ( is_notifya )
      DragonSpineActivity::notifyActivityCoinChange(thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->shimmering_essence_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_SHIMMERING_ESSENCE,
      old_essence,
      thisa->shimmering_essence_,
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

// Line 781: range 00000000165C1966-00000000165C1D51
int32_t __cdecl DragonSpineActivity::addWarmEssence(
        DragonSpineActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // ecx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r10d
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  DragonSpineActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_essence; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:787";
  *(_QWORD *)(v4 + 16) = DragonSpineActivity::addWarmEssence;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = DragonSpineActivity::checkAddWarmEssence(this, add_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_essence = thisa->warm_essence_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_essence, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&thisa->warm_essence_);
    }
    thisa->warm_essence_ = v9;
    if ( is_notifya )
      DragonSpineActivity::notifyActivityCoinChange(thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->warm_essence_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_WARM_ESSENCE,
      old_essence,
      thisa->warm_essence_,
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

// Line 799: range 00000000165C1D52-00000000165C2120
int32_t __cdecl DragonSpineActivity::addWondrousEssence(
        DragonSpineActivity *const this,
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
  DragonSpineActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_essence; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:805";
  *(_QWORD *)(v4 + 16) = DragonSpineActivity::addWondrousEssence;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = DragonSpineActivity::checkAddWondrousEssence(this, add_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_essence = thisa->wondrous_essence_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_essence, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->wondrous_essence_);
    }
    thisa->wondrous_essence_ = v9;
    if ( is_notifya )
      DragonSpineActivity::notifyActivityCoinChange(thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->wondrous_essence_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_WONDROUS_ESSENCE,
      old_essence,
      thisa->wondrous_essence_,
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

// Line 817: range 00000000165C2122-00000000165C2467
int32_t __cdecl DragonSpineActivity::subShimmeringEssence(
        DragonSpineActivity *const this,
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
  DragonSpineActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_essence; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:823";
  *(_QWORD *)(v4 + 16) = DragonSpineActivity::subShimmeringEssence;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = DragonSpineActivity::checkSubShimmeringEssence(this, sub_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_essence = thisa->shimmering_essence_;
    thisa->shimmering_essence_ = old_essence - sub_numa;
    if ( is_notifya )
      DragonSpineActivity::notifyActivityCoinChange(thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->shimmering_essence_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_SHIMMERING_ESSENCE,
      old_essence,
      thisa->shimmering_essence_,
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

// Line 835: range 00000000165C2468-00000000165C27BB
int32_t __cdecl DragonSpineActivity::subWarmEssence(
        DragonSpineActivity *const this,
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
  DragonSpineActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_essence; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:841";
  *(_QWORD *)(v4 + 16) = DragonSpineActivity::subWarmEssence;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = DragonSpineActivity::checkSubWarmEssence(this, sub_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_essence = thisa->warm_essence_;
    thisa->warm_essence_ = old_essence - sub_numa;
    if ( is_notifya )
      DragonSpineActivity::notifyActivityCoinChange(thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->warm_essence_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->warm_essence_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_WARM_ESSENCE,
      old_essence,
      thisa->warm_essence_,
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

// Line 853: range 00000000165C27BC-00000000165C2B01
int32_t __cdecl DragonSpineActivity::subWondrousEssence(
        DragonSpineActivity *const this,
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
  DragonSpineActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_essence; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:859";
  *(_QWORD *)(v4 + 16) = DragonSpineActivity::subWondrousEssence;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = DragonSpineActivity::checkSubWondrousEssence(this, sub_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_essence = thisa->wondrous_essence_;
    thisa->wondrous_essence_ = old_essence - sub_numa;
    if ( is_notifya )
      DragonSpineActivity::notifyActivityCoinChange(thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->wondrous_essence_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_WONDROUS_ESSENCE,
      old_essence,
      thisa->wondrous_essence_,
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

// Line 871: range 00000000165C2B02-00000000165C2DCA
void __cdecl DragonSpineActivity::notifyActivityCoinChange(DragonSpineActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 40 10 notify:872";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::notifyActivityCoinChange;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  proto::DragonSpineCoinChangeNotify::DragonSpineCoinChangeNotify((proto::DragonSpineCoinChangeNotify *const)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::DragonSpineCoinChangeNotify::set_schedule_id(
    (proto::DragonSpineCoinChangeNotify *const)(v1 + 48),
    this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->shimmering_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineCoinChangeNotify::set_shimmering_essence(
    (proto::DragonSpineCoinChangeNotify *const)(v1 + 48),
    this->shimmering_essence_);
  if ( *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warm_essence_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::DragonSpineCoinChangeNotify::set_warm_essence(
    (proto::DragonSpineCoinChangeNotify *const)(v1 + 48),
    this->warm_essence_);
  if ( *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wondrous_essence_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::DragonSpineCoinChangeNotify::set_wondrous_essence(
    (proto::DragonSpineCoinChangeNotify *const)(v1 + 48),
    this->wondrous_essence_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::DragonSpineCoinChangeNotify::~DragonSpineCoinChangeNotify((proto::DragonSpineCoinChangeNotify *const)(v1 + 48));
  if ( v4 == (char *)v1 )
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

// Line 882: range 00000000165C2DCC-00000000165C30EF
void __cdecl DragonSpineActivity::initAbilityGroup(DragonSpineActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerItemComp *ItemComp; // rcx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  uint64_t Guid; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-B0h] BYREF
  char v8[144]; // [rsp+30h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 14 weapon_ptr:884 64 16 20 owner_avatar_ptr:891";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::initAbilityGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v1 + 32), (uint64_t)ItemComp);
  if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/dragonspine_activity.cpp",
      "initAbilityGroup",
      887);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v7,
      (const char (*)[43])"[DRAGON_SPINE] cannot find activity weapon");
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  else
  {
    std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    Equip::getOwner((const Equip *const)(v1 + 64));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 64), 0LL) )
    {
      v5 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      Guid = Avatar::getGuid(v5);
      if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_store8(&this->equipped_weapon_avatar_guid_);
      this->equipped_weapon_avatar_guid_ = Guid;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( this->equipped_weapon_avatar_guid_ )
      DragonSpineActivity::addAbilityGroupToAvatar(this, this->equipped_weapon_avatar_guid_);
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 64));
  }
  std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v1 + 32));
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

// Line 904: range 00000000165C30F0-00000000165C314F
void __cdecl DragonSpineActivity::clearAbilityGroup(DragonSpineActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->equipped_weapon_avatar_guid_ )
    DragonSpineActivity::clearAbilityGroupToAvatar(this, this->equipped_weapon_avatar_guid_);
};

// Line 912: range 00000000165C3150-00000000165C36D6
void __cdecl DragonSpineActivity::addAbilityGroupToAvatar(DragonSpineActivity *const this, uint64_t avatar_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerAbilityGroupComp *v10; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+8h] [rbp-158h]
  std::allocator<std::string > __a; // [rsp+26h] [rbp-13Ah] BYREF
  std::allocator<long unsigned int> v13; // [rsp+27h] [rbp-139h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self __y; // [rsp+28h] [rbp-138h] BYREF
  const std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*> *enhance_level_map; // [rsp+30h] [rbp-130h]
  const data::ActivityAbilityGroupRuleConfig *ability_group_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-120h] BYREF
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-110h] BYREF
  std::vector<long unsigned int> guid_vec; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v20; // [rsp+90h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 29 activity_ability_group_id:927 64 8 14 upper_iter:918 96 8 8 iter:919";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::addAbilityGroupToAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( avatar_guid )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    enhance_level_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_dragon_spine_config_mgr.enhance_level_config_map_;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    *(std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::upper_bound(
                                                                                                  enhance_level_map,
                                                                                                  &this->dragon_sword_cur_enhance_level_);
    *(std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::begin(enhance_level_map);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 64)) )
    {
      __y._M_node = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::end(enhance_level_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 96),
             &__y) )
      {
        break;
      }
      v5 = (__int64)std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig *>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(v5 + 8) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      if ( *(_QWORD *)(v5 + 8) )
      {
        v6 = (__int64)std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig *>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> > *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        v7 = *(_QWORD *)(v6 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v7 + 12) >> 3) + 0x7FFF8000) != 0
          && (char)(((v7 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v7 + 12) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *(_DWORD *)(v7 + 12);
        if ( *(_DWORD *)(v2 + 48) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v17);
          v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
          ability_group_config_ptr = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
                                       &v8->design_config.txt_config_mgr.activity_ability_group_config_mgr,
                                       *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v17);
          if ( !ability_group_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/dragonspine_activity.cpp",
              "addAbilityGroupToAvatar",
              935);
            v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                   &v20,
                   (const char (*)[66])"[DRAGON_SPINE] cannot find ActivityAbilityGroupRuleConfig, index:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v20);
            goto LABEL_25;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(&group_vec, 1uLL, &ability_group_config_ptr->ability_group_name, &__a);
          __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Base_ptr)avatar_guid;
          std::allocator<unsigned long>::allocator(&v13);
          std::vector<unsigned long>::vector(
            &guid_vec,
            (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__y),
            &v13);
          PlayerAbilityGroupComp::addGuidFilterAbilityGroup(AbilityGroupComp, &guid_vec, &group_vec, 0);
          std::vector<unsigned long>::~vector(&guid_vec);
          std::allocator<unsigned long>::~allocator(&v13);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig *>>::operator++(
        (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> > *const)(v2 + 96),
        0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v10);
  }
LABEL_25:
  if ( v21 == (char *)v2 )
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

// Line 945: range 00000000165C36D8-00000000165C3C59
void __cdecl DragonSpineActivity::clearAbilityGroupToAvatar(DragonSpineActivity *const this, uint64_t avatar_guid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerAbilityGroupComp *v10; // rax
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+8h] [rbp-158h]
  std::allocator<std::string > __a; // [rsp+26h] [rbp-13Ah] BYREF
  std::allocator<long unsigned int> v13; // [rsp+27h] [rbp-139h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self __y; // [rsp+28h] [rbp-138h] BYREF
  const std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*> *enhance_level_map; // [rsp+30h] [rbp-130h]
  const data::ActivityAbilityGroupRuleConfig *ability_group_config_ptr; // [rsp+38h] [rbp-128h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-120h] BYREF
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-110h] BYREF
  std::vector<long unsigned int> guid_vec; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v20; // [rsp+90h] [rbp-D0h] BYREF
  char v21[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 29 activity_ability_group_id:960 64 8 14 upper_iter:951 96 8 8 iter:952";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::clearAbilityGroupToAvatar;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  if ( avatar_guid )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    enhance_level_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_dragon_spine_config_mgr.enhance_level_config_map_;
    std::shared_ptr<Config>::~shared_ptr(&v17);
    *(std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*>::const_iterator *)(v2 + 64) = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::upper_bound(
                                                                                                  enhance_level_map,
                                                                                                  &this->dragon_sword_cur_enhance_level_);
    *(std::map<unsigned int,data::DragonSpineEnhanceExcelConfig*>::const_iterator *)(v2 + 96) = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::begin(enhance_level_map);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 64)) )
    {
      __y._M_node = std::map<unsigned int,data::DragonSpineEnhanceExcelConfig *>::end(enhance_level_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Self *)(v2 + 96),
             &__y) )
      {
        break;
      }
      v5 = (__int64)std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig *>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> > *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)(v5 + 8) >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      if ( *(_QWORD *)(v5 + 8) )
      {
        v6 = (__int64)std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig *>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> > *const)(v2 + 96));
        if ( *(_BYTE *)(((unsigned __int64)(v6 + 8) >> 3) + 0x7FFF8000) )
          v6 = __asan_report_load8();
        v7 = *(_QWORD *)(v6 + 8);
        if ( *(_BYTE *)(((unsigned __int64)(v7 + 12) >> 3) + 0x7FFF8000) != 0
          && (char)(((v7 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(v7 + 12) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *(_DWORD *)(v7 + 12);
        if ( *(_DWORD *)(v2 + 48) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v17);
          v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
          ability_group_config_ptr = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
                                       &v8->design_config.txt_config_mgr.activity_ability_group_config_mgr,
                                       *(_DWORD *)(v2 + 48));
          std::shared_ptr<Config>::~shared_ptr(&v17);
          if ( !ability_group_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v20,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/dragonspine_activity.cpp",
              "clearAbilityGroupToAvatar",
              968);
            v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                   &v20,
                   (const char (*)[66])"[DRAGON_SPINE] cannot find ActivityAbilityGroupRuleConfig, index:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v20);
            goto LABEL_25;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
          std::allocator<std::string>::allocator(&__a);
          std::vector<std::string>::vector(&group_vec, 1uLL, &ability_group_config_ptr->ability_group_name, &__a);
          __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> >::_Base_ptr)avatar_guid;
          std::allocator<unsigned long>::allocator(&v13);
          std::vector<unsigned long>::vector(
            &guid_vec,
            (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__y),
            &v13);
          PlayerAbilityGroupComp::delGuidFilterAbilityGroup(AbilityGroupComp, &guid_vec, &group_vec);
          std::vector<unsigned long>::~vector(&guid_vec);
          std::allocator<unsigned long>::~allocator(&v13);
          std::vector<std::string>::~vector(&group_vec);
          std::allocator<std::string>::~allocator(&__a);
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig *>>::operator++(
        (std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::DragonSpineEnhanceExcelConfig*> > *const)(v2 + 96),
        0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getAbilityGroupComp(this->player_);
    PlayerAbilityGroupComp::tryRefreshAbilityGroup(v10);
  }
LABEL_25:
  if ( v21 == (char *)v2 )
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

// Line 978: range 00000000165C3C5A-00000000165C3FF6
uint64_t __cdecl DragonSpineActivity::getActivityWeaponGuidInPack(DragonSpineActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v6; // rax
  uint64_t result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  std::_Rb_tree_const_iterator<long unsigned int>::_Self __x; // [rsp+18h] [rbp-A8h] BYREF
  std::_Rb_tree_const_iterator<long unsigned int>::_Self __y; // [rsp+20h] [rbp-A0h] BYREF
  std::set<long unsigned int> *guid_set_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v14; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 weapon_id:979";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::getActivityWeaponGuidInPack;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  *(_DWORD *)(v1 + 32) = ConstValueExcelConfigMgr::getDragonSpineActivityWeaponId(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  guid_set_ptr = PlayerItemComp::getItmeGuidSetInPack(ItemComp, *(_DWORD *)(v1 + 32));
  if ( guid_set_ptr )
  {
    if ( std::set<unsigned long>::size(guid_set_ptr) == 1 )
    {
      __y._M_node = std::set<unsigned long>::end(guid_set_ptr)._M_node;
      __x._M_node = std::set<unsigned long>::begin(guid_set_ptr)._M_node;
      if ( std::operator==(&__x, &__y) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/dragonspine_activity.cpp",
          "getActivityWeaponGuidInPack",
          993);
        v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
               &v15,
               (const char (*)[53])"[DRAGON_SPINE] activity weapon num not 1, weapon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v15);
        result = 0LL;
      }
      else
      {
        __y._M_node = std::set<unsigned long>::begin(guid_set_ptr)._M_node;
        v10 = (unsigned __int64)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__y);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8();
        result = *(_QWORD *)v10;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/dragonspine_activity.cpp",
        "getActivityWeaponGuidInPack",
        988);
      v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v15,
             (const char (*)[53])"[DRAGON_SPINE] activity weapon num not 1, weapon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "getActivityWeaponGuidInPack",
      983);
    v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v15,
           (const char (*)[54])"[DRAGON_SPINE] cannot find weapon in pack, weapon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0LL;
  }
  if ( v16 == (char *)v1 )
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

// Line 1000: range 00000000165C3FF8-00000000165C4221
void __cdecl DragonSpineActivity::onObtainItemEvent(DragonSpineActivity *const this, const ObtainItemEvent *event)
{
  char v2; // al
  uint32_t item_id; // ebx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint64_t item_guid; // rdx
  std::shared_ptr<Config> v7; // [rsp+10h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  if ( BaseActivity::isFinished(this) )
    goto LABEL_5;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_5:
    v2 = 1;
  else
    v2 = 0;
  if ( !v2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    item_id = event->item_id;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
    LOBYTE(item_id) = item_id != ConstValueExcelConfigMgr::getDragonSpineActivityWeaponId(&v4->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( !(_BYTE)item_id )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( this->activity_weapon_guid_ )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/dragonspine_activity.cpp",
          "onObtainItemEvent",
          1011);
        v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v8,
               (const char (*)[40])"[DRAGON_SPINE] duplicated weapon, guid:");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v5, &this->activity_weapon_guid_);
        common::milog::MiLogStream::~MiLogStream(&v8);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&event->item_guid >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        item_guid = event->item_guid;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
          __asan_report_store8(&this->activity_weapon_guid_);
        this->activity_weapon_guid_ = item_guid;
      }
    }
  }
};

// Line 1018: range 00000000165C4222-00000000165C4594
void __cdecl DragonSpineActivity::initEventObserver(DragonSpineActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<DragonSpineActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<DragonSpineActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
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
  *(_QWORD *)(v1 + 8) = "2 32 16 13 this_ptr:1019 64 16 13 this_wtr:1020";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::initEventObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<DragonSpineActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<DragonSpineActivity>::weak_ptr<DragonSpineActivity,void>(
    (std::weak_ptr<DragonSpineActivity> *const)(v1 + 64),
    (const std::shared_ptr<DragonSpineActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<DragonSpineActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<DragonSpineActivity>::weak_ptr(
    (std::weak_ptr<DragonSpineActivity> *const)&v7,
    (const std::weak_ptr<DragonSpineActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<DragonSpineActivity,ObtainItemEvent>(
    (PlayerEventComp *const)&__r,
    p_this_wtr,
    (void (*)(DragonSpineActivity *, const ObtainItemEvent *))&v7);
  std::weak_ptr<Observer>::operator=(&this->obtain_item_obs_wtr_, &__r);
  std::weak_ptr<Observer>::~weak_ptr(&__r);
  std::weak_ptr<DragonSpineActivity>::~weak_ptr((std::weak_ptr<DragonSpineActivity> *const)&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = (std::weak_ptr<DragonSpineActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<DragonSpineActivity>::weak_ptr(
    (std::weak_ptr<DragonSpineActivity> *const)&__r,
    (const std::weak_ptr<DragonSpineActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<DragonSpineActivity,WearOrTakeOffEquipEvent>(
    (PlayerEventComp *const)&v7,
    EventComp,
    (void (*)(DragonSpineActivity *, const WearOrTakeOffEquipEvent *))&__r);
  std::weak_ptr<Observer>::operator=(&this->wear_or_take_off_equip_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
  std::weak_ptr<DragonSpineActivity>::~weak_ptr((std::weak_ptr<DragonSpineActivity> *const)&__r);
  std::weak_ptr<DragonSpineActivity>::~weak_ptr((std::weak_ptr<DragonSpineActivity> *const)(v1 + 64));
  std::shared_ptr<DragonSpineActivity>::~shared_ptr((std::shared_ptr<DragonSpineActivity> *const)(v1 + 32));
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

// Line 1026: range 00000000165C4596-00000000165C4D6A
int32_t __cdecl DragonSpineActivity::forceUpWeaponEnhanceLevel(DragonSpineActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  char v4; // al
  int32_t v5; // r14d
  PlayerItemComp *ItemComp; // rcx
  ActivityDragonSpineExcelConfigMgr *p_activity_dragon_spine_config_mgr; // rcx
  ActivityAbilityGroupExcelConfigMgr *p_activity_ability_group_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  PlayerAbilityGroupComp *v10; // rax
  int32_t result; // eax
  PlayerAbilityGroupComp *AbilityGroupComp; // [rsp+10h] [rbp-110h]
  std::allocator<std::string > __a; // [rsp+26h] [rbp-FAh] BYREF
  std::allocator<long unsigned int> v14; // [rsp+27h] [rbp-F9h] BYREF
  std::initializer_list<long unsigned int> __l; // [rsp+28h] [rbp-F8h] BYREF
  const data::ActivityAbilityGroupRuleConfig *ability_group_config_ptr; // [rsp+38h] [rbp-E8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-E0h] BYREF
  std::vector<std::string> group_vec; // [rsp+50h] [rbp-D0h] BYREF
  std::vector<long unsigned int> guid_vec; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+90h] [rbp-90h] BYREF
  char v21[112]; // [rsp+B0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 weapon_ptr:1037";
  *(_QWORD *)(v1 + 16) = DragonSpineActivity::forceUpWeaponEnhanceLevel;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( BaseActivity::isFinished(this) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_8:
    v4 = 1;
  else
    v4 = 0;
  if ( v4 )
  {
    v5 = -1;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !this->activity_weapon_guid_ )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "forceUpWeaponEnhanceLevel",
      1033);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v20,
      (const char (*)[45])"[DRAGON_SPINE] activity_weapon_guid_ not set");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v1 + 32), (uint64_t)ItemComp);
  if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/dragonspine_activity.cpp",
      "forceUpWeaponEnhanceLevel",
      1040);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v20,
      (const char (*)[43])"[DRAGON_SPINE] cannot find activity weapon");
    common::milog::MiLogStream::~MiLogStream(&v20);
    v5 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    p_activity_dragon_spine_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_dragon_spine_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __l._M_len = (std::initializer_list<long unsigned int>::size_type)ActivityDragonSpineExcelConfigMgr::findDragonSpineEnhanceConfigByChapterId(
                                                                        p_activity_dragon_spine_config_mgr,
                                                                        this->dragon_sword_cur_enhance_level_ + 1);
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( __l._M_len )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      ++this->dragon_sword_cur_enhance_level_;
      if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( this->equipped_weapon_avatar_guid_ )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v17);
        p_activity_ability_group_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_ability_group_config_mgr;
        if ( *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) != 0
          && (char)(((LOBYTE(__l._M_len) + 12) & 7) + 3) >= *(_BYTE *)(((__l._M_len + 12) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ability_group_config_ptr = ActivityAbilityGroupExcelConfigMgr::findAbilityGroupRuleConfigByIndex(
                                     p_activity_ability_group_config_mgr,
                                     *(_DWORD *)(__l._M_len + 12));
        std::shared_ptr<Config>::~shared_ptr(&v17);
        if ( !ability_group_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v20,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/dragonspine_activity.cpp",
            "forceUpWeaponEnhanceLevel",
            1055);
          v9 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                 &v20,
                 (const char (*)[66])"[DRAGON_SPINE] cannot find ActivityAbilityGroupRuleConfig, index:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v9,
            (const unsigned int *)(__l._M_len + 12));
          common::milog::MiLogStream::~MiLogStream(&v20);
          v5 = -1;
          goto LABEL_43;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        AbilityGroupComp = Player::getAbilityGroupComp(this->player_);
        std::allocator<std::string>::allocator(&__a);
        std::vector<std::string>::vector(&group_vec, 1uLL, &ability_group_config_ptr->ability_group_name, &__a);
        if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        __l._M_array = (std::initializer_list<long unsigned int>::iterator)this->equipped_weapon_avatar_guid_;
        std::allocator<unsigned long>::allocator(&v14);
        std::vector<unsigned long>::vector(
          &guid_vec,
          (std::initializer_list<long unsigned int>)__PAIR128__(1LL, &__l),
          &v14);
        PlayerAbilityGroupComp::addGuidFilterAbilityGroup(AbilityGroupComp, &guid_vec, &group_vec, 0);
        std::vector<unsigned long>::~vector(&guid_vec);
        std::allocator<unsigned long>::~allocator(&v14);
        std::vector<std::string>::~vector(&group_vec);
        std::allocator<std::string>::~allocator(&__a);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v10 = Player::getAbilityGroupComp(this->player_);
        PlayerAbilityGroupComp::tryRefreshAbilityGroup(v10);
      }
      v5 = 0;
      goto LABEL_43;
    }
    v5 = -1;
  }
LABEL_43:
  std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v1 + 32));
LABEL_44:
  result = v5;
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

// Line 1065: range 00000000165C4D6C-00000000165C4EE8
int32_t __cdecl DragonSpineActivity::clearWeaponEnhanceLevel(DragonSpineActivity *const this)
{
  char v1; // al
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( BaseActivity::isFinished(this) )
    goto LABEL_5;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_5:
    v1 = 1;
  else
    v1 = 0;
  if ( v1 )
    return -1;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( this->activity_weapon_guid_ )
  {
    DragonSpineActivity::clearAbilityGroup(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dragon_sword_cur_enhance_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->dragon_sword_cur_enhance_level_);
    }
    this->dragon_sword_cur_enhance_level_ = 0;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/dragonspine_activity.cpp",
      "clearWeaponEnhanceLevel",
      1072);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      &v3,
      (const char (*)[45])"[DRAGON_SPINE] activity_weapon_guid_ not set");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return -1;
  }
};

// Line 1082: range 00000000165C4EEA-00000000165C546D
void __cdecl DragonSpineActivity::onWearOrTakeOffEquipEvent(
        DragonSpineActivity *const this,
        const WearOrTakeOffEquipEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  char v5; // al
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint64_t Guid; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint64_t v9; // rdx
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint64_t v11; // rax
  common::milog::MiLogStream v12; // [rsp+10h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+30h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 15 weapon_ptr:1087 64 16 15 avatar_ptr:1097";
  *(_QWORD *)(v2 + 16) = DragonSpineActivity::onWearOrTakeOffEquipEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  if ( BaseActivity::isFinished(this) )
    goto LABEL_8;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_8:
    v5 = 1;
  else
    v5 = 0;
  if ( !v5 )
  {
    std::weak_ptr<Equip>::lock((const std::weak_ptr<Equip> *const)(v2 + 32));
    if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/dragonspine_activity.cpp",
        "onWearOrTakeOffEquipEvent",
        1090);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v12,
        (const char (*)[34])"[DRAGON_SPINE] weapon_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v6 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      Guid = Item::getGuid(v6);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_weapon_guid_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( Guid == this->activity_weapon_guid_ )
      {
        std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v2 + 64));
        if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v12,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/dragonspine_activity.cpp",
            "onWearOrTakeOffEquipEvent",
            1100);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v12,
            (const char (*)[34])"[DRAGON_SPINE] avatar_ptr is null");
          common::milog::MiLogStream::~MiLogStream(&v12);
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&event->is_wear >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&event->is_wear);
          if ( event->is_wear )
          {
            v8 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v9 = Avatar::getGuid(v8);
            if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( v9 != this->equipped_weapon_avatar_guid_ )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              if ( this->equipped_weapon_avatar_guid_ )
                DragonSpineActivity::clearAbilityGroupToAvatar(this, this->equipped_weapon_avatar_guid_);
              v10 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              v11 = Avatar::getGuid(v10);
              if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
                __asan_report_store8(&this->equipped_weapon_avatar_guid_);
              this->equipped_weapon_avatar_guid_ = v11;
              DragonSpineActivity::addAbilityGroupToAvatar(this, this->equipped_weapon_avatar_guid_);
            }
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            if ( this->equipped_weapon_avatar_guid_ )
              DragonSpineActivity::clearAbilityGroupToAvatar(this, this->equipped_weapon_avatar_guid_);
            if ( *(_BYTE *)(((unsigned __int64)&this->equipped_weapon_avatar_guid_ >> 3) + 0x7FFF8000) )
              __asan_report_store8(&this->equipped_weapon_avatar_guid_);
            this->equipped_weapon_avatar_guid_ = 0LL;
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 64));
      }
    }
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v2 + 32));
  }
  if ( v13 == (char *)v2 )
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
