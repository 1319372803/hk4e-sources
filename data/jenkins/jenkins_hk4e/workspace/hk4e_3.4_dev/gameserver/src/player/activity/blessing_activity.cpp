// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/blessing_activity.cpp

// Line 38: range 00000000179341F4-000000001793459C
std::string *__cdecl BlessingActivity::getDesc[abi:cxx11](std::string *retstr, const BlessingActivity *const this)
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
  char v14[544]; // [rsp+10h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 5 ss:39";
  *(_QWORD *)(v2 + 16) = BlessingActivity::getDesc[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  v5 = std::operator<<<std::char_traits<char>>(v2 + 64, "{cur_day_scan_num_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = std::ostream::operator<<(v5, this->cur_day_scan_num_);
  v7 = std::operator<<<std::char_traits<char>>(v6, " up_pool_index:");
  if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = std::ostream::operator<<(v7, this->up_pool_index_);
  v9 = std::operator<<<std::char_traits<char>>(v8, " cur_day_scan_type_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v10 = std::ostream::operator<<(v9, this->cur_day_scan_type_id_);
  v11 = std::operator<<<std::char_traits<char>>(v10, " total_unfulfilled_num_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v12 = std::ostream::operator<<(v11, this->total_unfulfilled_num_);
  std::operator<<<std::char_traits<char>>(v12, "}");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v14 == (char *)v2 )
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

// Line 45: range 000000001793459E-00000000179346EC
void __cdecl RecvPicRecord::fromBin(RecvPicRecord *const this, const proto::BlessingRecvPicData *recv_data)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  bool is_recv; // cl
  uint32_t v5; // ecx

  v2 = proto::BlessingRecvPicData::uid(recv_data);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->uid = v2;
  v3 = proto::BlessingRecvPicData::pic_id(recv_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->pic_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pic_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->pic_id);
  }
  this->pic_id = v3;
  is_recv = proto::BlessingRecvPicData::is_recv(recv_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_recv >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_recv >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_recv);
  }
  this->is_recv = is_recv;
  v5 = proto::BlessingRecvPicData::index(recv_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->index);
  }
  this->index = v5;
};

// Line 53: range 00000000179346EE-000000001793483C
void __cdecl RecvPicRecord::toBin(const RecvPicRecord *const this, proto::BlessingRecvPicData *recv_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BlessingRecvPicData::set_uid(recv_data, this->uid);
  if ( *(_BYTE *)(((unsigned __int64)&this->pic_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->pic_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BlessingRecvPicData::set_pic_id(recv_data, this->pic_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_recv >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_recv >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_recv);
  }
  proto::BlessingRecvPicData::set_is_recv(recv_data, this->is_recv);
  if ( *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BlessingRecvPicData::set_index(recv_data, this->index);
};

// Line 61: range 000000001793483E-000000001793526A
int32_t __cdecl BlessingActivity::fromScheduleBin(BlessingActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // edx
  unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v7; // rax
  common::milog::MiLogStream *v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  uint32_t v11; // edx
  uint32_t v12; // ecx
  unsigned int v13; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  bool is_activated; // cl
  bool is_content_closed; // cl
  uint32_t v18; // edx
  uint32_t v19; // edx
  uint32_t v20; // ecx
  RecvPicRecord *v21; // r15
  unsigned int *v22; // rcx
  RecvPicRecord *v23; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >,bool> v24; // rax
  common::milog::MiLogStream *v25; // r14
  uint32_t generated_id; // edx
  int32_t result; // eax
  unsigned int __x; // [rsp+28h] [rbp-168h] BYREF
  unsigned int __y; // [rsp+2Ch] [rbp-164h] BYREF
  google::protobuf::RepeatedPtrField<proto::BlessingScanEntityData>::const_iterator __for_begin; // [rsp+30h] [rbp-160h] BYREF
  google::protobuf::RepeatedPtrField<proto::BlessingRecvPicData>::const_iterator __for_begin_2; // [rsp+38h] [rbp-158h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+40h] [rbp-150h]
  const proto::BlessingScheduleBin *blessing_bin; // [rsp+48h] [rbp-148h]
  const google::protobuf::RepeatedPtrField<proto::BlessingScanEntityData> *__for_range; // [rsp+50h] [rbp-140h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-138h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+60h] [rbp-130h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+68h] [rbp-128h]
  const google::protobuf::RepeatedPtrField<proto::BlessingRecvPicData> *__for_range_2; // [rsp+70h] [rbp-120h]
  const proto::BlessingRecvPicData *bin_recv_pic_data; // [rsp+78h] [rbp-118h]
  const unsigned int *p_pic_id; // [rsp+80h] [rbp-110h]
  const proto::BlessingScanEntityData *entity_pair; // [rsp+88h] [rbp-108h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *entity_set; // [rsp+90h] [rbp-100h]
  google::protobuf::RepeatedPtrField<proto::BlessingRecvPicData>::const_iterator __for_end; // [rsp+98h] [rbp-F8h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+A0h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+C0h] [rbp-D0h] BYREF
  common::milog::MiLogStream v46; // [rsp+E0h] [rbp-B0h] BYREF
  char v47[144]; // [rsp+100h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v47;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 pic_id:82 64 16 9 record:90";
  *(_QWORD *)(v2 + 16) = BlessingActivity::fromScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  blessing_bin = proto::ActivityScheduleBin::blessing_bin(bin);
  v5 = proto::BlessingScheduleBin::day_index(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = v5;
  __for_range = proto::BlessingScheduleBin::cur_day_scanned_entity_list(blessing_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BlessingScanEntityData>::begin(__for_range).it_;
  __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::BlessingScanEntityData>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BlessingScanEntityData const>::operator!=(
            &__for_begin,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::BlessingScanEntityData>::iterator *)&__for_begin_2) )
  {
    entity_pair = google::protobuf::internal::RepeatedPtrIterator<proto::BlessingScanEntityData const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 48) = proto::BlessingScanEntityData::uid(entity_pair);
    entity_set = std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::operator[](
                   &this->cur_day_scanned_entity_map_,
                   (std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::key_type *)(v2 + 48));
    *(_DWORD *)(v2 + 48) = proto::BlessingScanEntityData::scan_num(entity_pair);
    __y = proto::BlessingScanEntityData::config_id(entity_pair);
    __x = proto::BlessingScanEntityData::group_id(entity_pair);
    __for_end.it_ = (void *const *)std::make_pair<unsigned int,unsigned int>(&__x, &__y);
    v7 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>,unsigned int>(
           entity_set,
           (std::pair<unsigned int,unsigned int> *)&__for_end,
           (unsigned int *)(v2 + 48),
           (std::pair<unsigned int,unsigned int> *)&__for_end,
           v6);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blessing_activity.cpp",
        "fromScheduleBin",
        69);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v46,
             (const char (*)[40])"[BLESSING] duplicated entity, group_id:");
      __y = proto::BlessingScanEntityData::group_id(entity_pair);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &__y);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" config_id:");
      *(_DWORD *)(v2 + 48) = proto::BlessingScanEntityData::config_id(entity_pair);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v46);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::BlessingScanEntityData const>::operator++(&__for_begin);
  }
  v11 = proto::BlessingScheduleBin::cur_day_scan_num(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_num_);
  }
  this->cur_day_scan_num_ = v11;
  v12 = proto::BlessingScheduleBin::up_pool_index(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_pool_index_);
  }
  this->up_pool_index_ = v12;
  __for_range_0 = proto::BlessingScheduleBin::pic_num_map(blessing_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
  while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
  {
    p_pic_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
    if ( *(_BYTE *)(((unsigned __int64)(p_pic_id + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_pic_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_pic_id + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v13 = p_pic_id[1];
    v14 = std::map<unsigned int,unsigned int>::operator[](&this->pic_num_map_, p_pic_id);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v14);
    }
    *v15 = v13;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
  }
  is_activated = proto::BlessingScheduleBin::is_activated(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_activated_);
  }
  this->is_activated_ = is_activated;
  is_content_closed = proto::BlessingScheduleBin::is_content_closed(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = is_content_closed;
  v18 = proto::BlessingScheduleBin::cur_day_scan_type_id(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_type_id_);
  }
  this->cur_day_scan_type_id_ = v18;
  v19 = proto::BlessingScheduleBin::total_unfulfilled_num(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_unfulfilled_num_);
  }
  this->total_unfulfilled_num_ = v19;
  __for_range_1 = proto::BlessingScheduleBin::pic_drop_record_list(blessing_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_1;
    std::set<unsigned int>::insert(&this->pic_drop_record_, (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_1;
  }
  v20 = proto::BlessingScheduleBin::redeem_reward_num(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->redeem_reward_num_);
  }
  this->redeem_reward_num_ = v20;
  std::map<unsigned int,RecvPicRecord>::clear(&this->recv_pic_record_map_);
  __for_range_2 = proto::BlessingScheduleBin::recv_pic_data_list(blessing_bin);
  __for_begin_2.it_ = google::protobuf::RepeatedPtrField<proto::BlessingRecvPicData>::begin(__for_range_2).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BlessingRecvPicData>::end(__for_range_2).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BlessingRecvPicData const>::operator!=(
            &__for_begin_2,
            &__for_end) )
  {
    bin_recv_pic_data = google::protobuf::internal::RepeatedPtrIterator<proto::BlessingRecvPicData const>::operator*(&__for_begin_2);
    *(_DWORD *)(v2 + 64) = 0;
    *(_DWORD *)(v2 + 68) = 0;
    *(_BYTE *)(v2 + 72) = 0;
    *(_DWORD *)(v2 + 76) = 0;
    RecvPicRecord::fromBin((RecvPicRecord *const)(v2 + 64), bin_recv_pic_data);
    v21 = std::move<RecvPicRecord &>((RecvPicRecord *)(v2 + 64));
    *(_DWORD *)(v2 + 48) = proto::BlessingRecvPicData::index(bin_recv_pic_data);
    v24 = std::map<unsigned int,RecvPicRecord>::emplace<unsigned int,RecvPicRecord>(
            &this->recv_pic_record_map_,
            (unsigned int *)(v2 + 48),
            v21,
            v22,
            v23);
    if ( !v24.second )
    {
      common::milog::MiLogStream::create(
        &v46,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blessing_activity.cpp",
        "fromScheduleBin",
        94);
      v25 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v46,
              (const char (*)[36])"[BLESSING] duplicated index, index:");
      *(_DWORD *)(v2 + 48) = proto::BlessingRecvPicData::index(bin_recv_pic_data);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v46);
    }
    *(_DWORD *)(v2 + 48) = proto::BlessingRecvPicData::index(bin_recv_pic_data);
    std::list<unsigned int>::push_back(&this->recv_pic_index_list_, (std::list<unsigned int>::value_type *)(v2 + 48));
    google::protobuf::internal::RepeatedPtrIterator<proto::BlessingRecvPicData const>::operator++(&__for_begin_2);
  }
  generated_id = proto::BlessingScheduleBin::last_generated_id(blessing_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_generated_id_);
  }
  this->last_generated_id_ = generated_id;
  result = 0;
  if ( v47 == (char *)v2 )
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

// Line 103: range 000000001793526C-0000000017935CFE
int32_t __cdecl BlessingActivity::toScheduleBin(const BlessingActivity *const this, proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v5; // r14d
  unsigned int *v6; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v7; // rdx
  google::protobuf::uint32 *v8; // rdx
  std::_List_const_iterator<unsigned int>::reference v9; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v10; // rax
  int32_t result; // eax
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::const_iterator __for_begin; // [rsp+18h] [rbp-138h] BYREF
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::const_iterator __for_end; // [rsp+20h] [rbp-130h] BYREF
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator __for_end_0; // [rsp+28h] [rbp-128h] BYREF
  proto::BlessingScheduleBin *blessing_bin; // [rsp+30h] [rbp-120h]
  const std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >> *__for_range; // [rsp+38h] [rbp-118h]
  google::protobuf::Map<unsigned int,unsigned int> *bin_pic_num_map; // [rsp+40h] [rbp-110h]
  const std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+48h] [rbp-108h]
  const std::set<unsigned int> *__for_range_2; // [rsp+50h] [rbp-100h]
  const std::list<unsigned int> *__for_range_3; // [rsp+58h] [rbp-F8h]
  proto::BlessingRecvPicData *bin_recv_record; // [rsp+60h] [rbp-F0h]
  const std::pair<unsigned int const,unsigned int> *v22; // [rsp+68h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pic_id; // [rsp+70h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+78h] [rbp-D8h]
  const std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > *v25; // [rsp+80h] [rbp-D0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > >::type *uid; // [rsp+88h] [rbp-C8h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > >::type *entity_set; // [rsp+90h] [rbp-C0h]
  const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *__for_range_0; // [rsp+98h] [rbp-B8h]
  const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> *v29; // [rsp+A0h] [rbp-B0h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *entity_pair; // [rsp+A8h] [rbp-A8h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *num; // [rsp+B0h] [rbp-A0h]
  proto::BlessingScanEntityData *entity_data; // [rsp+B8h] [rbp-98h]
  char v33[144]; // [rsp+C0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 9 index:133 64 8 8 iter:135";
  *(_QWORD *)(v2 + 16) = BlessingActivity::toScheduleBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  blessing_bin = proto::ActivityScheduleBin::mutable_blessing_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlessingScheduleBin::set_day_index(blessing_bin, this->day_index_);
  __for_range = &this->cur_day_scanned_entity_map_;
  __for_begin._M_node = std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::begin(&this->cur_day_scanned_entity_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::end(&this->cur_day_scanned_entity_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v25 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>(v25);
    entity_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > >::type *)std::get<1ul,unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>(v25);
    __for_range_0 = entity_set;
    *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v2 + 64) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::begin(entity_set);
    __for_end_0._M_cur = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 64),
              &__for_end_0) )
    {
      v29 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v2 + 64));
      entity_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v29);
      num = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v29);
      entity_data = proto::BlessingScheduleBin::add_cur_day_scanned_entity_list(blessing_bin);
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlessingScanEntityData::set_uid(entity_data, *uid);
      if ( *(_BYTE *)(((unsigned __int64)entity_pair >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)entity_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)entity_pair >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlessingScanEntityData::set_group_id(entity_data, entity_pair->first);
      if ( *(_BYTE *)(((unsigned __int64)&entity_pair->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)entity_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entity_pair->second >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlessingScanEntityData::set_config_id(entity_data, entity_pair->second);
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlessingScanEntityData::set_scan_num(entity_data, *num);
      std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v2 + 64));
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlessingScheduleBin::set_cur_day_scan_num(blessing_bin, this->cur_day_scan_num_);
  if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BlessingScheduleBin::set_up_pool_index(blessing_bin, this->up_pool_index_);
  bin_pic_num_map = proto::BlessingScheduleBin::mutable_pic_num_map(blessing_bin);
  __for_range_1 = &this->pic_num_map_;
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_);
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true>::__node_type *)std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_0) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    pic_id = std::get<0ul,unsigned int const,unsigned int>(v22);
    num_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v22);
    if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v5 = *num_0;
    v6 = google::protobuf::Map<unsigned int,unsigned int>::operator[](bin_pic_num_map, pic_id);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v6);
    }
    *v7 = v5;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_activated_);
  }
  proto::BlessingScheduleBin::set_is_activated(blessing_bin, this->is_activated_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  proto::BlessingScheduleBin::set_is_content_closed(blessing_bin, this->is_content_closed_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlessingScheduleBin::set_cur_day_scan_type_id(blessing_bin, this->cur_day_scan_type_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlessingScheduleBin::set_total_unfulfilled_num(blessing_bin, this->total_unfulfilled_num_);
  __for_range_2 = &this->pic_drop_record_;
  *(std::set<unsigned int>::iterator *)(v2 + 64) = std::set<unsigned int>::begin(&this->pic_drop_record_);
  __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true>::__node_type *)std::set<unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end_0) )
  {
    v8 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlessingScheduleBin::add_pic_drop_record_list(blessing_bin, *v8);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BlessingScheduleBin::set_redeem_reward_num(blessing_bin, this->redeem_reward_num_);
  __for_range_3 = &this->recv_pic_index_list_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > >::_Base_ptr)std::list<unsigned int>::begin(&this->recv_pic_index_list_)._M_node;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > > >::_Base_ptr)std::list<unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_List_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_List_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v9 = std::_List_const_iterator<unsigned int>::operator*((const std::_List_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v9;
    *(std::map<unsigned int,RecvPicRecord>::const_iterator *)(v2 + 64) = std::map<unsigned int,RecvPicRecord>::find(
                                                                           &this->recv_pic_record_map_,
                                                                           (const std::map<unsigned int,RecvPicRecord>::key_type *)(v2 + 48));
    __for_end_0._M_cur = (std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true>::__node_type *)std::map<unsigned int,RecvPicRecord>::end(&this->recv_pic_record_map_)._M_node;
    if ( std::operator!=(
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)(v2 + 64),
           (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)&__for_end_0) )
    {
      bin_recv_record = proto::BlessingScheduleBin::add_recv_pic_data_list(blessing_bin);
      v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
      RecvPicRecord::toBin(&v10->second, bin_recv_record);
    }
    std::_List_const_iterator<unsigned int>::operator++((std::_List_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_generated_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::BlessingScheduleBin::set_last_generated_id(blessing_bin, this->last_generated_id_);
  result = 0;
  if ( v33 == (char *)v2 )
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

// Line 147: range 0000000017935D00-0000000017936223
int32_t __cdecl BlessingActivity::toClient(BlessingActivity *const this, proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v4; // ebx
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  uint32_t v7; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  unsigned int val; // [rsp+14h] [rbp-8Ch] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  proto::BlessingActivityDetailInfo *info; // [rsp+28h] [rbp-78h]
  google::protobuf::Map<unsigned int,unsigned int> *pic_map; // [rsp+30h] [rbp-70h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  const std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig> *scan_type_map; // [rsp+40h] [rbp-60h]
  const std::pair<unsigned int const,unsigned int> *v16; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pic_id; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v19; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "toClient",
      150);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v20,
           (const char (*)[36])"BaseActivity::toClient fails, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
    return -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_blessing_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_activated_);
    }
    proto::BlessingActivityDetailInfo::set_is_activated(info, this->is_activated_);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_content_closed_);
    }
    proto::BlessingActivityDetailInfo::set_is_content_closed(info, this->is_content_closed_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BlessingActivityDetailInfo::set_cur_day_scan_type(info, this->cur_day_scan_type_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BlessingActivityDetailInfo::set_cur_day_scan_num(info, this->cur_day_scan_num_);
    pic_map = proto::BlessingActivityDetailInfo::mutable_pic_num_map(info);
    __for_range = &this->pic_num_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->pic_num_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      pic_id = std::get<0ul,unsigned int const,unsigned int>(v16);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v16);
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v4 = *num;
      v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](pic_map, pic_id);
      v6 = v5;
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v5);
      }
      *v6 = v4;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    scan_type_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_blessing_config_mgr.blessing_scan_type_excel_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlessingActivityDetailInfo::set_redeem_reward_num(info, this->redeem_reward_num_);
    v7 = std::unordered_map<unsigned int,data::BlessingScanTypeExcelConfig>::size(scan_type_map) + 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v7);
    proto::BlessingActivityDetailInfo::set_content_close_time(info, BeginTimeByOpenDay);
    if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::BlessingActivityDetailInfo::set_next_refresh_time(info, this->next_refresh_time_);
    return 0;
  }
};

// Line 171: range 0000000017936224-00000000179364FC
void __cdecl BlessingActivity::onPreStart(BlessingActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  const std::set<unsigned int> *pic_id_set_ptr; // [rsp+20h] [rbp-A0h]
  const std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 10 pic_id:179";
  *(_QWORD *)(v1 + 16) = BlessingActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  std::map<unsigned int,unsigned int>::clear(&this->pic_num_map_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  pic_id_set_ptr = ActivityBlessingExcelConfigMgr::findAllPicId(&v4->design_config.txt_config_mgr.activity_blessing_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( !pic_id_set_ptr || std::set<unsigned int>::empty(pic_id_set_ptr) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blessing_activity.cpp",
      "onPreStart",
      176);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v14,
      (const char (*)[52])"[BLESSING] blessing scan pic id should not be empty");
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
  else
  {
    __for_range = pic_id_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(pic_id_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(pic_id_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v6;
      v7 = std::map<unsigned int,unsigned int>::operator[](
             &this->pic_num_map_,
             (const std::map<unsigned int,unsigned int>::key_type *)(v1 + 32));
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v7);
      }
      *v8 = 0;
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 186: range 00000000179364FE-0000000017936761
void __cdecl BlessingActivity::onStart(BlessingActivity *const this)
{
  ActivityBlessingExcelConfigMgr *p_activity_blessing_config_mgr; // rcx
  int v2; // eax
  uint32_t v3; // ecx
  uint32_t NextStartTime; // ecx
  common::milog::MiLogStream *v5; // rax
  const data::BlessingScanTypeExcelConfig *scan_type_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  BlessingActivity::refreshDayIndexByCurrentTime(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->day_index_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    p_activity_blessing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_blessing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    scan_type_config_ptr = ActivityBlessingExcelConfigMgr::findBlessingScanTypeConfigByDayIndex(
                             p_activity_blessing_config_mgr,
                             this->day_index_);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( scan_type_config_ptr )
    {
      v2 = std::vector<unsigned int>::size(&scan_type_config_ptr->up_pool_id);
      v3 = common::tools::RandomUtils::rand<unsigned int>(0, v2 - 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->up_pool_index_);
      }
      this->up_pool_index_ = v3;
      NextStartTime = BlessingActivity::getNextStartTime(this);
      if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->next_refresh_time_);
      }
      this->next_refresh_time_ = NextStartTime;
    }
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "onStart",
      197);
    v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v8,
           (const char (*)[52])"[BLESSING] blessing activity start, up_pool_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->up_pool_index_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  BlessingActivity::initEventObserver(this);
};

// Line 203: range 0000000017936762-00000000179369D5
void __cdecl BlessingActivity::initEventObserver(BlessingActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::weak_ptr<BlessingActivity> *p_this_wtr; // [rsp+10h] [rbp-C0h]
  std::weak_ptr<BlessingActivity> v5; // [rsp+20h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v6; // [rsp+30h] [rbp-A0h] BYREF
  char v7[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:204 64 16 12 this_wtr:205";
  *(_QWORD *)(v1 + 16) = BlessingActivity::initEventObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v6);
  std::dynamic_pointer_cast<BlessingActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v6);
  std::weak_ptr<BlessingActivity>::weak_ptr<BlessingActivity,void>(
    (std::weak_ptr<BlessingActivity> *const)(v1 + 64),
    (const std::shared_ptr<BlessingActivity> *)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_this_wtr = (std::weak_ptr<BlessingActivity> *)Player::getEventComp(this->player_);
  std::weak_ptr<BlessingActivity>::weak_ptr(&v5, (const std::weak_ptr<BlessingActivity> *)(v1 + 64));
  PlayerEventComp::registerObserver<BlessingActivity,SendOfflineMsgRspEvent>(
    (PlayerEventComp *const)&v6,
    p_this_wtr,
    (void (*)(BlessingActivity *, const SendOfflineMsgRspEvent *))&v5);
  std::weak_ptr<Observer>::operator=(&this->send_offline_msg_wtr_, (std::weak_ptr<Observer> *)&v6);
  std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
  std::weak_ptr<BlessingActivity>::~weak_ptr(&v5);
  std::weak_ptr<BlessingActivity>::~weak_ptr((std::weak_ptr<BlessingActivity> *const)(v1 + 64));
  std::shared_ptr<BlessingActivity>::~shared_ptr((std::shared_ptr<BlessingActivity> *const)(v1 + 32));
  if ( v7 == (char *)v1 )
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

// Line 210: range 00000000179369D6-0000000017936A44
void __cdecl BlessingActivity::onLogin(BlessingActivity *const this)
{
  BlessingActivity::refreshDayIndexByCurrentTime(this);
  BaseActivity::onLogin(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
    BlessingActivity::initEventObserver(this);
};

// Line 220: range 0000000017936A46-0000000017936A7D
void __cdecl BlessingActivity::onRefresh(BlessingActivity *const this)
{
  BlessingActivity::refreshDayIndexByCurrentTime(this);
  BaseActivity::notifyClientData(this, 0);
  BaseActivity::onRefresh(this);
};

// Line 227: range 0000000017936A7E-0000000017936D78
void __cdecl BlessingActivity::onClear(BlessingActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = 0;
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::clear(&this->cur_day_scanned_entity_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_num_);
  }
  this->cur_day_scan_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->up_pool_index_);
  }
  this->up_pool_index_ = 0;
  std::map<unsigned int,unsigned int>::clear(&this->pic_num_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_type_id_);
  }
  this->cur_day_scan_type_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_activated_);
  }
  this->is_activated_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = 0;
  std::set<unsigned int>::clear(&this->pic_drop_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_unfulfilled_num_);
  }
  this->total_unfulfilled_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->redeem_reward_num_);
  }
  this->redeem_reward_num_ = 0;
  std::map<std::string,GiveFriendPicParam>::clear(&this->give_pic_ticket_param_map_);
  std::map<unsigned int,RecvPicRecord>::clear(&this->recv_pic_record_map_);
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->send_offline_msg_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->send_offline_msg_wtr_);
  }
};

// Line 248: range 0000000017936D7A-000000001793727E
void __cdecl BlessingActivity::refreshDayIndexByCurrentTime(BlessingActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::vector<unsigned int>::size_type v9; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t NextStartTime; // ecx
  unsigned int val; // [rsp+10h] [rbp-B0h] BYREF
  uint32_t old_day_index; // [rsp+14h] [rbp-ACh]
  unsigned __int64 v14; // [rsp+18h] [rbp-A8h] BYREF
  std::shared_ptr<Config> v15; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+30h] [rbp-90h] BYREF
  char v17[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 new_day_index:253";
  *(_QWORD *)(v1 + 16) = BlessingActivity::refreshDayIndexByCurrentTime;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
  {
    *(_DWORD *)(v1 + 32) = BaseActivity::getDayIndexAfterStart(this);
    if ( *(_DWORD *)(v1 + 32) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "refreshDayIndexByCurrentTime",
        260);
      v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v16,
             (const char (*)[26])"[BLESSING] new_day_index:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 32));
      v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             v6,
             (const char (*)[28])" blessing_type_id_vec size:");
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      v14 = std::vector<unsigned int>::size(&v8->design_config.txt_config_mgr.activity_blessing_config_mgr.blessing_type_id_vec);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &v14);
      std::shared_ptr<Config>::~shared_ptr(&v15);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v9 = *(unsigned int *)(v1 + 32);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v15);
      v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
      LOBYTE(v9) = v9 > std::vector<unsigned int>::size(&v10->design_config.txt_config_mgr.activity_blessing_config_mgr.blessing_type_id_vec);
      std::shared_ptr<Config>::~shared_ptr(&v15);
      if ( (_BYTE)v9 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->day_index_);
        }
        this->day_index_ = 0;
        BlessingActivity::resetAndRefreshDailyData(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(&this->next_refresh_time_);
        }
        this->next_refresh_time_ = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        old_day_index = this->day_index_;
        this->day_index_ = *(_DWORD *)(v1 + 32);
        if ( old_day_index != this->day_index_ )
          BlessingActivity::resetAndRefreshDailyData(this);
        NextStartTime = BlessingActivity::getNextStartTime(this);
        if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->next_refresh_time_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_store4(&this->next_refresh_time_);
        }
        this->next_refresh_time_ = NextStartTime;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "refreshDayIndexByCurrentTime",
        256);
      v4 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v16,
             (const char (*)[34])"getDayIndexAfterStart fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
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

// Line 280: range 0000000017937280-000000001793730D
int32_t __cdecl BlessingActivity::execAction(BlessingActivity *const this, const data::NewActivityExec *action_exec)
{
  data::NewActivityActionType type; // eax

  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_ACTIVATE_BLESSING )
  {
    BlessingActivity::activateBlessingContent(this);
  }
  else
  {
    if ( type != NEW_ACTIVITY_ACTION_CLOSE_BLESSING_CONTENT )
      return BaseActivity::execAction(this, action_exec);
    BlessingActivity::closeBlessingContent(this);
  }
  return 0;
};

// Line 300: range 000000001793730E-00000000179373F7
void __cdecl BlessingActivity::activateBlessingContent(BlessingActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_activated_);
  }
  if ( !this->is_activated_ )
  {
    this->is_activated_ = 1;
    BaseActivity::notifyClientData(this, 0);
    common::milog::MiLogStream::create(
      &v1,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "activateBlessingContent",
      305);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v1,
      (const char (*)[30])"[BLESSING] blessing activated");
    common::milog::MiLogStream::~MiLogStream(&v1);
  }
};

// Line 311: range 00000000179373F8-00000000179374E1
void __cdecl BlessingActivity::closeBlessingContent(BlessingActivity *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
  {
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData(this, 0);
    common::milog::MiLogStream::create(
      &v1,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "closeBlessingContent",
      316);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v1,
      (const char (*)[27])"[BLESSING] blessing closed");
    common::milog::MiLogStream::~MiLogStream(&v1);
  }
};

// Line 322: range 00000000179374E2-00000000179377DE
void __cdecl BlessingActivity::resetAndRefreshDailyData(BlessingActivity *const this)
{
  ActivityBlessingExcelConfigMgr *p_activity_blessing_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  uint32_t type_id; // ecx
  const data::BlessingScanTypeExcelConfig *scan_type_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v5; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v6; // [rsp+30h] [rbp-30h] BYREF

  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::clear(&this->cur_day_scanned_entity_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_num_);
  }
  this->cur_day_scan_num_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_type_id_);
  }
  this->cur_day_scan_type_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_unfulfilled_num_);
  }
  this->total_unfulfilled_num_ = 0;
  std::set<unsigned int>::clear(&this->pic_drop_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->day_index_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v5);
    p_activity_blessing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v5)->design_config.txt_config_mgr.activity_blessing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    scan_type_config_ptr = ActivityBlessingExcelConfigMgr::findBlessingScanTypeConfigByDayIndex(
                             p_activity_blessing_config_mgr,
                             this->day_index_);
    std::shared_ptr<Config>::~shared_ptr(&v5);
    if ( scan_type_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&scan_type_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scan_type_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scan_type_config_ptr->type_id >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      type_id = scan_type_config_ptr->type_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->cur_day_scan_type_id_);
      }
      this->cur_day_scan_type_id_ = type_id;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v6,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "resetAndRefreshDailyData",
        333);
      v2 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             &v6,
             (const char (*)[57])"[BLESSING] scan type excel config not found, day_index_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->day_index_);
      common::milog::MiLogStream::~MiLogStream(&v6);
    }
  }
};

// Line 341: range 00000000179377E0-0000000017937922
void __cdecl BlessingActivity::resetAllByGm(BlessingActivity *const this)
{
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v1; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+38h] [rbp-8h]

  BlessingActivity::resetAndRefreshDailyData(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->redeem_reward_num_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->redeem_reward_num_);
  }
  this->redeem_reward_num_ = 0;
  std::map<unsigned int,RecvPicRecord>::clear(&this->recv_pic_record_map_);
  __for_range = &this->pic_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->pic_num_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(__in);
    v1 = std::get<1ul,unsigned int const,unsigned int>(__in);
    num = v1;
    if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v1);
    }
    *num = 0;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 352: range 0000000017937924-0000000017937A2F
const data::BlessingScanTypeExcelConfig *__cdecl BlessingActivity::findTodayBlessingScanTypeConfig(
        BlessingActivity *const this)
{
  const data::BlessingScanTypeExcelConfig *BlessingScanTypeConfigByDayIndex; // rbx
  ActivityBlessingExcelConfigMgr *p_activity_blessing_config_mgr; // rcx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( !this->day_index_ )
    return 0LL;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_activity_blessing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.activity_blessing_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  BlessingScanTypeConfigByDayIndex = ActivityBlessingExcelConfigMgr::findBlessingScanTypeConfigByDayIndex(
                                       p_activity_blessing_config_mgr,
                                       this->day_index_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return BlessingScanTypeConfigByDayIndex;
};

// Line 362: range 0000000017937A30-0000000017938D6D
__int64 __fastcall BlessingActivity::tryScanEntity(
        BlessingActivity *const this,
        __int32 entity_id,
        proto::BlessingScanRsp *rsp_0)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t cur_day_scan_num; // ecx
  PlayerSceneComp *SceneComp; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // eax
  common::milog::MiLogStream *v15; // rax
  int v16; // r15d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  uint32_t MonsterId; // ecx
  common::milog::MiLogStream *v19; // rax
  int v20; // r15d
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  uint32_t GadgetId; // ecx
  common::milog::MiLogStream *v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  common::milog::MiLogStream *v26; // rax
  uint32_t type_id; // ecx
  common::milog::MiLogStream *v28; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rax
  std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  uint32_t v31; // ecx
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  PlayerBasicComp *BasicComp; // rax
  unsigned int *v36; // rdx
  SelectType_0 v37; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rax
  SelectType_0 *v39; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v40; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v41; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  Player *v44; // r14
  __int64 result; // rax
  std::string v46; // [rsp+0h] [rbp-1C0h]
  unsigned int __x; // [rsp+2Ch] [rbp-194h] BYREF
  uint32_t scan_config_id; // [rsp+30h] [rbp-190h]
  int32_t retcode; // [rsp+34h] [rbp-18Ch]
  const data::BlessingScanTypeExcelConfig *today_scan_type_config_ptr; // [rsp+38h] [rbp-188h]
  const ActivityBlessingExcelConfigMgr *blessing_config_mgr; // [rsp+40h] [rbp-180h]
  const data::BlessingScanExcelConfig *scan_config_ptr; // [rsp+48h] [rbp-178h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *entity_map; // [rsp+50h] [rbp-170h]
  uint32_t *scan_num; // [rsp+58h] [rbp-168h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-160h] BYREF
  common::milog::MiLogStream v56; // [rsp+70h] [rbp-150h] BYREF
  char v57[304]; // [rsp+90h] [rbp-130h] BYREF

  *(&v46._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v46._anon_0._M_allocated_capacity) = entity_id;
  v46._M_string_length = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v57;
  v46._M_dataplus._M_p = v57;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "9 32 1 10 holder:463 48 4 19 world_owner_uid:388 64 4 15 drop_pic_id:459 80 4 13 entity_id:361 9"
                        "6 8 15 entity_pair:450 128 16 13 scene_ptr:389 160 16 14 entity_ptr:395 192 16 11 log_ptr:470 22"
                        "4 16 15 monster_ptr:408";
  *(_QWORD *)(v4 + 16) = BlessingActivity::tryScanEntity;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -219021312;
  v6[536862726] = -219021312;
  v6[536862727] = -202178560;
  *(_DWORD *)(v4 + 80) = entity_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 117) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "tryScanEntity",
      365);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      &v56,
      (const char (*)[48])"[BLESSING] blessing activity content has closed");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v3 = 9101;
    goto LABEL_94;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 116) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_activated_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_activated_);
  }
  if ( !this->is_activated_ )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "tryScanEntity",
      370);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      &v56,
      (const char (*)[43])"[BLESSING] blessing activity is not active");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v3 = 9102;
    goto LABEL_94;
  }
  today_scan_type_config_ptr = BlessingActivity::findTodayBlessingScanTypeConfig(this);
  if ( !today_scan_type_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v56,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "tryScanEntity",
      377);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v56,
      (const char (*)[46])"[BLESSING] today scan type config ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v56);
    v3 = -1;
    goto LABEL_94;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_day_scan_num = this->cur_day_scan_num_;
  if ( *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->daily_scan_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->daily_scan_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cur_day_scan_num >= today_scan_type_config_ptr->daily_scan_limit )
  {
    v3 = 9105;
    goto LABEL_94;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  *(_DWORD *)(v4 + 48) = PlayerSceneComp::getCurWorldOwnerUid(SceneComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 128));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 128), 0LL) )
  {
    v9 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    v10 = *(_QWORD *)v9 + 120LL;
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8();
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v10)(v4 + 160, v9, *(unsigned int *)(v4 + 80));
    if ( std::operator==<Entity>(0LL, (const std::shared_ptr<Entity> *)(v4 + 160)) )
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "tryScanEntity",
        398);
      v11 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v56,
              (const char (*)[40])"[BLESSING] entity not found, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v3 = 504;
LABEL_92:
      std::shared_ptr<Entity>::~shared_ptr((std::shared_ptr<Entity> *const)(v4 + 160));
      goto LABEL_93;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v4 + 224));
    blessing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224))->design_config.txt_config_mgr.activity_blessing_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v4 + 224));
    scan_config_id = 0;
    v12 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v13 = *(_QWORD *)v12 + 24LL;
    if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
      v12 = __asan_report_load8();
    v14 = (*(__int64 (__fastcall **)(unsigned __int64))v13)(v12);
    if ( v14 == 2 )
    {
      std::dynamic_pointer_cast<Monster,Entity>((const std::shared_ptr<Entity> *)(v4 + 224));
      if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v4 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "tryScanEntity",
          411);
        v15 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v56,
                (const char (*)[43])"[BLESSING] monster_ptr is null, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = -1;
        v16 = 0;
      }
      else
      {
        v17 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        MonsterId = Monster::getMonsterId(v17);
        if ( *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)today_scan_type_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3)
                                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        scan_config_id = ActivityBlessingExcelConfigMgr::findScanIdByEntityData(
                           blessing_config_mgr,
                           today_scan_type_config_ptr->type_id,
                           1u,
                           MonsterId);
        v16 = 1;
      }
      std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 224));
      if ( !v16 )
        goto LABEL_92;
    }
    else
    {
      if ( v14 != 4 )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "tryScanEntity",
          430);
        v23 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v56,
                (const char (*)[49])"[BLESSING] entity type not support, entity_type:");
        v24 = (unsigned __int64)std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8();
        v25 = *(_QWORD *)v24 + 24LL;
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v24 = __asan_report_load8();
        *(_DWORD *)(v4 + 64) = (*(__int64 (__fastcall **)(unsigned __int64))v25)(v24);
        common::milog::MiLogStream::operator<<<proto::ProtEntityType,(proto::ProtEntityType*)0>(
          v23,
          (const proto::ProtEntityType *)(v4 + 64));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = -1;
        goto LABEL_92;
      }
      std::dynamic_pointer_cast<Gadget,Entity>((const std::shared_ptr<Entity> *)(v4 + 224));
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v4 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "tryScanEntity",
          422);
        v19 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v56,
                (const char (*)[42])"[BLESSING] gadget_ptr is null, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = -1;
        v20 = 0;
      }
      else
      {
        v21 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
        GadgetId = Gadget::getGadgetId(v21);
        if ( *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)today_scan_type_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3)
                                                                                    + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        scan_config_id = ActivityBlessingExcelConfigMgr::findScanIdByEntityData(
                           blessing_config_mgr,
                           today_scan_type_config_ptr->type_id,
                           2u,
                           GadgetId);
        v20 = 1;
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v4 + 224));
      if ( !v20 )
        goto LABEL_92;
    }
    if ( scan_config_id )
    {
      scan_config_ptr = data::ActivityBlessingExcelConfigMgrBase::findBlessingScanExcelConfig(
                          blessing_config_mgr,
                          scan_config_id);
      if ( !scan_config_ptr )
        goto LABEL_66;
      if ( *(_BYTE *)(((unsigned __int64)&scan_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scan_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scan_config_ptr->type_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      type_id = scan_config_ptr->type_id;
      if ( *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)today_scan_type_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( type_id == today_scan_type_config_ptr->type_id )
      {
        v29 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        __x = Entity::getGroupId(v29);
        v30 = std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Entity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 160));
        *(_DWORD *)(v4 + 64) = Entity::getConfigId(v30);
        std::pair<unsigned int,unsigned int>::pair<unsigned int,unsigned int,true>(
          (std::pair<unsigned int,unsigned int> *const)(v4 + 96),
          &__x,
          (unsigned int *)(v4 + 64));
        entity_map = std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::operator[](
                       &this->cur_day_scanned_entity_map_,
                       (const std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >>::key_type *)(v4 + 48));
        scan_num = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::operator[](
                     entity_map,
                     (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v4 + 96));
        if ( *(_BYTE *)(((unsigned __int64)scan_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scan_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scan_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v31 = *scan_num;
        if ( *(_BYTE *)(((unsigned __int64)&scan_config_ptr->scan_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)scan_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scan_config_ptr->scan_time >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v31 < scan_config_ptr->scan_time )
        {
          *(_DWORD *)(v4 + 64) = 0;
          retcode = BlessingActivity::doScanAndDrop(this, scan_config_ptr, (uint32_t *)(v4 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          BasicComp = Player::getBasicComp(this->player_);
          PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v56, BasicComp);
          StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xC12u, v46);
          std::string::~string(&v56);
          if ( !retcode )
          {
            if ( *(_BYTE *)(((unsigned __int64)scan_num >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)scan_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scan_num >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            ++*scan_num;
            v36 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(*(&v46._anon_0._M_allocated_capacity + 1) + 1088),
                    (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
            if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v37 = SAFE_ADD<unsigned int,int>(*v36, 1);
            v38 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(*(&v46._anon_0._M_allocated_capacity + 1) + 1088),
                    (const std::map<unsigned int,unsigned int>::key_type *)(v4 + 64));
            v39 = v38;
            if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
            {
              __asan_report_store4(v38);
            }
            *v39 = v37;
            if ( *(_BYTE *)(((*(&v46._anon_0._M_allocated_capacity + 1) + 1080) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((*(&v46._anon_0._M_allocated_capacity + 1) + 1080) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            ++*(_DWORD *)(*(&v46._anon_0._M_allocated_capacity + 1) + 1080);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyBlessingPicNumChange>();
            v40 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            if ( *(_BYTE *)(((*(&v46._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((*(&v46._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyBlessingPicNumChange::set_day_index(
              v40,
              *(_DWORD *)(*(&v46._anon_0._M_allocated_capacity + 1) + 1024));
            v41 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            proto_log::PlayerLogBodyBlessingPicNumChange::set_pic_id(v41, *(_DWORD *)(v4 + 64));
            v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            proto_log::PlayerLogBodyBlessingPicNumChange::set_delta_num(v42, 1);
            v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
            proto_log::PlayerLogBodyBlessingPicNumChange::set_reason(v43, 1u);
            if ( *(_BYTE *)(((*(&v46._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v44 = *(Player **)(*(&v46._anon_0._M_allocated_capacity + 1) + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(
              (std::shared_ptr<google::protobuf::Message> *const)(v4 + 224),
              0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *)(v4 + 192));
            Player::printStatLog(v44, &p_body_ptr, (MessagePtr *)(v4 + 224), 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 224));
            std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *const)(v4 + 192));
          }
          proto::BlessingScanRsp::set_scan_pic_id(
            (proto::BlessingScanRsp *const)v46._M_string_length,
            *(_DWORD *)(v4 + 64));
          if ( *(_BYTE *)(((*(&v46._anon_0._M_allocated_capacity + 1) + 1080) >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((*(&v46._anon_0._M_allocated_capacity + 1) + 1080) >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::BlessingScanRsp::set_cur_day_scan_num(
            (proto::BlessingScanRsp *const)v46._M_string_length,
            *(_DWORD *)(*(&v46._anon_0._M_allocated_capacity + 1) + 1080));
          v3 = retcode;
          StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
        }
        else
        {
          common::milog::MiLogStream::create(
            &v56,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/blessing_activity.cpp",
            "tryScanEntity",
            455);
          v32 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                  &v56,
                  (const char (*)[54])"[BLESSING] entity daily scan num exceed, entity_pair:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                  v32,
                  (const std::pair<unsigned int,unsigned int> *)(v4 + 96));
          v34 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v33,
                  (const char (*)[19])" cur_day_scan_num:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, scan_num);
          common::milog::MiLogStream::~MiLogStream(&v56);
          v3 = 9104;
        }
      }
      else
      {
LABEL_66:
        common::milog::MiLogStream::create(
          &v56,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blessing_activity.cpp",
          "tryScanEntity",
          445);
        v28 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v56,
                (const char (*)[45])"[BLESSING] scan config not found, entity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream(&v56);
        v3 = 9103;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v56,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "tryScanEntity",
        438);
      v26 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              &v56,
              (const char (*)[45])"[BLESSING] scan entity not match, entity_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream(&v56);
      v3 = 9103;
    }
    goto LABEL_92;
  }
  common::milog::MiLogStream::create(
    &v56,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/blessing_activity.cpp",
    "tryScanEntity",
    392);
  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
    &v56,
    (const char (*)[36])"[BLESSING] player cur_scene is null");
  common::milog::MiLogStream::~MiLogStream(&v56);
  v3 = -1;
LABEL_93:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 128));
LABEL_94:
  result = v3;
  if ( v46._M_dataplus._M_p == (std::string::pointer)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 483: range 0000000017938D6E-000000001793A4B9
int32_t __cdecl BlessingActivity::doScanAndDrop(
        BlessingActivity *const this,
        const data::BlessingScanExcelConfig *scan_config_ptr,
        uint32_t *drop_pic_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::vector<unsigned int>::size_type up_pool_index; // r14
  common::milog::MiLogStream *v7; // rax
  std::vector<unsigned int> *p_up_pool_id; // rcx
  std::vector<unsigned int>::const_reference v9; // rdx
  common::milog::MiLogStream *v11; // rax
  uint32_t v13; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::vector<unsigned int>::iterator v15; // rax
  std::insert_iterator<std::vector<unsigned int> > v16; // rax
  std::vector<unsigned int> *container; // r14
  unsigned int *M_current; // r15
  std::set<unsigned int>::iterator v19; // rax
  std::insert_iterator<std::vector<unsigned int> > v20; // r8
  common::milog::MiLogStream *v21; // rax
  int v22; // r14d
  int v23; // eax
  std::vector<unsigned int>::size_type v24; // r14
  common::milog::MiLogStream *v25; // rax
  std::vector<unsigned int>::reference v26; // rdx
  uint32_t v27; // ecx
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  const std::map<unsigned int,unsigned int>::key_type *v33; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v34; // rax
  uint32_t *v35; // rdx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  uint32_t drop_prob; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v40; // rdx
  std::vector<unsigned int>::reference v41; // rax
  uint32_t *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v44; // rdx
  std::vector<unsigned int>::reference v45; // rax
  int v46; // esi
  common::milog::MiLogStream *v47; // rax
  int v48; // r14d
  std::vector<unsigned int>::size_type v49; // r14
  std::vector<unsigned int>::reference v50; // rdx
  uint32_t v51; // ecx
  common::milog::MiLogStream *v52; // rdx
  common::milog::MiLogStream *v53; // rdx
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rbx
  void (__fastcall **vptr_DescribalBase)(common::milog::MiLogStream *, BlessingActivity *const); // rax
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+8h] [rbp-238h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __first2; // [rsp+10h] [rbp-230h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last1; // [rsp+18h] [rbp-228h]
  int32_t v61; // [rsp+24h] [rbp-21Ch]
  uint32_t i; // [rsp+44h] [rbp-1FCh]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+48h] [rbp-1F8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+50h] [rbp-1F0h] BYREF
  const data::BlessingScanTypeExcelConfig *today_scan_type_config_ptr; // [rsp+58h] [rbp-1E8h]
  const ActivityBlessingExcelConfigMgr *blessing_config_mgr; // [rsp+60h] [rbp-1E0h]
  const std::unordered_set<unsigned int> *scan_drop_id_set_ptr; // [rsp+68h] [rbp-1D8h]
  const std::set<unsigned int> *all_pic_set_ptr; // [rsp+70h] [rbp-1D0h]
  const std::set<unsigned int> *all_pic_set; // [rsp+78h] [rbp-1C8h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+80h] [rbp-1C0h]
  const std::vector<data::BlessingPicUpConfig> *__for_range_0; // [rsp+88h] [rbp-1B8h]
  const data::BlessingPicUpConfig *scan_up_config; // [rsp+90h] [rbp-1B0h]
  const data::BlessingScanDropExcelConfig *drop_config_ptr; // [rsp+98h] [rbp-1A8h]
  std::shared_ptr<Config> v75; // [rsp+A0h] [rbp-1A0h] BYREF
  common::milog::MiLogStream v76; // [rsp+B0h] [rbp-190h] BYREF
  common::milog::MiLogStream v77; // [rsp+D0h] [rbp-170h] BYREF
  char v78[336]; // [rsp+F0h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 14 up_pool_id:504 64 4 18 select_pic_idx:584 80 24 18 pic_weight_vec:543 144 24 18 all_pi"
                        "c_id_vec:545 208 48 27 pic_id_weight_index_map:544";
  *(_QWORD *)(v3 + 16) = BlessingActivity::doScanAndDrop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = -218959360;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  if ( !scan_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "doScanAndDrop",
      486);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      &v77,
      (const char (*)[35])"[BLESSING] scan_config_ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v77);
    v61 = -1;
    goto LABEL_100;
  }
  today_scan_type_config_ptr = BlessingActivity::findTodayBlessingScanTypeConfig(this);
  if ( !today_scan_type_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "doScanAndDrop",
      493);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v77,
      (const char (*)[46])"[BLESSING] today scan type config ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v77);
    v61 = -1;
    goto LABEL_100;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  up_pool_index = this->up_pool_index_;
  if ( up_pool_index >= std::vector<unsigned int>::size(&today_scan_type_config_ptr->up_pool_id) )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "doScanAndDrop",
      499);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v77,
           (const char (*)[56])"[BLESSING] up_pool_index_ out of range, up_pool_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->up_pool_index_);
    common::milog::MiLogStream::~MiLogStream(&v77);
    v61 = -1;
    goto LABEL_100;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v75);
  blessing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75)->design_config.txt_config_mgr.activity_blessing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v75);
  p_up_pool_id = &today_scan_type_config_ptr->up_pool_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->up_pool_index_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v9 = std::vector<unsigned int>::operator[](p_up_pool_id, this->up_pool_index_);
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v3 + 48) = *v9;
  scan_drop_id_set_ptr = ActivityBlessingExcelConfigMgr::findScanDropIdByUpPoolId(
                           blessing_config_mgr,
                           *(_DWORD *)(v3 + 48));
  if ( !scan_drop_id_set_ptr || std::unordered_set<unsigned int>::empty(scan_drop_id_set_ptr) )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "doScanAndDrop",
      508);
    v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
            &v77,
            (const char (*)[51])"[BLESSING] scan drop id set not found, up_pool_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v77);
    v61 = -1;
    goto LABEL_100;
  }
  all_pic_set_ptr = ActivityBlessingExcelConfigMgr::findAllPicId(blessing_config_mgr);
  if ( !all_pic_set_ptr || std::set<unsigned int>::empty(all_pic_set_ptr) )
  {
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/blessing_activity.cpp",
      "doScanAndDrop",
      515);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      &v77,
      (const char (*)[52])"[BLESSING] blessing scan pic id should not be empty");
    common::milog::MiLogStream::~MiLogStream(&v77);
    v61 = -1;
    goto LABEL_100;
  }
  all_pic_set = all_pic_set_ptr;
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v13 = this->total_unfulfilled_num_ + 1;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v75);
  v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v75);
  LOBYTE(v13) = v13 >= ConstValueExcelConfigMgr::getBlessingPicDropGuaranteeNum(&v14->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v75);
  if ( (_BYTE)v13 )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 144));
    v15._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 144))._M_current;
    v16 = std::inserter<std::vector<unsigned int>,__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
            (std::vector<unsigned int> *)(v3 + 144),
            v15);
    container = v16.container;
    M_current = v16.iter._M_current;
    __last2 = std::set<unsigned int>::end(&this->pic_drop_record_)._M_node;
    __first2 = std::set<unsigned int>::begin(&this->pic_drop_record_)._M_node;
    __last1 = std::set<unsigned int>::end(all_pic_set)._M_node;
    v19._M_node = std::set<unsigned int>::begin(all_pic_set)._M_node;
    v20.container = container;
    v20.iter._M_current = M_current;
    std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::insert_iterator<std::vector<unsigned int>>>(
      v19,
      (std::_Rb_tree_const_iterator<unsigned int>)__last1,
      (std::_Rb_tree_const_iterator<unsigned int>)__first2,
      (std::_Rb_tree_const_iterator<unsigned int>)__last2,
      v20);
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 144)) )
    {
      common::milog::MiLogStream::create(
        &v77,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "doScanAndDrop",
        528);
      v21 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              &v77,
              (const char (*)[60])"[BLESSING] no absence of pic, while total_unfulfilled_num_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->total_unfulfilled_num_);
      common::milog::MiLogStream::~MiLogStream(&v77);
      v61 = -1;
      v22 = 0;
    }
    else
    {
      v23 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144));
      *(_DWORD *)(v3 + 64) = common::tools::RandomUtils::rand<unsigned int>(0, v23 - 1);
      v24 = *(unsigned int *)(v3 + 64);
      if ( v24 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144)) )
      {
        v26 = std::vector<unsigned int>::operator[](
                (std::vector<unsigned int> *const)(v3 + 144),
                *(unsigned int *)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v27 = *v26;
        if ( *(_BYTE *)(((unsigned __int64)drop_pic_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_pic_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_pic_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(drop_pic_id);
        }
        *drop_pic_id = v27;
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blessing_activity.cpp",
          "doScanAndDrop",
          538);
        v28 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v77,
                (const char (*)[40])"[BLESSING] blessing guarantee drop_pic:");
        v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, drop_pic_id);
        v30 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v29, (const char (*)[15])" unfilled_num:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->total_unfulfilled_num_);
        v32 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v31,
                (const char (*)[18])" difference size:");
        __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v32,
          (const unsigned __int64 *)&__for_end);
        common::milog::MiLogStream::~MiLogStream(&v77);
        v22 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "doScanAndDrop",
          534);
        v25 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v77,
                (const char (*)[41])"[BLESSING] random index out of range, r:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v77);
        v61 = -1;
        v22 = 0;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 144));
    if ( v22 == 1 )
    {
LABEL_88:
      std::set<unsigned int>::insert(&this->pic_drop_record_, drop_pic_id);
      if ( std::operator==<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
             &this->pic_drop_record_,
             all_pic_set) )
      {
        std::set<unsigned int>::clear(&this->pic_drop_record_);
        if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&this->total_unfulfilled_num_);
        }
        this->total_unfulfilled_num_ = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        ++this->total_unfulfilled_num_;
      }
      common::milog::MiLogStream::create(
        &v76,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "doScanAndDrop",
        610);
      v53 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v76,
              (const char (*)[24])"[BLESSING] drop pic_id:");
      v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, drop_pic_id);
      v55 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v54, (const char (*)[8])" desc: ");
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      vptr_DescribalBase = (void (__fastcall **)(common::milog::MiLogStream *, BlessingActivity *const))this->_vptr_DescribalBase;
      if ( *(_BYTE *)(((unsigned __int64)this->_vptr_DescribalBase >> 3) + 0x7FFF8000) )
        vptr_DescribalBase = (void (__fastcall **)(common::milog::MiLogStream *, BlessingActivity *const))__asan_report_load8();
      (*vptr_DescribalBase)(&v77, this);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, (const std::string *)&v77);
      std::string::~string(&v77);
      common::milog::MiLogStream::~MiLogStream(&v76);
      v61 = 0;
    }
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 80));
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
    common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,unsigned int>>(
      (std::vector<unsigned int> *)(v3 + 144),
      &this->pic_num_map_);
    for ( i = 0; i < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144)); ++i )
    {
      v33 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 144), i);
      v34 = std::map<unsigned int,unsigned int>::operator[]((std::map<unsigned int,unsigned int> *const)(v3 + 208), v33);
      v35 = v34;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v34);
      }
      *v35 = i;
      *(_DWORD *)(v3 + 64) = 0;
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v3 + 80),
        (std::vector<unsigned int>::value_type *)(v3 + 64));
    }
    __for_range = scan_drop_id_set_ptr;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(scan_drop_id_set_ptr)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(scan_drop_id_set_ptr)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v36 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 64) = *v36;
      drop_config_ptr = data::ActivityBlessingExcelConfigMgrBase::findBlessingScanDropExcelConfig(
                          blessing_config_mgr,
                          *(_DWORD *)(v3 + 64));
      if ( drop_config_ptr )
      {
        if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                (std::map<unsigned int,unsigned int> *)(v3 + 208),
                &drop_config_ptr->pic_id) )
        {
          common::milog::MiLogStream::create(
            &v77,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/blessing_activity.cpp",
            "doScanAndDrop",
            562);
          v38 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v77,
                  (const char (*)[41])"[BLESSING] pic_id not in config, pic_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, &drop_config_ptr->pic_id);
          common::milog::MiLogStream::~MiLogStream(&v77);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&drop_config_ptr->drop_prob >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)drop_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&drop_config_ptr->drop_prob >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          drop_prob = drop_config_ptr->drop_prob;
          v40 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 208),
                  &drop_config_ptr->pic_id);
          if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v41 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 80), *v40);
          v42 = v41;
          if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v41);
          }
          *v42 = drop_prob;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "doScanAndDrop",
          557);
        v37 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                &v77,
                (const char (*)[47])"[BLESSING] drop_config_ptr not found, drop_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::~MiLogStream(&v77);
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    __for_range_0 = &scan_config_ptr->pic_up_config;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<data::BlessingPicUpConfig>::begin(&scan_config_ptr->pic_up_config)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<data::BlessingPicUpConfig>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<data::BlessingPicUpConfig const*,std::vector<data::BlessingPicUpConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *)&__for_end) )
    {
      scan_up_config = __gnu_cxx::__normal_iterator<data::BlessingPicUpConfig const*,std::vector<data::BlessingPicUpConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)&scan_up_config->id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&scan_up_config->id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( scan_up_config->id )
      {
        if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                (std::map<unsigned int,unsigned int> *)(v3 + 208),
                &scan_up_config->id) )
        {
          common::milog::MiLogStream::create(
            &v77,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/blessing_activity.cpp",
            "doScanAndDrop",
            576);
          v43 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  &v77,
                  (const char (*)[41])"[BLESSING] pic_id not in config, pic_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &scan_up_config->id);
          common::milog::MiLogStream::~MiLogStream(&v77);
        }
        else
        {
          v44 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 208),
                  &scan_up_config->id);
          if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v45 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 80), *v44);
          if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v46 = *v45;
          if ( *(_BYTE *)(((unsigned __int64)&scan_up_config->prob >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)scan_up_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scan_up_config->prob >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *v45 = v46 + scan_up_config->prob;
        }
      }
      __gnu_cxx::__normal_iterator<data::BlessingPicUpConfig const*,std::vector<data::BlessingPicUpConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::BlessingPicUpConfig*,std::vector<data::BlessingPicUpConfig> > *const)&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v77,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "doScanAndDrop",
      582);
    v47 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            &v77,
            (const char (*)[34])"[BLESSING] scan drop weight vec: ");
    common::milog::MiLogStream::operator<<<unsigned int>(v47, (const std::vector<unsigned int> *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v77);
    *(_DWORD *)(v3 + 64) = 0;
    if ( common::tools::RandomUtils::weightSelectOne<unsigned int>(
           (const std::vector<unsigned int> *)(v3 + 80),
           (uint32_t *)(v3 + 64),
           0) )
    {
      common::milog::MiLogStream::create(
        &v77,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "doScanAndDrop",
        587);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v77,
        (const char (*)[34])"[BLESSING] weightSelectOne failed");
      common::milog::MiLogStream::~MiLogStream(&v77);
      v61 = -1;
      v48 = 0;
    }
    else
    {
      v49 = *(unsigned int *)(v3 + 64);
      if ( v49 < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144)) )
      {
        v50 = std::vector<unsigned int>::operator[](
                (std::vector<unsigned int> *const)(v3 + 144),
                *(unsigned int *)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v51 = *v50;
        if ( *(_BYTE *)(((unsigned __int64)drop_pic_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)drop_pic_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)drop_pic_id >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_store4(drop_pic_id);
        }
        *drop_pic_id = v51;
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blessing_activity.cpp",
          "doScanAndDrop",
          596);
        v52 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v77,
                (const char (*)[37])"[BLESSING] scan normal drop, pic_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, drop_pic_id);
        common::milog::MiLogStream::~MiLogStream(&v77);
        v48 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v77,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "doScanAndDrop",
          592);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          &v77,
          (const char (*)[39])"[BLESSING] select_pic_idx out of range");
        common::milog::MiLogStream::~MiLogStream(&v77);
        v61 = -1;
        v48 = 0;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 144));
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 208));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 80));
    if ( v48 == 1 )
      goto LABEL_88;
  }
LABEL_100:
  result = v61;
  if ( v78 == (char *)v3 )
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

// Line 616: range 000000001793A4BA-000000001793B9D2
int32_t __cdecl BlessingActivity::tryRedeemReward(BlessingActivity *const this, proto::BlessingRedeemRewardRsp *rsp_0)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  uint32_t v7; // r15d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityBlessingExcelConfigMgr *p_activity_blessing_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  uint32_t grant_reward_cost; // r15d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerBasicComp *v19; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v21; // ecx
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  _DWORD *v23; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v24; // rax
  int v25; // esi
  std::map<unsigned int,unsigned int>::mapped_type *v26; // rdx
  int v27; // r15d
  unsigned int *v28; // rax
  _DWORD *v29; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  Player *v34; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v37; // r14
  int v38; // r15d
  common::milog::MiLogStream *v39; // r14
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v41; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingRedeemReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v42; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingRedeemReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  Player *v44; // r15
  common::milog::MiLogStream *v45; // rax
  PlayerEventComp *EventComp; // r14
  int32_t result; // eax
  std::string v48; // [rsp+0h] [rbp-270h]
  std::string v49; // [rsp+0h] [rbp-270h]
  unsigned int val; // [rsp+2Ch] [rbp-244h] BYREF
  uint32_t drop_id; // [rsp+30h] [rbp-240h]
  int32_t ret; // [rsp+34h] [rbp-23Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-238h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-230h]
  google::protobuf::Map<unsigned int,unsigned int> *pic_map; // [rsp+48h] [rbp-228h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+50h] [rbp-220h]
  const std::pair<unsigned int const,unsigned int> *v57; // [rsp+58h] [rbp-218h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pic_id_0; // [rsp+60h] [rbp-210h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *deduct_num; // [rsp+68h] [rbp-208h]
  const std::pair<unsigned int const,unsigned int> *v60; // [rsp+70h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pic_id; // [rsp+78h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+80h] [rbp-1F0h]
  const data::BlessingScanPicExcelConfig *pic_config_ptr; // [rsp+88h] [rbp-1E8h]
  std::shared_ptr<google::protobuf::Message> v64; // [rsp+90h] [rbp-1E0h] BYREF
  std::string v65; // [rsp+A0h] [rbp-1D0h] BYREF
  char v66[432]; // [rsp+C0h] [rbp-1B0h] BYREF

  *(&v48._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v48._anon_0._M_allocated_capacity = (std::string::size_type)rsp_0;
  v3 = (unsigned __int64)v66;
  v48._M_string_length = (std::string::size_type)v66;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 1 10 holder:618 64 1 10 holder:648 80 8 17 output_result:672 112 16 18 redeem_log_ptr:690 1"
                        "44 16 13 event_ptr:699 176 24 18 item_param_vec:670 240 24 10 reason:671 304 48 18 pic_deduct_map:626";
  *(_QWORD *)(v3 + 16) = BlessingActivity::tryRedeemReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61953;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v65, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xC13u, v48);
  std::string::~string(&v65);
  if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 1196) >> 3) + 0x7FFF8000) != 0
    && (char)(((v49._anon_0._M_local_buf[8] - 84) & 7) + 3) >= *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1)
                                                                          + 1196) >> 3)
                                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v7 = *(_DWORD *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1196);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 112));
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
  LOBYTE(v7) = v7 >= ConstValueExcelConfigMgr::getBlessingMaxRedeemNum(&v8->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 112));
  if ( (_BYTE)v7 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "tryRedeemReward",
      621);
    v9 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
           (common::milog::MiLogStream *const)&v65,
           (const char (*)[68])"[BLESSING] blessing redeem reward exceed limit, redeem_reward_num_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v9,
      (const unsigned int *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1196));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    v2 = 9106;
  }
  else
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
    __for_range = (std::map<unsigned int,unsigned int> *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 80) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088));
    while ( std::operator!=(
              &__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 80)) )
    {
      v60 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      pic_id = std::get<0ul,unsigned int const,unsigned int>(v60);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v60);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v64);
      p_activity_blessing_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64)->design_config.txt_config_mgr.activity_blessing_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)pic_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pic_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pic_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      pic_config_ptr = data::ActivityBlessingExcelConfigMgrBase::findBlessingScanPicExcelConfig(
                         p_activity_blessing_config_mgr,
                         *pic_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v64);
      if ( pic_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v12 = *num;
        if ( *(_BYTE *)(((unsigned __int64)&pic_config_ptr->grant_reward_cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pic_config_ptr->grant_reward_cost >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v12 < pic_config_ptr->grant_reward_cost )
        {
          v2 = 9107;
          goto LABEL_86;
        }
        if ( *(_BYTE *)(((unsigned __int64)&pic_config_ptr->grant_reward_cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)pic_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pic_config_ptr->grant_reward_cost >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        grant_reward_cost = pic_config_ptr->grant_reward_cost;
        v14 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 304),
                pic_id);
        v15 = v14;
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v14);
        }
        *v15 = grant_reward_cost;
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "tryRedeemReward",
          632);
        v11 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)&v65,
                (const char (*)[41])"[BLESSING] pic config not found, pic_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, pic_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v65,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "tryRedeemReward",
      642);
    v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&v65,
            (const char (*)[27])"[BLESSING] pic_deduct_map:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v16,
            (const std::map<unsigned int,unsigned int> *)(v3 + 304));
    v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v17, (const char (*)[15])" pic_num_map_:");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
      v18,
      (const std::map<unsigned int,unsigned int> *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
    pic_map = proto::BlessingRedeemRewardRsp::mutable_pic_num_map((proto::BlessingRedeemRewardRsp *const)v49._anon_0._M_allocated_capacity);
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 304);
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 304))._M_node;
    *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 80) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( std::operator!=(
              &__for_begin,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 80)) )
    {
      v57 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      pic_id_0 = std::get<0ul,unsigned int const,unsigned int>(v57);
      deduct_num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v57);
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = Player::getBasicComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 24));
      PlayerBasicComp::getNextTransNo[abi:cxx11](&v65, v19);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 64), 0xC12u, v49);
      std::string::~string(&v65);
      v20 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088),
              pic_id_0);
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v21 = *v20;
      if ( *(_BYTE *)(((unsigned __int64)deduct_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)deduct_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)deduct_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( v21 >= *deduct_num )
      {
        v24 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088),
                pic_id_0);
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v25 = *v24;
        if ( *(_BYTE *)(((unsigned __int64)deduct_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)deduct_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)deduct_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v24 = v25 - *deduct_num;
      }
      else
      {
        v22 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088),
                pic_id_0);
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v22);
        }
        *v23 = 0;
      }
      v26 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088),
              pic_id_0);
      if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v27 = *v26;
      v28 = google::protobuf::Map<unsigned int,unsigned int>::operator[](pic_map, pic_id_0);
      v29 = v28;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v28);
      }
      *v29 = v27;
      common::tools::perf::make_shared<proto_log::PlayerLogBodyBlessingPicNumChange>();
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyBlessingPicNumChange::set_day_index(
        v30,
        *(_DWORD *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1024));
      v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)pic_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pic_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pic_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyBlessingPicNumChange::set_pic_id(v31, *pic_id_0);
      v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      if ( *(_BYTE *)(((unsigned __int64)deduct_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)deduct_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)deduct_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyBlessingPicNumChange::set_delta_num(v32, -*deduct_num);
      v33 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
      proto_log::PlayerLogBodyBlessingPicNumChange::set_reason(v33, 3u);
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v34 = *(Player **)(*(&v49._anon_0._M_allocated_capacity + 1) + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v64, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v3 + 144),
        (const std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *)(v3 + 112));
      Player::printStatLog(v34, (MessagePtr *)(v3 + 144), &v64, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 144));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v64);
      std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *const)(v3 + 112));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 64));
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v64);
    v35 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64);
    drop_id = ConstValueExcelConfigMgr::getBlessingDropId(&v35->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v64);
    if ( !drop_id )
      goto LABEL_81;
    std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 176));
    ActionReason::ActionReason(
      (ActionReason *const)(v3 + 240),
      ACTION_REASON_BLESSING_REDEEM_REWARD,
      ITEM_LIMIT_ACTIVITY_BLESSING);
    if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    *(std::pair<unsigned int const,unsigned int> *)(v3 + 80) = DropUtils::dropItems(
                                                                 *(Player **)(*(&v49._anon_0._M_allocated_capacity + 1)
                                                                            + 24),
                                                                 drop_id,
                                                                 1u,
                                                                 (const ActionReason *)(v3 + 240),
                                                                 (std::vector<ItemParam> *)(v3 + 176));
    if ( *(_DWORD *)(v3 + 80) )
    {
      LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 80));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v65,
        &common::milog::MiLogDefault::default_log_obj_,
        LogLevel,
        "./src/player/activity/blessing_activity.cpp",
        "tryRedeemReward",
        675);
      v37 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&v65,
              (const char (*)[35])"[BLESSING] dropItems failed, uid: ");
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
      v2 = *(_DWORD *)(v3 + 80);
      v38 = 0;
    }
    else if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 176)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v65,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "tryRedeemReward",
        680);
      v39 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              (common::milog::MiLogStream *const)&v65,
              (const char (*)[48])"[BLESSING] item_param_vec is empty failed, uid:");
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 24));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, &val);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
      v2 = -1;
      v38 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 24));
      ret = PlayerItemComp::addItemBatch(
              ItemComp,
              (const std::vector<ItemParam> *)(v3 + 176),
              (const ActionReason *)(v3 + 240),
              0LL);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v65,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "tryRedeemReward",
          687);
        v41 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                (common::milog::MiLogStream *const)&v65,
                (const char (*)[37])"[BLESSING] addItemBatch failed, uid:");
        if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(*(const Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 24));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &val);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
        v2 = ret;
        v38 = 0;
      }
      else
      {
        common::tools::perf::make_shared<proto_log::PlayerLogBodyBlessingRedeemReward>();
        v42 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingRedeemReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingRedeemReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 1024) >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyBlessingRedeemReward::set_day_index(
          v42,
          *(_DWORD *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1024));
        v43 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingRedeemReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingRedeemReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        proto_log::PlayerLogBodyBlessingRedeemReward::set_drop_id(v43, drop_id);
        if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v44 = *(Player **)(*(&v49._anon_0._M_allocated_capacity + 1) + 24);
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v64, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlessingRedeemReward,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v3 + 144),
          (const std::shared_ptr<proto_log::PlayerLogBodyBlessingRedeemReward> *)(v3 + 112));
        Player::printStatLog(v44, (MessagePtr *)(v3 + 144), &v64, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 144));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v64);
        std::shared_ptr<proto_log::PlayerLogBodyBlessingRedeemReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlessingRedeemReward> *const)(v3 + 112));
        v38 = 1;
      }
    }
    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 176));
    if ( v38 == 1 )
    {
LABEL_81:
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 1196) >> 3) + 0x7FFF8000) != 0
        && (char)(((v49._anon_0._M_local_buf[8] - 84) & 7) + 3) >= *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1)
                                                                              + 1196) >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ++*(_DWORD *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1196);
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v65,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "tryRedeemReward",
        697);
      v45 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              (common::milog::MiLogStream *const)&v65,
              (const char (*)[48])"[BLESSING] redeem reward success, pic_num_pic_:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v45,
        (const std::map<unsigned int,unsigned int> *)(*(&v49._anon_0._M_allocated_capacity + 1) + 1088));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v65);
      common::tools::perf::make_shared<BlessingRedeemRewardEvent>();
      if ( *(_BYTE *)(((*(&v49._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(*(Player *const *)(*(&v49._anon_0._M_allocated_capacity + 1) + 24));
      std::shared_ptr<BaseEvent>::shared_ptr<BlessingRedeemRewardEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v64,
        (const std::shared_ptr<BlessingRedeemRewardEvent> *)(v3 + 144));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v64);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v64);
      v2 = 0;
      std::shared_ptr<BlessingRedeemRewardEvent>::~shared_ptr((std::shared_ptr<BlessingRedeemRewardEvent> *const)(v3 + 144));
    }
LABEL_86:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 304));
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v2;
  if ( v49._M_string_length == v3 )
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

// Line 706: range 000000001793B9D4-000000001793BF06
__int64 __fastcall BlessingActivity::scanEntityByGm(BlessingActivity *const this, uint32_t scan_config_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  __int64 result; // rax
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t type_id; // ecx
  common::milog::MiLogStream *v9; // rax
  unsigned int *v10; // rdx
  SelectType_0 v11; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  SelectType_0 *v13; // rdx
  unsigned int retcode; // [rsp+1Ch] [rbp-D4h]
  const data::BlessingScanTypeExcelConfig *today_scan_type_config_ptr; // [rsp+20h] [rbp-D0h]
  const data::BlessingScanExcelConfig *scan_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v17; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 drop_pic_id:727 64 4 18 scan_config_id:705";
  *(_QWORD *)(v2 + 16) = BlessingActivity::scanEntityByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = scan_config_id;
  today_scan_type_config_ptr = BlessingActivity::findTodayBlessingScanTypeConfig(this);
  if ( today_scan_type_config_ptr )
  {
    if ( *(_DWORD *)(v2 + 64) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v17);
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
      scan_config_ptr = data::ActivityBlessingExcelConfigMgrBase::findBlessingScanExcelConfig(
                          &v7->design_config.txt_config_mgr.activity_blessing_config_mgr,
                          *(_DWORD *)(v2 + 64));
      std::shared_ptr<Config>::~shared_ptr(&v17);
      if ( !scan_config_ptr )
        goto LABEL_14;
      if ( *(_BYTE *)(((unsigned __int64)&scan_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)scan_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scan_config_ptr->type_id >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      type_id = scan_config_ptr->type_id;
      if ( *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)today_scan_type_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&today_scan_type_config_ptr->type_id >> 3)
                                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( type_id == today_scan_type_config_ptr->type_id )
      {
        *(_DWORD *)(v2 + 48) = 0;
        retcode = BlessingActivity::doScanAndDrop(this, scan_config_ptr, (uint32_t *)(v2 + 48));
        if ( !retcode )
        {
          v10 = std::map<unsigned int,unsigned int>::operator[](
                  &this->pic_num_map_,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v11 = SAFE_ADD<unsigned int,int>(*v10, 1);
          v12 = std::map<unsigned int,unsigned int>::operator[](
                  &this->pic_num_map_,
                  (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
          v13 = v12;
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(v12);
          }
          *v13 = v11;
          if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          ++this->cur_day_scan_num_;
        }
        result = retcode;
      }
      else
      {
LABEL_14:
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blessing_activity.cpp",
          "scanEntityByGm",
          723);
        v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               &v18,
               (const char (*)[50])"[BLESSING] scan config not found, scan_config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 64));
        common::milog::MiLogStream::~MiLogStream(&v18);
        result = 9103LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "scanEntityByGm",
        716);
      v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v18,
             (const char (*)[50])"[BLESSING] scan entity not match, scan_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 9103LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "scanEntityByGm",
      710);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v18,
      (const char (*)[46])"[BLESSING] today scan type config ptr is null");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v2 )
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

// Line 739: range 000000001793BF08-000000001793C0A6
void __cdecl BlessingActivity::fillActivitySocialData(
        BlessingActivity *const this,
        proto::ActivitySocialData *social_data)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rdx
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-50h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-48h] BYREF
  proto::BlessingSocialData *blessing_social_data; // [rsp+20h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *pic_map; // [rsp+28h] [rbp-38h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v10; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pic_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivitySocialData::set_schedule_id(social_data, this->schedule_id_);
  blessing_social_data = proto::ActivitySocialData::mutable_blessing_data(social_data);
  pic_map = proto::BlessingSocialData::mutable_pic_num_map(blessing_social_data);
  __for_range = &this->pic_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->pic_num_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    pic_id = std::get<0ul,unsigned int const,unsigned int>(v10);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v10);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *num;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](pic_map, pic_id);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 750: range 000000001793C0A8-000000001793C182
std::set<unsigned int> *__cdecl BlessingActivity::getAllRecvPicUids(
        std::set<unsigned int> *retstr,
        BlessingActivity *const this)
{
  std::map<unsigned int,RecvPicRecord>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,RecvPicRecord>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,RecvPicRecord> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,RecvPicRecord> *v6; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,RecvPicRecord> >::type *_; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,RecvPicRecord> >::type *record; // [rsp+38h] [rbp-18h]

  std::set<unsigned int>::set(retstr);
  __for_range = &this->recv_pic_record_map_;
  __for_begin._M_node = std::map<unsigned int,RecvPicRecord>::begin(&this->recv_pic_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,RecvPicRecord>::end(&this->recv_pic_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,RecvPicRecord>(v6);
    record = (std::tuple_element<1,const std::pair<unsigned int const,RecvPicRecord> >::type *)std::get<1ul,unsigned int const,RecvPicRecord>(v6);
    std::set<unsigned int>::insert(retstr, &record->uid);
    std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 760: range 000000001793C184-000000001793C9D5
void __cdecl BlessingActivity::onServerGetFriendBriefRsp(
        BlessingActivity *const this,
        const proto::ServerGetFriendBriefRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  proto::FriendBrief *v5; // rax
  std::_List_iterator<unsigned int>::reference v6; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> >::pointer v9; // rax
  const proto::ProfilePicture *v10; // rax
  google::protobuf::uint32 v11; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> >::pointer v12; // rax
  const proto::ProfilePicture *v13; // rax
  google::protobuf::uint32 v14; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> >::pointer v15; // rax
  const std::string *v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> >::pointer v17; // rax
  const std::string *v18; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v19; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v20; // rdx
  bool *p_is_recv; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v22; // rdx
  PlayerSocialComp *SocialComp; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v24; // rdx
  const std::string *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v27; // rax
  google::protobuf::int32 v28; // eax
  std::list<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-1B0h] BYREF
  std::list<unsigned int>::iterator __for_end_0; // [rsp+18h] [rbp-1A8h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+20h] [rbp-1A0h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+28h] [rbp-198h]
  std::list<unsigned int> *__for_range_0; // [rsp+30h] [rbp-190h]
  proto::BlessingRecvPicRecord *record; // [rsp+38h] [rbp-188h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+40h] [rbp-180h]
  const proto::FriendBrief *friend_brief; // [rsp+48h] [rbp-178h]
  common::milog::MiLogStream v37; // [rsp+50h] [rbp-170h] BYREF
  char v38[336]; // [rsp+70h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 9 index:774 64 8 15 record_iter:776 96 8 14 brief_iter:779 128 48 7 rsp:761 208 48 17 uid_brief_map:768";
  *(_QWORD *)(v2 + 16) = BlessingActivity::onServerGetFriendBriefRsp;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = 62194;
  v4[536862728] = -202116109;
  proto::BlessingGetAllRecvPicRecordListRsp::BlessingGetAllRecvPicRecordListRsp((proto::BlessingGetAllRecvPicRecordListRsp *const)(v2 + 128));
  if ( !proto::ServerGetFriendBriefRsp::retcode(server_rsp) )
  {
    std::map<unsigned int,proto::FriendBrief>::map((std::map<unsigned int,proto::FriendBrief> *const)(v2 + 208));
    __for_range = proto::ServerGetFriendBriefRsp::friend_brief_list(server_rsp);
    *(google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator *)(v2 + 96) = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range);
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
              (const google::protobuf::internal::RepeatedPtrIterator<const proto::FriendBrief> *const)(v2 + 96),
              &__for_end) )
    {
      friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::FriendBrief> *const)(v2 + 96));
      *(_DWORD *)(v2 + 48) = proto::FriendBrief::uid(friend_brief);
      v5 = std::map<unsigned int,proto::FriendBrief>::operator[](
             (std::map<unsigned int,proto::FriendBrief> *const)(v2 + 208),
             (const std::map<unsigned int,proto::FriendBrief>::key_type *)(v2 + 48));
      proto::FriendBrief::CopyFrom(v5, friend_brief);
      google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::FriendBrief> *const)(v2 + 96));
    }
    __for_range_0 = &this->recv_pic_index_list_;
    __for_begin._M_node = std::list<unsigned int>::begin(&this->recv_pic_index_list_)._M_node;
    __for_end_0._M_node = std::list<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end_0) )
    {
      v6 = std::_List_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v6;
      *(std::map<unsigned int,RecvPicRecord>::iterator *)(v2 + 64) = std::map<unsigned int,RecvPicRecord>::find(
                                                                       &this->recv_pic_record_map_,
                                                                       (const std::map<unsigned int,RecvPicRecord>::key_type *)(v2 + 48));
      __for_end.it_ = (void *const *)std::map<unsigned int,RecvPicRecord>::end(&this->recv_pic_record_map_)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)(v2 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)&__for_end) )
      {
        v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
        *(std::map<unsigned int,proto::FriendBrief>::iterator *)(v2 + 96) = std::map<unsigned int,proto::FriendBrief>::find(
                                                                              (std::map<unsigned int,proto::FriendBrief> *const)(v2 + 208),
                                                                              &v7->second.uid);
        __for_end.it_ = (void *const *)std::map<unsigned int,proto::FriendBrief>::end((std::map<unsigned int,proto::FriendBrief> *const)(v2 + 208))._M_node;
        if ( std::operator!=(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> >::_Self *)(v2 + 96),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> >::_Self *)&__for_end) )
        {
          record = proto::BlessingGetAllRecvPicRecordListRsp::add_recv_pic_record_list((proto::BlessingGetAllRecvPicRecordListRsp *const)(v2 + 128));
          v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v8 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::BlessingRecvPicRecord::set_uid(record, v8->second.uid);
          profile_picture_proto = proto::BlessingRecvPicRecord::mutable_profile_picture(record);
          v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> > *const)(v2 + 96));
          v10 = proto::FriendBrief::profile_picture(&v9->second);
          v11 = proto::ProfilePicture::avatar_id(v10);
          proto::ProfilePicture::set_avatar_id(profile_picture_proto, v11);
          v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> > *const)(v2 + 96));
          v13 = proto::FriendBrief::profile_picture(&v12->second);
          v14 = proto::ProfilePicture::costume_id(v13);
          proto::ProfilePicture::set_costume_id(profile_picture_proto, v14);
          v15 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> > *const)(v2 + 96));
          v16 = proto::FriendBrief::nickname[abi:cxx11](&v15->second);
          proto::BlessingRecvPicRecord::set_nickname(record, v16);
          v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::FriendBrief> > *const)(v2 + 96));
          v18 = proto::FriendBrief::signature[abi:cxx11](&v17->second);
          proto::BlessingRecvPicRecord::set_signature(record, v18);
          v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v19->second.pic_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v19 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->second.pic_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::BlessingRecvPicRecord::set_pic_id(record, v19->second.pic_id);
          v20 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
          p_is_recv = &v20->second.is_recv;
          if ( *(_BYTE *)(((unsigned __int64)p_is_recv >> 3) + 0x7FFF8000) != 0
            && ((unsigned __int8)p_is_recv & 7) >= *(_BYTE *)(((unsigned __int64)p_is_recv >> 3) + 0x7FFF8000) )
          {
            __asan_report_load1(p_is_recv);
          }
          proto::BlessingRecvPicRecord::set_is_recv(record, v20->second.is_recv);
          v22 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v22->second.index >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v22 + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v22->second.index >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::BlessingRecvPicRecord::set_index(record, v22->second.index);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          SocialComp = Player::getSocialComp(this->player_);
          v24 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v24->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v24 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v24->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v25 = PlayerSocialComp::findFriendRemarkName[abi:cxx11](SocialComp, v24->second.uid);
          proto::BlessingRecvPicRecord::set_remark_name(record, v25);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/blessing_activity.cpp",
            "onServerGetFriendBriefRsp",
            796);
          v26 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v37,
                  (const char (*)[45])"[BLESSING] player brief data not found, uid:");
          v27 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v2 + 64));
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &v27->second.uid);
          common::milog::MiLogStream::~MiLogStream(&v37);
        }
      }
      std::_List_iterator<unsigned int>::operator++(&__for_begin);
    }
    std::map<unsigned int,proto::FriendBrief>::~map((std::map<unsigned int,proto::FriendBrief> *const)(v2 + 208));
  }
  v28 = proto::ServerGetFriendBriefRsp::retcode(server_rsp);
  proto::BlessingGetAllRecvPicRecordListRsp::set_retcode(
    (proto::BlessingGetAllRecvPicRecordListRsp *const)(v2 + 128),
    v28);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 128));
  proto::BlessingGetAllRecvPicRecordListRsp::~BlessingGetAllRecvPicRecordListRsp((proto::BlessingGetAllRecvPicRecordListRsp *const)(v2 + 128));
  if ( v38 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 807: range 000000001793C9D6-000000001793D379
__int64 __fastcall BlessingActivity::giveFriendPic(BlessingActivity *const this, __int32 pic_id, __int32 target_uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  common::milog::MiLogStream *v10; // rax
  GiveFriendPicParam *v11; // rax
  std::string *v12; // rcx
  GiveFriendPicParam *v13; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const std::string,GiveFriendPicParam> >,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  uint32_t Uid; // eax
  GameserverService *v17; // r14
  unsigned __int64 v18; // rdx
  GameserverService *v19; // r14
  common::minet::Packet *v20; // r14
  uint32_t v21; // eax
  common::minet::Packet *v22; // rax
  std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  unsigned __int64 v24; // rax
  unsigned int (__fastcall *v25)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *); // r15
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  __int64 result; // rax
  std::string v31; // [rsp+0h] [rbp-1C0h]
  char *v32; // [rsp+8h] [rbp-1B8h]
  uint32_t target_uida; // [rsp+10h] [rbp-1B0h]
  BlessingActivity *thisa; // [rsp+18h] [rbp-1A8h]
  unsigned int val; // [rsp+2Ch] [rbp-194h] BYREF
  proto::OfflineMsgBin *msg; // [rsp+30h] [rbp-190h]
  proto::BlessingActivityGivePicOp *op; // [rsp+38h] [rbp-188h]
  std::shared_ptr<common::minet::Packet> packet_ptr; // [rsp+40h] [rbp-180h] BYREF
  std::string v39; // [rsp+50h] [rbp-170h] BYREF
  char v40[336]; // [rsp+70h] [rbp-150h] BYREF

  *(&v31._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v31._anon_0._M_allocated_capacity) = pic_id;
  *(_DWORD *)v31._anon_0._M_local_buf = target_uid;
  v3 = (unsigned __int64)v40;
  v31._M_string_length = (std::string::size_type)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 1 10 holder:808 48 4 10 pic_id:806 64 8 8 iter:809 96 8 9 param:821 128 16 14 packet_ptr:83"
                        "7 160 32 10 ticket:819 224 32 19 offline_msg_req:828";
  *(_QWORD *)(v3 + 16) = BlessingActivity::giveFriendPic;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556927;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = pic_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v39, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32), 0xC12u, v31);
  std::string::~string(&v39);
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                  &thisa->pic_num_map_,
                                                                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 48));
  *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(&thisa->pic_num_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "giveFriendPic",
      812);
    v7 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           (common::milog::MiLogStream *const)&v39,
           (const char (*)[28])"[BLESSING] pic id invalid: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v39);
    v8 = -1;
  }
  else
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v9->second )
    {
      BlessingActivity::createGiveTicket[abi:cxx11]((std::string *)(v3 + 160), thisa, target_uida, *(_DWORD *)(v3 + 48));
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v39,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "giveFriendPic",
        820);
      v10 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)&v39,
              (const char (*)[31])"[BLESSING] give friend ticket:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 160));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v39);
      *(_DWORD *)(v3 + 96) = target_uida;
      *(_DWORD *)(v3 + 100) = *(_DWORD *)(v3 + 48);
      v11 = std::move<GiveFriendPicParam &>((GiveFriendPicParam *)(v3 + 96));
      v14 = std::map<std::string,GiveFriendPicParam>::emplace<std::string&,GiveFriendPicParam>(
              &thisa->give_pic_ticket_param_map_,
              (std::string *)(v3 + 160),
              v11,
              v12,
              v13);
      if ( !v14.second )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "giveFriendPic",
          824);
        v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)&v39,
                (const char (*)[31])"[BLESSING] ticket duplicated: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v3 + 160));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v39);
        v8 = -1;
      }
      else
      {
        proto::SendOfflineMsgReq::SendOfflineMsgReq((proto::SendOfflineMsgReq *const)(v3 + 224));
        msg = proto::SendOfflineMsgReq::mutable_msg((proto::SendOfflineMsgReq *const)(v3 + 224));
        proto::OfflineMsgBin::set_ticket(msg, (const std::string *)(v3 + 160));
        op = proto::OfflineMsgBin::mutable_blessing_give_pic_op(msg);
        proto::BlessingActivityGivePicOp::set_pic_id(op, *(_DWORD *)(v3 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        Uid = Player::getUid(thisa->player_);
        proto::BlessingActivityGivePicOp::set_source_uid(op, Uid);
        proto::BlessingActivityGivePicOp::set_target_uid(op, target_uida);
        common::minet::PacketUtils::createPacket<proto::SendOfflineMsgReq>((const proto::SendOfflineMsgReq *)(v3 + 128));
        if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v3 + 128)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v39,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/blessing_activity.cpp",
            "giveFriendPic",
            840);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)&v39,
            (const char (*)[19])"createPacket fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v39);
          v8 = -1;
        }
        else
        {
          v17 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v3 + 128));
          ServiceBase::setPacketSource(v17, (common::minet::PacketPtr)__PAIR128__(v18, &packet_ptr));
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
          v19 = ServiceBox::findService<GameserverService>();
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v3 + 128));
          GameserverService::setPacketGameThreadIndex(v19, &packet_ptr);
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
          v20 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v21 = Player::getUid(thisa->player_);
          common::minet::Packet::setUserId(v20, v21);
          v22 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          common::minet::Packet::setTargetService(v22, 9u);
          v23 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v24 = (unsigned __int64)(v23->_vptr_NetworkMgrBase + 8);
          if ( *(_BYTE *)((v24 >> 3) + 0x7FFF8000) )
            v24 = __asan_report_load8();
          v25 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::shared_ptr<common::minet::Packet> *))v24;
          std::shared_ptr<common::minet::Packet>::shared_ptr(
            &packet_ptr,
            (const std::shared_ptr<common::minet::Packet> *)(v3 + 128));
          v26 = v25(v23, &packet_ptr) != 0;
          std::shared_ptr<common::minet::Packet>::~shared_ptr(&packet_ptr);
          if ( v26 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v39,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/blessing_activity.cpp",
              "giveFriendPic",
              850);
            v27 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                    (common::milog::MiLogStream *const)&v39,
                    (const char (*)[24])"sendPacket fails, cmd: ");
            v28 = common::milog::MiLogStream::operator<<<proto::SendOfflineMsgReq_CmdId,(proto::SendOfflineMsgReq_CmdId*)0>(
                    v27,
                    &proto::SendOfflineMsgReq::CMD_ID);
            v29 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v28, (const char (*)[7])" uid: ");
            if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(thisa->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &val);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v39);
            v8 = -1;
          }
          else
          {
            v8 = 0;
          }
        }
        std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v3 + 128));
        proto::SendOfflineMsgReq::~SendOfflineMsgReq((proto::SendOfflineMsgReq *const)(v3 + 224));
      }
      std::string::~string((void *)(v3 + 160));
    }
    else
    {
      v8 = 9108;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 32));
  result = v8;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
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

// Line 858: range 000000001793D37A-000000001793D681
std::string *__cdecl BlessingActivity::createGiveTicket[abi:cxx11](
        std::string *retstr,
        BlessingActivity *const this,
        uint32_t target_uid,
        uint32_t pic_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rbx
  __int64 v7; // r14
  uint32_t Uid; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r14
  time_t Now; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  char v21[560]; // [rsp+20h] [rbp-230h] BYREF

  v4 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(512LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 392 6 ss:860";
  *(_QWORD *)(v4 + 16) = BlessingActivity::createGiveTicket[abi:cxx11];
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862733] = -218103808;
  v6[536862734] = -202116109;
  v6[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v4 + 48);
  v7 = std::operator<<<std::char_traits<char>>(v4 + 64, "Blessing-");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v9 = std::ostream::operator<<(v7, Uid);
  v10 = std::operator<<<std::char_traits<char>>(v9, "-");
  v11 = std::ostream::operator<<(v10, target_uid);
  v12 = std::operator<<<std::char_traits<char>>(v11, "-");
  v13 = std::ostream::operator<<(v12, pic_id);
  v14 = std::operator<<<std::char_traits<char>>(v13, "-");
  Now = common::tools::TimeUtils::getNow();
  v16 = std::ostream::operator<<(v14, Now);
  v17 = std::operator<<<std::char_traits<char>>(v16, "-");
  std::ostream::operator<<(
    v17,
    ++BlessingActivity::createGiveTicket[abi:cxx11](unsigned int,unsigned int)::transaction_id);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v4 + 48);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v4 + 48);
  if ( v21 == (char *)v4 )
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

// Line 866: range 000000001793D682-000000001793DF45
// local variable allocation has failed, the output may be wrong!
void __cdecl BlessingActivity::onSendOfflineMsgRspEvent(
        BlessingActivity *const this,
        const SendOfflineMsgRspEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  __int64 v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v9; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *v16; // r14
  PlayerEventComp *EventComp; // r14
  std::string eventa; // [rsp+0h] [rbp-180h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-160h] BYREF
  char v20[336]; // [rsp+30h] [rbp-150h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 10 holder:871 64 8 15 ticket_iter:873 96 8 8 iter:891 128 8 9 param:879 160 16 11 log_ptr"
                        ":905 192 16 13 event_ptr:913 224 32 7 rsp:918";
  *(_QWORD *)(v2 + 16) = BlessingActivity::onSendOfflineMsgRspEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862728] = -202116109;
  if ( !BaseActivity::isFinished((const BaseActivity *const)eventa._M_string_length) )
  {
    if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v2 + 224), BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xC12u, eventa);
    std::string::~string((void *)(v2 + 224));
    *(std::map<std::string,GiveFriendPicParam>::iterator *)(v2 + 64) = std::map<std::string,GiveFriendPicParam>::find(
                                                                         (std::map<std::string,GiveFriendPicParam> *const)(eventa._M_string_length + 952),
                                                                         (const std::map<std::string,GiveFriendPicParam>::key_type *)(eventa._M_dataplus._M_p + 24));
    *(std::map<std::string,GiveFriendPicParam>::iterator *)(v2 + 128) = std::map<std::string,GiveFriendPicParam>::end((std::map<std::string,GiveFriendPicParam> *const)(eventa._M_string_length + 952));
    if ( !std::operator==(
            (const std::_Rb_tree_iterator<std::pair<const std::string,GiveFriendPicParam> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_iterator<std::pair<const std::string,GiveFriendPicParam> >::_Self *)(v2 + 128)) )
    {
      v6 = (__int64)std::_Rb_tree_iterator<std::pair<std::string const,GiveFriendPicParam>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,GiveFriendPicParam> > *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(v6 + 32) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8();
      *(_QWORD *)(v2 + 128) = *(_QWORD *)(v6 + 32);
      std::map<std::string,GiveFriendPicParam>::erase[abi:cxx11](
        (std::map<std::string,GiveFriendPicParam> *const)(eventa._M_string_length + 952),
        *(std::map<std::string,GiveFriendPicParam>::iterator *)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 56) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 56) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HIDWORD(eventa._anon_0._M_allocated_capacity) = *((_DWORD *)eventa._M_dataplus._M_p + 14);
      if ( HIDWORD(eventa._anon_0._M_allocated_capacity) )
      {
        HIDWORD(eventa._anon_0._M_allocated_capacity) = 9110;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blessing_activity.cpp",
          "onSendOfflineMsgRspEvent",
          885);
        v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
               (common::milog::MiLogStream *const)(v2 + 224),
               (const char (*)[38])"[BLESSING] SendOfflineMsgRsp retcode:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v7, (const int *)eventa._M_dataplus._M_p + 14);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      }
      else
      {
        *(std::map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::find(
                                                                        (std::map<unsigned int,unsigned int> *const)(eventa._M_string_length + 1088),
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 132));
        *((std::map<unsigned int,unsigned int>::iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(eventa._M_string_length + 1088));
        if ( std::operator==(
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
               (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&eventa._anon_0._M_allocated_capacity
             + 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 224),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/blessing_activity.cpp",
            "onSendOfflineMsgRspEvent",
            894);
          v8 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                 (common::milog::MiLogStream *const)(v2 + 224),
                 (const char (*)[28])"[BLESSING] pic id invalid: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 132));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          HIDWORD(eventa._anon_0._M_allocated_capacity) = -1;
        }
        else
        {
          v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)v9 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v9->second )
          {
            v10 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(eventa._M_string_length + 1088),
                    (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 132));
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            --*v10;
            common::tools::perf::make_shared<proto_log::PlayerLogBodyBlessingPicNumChange>();
            v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            if ( *(_BYTE *)(((eventa._M_string_length + 1024) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((eventa._M_string_length + 1024) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyBlessingPicNumChange::set_day_index(
              v11,
              *(_DWORD *)(eventa._M_string_length + 1024));
            v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            proto_log::PlayerLogBodyBlessingPicNumChange::set_pic_id(v12, *(_DWORD *)(v2 + 132));
            v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            proto_log::PlayerLogBodyBlessingPicNumChange::set_delta_num(v13, -1);
            v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            proto_log::PlayerLogBodyBlessingPicNumChange::set_reason(v14, 4u);
            v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            proto_log::PlayerLogBodyBlessingPicNumChange::set_interact_uid(v15, *(_DWORD *)(v2 + 128));
            if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v16 = *(Player **)(eventa._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange,void>(
              (std::shared_ptr<google::protobuf::Message> *const)(v2 + 192),
              (const std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *)(v2 + 160));
            Player::printStatLog(v16, (MessagePtr *)(v2 + 192), &p_body_ext_ptr, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 192));
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
            eventa._anon_0._M_local_buf[3] = 1;
            common::tools::perf::make_shared<BlessingExchangePicEvent,unsigned int &,bool>(
              (unsigned int *)(v2 + 192),
              (bool *)(v2 + 132),
              (unsigned int *)((char *)&eventa._anon_0._M_allocated_capacity + 3),
              (bool *)(v2 + 132));
            if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            EventComp = Player::getEventComp(*(Player *const *)(eventa._M_string_length + 24));
            std::shared_ptr<BaseEvent>::shared_ptr<BlessingExchangePicEvent,void>(
              (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
              (const std::shared_ptr<BlessingExchangePicEvent> *)(v2 + 192));
            PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
            std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
            std::shared_ptr<BlessingExchangePicEvent>::~shared_ptr((std::shared_ptr<BlessingExchangePicEvent> *const)(v2 + 192));
            std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *const)(v2 + 160));
          }
          else
          {
            HIDWORD(eventa._anon_0._M_allocated_capacity) = 9108;
          }
        }
      }
      proto::BlessingGiveFriendPicRsp::BlessingGiveFriendPicRsp((proto::BlessingGiveFriendPicRsp *const)(v2 + 224));
      proto::BlessingGiveFriendPicRsp::set_retcode(
        (proto::BlessingGiveFriendPicRsp *const)(v2 + 224),
        SHIDWORD(eventa._anon_0._M_allocated_capacity));
      proto::BlessingGiveFriendPicRsp::set_pic_id(
        (proto::BlessingGiveFriendPicRsp *const)(v2 + 224),
        *(_DWORD *)(v2 + 132));
      proto::BlessingGiveFriendPicRsp::set_uid(
        (proto::BlessingGiveFriendPicRsp *const)(v2 + 224),
        *(_DWORD *)(v2 + 128));
      if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::sendProto(*(Player *const *)(eventa._M_string_length + 24), (const google::protobuf::Message *)(v2 + 224));
      proto::BlessingGiveFriendPicRsp::~BlessingGiveFriendPicRsp((proto::BlessingGiveFriendPicRsp *const)(v2 + 224));
    }
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 926: range 000000001793DF46-000000001793E881
int32_t __cdecl BlessingActivity::onRecvFriendPic(BlessingActivity *const this, uint32_t pic_id, uint32_t source_uid)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  RecvPicRecord *v6; // r8
  const std::map<unsigned int,RecvPicRecord>::key_type *v7; // rax
  common::milog::MiLogStream *v8; // r14
  const unsigned int *v9; // rax
  int32_t v10; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v11; // rdx
  bool *p_is_recv; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v13; // rdx
  std::list<unsigned int>::reference v14; // rdx
  common::milog::MiLogStream *v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v16; // rdx
  common::milog::MiLogStream *v17; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  std::map<unsigned int,RecvPicRecord>::key_type __x; // [rsp+14h] [rbp-11Ch] BYREF
  std::_List_iterator<unsigned int>::_Self __y; // [rsp+18h] [rbp-118h] BYREF
  char v27[272]; // [rsp+20h] [rbp-110h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 17 removed_index:936 48 4 16 oldest_index:963 64 8 6 it:937 96 8 15 record_iter:964 128 1"
                        "6 10 record:927 160 32 10 notify:985";
  *(_QWORD *)(v3 + 16) = BlessingActivity::onRecvFriendPic;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862726] = -202116109;
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  *(_BYTE *)(v3 + 136) = 0;
  *(_DWORD *)(v3 + 140) = 0;
  *(_DWORD *)(v3 + 128) = source_uid;
  *(_DWORD *)(v3 + 132) = pic_id;
  *(_BYTE *)(v3 + 136) = 0;
  *(_DWORD *)(v3 + 140) = BlessingActivity::genRecvIndex(this);
  if ( std::map<unsigned int,RecvPicRecord>::size(&this->recv_pic_record_map_) > 0x31 )
  {
    *(_DWORD *)(v3 + 32) = -1;
    *(std::list<unsigned int>::iterator *)(v3 + 64) = std::list<unsigned int>::begin(&this->recv_pic_index_list_);
    while ( 1 )
    {
      __y._M_node = std::list<unsigned int>::end(&this->recv_pic_index_list_)._M_node;
      if ( !std::operator!=((const std::_List_iterator<unsigned int>::_Self *)(v3 + 64), &__y) )
        break;
      v7 = std::_List_iterator<unsigned int>::operator*((const std::_List_iterator<unsigned int> *const)(v3 + 64));
      *(std::map<unsigned int,RecvPicRecord>::iterator *)(v3 + 96) = std::map<unsigned int,RecvPicRecord>::find(
                                                                       &this->recv_pic_record_map_,
                                                                       v7);
      __y._M_node = (std::__detail::_List_node_base *)std::map<unsigned int,RecvPicRecord>::end(&this->recv_pic_record_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)(v3 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)&__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "onRecvFriendPic",
          942);
        v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               (common::milog::MiLogStream *const)(v3 + 160),
               (const char (*)[44])"[BLESSING] record not exists, record_index:");
        v9 = std::_List_iterator<unsigned int>::operator*((const std::_List_iterator<unsigned int> *const)(v3 + 64));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, v9);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v10 = -1;
        goto LABEL_32;
      }
      v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v3 + 96));
      p_is_recv = &v11->second.is_recv;
      if ( *(_BYTE *)(((unsigned __int64)p_is_recv >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_recv & 7) >= *(_BYTE *)(((unsigned __int64)p_is_recv >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(p_is_recv);
      }
      if ( v11->second.is_recv )
      {
        v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v3 + 96));
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 32) = v13->first;
        std::_List_const_iterator<unsigned int>::_List_const_iterator(
          (std::_List_const_iterator<unsigned int> *const)&__y,
          (const std::_List_const_iterator<unsigned int>::iterator *)(v3 + 64));
        std::list<unsigned int>::erase(
          &this->recv_pic_index_list_,
          (std::list<unsigned int>::const_iterator)__y._M_node);
        std::map<unsigned int,RecvPicRecord>::erase[abi:cxx11](
          &this->recv_pic_record_map_,
          *(std::map<unsigned int,RecvPicRecord>::iterator *)(v3 + 96));
        break;
      }
      std::_List_iterator<unsigned int>::operator++((std::_List_iterator<unsigned int> *const)(v3 + 64), 0);
    }
    if ( *(_DWORD *)(v3 + 32) == -1 )
    {
      if ( std::list<unsigned int>::empty(&this->recv_pic_index_list_) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "onRecvFriendPic",
          960);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v3 + 160),
          (const char (*)[42])"[BLESSING] recv_pic_index_list_ is empty!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v10 = -1;
        goto LABEL_32;
      }
      v14 = std::list<unsigned int>::front(&this->recv_pic_index_list_);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v14;
      *(std::map<unsigned int,RecvPicRecord>::iterator *)(v3 + 96) = std::map<unsigned int,RecvPicRecord>::find(
                                                                       &this->recv_pic_record_map_,
                                                                       (const std::map<unsigned int,RecvPicRecord>::key_type *)(v3 + 48));
      __y._M_node = (std::__detail::_List_node_base *)std::map<unsigned int,RecvPicRecord>::end(&this->recv_pic_record_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)(v3 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)&__y) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 160),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "onRecvFriendPic",
          967);
        v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)(v3 + 160),
                (const char (*)[44])"[BLESSING] record not exists, record_index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
        v10 = -1;
        goto LABEL_32;
      }
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 32) = v16->first;
      std::list<unsigned int>::pop_front(&this->recv_pic_index_list_);
      __x = *(_DWORD *)(v3 + 32);
      std::map<unsigned int,RecvPicRecord>::erase(&this->recv_pic_record_map_, &__x);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "onRecvFriendPic",
      974);
    v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)(v3 + 160),
            (const char (*)[35])"[BLESSING] record replaced!, from:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
  }
  v18 = std::map<unsigned int,RecvPicRecord>::emplace<unsigned int &,RecvPicRecord&>(
          &this->recv_pic_record_map_,
          (unsigned int *)(v3 + 140),
          (RecvPicRecord *)(v3 + 128),
          (unsigned int *)&this->recv_pic_record_map_,
          v6);
  if ( !v18.second )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "onRecvFriendPic",
      979);
    v19 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)(v3 + 160),
            (const char (*)[49])"[BLESSING] record index duplicated record_index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 140));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    v10 = -1;
  }
  else
  {
    std::list<unsigned int>::push_back(
      &this->recv_pic_index_list_,
      (const std::list<unsigned int>::value_type *)(v3 + 140));
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/blessing_activity.cpp",
      "onRecvFriendPic",
      983);
    v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            (common::milog::MiLogStream *const)(v3 + 160),
            (const char (*)[41])"[BLESSING] onRecvFriendPic, source_uid: ");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 128));
    v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" pic_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 132));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    proto::BlessingRecvFriendPicNotify::BlessingRecvFriendPicNotify((proto::BlessingRecvFriendPicNotify *const)(v3 + 160));
    proto::BlessingRecvFriendPicNotify::set_pic_id((proto::BlessingRecvFriendPicNotify *const)(v3 + 160), pic_id);
    proto::BlessingRecvFriendPicNotify::set_uid((proto::BlessingRecvFriendPicNotify *const)(v3 + 160), source_uid);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 160));
    v10 = 0;
    proto::BlessingRecvFriendPicNotify::~BlessingRecvFriendPicNotify((proto::BlessingRecvFriendPicNotify *const)(v3 + 160));
  }
LABEL_32:
  result = v10;
  if ( v27 == (char *)v3 )
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

// Line 993: range 000000001793E882-000000001793F356
__int64 __fastcall BlessingActivity::acceptFriendPic(
        BlessingActivity *const this,
        __int32 uid,
        __int32 index,
        uint32_t *pic_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // rax
  unsigned int v9; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::pointer v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int *v14; // rdx
  SelectType_0 v15; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rax
  SelectType_0 *v17; // rdx
  uint32_t v18; // ecx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  Player *player; // r14
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::string v31; // [rsp+0h] [rbp-160h]
  uint32_t *pic_ida; // [rsp+8h] [rbp-158h]
  BlessingActivity *thisa; // [rsp+18h] [rbp-148h]
  char __args_0[9]; // [rsp+2Fh] [rbp-131h] BYREF
  RecvPicRecord *record; // [rsp+38h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+40h] [rbp-120h] BYREF
  std::string v37; // [rsp+50h] [rbp-110h] BYREF
  char v38[240]; // [rsp+70h] [rbp-F0h] BYREF

  *(&v31._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v31._anon_0._M_allocated_capacity) = uid;
  *(_DWORD *)v31._anon_0._M_local_buf = index;
  v31._M_string_length = (std::string::size_type)pic_id;
  v4 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 48 1 10 holder:994 64 4 7 uid:992 80 4 9 index:992 96 8 8 iter:995 128 16 12 log_ptr:1022 160 "
                        "16 14 event_ptr:1030";
  *(_QWORD *)(v4 + 16) = BlessingActivity::acceptFriendPic;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -219021312;
  v6[536862725] = -202178560;
  *(_DWORD *)(v4 + 64) = uid;
  *(_DWORD *)(v4 + 80) = *(_DWORD *)v31._anon_0._M_local_buf;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v37, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xC12u, v31);
  std::string::~string(&v37);
  *(std::map<unsigned int,RecvPicRecord>::iterator *)(v4 + 96) = std::map<unsigned int,RecvPicRecord>::find(
                                                                   &thisa->recv_pic_record_map_,
                                                                   (const std::map<unsigned int,RecvPicRecord>::key_type *)(v4 + 80));
  *(std::map<unsigned int,RecvPicRecord>::iterator *)&__args_0[1] = std::map<unsigned int,RecvPicRecord>::end(&thisa->recv_pic_record_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)(v4 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)&__args_0[1]) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "acceptFriendPic",
      998);
    v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           (common::milog::MiLogStream *const)&v37,
           (const char (*)[53])"[BLESSING] index not in recv_pic_record_map_, index:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
    v9 = -1;
  }
  else
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)(v4 + 96));
    record = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( record->uid == *(_DWORD *)(v4 + 64) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&record->is_recv >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_recv >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&record->is_recv);
      }
      if ( record->is_recv )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blessing_activity.cpp",
          "acceptFriendPic",
          1009);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                (common::milog::MiLogStream *const)&v37,
                (const char (*)[34])"[BLESSING] pic has recved, index:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
        v9 = 9109;
      }
      else if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
                   &thisa->pic_num_map_,
                   &record->pic_id) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "acceptFriendPic",
          1014);
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)&v37,
                (const char (*)[35])"[BLESSING] pic id invalid, pic_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &record->pic_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
        v9 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&record->is_recv >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_recv >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&record->is_recv);
        }
        record->is_recv = 1;
        v14 = std::map<unsigned int,unsigned int>::operator[](&thisa->pic_num_map_, &record->pic_id);
        if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v15 = SAFE_ADD<unsigned int,int>(*v14, 1);
        v16 = std::map<unsigned int,unsigned int>::operator[](&thisa->pic_num_map_, &record->pic_id);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v16);
        }
        *v17 = v15;
        if ( *(_BYTE *)(((unsigned __int64)&record->pic_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->pic_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v18 = record->pic_id;
        if ( *(_BYTE *)(((unsigned __int64)pic_ida >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pic_ida & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pic_ida >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(pic_ida);
        }
        *pic_ida = v18;
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v37,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/blessing_activity.cpp",
          "acceptFriendPic",
          1020);
        v19 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                (common::milog::MiLogStream *const)&v37,
                (const char (*)[42])"[BLESSING] acceptFriendPic succ, pic_id: ");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &record->pic_id);
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])" pic_num:");
        v22 = std::map<unsigned int,unsigned int>::operator[](&thisa->pic_num_map_, &record->pic_id);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, v22);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
        common::tools::perf::make_shared<proto_log::PlayerLogBodyBlessingPicNumChange>();
        v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->day_index_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyBlessingPicNumChange::set_day_index(v23, thisa->day_index_);
        v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)pic_ida >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pic_ida & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pic_ida >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyBlessingPicNumChange::set_pic_id(v24, *pic_ida);
        v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        proto_log::PlayerLogBodyBlessingPicNumChange::set_delta_num(v25, 1);
        v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        proto_log::PlayerLogBodyBlessingPicNumChange::set_reason(v26, 2u);
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
        if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyBlessingPicNumChange::set_interact_uid(v27, record->uid);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = thisa->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange,void>(
          (std::shared_ptr<google::protobuf::Message> *const)(v4 + 160),
          (const std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *)(v4 + 128));
        Player::printStatLog(player, (MessagePtr *)(v4 + 160), &p_body_ext_ptr, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 160));
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
        __args_0[0] = 0;
        common::tools::perf::make_shared<BlessingExchangePicEvent,unsigned int &,bool>(
          (unsigned int *)(v4 + 160),
          (bool *)pic_ida,
          (unsigned int *)__args_0,
          (bool *)pic_ida);
        if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(thisa->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<BlessingExchangePicEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
          (const std::shared_ptr<BlessingExchangePicEvent> *)(v4 + 160));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
        v9 = 0;
        std::shared_ptr<BlessingExchangePicEvent>::~shared_ptr((std::shared_ptr<BlessingExchangePicEvent> *const)(v4 + 160));
        std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *const)(v4 + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v37,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "acceptFriendPic",
        1004);
      v11 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)&v37,
              (const char (*)[32])"[BLESSING] wrong uid data, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v37);
      v9 = -1;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  result = v9;
  if ( v38 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1037: range 000000001793F358-000000001793FC64
int32_t __cdecl BlessingActivity::simulateDrop(BlessingActivity *const this, uint32_t repeated_times)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::vector<unsigned int>::size_type v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr M_node; // r14
  std::map<unsigned int,unsigned int>::iterator v11; // rax
  BlessingActivity::simulateDrop::<lambda(auto:23&, auto:24&)> v12; // dl
  int v13; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v14; // rdx
  unsigned int second; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::pointer v16; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v17; // rax
  int32_t result; // eax
  uint32_t i; // [rsp+2Ch] [rbp-2E4h]
  uint32_t lack_num; // [rsp+30h] [rbp-2E0h]
  uint32_t total_redeem_count; // [rsp+34h] [rbp-2DCh]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-2D8h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+40h] [rbp-2D0h] BYREF
  const ActivityBlessingExcelConfigMgr *config_mgr; // [rsp+48h] [rbp-2C8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-2C0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-2B8h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+60h] [rbp-2B0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *pic_id; // [rsp+68h] [rbp-2A8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+70h] [rbp-2A0h]
  const std::pair<unsigned int const,unsigned int> *v30; // [rsp+78h] [rbp-298h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+80h] [rbp-290h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+88h] [rbp-288h]
  std::shared_ptr<Config> v33; // [rsp+90h] [rbp-280h] BYREF
  common::milog::MiLogStream v34; // [rsp+A0h] [rbp-270h] BYREF
  char v35[592]; // [rsp+C0h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 6 d:1042 48 8 9 iter:1052 80 392 7 ss:1051";
  *(_QWORD *)(v3 + 16) = BlessingActivity::simulateDrop;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862734] = -218103808;
  v5[536862735] = -202116109;
  v5[536862736] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)->design_config.txt_config_mgr.activity_blessing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v33);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
  total_redeem_count = ConstValueExcelConfigMgr::getBlessingMaxRedeemNum(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v33);
  for ( i = 0; i < repeated_times; ++i )
  {
    for ( *(_DWORD *)(v3 + 32) = 1; ; ++*(_DWORD *)(v3 + 32) )
    {
      v7 = *(unsigned int *)(v3 + 32);
      if ( v7 > std::vector<unsigned int>::size(&config_mgr->blessing_type_id_vec) )
        break;
      if ( BlessingActivity::simulateOneDay(this, *(_DWORD *)(v3 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "simulateDrop",
          1046);
        v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v34,
               (const char (*)[37])"[BLESSING] simulateOneDay failed, d:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v34);
        v2 = -1;
        goto LABEL_35;
      }
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "simulateDrop",
        1049);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v34,
             (const char (*)[34])"[BLESSING] simulate day succ, d: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v3 + 80);
    M_node = std::map<unsigned int,unsigned int>::end(&this->pic_num_map_)._M_node;
    v11._M_node = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_)._M_node;
    *(std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *)(v3 + 48) = std::max_element_std::_Rb_tree_iterator_std::pair_unsigned_int_const_unsigned_int____BlessingActivity::simulateDrop_uint32_t_::_lambda_auto_23__auto_24_____(
                                                                                          v11,
                                                                                          (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >)M_node,
                                                                                          v12);
    lack_num = 0;
    __for_range = &this->pic_num_map_;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v30 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,unsigned int>(v30);
      num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v30);
      if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( total_redeem_count > *num )
        lack_num += total_redeem_count - *num;
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->pic_num_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 48),
           &__for_end) )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/blessing_activity.cpp",
        "simulateDrop",
        1066);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v34,
        (const char (*)[23])"[BLESSING] max is none");
      common::milog::MiLogStream::~MiLogStream(&v34);
      v2 = -1;
      v13 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/activity/blessing_activity.cpp",
        "simulateDrop",
        1069);
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v14 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v14->second >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      second = v14->second;
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(&v34, "SIMULATE_BLESSING|%u|%u", v16->first, second);
      common::milog::MiLogStream::~MiLogStream(&v34);
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/activity/blessing_activity.cpp",
        "simulateDrop",
        1070);
      common::milog::MiLogStream::operator()(&v34, "SIMULATE_LACK|%u", lack_num);
      common::milog::MiLogStream::~MiLogStream(&v34);
      __for_range_0 = &this->pic_num_map_;
      __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_)._M_node;
      __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
        pic_id = std::get<0ul,unsigned int const,unsigned int>(__in);
        v17 = std::get<1ul,unsigned int const,unsigned int>(__in);
        num_0 = v17;
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v17);
        }
        *num_0 = 0;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->total_unfulfilled_num_);
      }
      this->total_unfulfilled_num_ = 0;
      std::set<unsigned int>::clear(&this->pic_drop_record_);
      v13 = 1;
    }
    std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v3 + 80);
    if ( v13 != 1 )
      goto LABEL_35;
  }
  v2 = 0;
LABEL_35:
  result = v2;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1052: range 00000000179E6810-00000000179E68AF
bool __cdecl BlessingActivity::simulateDrop::_lambda_auto_23___auto_24___::operator()_std::pair_unsigned_int_const_unsigned_int__std::pair_unsigned_int_const_unsigned_int___(
        const BlessingActivity::simulateDrop::<lambda(auto:23&, auto:24&)> *const __closure,
        std::pair<unsigned int const,unsigned int> *lsh,
        std::pair<unsigned int const,unsigned int> *rsh)
{
  unsigned int second; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&lsh->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)lsh + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&lsh->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  second = lsh->second;
  if ( *(_BYTE *)(((unsigned __int64)&rsh->second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)rsh + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&rsh->second >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return second > rsh->second;
};

// Line 1083: range 000000001793FC66-00000000179402F9
__int64 __fastcall BlessingActivity::simulateOneDay(BlessingActivity *const this, uint32_t day_index)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  uint32_t v5; // ecx
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t type_id; // ecx
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  std::vector<unsigned int>::const_reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  uint32_t i; // [rsp+10h] [rbp-E0h]
  uint32_t r; // [rsp+14h] [rbp-DCh]
  ActivityBlessingExcelConfigMgr *config_mgr; // [rsp+18h] [rbp-D8h]
  const data::BlessingScanTypeExcelConfig *scan_type_config_ptr; // [rsp+20h] [rbp-D0h]
  const std::map<unsigned int,std::vector<unsigned int>>::mapped_type *scan_id_vec; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 scan_id:1111 64 4 14 day_index:1082";
  *(_QWORD *)(v2 + 16) = BlessingActivity::simulateOneDay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = day_index;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.activity_blessing_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_day_scan_num_);
  }
  this->cur_day_scan_num_ = 0;
  std::map<unsigned int,std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>>::clear(&this->cur_day_scanned_entity_map_);
  v5 = *(_DWORD *)(v2 + 64);
  if ( *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->day_index_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->day_index_);
  }
  this->day_index_ = v5;
  std::set<unsigned int>::clear(&this->pic_drop_record_);
  if ( *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->total_unfulfilled_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->total_unfulfilled_num_);
  }
  this->total_unfulfilled_num_ = 0;
  scan_type_config_ptr = ActivityBlessingExcelConfigMgr::findBlessingScanTypeConfigByDayIndex(
                           config_mgr,
                           *(_DWORD *)(v2 + 64));
  if ( scan_type_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&scan_type_config_ptr->type_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)scan_type_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&scan_type_config_ptr->type_id >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    type_id = scan_type_config_ptr->type_id;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_day_scan_type_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->cur_day_scan_type_id_);
    }
    this->cur_day_scan_type_id_ = type_id;
    scan_id_vec = std::map<unsigned int,std::vector<unsigned int>>::at(
                    &config_mgr->scan_type_id_scan_id_map,
                    &this->cur_day_scan_type_id_);
    for ( i = 0; ; ++i )
    {
      if ( *(_BYTE *)(((unsigned __int64)&scan_type_config_ptr->daily_scan_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&scan_type_config_ptr->daily_scan_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( i >= scan_type_config_ptr->daily_scan_limit )
        break;
      if ( std::vector<unsigned int>::empty(scan_id_vec) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "simulateOneDay",
          1103);
        v9 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
               &v19,
               (const char (*)[42])"[BLESSING] scan_id_vec is empty, type_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->cur_day_scan_type_id_);
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0xFFFFFFFFLL;
        goto LABEL_30;
      }
      v10 = std::vector<unsigned int>::size(scan_id_vec);
      r = common::tools::RandomUtils::rand<unsigned int>(0, v10 - 1);
      if ( r >= std::vector<unsigned int>::size(scan_id_vec) )
      {
        result = 0xFFFFFFFFLL;
        goto LABEL_30;
      }
      v11 = std::vector<unsigned int>::operator[](scan_id_vec, r);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *v11;
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/blessing_activity.cpp",
        "simulateOneDay",
        1112);
      v12 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v19,
              (const char (*)[29])"[BLESSING] simulate scan_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v19);
      if ( (unsigned int)BlessingActivity::scanEntityByGm(this, *(_DWORD *)(v2 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/blessing_activity.cpp",
          "simulateOneDay",
          1115);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          &v19,
          (const char (*)[33])"[BLESSING] scanEntityByGm failed");
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0xFFFFFFFFLL;
        goto LABEL_30;
      }
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/blessing_activity.cpp",
      "simulateOneDay",
      1094);
    v6 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v19,
           (const char (*)[57])"[BLESSING] scan type excel config not found, day_index_:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0xFFFFFFFFLL;
  }
LABEL_30:
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

// Line 1124: range 00000000179402FA-0000000017940468
int32_t __cdecl BlessingActivity::generateAllPicByGm(BlessingActivity *const this, uint32_t count)
{
  common::milog::MiLogStream *v2; // rax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->pic_num_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->pic_num_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->pic_num_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,unsigned int>(__in);
    num = std::get<1ul,unsigned int const,unsigned int>(__in);
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *num += count;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/blessing_activity.cpp",
    "generateAllPicByGm",
    1129);
  v2 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v10,
         (const char (*)[45])"[BLESSING] generateAllPicByGm, pic_num_pic_:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v2, &this->pic_num_map_);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 1134: range 000000001794046A-0000000017940F41
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl BlessingActivity::acceptAllGivePic(
        BlessingActivity *const this,
        proto::BlessingAcceptAllGivePicRsp *rsp_0)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  PlayerBasicComp *BasicComp; // rax
  bool *p_is_recv; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  _DWORD *v8; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rcx
  Player *v15; // r14
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v17; // rax
  int32_t v18; // r14d
  unsigned int v19; // r14d
  unsigned int *v20; // rdx
  SelectType v21; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v22; // rax
  SelectType *v23; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v24; // r14d
  unsigned int *v25; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v26; // rdx
  int32_t result; // eax
  std::string rsp_0a; // [rsp+0h] [rbp-190h] OVERLAPPED BYREF
  std::map<unsigned int,RecvPicRecord>::iterator __for_end; // [rsp+20h] [rbp-170h] BYREF
  std::map<unsigned int,RecvPicRecord> *__for_range; // [rsp+28h] [rbp-168h]
  google::protobuf::Map<unsigned int,unsigned int> *accept_num_map; // [rsp+30h] [rbp-160h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-158h]
  const std::pair<unsigned int const,unsigned int> *v33; // [rsp+40h] [rbp-150h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *pic_id; // [rsp+48h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+50h] [rbp-140h]
  std::pair<unsigned int const,RecvPicRecord> *__in; // [rsp+58h] [rbp-138h]
  std::tuple_element<0,std::pair<unsigned int const,RecvPicRecord> >::type *index; // [rsp+60h] [rbp-130h]
  std::tuple_element<1,std::pair<unsigned int const,RecvPicRecord> >::type *record; // [rsp+68h] [rbp-128h]
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+70h] [rbp-120h] BYREF
  std::string v40; // [rsp+80h] [rbp-110h] BYREF
  char v41[240]; // [rsp+A0h] [rbp-F0h] BYREF

  rsp_0a._M_string_length = (std::string::size_type)this;
  rsp_0a._M_dataplus._M_p = (std::string::pointer)rsp_0;
  v2 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 11 holder:1135 48 16 12 log_ptr:1152 80 16 14 event_ptr:1160 112 48 23 accept_pic_num_map:1136";
  *(_QWORD *)(v2 + 16) = BlessingActivity::acceptAllGivePic;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61953;
  v4[536862722] = 62194;
  v4[536862723] = 62194;
  v4[536862725] = -202116109;
  if ( *(_BYTE *)(((rsp_0a._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(*(Player *const *)(rsp_0a._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v40, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xC12u, rsp_0a);
  std::string::~string(&v40);
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
  __for_range = (std::map<unsigned int,RecvPicRecord> *)(rsp_0a._M_string_length + 1200);
  *((std::map<unsigned int,RecvPicRecord>::iterator *)&rsp_0a._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,RecvPicRecord>::begin((std::map<unsigned int,RecvPicRecord> *const)(rsp_0a._M_string_length + 1200));
  __for_end._M_node = std::map<unsigned int,RecvPicRecord>::end((std::map<unsigned int,RecvPicRecord> *const)(rsp_0a._M_string_length + 1200))._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> >::_Self *)&rsp_0a._anon_0._M_allocated_capacity
          + 1,
            &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator*(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)&rsp_0a._anon_0._M_allocated_capacity
           + 1);
    index = std::get<0ul,unsigned int const,RecvPicRecord>(__in);
    record = std::get<1ul,unsigned int const,RecvPicRecord>(__in);
    p_is_recv = &record->is_recv;
    if ( *(_BYTE *)(((unsigned __int64)p_is_recv >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_recv & 7) >= *(_BYTE *)(((unsigned __int64)p_is_recv >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_recv);
    }
    if ( !record->is_recv )
    {
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
              (std::map<unsigned int,unsigned int> *)(v2 + 112),
              &record->pic_id) )
      {
        v7 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v2 + 112),
               &record->pic_id);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v7);
        }
        *v8 = 1;
      }
      else
      {
        v9 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v2 + 112),
               &record->pic_id);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v9;
      }
      if ( *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)index & 7) + 3) >= *(_BYTE *)(((unsigned __int64)index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::BlessingAcceptAllGivePicRsp::add_accept_index_list(
        (proto::BlessingAcceptAllGivePicRsp *const)rsp_0a._M_dataplus._M_p,
        *index);
      if ( *(_BYTE *)(((unsigned __int64)&record->is_recv >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)record + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&record->is_recv >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&record->is_recv);
      }
      record->is_recv = 1;
      common::tools::perf::make_shared<proto_log::PlayerLogBodyBlessingPicNumChange>();
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((rsp_0a._M_string_length + 1024) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((rsp_0a._M_string_length + 1024) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyBlessingPicNumChange::set_day_index(v10, *(_DWORD *)(rsp_0a._M_string_length + 1024));
      v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&record->pic_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->pic_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyBlessingPicNumChange::set_pic_id(v11, record->pic_id);
      v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      proto_log::PlayerLogBodyBlessingPicNumChange::set_delta_num(v12, 1);
      v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      proto_log::PlayerLogBodyBlessingPicNumChange::set_reason(v13, 2u);
      v14 = std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBlessingPicNumChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyBlessingPicNumChange::set_interact_uid(v14, record->uid);
      if ( *(_BYTE *)(((rsp_0a._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = *(Player **)(rsp_0a._M_string_length + 24);
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v2 + 80),
        (const std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *)(v2 + 48));
      Player::printStatLog(v15, (MessagePtr *)(v2 + 80), &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 80));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      rsp_0a._anon_0._M_local_buf[7] = 0;
      common::tools::perf::make_shared<BlessingExchangePicEvent,unsigned int &,bool>(
        (unsigned int *)(v2 + 80),
        (bool *)&record->pic_id,
        (unsigned int *)((char *)&rsp_0a._anon_0._M_allocated_capacity + 7),
        (bool *)&record->pic_id);
      if ( *(_BYTE *)(((rsp_0a._M_string_length + 24) >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(*(Player *const *)(rsp_0a._M_string_length + 24));
      std::shared_ptr<BaseEvent>::shared_ptr<BlessingExchangePicEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr,
        (const std::shared_ptr<BlessingExchangePicEvent> *)(v2 + 80));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&p_body_ext_ptr);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&p_body_ext_ptr);
      std::shared_ptr<BlessingExchangePicEvent>::~shared_ptr((std::shared_ptr<BlessingExchangePicEvent> *const)(v2 + 80));
      std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBlessingPicNumChange> *const)(v2 + 48));
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord>>::operator++(
      (std::_Rb_tree_iterator<std::pair<unsigned int const,RecvPicRecord> > *const)&rsp_0a._anon_0._M_allocated_capacity
    + 1);
  }
  accept_num_map = proto::BlessingAcceptAllGivePicRsp::mutable_accept_pic_num_map((proto::BlessingAcceptAllGivePicRsp *const)rsp_0a._M_dataplus._M_p);
  __for_range_0 = (std::map<unsigned int,unsigned int> *)(v2 + 112);
  *((std::map<unsigned int,unsigned int>::iterator *)&rsp_0a._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v2 + 112));
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&rsp_0a._anon_0._M_allocated_capacity
          + 1,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v33 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&rsp_0a._anon_0._M_allocated_capacity
          + 1);
    pic_id = std::get<0ul,unsigned int const,unsigned int>(v33);
    num = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v33);
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,unsigned int>,unsigned int>(
            (std::map<unsigned int,unsigned int> *)(rsp_0a._M_string_length + 1088),
            pic_id) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v40,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/blessing_activity.cpp",
        "acceptAllGivePic",
        1170);
      v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)&v40,
              (const char (*)[35])"[BLESSING] pic_id invalid, pic_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, pic_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v40);
      v18 = -1;
      goto LABEL_50;
    }
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v19 = *num;
    v20 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(rsp_0a._M_string_length + 1088),
            pic_id);
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v21 = SAFE_ADD<unsigned int,unsigned int>(*v20, v19);
    v22 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(rsp_0a._M_string_length + 1088),
            pic_id);
    v23 = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v22);
    }
    *v23 = v21;
    if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v24 = *num;
    v25 = google::protobuf::Map<unsigned int,unsigned int>::operator[](accept_num_map, pic_id);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v25);
    }
    *v26 = v24;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(
      (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&rsp_0a._anon_0._M_allocated_capacity
    + 1);
  }
  v18 = 0;
LABEL_50:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v2 + 112));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  result = v18;
  if ( v41 == (char *)v2 )
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
  return result;
};

// Line 1180: range 0000000017940F42-0000000017940FC7
uint32_t __cdecl BlessingActivity::getNextStartTime(BlessingActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t time_offset; // [rsp+14h] [rbp-1Ch]
  uint32_t now; // [rsp+18h] [rbp-18h]
  uint32_t now_day; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  now = common::tools::TimeUtils::getNow();
  now_day = common::tools::TimeUtils::getTimeDay(now, time_offset);
  return common::tools::TimeUtils::getDailyStartTime(now_day + 1, time_offset);
};
