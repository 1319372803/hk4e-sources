// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/base_activity.cpp

// Line 52: range 00000000137AA8DC-00000000137AAC1F
std::string *__cdecl BaseActivity::getDesc[abi:cxx11](std::string *retstr, const BaseActivity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // r14
  unsigned int Uid; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v15; // rax
  char v17[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:53";
  *(_QWORD *)(v2 + 16) = BaseActivity::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "<activity_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->activity_id_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " schedule_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->schedule_id_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " started:");
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, this->is_started_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, " settled:");
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_settled_);
  }
  v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, this->is_settled_);
  v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, " uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v15 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, Uid);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v15, "> ");
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 64: range 00000000137AAC20-00000000137AACAC
int32_t __cdecl ActivityRecvGiftData::fromBin(
        ActivityRecvGiftData *const this,
        const proto::ActivityRecvGiftBin *bin_data)
{
  uint32_t v2; // edx
  const google::protobuf::Map<unsigned int,unsigned int> *v3; // rax

  v2 = proto::ActivityRecvGiftBin::uid(bin_data);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->uid = v2;
  std::map<unsigned int,unsigned int>::clear(&this->gift_num_map);
  v3 = proto::ActivityRecvGiftBin::gift_num_map(bin_data);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->gift_num_map,
    v3);
  return 0;
};

// Line 72: range 00000000137AACAE-00000000137AAD29
int32_t __cdecl ActivityRecvGiftData::toBin(
        const ActivityRecvGiftData *const this,
        proto::ActivityRecvGiftBin *bin_data)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityRecvGiftBin::set_uid(bin_data, this->uid);
  v2 = proto::ActivityRecvGiftBin::mutable_gift_num_map(bin_data);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->gift_num_map,
    v2);
  return 0;
};

// Line 79: range 00000000137AAD2A-00000000137AAFA2
int32_t __cdecl ActivityGiftData::fromBin(ActivityGiftData *const this, const proto::ActivityGiftDataBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  const google::protobuf::Map<unsigned int,unsigned int> *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  ActivityRecvGiftData *v7; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::ActivityRecvGiftBin>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  google::protobuf::RepeatedPtrField<proto::ActivityRecvGiftBin>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ActivityRecvGiftBin> *__for_range; // [rsp+20h] [rbp-90h]
  const proto::ActivityRecvGiftBin *bin_recv_gift_data; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-80h] BYREF
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 friend_uid:85";
  *(_QWORD *)(v2 + 16) = ActivityGiftData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::map<unsigned int,unsigned int>::clear(&this->wish_gift_num_map);
  v5 = proto::ActivityGiftDataBin::wish_gift_num_map(bin);
  common::tools::MiscUtils::fromProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->wish_gift_num_map,
    v5);
  std::map<unsigned int,ActivityRecvGiftData>::clear(&this->recv_gift_data_map);
  __for_range = proto::ActivityGiftDataBin::recv_gift_data_list(bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::ActivityRecvGiftBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::ActivityRecvGiftBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ActivityRecvGiftBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    bin_recv_gift_data = google::protobuf::internal::RepeatedPtrIterator<proto::ActivityRecvGiftBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::ActivityRecvGiftBin::uid(bin_recv_gift_data);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,ActivityRecvGiftData>,unsigned int>(
           &this->recv_gift_data_map,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "fromBin",
        88);
      v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             &v13,
             (const char (*)[23])"duplicate friend uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v7 = std::map<unsigned int,ActivityRecvGiftData>::operator[](
             &this->recv_gift_data_map,
             (const std::map<unsigned int,ActivityRecvGiftData>::key_type *)(v2 + 32));
      ActivityRecvGiftData::fromBin(v7, bin_recv_gift_data);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ActivityRecvGiftBin const>::operator++(&__for_begin);
  }
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

// Line 97: range 00000000137AAFA4-00000000137AB0CE
int32_t __cdecl ActivityGiftData::toBin(const ActivityGiftData *const this, proto::ActivityGiftDataBin *bin)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rdx
  std::map<unsigned int,ActivityRecvGiftData>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,ActivityRecvGiftData>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::map<unsigned int,ActivityRecvGiftData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,ActivityRecvGiftData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ActivityRecvGiftData> >::type *uid; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ActivityRecvGiftData> >::type *recv_gift_data; // [rsp+40h] [rbp-10h]
  proto::ActivityRecvGiftBin *bin_recv_gift_data; // [rsp+48h] [rbp-8h]

  v2 = proto::ActivityGiftDataBin::mutable_wish_gift_num_map(bin);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->wish_gift_num_map,
    v2);
  __for_range = &this->recv_gift_data_map;
  __for_begin._M_node = std::map<unsigned int,ActivityRecvGiftData>::begin(&this->recv_gift_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ActivityRecvGiftData>::end(&this->recv_gift_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityRecvGiftData>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,ActivityRecvGiftData>(v7);
    recv_gift_data = (std::tuple_element<1,const std::pair<unsigned int const,ActivityRecvGiftData> >::type *)std::get<1ul,unsigned int const,ActivityRecvGiftData>(v7);
    bin_recv_gift_data = proto::ActivityGiftDataBin::add_recv_gift_data_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ActivityRecvGiftBin::set_uid(bin_recv_gift_data, *uid);
    ActivityRecvGiftData::toBin(recv_gift_data, bin_recv_gift_data);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityRecvGiftData>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 109: range 00000000137AB0D0-00000000137AB104
int32_t __cdecl ActivityGiftData::toClient(const ActivityGiftData *const this, proto::ActivityInfo *activity_info)
{
  google::protobuf::Map<unsigned int,unsigned int> *v2; // rdx

  v2 = proto::ActivityInfo::mutable_wish_gift_num_map(activity_info);
  common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
    &this->wish_gift_num_map,
    v2);
  return 0;
};

// Line 115: range 00000000137AB106-00000000137AC2E1
int32_t __cdecl BaseActivity::toBin(BaseActivity *const this, proto::ActivityBin *activity_bin)
{
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *v2; // rax
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type v3; // bl
  bool *v4; // rax
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *v5; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v6; // ebx
  unsigned int *v7; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v8; // rdx
  uint32_t *v9; // rdx
  uint32_t *v10; // rdx
  uint32_t *v11; // rdx
  uint32_t *v12; // rdx
  uint32_t *v13; // rdx
  google::protobuf::RepeatedField<unsigned int> *v14; // rax
  unsigned __int64 v15; // rax
  common::milog::MiLogStream *v16; // rbx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v19; // rbx
  common::milog::MiLogStream *v20; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v21; // ebx
  unsigned int *v22; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v23; // rdx
  unsigned int val; // [rsp+18h] [rbp-148h] BYREF
  uint32_t sale_id; // [rsp+1Ch] [rbp-144h]
  uint32_t watcher_id_0; // [rsp+20h] [rbp-140h]
  uint32_t watcher_id; // [rsp+24h] [rbp-13Ch]
  uint32_t cond_id_1; // [rsp+28h] [rbp-138h]
  uint32_t cond_id_0; // [rsp+2Ch] [rbp-134h]
  std::map<unsigned int,bool>::iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::map<unsigned int,bool>::iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  google::protobuf::Map<unsigned int,bool> *mutable_cond_state_map; // [rsp+40h] [rbp-120h]
  std::map<unsigned int,bool> *__for_range; // [rsp+48h] [rbp-118h]
  google::protobuf::Map<unsigned int,unsigned int> *mutable_quest_content_map; // [rsp+50h] [rbp-110h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+58h] [rbp-108h]
  std::set<unsigned int> *__for_range_1; // [rsp+60h] [rbp-100h]
  std::set<unsigned int> *__for_range_2; // [rsp+68h] [rbp-F8h]
  std::set<unsigned int> *__for_range_3; // [rsp+70h] [rbp-F0h]
  std::set<unsigned int> *__for_range_4; // [rsp+78h] [rbp-E8h]
  std::set<unsigned int> *__for_range_5; // [rsp+80h] [rbp-E0h]
  std::set<std::pair<unsigned int,unsigned int>> *__for_range_6; // [rsp+88h] [rbp-D8h]
  proto::ActivityScheduleBin *schedule_bin; // [rsp+90h] [rbp-D0h]
  proto::ActivityGiftDataBin *gift_data_bin; // [rsp+98h] [rbp-C8h]
  google::protobuf::Map<unsigned int,unsigned int> *mutable_activity_push_tips_map; // [rsp+A0h] [rbp-C0h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_7; // [rsp+A8h] [rbp-B8h]
  std::map<proto::VirtualItem,unsigned int> *__for_range_8; // [rsp+B0h] [rbp-B0h]
  const std::pair<const proto::VirtualItem,unsigned int> *v47; // [rsp+B8h] [rbp-A8h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+C0h] [rbp-A0h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+C8h] [rbp-98h]
  proto::ActivityGeneralCoinBin *coin_bin; // [rsp+D0h] [rbp-90h]
  const std::pair<unsigned int const,unsigned int> *v51; // [rsp+D8h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *key_0; // [rsp+E0h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *value_0; // [rsp+E8h] [rbp-78h]
  const std::pair<unsigned int,unsigned int> *point_pair; // [rsp+F0h] [rbp-70h]
  proto::Uint32Pair *notify_pair; // [rsp+F8h] [rbp-68h]
  std::pair<unsigned int const,unsigned int> *v56; // [rsp+100h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *key; // [rsp+108h] [rbp-58h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *value; // [rsp+110h] [rbp-50h]
  std::pair<unsigned int const,bool> *__in; // [rsp+118h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,bool> >::type *cond_id; // [rsp+120h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,bool> >::type *is_open; // [rsp+128h] [rbp-38h]
  common::milog::MiLogStream v62; // [rsp+130h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityBin::set_schedule_id(activity_bin, this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_settled_);
  }
  proto::ActivityBin::set_is_settled(activity_bin, this->is_settled_);
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  proto::ActivityBin::set_is_started(activity_bin, this->is_started_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_play_open_anim_);
  }
  proto::ActivityBin::set_is_play_open_anim(activity_bin, this->is_play_open_anim_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_banner_cleared_);
  }
  proto::ActivityBin::set_is_banner_cleared(activity_bin, this->is_banner_cleared_);
  if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_quick_open_);
  proto::ActivityBin::set_is_quick_open(activity_bin, this->is_quick_open_);
  mutable_cond_state_map = proto::ActivityBin::mutable_cond_state_map(activity_bin);
  __for_range = &this->cond_state_map_;
  __for_begin._M_node = std::map<unsigned int,bool>::begin(&this->cond_state_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,bool>::end(&this->cond_state_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator*(&__for_begin);
    cond_id = std::get<0ul,unsigned int const,bool>(__in);
    v2 = std::get<1ul,unsigned int const,bool>(__in);
    is_open = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v2 & 7) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v2);
    }
    v3 = *is_open;
    v4 = google::protobuf::Map<unsigned int,bool>::operator[](mutable_cond_state_map, cond_id);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v4 & 7) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v4);
    }
    *v5 = v3;
    std::_Rb_tree_iterator<std::pair<unsigned int const,bool>>::operator++(&__for_begin);
  }
  mutable_quest_content_map = proto::ActivityBin::mutable_quest_content_map(activity_bin);
  __for_range_0 = &this->quest_content_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->quest_content_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    key = std::get<0ul,unsigned int const,unsigned int>(v56);
    value = std::get<1ul,unsigned int const,unsigned int>(v56);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v6 = *value;
    v7 = google::protobuf::Map<unsigned int,unsigned int>::operator[](mutable_quest_content_map, key);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v7);
    }
    *v8 = v6;
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  __for_range_1 = &this->meet_cond_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::begin(&this->meet_cond_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::end(__for_range_1)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v9 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cond_id_0 = *v9;
    proto::ActivityBin::add_meet_cond_list(activity_bin, cond_id_0);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_2 = &this->expired_cond_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::begin(&this->expired_cond_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v10 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cond_id_1 = *v10;
    proto::ActivityBin::add_expired_cond_list(activity_bin, cond_id_1);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_3 = &this->taken_watcher_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::begin(&this->taken_watcher_id_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v11 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    watcher_id = *v11;
    proto::ActivityBin::add_taken_watcher_id_list(activity_bin, watcher_id);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_4 = &this->finished_watcher_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::begin(&this->finished_watcher_id_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::end(__for_range_4)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v12 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    watcher_id_0 = *v12;
    proto::ActivityBin::add_finished_watcher_id_list(activity_bin, watcher_id_0);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  __for_range_5 = &this->activated_activity_sale_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::begin(&this->activated_activity_sale_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<unsigned int>::end(__for_range_5)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v13 = (uint32_t *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    sale_id = *v13;
    proto::ActivityBin::add_activated_activity_sale_list(activity_bin, sale_id);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityBin::set_selected_avatar_reward_id(activity_bin, this->selected_avatar_reward_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityBin::set_score_limit(activity_bin, this->score_limit_);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityBin::set_cur_score(activity_bin, this->cur_score_);
  v14 = proto::ActivityBin::mutable_taken_score_reward_list(activity_bin);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->taken_score_reward_vec_, v14);
  if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_notify_mail_sent_);
  proto::ActivityBin::set_is_notify_mail_sent(activity_bin, this->is_notify_mail_sent_);
  __for_range_6 = &this->disable_transfer_point_interaction_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<std::pair<unsigned int,unsigned int>>::begin(&this->disable_transfer_point_interaction_set_)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::set<std::pair<unsigned int,unsigned int>>::end(__for_range_6)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)&__for_end) )
  {
    point_pair = std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)&__for_begin);
    notify_pair = proto::ActivityBin::add_disable_transfer_point_interaction_list(activity_bin);
    if ( *(_BYTE *)(((unsigned __int64)point_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)point_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_pair >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Uint32Pair::set_key(notify_pair, point_pair->first);
    if ( *(_BYTE *)(((unsigned __int64)&point_pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)point_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_pair->second >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Uint32Pair::set_value(notify_pair, point_pair->second);
    std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityBin::set_start_world_level(activity_bin, this->start_world_level_limit_);
  schedule_bin = proto::ActivityBin::mutable_schedule_bin(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v15 = (unsigned __int64)(this->_vptr_DescribalBase + 4);
  if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
    v15 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(BaseActivity *const, proto::ActivityScheduleBin *))v15)(this, schedule_bin) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "toBin",
      171);
    v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v62, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v17, (const char (*)[21])" toScheduleBin fails");
    common::milog::MiLogStream::~MiLogStream(&v62);
    return -1;
  }
  else
  {
    gift_data_bin = proto::ActivityBin::mutable_gift_data_bin(activity_bin);
    if ( ActivityGiftData::toBin(&this->gift_data_, gift_data_bin) )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "toBin",
        177);
      v19 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v62, (const char (*)[6])"uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v20, (const char (*)[13])" toBin fails");
      common::milog::MiLogStream::~MiLogStream(&v62);
      return -1;
    }
    else
    {
      mutable_activity_push_tips_map = proto::ActivityBin::mutable_activity_push_tips_map(activity_bin);
      __for_range_7 = &this->activity_push_tips_map_;
      __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::begin(&this->activity_push_tips_map_)._M_cur;
      __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,bool> >::_Base_ptr)std::unordered_map<unsigned int,unsigned int>::end(__for_range_7)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_end) )
      {
        v51 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
        key_0 = std::get<0ul,unsigned int const,unsigned int>(v51);
        value_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v51);
        if ( *(_BYTE *)(((unsigned __int64)value_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)value_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v21 = *value_0;
        v22 = google::protobuf::Map<unsigned int,unsigned int>::operator[](mutable_activity_push_tips_map, key_0);
        v23 = v22;
        if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v22);
        }
        *v23 = v21;
        std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)&__for_begin);
      }
      __for_range_8 = &this->activity_general_coin_map_;
      __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_general_coin_map_)._M_node;
      __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(__for_range_8)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)&__for_end) )
      {
        v47 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)&__for_begin);
        coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v47);
        coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v47);
        coin_bin = proto::ActivityBin::add_activity_general_coin_list(activity_bin);
        if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ActivityGeneralCoinBin::set_coin_type(coin_bin, *coin_type);
        if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::ActivityGeneralCoinBin::set_coin_num(coin_bin, *coin_num);
        std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)&__for_begin);
      }
      if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_common_content_closed_);
      proto::ActivityBin::set_is_common_content_closed(activity_bin, this->is_common_content_closed_);
      return 0;
    }
  }
};

// Line 198: range 00000000137AC2E2-00000000137AD869
int32_t __cdecl BaseActivity::fromBin(BaseActivity *const this, const proto::ActivityBin *activity_bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // ecx
  uint32_t ActivityIdByScheduleId; // edx
  bool is_settled; // cl
  bool is_started; // dl
  bool is_play_open_anim; // cl
  bool is_banner_cleared; // cl
  bool is_quick_open; // dl
  unsigned __int64 v12; // rax
  char v13; // r14
  std::map<unsigned int,bool>::mapped_type *v14; // rax
  _BYTE *v15; // rdx
  unsigned int v16; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  unsigned int *v18; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  std::map<unsigned int,std::set<unsigned int>> *p_activated_activity_sale_map; // rcx
  uint32_t v23; // edx
  uint32_t v24; // ecx
  uint32_t v25; // edx
  const google::protobuf::RepeatedField<unsigned int> *v26; // rax
  bool is_notify_mail_sent; // dl
  uint32_t started; // ecx
  unsigned __int64 v29; // rax
  unsigned int (__fastcall *v30)(BaseActivity *const, const proto::ActivityScheduleBin *); // r14
  const proto::ActivityScheduleBin *v31; // rdx
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  const proto::ActivityGiftDataBin *v34; // rax
  unsigned int v35; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v36; // rax
  unsigned int *v37; // rdx
  common::milog::MiLogStream *v38; // rax
  google::protobuf::uint32 v39; // r14d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v40; // rax
  google::protobuf::uint32 *v41; // rdx
  bool is_common_content_closed; // dl
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  google::protobuf::RepeatedPtrField<proto::Uint32Pair>::const_iterator __for_begin_5; // [rsp+18h] [rbp-1F8h] BYREF
  google::protobuf::RepeatedPtrField<proto::ActivityGeneralCoinBin>::const_iterator __for_begin_6; // [rsp+20h] [rbp-1F0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-1E8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_1; // [rsp+30h] [rbp-1E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_2; // [rsp+38h] [rbp-1D8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_3; // [rsp+40h] [rbp-1D0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_4; // [rsp+48h] [rbp-1C8h]
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+50h] [rbp-1C0h]
  const google::protobuf::Map<unsigned int,bool> *__for_range; // [rsp+58h] [rbp-1B8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-1B0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_1; // [rsp+68h] [rbp-1A8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+70h] [rbp-1A0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_2; // [rsp+78h] [rbp-198h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_1; // [rsp+80h] [rbp-190h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_3; // [rsp+88h] [rbp-188h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_2; // [rsp+90h] [rbp-180h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_4; // [rsp+98h] [rbp-178h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_3; // [rsp+A0h] [rbp-170h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_5; // [rsp+A8h] [rbp-168h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_4; // [rsp+B0h] [rbp-160h]
  const data::NewActivitySaleExcelConfig *sale_config_ptr; // [rsp+B8h] [rbp-158h]
  std::set<unsigned int> *sale_id_set; // [rsp+C0h] [rbp-150h]
  const google::protobuf::RepeatedPtrField<proto::Uint32Pair> *__for_range_6; // [rsp+C8h] [rbp-148h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_7; // [rsp+D0h] [rbp-140h]
  const google::protobuf::RepeatedPtrField<proto::ActivityGeneralCoinBin> *__for_range_8; // [rsp+D8h] [rbp-138h]
  const proto::ActivityGeneralCoinBin *coin_bin; // [rsp+E0h] [rbp-130h]
  const unsigned int *p_key_0; // [rsp+E8h] [rbp-128h]
  const proto::Uint32Pair *bin_pair; // [rsp+F0h] [rbp-120h]
  const unsigned int *p_key; // [rsp+F8h] [rbp-118h]
  const unsigned int *p_cond_id; // [rsp+100h] [rbp-110h]
  google::protobuf::RepeatedPtrField<proto::ActivityGeneralCoinBin>::const_iterator __for_end_5; // [rsp+108h] [rbp-108h] BYREF
  std::shared_ptr<Config> v77; // [rsp+110h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,bool>::const_iterator __for_begin; // [rsp+120h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,bool>::const_iterator __for_end; // [rsp+140h] [rbp-D0h] BYREF
  common::milog::MiLogStream v80; // [rsp+160h] [rbp-B0h] BYREF
  char v81[144]; // [rsp+180h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v81;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 coin_type:290 64 4 11 cond_id:221";
  *(_QWORD *)(v2 + 16) = BaseActivity::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v77);
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77)->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v77);
  v5 = proto::ActivityBin::schedule_id(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id_);
  }
  this->schedule_id_ = v5;
  ActivityIdByScheduleId = NewActivityExcelConfigMgr::getActivityIdByScheduleId(conf_mgr, this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->activity_id_);
  }
  this->activity_id_ = ActivityIdByScheduleId;
  is_settled = proto::ActivityBin::is_settled(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_settled_);
  }
  this->is_settled_ = is_settled;
  is_started = proto::ActivityBin::is_started(activity_bin);
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_);
  this->is_started_ = is_started;
  is_play_open_anim = proto::ActivityBin::is_play_open_anim(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_play_open_anim_);
  }
  this->is_play_open_anim_ = is_play_open_anim;
  is_banner_cleared = proto::ActivityBin::is_banner_cleared(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_banner_cleared_);
  }
  this->is_banner_cleared_ = is_banner_cleared;
  is_quick_open = proto::ActivityBin::is_quick_open(activity_bin);
  if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_quick_open_);
  this->is_quick_open_ = is_quick_open;
  std::map<unsigned int,bool>::clear(&this->cond_state_map_);
  __for_range = proto::ActivityBin::cond_state_map(activity_bin);
  google::protobuf::Map<unsigned int,bool>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,bool>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_cond_id = (const unsigned int *)google::protobuf::Map<unsigned int,bool>::const_iterator::operator*(&__for_begin);
    v12 = (unsigned __int64)(p_cond_id + 1);
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) != 0 && (char)(v12 & 7) >= *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      __asan_report_load1(v12);
    v13 = *((_BYTE *)p_cond_id + 4);
    v14 = std::map<unsigned int,bool>::operator[](&this->cond_state_map_, p_cond_id);
    v15 = v14;
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v14 & 7) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v14);
    }
    *v15 = v13;
    google::protobuf::Map<unsigned int,bool>::const_iterator::operator++(&__for_begin);
  }
  std::map<unsigned int,unsigned int>::clear(&this->quest_content_map_);
  __for_range_0 = proto::ActivityBin::quest_content_map(activity_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
    __for_range_0);
  google::protobuf::Map<unsigned int,unsigned int>::end(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end,
    __for_range_0);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end) )
  {
    p_key = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)(p_key + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_key + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_key + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v16 = p_key[1];
    v17 = std::map<unsigned int,unsigned int>::operator[](&this->quest_content_map_, p_key);
    v18 = v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v17);
    }
    *v18 = v16;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++((google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
  }
  std::set<unsigned int>::clear(&this->meet_cond_set_);
  __for_range_1 = proto::ActivityBin::meet_cond_list(activity_bin);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_1);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_1);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = *__for_begin_0;
    std::set<unsigned int>::emplace<unsigned int &>(
      &this->meet_cond_set_,
      (unsigned int *)(v2 + 64),
      (unsigned int *)&this->meet_cond_set_);
    ++__for_begin_0;
  }
  std::set<unsigned int>::clear(&this->expired_cond_set_);
  __for_range_2 = proto::ActivityBin::expired_cond_list(activity_bin);
  __for_begin_1 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_2);
  __for_end_1 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_2);
  while ( __for_begin_1 != __for_end_1 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_1 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = *__for_begin_1;
    std::set<unsigned int>::emplace<unsigned int &>(
      &this->expired_cond_set_,
      (unsigned int *)(v2 + 64),
      (unsigned int *)&this->expired_cond_set_);
    ++__for_begin_1;
  }
  std::set<unsigned int>::clear(&this->taken_watcher_id_set_);
  __for_range_3 = proto::ActivityBin::taken_watcher_id_list(activity_bin);
  __for_begin_2 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_3);
  __for_end_2 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_3);
  while ( __for_begin_2 != __for_end_2 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_2 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = *__for_begin_2;
    std::set<unsigned int>::insert(&this->taken_watcher_id_set_, (const std::set<unsigned int>::value_type *)(v2 + 64));
    ++__for_begin_2;
  }
  std::set<unsigned int>::clear(&this->finished_watcher_id_set_);
  __for_range_4 = proto::ActivityBin::finished_watcher_id_list(activity_bin);
  __for_begin_3 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_4);
  __for_end_3 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_4);
  while ( __for_begin_3 != __for_end_3 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_3 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = *__for_begin_3;
    std::set<unsigned int>::insert(
      &this->finished_watcher_id_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 64));
    ++__for_begin_3;
  }
  std::set<unsigned int>::clear(&this->activated_activity_sale_set_);
  std::map<unsigned int,std::set<unsigned int>>::clear(&this->activated_activity_sale_map_);
  __for_range_5 = proto::ActivityBin::activated_activity_sale_list(activity_bin);
  __for_begin_4 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_5);
  __for_end_4 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_5);
  while ( __for_begin_4 != __for_end_4 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_4 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *__for_begin_4;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v77);
    v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
    sale_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivitySaleExcelConfig(
                        &v19->design_config.txt_config_mgr.new_activity_config_mgr,
                        *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v77);
    if ( !sale_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "fromBin",
        251);
      v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v80,
              (const char (*)[37])"activity sale id not exist, sale_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v80);
      result = -1;
      goto LABEL_104;
    }
    p_activated_activity_sale_map = &this->activated_activity_sale_map_;
    if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->sale_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)sale_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sale_config_ptr->sale_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 64) = sale_config_ptr->sale_type;
    sale_id_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                    p_activated_activity_sale_map,
                    (std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 64));
    std::set<unsigned int>::insert(sale_id_set, (const std::set<unsigned int>::value_type *)(v2 + 48));
    std::set<unsigned int>::insert(
      &this->activated_activity_sale_set_,
      (const std::set<unsigned int>::value_type *)(v2 + 48));
    ++__for_begin_4;
  }
  v23 = proto::ActivityBin::selected_avatar_reward_id(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->selected_avatar_reward_id_);
  }
  this->selected_avatar_reward_id_ = v23;
  v24 = proto::ActivityBin::score_limit(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_limit_);
  }
  this->score_limit_ = v24;
  v25 = proto::ActivityBin::cur_score(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_score_);
  }
  this->cur_score_ = v25;
  v26 = proto::ActivityBin::taken_score_reward_list(activity_bin);
  common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v26, &this->taken_score_reward_vec_);
  is_notify_mail_sent = proto::ActivityBin::is_notify_mail_sent(activity_bin);
  if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_notify_mail_sent_);
  this->is_notify_mail_sent_ = is_notify_mail_sent;
  std::set<std::pair<unsigned int,unsigned int>>::clear(&this->disable_transfer_point_interaction_set_);
  __for_range_6 = proto::ActivityBin::disable_transfer_point_interaction_list(activity_bin);
  __for_begin_5.it_ = google::protobuf::RepeatedPtrField<proto::Uint32Pair>::begin(__for_range_6).it_;
  __for_begin_6.it_ = google::protobuf::RepeatedPtrField<proto::Uint32Pair>::end(__for_range_6).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::Uint32Pair const>::operator!=(
            &__for_begin_5,
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::Uint32Pair>::iterator *)&__for_begin_6) )
  {
    bin_pair = google::protobuf::internal::RepeatedPtrIterator<proto::Uint32Pair const>::operator*(&__for_begin_5);
    *(_DWORD *)(v2 + 64) = proto::Uint32Pair::value(bin_pair);
    *(_DWORD *)(v2 + 48) = proto::Uint32Pair::key(bin_pair);
    __for_end_5.it_ = (void *const *)std::make_pair<unsigned int,unsigned int>(
                                       (unsigned int *)(v2 + 48),
                                       (unsigned int *)(v2 + 64));
    std::set<std::pair<unsigned int,unsigned int>>::insert(
      &this->disable_transfer_point_interaction_set_,
      (std::set<std::pair<unsigned int,unsigned int>>::value_type *)&__for_end_5);
    google::protobuf::internal::RepeatedPtrIterator<proto::Uint32Pair const>::operator++(&__for_begin_5);
  }
  started = proto::ActivityBin::start_world_level(activity_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_world_level_limit_);
  }
  this->start_world_level_limit_ = started;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v29 = (unsigned __int64)(this->_vptr_DescribalBase + 3);
  if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
    v29 = __asan_report_load8();
  v30 = *(unsigned int (__fastcall **)(BaseActivity *const, const proto::ActivityScheduleBin *))v29;
  v31 = proto::ActivityBin::schedule_bin(activity_bin);
  if ( v30(this, v31) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "fromBin",
      274);
    v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v80, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_81:
    *(_DWORD *)(v2 + 64) = Player::getUid(this->player_);
    v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v33, (const char (*)[15])" fromBin fails");
    common::milog::MiLogStream::~MiLogStream(&v80);
    result = -1;
    goto LABEL_104;
  }
  v34 = proto::ActivityBin::gift_data_bin(activity_bin);
  if ( ActivityGiftData::fromBin(&this->gift_data_, v34) )
  {
    common::milog::MiLogStream::create(
      &v80,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "fromBin",
      279);
    v32 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v80, (const char (*)[6])"uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_81;
  }
  std::unordered_map<unsigned int,unsigned int>::clear(&this->activity_push_tips_map_);
  __for_range_7 = proto::ActivityBin::activity_push_tips_map(activity_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
    __for_range_7);
  google::protobuf::Map<unsigned int,unsigned int>::end(
    (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end,
    __for_range_7);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_begin,
            (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)&__for_end) )
  {
    p_key_0 = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*((const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)(p_key_0 + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_key_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_key_0 + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v35 = p_key_0[1];
    v36 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->activity_push_tips_map_, p_key_0);
    v37 = v36;
    if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v36);
    }
    *v37 = v35;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++((google::protobuf::Map<unsigned int,unsigned int>::const_iterator *const)&__for_begin);
  }
  std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_general_coin_map_);
  __for_range_8 = proto::ActivityBin::activity_general_coin_list(activity_bin);
  __for_begin_6.it_ = google::protobuf::RepeatedPtrField<proto::ActivityGeneralCoinBin>::begin(__for_range_8).it_;
  __for_end_5.it_ = google::protobuf::RepeatedPtrField<proto::ActivityGeneralCoinBin>::end(__for_range_8).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ActivityGeneralCoinBin const>::operator!=(
            &__for_begin_6,
            &__for_end_5) )
  {
    coin_bin = google::protobuf::internal::RepeatedPtrIterator<proto::ActivityGeneralCoinBin const>::operator*(&__for_begin_6);
    *(_DWORD *)(v2 + 48) = proto::ActivityGeneralCoinBin::coin_type(coin_bin);
    if ( !proto::VirtualItem_IsValid(*(_DWORD *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v80,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "fromBin",
        294);
      v38 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v80,
              (const char (*)[49])"coin_type is not a valid proto enum, coin_type: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v80);
    }
    else
    {
      v39 = proto::ActivityGeneralCoinBin::coin_num(coin_bin);
      *(_DWORD *)(v2 + 64) = *(_DWORD *)(v2 + 48);
      v40 = std::map<proto::VirtualItem,unsigned int>::operator[](
              &this->activity_general_coin_map_,
              (std::map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 64));
      v41 = v40;
      if ( *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v40 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v40 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v40);
      }
      *v41 = v39;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ActivityGeneralCoinBin const>::operator++(&__for_begin_6);
  }
  is_common_content_closed = proto::ActivityBin::is_common_content_closed(activity_bin);
  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_common_content_closed_);
  this->is_common_content_closed_ = is_common_content_closed;
  common::milog::MiLogStream::create(
    &v80,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/base_activity.cpp",
    "fromBin",
    300);
  v43 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(&v80, (const char (*)[14])"activity_id: ");
  v44 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &this->activity_id_);
  v45 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v44,
          (const char (*)[23])" fromBin schedule_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, &this->schedule_id_);
  common::milog::MiLogStream::~MiLogStream(&v80);
  result = 0;
LABEL_104:
  if ( v81 == (char *)v2 )
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

// Line 307: range 00000000137AD86A-00000000137AE499
int32_t __cdecl BaseActivity::toClient(BaseActivity *const this, proto::ActivityInfo *activity_info)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t ScheduleBeginTime; // edx
  NewActivityExcelConfigMgr *v4; // rcx
  uint32_t ScheduleEndTime; // edx
  NewActivityExcelConfigMgr *v6; // rcx
  google::protobuf::uint32 ActivitiyTypeByActivityId; // edx
  bool isFinished; // dl
  google::protobuf::RepeatedField<unsigned int> *v9; // rdx
  google::protobuf::RepeatedField<unsigned int> *v10; // rdx
  unsigned __int64 v11; // rax
  void (__fastcall *v12)(BaseActivity *const, google::protobuf::Map<unsigned int,unsigned int> *); // rbx
  google::protobuf::Map<unsigned int,unsigned int> *v13; // rdx
  google::protobuf::RepeatedField<unsigned int> *v14; // rax
  NewActivityExcelConfigMgr *v15; // rcx
  bool isActivityUiHidden; // dl
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(BaseActivity *const, google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *); // rbx
  google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *v19; // rdx
  NewActivityExcelConfigMgr *v20; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  time_t v22; // rdx
  google::protobuf::uint32 DailyStartTime; // edx
  google::protobuf::RepeatedPtrField<proto::ActivityPushTipsData> *v24; // rbx
  int v25; // eax
  common::milog::MiLogStream *v26; // rax
  uint32_t time_offset; // [rsp+18h] [rbp-88h]
  uint32_t schedule_begin_day; // [rsp+1Ch] [rbp-84h]
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-80h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-78h] BYREF
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+30h] [rbp-70h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  const std::pair<unsigned int const,unsigned int> *v34; // [rsp+40h] [rbp-60h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *activity_push_tips_id; // [rsp+48h] [rbp-58h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *state; // [rsp+50h] [rbp-50h]
  proto::ActivityPushTipsData *proto_activity_push_tips; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v38; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityInfo::set_activity_id(activity_info, this->activity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityInfo::set_schedule_id(activity_info, this->schedule_id_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ScheduleBeginTime = NewActivityExcelConfigMgr::getScheduleBeginTime(p_new_activity_config_mgr, this->schedule_id_);
  proto::ActivityInfo::set_begin_time(activity_info, ScheduleBeginTime);
  std::shared_ptr<Config>::~shared_ptr(&v38);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v4 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ScheduleEndTime = NewActivityExcelConfigMgr::getScheduleEndTime(v4, this->schedule_id_, 0);
  proto::ActivityInfo::set_end_time(activity_info, ScheduleEndTime);
  std::shared_ptr<Config>::~shared_ptr(&v38);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ActivitiyTypeByActivityId = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v6, this->activity_id_);
  proto::ActivityInfo::set_activity_type(activity_info, ActivitiyTypeByActivityId);
  std::shared_ptr<Config>::~shared_ptr(&v38);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_play_open_anim_);
  }
  proto::ActivityInfo::set_is_play_open_anim(activity_info, this->is_play_open_anim_);
  isFinished = BaseActivity::isFinished(this);
  proto::ActivityInfo::set_is_finished(activity_info, isFinished);
  v9 = proto::ActivityInfo::mutable_meet_cond_list(activity_info);
  BaseActivity::fillCondIdListProto(this, &this->meet_cond_set_, v9);
  v10 = proto::ActivityInfo::mutable_expire_cond_list(activity_info);
  BaseActivity::fillCondIdListProto(this, &this->expired_cond_set_, v10);
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityInfo::set_selected_avatar_reward_id(activity_info, this->selected_avatar_reward_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v11 = (unsigned __int64)(this->_vptr_DescribalBase + 9);
  if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
    v11 = __asan_report_load8();
  v12 = *(void (__fastcall **)(BaseActivity *const, google::protobuf::Map<unsigned int,unsigned int> *))v11;
  v13 = proto::ActivityInfo::mutable_activity_coin_map(activity_info);
  v12(this, v13);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityInfo::set_cur_score(activity_info, this->cur_score_);
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityInfo::set_score_limit(activity_info, this->score_limit_);
  v14 = proto::ActivityInfo::mutable_taken_reward_list(activity_info);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&this->taken_score_reward_vec_, v14);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  isActivityUiHidden = NewActivityExcelConfigMgr::isActivityUiHidden(v15, this->activity_id_);
  proto::ActivityInfo::set_is_hidden(activity_info, isActivityUiHidden);
  std::shared_ptr<Config>::~shared_ptr(&v38);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_banner_cleared_);
  }
  proto::ActivityInfo::set_is_banner_cleared(activity_info, this->is_banner_cleared_);
  if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_quick_open_);
  proto::ActivityInfo::set_is_quick_open(activity_info, this->is_quick_open_);
  if ( ActivityGiftData::toClient(&this->gift_data_, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "toClient",
      329);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v39,
      (const char (*)[25])"gift_data_.toClient fail");
    common::milog::MiLogStream::~MiLogStream(&v39);
  }
  if ( !BaseActivity::isFinished(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v17 = (unsigned __int64)(this->_vptr_DescribalBase + 8);
    if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8();
    v18 = *(void (__fastcall **)(BaseActivity *const, google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *))v17;
    v19 = proto::ActivityInfo::mutable_watcher_info_list(activity_info);
    v18(this, v19);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v38);
  v20 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(v20, this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v38);
  if ( schedule_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v21->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    v22 = time_offset;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    schedule_begin_day = common::tools::TimeUtils::getTimeDay(schedule_config_ptr->begin_time, v22);
    DailyStartTime = common::tools::TimeUtils::getDailyStartTime(schedule_begin_day, time_offset);
    proto::ActivityInfo::set_first_day_start_time(activity_info, DailyStartTime);
  }
  v24 = proto::ActivityInfo::mutable_activity_push_tips_data_list(activity_info);
  v25 = std::unordered_map<unsigned int,unsigned int>::size(&this->activity_push_tips_map_);
  google::protobuf::RepeatedPtrField<proto::ActivityPushTipsData>::Reserve(v24, v25);
  __for_range = &this->activity_push_tips_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->activity_push_tips_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->activity_push_tips_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    activity_push_tips_id = std::get<0ul,unsigned int const,unsigned int>(v34);
    state = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v34);
    proto_activity_push_tips = proto::ActivityInfo::add_activity_push_tips_data_list(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)activity_push_tips_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_push_tips_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_push_tips_id >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ActivityPushTipsData::set_activity_push_tips_id(proto_activity_push_tips, *activity_push_tips_id);
    if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !proto::ActivityPushTipsState_IsValid(*state) )
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "toClient",
        354);
      v26 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v39,
              (const char (*)[40])"activity pushtips is not valid, state: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, state);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ActivityPushTipsData::set_state(proto_activity_push_tips, (proto::ActivityPushTipsState)*state);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_common_content_closed_);
  proto::ActivityInfo::set_is_common_content_closed(activity_info, this->is_common_content_closed_);
  return 0;
};

// Line 366: range 00000000137AE49A-00000000137AE87A
int32_t __cdecl BaseActivity::fillWatcherProtoList(
        BaseActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  proto::ActivityWatcherInfo *v11; // rcx
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::unordered_set<unsigned int> *watcher_id_set; // [rsp+28h] [rbp-B8h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+50h] [rbp-90h] BYREF
  char v21[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 watcher_id:369";
  *(_QWORD *)(v2 + 16) = BaseActivity::fillWatcherProtoList;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  watcher_id_set = NewActivityExcelConfigMgr::findNewActivityWatcherSet(p_new_activity_config_mgr, this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  __for_range = watcher_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(watcher_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(watcher_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
    watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                           &v7->design_config.txt_config_mgr.new_activity_config_mgr,
                           *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v19);
    if ( watcher_config_ptr )
    {
      v11 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
      BaseActivity::fillWatcherProto(this, v11, watcher_config_ptr);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "fillWatcherProtoList",
        374);
      v8 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             &v20,
             (const char (*)[22])"findWatcherConfig id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  result = 0;
  if ( v21 == (char *)v2 )
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

// Line 385: range 00000000137AE87C-00000000137AEB26
int32_t __cdecl BaseActivity::notifyClientData(BaseActivity *const this, bool is_starting)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<proto::ActivityInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned __int64 v6; // rax
  int32_t v7; // r14d
  Player *player; // r14
  int32_t result; // eax
  proto::ActivityInfo *activity_info; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<proto::ActivityInfoNotify> __r; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 notify_ptr:386";
  *(_QWORD *)(v2 + 16) = BaseActivity::notifyClientData;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::ActivityInfoNotify>();
  v5 = std::__shared_ptr_access<proto::ActivityInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  activity_info = proto::ActivityInfoNotify::mutable_activity_info(v5);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 5);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(BaseActivity *const, proto::ActivityInfo *))v6)(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "notifyClientData",
      390);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      &v12,
      (const char (*)[30])"toClient(activity_info) fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
    v7 = -1;
  }
  else
  {
    if ( is_starting )
      proto::ActivityInfo::set_is_starting(activity_info, is_starting);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::ActivityInfoNotify>(&__r);
    v7 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::ActivityInfoNotify>::~shared_ptr((std::shared_ptr<proto::ActivityInfoNotify> *const)(v2 + 32));
  result = v7;
  if ( v13 == (char *)v2 )
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

// Line 403: range 00000000137AEB28-00000000137AEC96
void __cdecl BaseActivity::fillActivityCoinInfo(
        BaseActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key; // [rsp+1Ch] [rbp-44h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<const proto::VirtualItem,unsigned int> *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+48h] [rbp-18h]

  __for_range = &this->activity_general_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_general_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_general_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v9);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v9);
    if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *coin_num;
    if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    key = *coin_type;
    v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, &key);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = v2;
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 411: range 00000000137AEC98-00000000137AEF3B
void __cdecl BaseActivity::notifyActivityCoinInfo(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  unsigned __int64 v6; // rax
  void (__fastcall *v7)(BaseActivity *const, google::protobuf::Map<unsigned int,unsigned int> *); // r14
  std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v9; // rdx
  Player *player; // r14
  std::shared_ptr<proto::ActivityCoinInfoNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:412";
  *(_QWORD *)(v1 + 16) = BaseActivity::notifyActivityCoinInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::ActivityCoinInfoNotify>();
  v4 = std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityCoinInfoNotify::set_schedule_id(v4, this->schedule_id_);
  v5 = std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityCoinInfoNotify::set_activity_id(v5, this->activity_id_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 9);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(void (__fastcall **)(BaseActivity *const, google::protobuf::Map<unsigned int,unsigned int> *))v6;
  v8 = std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityCoinInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v9 = proto::ActivityCoinInfoNotify::mutable_activity_coin_map(v8);
  v7(this, v9);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ActivityCoinInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::ActivityCoinInfoNotify>::~shared_ptr((std::shared_ptr<proto::ActivityCoinInfoNotify> *const)(v1 + 32));
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 420: range 00000000137AEF3C-00000000137AF352
__int64 __fastcall BaseActivity::checkAddActivityGeneralCoin(
        const BaseActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-C0h] BYREF
  char v22[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:427 64 4 13 coin_type:419 80 4 11 add_num:419 96 8 8 iter:421";
  *(_QWORD *)(v3 + 16) = BaseActivity::checkAddActivityGeneralCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = add_num;
  *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                              &this->activity_general_coin_map_,
                                                                              (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
  __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_general_coin_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "checkAddActivityGeneralCoin",
      424);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v21,
           (const char (*)[59])"coin_type is not in activity_general_coin_map_. coin_type:");
    v7 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
           v6,
           (const proto::VirtualItem *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])", activity_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = v10->second;
    if ( (!*(_DWORD *)(v3 + 80)
       || !*(_DWORD *)(v3 + 48)
       || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) >= *(_DWORD *)(v3 + 80))
      && (*(_DWORD *)(v3 + 80)
       || *(_DWORD *)(v3 + 48)
       || (unsigned int)(*(_DWORD *)(v3 + 48) + *(_DWORD *)(v3 + 80)) <= *(_DWORD *)(v3 + 80)) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "checkAddActivityGeneralCoin",
        430);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v21,
              (const char (*)[27])"coin over flow, coin_type:");
      v12 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
              v11,
              (const proto::VirtualItem *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur num: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])" ,add num: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])", activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (unsigned __int64)(this->_vptr_DescribalBase + 10);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      result = (*(__int64 (__fastcall **)(const BaseActivity *const, _QWORD))v18)(this, *(unsigned int *)(v3 + 64));
    }
  }
  if ( v22 == (char *)v3 )
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

// Line 437: range 00000000137AF354-00000000137AF732
__int64 __fastcall BaseActivity::checkSubActivityGeneralCoin(
        const BaseActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t sub_num)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-C0h] BYREF
  char v22[160]; // [rsp+40h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 16 cur_coin_num:444 64 4 13 coin_type:436 80 4 11 sub_num:436 96 8 8 iter:438";
  *(_QWORD *)(v3 + 16) = BaseActivity::checkSubActivityGeneralCoin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 64) = coin_type;
  *(_DWORD *)(v3 + 80) = sub_num;
  *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v3 + 96) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                              &this->activity_general_coin_map_,
                                                                              (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v3 + 64));
  __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_general_coin_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v3 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "checkSubActivityGeneralCoin",
      441);
    v6 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v21,
           (const char (*)[59])"coin_type is not in activity_general_coin_map_. coin_type:");
    v7 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
           v6,
           (const proto::VirtualItem *)(v3 + 64));
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])", activity_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = v10->second;
    if ( *(_DWORD *)(v3 + 48) >= *(_DWORD *)(v3 + 80) )
    {
      result = 0LL;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "checkSubActivityGeneralCoin",
        447);
      v11 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v21,
              (const char (*)[28])"coin not enough, coin_type:");
      v12 = common::milog::MiLogStream::operator<<<proto::VirtualItem,(proto::VirtualItem*)0>(
              v11,
              (const proto::VirtualItem *)(v3 + 64));
      v13 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v12, (const char (*)[12])", cur num: ");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])off_2505C720);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 80));
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v16, (const char (*)[16])", activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v21);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v18 = (unsigned __int64)(this->_vptr_DescribalBase + 11);
      if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
        v18 = __asan_report_load8();
      result = (*(__int64 (__fastcall **)(const BaseActivity *const, _QWORD))v18)(this, *(unsigned int *)(v3 + 64));
    }
  }
  if ( v22 == (char *)v3 )
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

// Line 454: range 00000000137AF734-00000000137AFBD6
__int64 __fastcall BaseActivity::addActivityGeneralCoin(
        BaseActivity *const this,
        proto::VirtualItem coin_type,
        uint32_t add_num,
        const ActionReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v11; // rdx
  SelectType v12; // r14d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v13; // rax
  SelectType *v14; // rdx
  PlayerItemComp *ItemComp; // r14
  data::ItemLimitType v16; // r15d
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v17; // rdx
  __int64 result; // rax
  std::string v19; // [rsp+0h] [rbp-F0h]
  uint32_t reason_type; // [rsp+10h] [rbp-E0h]
  int32_t ret; // [rsp+38h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+3Ch] [rbp-B4h]
  std::string v24; // [rsp+40h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+60h] [rbp-90h] BYREF

  *(&v19._anon_0._M_allocated_capacity + 1) = (std::string::size_type)reason;
  v19._anon_0._M_local_buf[4] = is_notify;
  v5 = (unsigned __int64)v25;
  v19._M_string_length = (std::string::size_type)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:461 64 4 13 coin_type:453";
  *(_QWORD *)(v5 + 16) = BaseActivity::addActivityGeneralCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_DescribalBase + 12);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(BaseActivity *const, _QWORD, _QWORD))v8)(this, *(unsigned int *)(v5 + 64), add_num);
  if ( ret )
  {
    v9 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, v19);
    std::string::~string(&v24);
    v11 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_general_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v11;
    v12 = SAFE_ADD<unsigned int,unsigned int>(*v11, add_num);
    v13 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_general_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v13);
    }
    *v14 = v12;
    if ( v19._anon_0._M_local_buf[4] )
      BaseActivity::notifyActivityCoinInfo(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((*(&v19._anon_0._M_allocated_capacity + 1) + 4) >> 3) + 0x7FFF8000) != 0
      && (char)(((v19._anon_0._M_local_buf[8] + 4) & 7) + 3) >= *(_BYTE *)(((*(&v19._anon_0._M_allocated_capacity + 1)
                                                                           + 4) >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v16 = *(_DWORD *)(*(&v19._anon_0._M_allocated_capacity + 1) + 4);
    if ( *(_BYTE *)((*(&v19._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) != 0
      && (char)((v19._anon_0._M_local_buf[8] & 7) + 3) >= *(_BYTE *)((*(&v19._anon_0._M_allocated_capacity + 1) >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_type = **((_DWORD **)&v19._anon_0._M_allocated_capacity + 1);
    v17 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &this->activity_general_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v17,
      reason_type,
      v16,
      0);
    v9 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v9;
  if ( v19._M_string_length == v5 )
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
  return result;
};

// Line 474: range 00000000137AFBD8-00000000137B0018
__int64 __fastcall BaseActivity::subActivityGeneralCoin(
        BaseActivity *const this,
        __int32 coin_type,
        __int32 sub_num,
        const SubItemReason *reason,
        __int8 is_notify)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  unsigned __int64 v8; // rax
  unsigned int v9; // r14d
  PlayerBasicComp *BasicComp; // rax
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v11; // rdx
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v12; // rax
  PlayerItemComp *ItemComp; // r14
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v14; // rdx
  __int64 result; // rax
  std::string reason_type; // [rsp+0h] [rbp-E0h]
  uint32_t reason_typea; // [rsp+0h] [rbp-E0h]
  bool is_notifya; // [rsp+4h] [rbp-DCh]
  const SubItemReason *reasona; // [rsp+8h] [rbp-D8h]
  uint32_t sub_numa; // [rsp+10h] [rbp-D0h]
  BaseActivity *thisa; // [rsp+18h] [rbp-C8h]
  int32_t ret; // [rsp+28h] [rbp-B8h]
  uint32_t old_coin_num; // [rsp+2Ch] [rbp-B4h]
  std::string v24; // [rsp+30h] [rbp-B0h] BYREF
  char v25[144]; // [rsp+50h] [rbp-90h] BYREF

  *(&reason_type._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(reason_type._anon_0._M_allocated_capacity) = coin_type;
  *(_DWORD *)reason_type._anon_0._M_local_buf = sub_num;
  reason_type._M_string_length = (std::string::size_type)reason;
  BYTE4(reason_type._M_dataplus._M_p) = is_notify;
  v5 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:481 64 4 13 coin_type:473";
  *(_QWORD *)(v5 + 16) = BaseActivity::subActivityGeneralCoin;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202116348;
  *(_DWORD *)(v5 + 64) = coin_type;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v8 = (unsigned __int64)(this->_vptr_DescribalBase + 13);
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8();
  ret = (*(__int64 (__fastcall **)(BaseActivity *const, _QWORD, _QWORD))v8)(
          this,
          *(unsigned int *)(v5 + 64),
          LODWORD(reason_type._anon_0._M_allocated_capacity));
  if ( ret )
  {
    v9 = ret;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v24, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0x67u, reason_type);
    std::string::~string(&v24);
    v11 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_general_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin_num = *v11;
    v12 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_general_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *v12 -= sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ItemComp = Player::getItemComp(thisa->player_);
    if ( *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)reasona & 7) + 3) >= *(_BYTE *)(((unsigned __int64)reasona >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    reason_typea = reasona->reason_type;
    v14 = std::map<proto::VirtualItem,unsigned int>::operator[](
            &thisa->activity_general_coin_map_,
            (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v5 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      *(proto::VirtualItem *)(v5 + 64),
      old_coin_num,
      *v14,
      reason_typea,
      ITEM_LIMIT_NONE,
      0);
    v9 = 0;
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  result = v9;
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
  return result;
};

// Line 494: range 00000000137B001A-00000000137B01AC
__int64 __fastcall BaseActivity::getActivityGeneralCoin(const BaseActivity *const this, proto::VirtualItem coin_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::pointer v5; // rdx
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 coin_type:493 64 8 8 iter:495";
  *(_QWORD *)(v2 + 16) = BaseActivity::getActivityGeneralCoin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = coin_type;
  *(std::map<proto::VirtualItem,unsigned int>::const_iterator *)(v2 + 64) = std::map<proto::VirtualItem,unsigned int>::find(
                                                                              &this->activity_general_coin_map_,
                                                                              (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v2 + 48));
  __y._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_general_coin_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = std::_Rb_tree_const_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const proto::VirtualItem,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v5->second;
  }
  else
  {
    result = 0LL;
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
  return result;
};

// Line 504: range 00000000137B01AE-00000000137B0533
void __cdecl BaseActivity::setInitialGeneralCoin(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::map<proto::VirtualItem,unsigned int>::mapped_type *v9; // rax
  _DWORD *v10; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  const data::NewActivityExcelConfig *activity_config_ptr; // [rsp+20h] [rbp-B0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 11 coin_id:511 64 4 13 coin_type:518";
  *(_QWORD *)(v1 + 16) = BaseActivity::setInitialGeneralCoin;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116348;
  activity_config_ptr = BaseActivity::getActivityConfig(this);
  if ( activity_config_ptr )
  {
    __for_range = &activity_config_ptr->activity_coin_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&activity_config_ptr->activity_coin_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&activity_config_ptr->activity_coin_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 48) = *v5;
      if ( !proto::VirtualItem_IsValid(*(_DWORD *)(v1 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "setInitialGeneralCoin",
          515);
        v6 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
               &v15,
               (const char (*)[63])"activity coin cannot find corresponding VirtualItem, coin_id: ");
        v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 48));
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])", activity_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v15);
      }
      else
      {
        *(_DWORD *)(v1 + 64) = *(_DWORD *)(v1 + 48);
        v9 = std::map<proto::VirtualItem,unsigned int>::operator[](
               &this->activity_general_coin_map_,
               (const std::map<proto::VirtualItem,unsigned int>::key_type *)(v1 + 64));
        v10 = v9;
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v9);
        }
        *v10 = 0;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "setInitialGeneralCoin",
      508);
    v4 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v15,
           (const char (*)[48])"getActivityConfig nullptr config, activity_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v1 )
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

// Line 523: range 00000000137B0534-00000000137B0752
void __cdecl BaseActivity::clearGeneralCoin(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  __int32 v4; // edi
  std::map<proto::VirtualItem,unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<proto::VirtualItem,unsigned int>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<proto::VirtualItem,unsigned int> *__for_range; // [rsp+20h] [rbp-80h]
  const std::pair<const proto::VirtualItem,unsigned int> *v9; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_type; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *coin_num; // [rsp+38h] [rbp-68h]
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:525";
  *(_QWORD *)(v1 + 16) = BaseActivity::clearGeneralCoin;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
  __for_range = &this->activity_general_coin_map_;
  __for_begin._M_node = std::map<proto::VirtualItem,unsigned int>::begin(&this->activity_general_coin_map_)._M_node;
  __for_end._M_node = std::map<proto::VirtualItem,unsigned int>::end(&this->activity_general_coin_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator*(&__for_begin);
    coin_type = std::get<0ul,proto::VirtualItem const,unsigned int>(v9);
    coin_num = (std::tuple_element<1,const std::pair<const proto::VirtualItem,unsigned int> >::type *)std::get<1ul,proto::VirtualItem const,unsigned int>(v9);
    if ( *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)coin_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *coin_num )
    {
      v4 = *coin_num;
      if ( *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)coin_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)coin_type >> 3) + 0x7FFF8000) )
      {
        v4 = (int)coin_type;
        __asan_report_load4();
      }
      BaseActivity::subActivityGeneralCoin(this, *coin_type, v4, (const SubItemReason *)(v1 + 32), 0);
    }
    std::_Rb_tree_iterator<std::pair<proto::VirtualItem const,unsigned int>>::operator++(&__for_begin);
  }
  std::map<proto::VirtualItem,unsigned int>::clear(&this->activity_general_coin_map_);
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 537: range 00000000137B0754-00000000137B0D4C
__int64 __fastcall BaseActivity::start(BaseActivity *const this, uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5; // al
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  uint32_t activity_id; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // ecx
  PlayerBasicComp *BasicComp; // rax
  uint32_t v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  std::shared_ptr<Config> v17; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  std::string val; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 schedule_id:536";
  *(_QWORD *)(v2 + 16) = BaseActivity::start;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = schedule_id;
  if ( BaseActivity::isOpening(this, 0) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->schedule_id_ == *(_DWORD *)(v2 + 32) )
LABEL_8:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "start",
      541);
    BaseActivity::toString[abi:cxx11](&val, this);
    v6 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v18, &val);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])off_2505C9C0);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    activity_id = this->activity_id_;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v17);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
    LOBYTE(activity_id) = activity_id != NewActivityExcelConfigMgr::getActivityIdByScheduleId(
                                           &v9->design_config.txt_config_mgr.new_activity_config_mgr,
                                           *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v17);
    if ( (_BYTE)activity_id )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "start",
        548);
      BaseActivity::toString[abi:cxx11](&val, this);
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v18, &val);
      v11 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v10,
              (const char (*)[33])" starts by invalid schedule_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v18);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      BaseActivity::clear(this);
      v12 = *(_DWORD *)(v2 + 32);
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->schedule_id_);
      }
      this->schedule_id_ = v12;
      if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_started_);
      this->is_started_ = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      v14 = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
      if ( *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->start_world_level_limit_);
      }
      this->start_world_level_limit_ = v14;
      BaseActivity::setInitialGeneralCoin(this);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v15 = (unsigned __int64)(this->_vptr_DescribalBase + 36);
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v15 = __asan_report_load8();
      (*(void (__fastcall **)(BaseActivity *const))v15)(this);
      BaseActivity::updateAllConds(this);
      BaseActivity::addWatchers(this);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = (unsigned __int64)(this->_vptr_DescribalBase + 37);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        v16 = __asan_report_load8();
      (*(void (__fastcall **)(BaseActivity *const))v16)(this);
      BaseActivity::logActivityStart(this);
      result = 0LL;
    }
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
  return result;
};

// Line 583: range 00000000137B0D4E-00000000137B1273
int32_t __cdecl BaseActivity::settle(BaseActivity *const this)
{
  std::shared_ptr<BaseEvent> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  common::milog::MiLogStream *v7; // rax
  unsigned int *v8; // r8
  bool *v9; // r9
  PlayerEventComp *EventComp; // r14
  unsigned __int64 v11; // rax
  int32_t result; // eax
  unsigned int __args_0[4]; // [rsp+1Fh] [rbp-C1h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v16[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (std::shared_ptr<BaseEvent> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::shared_ptr<BaseEvent> *)v2;
  }
  v1->_M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 13 event_ptr:602";
  v1[1]._M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)BaseActivity::settle;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "settle",
      587);
    BaseActivity::toString[abi:cxx11](&val, this);
    v4 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v14, &val);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v4, (const char (*)[12])off_2505CAC0);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else if ( !BaseActivity::isOpening(this, 0) && !BaseActivity::isFinished(this) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "settle",
      594);
    BaseActivity::toString[abi:cxx11](&val, this);
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v14, &val);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v7, (const char (*)[16])off_2505CB00);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    v5 = -1;
  }
  else
  {
    BaseActivity::internalUpdateAllConds(this);
    LOBYTE(__args_0[0]) = 0;
    common::tools::perf::make_shared<ActivityScheduleEvent,unsigned int &,unsigned int &,bool>(
      (unsigned int *)((char *)__args_0 + 1),
      &this->activity_id_,
      (bool *)&this->schedule_id_,
      __args_0,
      v8,
      v9);
    std::shared_ptr<BaseEvent>::shared_ptr<ActivityScheduleEvent,void>(
      v1 + 2,
      (std::shared_ptr<ActivityScheduleEvent> *)((char *)__args_0 + 1));
    std::shared_ptr<ActivityScheduleEvent>::~shared_ptr((std::shared_ptr<ActivityScheduleEvent> *const)((char *)__args_0 + 1));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr((std::shared_ptr<BaseEvent> *const)((char *)__args_0 + 1), v1 + 2);
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)((char *)__args_0 + 1));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)((char *)__args_0 + 1));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v11 = (unsigned __int64)(this->_vptr_DescribalBase + 38);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8();
    (*(void (__fastcall **)(BaseActivity *const))v11)(this);
    BaseActivity::delWatchers(this);
    BaseActivity::clearAllGameTimeGroups(this);
    BaseActivity::tryUnregisterPreQuestFinishObserver(this);
    if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_common_content_closed_);
    if ( !this->is_common_content_closed_ )
      BaseActivity::commonCloseContent(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_settled_);
    }
    this->is_settled_ = 1;
    BaseActivity::logActivitySettle(this);
    v5 = 0;
    std::shared_ptr<BaseEvent>::~shared_ptr(v1 + 2);
  }
  result = v5;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__shared_ptr<BaseEvent,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 633: range 00000000137B1274-00000000137B1465
bool __cdecl BaseActivity::isOpening(const BaseActivity *const this, uint32_t end_time_offset)
{
  char v2; // bl
  char v3; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  NewActivityExcelConfigMgr *v5; // rcx
  bool v6; // r13
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-40h] BYREF
  std::shared_ptr<Config> v9[3]; // [rsp+20h] [rbp-30h] BYREF

  v2 = 0;
  v3 = 0;
  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_started_);
  if ( !this->is_started_ )
    goto LABEL_11;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v8);
  v2 = 1;
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !NewActivityExcelConfigMgr::isScheduleBeginning(p_new_activity_config_mgr, this->schedule_id_, end_time_offset) )
    goto LABEL_11;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  v3 = 1;
  v5 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !NewActivityExcelConfigMgr::isScheduleEnd(v5, this->schedule_id_, end_time_offset) )
    v6 = 1;
  else
LABEL_11:
    v6 = 0;
  if ( v3 )
    std::shared_ptr<Config>::~shared_ptr(v9);
  if ( v2 )
    std::shared_ptr<Config>::~shared_ptr(&v8);
  return v6;
};

// Line 642: range 00000000137B1466-00000000137B152A
bool __cdecl BaseActivity::isFinished(const BaseActivity *const this)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  bool isScheduleEnd; // bl
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  isScheduleEnd = NewActivityExcelConfigMgr::isScheduleEnd(p_new_activity_config_mgr, this->schedule_id_, 0);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return isScheduleEnd;
};

// Line 647: range 00000000137B152C-00000000137B1579
bool __cdecl BaseActivity::isSettled(const BaseActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_settled_);
  }
  return this->is_settled_;
};

// Line 653: range 00000000137B157A-00000000137B15F7
bool __cdecl BaseActivity::isContentClosed(const BaseActivity *const this)
{
  if ( BaseActivity::isSettled(this) || BaseActivity::isFinished(this) )
    return 1;
  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_common_content_closed_);
  return this->is_common_content_closed_;
};

// Line 659: range 00000000137B15F8-00000000137B16B1
const data::NewActivityExcelConfig *__cdecl BaseActivity::getActivityConfig(BaseActivity *const this)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  const data::NewActivityExcelConfig *NewActivityExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  NewActivityExcelConfig = data::NewActivityExcelConfigMgrBase::findNewActivityExcelConfig(
                             p_new_activity_config_mgr,
                             this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return NewActivityExcelConfig;
};

// Line 665: range 00000000137B16B2-00000000137B1C95
void __cdecl BaseActivity::updateAllConds(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 7 idx:680";
  *(_QWORD *)(v1 + 16) = BaseActivity::updateAllConds;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(char *)(((unsigned __int64)&this->is_updating_cond_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_updating_cond_);
    if ( this->is_updating_cond_ )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/activity/base_activity.cpp",
        "updateAllConds",
        672);
      v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v11, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v6,
        (const char (*)[26])" updateAllConds is doing!");
      common::milog::MiLogStream::~MiLogStream(&v11);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 71) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_need_update_again_);
      }
      this->is_need_update_again_ = 1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_updating_cond_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_updating_cond_);
      this->is_updating_cond_ = 1;
      BaseActivity::internalUpdateAllConds(this);
      for ( *(_DWORD *)(v1 + 32) = 1; *(_DWORD *)(v1 + 32) <= 9u; ++*(_DWORD *)(v1 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 71) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_load1(&this->is_need_update_again_);
        }
        if ( !this->is_need_update_again_ )
          break;
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/activity/base_activity.cpp",
          "updateAllConds",
          686);
        v7 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v11, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               v8,
               (const char (*)[40])" try internalUpdateAllConds again, idx:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
        common::milog::MiLogStream::~MiLogStream(&v11);
        if ( *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 71) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store1(&this->is_need_update_again_);
        }
        this->is_need_update_again_ = 0;
        BaseActivity::internalUpdateAllConds(this);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 71) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_need_update_again_);
      }
      if ( this->is_need_update_again_ )
      {
        common::milog::MiLogStream::create(
          &v11,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "updateAllConds",
          693);
        common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
          &v11,
          (const char (*)[78])"after internalUpdateAllConds many times, is_need_update_again_ is still true!");
        common::milog::MiLogStream::~MiLogStream(&v11);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 71) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_need_update_again_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_need_update_again_);
      }
      this->is_need_update_again_ = 0;
      if ( *(char *)(((unsigned __int64)&this->is_updating_cond_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_updating_cond_);
      this->is_updating_cond_ = 0;
    }
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 701: range 00000000137B1C96-00000000137B2074
void __cdecl BaseActivity::internalUpdateAllConds(BaseActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  const std::unordered_set<unsigned int> *ActivityCondSet; // rax
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-170h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-168h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+20h] [rbp-160h]
  const unsigned int *cond_id; // [rsp+28h] [rbp-158h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-150h] BYREF
  char v12[320]; // [rsp+40h] [rbp-140h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 48 21 old_meet_cond_set:702 112 48 24 old_expired_cond_set:703 192 56 12 cond_set:705";
  *(_QWORD *)(v1 + 16) = BaseActivity::internalUpdateAllConds;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -219021312;
  v3[536862723] = 62194;
  v3[536862725] = -218959118;
  v3[536862727] = -218103808;
  v3[536862728] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 32), &this->meet_cond_set_);
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v1 + 112), &this->expired_cond_set_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  ActivityCondSet = NewActivityExcelConfigMgr::getActivityCondSet(p_new_activity_config_mgr, this->activity_id_);
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 192), ActivityCondSet);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  __for_range = (std::unordered_set<unsigned int> *)(v1 + 192);
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v1 + 192))._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end((std::unordered_set<unsigned int> *const)(v1 + 192))._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    cond_id = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)cond_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)cond_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cond_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BaseActivity::updateCond(this, *cond_id);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v1 + 32),
         &this->meet_cond_set_)
    || std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v1 + 112),
         &this->expired_cond_set_) )
  {
    BaseActivity::notifyCondIdLists(this);
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 192));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 112));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 32));
  if ( v12 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 717: range 00000000137B2076-00000000137B217B
_BOOL8 __fastcall BaseActivity::isMeetCond(const BaseActivity *const this, uint32_t cond_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 cond_id:716";
  *(_QWORD *)(v2 + 16) = BaseActivity::isMeetCond;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cond_id;
  result = BaseActivity::isOpening(this, 0)
        && common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->meet_cond_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 726: range 00000000137B217C-00000000137B2281
_BOOL8 __fastcall BaseActivity::isExpiredCond(const BaseActivity *const this, uint32_t cond_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 cond_id:725";
  *(_QWORD *)(v2 + 16) = BaseActivity::isExpiredCond;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cond_id;
  result = BaseActivity::isOpening(this, 0)
        && common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->expired_cond_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 735: range 00000000137B2282-00000000137B24B2
__int64 __fastcall BaseActivity::setCondDefaultState(BaseActivity *const this, uint32_t cond_id, bool val)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  const NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rdi
  uint32_t v7; // edx
  bool v8; // r14
  __int64 result; // rax
  std::map<unsigned int,bool>::mapped_type *v10; // rax
  _BYTE *v11; // rdx
  std::shared_ptr<Config> v14; // [rsp+10h] [rbp-80h] BYREF
  char v15[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 cond_id:734";
  *(_QWORD *)(v3 + 16) = BaseActivity::setCondDefaultState;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = cond_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14)->design_config.txt_config_mgr.new_activity_config_mgr;
  v7 = *(_DWORD *)(v3 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_new_activity_config_mgr = (const NewActivityExcelConfigMgr *)&this->activity_id_;
    __asan_report_load4();
  }
  v8 = !NewActivityExcelConfigMgr::isActivityContainsCondId(p_new_activity_config_mgr, this->activity_id_, v7);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else if ( val == BaseActivity::getCondDefaultState(this, *(_DWORD *)(v3 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::map<unsigned int,bool>::operator[](
            &this->cond_state_map_,
            (const std::map<unsigned int,bool>::key_type *)(v3 + 32));
    v11 = v10;
    if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(v10);
    }
    *v11 = val;
    BaseActivity::updateCond(this, *(_DWORD *)(v3 + 32));
    result = 0LL;
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
  return result;
};

// Line 747: range 00000000137B24B4-00000000137B273C
std::string *__cdecl BaseActivity::toString[abi:cxx11](std::string *retstr, const BaseActivity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // r14
  unsigned int Uid; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v10; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v11; // rax
  char v13[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 7 oss:748";
  *(_QWORD *)(v2 + 16) = BaseActivity::toString[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, Uid);
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, ", activity_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, this->activity_id_);
  v10 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ",schedule_id_:");
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v10, this->schedule_id_);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, byte_24FD2920);
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::str[abi:cxx11](
    retstr,
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::~StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 754: range 00000000137B273E-00000000137B2C89
void __cdecl BaseActivity::clear(BaseActivity *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_started_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_started_);
  this->is_started_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 41) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_settled_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_settled_);
  }
  this->is_settled_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->schedule_id_);
  }
  this->schedule_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 42) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_play_open_anim_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_play_open_anim_);
  }
  this->is_play_open_anim_ = 0;
  std::map<unsigned int,bool>::clear(&this->cond_state_map_);
  std::set<unsigned int>::clear(&this->meet_cond_set_);
  std::set<unsigned int>::clear(&this->expired_cond_set_);
  std::set<unsigned int>::clear(&this->taken_watcher_id_set_);
  std::set<unsigned int>::clear(&this->finished_watcher_id_set_);
  std::set<unsigned int>::clear(&this->activated_activity_sale_set_);
  std::map<unsigned int,std::set<unsigned int>>::clear(&this->activated_activity_sale_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->selected_avatar_reward_id_);
  }
  this->selected_avatar_reward_id_ = 0;
  std::set<unsigned int>::clear(&this->gametime_dynamic_group_set_);
  if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_notify_mail_sent_);
  this->is_notify_mail_sent_ = 0;
  std::set<std::pair<unsigned int,unsigned int>>::clear(&this->disable_transfer_point_interaction_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_banner_cleared_);
  }
  this->is_banner_cleared_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->start_world_level_limit_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->start_world_level_limit_);
  }
  this->start_world_level_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->score_limit_);
  }
  this->score_limit_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_score_);
  }
  this->cur_score_ = 0;
  std::vector<unsigned int>::clear(&this->taken_score_reward_vec_);
  BaseActivity::clearLastScheduleExhibitionData(this);
  if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_quick_open_);
  this->is_quick_open_ = 0;
  std::vector<unsigned int>::clear(&this->quick_open_unfinished_quest_vec_);
  std::map<unsigned int,unsigned int>::clear(&this->quest_content_map_);
  std::map<unsigned int,unsigned int>::clear(&this->gift_data_.wish_gift_num_map);
  std::map<unsigned int,ActivityRecvGiftData>::clear(&this->gift_data_.recv_gift_data_map);
  BaseActivity::tryUnregisterPreQuestFinishObserver(this);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->activity_push_tips_map_);
  BaseActivity::clearGeneralCoin(this);
  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_common_content_closed_);
  this->is_common_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 35);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  (*(void (__fastcall **)(BaseActivity *const))v1)(this);
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/activity/base_activity.cpp",
    "clear",
    789);
  v2 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v4, (const char (*)[13])"activity_id:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v3, (const char (*)[23])" clear settled status;");
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 793: range 00000000137B2C8A-00000000137B37CC
void __fastcall BaseActivity::updateCond(BaseActivity *const this, uint32_t cond_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  data::LogicType cond_comb; // r14d
  bool CondDefaultState; // al
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  PlayerEventComp *EventComp; // r14
  PlayerEventComp *v32; // r14
  uint32_t cond_ida; // [rsp+10h] [rbp-160h]
  unsigned int val; // [rsp+24h] [rbp-14Ch] BYREF
  const data::NewActivityCondExcelConfig *cond_config_ptr; // [rsp+28h] [rbp-148h]
  std::shared_ptr<Config> v36; // [rsp+30h] [rbp-140h] BYREF
  common::milog::MiLogStream v37; // [rsp+40h] [rbp-130h] BYREF
  char v38[272]; // [rsp+60h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v38;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 cond_id:792 64 16 13 event_ptr:838 96 24 17 meet_cond_vec:800 160 24 19 expire_cond_vec:800";
  *(_QWORD *)(v2 + 16) = BaseActivity::updateCond;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = cond_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v36);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v36);
  cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                      &v5->design_config.txt_config_mgr.new_activity_config_mgr,
                      *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v36);
  if ( !cond_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "updateCond",
      797);
    v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v37,
           (const char (*)[45])"findActivityCondExcelConfig failed, cond_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v37);
    goto LABEL_40;
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
  cond_ida = *(_DWORD *)(v2 + 48);
  if ( *(_BYTE *)(((unsigned __int64)&cond_config_ptr->cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cond_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond_config_ptr->cond_comb >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  cond_comb = cond_config_ptr->cond_comb;
  CondDefaultState = BaseActivity::getCondDefaultState(this, *(_DWORD *)(v2 + 48));
  if ( !BaseActivity::checkCondVecIsMeet(this, CondDefaultState, cond_comb, &cond_config_ptr->cond, cond_ida) )
  {
    if ( std::set<unsigned int>::erase(&this->meet_cond_set_, (const std::set<unsigned int>::key_type *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "updateCond",
        825);
      v26 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v37,
              (const char (*)[34])"activity cond unmeet,activity id:");
      v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &this->activity_id_);
      v28 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v27, (const char (*)[10])" cond id:");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 48));
      v30 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v29, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &val);
      common::milog::MiLogStream::~MiLogStream(&v37);
      std::set<unsigned int>::insert(&this->expired_cond_set_, (const std::set<unsigned int>::value_type *)(v2 + 48));
      BaseActivity::execActionVec(this, &cond_config_ptr->expire_exec, *(_DWORD *)(v2 + 48), 0);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v2 + 160),
        (const std::vector<unsigned int>::value_type *)(v2 + 48));
    }
    goto LABEL_31;
  }
  if ( *(char *)(((unsigned __int64)&cond_config_ptr->is_only_meet_once >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&cond_config_ptr->is_only_meet_once);
  if ( !cond_config_ptr->is_only_meet_once
    || !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->expired_cond_set_,
          (const unsigned int *)(v2 + 48)) )
  {
    v15 = std::set<unsigned int>::emplace<unsigned int &>(
            &this->meet_cond_set_,
            (unsigned int *)(v2 + 48),
            (unsigned int *)&this->meet_cond_set_);
    if ( v15.second )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "updateCond",
        812);
      v16 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v37,
              (const char (*)[32])"activity cond meet,activity id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->activity_id_);
      v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])" cond id:");
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
      v20 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v19, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
      common::milog::MiLogStream::~MiLogStream(&v37);
      BaseActivity::execActionVec(this, &cond_config_ptr->meet_exec, *(_DWORD *)(v2 + 48), 0);
      std::vector<unsigned int>::push_back(
        (std::vector<unsigned int> *const)(v2 + 96),
        (const std::vector<unsigned int>::value_type *)(v2 + 48));
    }
    if ( std::set<unsigned int>::erase(&this->expired_cond_set_, (const std::set<unsigned int>::key_type *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v37,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "updateCond",
        818);
      v21 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v37,
              (const char (*)[40])"activity expired cond meet,activity id:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &this->activity_id_);
      v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])" cond id:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 48));
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
      common::milog::MiLogStream::~MiLogStream(&v37);
    }
LABEL_31:
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 96)) )
    {
      common::tools::perf::make_shared<ActivityCondMeetEvent,unsigned int &,std::vector<unsigned int> &>(
        (unsigned int *)(v2 + 64),
        (std::vector<unsigned int> *)&this->activity_id_,
        (unsigned int *)(v2 + 96),
        (std::vector<unsigned int> *)&this->activity_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<ActivityCondMeetEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v36,
        (const std::shared_ptr<ActivityCondMeetEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v36);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v36);
      std::shared_ptr<ActivityCondMeetEvent>::~shared_ptr((std::shared_ptr<ActivityCondMeetEvent> *const)(v2 + 64));
    }
    if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 160)) )
    {
      common::tools::perf::make_shared<ActivityCondExpireEvent,unsigned int &,std::vector<unsigned int> &>(
        (unsigned int *)(v2 + 64),
        (std::vector<unsigned int> *)&this->activity_id_,
        (unsigned int *)(v2 + 160),
        (std::vector<unsigned int> *)&this->activity_id_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v32 = Player::getEventComp(this->player_);
      std::shared_ptr<BaseEvent>::shared_ptr<ActivityCondExpireEvent,void>(
        (std::shared_ptr<BaseEvent> *const)&v36,
        (const std::shared_ptr<ActivityCondExpireEvent> *)(v2 + 64));
      PlayerEventComp::notifyEvent(v32, (BaseEventPtr *)&v36);
      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v36);
      std::shared_ptr<ActivityCondExpireEvent>::~shared_ptr((std::shared_ptr<ActivityCondExpireEvent> *const)(v2 + 64));
    }
    goto LABEL_39;
  }
  common::milog::MiLogStream::create(
    &v37,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/base_activity.cpp",
    "updateCond",
    807);
  v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          &v37,
          (const char (*)[47])"ignore activity expired cond meet,activity id:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->activity_id_);
  v12 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v11, (const char (*)[10])" cond id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
  common::milog::MiLogStream::~MiLogStream(&v37);
LABEL_39:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
LABEL_40:
  if ( v38 == (char *)v2 )
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

// Line 844: range 00000000137B37CE-00000000137B3ACA
__int64 __fastcall BaseActivity::setCondByGm(
        BaseActivity *const this,
        uint32_t cond_id,
        bool is_open,
        std::string *ret_msg)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const data::NewActivityCondExcelConfig *cond_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v15; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-80h] BYREF
  char v17[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 11 cond_id:843";
  *(_QWORD *)(v4 + 16) = BaseActivity::setCondByGm;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = cond_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                      &v7->design_config.txt_config_mgr.new_activity_config_mgr,
                      *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( cond_config_ptr )
  {
    if ( is_open )
    {
      std::set<unsigned int>::erase(&this->gm_unmeet_cond_set_, (const std::set<unsigned int>::key_type *)(v4 + 32));
      std::set<unsigned int>::insert(&this->gm_meet_cond_set_, (const std::set<unsigned int>::value_type *)(v4 + 32));
    }
    else
    {
      std::set<unsigned int>::erase(&this->gm_meet_cond_set_, (const std::set<unsigned int>::key_type *)(v4 + 32));
      std::set<unsigned int>::insert(&this->gm_unmeet_cond_set_, (const std::set<unsigned int>::value_type *)(v4 + 32));
    }
    BaseActivity::internalUpdateAllConds(this);
    if ( !is_open )
    {
      std::set<unsigned int>::erase(&this->meet_cond_set_, (const std::set<unsigned int>::key_type *)(v4 + 32));
      std::set<unsigned int>::erase(&this->expired_cond_set_, (const std::set<unsigned int>::key_type *)(v4 + 32));
    }
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "setCondByGm",
      869);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v16, (const char (*)[24])off_2505D220);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])" is_open:");
    common::milog::MiLogStream::operator<<(v11, is_open);
    common::milog::MiLogStream::~MiLogStream(&v16);
    result = 0LL;
  }
  else
  {
    std::string::operator=(ret_msg, "condition config not found");
    result = 0xFFFFFFFFLL;
  }
  if ( v17 == (char *)v4 )
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

// Line 874: range 00000000137B3ACC-00000000137B3EAD
__int64 __fastcall BaseActivity::getCondDefaultState(BaseActivity *const this, uint32_t cond_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  const NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rdi
  uint32_t v6; // edx
  bool v7; // r14
  __int64 result; // rax
  std::map<unsigned int,bool>::mapped_type *v9; // rax
  unsigned __int8 *v10; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::map<unsigned int,bool>::mapped_type *v13; // rax
  bool *v14; // rdx
  bool default_state; // [rsp+17h] [rbp-A9h]
  const data::NewActivityCondExcelConfig *cond_config; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 cond_id:873";
  *(_QWORD *)(v2 + 16) = BaseActivity::getCondDefaultState;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cond_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.new_activity_config_mgr;
  v6 = *(_DWORD *)(v2 + 32);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_new_activity_config_mgr = (const NewActivityExcelConfigMgr *)&this->activity_id_;
    __asan_report_load4();
  }
  v7 = !NewActivityExcelConfigMgr::isActivityContainsCondId(p_new_activity_config_mgr, this->activity_id_, v6);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( v7 )
  {
    result = 0LL;
  }
  else if ( common::tools::MiscUtils::isContains<std::map<unsigned int,bool>,unsigned int>(
              &this->cond_state_map_,
              (const unsigned int *)(v2 + 32)) )
  {
    v9 = std::map<unsigned int,bool>::operator[](
           &this->cond_state_map_,
           (const std::map<unsigned int,bool>::key_type *)(v2 + 32));
    v10 = (unsigned __int8 *)v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(v9);
    }
    result = *v10;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    cond_config = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                    &v11->design_config.txt_config_mgr.new_activity_config_mgr,
                    *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( cond_config )
    {
      if ( *(_BYTE *)(((unsigned __int64)&cond_config->default_state >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cond_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cond_config->default_state >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      default_state = cond_config->default_state == NEW_ACTIVITY_COND_DEFAULT_STATE_TRUE;
      v13 = std::map<unsigned int,bool>::operator[](
              &this->cond_state_map_,
              (const std::map<unsigned int,bool>::key_type *)(v2 + 32));
      v14 = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v13);
      }
      *v14 = default_state;
      result = default_state;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "getCondDefaultState",
        885);
      v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              &v19,
              (const char (*)[44])"findActivityCondExcelConfig failed,cond_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0LL;
    }
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
  return result;
};

// Line 894: range 00000000137B3EAE-00000000137B433E
__int64 __fastcall BaseActivity::checkCondVecIsMeet(
        BaseActivity *const this,
        bool default_state,
        data::LogicType logic_type,
        const std::vector<data::NewActivityCond> *cond_vec,
        uint32_t cond_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  unsigned int v8; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rdx
  bool *p_is_gm_talk_open; // rax
  std::vector<data::NewActivityCond>::size_type v11; // rax
  unsigned __int64 v12; // rax
  unsigned int v13; // eax
  __int64 result; // rax
  std::vector<data::NewActivityCond>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<data::NewActivityCond>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  const std::vector<data::NewActivityCond> *__for_range; // [rsp+30h] [rbp-E0h]
  const data::NewActivityCond *cond; // [rsp+38h] [rbp-D8h]
  char v22[208]; // [rsp+40h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 11 cond_id:893 48 16 14 config_ptr:897 80 40 18 cond_check_vec:916";
  *(_QWORD *)(v5 + 16) = BaseActivity::checkCondVecIsMeet;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862722] = 62194;
  v7[536862723] = -218103808;
  v7[536862724] = -202116109;
  *(_DWORD *)(v5 + 32) = cond_id;
  if ( BaseActivity::isFinished(this) )
  {
    v8 = 0;
    goto LABEL_33;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v5 + 48));
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
  p_is_gm_talk_open = &v9->is_gm_talk_open;
  if ( *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_gm_talk_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_gm_talk_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_gm_talk_open);
  }
  if ( !v9->is_gm_talk_open )
    goto LABEL_13;
  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
          &this->gm_meet_cond_set_,
          (const unsigned int *)(v5 + 32)) )
  {
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->gm_unmeet_cond_set_,
           (const unsigned int *)(v5 + 32)) )
    {
      v8 = 0;
      goto LABEL_32;
    }
LABEL_13:
    if ( logic_type == LOGIC_NONE )
      logic_type = LOGIC_AND;
    std::vector<bool>::vector((std::vector<bool> *const)(v5 + 80));
    v11 = std::vector<data::NewActivityCond>::size(cond_vec);
    std::vector<bool>::reserve((std::vector<bool> *const)(v5 + 80), v11 + 1);
    std::vector<bool>::push_back((std::vector<bool> *const)(v5 + 80), default_state);
    __for_range = cond_vec;
    __for_begin._M_current = std::vector<data::NewActivityCond>::begin(cond_vec)._M_current;
    __for_end._M_current = std::vector<data::NewActivityCond>::end(cond_vec)._M_current;
    while ( __gnu_cxx::operator!=<data::NewActivityCond const*,std::vector<data::NewActivityCond>>(
              &__for_begin,
              &__for_end) )
    {
      cond = __gnu_cxx::__normal_iterator<data::NewActivityCond const*,std::vector<data::NewActivityCond>>::operator*(&__for_begin);
      if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_quick_open_);
      if ( !this->is_quick_open_ )
        goto LABEL_38;
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( cond->type != NEW_ACTIVITY_COND_QUEST_FINISH_ALLOW_QUICK_OPEN )
      {
LABEL_38:
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v12 = (unsigned __int64)(this->_vptr_DescribalBase + 40);
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v12 = __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(BaseActivity *const, const data::NewActivityCond *))v12)(this, cond) )
          std::vector<bool>::push_back((std::vector<bool> *const)(v5 + 80), 1);
        else
          std::vector<bool>::push_back((std::vector<bool> *const)(v5 + 80), 0);
      }
      __gnu_cxx::__normal_iterator<data::NewActivityCond const*,std::vector<data::NewActivityCond>>::operator++(&__for_begin);
    }
    LOBYTE(v13) = CommonMiscs::evaluateLogicComb(logic_type, (const std::vector<bool> *)(v5 + 80));
    v8 = v13;
    std::vector<bool>::~vector((std::vector<bool> *const)(v5 + 80));
    goto LABEL_32;
  }
  v8 = 1;
LABEL_32:
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v5 + 48));
LABEL_33:
  result = v8;
  if ( v22 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 941: range 00000000137B4340-00000000137B6C17
bool __cdecl BaseActivity::checkCondIsMeet(BaseActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r14
  common::milog::MiLogStream *v5; // rax
  bool isRegionSearchFinish; // r12
  time_t v7; // rbx
  uint32_t ScheduleBeginTime; // r12d
  int *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  time_t v11; // rbx
  uint32_t v12; // r12d
  int *v13; // rdx
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::vector<int>::const_reference v16; // rdx
  common::milog::MiLogStream *v17; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  std::vector<int>::const_reference v19; // rdx
  common::milog::MiLogStream *v20; // rax
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ebx
  std::vector<int>::const_reference v23; // rdx
  common::milog::MiLogStream *v24; // rax
  PlayerBasicComp *v25; // rax
  uint32_t v26; // ebx
  std::vector<int>::const_reference v27; // rdx
  common::milog::MiLogStream *v28; // rax
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v29; // rdx
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v31; // rax
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v32; // rdx
  common::milog::MiLogStream *v33; // rax
  std::vector<int>::const_reference v34; // rdx
  uint32_t ScenePlayComp; // eax
  std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  common::milog::MiLogStream *v37; // rax
  std::vector<int>::const_reference v38; // rdx
  PlayerMechanicusComp *MechanicusComp; // rax
  common::milog::MiLogStream *v40; // rax
  std::vector<int>::const_reference v41; // rdx
  std::vector<int>::const_reference v42; // rdx
  PlayerRegionSearchComp *RegionSearchComp; // rax
  common::milog::MiLogStream *v44; // rax
  std::vector<int>::const_reference v45; // rdx
  PlayerRegionSearchComp *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::vector<int>::const_reference v48; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v49; // rax
  bool v50; // r12
  common::milog::MiLogStream *v51; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rax
  std::vector<int>::const_reference v56; // rdx
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  std::vector<int>::const_reference v61; // rdx
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r12
  std::vector<int>::const_reference v70; // rdx
  std::vector<int>::const_reference v71; // rdx
  PlayerQuestComp *v72; // rax
  common::milog::MiLogStream *v73; // rax
  common::milog::MiLogStream *v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  common::milog::MiLogStream *v77; // rax
  std::vector<int>::const_reference v78; // rdx
  std::vector<int>::const_reference v79; // rdx
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  std::vector<int>::const_reference v84; // rdx
  PlayerGroupLinkComp *GroupLinkComp; // rcx
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  std::vector<int>::const_reference v89; // rdx
  PlayerCustomDungeonComp *CustomDungeonComp; // rax
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  std::vector<int>::const_reference v94; // rdx
  std::vector<int>::const_reference v95; // rdx
  PlayerOfferingComp *OfferingComp; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  bool result; // al
  bool is_finished; // [rsp+1Bh] [rbp-175h]
  int i; // [rsp+1Ch] [rbp-174h]
  uint32_t offering_id; // [rsp+24h] [rbp-16Ch]
  uint32_t offering_level; // [rsp+28h] [rbp-168h]
  uint32_t dungeon_id; // [rsp+2Ch] [rbp-164h]
  uint32_t bundle_id; // [rsp+30h] [rbp-160h]
  uint32_t param_key; // [rsp+34h] [rbp-15Ch]
  uint32_t param_value; // [rsp+38h] [rbp-158h]
  uint32_t value; // [rsp+3Ch] [rbp-154h]
  uint32_t item_id; // [rsp+40h] [rbp-150h]
  uint32_t item_count; // [rsp+44h] [rbp-14Ch]
  uint32_t end_time; // [rsp+48h] [rbp-148h]
  uint32_t now_1; // [rsp+4Ch] [rbp-144h]
  uint32_t play_id_1; // [rsp+50h] [rbp-140h]
  uint32_t play_id_0; // [rsp+54h] [rbp-13Ch]
  uint32_t search_id; // [rsp+58h] [rbp-138h]
  uint32_t mechanicus_id; // [rsp+5Ch] [rbp-134h]
  uint32_t now_0; // [rsp+64h] [rbp-12Ch]
  uint32_t begin_time_0; // [rsp+68h] [rbp-128h]
  uint32_t day_offset_0; // [rsp+6Ch] [rbp-124h]
  uint32_t now_day_0; // [rsp+70h] [rbp-120h]
  uint32_t begin_day_0; // [rsp+74h] [rbp-11Ch]
  uint32_t now; // [rsp+78h] [rbp-118h]
  uint32_t begin_time; // [rsp+7Ch] [rbp-114h]
  uint32_t day_offset; // [rsp+80h] [rbp-110h]
  uint32_t now_day; // [rsp+84h] [rbp-10Ch]
  uint32_t begin_day; // [rsp+88h] [rbp-108h]
  uint32_t quest_id; // [rsp+8Ch] [rbp-104h]
  std::vector<int>::const_iterator __for_begin; // [rsp+90h] [rbp-100h] BYREF
  std::vector<int>::const_iterator __for_end; // [rsp+98h] [rbp-F8h] BYREF
  const NewActivityExcelConfigMgr *conf_mgr; // [rsp+A0h] [rbp-F0h]
  const data::DbActivityScheduleConfigMgr *db_activity_schedule_config; // [rsp+A8h] [rbp-E8h]
  const std::vector<int> *__for_range_0; // [rsp+B0h] [rbp-E0h]
  const std::vector<int> *__for_range; // [rsp+B8h] [rbp-D8h]
  common::milog::MiLogStream v134; // [rsp+C0h] [rbp-D0h] BYREF
  char v135[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v135;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 13 scene_id:1169 64 4 13 point_id:1178 80 4 15 watcher_id:1078 96 16 14 scene_ptr:1170";
  *(_QWORD *)(v2 + 16) = BaseActivity::checkCondIsMeet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 96));
  conf_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.new_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( cond->type )
  {
    case NEW_ACTIVITY_COND_TIME_GREATER:
      if ( std::vector<int>::size(&cond->param) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !NewActivityExcelConfigMgr::isScheduleIdValid(conf_mgr, this->schedule_id_) )
        {
          isRegionSearchFinish = 0;
        }
        else
        {
          v7 = common::tools::TimeUtils::getNow();
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ScheduleBeginTime = NewActivityExcelConfigMgr::getScheduleBeginTime(conf_mgr, this->schedule_id_);
          v9 = (int *)std::vector<int>::operator[](&cond->param, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v7 <= ScheduleBeginTime + SAFE_MULTIPLY<int,unsigned int>(*v9, 0x15180u) )
            goto LABEL_205;
          isRegionSearchFinish = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          953);
        v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
               &v134,
               (const char (*)[36])"cond param size error, activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_TIME_LESS:
      if ( std::vector<int>::size(&cond->param) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( !NewActivityExcelConfigMgr::isScheduleIdValid(conf_mgr, this->schedule_id_) )
        {
          isRegionSearchFinish = 0;
        }
        else
        {
          v11 = common::tools::TimeUtils::getNow();
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v12 = NewActivityExcelConfigMgr::getScheduleBeginTime(conf_mgr, this->schedule_id_);
          v13 = (int *)std::vector<int>::operator[](&cond->param, 0LL);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( v11 >= v12 + SAFE_MULTIPLY<int,unsigned int>(*v13, 0x15180u) )
LABEL_205:
            isRegionSearchFinish = 0;
          else
            isRegionSearchFinish = 1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          973);
        v10 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_PLAYER_LEVEL_GREATER:
      if ( std::vector<int>::size(&cond->param) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        Level = PlayerBasicComp::getLevel(BasicComp);
        v23 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        isRegionSearchFinish = Level > *v23;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1037);
        v20 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_QUEST_FINISH:
    case NEW_ACTIVITY_COND_QUEST_FINISH_ALLOW_QUICK_OPEN:
      if ( std::vector<int>::empty(&cond->param) )
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1056);
        v28 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      else
      {
        __for_range = &cond->param;
        __for_begin._M_current = std::vector<int>::begin(&cond->param)._M_current;
        __for_end._M_current = std::vector<int>::end(&cond->param)._M_current;
        while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
        {
          v29 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          quest_id = *v29;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          QuestComp = Player::getQuestComp(this->player_);
          if ( PlayerQuestComp::getQuestState(QuestComp, quest_id) != QUEST_STATE_FINISHED )
          {
            isRegionSearchFinish = 0;
            goto LABEL_206;
          }
          __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
        }
        isRegionSearchFinish = 1;
      }
      break;
    case NEW_ACTIVITY_COND_FINISH_WATCHER:
      if ( std::vector<int>::empty(&cond->param) )
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1073);
        v31 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      else
      {
        is_finished = 1;
        __for_range_0 = &cond->param;
        __for_begin._M_current = std::vector<int>::begin(&cond->param)._M_current;
        __for_end._M_current = std::vector<int>::end(&cond->param)._M_current;
        while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
        {
          v32 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 80) = *v32;
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,int>(
                  &this->finished_watcher_id_set_,
                  (const int *)(v2 + 80)) )
          {
            is_finished = 0;
            break;
          }
          __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
        }
        isRegionSearchFinish = is_finished;
      }
      break;
    case NEW_ACTIVITY_COND_DAYS_GREAT_EQUAL:
      if ( std::vector<int>::size(&cond->param) )
      {
        now = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(conf_mgr, this->schedule_id_);
        if ( now >= begin_time )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 96));
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          day_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v15->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
          now_day = common::tools::TimeUtils::getTimeDay(now, day_offset);
          begin_day = common::tools::TimeUtils::getTimeDay(begin_time, day_offset);
          if ( now_day >= begin_day )
          {
            v16 = std::vector<int>::operator[](&cond->param, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            isRegionSearchFinish = now_day - begin_day + 1 >= *v16;
          }
          else
          {
            isRegionSearchFinish = 0;
          }
        }
        else
        {
          isRegionSearchFinish = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          992);
        v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_DAYS_LESS:
      if ( std::vector<int>::size(&cond->param) )
      {
        now_0 = common::tools::TimeUtils::getNow();
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        begin_time_0 = NewActivityExcelConfigMgr::getScheduleBeginTime(conf_mgr, this->schedule_id_);
        if ( now_0 >= begin_time_0 )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 96));
          v18 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          day_offset_0 = ConstValueExcelConfigMgr::getTimeOffsetSec(&v18->design_config.txt_config_mgr.const_value_config_mgr);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
          now_day_0 = common::tools::TimeUtils::getTimeDay(now_0, day_offset_0);
          begin_day_0 = common::tools::TimeUtils::getTimeDay(begin_time_0, day_offset_0);
          if ( now_day_0 >= begin_day_0 )
          {
            v19 = std::vector<int>::operator[](&cond->param, 0LL);
            if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            isRegionSearchFinish = now_day_0 - begin_day_0 + 1 < *v19;
          }
          else
          {
            isRegionSearchFinish = 0;
          }
        }
        else
        {
          isRegionSearchFinish = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1014);
        v17 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_PLAYER_LEVEL_GREAT_EQUAL:
      if ( std::vector<int>::size(&cond->param) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = Player::getBasicComp(this->player_);
        v26 = PlayerBasicComp::getLevel(v25);
        v27 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        isRegionSearchFinish = v26 >= *v27;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1046);
        v24 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_SCENE_MP_PLAY_ACTIVATED:
      if ( std::vector<int>::empty(&cond->param) )
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1092);
        v33 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      else
      {
        v34 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ScenePlayComp = (unsigned int)Player::getScenePlayComp(this->player_);
        PlayerScenePlayComp::findScenePlayPtr((PlayerScenePlayComp *const)(v2 + 96), ScenePlayComp);
        if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v2 + 96)) )
        {
          isRegionSearchFinish = 0;
        }
        else
        {
          v36 = std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          isRegionSearchFinish = BaseScenePlay::getPhase(v36) == Activated;
        }
        std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v2 + 96));
      }
      break;
    case NEW_ACTIVITY_COND_MECHANICUS_OPEN:
      if ( std::vector<int>::empty(&cond->param) )
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1109);
        v37 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      else
      {
        v38 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        mechanicus_id = *v38;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        MechanicusComp = Player::getMechanicusComp(this->player_);
        isRegionSearchFinish = mechanicus_id == PlayerMechanicusComp::getCurMechanicusId(MechanicusComp);
      }
      break;
    case NEW_ACTIVITY_COND_FINISH_REGION_SEARCH_LOGIC:
      if ( std::vector<int>::size(&cond->param) > 1 )
      {
        v41 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v41 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v41 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        play_id_0 = *v41;
        v42 = std::vector<int>::operator[](&cond->param, 1uLL);
        if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        search_id = *v42;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        RegionSearchComp = Player::getRegionSearchComp(this->player_);
        isRegionSearchFinish = PlayerRegionSearchComp::isRegionSearchFinish(RegionSearchComp, play_id_0, search_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1119);
        v40 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v134,
                (const char (*)[36])"cond param size error, activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_FINISH_REGION_SEARCH:
      if ( std::vector<int>::empty(&cond->param) )
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1130);
        v44 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v134,
                (const char (*)[36])"cond param size error, activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      else
      {
        v45 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        play_id_1 = *v45;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v46 = Player::getRegionSearchComp(this->player_);
        isRegionSearchFinish = PlayerRegionSearchComp::isPlayFinish(v46, play_id_1);
      }
      break;
    case NEW_ACTIVITY_COND_SEPCIFIED_ACTIVITY_END:
      if ( std::vector<int>::empty(&cond->param) )
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1140);
        v47 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      else
      {
        v48 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 80) = *v48;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 96));
        v49 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v50 = !NewActivityExcelConfigMgr::isScheduleIdValid(
                 &v49->design_config.txt_config_mgr.new_activity_config_mgr,
                 *(_DWORD *)(v2 + 80));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
        if ( v50 )
        {
          common::milog::MiLogStream::create(
            &v134,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "checkCondIsMeet",
            1146);
          v51 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v134,
                  (const char (*)[49])"param_schedule_id is invalid, param_schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v134);
          isRegionSearchFinish = 0;
        }
        else
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v2 + 96));
          v52 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          end_time = NewActivityExcelConfigMgr::getScheduleEndTime(
                       &v52->design_config.txt_config_mgr.new_activity_config_mgr,
                       *(_DWORD *)(v2 + 80),
                       0);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
          now_1 = common::tools::TimeUtils::getNow();
          if ( end_time && now_1 >= end_time )
          {
            isRegionSearchFinish = 1;
          }
          else
          {
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)(v2 + 96));
            db_activity_schedule_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.db_config_mgr.db_local_config_mgr.activity_schedule_config_mgr;
            std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
            isRegionSearchFinish = data::DbActivityScheduleConfigMgr::isExpiredScheduleIdInDb(
                                     db_activity_schedule_config,
                                     *(_DWORD *)(v2 + 80));
          }
        }
      }
      break;
    case NEW_ACTIVITY_COND_UNLOCKED_ALL_LISTED_SCENE_POINTS:
      if ( std::vector<int>::size(&cond->param) > 1 )
      {
        v56 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *v56;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = (unsigned int)Player::getSceneComp(this->player_);
        PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 96), SceneComp);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v134,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "checkCondIsMeet",
            1173);
          v58 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v134, (const char (*)[11])off_2505D580);
          v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v58,
                  (const unsigned int *)(v2 + 48));
          v60 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  v59,
                  (const char (*)[23])" nullptr, activity id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &this->activity_id_);
          common::milog::MiLogStream::~MiLogStream(&v134);
          isRegionSearchFinish = 0;
        }
        else
        {
          for ( i = 1; ; ++i )
          {
            if ( i >= std::vector<int>::size(&cond->param) )
            {
              isRegionSearchFinish = 1;
              goto LABEL_150;
            }
            v61 = std::vector<int>::operator[](&cond->param, i);
            if ( *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v61 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v61 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 64) = *v61;
            v62 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            if ( !Scene::isPointUnlocked(v62, *(_DWORD *)(v2 + 64)) )
              break;
          }
          common::milog::MiLogStream::create(
            &v134,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/base_activity.cpp",
            "checkCondIsMeet",
            1181);
          v63 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v134, (const char (*)[8])" scene:");
          v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v63,
                  (const unsigned int *)(v2 + 48));
          v65 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v64, (const char (*)[8])" point:");
          v66 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v65,
                  (const unsigned int *)(v2 + 64));
          v67 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  v66,
                  (const char (*)[22])" locked for activity:");
          v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, &this->activity_id_);
          v69 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v68, (const char (*)[6])" uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 80) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, (const unsigned int *)(v2 + 80));
          common::milog::MiLogStream::~MiLogStream(&v134);
          isRegionSearchFinish = 0;
        }
LABEL_150:
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 96));
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1166);
        v53 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        v54 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &this->activity_id_);
        v55 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v54, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<int>(v55, &cond->param);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_ITEM_COUNT_GREATER:
      if ( std::vector<int>::size(&cond->param) > 1 )
      {
        v78 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v78 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v78 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        item_id = *v78;
        v79 = std::vector<int>::operator[](&cond->param, 1uLL);
        if ( *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v79 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        item_count = *v79;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        isRegionSearchFinish = item_count <= PlayerItemComp::getItemCount(ItemComp, item_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1215);
        v75 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v134,
                (const char (*)[35])"cond param size error,activity id:");
        v76 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, &this->activity_id_);
        v77 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v76, (const char (*)[2])" ");
        common::milog::MiLogStream::operator<<<int>(v77, &cond->param);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_QUEST_GLOBAL_VAR_GREATER:
    case NEW_ACTIVITY_COND_QUEST_GLOBAL_VAR_LESS:
    case NEW_ACTIVITY_COND_QUEST_GLOBAL_VAR_EQUAL:
      v70 = std::vector<int>::operator[](&cond->param, 0LL);
      if ( *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v70 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v70 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      param_key = *v70;
      v71 = std::vector<int>::operator[](&cond->param, 1uLL);
      if ( *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v71 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v71 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      param_value = *v71;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v72 = Player::getQuestComp(this->player_);
      value = PlayerQuestComp::getGlobalVarValue(v72, param_key);
      if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( cond->type == NEW_ACTIVITY_COND_QUEST_GLOBAL_VAR_GREATER )
      {
        isRegionSearchFinish = value > param_value;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( cond->type == NEW_ACTIVITY_COND_QUEST_GLOBAL_VAR_LESS )
        {
          isRegionSearchFinish = value < param_value;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          if ( cond->type == NEW_ACTIVITY_COND_QUEST_GLOBAL_VAR_EQUAL )
          {
            isRegionSearchFinish = value == param_value;
          }
          else
          {
            common::milog::MiLogStream::create(
              &v134,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/base_activity.cpp",
              "checkCondIsMeet",
              1208);
            v73 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    &v134,
                    (const char (*)[12])"cond type: ");
            v74 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
                    v73,
                    &cond->type);
            common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v74, (const char (*)[11])off_2505D700);
            common::milog::MiLogStream::~MiLogStream(&v134);
            isRegionSearchFinish = 0;
          }
        }
      }
      break;
    case NEW_ACTIVITY_COND_GROUP_BUNDLE_FINISHED:
      if ( std::vector<int>::size(&cond->param) )
      {
        v84 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v84 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v84 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        bundle_id = *v84;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        GroupLinkComp = Player::getGroupLinkComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        isRegionSearchFinish = PlayerGroupLinkComp::isGroupBundleFinish(GroupLinkComp, this->activity_id_, bundle_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1226);
        v81 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v134, (const char (*)[12])"cond_type: ");
        v82 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
                v81,
                &cond->type);
        v83 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v82,
                (const char (*)[20])" param not enough: ");
        common::milog::MiLogStream::operator<<<int>(v83, &cond->param);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    case NEW_ACTIVITY_COND_FINISH_CUSTOM_DUNGEON_OFFICIAL:
      if ( std::vector<int>::empty(&cond->param) )
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1236);
        v86 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v134, (const char (*)[12])"cond_type: ");
        v87 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
                v86,
                &cond->type);
        v88 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v87,
                (const char (*)[20])" param not enough: ");
        common::milog::MiLogStream::operator<<<int>(v88, &cond->param);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      else
      {
        v89 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v89 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        dungeon_id = *v89;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
        isRegionSearchFinish = PlayerCustomDungeonComp::isOfficialDungeonFinish(CustomDungeonComp, dungeon_id);
      }
      break;
    case NEW_ACTIVITY_COND_OFFERING_LEVEL_GREAT_EQUAL:
      if ( std::vector<int>::size(&cond->param) > 1 )
      {
        v94 = std::vector<int>::operator[](&cond->param, 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v94 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v94 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        offering_id = *v94;
        v95 = std::vector<int>::operator[](&cond->param, 1uLL);
        if ( *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v95 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v95 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        offering_level = *v95;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        OfferingComp = Player::getOfferingComp(this->player_);
        isRegionSearchFinish = offering_level <= PlayerOfferingComp::findOfferingLevel(OfferingComp, offering_id);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v134,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "checkCondIsMeet",
          1246);
        v91 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v134, (const char (*)[12])"cond_type: ");
        v92 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
                v91,
                &cond->type);
        v93 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                v92,
                (const char (*)[20])" param not enough: ");
        common::milog::MiLogStream::operator<<<int>(v93, &cond->param);
        common::milog::MiLogStream::~MiLogStream(&v134);
        isRegionSearchFinish = 0;
      }
      break;
    default:
      common::milog::MiLogStream::create(
        &v134,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "checkCondIsMeet",
        1255);
      v97 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v134, (const char (*)[12])"cond type: ");
      v98 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
              v97,
              &cond->type);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v98, (const char (*)[11])off_2505D700);
      common::milog::MiLogStream::~MiLogStream(&v134);
      isRegionSearchFinish = 0;
      break;
  }
LABEL_206:
  result = isRegionSearchFinish;
  if ( v135 == (char *)v2 )
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

// Line 1263: range 00000000137B6C18-00000000137B70AA
void __cdecl BaseActivity::execActionVec(
        BaseActivity *const this,
        const std::vector<data::NewActivityExec> *action_vec,
        uint32_t cond_id,
        bool is_refresh)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  const data::NewActivityExec *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned __int64 v12; // rax
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  std::vector<data::NewActivityExec>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<data::NewActivityExec>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<data::NewActivityExec> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 48 40 16 action_exec:1264";
  *(_QWORD *)(v4 + 16) = BaseActivity::execActionVec;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = -218103808;
  v6[536862723] = -202116109;
  __for_range = action_vec;
  __for_begin._M_current = std::vector<data::NewActivityExec>::begin(action_vec)._M_current;
  __for_end._M_current = std::vector<data::NewActivityExec>::end(action_vec)._M_current;
  while ( __gnu_cxx::operator!=<data::NewActivityExec const*,std::vector<data::NewActivityExec>>(
            &__for_begin,
            &__for_end) )
  {
    v7 = __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator*(&__for_begin);
    data::NewActivityExec::NewActivityExec((data::NewActivityExec *const)(v4 + 48), v7);
    if ( is_refresh )
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(this->_vptr_DescribalBase + 42);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(BaseActivity *const, unsigned __int64))v8)(this, v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execActionVec",
          1270);
        v9 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
               &v18,
               (const char (*)[28])"refreshAction failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_14:
        val = Player::getUid(this->player_);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
        v11 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v10, (const char (*)[9])" ,type: ");
        common::milog::MiLogStream::operator<<<data::NewActivityActionType,(data::NewActivityActionType*)0>(
          v11,
          (const data::NewActivityActionType *)(v4 + 56));
        common::milog::MiLogStream::~MiLogStream(&v18);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v12 = (unsigned __int64)(this->_vptr_DescribalBase + 41);
      if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
        v12 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(BaseActivity *const, unsigned __int64))v12)(this, v4 + 48) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execActionVec",
          1277);
        v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v18,
               (const char (*)[25])"execAction failed, uid: ");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_14;
      }
    }
    data::NewActivityExec::~NewActivityExec((data::NewActivityExec *const)(v4 + 48));
    __gnu_cxx::__normal_iterator<data::NewActivityExec const*,std::vector<data::NewActivityExec>>::operator++(&__for_begin);
  }
  if ( v19 == (char *)v4 )
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
};

// Line 1284: range 00000000137B70AC-00000000137B77E6
int32_t __cdecl BaseActivity::refreshAction(BaseActivity *const this, const data::NewActivityExec *action_exec)
{
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v3; // rbx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rbx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_UNLOAD_SPECIFY_BUSINESSINFO_DYNAMIC_GROUP )
  {
    if ( BaseActivity::execUnloadSpecifyBusinessInfoDynamicGroup(this, action_exec) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "refreshAction",
        1341);
      v14 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        v15,
        (const char (*)[49])" execUnloadSpecifyBusinessInfoDynamicGroup fails");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    return 0;
  }
  if ( type > NEW_ACTIVITY_ACTION_UNLOAD_SPECIFY_BUSINESSINFO_DYNAMIC_GROUP )
    return 0;
  if ( type == NEW_ACTIVITY_ACTION_LOAD_SPECIFY_BUSINESSINFO_DYNAMIC_GROUP )
  {
    if ( BaseActivity::execLoadSpecifyBusinessInfoDynamicGroup(this, action_exec) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "refreshAction",
        1333);
      v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        v13,
        (const char (*)[47])" execLoadSpecifyBusinessInfoDynamicGroup fails");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    return 0;
  }
  if ( type == NEW_ACTIVITY_ACTION_DELAY_UNLOAD_DYNAMIC_GROUP )
  {
    if ( BaseActivity::execUnloadDynamicGroup(this, action_exec, 1) )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "refreshAction",
        1325);
      v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v11,
        (const char (*)[33])"delay execLoadDynamicGroup fails");
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    return 0;
  }
  if ( type > NEW_ACTIVITY_ACTION_DELAY_UNLOAD_DYNAMIC_GROUP )
    return 0;
  if ( type == NEW_ACTIVITY_ACTION_UNREGISTER_GAME_TIME_DYNAMIC_GROUP )
  {
    if ( !BaseActivity::execUnloadTimeDynamicGroup(this, action_exec) )
      return 0;
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "refreshAction",
      1316);
    v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      v9,
      (const char (*)[34])" execUnloadTimeDynamicGroup fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
  else
  {
    if ( type > NEW_ACTIVITY_ACTION_UNREGISTER_GAME_TIME_DYNAMIC_GROUP )
      return 0;
    if ( type != NEW_ACTIVITY_ACTION_REGISTER_GAME_TIME_DYNAMIC_GROUP )
    {
      if ( type != NEW_ACTIVITY_ACTION_LOAD_DYNAMIC_GROUP )
      {
        if ( type != NEW_ACTIVITY_ACTION_UNLOAD_DYNAMIC_GROUP
          || !BaseActivity::execUnloadDynamicGroup(this, action_exec, 0) )
        {
          return 0;
        }
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "refreshAction",
          1299);
        v3 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_17;
      }
      if ( BaseActivity::execLoadDynamicGroup(this, action_exec) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "refreshAction",
          1291);
        v3 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
LABEL_17:
        val = Player::getUid(this->player_);
        v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v4,
          (const char (*)[28])" execLoadDynamicGroup fails");
        common::milog::MiLogStream::~MiLogStream(&v17);
      }
      return 0;
    }
    if ( !BaseActivity::execLoadTimeDynamicGroup(this, action_exec) )
      return 0;
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "refreshAction",
      1307);
    v5 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v17, (const char (*)[5])"uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      v6,
      (const char (*)[32])" execLoadTimeDynamicGroup fails");
    common::milog::MiLogStream::~MiLogStream(&v17);
    return -1;
  }
};

// Line 1352: range 00000000137B77E8-00000000137C05E4
int32_t __cdecl BaseActivity::execAction(BaseActivity *const this, const data::NewActivityExec *action_exec)
{
  int32_t v2; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r13
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // r13
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v18; // r13
  const std::string *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r13
  const std::string *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r13
  common::milog::MiLogStream *v25; // rax
  const std::string *v26; // rax
  common::milog::MiLogStream *v27; // r13
  const std::string *v28; // rax
  common::milog::MiLogStream *v29; // rax
  const std::string *v30; // rax
  common::milog::MiLogStream *v31; // r13
  const std::string *v32; // rax
  common::milog::MiLogStream *v33; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // rax
  PlayerSceneComp *v35; // rax
  common::milog::MiLogStream *v36; // r13
  const std::string *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // r13
  const std::string *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  PlayerQuestComp *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // r13
  common::milog::MiLogStream *v51; // rax
  const std::string *v52; // rax
  common::milog::MiLogStream *v53; // r13
  const std::string *v54; // rax
  common::milog::MiLogStream *v55; // rax
  PlayerMpPlayComp *MpPlayComp; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // r13
  common::milog::MiLogStream *v60; // r13
  common::milog::MiLogStream *v61; // rax
  const std::string *v62; // rax
  common::milog::MiLogStream *v63; // r13
  const std::string *v64; // rax
  common::milog::MiLogStream *v65; // rax
  PlayerMpPlayComp *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // r13
  common::milog::MiLogStream *v70; // rax
  const std::string *v71; // rax
  common::milog::MiLogStream *v72; // r13
  const std::string *v73; // rax
  common::milog::MiLogStream *v74; // rax
  uint32_t ScenePlayComp; // eax
  bool v76; // r13
  common::milog::MiLogStream *v77; // rax
  PlayerScenePlayComp *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // r13
  common::milog::MiLogStream *v81; // rax
  const std::string *v82; // rax
  common::milog::MiLogStream *v83; // r13
  const std::string *v84; // rax
  common::milog::MiLogStream *v85; // rax
  PlayerScenePlayComp *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r13
  common::milog::MiLogStream *v89; // rax
  const std::string *v90; // rax
  common::milog::MiLogStream *v91; // r13
  const std::string *v92; // rax
  common::milog::MiLogStream *v93; // rax
  PlayerScenePlayComp *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // r13
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // r13
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // r13
  common::milog::MiLogStream *v101; // rax
  common::milog::MiLogStream *v102; // r13
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // r13
  common::milog::MiLogStream *v105; // rax
  const std::string *v106; // rax
  common::milog::MiLogStream *v107; // r13
  const std::string *v108; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v109; // rax
  common::milog::MiLogStream *v110; // rax
  std::map<unsigned int,std::set<unsigned int>> *p_activated_activity_sale_map; // rcx
  common::milog::MiLogStream *v112; // r13
  common::milog::MiLogStream *v113; // rax
  const std::string *v114; // rax
  common::milog::MiLogStream *v115; // r13
  const std::string *v116; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v117; // rax
  common::milog::MiLogStream *v118; // rax
  std::map<unsigned int,std::set<unsigned int>> *v119; // rcx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::pointer v120; // rax
  const std::string *v121; // rax
  const std::string *v122; // rax
  common::milog::MiLogStream *v124; // rax
  const std::string *v125; // rax
  common::milog::MiLogStream *v126; // rax
  uint32_t v127; // eax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // r13
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v131; // rax
  data::SceneType SceneType; // eax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // rdx
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  _BOOL4 v139; // r15d
  uint32_t v140; // eax
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // r13
  int v144; // r15d
  Group *v145; // rax
  int v146; // r15d
  common::milog::MiLogStream *v147; // r13
  _BOOL4 v148; // r15d
  uint32_t v149; // eax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // r13
  int v153; // r15d
  Group *v154; // rax
  common::milog::MiLogStream *v155; // r13
  common::milog::MiLogStream *v156; // rax
  const std::string *v157; // rax
  common::milog::MiLogStream *v158; // r13
  const std::string *v159; // rax
  common::milog::MiLogStream *v160; // rax
  PlayerMechanicusComp *MechanicusComp; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // r13
  common::milog::MiLogStream *v165; // rax
  const std::string *v166; // rax
  common::milog::MiLogStream *v167; // r13
  const std::string *v168; // rax
  common::milog::MiLogStream *v169; // rax
  PlayerMechanicusComp *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rax
  common::milog::MiLogStream *v173; // r13
  common::milog::MiLogStream *v174; // rax
  const std::string *v175; // rax
  common::milog::MiLogStream *v176; // r13
  const std::string *v177; // rax
  common::milog::MiLogStream *v178; // rax
  PlayerMechanicusComp *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // r13
  common::milog::MiLogStream *v183; // rax
  const std::string *v184; // rax
  common::milog::MiLogStream *v185; // r13
  const std::string *v186; // rax
  common::milog::MiLogStream *v187; // rax
  PlayerRegionSearchComp *RegionSearchComp; // rax
  common::milog::MiLogStream *v189; // rax
  common::milog::MiLogStream *v190; // r13
  common::milog::MiLogStream *v191; // rax
  const std::string *v192; // rax
  common::milog::MiLogStream *v193; // r13
  const std::string *v194; // rax
  common::milog::MiLogStream *v195; // rax
  PlayerRegionSearchComp *v196; // rax
  common::milog::MiLogStream *v197; // rax
  common::milog::MiLogStream *v198; // rax
  common::milog::MiLogStream *v199; // rcx
  common::milog::MiLogStream *v200; // rcx
  int v201; // r15d
  unsigned __int64 v202; // rax
  unsigned __int64 v203; // rdx
  unsigned __int64 v204; // rax
  unsigned __int64 v205; // rdx
  common::milog::MiLogStream *v206; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v207; // rax
  common::milog::MiLogStream *v208; // rax
  common::milog::MiLogStream *v209; // r13
  common::milog::MiLogStream *v210; // rax
  common::milog::MiLogStream *v211; // r13
  common::milog::MiLogStream *v212; // rax
  common::milog::MiLogStream *v213; // r13
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v215; // rax
  common::milog::MiLogStream *v216; // rax
  common::milog::MiLogStream *v217; // r13
  common::milog::MiLogStream *v218; // rax
  common::milog::MiLogStream *v219; // rax
  common::milog::MiLogStream *v220; // r13
  char *i; // r13
  PlayerMailComp *MailComp; // rax
  common::milog::MiLogStream *v223; // rax
  common::milog::MiLogStream *v224; // rax
  common::milog::MiLogStream *v225; // r13
  common::milog::MiLogStream *v226; // r13
  common::milog::MiLogStream *v227; // rax
  int v228; // eax
  PlayerSceneComp *v229; // rax
  PlayerSceneComp *v230; // rax
  common::milog::MiLogStream *v231; // r13
  common::milog::MiLogStream *v232; // rax
  const std::string *v233; // rax
  std::vector<std::string>::const_reference v234; // rax
  const char *v235; // rax
  common::milog::MiLogStream *v236; // rax
  common::milog::MiLogStream *v237; // r13
  common::milog::MiLogStream *v238; // rax
  uint32_t *v239; // rdx
  PlayerSceneComp *v240; // rax
  PlayerSceneComp *v241; // rax
  common::milog::MiLogStream *v242; // r13
  common::milog::MiLogStream *v243; // rax
  const std::string *v244; // rax
  common::milog::MiLogStream *v245; // r13
  const std::string *v246; // rax
  common::milog::MiLogStream *v247; // rax
  int v248; // eax
  PlayerSceneComp *v249; // rax
  PlayerSceneComp *v250; // rax
  common::milog::MiLogStream *v251; // r13
  common::milog::MiLogStream *v252; // rax
  common::milog::MiLogStream *v253; // rax
  common::milog::MiLogStream *v254; // rax
  uint32_t *v255; // rdx
  common::milog::MiLogStream *v256; // r13
  common::milog::MiLogStream *v257; // rax
  common::milog::MiLogStream *v258; // rax
  common::milog::MiLogStream *v259; // rax
  uint32_t *v260; // rdx
  PlayerGroupLinkComp *GroupLinkComp; // rax
  common::milog::MiLogStream *v262; // r13
  common::milog::MiLogStream *v263; // rax
  common::milog::MiLogStream *v264; // rax
  common::milog::MiLogStream *v265; // rax
  uint32_t *v266; // rdx
  PlayerGroupLinkComp *v267; // rax
  common::milog::MiLogStream *v268; // r13
  common::milog::MiLogStream *v269; // rax
  const std::string *v270; // rax
  common::milog::MiLogStream *v271; // r13
  const std::string *v272; // rax
  common::milog::MiLogStream *v273; // rax
  PlayerGroupLinkComp *p_schedule_id; // rdi
  bool v275; // cl
  uint32_t schedule_id; // edx
  common::milog::MiLogStream *v277; // r13
  common::milog::MiLogStream *v278; // rax
  const std::string *v279; // rax
  common::milog::MiLogStream *v280; // r13
  const std::string *v281; // rax
  common::milog::MiLogStream *v282; // rax
  const std::string *v283; // rax
  common::milog::MiLogStream *v284; // r13
  const std::string *v285; // rax
  common::milog::MiLogStream *v286; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v287; // rax
  common::milog::MiLogStream *v288; // r13
  common::milog::MiLogStream *v289; // rax
  const std::string *v290; // rax
  common::milog::MiLogStream *v291; // r13
  const std::string *v292; // rax
  common::milog::MiLogStream *v293; // rax
  const std::string *v294; // rax
  common::milog::MiLogStream *v295; // r13
  const std::string *v296; // rax
  common::milog::MiLogStream *v297; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v298; // rax
  common::milog::MiLogStream *v299; // r13
  common::milog::MiLogStream *v300; // rax
  common::milog::MiLogStream *v301; // r13
  common::milog::MiLogStream *v302; // rax
  const std::string *v303; // rax
  common::milog::MiLogStream *v304; // r13
  const std::string *v305; // rax
  common::milog::MiLogStream *v306; // rax
  PlayerCustomDungeonComp *CustomDungeonComp; // rax
  PlayerCustomDungeonComp *v308; // rax
  common::milog::MiLogStream *v309; // r13
  common::milog::MiLogStream *v310; // rax
  const std::string *v311; // rax
  common::milog::MiLogStream *v312; // r13
  const std::string *v313; // rax
  common::milog::MiLogStream *v314; // rax
  PlayerCustomDungeonComp *v315; // rax
  PlayerCustomDungeonComp *v316; // rax
  common::milog::MiLogStream *v317; // rax
  int v318; // r15d
  uint32_t *v319; // rdx
  PlayerGivingComp *GivingComp; // rax
  common::milog::MiLogStream *v321; // rax
  int v322; // r15d
  uint32_t *v323; // rdx
  PlayerGivingComp *v324; // rax
  PlayerUgcComp *UgcComp; // rax
  PlayerUgcComp *v326; // rax
  common::milog::MiLogStream *v327; // r13
  common::milog::MiLogStream *v328; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+3Ah] [rbp-506h] BYREF
  bool is_force; // [rsp+3Bh] [rbp-505h]
  int32_t ret; // [rsp+3Ch] [rbp-504h]
  uint32_t giving_id_0; // [rsp+40h] [rbp-500h]
  uint32_t giving_id; // [rsp+44h] [rbp-4FCh]
  uint32_t bundle_id_1; // [rsp+48h] [rbp-4F8h]
  uint32_t bundle_id_0; // [rsp+4Ch] [rbp-4F4h]
  uint32_t bundle_id; // [rsp+50h] [rbp-4F0h]
  uint32_t scene_id; // [rsp+54h] [rbp-4ECh]
  std::vector<unsigned int> *__for_range_5; // [rsp+58h] [rbp-4E8h]
  std::vector<unsigned int> *__for_range_4; // [rsp+60h] [rbp-4E0h]
  PlayerGroupLinkComp *group_link_comp_1; // [rsp+68h] [rbp-4D8h]
  std::vector<unsigned int> *__for_range_3; // [rsp+70h] [rbp-4D0h]
  PlayerGroupLinkComp *group_link_comp_0; // [rsp+78h] [rbp-4C8h]
  std::vector<unsigned int> *__for_range_2; // [rsp+80h] [rbp-4C0h]
  proto::Uint32Pair *notify_pair_0; // [rsp+88h] [rbp-4B8h]
  proto::Uint32Pair *notify_pair; // [rsp+90h] [rbp-4B0h]
  PlayerGroupLinkComp *group_link_comp; // [rsp+98h] [rbp-4A8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+A0h] [rbp-4A0h]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+A8h] [rbp-498h]
  const data::NewActivityScoreLimitExcelConfig *score_limit_config_ptr; // [rsp+B0h] [rbp-490h]
  const data::NewActivitySaleExcelConfig *sale_config_ptr_0; // [rsp+B8h] [rbp-488h]
  const data::NewActivitySaleExcelConfig *sale_config_ptr; // [rsp+C0h] [rbp-480h]
  std::set<unsigned int> *sale_id_set; // [rsp+C8h] [rbp-478h]
  const std::vector<std::string> *__for_range_0; // [rsp+D0h] [rbp-470h]
  const std::string *param_0; // [rsp+D8h] [rbp-468h]
  const std::vector<std::string> *__for_range; // [rsp+E0h] [rbp-460h]
  const std::string *param; // [rsp+E8h] [rbp-458h]
  common::milog::MiLogStream v359; // [rsp+F0h] [rbp-450h] BYREF
  char v360[1072]; // [rsp+110h] [rbp-430h] BYREF

  v3 = (unsigned __int64)v360;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(1024LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "14 48 4 13 group_id:1702 64 4 13 suite_id:1702 80 4 13 point_id:2187 96 4 13 scene_id:1370 112 8"
                        " 9 iter:1684 144 8 16 source_info:1540 176 16 20 world_scene_ptr:1879 208 16 14 group_ptr:1738 2"
                        "40 24 18 giving_id_vec:2302 304 28 16 log_context:1708 368 32 16 transaction:1956 432 32 11 noti"
                        "fy:1658 496 160 19 script_context:1712 720 232 14 mail_data:1950";
  *(_QWORD *)(v3 + 16) = BaseActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = 61956;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -219020288;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = -218959118;
  v5[536862742] = 62194;
  v5[536862749] = -218103808;
  v5[536862750] = -202116109;
  v5[536862751] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  switch ( action_exec->type )
  {
    case NEW_ACTIVITY_ACTION_UNLOCK_POINT:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1359);
        v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
               v6,
               (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1366);
        v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[10])"strToNum ");
        v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      if ( std::vector<std::string>::size(&action_exec->param) <= 1 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 208));
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        *(_DWORD *)(v3 + 96) = TxtConfigMgr::getDefaultWorldMainSceneId(&v16->design_config.txt_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      }
      else
      {
        v12 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v12, (unsigned int *)(v3 + 96), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            1375);
          v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[10])"strToNum ");
          v14 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
          v15 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
          goto LABEL_509;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::unlockPoint(SceneComp, *(_DWORD *)(v3 + 96), *(_DWORD *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1389);
        v21 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[22])"Activity unlockPoint ");
        v22 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v23 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v22);
        common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" success");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        goto LABEL_508;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1386);
      v18 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[22])"Activity unlockPoint ");
      v19 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v20 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v19);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v20, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_LOCK_POINT:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1396);
        v24 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v25 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v24,
                (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v25, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v26 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v26, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1403);
        v27 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[10])"strToNum ");
        v28 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v29 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, v28);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v29, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      if ( std::vector<std::string>::size(&action_exec->param) <= 1 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 208));
        v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        *(_DWORD *)(v3 + 96) = TxtConfigMgr::getDefaultWorldMainSceneId(&v34->design_config.txt_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      }
      else
      {
        v30 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v30, (unsigned int *)(v3 + 96), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            1412);
          v31 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[10])"strToNum ");
          v32 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
          v33 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, v32);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v33, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
          goto LABEL_509;
        }
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v35 = Player::getSceneComp(this->player_);
      if ( !PlayerSceneComp::lockPoint(v35, *(_DWORD *)(v3 + 96), *(_DWORD *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1426);
        v39 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[20])"Activity lockPoint ");
        v40 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v39, v40);
        common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v41, (const char (*)[9])" success");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        goto LABEL_508;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1423);
      v36 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[20])"Activity lockPoint ");
      v37 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      v38 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, v37);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_ACCEPT_QUEST:
      if ( !std::vector<std::string>::size(&action_exec->param) )
        goto LABEL_508;
      __for_range = &action_exec->param;
      *(std::vector<std::string>::const_iterator *)(v3 + 112) = std::vector<std::string>::begin(&action_exec->param);
      *(std::vector<std::string>::const_iterator *)(v3 + 144) = std::vector<std::string>::end(__for_range);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 112),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 144)) )
          goto LABEL_508;
        param = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 112));
        *(_DWORD *)(v3 + 96) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(param, (unsigned int *)(v3 + 96), 1) )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        QuestComp = Player::getQuestComp(this->player_);
        PlayerQuestComp::acceptQuest(QuestComp, *(_DWORD *)(v3 + 96), 0, 1);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1447);
        v45 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[22])"Activity acceptQuest ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 112));
      }
      common::milog::MiLogStream::create(
        &v359,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1442);
      v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v359, (const char (*)[10])"strToNum ");
      v43 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, param);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v43, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v359);
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_CANCEL_QUEST:
      if ( !std::vector<std::string>::size(&action_exec->param) )
        goto LABEL_508;
      __for_range_0 = &action_exec->param;
      *(std::vector<std::string>::const_iterator *)(v3 + 112) = std::vector<std::string>::begin(&action_exec->param);
      *(std::vector<std::string>::const_iterator *)(v3 + 144) = std::vector<std::string>::end(__for_range_0);
      while ( 1 )
      {
        if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 112),
                (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 144)) )
          goto LABEL_508;
        param_0 = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 112));
        *(_DWORD *)(v3 + 96) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(param_0, (unsigned int *)(v3 + 96), 1) )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v48 = Player::getQuestComp(this->player_);
        PlayerQuestComp::cancelParentQuest(v48, *(_DWORD *)(v3 + 96), 1);
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1469);
        v49 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"Activity cancelParentQuest ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v3 + 112));
      }
      common::milog::MiLogStream::create(
        &v359,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1464);
      v46 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v359, (const char (*)[10])"strToNum ");
      v47 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, param_0);
      common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])" failed");
      common::milog::MiLogStream::~MiLogStream(&v359);
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_FORBID_GROUP:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1475);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)(v3 + 432),
        (const char (*)[22])"Activity forbid group");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_ACTIVE_GROUP:
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1480);
      common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
        (common::milog::MiLogStream *const)(v3 + 432),
        (const char (*)[22])"Activity active group");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_OPEN_MP_PLAY:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1487);
        v50 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v51 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v50,
                (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v51, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v52 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v52, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1494);
        v53 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[10])"strToNum ");
        v54 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v55 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v53, v54);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v55, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MpPlayComp = Player::getMpPlayComp(this->player_);
      if ( !PlayerMpPlayComp::openMpPlay(MpPlayComp, *(_DWORD *)(v3 + 80)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1499);
      v57 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[12])"openMpPlay ");
      v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, (const unsigned int *)(v3 + 80));
      v59 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v58, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_228;
    case NEW_ACTIVITY_ACTION_CLOSE_MP_PLAY:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1508);
        v60 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v61 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v60,
                (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v61, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v62 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v62, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1515);
        v63 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[10])"strToNum ");
        v64 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v65 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v63, v64);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v65, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v66 = Player::getMpPlayComp(this->player_);
      if ( !PlayerMpPlayComp::closeMpPlay(v66, *(_DWORD *)(v3 + 80)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1520);
      v67 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[13])"closeMpPlay ");
      v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, (const unsigned int *)(v3 + 80));
      v59 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v68, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_228;
    case NEW_ACTIVITY_ACTION_ACTIVATE_SCENE_MP_PLAY:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1529);
        v69 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v70 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v69,
                (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v70, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      v71 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v71, (unsigned int *)(v3 + 96), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1536);
        v72 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[10])"strToNum ");
        v73 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v74 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v72, v73);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v74, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 144) = 0;
      *(_DWORD *)(v3 + 148) = 0;
      *(_DWORD *)(v3 + 144) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 148) = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ScenePlayComp = (unsigned int)Player::getScenePlayComp(this->player_);
      PlayerScenePlayComp::createAndInitScenePlay(
        (PlayerScenePlayComp *const)(v3 + 208),
        ScenePlayComp,
        (const ScenePlaySourceInfo *)*(unsigned int *)(v3 + 96));
      v76 = std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v3 + 208));
      std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v3 + 208));
      if ( v76 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1545);
        v77 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[41])"createAndInitScenePlay failed, play_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v78 = Player::getScenePlayComp(this->player_);
      if ( !PlayerScenePlayComp::activateScenePlay(v78, *(_DWORD *)(v3 + 96)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1551);
      v79 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[36])"activateScenePlay failed, play_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v79, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_OPEN_SCENE_MP_PLAY:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1561);
        v80 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v81 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v80,
                (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v81, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      v82 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v82, (unsigned int *)(v3 + 96), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1568);
        v83 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[10])"strToNum ");
        v84 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v85 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v83, v84);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v85, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v86 = Player::getScenePlayComp(this->player_);
      if ( !PlayerScenePlayComp::openScenePlay(v86, *(_DWORD *)(v3 + 96)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1574);
      v87 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[32])"openScenePlay failed, play_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_CLOSE_SCENE_MP_PLAY:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1584);
        v88 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v89 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                v88,
                (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v89, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      v90 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v90, (unsigned int *)(v3 + 96), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1591);
        v91 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[10])"strToNum ");
        v92 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v93 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v91, v92);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v93, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v94 = Player::getScenePlayComp(this->player_);
      if ( !PlayerScenePlayComp::closeScenePlay(v94, *(_DWORD *)(v3 + 96)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1597);
      v95 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[33])"closeScenePlay failed, play_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v95, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_LOAD_DYNAMIC_GROUP:
      if ( BaseActivity::execLoadDynamicGroup(this, action_exec) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1607);
        v96 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        v97 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v96,
                (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          v97,
          (const char (*)[28])" execLoadDynamicGroup fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_UNLOAD_DYNAMIC_GROUP:
      if ( BaseActivity::execUnloadDynamicGroup(this, action_exec, 0) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1615);
        v98 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v98,
                (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          v99,
          (const char (*)[30])" execUnloadDynamicGroup fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_ACTIVATE_SALE:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1639);
        v104 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v105 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v104,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v105, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v106 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v106, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1645);
        v107 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"strToNum failed,  ");
        v108 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v107, v108);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 208));
      v109 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
      sale_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivitySaleExcelConfig(
                          &v109->design_config.txt_config_mgr.new_activity_config_mgr,
                          *(_DWORD *)(v3 + 80));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      if ( !sale_config_ptr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1651);
        v110 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[39])"activity sale data not found, sale_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v110, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      std::set<unsigned int>::insert(
        &this->activated_activity_sale_set_,
        (const std::set<unsigned int>::value_type *)(v3 + 80));
      p_activated_activity_sale_map = &this->activated_activity_sale_map_;
      if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr->sale_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sale_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sale_config_ptr->sale_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 96) = sale_config_ptr->sale_type;
      sale_id_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                      p_activated_activity_sale_map,
                      (std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 96));
      std::set<unsigned int>::insert(sale_id_set, (const std::set<unsigned int>::value_type *)(v3 + 80));
      proto::ActivitySaleChangeNotify::ActivitySaleChangeNotify((proto::ActivitySaleChangeNotify *const)(v3 + 432));
      proto::ActivitySaleChangeNotify::set_sale_id(
        (proto::ActivitySaleChangeNotify *const)(v3 + 432),
        *(_DWORD *)(v3 + 80));
      proto::ActivitySaleChangeNotify::set_is_close((proto::ActivitySaleChangeNotify *const)(v3 + 432), 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_127;
    case NEW_ACTIVITY_ACTION_DEACTIVATE_SALE:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1668);
        v112 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v113 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v112,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v113, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v114 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v114, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1674);
        v115 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"strToNum failed,  ");
        v116 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v115, v116);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 208));
      v117 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
      sale_config_ptr_0 = data::NewActivityExcelConfigMgrBase::findNewActivitySaleExcelConfig(
                            &v117->design_config.txt_config_mgr.new_activity_config_mgr,
                            *(_DWORD *)(v3 + 80));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      if ( !sale_config_ptr_0 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1680);
        v118 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[39])"activity sale data not found, sale_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v118, (const unsigned int *)(v3 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      std::set<unsigned int>::erase(
        &this->activated_activity_sale_set_,
        (const std::set<unsigned int>::key_type *)(v3 + 80));
      v119 = &this->activated_activity_sale_map_;
      if ( *(_BYTE *)(((unsigned __int64)&sale_config_ptr_0->sale_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sale_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sale_config_ptr_0->sale_type >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 96) = sale_config_ptr_0->sale_type;
      *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 112) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                                 v119,
                                                                                 (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 96));
      *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v3 + 144) = std::map<unsigned int,std::set<unsigned int>>::end(&this->activated_activity_sale_map_);
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 112),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v3 + 144)) )
      {
        v120 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v3 + 112));
        std::set<unsigned int>::erase(&v120->second, (const std::set<unsigned int>::key_type *)(v3 + 80));
      }
      proto::ActivitySaleChangeNotify::ActivitySaleChangeNotify((proto::ActivitySaleChangeNotify *const)(v3 + 432));
      proto::ActivitySaleChangeNotify::set_sale_id(
        (proto::ActivitySaleChangeNotify *const)(v3 + 432),
        *(_DWORD *)(v3 + 80));
      proto::ActivitySaleChangeNotify::set_is_close((proto::ActivitySaleChangeNotify *const)(v3 + 432), 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_127:
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 432));
      proto::ActivitySaleChangeNotify::~ActivitySaleChangeNotify((proto::ActivitySaleChangeNotify *const)(v3 + 432));
      goto LABEL_508;
    case NEW_ACTIVIYT_ACTION_REFRESH_GROUP_SUITE:
      if ( std::vector<std::string>::size(&action_exec->param) <= 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1699);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[22])"action param size < 2");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 48) = 0;
      *(_DWORD *)(v3 + 64) = 0;
      v121 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v121, (unsigned int *)(v3 + 48), 1)
        || (v122 = std::vector<std::string>::operator[](&action_exec->param, 1uLL),
            common::tools::StringUtils::strToNum<unsigned int>(v122, (unsigned int *)(v3 + 64), 1)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1705);
        v124 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[18])byte_2505E380);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v124, (const char (*)[36])byte_2505E3C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      SuiteLogContext::SuiteLogContext((SuiteLogContext *const)(v3 + 304));
      *(_DWORD *)(v3 + 304) = 8;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 316) = this->activity_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 320) = this->schedule_id_;
      ScriptContext::ScriptContext((ScriptContext *const)(v3 + 496));
      if ( std::vector<std::string>::size(&action_exec->param) > 2 )
      {
        *(_DWORD *)(v3 + 80) = 0;
        v125 = std::vector<std::string>::operator[](&action_exec->param, 2uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v125, (unsigned int *)(v3 + 80), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            1719);
          v126 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[24])"strToNum failed, param:");
          common::milog::MiLogStream::operator<<<std::string>(v126, &action_exec->param);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
LABEL_181:
          v146 = 0;
          goto LABEL_197;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v127 = (unsigned int)Player::getSceneComp(this->player_);
        PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 176), v127);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 176)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            1725);
          v128 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[27])"findScene fails, scene_id:");
          v129 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v128,
                   (const unsigned int *)(v3 + 80));
          v130 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v129, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
        }
        else
        {
          v131 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          SceneType = Scene::getSceneType(v131);
          if ( !SceneExcelConfigMgr::isPlayerScene(SceneType) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 432),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/base_activity.cpp",
              "execAction",
              1730);
            v133 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                     (common::milog::MiLogStream *const)(v3 + 432),
                     (const char (*)[65])"scene is not player scene, cannot refresh group suite, scene_id:");
            v134 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v133,
                     (const unsigned int *)(v3 + 80));
            v130 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v134, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
          }
          else
          {
            v135 = (unsigned __int64)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
            if ( *(_BYTE *)((v135 >> 3) + 0x7FFF8000) )
              v135 = __asan_report_load8();
            v136 = *(_QWORD *)v135 + 432LL;
            if ( *(_BYTE *)((v136 >> 3) + 0x7FFF8000) )
              v135 = __asan_report_load8();
            if ( !(*(unsigned int (__fastcall **)(unsigned __int64))v136)(v135) )
            {
              v140 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
              Scene::findGroup((Scene *const)(v3 + 208), v140);
              if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 208)) )
              {
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 432),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/base_activity.cpp",
                  "execAction",
                  1741);
                v141 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                         (common::milog::MiLogStream *const)(v3 + 432),
                         (const char (*)[11])"findGroup:");
                v142 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v141,
                         (const unsigned int *)(v3 + 48));
                v143 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                         v142,
                         (const char (*)[13])" fails, uid:");
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v143,
                  (const unsigned int *)(v3 + 96));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
                v2 = -1;
                v144 = 0;
              }
              else
              {
                v145 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
                Group::refresh(
                  v145,
                  (const ScriptContext *)(v3 + 496),
                  *(_DWORD *)(v3 + 64),
                  0,
                  *(SuiteLogContext *)(v3 + 304));
                v144 = 1;
              }
              std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 208));
              v139 = v144 == 1;
LABEL_180:
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 176));
              if ( !v139 )
                goto LABEL_181;
              goto LABEL_196;
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 432),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/activity/base_activity.cpp",
              "execAction",
              1735);
            v137 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                     (common::milog::MiLogStream *const)(v3 + 432),
                     (const char (*)[62])"checkIsValid is failed, cannot refresh group suite, scene_id:");
            v138 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                     v137,
                     (const unsigned int *)(v3 + 80));
            v130 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v138, (const char (*)[7])", uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
          }
        }
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v130, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        v139 = 0;
        goto LABEL_180;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v3 + 208));
      std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>(
        (std::shared_ptr<Scene> *const)(v3 + 176),
        (std::shared_ptr<PlayerWorldScene> *)(v3 + 208));
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 208));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 176)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1751);
        v147 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[30])"getMainWorldScene fails, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v147, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        v148 = 0;
      }
      else
      {
        v149 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        Scene::findGroup((Scene *const)(v3 + 208), v149);
        if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 208)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            1757);
          v150 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[11])"findGroup:");
          v151 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v150,
                   (const unsigned int *)(v3 + 48));
          v152 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                   v151,
                   (const char (*)[13])" fails, uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v152, (const unsigned int *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
          v153 = 0;
        }
        else
        {
          v154 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
          Group::refresh(
            v154,
            (const ScriptContext *)(v3 + 496),
            *(_DWORD *)(v3 + 64),
            0,
            *(SuiteLogContext *)(v3 + 304));
          v153 = 1;
        }
        std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 208));
        v148 = v153 == 1;
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 176));
      if ( !v148 )
      {
        v146 = 0;
        goto LABEL_197;
      }
LABEL_196:
      v146 = 1;
LABEL_197:
      ScriptContext::~ScriptContext((ScriptContext *const)(v3 + 496));
      if ( v146 )
LABEL_508:
        v2 = 0;
LABEL_509:
      result = v2;
      if ( v360 == (char *)v3 )
      {
        *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
        *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
        *(_DWORD *)((v3 >> 3) + 0x7FFF807C) = 0;
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
        *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
        *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0xF5F5F5F5F5F5F5F5LL;
      }
      return result;
    case NEW_ACTIVITY_ACTION_OPEN_MECHANICUS:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1769);
        v155 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v156 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v155,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v156, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v157 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v157, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1775);
        v158 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v159 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v160 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v158, v159);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v160, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      MechanicusComp = Player::getMechanicusComp(this->player_);
      if ( !PlayerMechanicusComp::openMechanicus(MechanicusComp, *(_DWORD *)(v3 + 80)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1780);
      v162 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[16])"openMechanicus ");
      v163 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v162,
               (const unsigned int *)(v3 + 80));
      v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v163, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_228;
    case NEW_ACTIVITY_ACTION_CLOSE_MECHANICUS:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1789);
        v164 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v165 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v164,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v165, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v166 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v166, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1795);
        v167 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v168 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v169 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v167, v168);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v169, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v170 = Player::getMechanicusComp(this->player_);
      if ( !PlayerMechanicusComp::closeMechanicus(v170, *(_DWORD *)(v3 + 80)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1800);
      v171 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[17])"closeMechanicus ");
      v172 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v171,
               (const unsigned int *)(v3 + 80));
      v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v172, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_228;
    case NEW_ACTIVITY_ACTION_OPEN_MECHANICUS_SEQUENCE:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1809);
        v173 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v174 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v173,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v174, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v175 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v175, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1815);
        v176 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v177 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v178 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v176, v177);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v178, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v179 = Player::getMechanicusComp(this->player_);
      if ( !PlayerMechanicusComp::openSequence(v179, *(_DWORD *)(v3 + 80)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1820);
      v180 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[14])"openSequence ");
      v181 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v180,
               (const unsigned int *)(v3 + 80));
      v59 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v181, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_228:
      *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v59, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_OPEN_REGION_SEARCH:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1829);
        v182 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v183 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v182,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v183, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      v184 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v184, (unsigned int *)(v3 + 96), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1836);
        v185 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v186 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v187 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v185, v186);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v187, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 144) = 0;
      *(_DWORD *)(v3 + 148) = 0;
      *(_DWORD *)(v3 + 144) = 1;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 148) = this->schedule_id_;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      RegionSearchComp = Player::getRegionSearchComp(this->player_);
      if ( !PlayerRegionSearchComp::addRegionSearchPlay(
              RegionSearchComp,
              *(_DWORD *)(v3 + 96),
              (const RegionSearchSource *)(v3 + 144)) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1845);
      v189 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[36])off_2505E700);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v189, (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_CLOSE_REGION_SEARCH:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1855);
        v190 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v191 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v190,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v191, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      v192 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v192, (unsigned int *)(v3 + 96), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1862);
        v193 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v194 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v195 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v193, v194);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v195, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v196 = Player::getRegionSearchComp(this->player_);
      PlayerRegionSearchComp::delRegionSearchPlay(v196, *(_DWORD *)(v3 + 96));
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_OPEN_WEATHER_AREA:
    case NEW_ACTIVITY_ACTION_CLOSE_WEATHER_AREA:
      *(_DWORD *)(v3 + 96) = 0;
      if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&action_exec->param, (unsigned int *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1876);
        v197 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[25])"strVecToNum fail. param:");
        v198 = common::milog::MiLogStream::operator<<<std::string>(v197, &action_exec->param);
        v199 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v198, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v199, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v3 + 176));
      if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v3 + 176), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1882);
        v200 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[33])"findMainWorldScene fail. player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v200, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        v201 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( action_exec->type == NEW_ACTIVITY_ACTION_OPEN_WEATHER_AREA )
        {
          v202 = (unsigned __int64)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          if ( *(_BYTE *)((v202 >> 3) + 0x7FFF8000) )
            v202 = __asan_report_load8();
          v203 = *(_QWORD *)v202 + 360LL;
          if ( *(_BYTE *)((v203 >> 3) + 0x7FFF8000) )
            v202 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v203)(
            v3 + 208,
            v202,
            *(unsigned int *)(v3 + 96));
          std::shared_ptr<WeatherArea>::~shared_ptr((std::shared_ptr<WeatherArea> *const)(v3 + 208));
        }
        else
        {
          v204 = (unsigned __int64)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
          if ( *(_BYTE *)((v204 >> 3) + 0x7FFF8000) )
            v204 = __asan_report_load8();
          v205 = *(_QWORD *)v204 + 368LL;
          if ( *(_BYTE *)((v205 >> 3) + 0x7FFF8000) )
            v204 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, _QWORD))v205)(v204, *(unsigned int *)(v3 + 96));
        }
        v201 = 1;
      }
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 176));
      if ( !v201 )
        goto LABEL_509;
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_SET_SCORE_LIMIT:
      *(_DWORD *)(v3 + 96) = 0;
      if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&action_exec->param, (unsigned int *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1900);
        v206 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[25])"strVecToNum fail. param:");
        common::milog::MiLogStream::operator<<<std::string>(v206, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = 0;
        goto LABEL_509;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 208));
      v207 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
      score_limit_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScoreLimitExcelConfig(
                                 &v207->design_config.txt_config_mgr.new_activity_config_mgr,
                                 *(_DWORD *)(v3 + 96));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      if ( !score_limit_config_ptr )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1906);
        v208 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[59])"findNewActivityScoreLimitExcelConfig fail, score_limit_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v208, (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = 0;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&score_limit_config_ptr->limit_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&score_limit_config_ptr->limit_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      BaseActivity::setScoreLimit(this, score_limit_config_ptr->limit_value);
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_REGISTER_GAME_TIME_DYNAMIC_GROUP:
      if ( !BaseActivity::execLoadTimeDynamicGroup(this, action_exec) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1917);
      v209 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
      v210 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v209,
               (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        v210,
        (const char (*)[32])" execLoadTimeDynamicGroup fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_UNREGISTER_GAME_TIME_DYNAMIC_GROUP:
      if ( !BaseActivity::execUnloadTimeDynamicGroup(this, action_exec) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        1926);
      v211 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
               (common::milog::MiLogStream *const)(v3 + 432),
               (const char (*)[5])"uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
      v212 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v211,
               (const unsigned int *)(v3 + 96));
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v212,
        (const char (*)[34])" execUnloadTimeDynamicGroup fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_SEND_MAIL:
      if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->is_notify_mail_sent_);
      if ( this->is_notify_mail_sent_ )
      {
        common::milog::MiLogStream::create(
          &v359,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1935);
        v213 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                 &v359,
                 (const char (*)[36])"notify mail already sent, activity:");
        BaseActivity::toString[abi:cxx11]((std::string *)(v3 + 432), this);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v213, (const std::string *)(v3 + 432));
        std::string::~string((void *)(v3 + 432));
        common::milog::MiLogStream::~MiLogStream(&v359);
        v2 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 208));
        p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208))->design_config.txt_config_mgr.new_activity_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                p_new_activity_config_mgr,
                                this->schedule_id_);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
        if ( schedule_config_ptr )
        {
          *(_DWORD *)(v3 + 96) = 0;
          if ( common::tools::StringUtils::strVecToNum<0u,unsigned int>(&action_exec->param, (unsigned int *)(v3 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v359,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/base_activity.cpp",
              "execAction",
              1947);
            v218 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                     &v359,
                     (const char (*)[26])"parse params fail, param:");
            v219 = common::milog::MiLogStream::operator<<<std::string>(v218, &action_exec->param);
            v220 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                     v219,
                     (const char (*)[11])" activity:");
            BaseActivity::toString[abi:cxx11]((std::string *)(v3 + 432), this);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v220, (const std::string *)(v3 + 432));
            std::string::~string((void *)(v3 + 432));
            common::milog::MiLogStream::~MiLogStream(&v359);
            v2 = -1;
          }
          else
          {
            MailData::MailData((MailData *const)(v3 + 720));
            *(_DWORD *)(v3 + 868) = *(_DWORD *)(v3 + 96);
            *(_DWORD *)(v3 + 900) = 12;
            if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)schedule_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                                 + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)(v3 + 432), schedule_config_ptr->end_time);
            std::vector<std::string>::operator=(
              (std::vector<std::string> *const)(v3 + 872),
              (std::initializer_list<std::string >)__PAIR128__(1LL, v3 + 432));
            for ( i = (char *)(v3 + 464); i != (char *)(v3 + 432); std::string::~string(i) )
              i -= 32;
            *(_DWORD *)(v3 + 936) = 101;
            *(_DWORD *)(v3 + 896) = 1509;
            if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                  + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            common::tools::StringUtils::numToStr<unsigned int>((std::string *)(v3 + 432), this->schedule_id_);
            std::allocator<char>::allocator(&__a);
            std::string::basic_string<std::allocator<char>>((std::string *const)&v359, "activity_cond:", &__a);
            std::operator+<char>((std::string *)(v3 + 368), (std::string *)&v359, (std::string *)(v3 + 432));
            std::string::~string(&v359);
            std::allocator<char>::~allocator(&__a);
            std::string::~string((void *)(v3 + 432));
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            MailComp = Player::getMailComp(this->player_);
            if ( PlayerMailComp::addExcelMailAndTryAttachRewardWhenAvailable(
                   MailComp,
                   (MailData *)(v3 + 720),
                   (const std::string *)(v3 + 368)) )
            {
              common::milog::MiLogStream::create(
                &v359,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/base_activity.cpp",
                "execAction",
                1959);
              v223 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                       &v359,
                       (const char (*)[66])"addExcelMailAndTryAttachRewardWhenAvailable fail, mail_config_id:");
              v224 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                       v223,
                       (const unsigned int *)(v3 + 96));
              v225 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                       v224,
                       (const char (*)[11])" activity:");
              BaseActivity::toString[abi:cxx11]((std::string *)(v3 + 432), this);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v225, (const std::string *)(v3 + 432));
              std::string::~string((void *)(v3 + 432));
              common::milog::MiLogStream::~MiLogStream(&v359);
              v2 = -1;
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&this->is_notify_mail_sent_ >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&this->is_notify_mail_sent_);
              this->is_notify_mail_sent_ = 1;
              v2 = 0;
            }
            std::string::~string((void *)(v3 + 368));
            MailData::~MailData((MailData *const)(v3 + 720));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v359,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            1941);
          v215 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                   &v359,
                   (const char (*)[51])"findActivityScheduleExcelConfig fail, schedule_id:");
          v216 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v215, &this->schedule_id_);
          v217 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v216, (const char (*)[11])" activity:");
          BaseActivity::toString[abi:cxx11]((std::string *)(v3 + 432), this);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v217, (const std::string *)(v3 + 432));
          std::string::~string((void *)(v3 + 432));
          common::milog::MiLogStream::~MiLogStream(&v359);
          v2 = -1;
        }
      }
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_ADD_SCENE_TAG:
    case NEW_ACTIVITY_ACTION_DEL_SCENE_TAG:
      if ( std::vector<std::string>::size(&action_exec->param) > 1 )
      {
        *(_DWORD *)(v3 + 80) = 0;
        *(_DWORD *)(v3 + 96) = 0;
        if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
               &action_exec->param,
               (unsigned int *)(v3 + 80),
               (unsigned int *)(v3 + 96),
               (unsigned int *)&action_exec->param) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            1978);
          common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            (common::milog::MiLogStream *const)(v3 + 432),
            (const char (*)[19])"strVecToNum failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
        }
        else
        {
          v228 = *(unsigned __int8 *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000);
          if ( (_BYTE)v228 != 0 && (char)v228 <= 3 )
            __asan_report_load4();
          if ( action_exec->type == NEW_ACTIVITY_ACTION_ADD_SCENE_TAG )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v229 = Player::getSceneComp(this->player_);
            v2 = PlayerSceneComp::addSceneTag(v229, *(_DWORD *)(v3 + 80), *(_DWORD *)(v3 + 96));
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v230 = Player::getSceneComp(this->player_);
            v2 = PlayerSceneComp::delSceneTag(v230, *(_DWORD *)(v3 + 80), *(_DWORD *)(v3 + 96));
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1970);
        v226 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v227 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v226,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v227, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_MODIFY_ACTIVITY_COND_DEFAULT:
      if ( std::vector<std::string>::size(&action_exec->param) <= 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1993);
        v231 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v232 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v231,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v232, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      *(_DWORD *)(v3 + 96) = 0;
      v233 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v233, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2001);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[16])"strToNum failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      v234 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
      v235 = (const char *)std::string::c_str(v234);
      if ( data::enumStrToVal(v235, (data::NewActivityCondDefaultStateType *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2006);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[20])"enumStrToVal failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( !(unsigned int)BaseActivity::setCondDefaultState(this, *(_DWORD *)(v3 + 80), *(_DWORD *)(v3 + 96) == 1) )
        goto LABEL_508;
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 432),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execAction",
        2011);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v3 + 432),
        (const char (*)[27])"setCondDefaultState failed");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      v2 = -1;
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_HIDE_SCENE_POINT:
    case NEW_ACTIVITY_ACTION_SHOW_SCENE_POINT:
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 240)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2022);
        v236 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[24])"strToNum failed, param:");
        common::milog::MiLogStream::operator<<<std::string>(v236, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 240)) > 1 )
      {
        v239 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 240), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v239 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v239 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v239 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        scene_id = *v239;
        *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 240));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 144),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112));
        std::vector<unsigned int>::erase(
          (std::vector<unsigned int> *const)(v3 + 240),
          *(std::vector<unsigned int>::const_iterator *)(v3 + 144));
        if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        if ( action_exec->type == NEW_ACTIVITY_ACTION_HIDE_SCENE_POINT )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v240 = Player::getSceneComp(this->player_);
          v2 = PlayerSceneComp::hidePoint(v240, scene_id, (const std::vector<unsigned int> *)(v3 + 240), 1);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v241 = Player::getSceneComp(this->player_);
          v2 = PlayerSceneComp::unhidePoint(v241, scene_id, (const std::vector<unsigned int> *)(v3 + 240), 1);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2027);
        v237 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 240));
        v238 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v237,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v238, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      goto LABEL_407;
    case NEW_ACTIVITY_ACTION_LOCK_PLAYER_WORLD_SCENE:
    case NEW_ACTIVITY_ACTION_UNLOCK_PLAYER_WORLD_SCENE:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2043);
        v242 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v243 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v242,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v243, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      else
      {
        *(_DWORD *)(v3 + 96) = 0;
        v244 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v244, (unsigned int *)(v3 + 96), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            2049);
          v245 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[10])"strToNum ");
          v246 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
          v247 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v245, v246);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v247, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
        }
        else
        {
          v248 = *(unsigned __int8 *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000);
          if ( (_BYTE)v248 != 0 && (char)v248 <= 3 )
            __asan_report_load4();
          if ( action_exec->type == NEW_ACTIVITY_ACTION_LOCK_PLAYER_WORLD_SCENE )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v249 = Player::getSceneComp(this->player_);
            v2 = PlayerSceneComp::lockPlayerWorldScene(v249, *(_DWORD *)(v3 + 96));
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v250 = Player::getSceneComp(this->player_);
            v2 = PlayerSceneComp::unlockPlayerWorldScene(v250, *(_DWORD *)(v3 + 96));
          }
        }
      }
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_REGISTER_GROUP_BUNDLE:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2062);
        v251 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v252 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v251,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v252, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 240)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2068);
        v253 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[16])"strVecToNumVec ");
        v254 = common::milog::MiLogStream::operator<<<std::string>(v253, &action_exec->param);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v254, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        group_link_comp = Player::getGroupLinkComp(this->player_);
        __for_range_1 = (std::vector<unsigned int> *)(v3 + 240);
        *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 240));
        *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_1);
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144)) )
        {
          v255 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)v255 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v255 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v255 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          bundle_id = *v255;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          PlayerGroupLinkComp::registerGroupBundle(group_link_comp, bundle_id, this->activity_id_);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
        }
        v2 = 0;
      }
      goto LABEL_407;
    case NEW_ACTIVITY_ACTION_DISABLE_TRANSFER_POINT_INTERACTION:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2145);
        v277 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v278 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v277,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v278, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v279 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v279, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2152);
        v280 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v281 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v282 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v280, v281);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v282, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      if ( std::vector<std::string>::size(&action_exec->param) <= 1 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 208));
        v287 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        *(_DWORD *)(v3 + 96) = TxtConfigMgr::getDefaultWorldMainSceneId(&v287->design_config.txt_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      }
      else
      {
        v283 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v283, (unsigned int *)(v3 + 96), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            2161);
          v284 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[10])"strToNum ");
          v285 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
          v286 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v284, v285);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v286, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
          goto LABEL_509;
        }
      }
      *(std::pair<unsigned int,unsigned int> *)(v3 + 144) = std::make_pair<unsigned int &,unsigned int &>(
                                                              (unsigned int *)(v3 + 96),
                                                              (unsigned int *)(v3 + 80));
      std::set<std::pair<unsigned int,unsigned int>>::insert(
        &this->disable_transfer_point_interaction_set_,
        (std::set<std::pair<unsigned int,unsigned int>>::value_type *)(v3 + 144));
      proto::ActivityDisableTransferPointInteractionNotify::ActivityDisableTransferPointInteractionNotify((proto::ActivityDisableTransferPointInteractionNotify *const)(v3 + 432));
      notify_pair = proto::ActivityDisableTransferPointInteractionNotify::mutable_scene_point_pair((proto::ActivityDisableTransferPointInteractionNotify *const)(v3 + 432));
      proto::Uint32Pair::set_key(notify_pair, *(_DWORD *)(v3 + 96));
      proto::Uint32Pair::set_value(notify_pair, *(_DWORD *)(v3 + 80));
      proto::ActivityDisableTransferPointInteractionNotify::set_is_disable(
        (proto::ActivityDisableTransferPointInteractionNotify *const)(v3 + 432),
        1);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_429;
    case NEW_ACTIVITY_ACTION_ENABLE_TRANSFER_POINT_INTERACTION:
      if ( !std::vector<std::string>::size(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2183);
        v288 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v289 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v288,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v289, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 80) = 0;
      v290 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v290, (unsigned int *)(v3 + 80), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2190);
        v291 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v292 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v293 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v291, v292);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v293, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      if ( std::vector<std::string>::size(&action_exec->param) <= 1 )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 208));
        v298 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        *(_DWORD *)(v3 + 96) = TxtConfigMgr::getDefaultWorldMainSceneId(&v298->design_config.txt_config_mgr);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 208));
      }
      else
      {
        v294 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v294, (unsigned int *)(v3 + 96), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            2199);
          v295 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[10])"strToNum ");
          v296 = std::vector<std::string>::operator[](&action_exec->param, 1uLL);
          v297 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v295, v296);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v297, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
          goto LABEL_509;
        }
      }
      *(std::pair<unsigned int,unsigned int> *)(v3 + 144) = std::make_pair<unsigned int &,unsigned int &>(
                                                              (unsigned int *)(v3 + 96),
                                                              (unsigned int *)(v3 + 80));
      std::set<std::pair<unsigned int,unsigned int>>::erase(
        &this->disable_transfer_point_interaction_set_,
        (const std::set<std::pair<unsigned int,unsigned int>>::key_type *)(v3 + 144));
      proto::ActivityDisableTransferPointInteractionNotify::ActivityDisableTransferPointInteractionNotify((proto::ActivityDisableTransferPointInteractionNotify *const)(v3 + 432));
      notify_pair_0 = proto::ActivityDisableTransferPointInteractionNotify::mutable_scene_point_pair((proto::ActivityDisableTransferPointInteractionNotify *const)(v3 + 432));
      proto::Uint32Pair::set_key(notify_pair_0, *(_DWORD *)(v3 + 96));
      proto::Uint32Pair::set_value(notify_pair_0, *(_DWORD *)(v3 + 80));
      proto::ActivityDisableTransferPointInteractionNotify::set_is_disable(
        (proto::ActivityDisableTransferPointInteractionNotify *const)(v3 + 432),
        0);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_429:
      Player::sendProto(this->player_, (const google::protobuf::Message *)(v3 + 432));
      v2 = 0;
      proto::ActivityDisableTransferPointInteractionNotify::~ActivityDisableTransferPointInteractionNotify((proto::ActivityDisableTransferPointInteractionNotify *const)(v3 + 432));
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_UNREGISTER_GROUP_BUNDLE:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2082);
        v256 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v257 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v256,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v257, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 240)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2088);
        v258 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[16])"strVecToNumVec ");
        v259 = common::milog::MiLogStream::operator<<<std::string>(v258, &action_exec->param);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v259, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        group_link_comp_0 = Player::getGroupLinkComp(this->player_);
        __for_range_2 = (std::vector<unsigned int> *)(v3 + 240);
        *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 240));
        *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_2);
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144)) )
        {
          v260 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)v260 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v260 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v260 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          bundle_id_0 = *v260;
          if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp_0, bundle_id_0) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            GroupLinkComp = Player::getGroupLinkComp(this->player_);
            PlayerGroupLinkComp::unregisterGroupBundle(GroupLinkComp, bundle_id_0, 0);
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
        }
        v2 = 0;
      }
      goto LABEL_407;
    case NEW_ACTIVITY_ACTION_DELAY_UNLOAD_DYNAMIC_GROUP:
      if ( BaseActivity::execUnloadDynamicGroup(this, action_exec, 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2221);
        v299 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        v300 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v299,
                 (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          v300,
          (const char (*)[36])" delay execUnloadDynamicGroup fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_UNREGISTER_ALL_GROUP_BUNDLE:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2128);
        v268 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v269 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v268,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v269, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      else
      {
        *(_DWORD *)(v3 + 96) = 0;
        v270 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v270, (unsigned int *)(v3 + 96), 1) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            2134);
          v271 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[10])"strToNum ");
          v272 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
          v273 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v271, v272);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v273, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
        }
        else
        {
          is_force = *(_DWORD *)(v3 + 96) != 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          p_schedule_id = Player::getGroupLinkComp(this->player_);
          v275 = is_force;
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            p_schedule_id = (PlayerGroupLinkComp *)&this->schedule_id_;
            __asan_report_load4();
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            p_schedule_id = (PlayerGroupLinkComp *)&this->activity_id_;
            __asan_report_load4();
          }
          PlayerGroupLinkComp::unregisterGroupBundleByActivity(p_schedule_id, this->activity_id_, schedule_id, v275);
          v2 = 0;
        }
      }
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_UNLOAD_GROUP_BUNDLE:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2105);
        v262 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v263 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v262,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v263, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
        if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
               &action_exec->param,
               (std::vector<unsigned int> *)(v3 + 240)) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execAction",
            2111);
          v264 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 432),
                   (const char (*)[16])"strVecToNumVec ");
          v265 = common::milog::MiLogStream::operator<<<std::string>(v264, &action_exec->param);
          common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v265, (const char (*)[8])" failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          v2 = -1;
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          group_link_comp_1 = Player::getGroupLinkComp(this->player_);
          __for_range_3 = (std::vector<unsigned int> *)(v3 + 240);
          *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 240));
          *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_3);
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112),
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144)) )
          {
            v266 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
            if ( *(_BYTE *)(((unsigned __int64)v266 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v266 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v266 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            bundle_id_1 = *v266;
            if ( PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp_1, bundle_id_1) )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v267 = Player::getGroupLinkComp(this->player_);
              PlayerGroupLinkComp::unregisterGroupBundle(v267, bundle_id_1, 1);
            }
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
          }
          v2 = 0;
        }
LABEL_407:
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 240));
      }
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_ACTIVITY_BANNER_NOTIFY:
      BaseActivity::execNotifyBanner(this, action_exec);
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_OPEN_CUSTOM_DUNGEON:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2234);
        v301 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v302 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v301,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v302, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      v303 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v303, (unsigned int *)(v3 + 96), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2240);
        v304 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v305 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v306 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v304, v305);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v306, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      CustomDungeonComp = Player::getCustomDungeonComp(this->player_);
      PlayerCustomDungeonComp::openCustomDungeon(CustomDungeonComp, *(_DWORD *)(v3 + 96));
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_CLOSE_CUSTOM_DUNGEON:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v308 = Player::getCustomDungeonComp(this->player_);
      PlayerCustomDungeonComp::closeCustomDungeon(v308);
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_OPEN_UGC:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v316 = Player::getCustomDungeonComp(this->player_);
      PlayerCustomDungeonComp::enableUGC(v316);
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_UNLOCK_OFFICIAL_CUSTOM_DUNGEON:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2257);
        v309 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[19])"action param size ");
        *(_QWORD *)(v3 + 144) = std::vector<std::string>::size(&action_exec->param);
        v310 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                 v309,
                 (const unsigned __int64 *)(v3 + 144));
        common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v310, (const char (*)[12])off_2505DE00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      *(_DWORD *)(v3 + 96) = 0;
      v311 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v311, (unsigned int *)(v3 + 96), 1) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2263);
        v312 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[10])"strToNum ");
        v313 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
        v314 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v312, v313);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v314, (const char (*)[8])" failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v315 = Player::getCustomDungeonComp(this->player_);
      PlayerCustomDungeonComp::unlockOfficialDungeon(v315, *(_DWORD *)(v3 + 96));
      BaseActivity::notifyClientData(this, 0);
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_ACTIVE_ITEM_GIVING:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2280);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[20])"action param empty.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 240)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2286);
        v317 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[29])"strVecToNumVec fails, param:");
        common::milog::MiLogStream::operator<<<std::string>(v317, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        v318 = 0;
      }
      else
      {
        __for_range_4 = (std::vector<unsigned int> *)(v3 + 240);
        *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 240));
        *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_4);
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144)) )
        {
          v319 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)v319 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v319 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v319 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          giving_id = *v319;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          GivingComp = Player::getGivingComp(this->player_);
          PlayerGivingComp::activeItemGiving(GivingComp, giving_id);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
        }
        v318 = 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 240));
      if ( !v318 )
        goto LABEL_509;
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_DEACTIVE_ITEM_GIVING:
      if ( std::vector<std::string>::empty(&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2299);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[20])"action param empty.");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        goto LABEL_509;
      }
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 240));
      if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
             &action_exec->param,
             (std::vector<unsigned int> *)(v3 + 240)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2305);
        v321 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[29])"strVecToNumVec fails, param:");
        common::milog::MiLogStream::operator<<<std::string>(v321, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        v2 = -1;
        v322 = 0;
      }
      else
      {
        __for_range_5 = (std::vector<unsigned int> *)(v3 + 240);
        *(std::vector<unsigned int>::iterator *)(v3 + 112) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 240));
        *(std::vector<unsigned int>::iterator *)(v3 + 144) = std::vector<unsigned int>::end(__for_range_5);
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 112),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 144)) )
        {
          v323 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
          if ( *(_BYTE *)(((unsigned __int64)v323 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v323 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v323 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          giving_id_0 = *v323;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v324 = Player::getGivingComp(this->player_);
          PlayerGivingComp::deactiveItemGiving(v324, giving_id_0);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 112));
        }
        v322 = 1;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 240));
      if ( !v322 )
        goto LABEL_509;
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_OPEN_MUSIC_GAME_UGC:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      UgcComp = Player::getUgcComp(this->player_);
      if ( PlayerUgcComp::openUgc(UgcComp, 1u) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2318);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[20])"openUgc music fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_CLOSE_MUSIC_GAME_UGC:
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v326 = Player::getUgcComp(this->player_);
      if ( PlayerUgcComp::closeUgc(v326, 1u) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2326);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          (common::milog::MiLogStream *const)(v3 + 432),
          (const char (*)[21])"closeUgc music fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_LOAD_SPECIFY_BUSINESSINFO_DYNAMIC_GROUP:
      if ( BaseActivity::execLoadSpecifyBusinessInfoDynamicGroup(this, action_exec) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1623);
        v100 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        v101 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v100,
                 (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
          v101,
          (const char (*)[47])" execLoadSpecifyBusinessInfoDynamicGroup fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_UNLOAD_SPECIFY_BUSINESSINFO_DYNAMIC_GROUP:
      if ( BaseActivity::execUnloadSpecifyBusinessInfoDynamicGroup(this, action_exec) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          1631);
        v102 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        v103 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v102,
                 (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
          v103,
          (const char (*)[49])" execUnloadSpecifyBusinessInfoDynamicGroup fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      goto LABEL_508;
    case NEW_ACTIVITY_ACTION_COMMON_CLOSE_CONTENT:
      v2 = BaseActivity::commonCloseContent(this);
      goto LABEL_509;
    case NEW_ACTIVITY_ACTION_OPERATE_SCENE_TAG_VEC:
      ret = BaseActivity::execOperateSceneTagVec(this, action_exec);
      if ( ret )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execAction",
          2339);
        v327 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(
                 (common::milog::MiLogStream *const)(v3 + 432),
                 (const char (*)[7])off_2505ED00);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 96) = Player::getUid(this->player_);
        v328 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                 v327,
                 (const unsigned int *)(v3 + 96));
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          v328,
          (const char (*)[31])" execOperateSceneTagVec failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      }
      v2 = ret;
      goto LABEL_509;
    default:
      goto LABEL_508;
  }
};

// Line 2351: range 00000000137C05E6-00000000137C0CE0
int32_t __cdecl BaseActivity::execLoadDynamicGroup(BaseActivity *const this, const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t *v10; // rdx
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Scene *v16; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v18; // rdx
  int32_t result; // eax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+10h] [rbp-110h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+18h] [rbp-108h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+20h] [rbp-100h]
  const std::string *group_str; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 scene_id:2379 48 4 13 group_id:2364 64 16 14 scene_ptr:2380 96 24 17 group_id_vec:2361";
  *(_QWORD *)(v2 + 16) = BaseActivity::execLoadDynamicGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_LOAD_DYNAMIC_GROUP )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
      __for_range = &action_exec->param;
      __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
      __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        group_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        *(_DWORD *)(v2 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(group_str, (unsigned int *)(v2 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/base_activity.cpp",
            "execLoadDynamicGroup",
            2367);
          v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                 &v24,
                 (const char (*)[17])"strToNum fails, ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, group_str);
          common::milog::MiLogStream::~MiLogStream(&v24);
        }
        else
        {
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v2 + 96),
            (const std::vector<unsigned int>::value_type *)(v2 + 48));
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execLoadDynamicGroup",
          2374);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v24,
          (const char (*)[22])"group_id_vec is empty");
        common::milog::MiLogStream::~MiLogStream(&v24);
        v5 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64))->design_config.lua_config_mgr;
        v10 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 96), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, *v10);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = (unsigned int)Player::getSceneComp(this->player_);
        PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 64), SceneComp);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v24,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execLoadDynamicGroup",
            2383);
          v12 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v24, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 48));
          v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v13,
                  (const char (*)[19])" getPersonalScene ");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v24);
          v5 = -1;
        }
        else
        {
          v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v16);
          if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          v18 = *(_QWORD *)BlockGroupComp + 96LL;
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD))v18)(
            BlockGroupComp,
            v2 + 96,
            0LL,
            0LL);
          v5 = 0;
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execLoadDynamicGroup",
        2358);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v24,
             (const char (*)[19])"action param size ");
      __for_end._M_current = (const std::string *)std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_2505DE00);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v5 = -1;
    }
  }
  else
  {
    v5 = -1;
  }
  result = v5;
  if ( v25 == (char *)v2 )
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

// Line 2391: range 00000000137C0CE2-00000000137C1496
int32_t __cdecl BaseActivity::execUnloadDynamicGroup(
        BaseActivity *const this,
        const data::NewActivityExec *action_exec,
        bool is_delay)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  LuaConfigMgr *p_lua_config_mgr; // r14
  uint32_t *v11; // rdx
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Scene *v18; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v20; // rdx
  Scene *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  int32_t result; // eax
  std::vector<std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+30h] [rbp-100h]
  const std::string *group_str; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-F0h] BYREF
  char v31[208]; // [rsp+60h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 scene_id:2419 48 4 13 group_id:2404 64 16 14 scene_ptr:2420 96 24 17 group_id_vec:2401";
  *(_QWORD *)(v3 + 16) = BaseActivity::execUnloadDynamicGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_UNLOAD_DYNAMIC_GROUP
    || action_exec->type == NEW_ACTIVITY_ACTION_DELAY_UNLOAD_DYNAMIC_GROUP )
  {
    if ( std::vector<std::string>::size(&action_exec->param) )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
      __for_range = &action_exec->param;
      __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
      __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
      while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        group_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
        *(_DWORD *)(v3 + 48) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(group_str, (unsigned int *)(v3 + 48), 1) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/base_activity.cpp",
            "execUnloadDynamicGroup",
            2407);
          v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                 &v30,
                 (const char (*)[17])"strToNum fails, ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, group_str);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        else
        {
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v3 + 96),
            (const std::vector<unsigned int>::value_type *)(v3 + 48));
        }
        __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
      }
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execUnloadDynamicGroup",
          2414);
        common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          &v30,
          (const char (*)[22])"group_id_vec is empty");
        common::milog::MiLogStream::~MiLogStream(&v30);
        v6 = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 64));
        p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->design_config.lua_config_mgr;
        v11 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 96), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 32) = LuaConfigMgr::getSceneIdByGroupId(p_lua_config_mgr, *v11);
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SceneComp = (unsigned int)Player::getSceneComp(this->player_);
        PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v3 + 64), SceneComp);
        if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execUnloadDynamicGroup",
            2423);
          v13 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v30, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v3 + 48));
          v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v14,
                  (const char (*)[19])" getPersonalScene ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])" fails");
          common::milog::MiLogStream::~MiLogStream(&v30);
          v6 = -1;
        }
        else
        {
          if ( is_delay && !BaseActivity::isFinished(this) )
          {
            v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v18);
            if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
              BlockGroupComp = __asan_report_load8();
            v20 = *(_QWORD *)BlockGroupComp + 104LL;
            if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
              BlockGroupComp = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD))v20)(BlockGroupComp, v3 + 96, 0LL);
          }
          else
          {
            v21 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
            v22 = (unsigned __int64)Scene::getBlockGroupComp(v21);
            if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
              v22 = __asan_report_load8();
            v23 = *(_QWORD *)v22 + 104LL;
            if ( *(_BYTE *)((v23 >> 3) + 0x7FFF8000) )
              v22 = __asan_report_load8();
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v23)(v22, v3 + 96, 1LL);
          }
          v6 = 0;
        }
        std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execUnloadDynamicGroup",
        2398);
      v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v30,
             (const char (*)[19])"action param size ");
      __for_end._M_current = (const std::string *)std::vector<std::string>::size(&action_exec->param);
      v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v7,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])off_2505DE00);
      common::milog::MiLogStream::~MiLogStream(&v30);
      v6 = -1;
    }
  }
  else
  {
    v6 = -1;
  }
  result = v6;
  if ( v31 == (char *)v3 )
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
  return result;
};

// Line 2438: range 00000000137C1498-00000000137C182D
int32_t __cdecl BaseActivity::fillTimeDynamicGroupsFromParam(
        const BaseActivity *const this,
        const data::NewActivityExec *action_exec,
        std::vector<unsigned int> *group_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v9; // rdx
  std::vector<std::string>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<std::string>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-D8h] BYREF
  const std::vector<std::string> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::string *time_group_str; // [rsp+48h] [rbp-C8h]
  const data::NewActivityTimeGroupExcelConfig *time_group_config_ptr; // [rsp+50h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-B8h]
  std::shared_ptr<Config> v19; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v20; // [rsp+70h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+90h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 18 time_group_id:2441 64 4 13 group_id:2452";
  *(_QWORD *)(v3 + 16) = BaseActivity::fillTimeDynamicGroupsFromParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  __for_range = &action_exec->param;
  __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
  __for_end._M_current = std::vector<std::string>::end(&action_exec->param)._M_current;
  while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(&__for_begin, &__for_end) )
  {
    time_group_str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 48) = 0;
    if ( !common::tools::StringUtils::strToNum<unsigned int>(time_group_str, (unsigned int *)(v3 + 48), 1) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v19);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
      time_group_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityTimeGroupExcelConfig(
                                &v6->design_config.txt_config_mgr.new_activity_config_mgr,
                                *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr(&v19);
      if ( !time_group_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "fillTimeDynamicGroupsFromParam",
          2449);
        v7 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               &v20,
               (const char (*)[23])"invalid time_group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v20);
        result = -1;
        goto LABEL_16;
      }
      __for_range_0 = &time_group_config_ptr->group_id_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&time_group_config_ptr->group_id_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v9 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 64) = *v9;
        std::vector<unsigned int>::push_back(group_id_vec, (const std::vector<unsigned int>::value_type *)(v3 + 64));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
  }
  result = 0;
LABEL_16:
  if ( v21 == (char *)v3 )
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

// Line 2461: range 00000000137C182E-00000000137C19E6
int32_t __cdecl BaseActivity::execLoadTimeDynamicGroup(
        BaseActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 17 group_id_vec:2466";
  *(_QWORD *)(v2 + 16) = BaseActivity::execLoadTimeDynamicGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_REGISTER_GAME_TIME_DYNAMIC_GROUP )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
    if ( BaseActivity::fillTimeDynamicGroupsFromParam(this, action_exec, (std::vector<unsigned int> *)(v2 + 32)) )
    {
      v5 = -1;
    }
    else
    {
      BaseActivity::registerGameTimeGroups(this, (const std::vector<unsigned int> *)(v2 + 32));
      v5 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  }
  else
  {
    v5 = -1;
  }
  result = v5;
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

// Line 2476: range 00000000137C19E8-00000000137C1BA0
int32_t __cdecl BaseActivity::execUnloadTimeDynamicGroup(
        BaseActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 17 group_id_vec:2481";
  *(_QWORD *)(v2 + 16) = BaseActivity::execUnloadTimeDynamicGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_UNREGISTER_GAME_TIME_DYNAMIC_GROUP )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
    if ( BaseActivity::fillTimeDynamicGroupsFromParam(this, action_exec, (std::vector<unsigned int> *)(v2 + 32)) )
    {
      v5 = -1;
    }
    else
    {
      BaseActivity::unregisterGameTimeGroups(this, (const std::vector<unsigned int> *)(v2 + 32));
      v5 = 0;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  }
  else
  {
    v5 = -1;
  }
  result = v5;
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

// Line 2491: range 00000000137C1BA2-00000000137C2328
int32_t __cdecl BaseActivity::execLoadSpecifyBusinessInfoDynamicGroup(
        BaseActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  Scene *v20; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v22; // rdx
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *dynamic_group_map_ptr; // [rsp+28h] [rbp-D8h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v28; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *scene_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *group_id_vec; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 group_type:2501 48 4 19 group_sub_type:2502 64 16 14 scene_ptr:2517";
  *(_QWORD *)(v2 + 16) = BaseActivity::execLoadSpecifyBusinessInfoDynamicGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_LOAD_SPECIFY_BUSINESSINFO_DYNAMIC_GROUP )
  {
    if ( std::vector<std::string>::size(&action_exec->param) > 1 )
    {
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)(v2 + 48) = 0;
      if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
             &action_exec->param,
             (unsigned int *)(v2 + 32),
             (unsigned int *)(v2 + 48),
             (unsigned int *)&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execLoadSpecifyBusinessInfoDynamicGroup",
          2505);
        v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v31,
               (const char (*)[25])"strVecToNum fail. param:");
        common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        dynamic_group_map_ptr = LuaConfigMgr::findDynamicGroupMapByDetailType(
                                  &v9->design_config.lua_config_mgr,
                                  *(_DWORD *)(v2 + 32),
                                  *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( dynamic_group_map_ptr )
        {
          __for_range = dynamic_group_map_ptr;
          __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(dynamic_group_map_ptr)._M_cur;
          __for_end._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(dynamic_group_map_ptr)._M_cur;
          while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                    &__for_begin,
                    &__for_end) )
          {
            v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin);
            scene_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v28);
            group_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v28);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SceneComp = (unsigned int)Player::getSceneComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 64), SceneComp);
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/base_activity.cpp",
                "execLoadSpecifyBusinessInfoDynamicGroup",
                2520);
              v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v31, (const char (*)[5])"uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v17,
                      (const char (*)[19])" getPersonalScene ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, scene_id);
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" fails");
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v20);
              if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
                BlockGroupComp = __asan_report_load8();
              v22 = *(_QWORD *)BlockGroupComp + 96LL;
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                BlockGroupComp = __asan_report_load8();
              (*(void (__fastcall **)(unsigned __int64, std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *, _QWORD, _QWORD))v22)(
                BlockGroupComp,
                group_id_vec,
                0LL,
                0LL);
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin);
          }
          result = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execLoadSpecifyBusinessInfoDynamicGroup",
            2512);
          v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v31, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  v11,
                  (const char (*)[52])" findDynamicGroupMapByDetailType fails, group type:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 32));
          v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" sub_type");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v31);
          result = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execLoadSpecifyBusinessInfoDynamicGroup",
        2498);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v31,
             (const char (*)[19])"action param size ");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false>::__node_type *)std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_2505DE00);
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = -1;
    }
  }
  else
  {
    result = -1;
  }
  if ( v32 == (char *)v2 )
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

// Line 2529: range 00000000137C232A-00000000137C2AAE
int32_t __cdecl BaseActivity::execUnloadSpecifyBusinessInfoDynamicGroup(
        BaseActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rbx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t SceneComp; // ecx
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  Scene *v20; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v22; // rdx
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *dynamic_group_map_ptr; // [rsp+28h] [rbp-D8h]
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,std::vector<unsigned int> > *v28; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *scene_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *group_id_vec; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v31; // [rsp+50h] [rbp-B0h] BYREF
  char v32[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 group_type:2539 48 4 19 group_sub_type:2540 64 16 14 scene_ptr:2555";
  *(_QWORD *)(v2 + 16) = BaseActivity::execUnloadSpecifyBusinessInfoDynamicGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_UNLOAD_SPECIFY_BUSINESSINFO_DYNAMIC_GROUP )
  {
    if ( std::vector<std::string>::size(&action_exec->param) > 1 )
    {
      *(_DWORD *)(v2 + 32) = 0;
      *(_DWORD *)(v2 + 48) = 0;
      if ( common::tools::StringUtils::strVecToNum<0u,unsigned int,unsigned int &>(
             &action_exec->param,
             (unsigned int *)(v2 + 32),
             (unsigned int *)(v2 + 48),
             (unsigned int *)&action_exec->param) )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execUnloadSpecifyBusinessInfoDynamicGroup",
          2543);
        v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v31,
               (const char (*)[25])"strVecToNum fail. param:");
        common::milog::MiLogStream::operator<<<std::string>(v8, &action_exec->param);
        common::milog::MiLogStream::~MiLogStream(&v31);
        result = -1;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        dynamic_group_map_ptr = LuaConfigMgr::findDynamicGroupMapByDetailType(
                                  &v9->design_config.lua_config_mgr,
                                  *(_DWORD *)(v2 + 32),
                                  *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( dynamic_group_map_ptr )
        {
          __for_range = dynamic_group_map_ptr;
          __for_begin._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(dynamic_group_map_ptr)._M_cur;
          __for_end._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(dynamic_group_map_ptr)._M_cur;
          while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
                    &__for_begin,
                    &__for_end) )
          {
            v28 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*(&__for_begin);
            scene_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v28);
            group_id_vec = (std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::vector<unsigned int>>(v28);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            SceneComp = (unsigned int)Player::getSceneComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            PlayerSceneComp::getPersonalScene((PlayerSceneComp *const)(v2 + 64), SceneComp);
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
            {
              common::milog::MiLogStream::create(
                &v31,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/base_activity.cpp",
                "execUnloadSpecifyBusinessInfoDynamicGroup",
                2558);
              v16 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v31, (const char (*)[5])"uid:");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v17,
                      (const char (*)[19])" getPersonalScene ");
              v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, scene_id);
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" fails");
              common::milog::MiLogStream::~MiLogStream(&v31);
            }
            else
            {
              v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
              BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v20);
              if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
                BlockGroupComp = __asan_report_load8();
              v22 = *(_QWORD *)BlockGroupComp + 104LL;
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                BlockGroupComp = __asan_report_load8();
              (*(void (__fastcall **)(unsigned __int64, std::tuple_element<1,const std::pair<unsigned int const,std::vector<unsigned int> > >::type *, __int64))v22)(
                BlockGroupComp,
                group_id_vec,
                1LL);
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
            std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++(&__for_begin);
          }
          result = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v31,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execUnloadSpecifyBusinessInfoDynamicGroup",
            2550);
          v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v31, (const char (*)[5])"uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v12 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  v11,
                  (const char (*)[52])" findDynamicGroupMapByDetailType fails, group type:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v2 + 32));
          v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" sub_type");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v31);
          result = -1;
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v31,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "execUnloadSpecifyBusinessInfoDynamicGroup",
        2536);
      v6 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v31,
             (const char (*)[19])"action param size ");
      __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false>::__node_type *)std::vector<std::string>::size(&action_exec->param);
      v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
             v6,
             (const unsigned __int64 *)&__for_end);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_2505DE00);
      common::milog::MiLogStream::~MiLogStream(&v31);
      result = -1;
    }
  }
  else
  {
    result = -1;
  }
  if ( v32 == (char *)v2 )
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

// Line 2567: range 00000000137C2AB0-00000000137C353D
int32_t __cdecl BaseActivity::execOperateSceneTagVec(
        BaseActivity *const this,
        const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  bool v7; // r15
  common::milog::MiLogStream *v8; // rax
  int v9; // r15d
  common::milog::MiLogStream *v10; // r14
  std::vector<unsigned int>::reference v11; // rdx
  size_t v12; // rax
  std::vector<unsigned int>::reference v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::map<unsigned int,std::vector<unsigned int>> *v16; // rax
  std::vector<unsigned int> *v17; // rax
  uint32_t SceneComp; // r15d
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::pointer v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::pointer v21; // rax
  int v22; // r15d
  Scene *v23; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-1B9h] BYREF
  std::vector<std::string>::const_iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-1B0h] BYREF
  size_t i; // [rsp+38h] [rbp-1A8h]
  const std::vector<std::string> *__for_range; // [rsp+40h] [rbp-1A0h]
  std::map<unsigned int,std::vector<unsigned int>> *op_map; // [rsp+48h] [rbp-198h]
  const std::vector<unsigned int> *add_vec; // [rsp+50h] [rbp-190h]
  const std::vector<unsigned int> *del_vec; // [rsp+58h] [rbp-188h]
  const std::string *param; // [rsp+60h] [rbp-180h]
  const data::SceneTagConfig *scene_tag_config_ptr; // [rsp+68h] [rbp-178h]
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-170h] BYREF
  char v36[336]; // [rsp+90h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 12 op_type:2589 64 4 17 scene_tag_id:2592 80 8 9 iter:2602 112 16 14 scene_ptr:2604 144 2"
                        "4 16 sub_num_vec:2578 208 48 26 scene_tag_operate_map:2574";
  *(_QWORD *)(v3 + 16) = BaseActivity::execOperateSceneTagVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -218959360;
  v5[536862726] = 62194;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type == NEW_ACTIVITY_ACTION_OPERATE_SCENE_TAG_VEC )
  {
    std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::map((std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 208));
    __for_range = &action_exec->param;
    __for_begin._M_current = std::vector<std::string>::begin(&action_exec->param)._M_current;
    *(std::vector<std::string>::const_iterator *)(v3 + 80) = std::vector<std::string>::end(&action_exec->param);
    while ( __gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
              &__for_begin,
              (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v3 + 80)) )
    {
      param = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*(&__for_begin);
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 144));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v35, ":", &__a);
      v7 = common::tools::StringUtils::splitToList<unsigned int>(
             param,
             (const std::string *)&v35,
             (std::vector<unsigned int> *)(v3 + 144),
             1) != 0;
      std::string::~string(&v35);
      std::allocator<char>::~allocator(&__a);
      if ( v7 )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execOperateSceneTagVec",
          2581);
        v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v35,
               (const char (*)[47])"operate scene tag param parse error, param is ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, param);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v2 = -1;
        v9 = 0;
      }
      else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144)) > 1 )
      {
        v11 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 144), 0LL);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v3 + 48) = *v11;
        for ( i = 1LL; ; ++i )
        {
          v12 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144));
          if ( i >= v12 )
            break;
          v13 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 144), i);
          if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 64) = *v13;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 112));
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
          scene_tag_config_ptr = data::SceneExcelConfigMgrBase::findSceneTagConfig(
                                   &v14->design_config.txt_config_mgr.scene_config_mgr,
                                   *(_DWORD *)(v3 + 64));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 112));
          if ( !scene_tag_config_ptr )
          {
            common::milog::MiLogStream::create(
              &v35,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/base_activity.cpp",
              "execOperateSceneTagVec",
              2596);
            v15 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    &v35,
                    (const char (*)[47])off_2505F7C0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 64));
            common::milog::MiLogStream::~MiLogStream(&v35);
            v2 = -1;
            v9 = 0;
            goto LABEL_24;
          }
          v16 = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::operator[](
                  (std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 208),
                  &scene_tag_config_ptr->scene_id);
          v17 = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                  v16,
                  (const std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
          std::vector<unsigned int>::push_back(v17, (const std::vector<unsigned int>::value_type *)(v3 + 64));
        }
        v9 = 1;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execOperateSceneTagVec",
          2586);
        v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                &v35,
                (const char (*)[42])"operate scene tag sub_num_vec size error ");
        val = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 144));
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v2 = -1;
        v9 = 0;
      }
LABEL_24:
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 144));
      if ( v9 != 1 )
        goto LABEL_40;
      __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++(&__for_begin);
    }
    *(std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::iterator *)(v3 + 80) = std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::begin((std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 208));
    while ( 1 )
    {
      val = (unsigned __int64)std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::end((std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 208))._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)(v3 + 80),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > >::_Self *)&val) )
        break;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v3 + 80));
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      PlayerSceneComp::getWorldOrPersistentDungeonScenePtr((PlayerSceneComp *const)(v3 + 112), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          &v35,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "execOperateSceneTagVec",
          2607);
        v20 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(&v35, (const char (*)[41])off_2505F820);
        v21 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v3 + 80));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &v21->first);
        common::milog::MiLogStream::~MiLogStream(&v35);
        v2 = -1;
        v22 = 0;
      }
      else
      {
        op_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v3 + 80))->second;
        *(_DWORD *)(v3 + 64) = 1;
        add_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                    op_map,
                    (std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
        *(_DWORD *)(v3 + 64) = 2;
        del_vec = std::map<unsigned int,std::vector<unsigned int>>::operator[](
                    op_map,
                    (std::map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 64));
        v23 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
        if ( Scene::processSceneTag(v23, add_vec, del_vec, 0LL) )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "execOperateSceneTagVec",
            2615);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v35,
            (const char (*)[25])"process scene tag failed");
          common::milog::MiLogStream::~MiLogStream(&v35);
          v2 = -1;
          v22 = 0;
        }
        else
        {
          v22 = 1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 112));
      if ( v22 != 1 )
        goto LABEL_40;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>>>>::operator++(
        (std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<unsigned int>> > > *const)(v3 + 80),
        0);
    }
    v2 = 0;
LABEL_40:
    std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>>::~map((std::map<unsigned int,std::map<unsigned int,std::vector<unsigned int>>> *const)(v3 + 208));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "execOperateSceneTagVec",
      2570);
    v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v35,
           (const char (*)[43])"execOperateSceneTagVec but incorrent type ");
    common::milog::MiLogStream::operator<<<data::NewActivityActionType,(data::NewActivityActionType*)0>(
      v6,
      &action_exec->type);
    common::milog::MiLogStream::~MiLogStream(&v35);
    v2 = -1;
  }
  result = v2;
  if ( v36 == (char *)v3 )
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

// Line 2624: range 00000000137C353E-00000000137C355C
void __cdecl BaseActivity::execNotifyBanner(const BaseActivity *const this, const data::NewActivityExec *action_exec)
{
  BaseActivity::tryNotifyBanner(this);
};

// Line 2629: range 00000000137C355E-00000000137C367D
void __cdecl BaseActivity::onLogin(BaseActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( !Player::isRelogin(this->player_) )
      BaseActivity::addWatchers(this);
    if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_quick_open_);
    if ( this->is_quick_open_ )
    {
      BaseActivity::updateQuickOpenUnfinishedQuestVec(this);
      BaseActivity::tryRegisterPreQuestFinishObserver(this);
    }
    if ( !std::map<unsigned int,ActivityRecvGiftData>::empty(&this->gift_data_.recv_gift_data_map) )
      BaseActivity::sendHaveRecvGiftNotify(this);
    BaseActivity::checkAndTryNotifyBanner(this);
  }
};

// Line 2656: range 00000000137C367E-00000000137C37FF
int32_t __cdecl BaseActivity::addWatchers(BaseActivity *const this)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *v3; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::unordered_set<unsigned int> *watcher_id_set; // [rsp+30h] [rbp-30h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v8[2]; // [rsp+40h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  watcher_id_set = NewActivityExcelConfigMgr::findNewActivityWatcherSet(p_new_activity_config_mgr, this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(v8);
  if ( std::unordered_set<unsigned int>::empty(watcher_id_set) )
    return 0;
  __for_range = watcher_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(watcher_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(watcher_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v3 = (uint32_t *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BaseActivity::tryRegisterWatcher(this, *v3);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 2670: range 00000000137C3800-00000000137C3E71
void __fastcall BaseActivity::tryRegisterWatcher(BaseActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t WatcherComp; // eax
  bool v12; // r14
  PlayerWatcherComp *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::WatcherConfig *watcher_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-90h] BYREF
  char v23[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 watcher_id:2669";
  *(_QWORD *)(v2 + 16) = BaseActivity::tryRegisterWatcher;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                         &v5->design_config.txt_config_mgr.watcher_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !watcher_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "tryRegisterWatcher",
      2674);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v22,
           (const char (*)[22])"findWatcherConfig id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_24:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    goto LABEL_25;
  }
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->finished_watcher_id_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    goto LABEL_25;
  }
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->taken_watcher_id_set_,
         (const unsigned int *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "tryRegisterWatcher",
      2684);
    v9 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v22, (const char (*)[12])"watcher_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])" taken reward, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_24;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v21, WatcherComp);
  v12 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v21);
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v21);
  if ( !v12 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = Player::getWatcherComp(this->player_);
    PlayerWatcherComp::addWatcher(
      (PlayerWatcherComp *const)&v21,
      (const WatcherConfig *)v13,
      (uint32_t)watcher_config_ptr);
    v14 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v21);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v21);
    if ( v14 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "tryRegisterWatcher",
        2694);
      v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v22,
              (const char (*)[24])"addWatcherAndNotify id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])" fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "tryRegisterWatcher",
        2697);
      v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v22, (const char (*)[13])"add_watcher:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v2 + 32));
      v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v18, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    goto LABEL_24;
  }
LABEL_25:
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

// Line 2701: range 00000000137C3E72-00000000137C3FD9
int32_t __cdecl BaseActivity::delWatchers(BaseActivity *const this)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  uint32_t *v2; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::unordered_set<unsigned int> *watcher_id_set; // [rsp+30h] [rbp-30h]
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-28h]
  std::shared_ptr<Config> v8[2]; // [rsp+40h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  watcher_id_set = NewActivityExcelConfigMgr::findNewActivityWatcherSet(p_new_activity_config_mgr, this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(v8);
  __for_range = watcher_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(watcher_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(watcher_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v2 = (uint32_t *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BaseActivity::tryUnregisterWatcher(this, *v2);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 2711: range 00000000137C3FDA-00000000137C43D9
void __fastcall BaseActivity::tryUnregisterWatcher(BaseActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r12
  uint32_t WatcherComp; // eax
  bool v10; // r14
  PlayerWatcherComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+14h] [rbp-ACh] BYREF
  const data::WatcherConfig *watcher_config_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-90h] BYREF
  char v18[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 watcher_id:2710";
  *(_QWORD *)(v2 + 16) = BaseActivity::tryUnregisterWatcher;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = watcher_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                         &v5->design_config.txt_config_mgr.watcher_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( watcher_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v16, WatcherComp);
    v10 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v16);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v16);
    if ( v10 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v11 = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::delWatcher(v11, *(_DWORD *)(v2 + 32));
    }
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "tryUnregisterWatcher",
      2722);
    v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v17, (const char (*)[13])"del_watcher:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "tryUnregisterWatcher",
      2715);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v17,
           (const char (*)[22])"findWatcherConfig id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])" fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v17);
  if ( v18 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 2726: range 00000000137C43DA-00000000137C4D49
void __cdecl BaseActivity::onWatcherProgressUpdate(
        BaseActivity *const this,
        const WatcherProgressUpdateEvent *event,
        const data::NewActivityWatcherConfig *watcher_config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned __int64 v6; // rax
  unsigned __int8 (__fastcall *v7)(BaseActivity *const, _QWORD); // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  PlayerBasicComp *BasicComp; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  unsigned __int64 v16; // rax
  void (__fastcall *v17)(_QWORD, _QWORD); // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rcx
  Player *v21; // r14
  proto::ActivityWatcherInfo *v22; // rcx
  std::string v23; // [rsp+0h] [rbp-110h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-E0h] BYREF
  char v26[208]; // [rsp+40h] [rbp-D0h] BYREF

  *(&v23._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v23._anon_0._M_allocated_capacity = (std::string::size_type)event;
  v23._M_string_length = (std::string::size_type)watcher_config;
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 1 11 holder:2740 64 16 12 log_ptr:2747 96 32 11 notify:2760";
  *(_QWORD *)(v3 + 16) = BaseActivity::onWatcherProgressUpdate;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -219021312;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v6 = (unsigned __int64)(this->_vptr_DescribalBase + 23);
  if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
    v6 = __asan_report_load8();
  v7 = *(unsigned __int8 (__fastcall **)(BaseActivity *const, _QWORD))v6;
  if ( *(_BYTE *)(((v23._M_string_length + 8) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v23._M_string_length + 8) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( v7(this, *(unsigned int *)(v23._M_string_length + 8)) != 1 )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "onWatcherProgressUpdate",
      2729);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[13])"activity_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v9,
            (const char (*)[29])" doesn't contain watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v10,
      (const unsigned int *)(v23._M_string_length + 8));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    goto LABEL_51;
  }
  if ( *(char *)(((unsigned __int64)&event->is_finished >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_finished);
  if ( event->is_finished )
  {
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           &event->watcher_id) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "onWatcherProgressUpdate",
        2737);
      v11 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              (common::milog::MiLogStream *const)(v3 + 96),
              (const char (*)[47])"activity watcher already finished, watcher_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->watcher_id);
      v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v13, this->player_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      goto LABEL_51;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(v3 + 96), BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB12u, v23);
    std::string::~string((void *)(v3 + 96));
    if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(*(Player *const *)(*(&v23._anon_0._M_allocated_capacity + 1) + 24));
    if ( *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerWatcherComp::delWatcher(WatcherComp, *(_DWORD *)(v23._anon_0._M_allocated_capacity + 24));
    std::set<unsigned int>::insert(
      (std::set<unsigned int> *const)(*(&v23._anon_0._M_allocated_capacity + 1) + 392),
      (const std::set<unsigned int>::value_type *)(v23._anon_0._M_allocated_capacity + 24));
    if ( *(_BYTE *)((*(&v23._anon_0._M_allocated_capacity + 1) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v16 = **((_QWORD **)&v23._anon_0._M_allocated_capacity + 1) + 192LL;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      v16 = __asan_report_load8();
    v17 = *(void (__fastcall **)(_QWORD, _QWORD))v16;
    if ( *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v17(*(&v23._anon_0._M_allocated_capacity + 1), *(unsigned int *)(v23._anon_0._M_allocated_capacity + 24));
    BaseActivity::updateAllConds(*((BaseActivity *const *)&v23._anon_0._M_allocated_capacity + 1));
    common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityFinishWatcher>();
    v18 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyActivityFinishWatcher::set_activity_id(
      v18,
      *(_DWORD *)(*(&v23._anon_0._M_allocated_capacity + 1) + 32));
    v19 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 36) >> 3) + 0x7FFF8000) != 0
      && (char)(((v23._anon_0._M_local_buf[8] + 36) & 7) + 3) >= *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1)
                                                                            + 36) >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyActivityFinishWatcher::set_schedule_id(
      v19,
      *(_DWORD *)(*(&v23._anon_0._M_allocated_capacity + 1) + 36));
    v20 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityFinishWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyActivityFinishWatcher::set_watcher_id(
      v20,
      *(_DWORD *)(v23._anon_0._M_allocated_capacity + 24));
    if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v21 = *(Player **)(*(&v23._anon_0._M_allocated_capacity + 1) + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityFinishWatcher,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyActivityFinishWatcher> *)(v3 + 64));
    Player::printStatLog(v21, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    if ( *(char *)(((v23._M_string_length + 112) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(v23._M_string_length + 112);
    if ( *(_BYTE *)(v23._M_string_length + 112) )
    {
      if ( *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((v23._anon_0._M_allocated_capacity + 24) >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      BaseActivity::takeWatcherReward(
        *((BaseActivity *const *)&v23._anon_0._M_allocated_capacity + 1),
        *(_DWORD *)(v23._anon_0._M_allocated_capacity + 24));
    }
    std::shared_ptr<proto_log::PlayerLogBodyActivityFinishWatcher>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityFinishWatcher> *const)(v3 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  }
  proto::ActivityUpdateWatcherNotify::ActivityUpdateWatcherNotify((proto::ActivityUpdateWatcherNotify *const)(v3 + 96));
  if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityUpdateWatcherNotify::set_activity_id(
    (proto::ActivityUpdateWatcherNotify *const)(v3 + 96),
    *(_DWORD *)(*(&v23._anon_0._M_allocated_capacity + 1) + 32));
  v22 = proto::ActivityUpdateWatcherNotify::mutable_watcher_info((proto::ActivityUpdateWatcherNotify *const)(v3 + 96));
  BaseActivity::fillWatcherProto(
    *((BaseActivity *const *)&v23._anon_0._M_allocated_capacity + 1),
    v22,
    (const data::NewActivityWatcherConfig *)v23._M_string_length);
  if ( *(_BYTE *)(((*(&v23._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(
    *(Player *const *)(*(&v23._anon_0._M_allocated_capacity + 1) + 24),
    (const google::protobuf::Message *)(v3 + 96));
  proto::ActivityUpdateWatcherNotify::~ActivityUpdateWatcherNotify((proto::ActivityUpdateWatcherNotify *const)(v3 + 96));
LABEL_51:
  if ( v26 == (char *)v3 )
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

// Line 2767: range 00000000137C4D4A-00000000137C4E8E
int32_t __cdecl BaseActivity::takeWatcherReward(BaseActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  int32_t result; // eax
  char v7[144]; // [rsp+10h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 13 item_vec:2768";
  *(_QWORD *)(v2 + 16) = BaseActivity::takeWatcherReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v2 + 32));
  v5 = BaseActivity::takeWatcherReward(this, watcher_id, 0, (std::vector<ItemParam> *)(v2 + 32));
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v2 + 32));
  result = v5;
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

// Line 2773: range 00000000137C4E90-00000000137C5CCC
__int64 __fastcall BaseActivity::takeWatcherReward(
        BaseActivity *const this,
        uint32_t watcher_id,
        bool is_batch,
        std::vector<ItemParam> *dislay_vec)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  proto::ActionReasonType v16; // eax
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v18; // rax
  PlayerBasicComp *BasicComp; // rax
  PlayerItemComp *p_reward_id; // rdi
  bool v21; // r14
  common::milog::MiLogStream *v22; // rax
  ItemParam *M_current; // r15
  ItemParam *v24; // r14
  unsigned __int64 v25; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  Player *player; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  __int64 result; // rax
  std::string v35; // [rsp+0h] [rbp-1D0h]
  const PlayerItemComp *v36; // [rsp+10h] [rbp-1C0h]
  std::allocator<unsigned int> __a; // [rsp+33h] [rbp-19Dh] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+34h] [rbp-19Ch] BYREF
  int32_t ret; // [rsp+44h] [rbp-18Ch]
  __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > __i; // [rsp+48h] [rbp-188h] BYREF
  __gnu_cxx::__normal_iterator<const ItemParam*,std::vector<ItemParam> > __position; // [rsp+50h] [rbp-180h] BYREF
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+58h] [rbp-178h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-170h] BYREF
  std::shared_ptr<google::protobuf::Message> v46; // [rsp+70h] [rbp-160h] BYREF
  std::vector<unsigned int> reward_id_vec; // [rsp+80h] [rbp-150h] BYREF
  common::milog::MiLogStream v48; // [rsp+A0h] [rbp-130h] BYREF
  char v49[272]; // [rsp+C0h] [rbp-110h] BYREF

  *(&v35._anon_0._M_allocated_capacity + 1) = (std::string::size_type)dislay_vec;
  v4 = (unsigned __int64)v49;
  v35._M_string_length = (std::string::size_type)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(224LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 1 11 holder:2805 48 4 15 watcher_id:2772 64 16 12 log_ptr:2822 96 24 18 action_reason:2797 "
                        "160 24 13 item_vec:2812";
  *(_QWORD *)(v4 + 16) = BaseActivity::takeWatcherReward;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -219021312;
  v6[536862723] = -234881024;
  v6[536862724] = -218959118;
  v6[536862725] = -218103808;
  v6[536862726] = -202116109;
  *(_DWORD *)(v4 + 48) = watcher_id;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 23);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(BaseActivity *const, _QWORD))v7)(this, *(unsigned int *)(v4 + 48)) != 1 )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "takeWatcherReward",
      2776);
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v48, (const char (*)[13])"activity_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v9,
            (const char (*)[28])" don't contains watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v48);
    v11 = -1;
  }
  else if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
               &this->finished_watcher_id_set_,
               (const unsigned int *)(v4 + 48)) )
  {
    v11 = 867;
  }
  else if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
              &this->taken_watcher_id_set_,
              (const unsigned int *)(v4 + 48)) )
  {
    v11 = 866;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v46);
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
    watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                           &v12->design_config.txt_config_mgr.new_activity_config_mgr,
                           *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
    if ( watcher_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v46);
      p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46)->design_config.txt_config_mgr.new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      HIDWORD(__l._M_array) = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(
                                p_new_activity_config_mgr,
                                this->activity_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v46);
      v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v46);
      LODWORD(__l._M_len) = NewActivityExcelConfigMgr::getRewardItemLimitType(
                              &v15->design_config.txt_config_mgr.new_activity_config_mgr,
                              SHIDWORD(__l._M_array));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v46);
      if ( is_batch )
        v16 = ACTION_REASON_ACTIVITY_WATCHER_BATCH;
      else
        v16 = ACTION_REASON_ACTIVITY_WATCHER;
      HIDWORD(__l._M_len) = v16;
      ActionReason::ActionReason((ActionReason *const)(v4 + 96), v16, __l._M_len);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)watcher_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      ret = PlayerItemComp::checkGrantReward(ItemComp, watcher_config_ptr->reward_id, (const ActionReason *)(v4 + 96));
      if ( ret )
      {
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "takeWatcherReward",
          2801);
        v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v48,
                (const char (*)[24])"checkGrantReward fails:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &watcher_config_ptr->reward_id);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v11 = ret;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        BasicComp = Player::getBasicComp(this->player_);
        PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v48, BasicComp);
        StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xB0Eu, v35);
        std::string::~string(&v48);
        std::set<unsigned int>::insert(
          &this->taken_watcher_id_set_,
          (const std::set<unsigned int>::value_type *)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        p_reward_id = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)watcher_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          p_reward_id = (PlayerItemComp *)&watcher_config_ptr->reward_id;
          __asan_report_load4();
        }
        PlayerItemComp::grantReward(p_reward_id, watcher_config_ptr->reward_id, (const ActionReason *)(v4 + 96), 0LL);
        std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 160));
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v36 = Player::getItemComp(this->player_);
        if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)watcher_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        LODWORD(__l._M_array) = watcher_config_ptr->reward_id;
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(
          &reward_id_vec,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &__l),
          &__a);
        v21 = PlayerItemComp::getItemParamVecByRewardIdVec(v36, &reward_id_vec, (std::vector<ItemParam> *)(v4 + 160)) != 0;
        std::vector<unsigned int>::~vector(&reward_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( v21 )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "takeWatcherReward",
            2815);
          v22 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  &v48,
                  (const char (*)[48])"getItemParamVecByRewardIdVec failed, reward_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &watcher_config_ptr->reward_id);
          common::milog::MiLogStream::~MiLogStream(&v48);
        }
        M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v4 + 160))._M_current;
        v24 = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 160))._M_current;
        __i._M_current = std::vector<ItemParam>::end(*((std::vector<ItemParam> *const *)&v35._anon_0._M_allocated_capacity
                                                     + 1))._M_current;
        __gnu_cxx::__normal_iterator<ItemParam const*,std::vector<ItemParam>>::__normal_iterator<ItemParam*>(
          &__position,
          &__i);
        std::vector<ItemParam>::insert<__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam>>,void>(
          *((std::vector<ItemParam> *const *)&v35._anon_0._M_allocated_capacity + 1),
          __position,
          (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)v24,
          (__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> >)M_current);
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v25 = (unsigned __int64)(this->_vptr_DescribalBase + 22);
        if ( *(_BYTE *)((v25 >> 3) + 0x7FFF8000) )
          v25 = __asan_report_load8();
        (*(void (__fastcall **)(BaseActivity *const, _QWORD))v25)(this, *(unsigned int *)(v4 + 48));
        common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityTakeWatcher>();
        v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyActivityTakeWatcher::set_activity_id(v26, this->activity_id_);
        v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyActivityTakeWatcher::set_schedule_id(v27, this->schedule_id_);
        v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        proto_log::PlayerLogBodyActivityTakeWatcher::set_watcher_id(v28, *(_DWORD *)(v4 + 48));
        v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityTakeWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)watcher_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->reward_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::PlayerLogBodyActivityTakeWatcher::set_reward_id(v29, watcher_config_ptr->reward_id);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        player = this->player_;
        std::shared_ptr<google::protobuf::Message>::shared_ptr(&v46, 0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityTakeWatcher,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyActivityTakeWatcher> *)(v4 + 64));
        Player::printStatLog(player, &p_body_ptr, &v46, 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v46);
        common::milog::MiLogStream::create(
          &v48,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "takeWatcherReward",
          2829);
        v31 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                &v48,
                (const char (*)[19])"takeWatcherReward ");
        v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v31,
                (const unsigned int *)(v4 + 48));
        v33 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v32, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        LODWORD(__l._M_array) = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)&__l);
        common::milog::MiLogStream::~MiLogStream(&v48);
        v11 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyActivityTakeWatcher>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityTakeWatcher> *const)(v4 + 64));
        std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 160));
        StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "takeWatcherReward",
        2790);
      v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v48,
              (const char (*)[34])"findActivityWatcherConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v48);
      v11 = -1;
    }
  }
  result = v11;
  if ( v35._M_string_length == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
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
  return result;
};

// Line 2834: range 00000000137C5CCE-00000000137C5D8B
bool __cdecl BaseActivity::isContainsWatcher(BaseActivity *const this, uint32_t watcher_id)
{
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  bool isActivityContainsWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  isActivityContainsWatcher = NewActivityExcelConfigMgr::isActivityContainsWatcher(
                                p_new_activity_config_mgr,
                                this->activity_id_,
                                watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isActivityContainsWatcher;
};

// Line 2839: range 00000000137C5D8C-00000000137C5E90
_BOOL8 __fastcall BaseActivity::isWatcherFinished(const BaseActivity *const this, uint32_t watcher_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  _BOOL8 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 watcher_id:2838";
  *(_QWORD *)(v2 + 16) = BaseActivity::isWatcherFinished;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = watcher_id;
  result = common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->taken_watcher_id_set_,
             (const unsigned int *)(v2 + 32))
        || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->finished_watcher_id_set_,
             (const unsigned int *)(v2 + 32));
  if ( v6 == (char *)v2 )
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

// Line 2845: range 00000000137C5E92-00000000137C6FCA
__int64 __fastcall BaseActivity::selectAvatarCard(BaseActivity *const this, uint32_t reward_id)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // r15
  uint32_t ScheduleId; // eax
  common::milog::MiLogStream *v11; // r14
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rdx
  common::milog::MiLogStream *v13; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  NewActivityExcelConfigMgr *v19; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v22; // rax
  std::vector<unsigned int>::size_type v23; // r15
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // rax
  std::vector<unsigned int>::const_reference v28; // rdx
  std::vector<unsigned int>::const_reference v29; // rdx
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // r15d
  common::milog::MiLogStream *v34; // r14
  common::milog::MiLogStream *v35; // rax
  PlayerItemComp *v36; // rax
  PlayerItemComp *v37; // rax
  common::milog::MiLogStream *v38; // r15
  common::milog::MiLogStream *v39; // rax
  uint32_t v40; // ecx
  PlayerItemComp *v41; // rax
  PlayerActivityComp *ActivityComp; // r14
  uint32_t v43; // ebx
  uint32_t v44; // r15d
  uint32_t ActivityId; // eax
  __int64 result; // rax
  uint32_t idx; // [rsp+24h] [rbp-1CCh]
  data::NewActivityType activity_type; // [rsp+28h] [rbp-1C8h]
  data::ItemLimitType limit_type; // [rsp+2Ch] [rbp-1C4h]
  int32_t ret; // [rsp+30h] [rbp-1C0h]
  uint32_t cost_item_num; // [rsp+34h] [rbp-1BCh]
  const data::NewActivityAvatarSelectionExcelConfig *avatar_selection_config_ptr; // [rsp+38h] [rbp-1B8h]
  const std::vector<unsigned int> *cost_item_id_list; // [rsp+50h] [rbp-1A0h]
  const std::vector<unsigned int> *cost_item_num_list; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v55; // [rsp+60h] [rbp-190h] BYREF
  char v56[368]; // [rsp+80h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 4 17 cost_item_id:2907 64 4 15 watcher_id:2861 80 4 14 reward_id:2844 96 8 9 iter:2876 128 "
                        "8 15 sub_reason:2930 160 16 10 param:2914 192 24 11 reason:2884 256 24 14 param_vec:2904";
  *(_QWORD *)(v3 + 16) = BaseActivity::selectAvatarCard;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 80) = reward_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "selectAvatarCard",
      2848);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v55, (const char (*)[13])"schedule_id:");
    *(_DWORD *)(v3 + 64) = BaseActivity::getScheduleId(this);
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" closed!");
    common::milog::MiLogStream::~MiLogStream(&v55);
    v2 = 860;
    goto LABEL_79;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.new_activity_config_mgr;
  ScheduleId = BaseActivity::getScheduleId(this);
  avatar_selection_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityAvatarSelectionExcelConfig(
                                  p_new_activity_config_mgr,
                                  ScheduleId);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  if ( !avatar_selection_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "selectAvatarCard",
      2854);
    v11 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
            &v55,
            (const char (*)[61])"findNewActivityAvatarSelectionExcelConfig fails, scheduleID:");
    *(_DWORD *)(v3 + 64) = BaseActivity::getScheduleId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v55);
    v2 = -1;
    goto LABEL_79;
  }
  if ( *(_BYTE *)(((unsigned __int64)&avatar_selection_config_ptr->cond_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)avatar_selection_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&avatar_selection_config_ptr->cond_id >> 3)
                                                                               + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( !BaseActivity::isMeetCond(this, avatar_selection_config_ptr->cond_id) )
  {
    v2 = 898;
    goto LABEL_79;
  }
  *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::begin(&avatar_selection_config_ptr->watcher_id_list);
  *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(&avatar_selection_config_ptr->watcher_id_list);
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
  {
    v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 64) = *v12;
    if ( !BaseActivity::isWatcherFinished(this, *(_DWORD *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "selectAvatarCard",
        2865);
      v13 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(&v55, (const char (*)[59])off_25060060);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v55);
      v2 = 898;
      goto LABEL_79;
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 96));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->selected_avatar_reward_id_ )
  {
    v2 = 899;
    goto LABEL_79;
  }
  M_current = std::vector<unsigned int>::end(&avatar_selection_config_ptr->avatar_reward_list)._M_current;
  v15._M_current = std::vector<unsigned int>::begin(&avatar_selection_config_ptr->avatar_reward_list)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                 v15,
                                                                                                 (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                 (const unsigned int *)(v3 + 80));
  *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::end(&avatar_selection_config_ptr->avatar_reward_list);
  if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96),
         (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "selectAvatarCard",
      2879);
    v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v55, (const char (*)[21])off_250600C0);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 80));
    v18 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v17, (const char (*)[17])off_25060100);
    *(_DWORD *)(v3 + 64) = BaseActivity::getScheduleId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v55);
    v2 = -1;
    goto LABEL_79;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  v19 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160))->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v19, this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  limit_type = NewActivityExcelConfigMgr::getAvatarSelectionLimitType(
                 &v20->design_config.txt_config_mgr.new_activity_config_mgr,
                 activity_type);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  ActionReason::ActionReason(
    (ActionReason *const)(v3 + 192),
    ACTION_REASON_ACTIVITY_AVATAR_SELECTION_REWARD,
    limit_type);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  ItemComp = Player::getItemComp(this->player_);
  ret = PlayerItemComp::checkGrantReward(ItemComp, *(_DWORD *)(v3 + 80), (const ActionReason *)(v3 + 192));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "selectAvatarCard",
      2888);
    v22 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v55,
            (const char (*)[24])"checkGrantReward fails:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v55);
    v2 = ret;
    goto LABEL_79;
  }
  if ( *(char *)(((unsigned __int64)&avatar_selection_config_ptr->is_not_consume_item >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&avatar_selection_config_ptr->is_not_consume_item);
  if ( avatar_selection_config_ptr->is_not_consume_item )
    goto LABEL_72;
  cost_item_id_list = &avatar_selection_config_ptr->cost_item_id_list;
  cost_item_num_list = &avatar_selection_config_ptr->cost_item_num_list;
  if ( std::vector<unsigned int>::empty(&avatar_selection_config_ptr->cost_item_id_list)
    || std::vector<unsigned int>::empty(cost_item_num_list)
    || (v23 = std::vector<unsigned int>::size(cost_item_id_list),
        v23 != std::vector<unsigned int>::size(cost_item_num_list)) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "selectAvatarCard",
      2900);
    v25 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v55, (const char (*)[13])"schedule_id:");
    *(_DWORD *)(v3 + 64) = BaseActivity::getScheduleId(this);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v26, (const char (*)[25])" cost_item param invalid");
    common::milog::MiLogStream::~MiLogStream(&v55);
    v2 = -1;
    goto LABEL_79;
  }
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 256));
  for ( idx = 0;
        idx < std::vector<unsigned int>::size(cost_item_id_list)
     && idx < std::vector<unsigned int>::size(cost_item_num_list);
        ++idx )
  {
    v28 = std::vector<unsigned int>::operator[](cost_item_id_list, idx);
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 48) = *v28;
    v29 = std::vector<unsigned int>::operator[](cost_item_num_list, idx);
    if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    cost_item_num = *v29;
    if ( !*v29 )
    {
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/base_activity.cpp",
        "selectAvatarCard",
        2911);
      v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v55, (const char (*)[13])"schedule_id:");
      *(_DWORD *)(v3 + 64) = BaseActivity::getScheduleId(this);
      v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v3 + 64));
      v32 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v31,
              (const char (*)[29])" cost_item_num = 0, item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v55);
      v2 = -1;
      v33 = 0;
      goto LABEL_71;
    }
    *(_QWORD *)(v3 + 160) = 0LL;
    *(_QWORD *)(v3 + 168) = 0LL;
    *(_DWORD *)(v3 + 160) = *(_DWORD *)(v3 + 48);
    *(_DWORD *)(v3 + 164) = cost_item_num;
    std::vector<ItemParam>::push_back(
      (std::vector<ItemParam> *const)(v3 + 256),
      (const std::vector<ItemParam>::value_type *)(v3 + 160));
  }
  if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 256)) )
  {
    common::milog::MiLogStream::create(
      &v55,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/activity/base_activity.cpp",
      "selectAvatarCard",
      2920);
    v34 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v55, (const char (*)[13])"schedule_id:");
    *(_DWORD *)(v3 + 64) = BaseActivity::getScheduleId(this);
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v35, (const char (*)[23])" cost_item param empty");
    common::milog::MiLogStream::~MiLogStream(&v55);
    v2 = -1;
    v33 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v36 = Player::getItemComp(this->player_);
    if ( PlayerItemComp::checkSubItemBatch(v36, (const std::vector<ItemParam> *)(v3 + 256)) )
    {
      v2 = 609;
      v33 = 0;
    }
    else
    {
      SubItemReason::SubItemReason((SubItemReason *const)(v3 + 128), ACTION_REASON_ACTIVITY_AVATAR_SELECTION_REWARD);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v37 = Player::getItemComp(this->player_);
      if ( PlayerItemComp::subItemBatch(
             v37,
             (const std::vector<ItemParam> *)(v3 + 256),
             (const SubItemReason *)(v3 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "selectAvatarCard",
          2933);
        v38 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v55, (const char (*)[5])"uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        *(_DWORD *)(v3 + 64) = Player::getUid(this->player_);
        v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v38,
                (const unsigned int *)(v3 + 64));
        common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v39, (const char (*)[15])" subItem fails");
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      v33 = 1;
    }
  }
LABEL_71:
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 256));
  if ( v33 == 1 )
  {
LABEL_72:
    v40 = *(_DWORD *)(v3 + 80);
    if ( *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->selected_avatar_reward_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->selected_avatar_reward_id_);
    }
    this->selected_avatar_reward_id_ = v40;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v41 = Player::getItemComp(this->player_);
    PlayerItemComp::grantReward(v41, *(_DWORD *)(v3 + 80), (const ActionReason *)(v3 + 192), 0LL);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ActivityComp = Player::getActivityComp(this->player_);
    v43 = *(_DWORD *)(v3 + 80);
    v44 = BaseActivity::getScheduleId(this);
    ActivityId = BaseActivity::getActivityId(this);
    PlayerActivityComp::logGetActivityReward(ActivityComp, ActivityId, v44, v43);
    v2 = 0;
  }
LABEL_79:
  result = v2;
  if ( v56 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2946: range 00000000137C6FCC-00000000137C70D8
uint32_t __cdecl BaseActivity::getBeginTimeByOpenDay(uint32_t schedule_id, uint32_t open_day)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t schedule_begin_time; // [rsp+10h] [rbp-30h]
  uint32_t time_offset; // [rsp+14h] [rbp-2Ch]
  uint32_t schedule_begin_day; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v8[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
  schedule_begin_time = NewActivityExcelConfigMgr::getScheduleBeginTime(
                          &v2->design_config.txt_config_mgr.new_activity_config_mgr,
                          schedule_id);
  std::shared_ptr<Config>::~shared_ptr(v8);
  if ( open_day <= 1 )
    return schedule_begin_time;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v8);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(v8);
  schedule_begin_day = common::tools::TimeUtils::getTimeDay(schedule_begin_time, time_offset);
  return common::tools::TimeUtils::getDailyStartTime(schedule_begin_day + open_day - 1, time_offset);
};

// Line 2963: range 00000000137C70DA-00000000137C73F4
int32_t __cdecl BaseActivity::fillWatcherProto(
        BaseActivity *const this,
        proto::ActivityWatcherInfo *watcher_info,
        const data::NewActivityWatcherConfig *activity_watcher_config)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t WatcherComp; // eax
  int v8; // r15d
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t Progress; // edx
  bool v11; // dl
  int32_t result; // eax
  char v14[144]; // [rsp+30h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 15 watcher_id:2964 64 16 16 watcher_ptr:2972";
  *(_QWORD *)(v4 + 16) = BaseActivity::fillWatcherProto;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&activity_watcher_config->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&activity_watcher_config->id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 48) = activity_watcher_config->id;
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
         &this->finished_watcher_id_set_,
         (const unsigned int *)(v4 + 48)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&activity_watcher_config->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&activity_watcher_config->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ActivityWatcherInfo::set_cur_progress(watcher_info, activity_watcher_config->progress);
LABEL_16:
    proto::ActivityWatcherInfo::set_watcher_id(watcher_info, *(_DWORD *)(v4 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&activity_watcher_config->progress >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&activity_watcher_config->progress >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ActivityWatcherInfo::set_total_progress(watcher_info, activity_watcher_config->progress);
    v11 = common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
            &this->taken_watcher_id_set_,
            (const unsigned int *)(v4 + 48));
    proto::ActivityWatcherInfo::set_is_taken_reward(watcher_info, v11);
    v3 = 0;
    goto LABEL_19;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
  PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v4 + 64), WatcherComp);
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v4 + 64)) )
  {
    v3 = -1;
    v8 = 0;
  }
  else
  {
    v9 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    Progress = BaseWatcher::getProgress(v9);
    proto::ActivityWatcherInfo::set_cur_progress(watcher_info, Progress);
    v8 = 1;
  }
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 64));
  if ( v8 == 1 )
    goto LABEL_16;
LABEL_19:
  result = v3;
  if ( v14 == (char *)v4 )
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

// Line 2991: range 00000000137C73F6-00000000137C75C0
bool __cdecl BaseActivity::isRemainReward(const BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr M_node; // r15
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr v5; // r14
  std::set<unsigned int>::iterator v6; // rax
  bool result; // al
  std::vector<unsigned int> *__result; // [rsp+8h] [rbp-A8h]
  std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr __last2; // [rsp+10h] [rbp-A0h]
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 22 remain_reward_vec:2992";
  *(_QWORD *)(v1 + 16) = BaseActivity::isRemainReward;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 32));
  __result = std::back_inserter<std::vector<unsigned int>>((std::vector<unsigned int> *)(v1 + 32)).container;
  __last2 = std::set<unsigned int>::cend(&this->taken_watcher_id_set_)._M_node;
  M_node = std::set<unsigned int>::cbegin(&this->taken_watcher_id_set_)._M_node;
  v5 = std::set<unsigned int>::cend(&this->finished_watcher_id_set_)._M_node;
  v6._M_node = std::set<unsigned int>::cbegin(&this->finished_watcher_id_set_)._M_node;
  std::set_difference<std::_Rb_tree_const_iterator<unsigned int>,std::_Rb_tree_const_iterator<unsigned int>,std::back_insert_iterator<std::vector<unsigned int>>>(
    v6,
    (std::_Rb_tree_const_iterator<unsigned int>)v5,
    (std::_Rb_tree_const_iterator<unsigned int>)M_node,
    (std::_Rb_tree_const_iterator<unsigned int>)__last2,
    (std::back_insert_iterator<std::vector<unsigned int> >)__result);
  LOBYTE(v5) = !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 32));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 32));
  result = (char)v5;
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
  return result;
};

// Line 3001: range 00000000137C75C2-00000000137C78FE
void __cdecl BaseActivity::fillCondIdListProto(
        const BaseActivity *const this,
        const std::set<unsigned int> *cond_set,
        google::protobuf::RepeatedField<unsigned int> *repeated_list)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v6; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-B0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-A8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const data::NewActivityCondExcelConfig *config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-80h] BYREF
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 cond_id:3002";
  *(_QWORD *)(v3 + 16) = BaseActivity::fillCondIdListProto;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = cond_set;
  __for_begin._M_node = std::set<unsigned int>::begin(cond_set)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(cond_set)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v3 + 32) = *v6;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                   &v7->design_config.txt_config_mgr.new_activity_config_mgr,
                   *(_DWORD *)(v3 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( config_ptr )
    {
      if ( *(char *)(((unsigned __int64)&config_ptr->is_notify_client >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&config_ptr->is_notify_client);
      if ( config_ptr->is_notify_client )
        google::protobuf::RepeatedField<unsigned int>::Add(repeated_list, (const unsigned int *)(v3 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "fillCondIdListProto",
        3007);
      v8 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v17,
             (const char (*)[46])"findNewActivityCondExcelConfig fail, cond_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3020: range 00000000137C7900-00000000137C7DAB
void __cdecl BaseActivity::notifyCondIdLists(const BaseActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  google::protobuf::RepeatedField<unsigned int> *v4; // rdx
  google::protobuf::RepeatedField<unsigned int> *v5; // rdx
  google::protobuf::uint32 *v6; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-110h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-108h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-100h]
  const std::set<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+38h] [rbp-F8h]
  const std::pair<unsigned int,unsigned int> *point_pair; // [rsp+40h] [rbp-F0h]
  proto::Uint32Pair *notify_pair; // [rsp+48h] [rbp-E8h]
  char v13[224]; // [rsp+50h] [rbp-E0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(192LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 128 11 notify:3021";
  *(_QWORD *)(v1 + 16) = BaseActivity::notifyCondIdLists;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450900) = -202116109;
  proto::ActivityCondStateChangeNotify::ActivityCondStateChangeNotify((proto::ActivityCondStateChangeNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityCondStateChangeNotify::set_schedule_id(
    (proto::ActivityCondStateChangeNotify *const)(v1 + 32),
    this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityCondStateChangeNotify::set_activity_id(
    (proto::ActivityCondStateChangeNotify *const)(v1 + 32),
    this->activity_id_);
  v4 = proto::ActivityCondStateChangeNotify::mutable_meet_cond_list((proto::ActivityCondStateChangeNotify *const)(v1 + 32));
  BaseActivity::fillCondIdListProto(this, &this->meet_cond_set_, v4);
  v5 = proto::ActivityCondStateChangeNotify::mutable_expire_cond_list((proto::ActivityCondStateChangeNotify *const)(v1 + 32));
  BaseActivity::fillCondIdListProto(this, &this->expired_cond_set_, v5);
  __for_range = &this->activated_activity_sale_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->activated_activity_sale_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->activated_activity_sale_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ActivityCondStateChangeNotify::add_activated_sale_id_list(
      (proto::ActivityCondStateChangeNotify *const)(v1 + 32),
      *v6);
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->disable_transfer_point_interaction_set_;
  __for_begin._M_node = std::set<std::pair<unsigned int,unsigned int>>::begin(&this->disable_transfer_point_interaction_set_)._M_node;
  __for_end._M_node = std::set<std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >::_Self *)&__for_end) )
  {
    point_pair = std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)&__for_begin);
    notify_pair = proto::ActivityCondStateChangeNotify::add_disable_transfer_point_interaction_list((proto::ActivityCondStateChangeNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)point_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)point_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)point_pair >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Uint32Pair::set_key(notify_pair, point_pair->first);
    if ( *(_BYTE *)(((unsigned __int64)&point_pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)point_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&point_pair->second >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::Uint32Pair::set_value(notify_pair, point_pair->second);
    std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::ActivityCondStateChangeNotify::~ActivityCondStateChangeNotify((proto::ActivityCondStateChangeNotify *const)(v1 + 32));
  if ( v13 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3040: range 00000000137C7DAC-00000000137C802D
void __cdecl BaseActivity::logActivityStart(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 Now; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v13[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 15 begin_time:3041";
  *(_QWORD *)(v1 + 16) = BaseActivity::logActivityStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 32) = NewActivityExcelConfigMgr::getScheduleBeginTime(p_new_activity_config_mgr, this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/activity/base_activity.cpp",
    "logActivityStart",
    3043);
  BaseActivity::toString[abi:cxx11](&val, this);
  v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v11, &val);
  v6 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v5, (const char (*)[14])" start, now: ");
  Now = common::tools::TimeUtils::getNow();
  v7 = common::milog::MiLogStream::operator<<<long,(long *)0>(v6, &Now);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" begin_time: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3048: range 00000000137C802E-00000000137C82AF
void __cdecl BaseActivity::logActivitySettle(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 Now; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-B0h] BYREF
  std::string val; // [rsp+50h] [rbp-90h] BYREF
  char v13[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 13 end_time:3049";
  *(_QWORD *)(v1 + 16) = BaseActivity::logActivitySettle;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v1 + 32) = NewActivityExcelConfigMgr::getScheduleBeginTime(p_new_activity_config_mgr, this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/activity/base_activity.cpp",
    "logActivitySettle",
    3051);
  BaseActivity::toString[abi:cxx11](&val, this);
  v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v11, &val);
  v6 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v5, (const char (*)[15])" settle, now: ");
  Now = common::tools::TimeUtils::getNow();
  v7 = common::milog::MiLogStream::operator<<<long,(long *)0>(v6, &Now);
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" end_time: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 32));
  std::string::~string(&val);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3055: range 00000000137C82B0-00000000137C8742
int32_t __cdecl BaseActivity::findActivityDrops(
        BaseActivity *const this,
        std::vector<std::pair<unsigned int,data::ItemLimitType>> *drop_id_type_vec,
        std::vector<std::pair<unsigned int,unsigned int>> *activity_drop_subject_vec,
        uint32_t level)
{
  std::map<unsigned int,unsigned int> *v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned __int64 v7; // rax
  data::ItemLimitType *v8; // r8
  int32_t result; // eax
  data::ItemLimitType DropItemLimitType; // [rsp+20h] [rbp-170h] BYREF
  data::NewActivityType activity_type; // [rsp+24h] [rbp-16Ch]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-168h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+30h] [rbp-160h] BYREF
  const NewActivityExcelConfigMgr *config_mgr; // [rsp+38h] [rbp-158h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-150h]
  std::pair<unsigned int const,unsigned int> *__in; // [rsp+48h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *drop_id; // [rsp+50h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *_; // [rsp+58h] [rbp-138h]
  std::shared_ptr<Config> v21; // [rsp+60h] [rbp-130h] BYREF
  std::set<unsigned int> p_activity_meet_cond_set; // [rsp+70h] [rbp-120h] BYREF
  std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>> >,std::equal_to<std::set<std::pair<unsigned int,unsigned int>> >,std::allocator<std::set<std::pair<unsigned int,unsigned int>> > > exclude_drop_subject_set; // [rsp+A0h] [rbp-F0h] BYREF
  char v24[176]; // [rsp+E0h] [rbp-B0h] BYREF

  v4 = (std::map<unsigned int,unsigned int> *)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = (std::map<unsigned int,unsigned int> *)v5;
  }
  *(_QWORD *)v4->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v4->_M_t._M_impl._M_header._M_color = "1 48 48 19 drop_count_map:3062";
  v4->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BaseActivity::findActivityDrops;
  v6 = (_DWORD *)((unsigned __int64)v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v7 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
    v7 = __asan_report_load8();
  if ( !(*(unsigned __int8 (__fastcall **)(BaseActivity *const))v7)(this) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.new_activity_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v21);
    memset(&exclude_drop_subject_set, 0, sizeof(exclude_drop_subject_set));
    std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::unordered_set(&exclude_drop_subject_set);
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
      &exclude_drop_subject_set,
      level);
    std::set<unsigned int>::~set(&p_activity_meet_cond_set);
    std::unordered_set<std::set<std::pair<unsigned int,unsigned int>>,boost::hash<std::set<std::pair<unsigned int,unsigned int>>>,std::equal_to<std::set<std::pair<unsigned int,unsigned int>>>,std::allocator<std::set<std::pair<unsigned int,unsigned int>>>>::~unordered_set(&exclude_drop_subject_set);
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
          v8);
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
      }
    }
    std::map<unsigned int,unsigned int>::~map(v4 + 1);
  }
  result = 0;
  if ( v24 == (char *)v4 )
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

// Line 3076: range 00000000137C8744-00000000137C8BCF
void __cdecl BaseActivity::onRefresh(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+20h] [rbp-B0h]
  std::set<unsigned int> *__for_range_0; // [rsp+28h] [rbp-A8h]
  const data::NewActivityCondExcelConfig *cond_config_ptr_0; // [rsp+30h] [rbp-A0h]
  const data::NewActivityCondExcelConfig *cond_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-80h] BYREF
  char v18[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 cond_id:3088";
  *(_QWORD *)(v1 + 16) = BaseActivity::onRefresh;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  __for_range = &this->meet_cond_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->meet_cond_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->meet_cond_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v4;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    cond_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                        &v5->design_config.txt_config_mgr.new_activity_config_mgr,
                        *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( cond_config_ptr )
    {
      BaseActivity::execActionVec(this, &cond_config_ptr->meet_exec, *(_DWORD *)(v1 + 32), 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "onRefresh",
        3082);
      v6 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v17,
             (const char (*)[45])"findActivityCondExcelConfig failed, cond_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  __for_range_0 = &this->expired_cond_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->expired_cond_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v7;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v16);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
    cond_config_ptr_0 = data::NewActivityExcelConfigMgrBase::findNewActivityCondExcelConfig(
                          &v8->design_config.txt_config_mgr.new_activity_config_mgr,
                          *(_DWORD *)(v1 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v16);
    if ( cond_config_ptr_0 )
    {
      BaseActivity::execActionVec(this, &cond_config_ptr_0->expire_exec, *(_DWORD *)(v1 + 32), 1);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "onRefresh",
        3093);
      v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
             &v17,
             (const char (*)[45])"findActivityCondExcelConfig failed, cond_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v17);
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3101: range 00000000137C8BD0-00000000137C8D68
std::set<unsigned int> *__fastcall BaseActivity::getActivatedActivitySaleSetByType(
        BaseActivity *const this,
        uint32_t sale_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::set<unsigned int> *result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 sale_type:3100 64 8 9 iter:3107";
  *(_QWORD *)(v2 + 16) = BaseActivity::getActivatedActivitySaleSetByType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = sale_type;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    result = 0LL;
  }
  else
  {
    *(std::map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 64) = std::map<unsigned int,std::set<unsigned int>>::find(
                                                                              &this->activated_activity_sale_map_,
                                                                              (const std::map<unsigned int,std::set<unsigned int>>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,std::set<unsigned int>>::end(&this->activated_activity_sale_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > >::_Self *)(v2 + 64),
           &__y) )
    {
      result = 0LL;
    }
    else
    {
      result = &std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::set<unsigned int> > > *const)(v2 + 64))->second;
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
  return result;
};

// Line 3117: range 00000000137C8D6A-00000000137C9168
uint32_t __cdecl BaseActivity::getDayIndexAfterStart(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  uint32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  time_t v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  uint32_t time_offset_sec; // [rsp+1Ch] [rbp-A4h]
  uint32_t start_time_day; // [rsp+20h] [rbp-A0h]
  uint32_t cur_time_day; // [rsp+24h] [rbp-9Ch]
  const data::NewActivityScheduleExcelConfig *schedule_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v18; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-80h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 now:3126";
  *(_QWORD *)(v1 + 16) = BaseActivity::getDayIndexAfterStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                          p_new_activity_config_mgr,
                          this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( schedule_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18);
    time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&v9->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    v10 = time_offset_sec;
    if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    start_time_day = common::tools::TimeUtils::getTimeDay(schedule_config_ptr->begin_time, v10);
    *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::getNow();
    cur_time_day = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v1 + 32), time_offset_sec);
    if ( cur_time_day < start_time_day )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "getDayIndexAfterStart",
        3132);
      v11 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v19,
              (const char (*)[34])"it should not happen, begin_time:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v11,
              &schedule_config_ptr->begin_time);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" now:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v1 + 32));
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0;
    }
    else
    {
      result = cur_time_day - start_time_day + 1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "getDayIndexAfterStart",
      3121);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v19,
           (const char (*)[51])"findActivityScheduleExcelConfig fail, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = 0;
  }
  if ( v20 == (char *)v1 )
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

// Line 3137: range 00000000137C916A-00000000137C9512
void __fastcall BaseActivity::addScoreWithLimit(BaseActivity *const this, uint32_t add_score)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t cur_score; // ecx
  uint32_t *v6; // rdx
  PlayerWatcherComp *WatcherComp; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int __b; // [rsp+18h] [rbp-88h] BYREF
  uint32_t actual_add_score; // [rsp+1Ch] [rbp-84h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-80h] BYREF
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 add_score:3136";
  *(_QWORD *)(v2 + 16) = BaseActivity::addScoreWithLimit;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_score;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  cur_score = this->cur_score_;
  if ( *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->score_limit_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( cur_score < this->score_limit_ )
  {
    __b = this->score_limit_ - this->cur_score_;
    v6 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 32), &__b);
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    actual_add_score = *v6;
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    this->cur_score_ += actual_add_score;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    PlayerWatcherComp::triggerActivityScoreChange(WatcherComp, this->activity_id_, actual_add_score);
    BaseActivity::notifyClientData(this, 0);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "addScoreWithLimit",
      3144);
    v8 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v15, (const char (*)[17])"after add_score:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])", cur_score:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->cur_score_);
    v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])", activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3149: range 00000000137C9514-00000000137C9D9E
__int64 __fastcall BaseActivity::takeScoreReward(BaseActivity *const this, uint32_t reward_config_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rdi
  uint32_t v6; // edx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  NewActivityExcelConfigMgr *v15; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v18; // rax
  PlayerItemComp *v19; // rax
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // edx
  uint32_t reward_id; // [rsp+1Ch] [rbp-104h]
  data::NewActivityType activity_type; // [rsp+20h] [rbp-100h]
  data::ItemLimitType limit_type; // [rsp+24h] [rbp-FCh]
  const std::pair<unsigned int,unsigned int> *score_config_pair_ptr; // [rsp+28h] [rbp-F8h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-F0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-E0h] BYREF
  char v29[192]; // [rsp+60h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 15 need_score:3161 64 4 8 ret:3171 80 4 21 reward_config_id:3148 96 24 18 action_reason:3170";
  *(_QWORD *)(v2 + 16) = BaseActivity::takeScoreReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  *(_DWORD *)(v2 + 80) = reward_config_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.new_activity_config_mgr;
  v6 = *(_DWORD *)(v2 + 80);
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    p_new_activity_config_mgr = (const NewActivityExcelConfigMgr *)&this->activity_id_;
    __asan_report_load4();
  }
  score_config_pair_ptr = NewActivityExcelConfigMgr::findActivityScoreRewardPair(
                            p_new_activity_config_mgr,
                            this->activity_id_,
                            v6);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  if ( score_config_pair_ptr )
  {
    if ( common::tools::MiscUtils::isContains<unsigned int>(
           &this->taken_score_reward_vec_,
           (const unsigned int *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "takeScoreReward",
        3158);
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              &v28,
              (const char (*)[36])"reward has taken, reward_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 629LL;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)score_config_pair_ptr >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)score_config_pair_ptr & 7) + 3) >= *(_BYTE *)(((unsigned __int64)score_config_pair_ptr >> 3)
                                                                                + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = score_config_pair_ptr->first;
      if ( *(_BYTE *)(((unsigned __int64)&score_config_pair_ptr->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)score_config_pair_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&score_config_pair_ptr->second >> 3)
                                                                            + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      reward_id = score_config_pair_ptr->second;
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_score_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( this->cur_score_ >= *(_DWORD *)(v2 + 48) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v27);
        v15 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.new_activity_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(v15, this->activity_id_);
        std::shared_ptr<Config>::~shared_ptr(&v27);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v27);
        v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
        limit_type = NewActivityExcelConfigMgr::getRewardItemLimitType(
                       &v16->design_config.txt_config_mgr.new_activity_config_mgr,
                       activity_type);
        std::shared_ptr<Config>::~shared_ptr(&v27);
        ActionReason::ActionReason((ActionReason *const)(v2 + 96), ACTION_REASON_ACTIVITY_SCORE, limit_type);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ItemComp = Player::getItemComp(this->player_);
        *(_DWORD *)(v2 + 64) = PlayerItemComp::checkGrantReward(ItemComp, reward_id, (const ActionReason *)(v2 + 96));
        if ( *(_DWORD *)(v2 + 64) )
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/base_activity.cpp",
            "takeScoreReward",
            3174);
          v18 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v28,
                  (const char (*)[30])"checkGrantReward failed, ret:");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v2 + 64));
          common::milog::MiLogStream::~MiLogStream(&v28);
          result = *(unsigned int *)(v2 + 64);
        }
        else
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v19 = Player::getItemComp(this->player_);
          PlayerItemComp::grantReward(v19, reward_id, (const ActionReason *)(v2 + 96), 0LL);
          std::vector<unsigned int>::push_back(
            &this->taken_score_reward_vec_,
            (const std::vector<unsigned int>::value_type *)(v2 + 80));
          BaseActivity::notifyClientData(this, 0);
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            ActivityComp = (PlayerActivityComp *)&this->schedule_id_;
            __asan_report_load4();
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            ActivityComp = (PlayerActivityComp *)&this->activity_id_;
            __asan_report_load4();
          }
          PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, reward_id);
          result = 0LL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "takeScoreReward",
          3165);
        v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                &v28,
                (const char (*)[43])"cur_score less than need_score, cur_score:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->cur_score_);
        v14 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v13, (const char (*)[14])", need_score:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v28);
        result = 0xFFFFFFFFLL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "takeScoreReward",
      3153);
    v7 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
           &v28,
           (const char (*)[54])"findActivityScoreRewardPair failed, reward_config_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 80));
    v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
  }
  if ( v29 == (char *)v2 )
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

// Line 3188: range 00000000137C9DA0-00000000137CA7DD
int32_t __cdecl BaseActivity::takeAllScoreRewards(BaseActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // r14
  common::milog::MiLogStream *v6; // rax
  int32_t v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int CurScore; // ecx
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v16; // rax
  PlayerItemComp *v17; // rax
  unsigned int *M_current; // r15
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v19; // rdx
  PlayerActivityComp *ActivityComp; // rdi
  uint32_t schedule_id; // edx
  int32_t result; // eax
  unsigned int *__last; // [rsp+10h] [rbp-1C0h]
  data::NewActivityType activity_type; // [rsp+2Ch] [rbp-1A4h]
  data::ItemLimitType limit_type; // [rsp+30h] [rbp-1A0h]
  uint32_t reward_id; // [rsp+34h] [rbp-19Ch]
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator __for_begin; // [rsp+38h] [rbp-198h] BYREF
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator __for_end; // [rsp+40h] [rbp-190h] BYREF
  const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+48h] [rbp-188h]
  std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-180h]
  const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > *v32; // [rsp+58h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *id; // [rsp+60h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *pair; // [rsp+68h] [rbp-168h]
  std::shared_ptr<Config> v35; // [rsp+70h] [rbp-160h] BYREF
  common::milog::MiLogStream v36; // [rsp+80h] [rbp-150h] BYREF
  char v37[304]; // [rsp+A0h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 8 ret:3216 64 24 15 reward_vec:3194 128 24 22 reward_config_vec:3195 192 24 18 action_reason:3215";
  *(_QWORD *)(v1 + 16) = BaseActivity::takeAllScoreRewards;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -218103808;
  v3[536862727] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v35);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
  v5 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>> const,unsigned int>(
          &v4->design_config.txt_config_mgr.new_activity_config_mgr.activity_score_reward_map,
          &this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v35);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "takeAllScoreRewards",
      3191);
    v6 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v36,
           (const char (*)[42])"activity has no score_rewrd, activity_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v7 = -1;
  }
  else
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    __for_range = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>>::at(
                    &v8->design_config.txt_config_mgr.new_activity_config_mgr.activity_score_reward_map,
                    &this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    __for_begin._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
              &__for_begin,
              &__for_end) )
    {
      v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*(&__for_begin);
      id = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v32);
      pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v32);
      if ( !common::tools::MiscUtils::isContains<unsigned int>(&this->taken_score_reward_vec_, id) )
      {
        CurScore = BaseActivity::getCurScore(this);
        if ( *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pair >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( CurScore >= pair->first )
        {
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 128), id);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 64), &pair->second);
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++(&__for_begin);
    }
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "takeAllScoreRewards",
        3210);
      v10 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v36,
              (const char (*)[43])"player can not take any reward, cur score:");
      *(_DWORD *)(v1 + 48) = BaseActivity::getCurScore(this);
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v11,
              (const char (*)[27])", taken_score_reward_vec_:");
      common::milog::MiLogStream::operator<<<unsigned int>(v12, &this->taken_score_reward_vec_);
      common::milog::MiLogStream::~MiLogStream(&v36);
      v7 = 0;
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35)->design_config.txt_config_mgr.new_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      activity_type = NewActivityExcelConfigMgr::getActivitiyTypeByActivityId(
                        p_new_activity_config_mgr,
                        this->activity_id_);
      std::shared_ptr<Config>::~shared_ptr(&v35);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v35);
      v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
      limit_type = NewActivityExcelConfigMgr::getRewardItemLimitType(
                     &v14->design_config.txt_config_mgr.new_activity_config_mgr,
                     activity_type);
      std::shared_ptr<Config>::~shared_ptr(&v35);
      ActionReason::ActionReason((ActionReason *const)(v1 + 192), ACTION_REASON_ACTIVITY_SCORE, limit_type);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      ItemComp = Player::getItemComp(this->player_);
      *(_DWORD *)(v1 + 48) = PlayerItemComp::checkGrantRewards(
                               ItemComp,
                               (const std::vector<unsigned int> *)(v1 + 64),
                               (const ActionReason *)(v1 + 192));
      if ( *(_DWORD *)(v1 + 48) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "takeAllScoreRewards",
          3219);
        v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                &v36,
                (const char (*)[31])"checkGrantRewards failed, ret:");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v1 + 48));
        common::milog::MiLogStream::~MiLogStream(&v36);
        v7 = *(_DWORD *)(v1 + 48);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v17 = Player::getItemComp(this->player_);
        PlayerItemComp::grantRewards(
          v17,
          (const std::vector<unsigned int> *)(v1 + 64),
          (const ActionReason *)(v1 + 192),
          0LL);
        __last = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v1 + 128))._M_current;
        M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 128))._M_current;
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false>::__node_type *)std::vector<unsigned int>::end(&this->taken_score_reward_vec_)._M_current;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_end,
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin);
        std::vector<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,void>(
          &this->taken_score_reward_vec_,
          (std::vector<unsigned int>::const_iterator)__for_end._M_cur,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
          (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)__last);
        BaseActivity::notifyClientData(this, 0);
        __for_range_0 = (std::vector<unsigned int> *)(v1 + 64);
        __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
        __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
        {
          v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          reward_id = *v19;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          ActivityComp = Player::getActivityComp(this->player_);
          if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3)
                                                                + 0x7FFF8000) )
          {
            ActivityComp = (PlayerActivityComp *)&this->schedule_id_;
            __asan_report_load4();
          }
          schedule_id = this->schedule_id_;
          if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            ActivityComp = (PlayerActivityComp *)&this->activity_id_;
            __asan_report_load4();
          }
          PlayerActivityComp::logGetActivityReward(ActivityComp, this->activity_id_, schedule_id, reward_id);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        }
        v7 = 0;
      }
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  }
  result = v7;
  if ( v37 == (char *)v1 )
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
  return result;
};

// Line 3236: range 00000000137CA7DE-00000000137CA800
void __cdecl BaseActivity::onGameHourChange(BaseActivity *const this, uint32_t hour)
{
  BaseActivity::refreshGameTimeGroups(this, hour);
};

// Line 3241: range 00000000137CA802-00000000137CB451
void __fastcall BaseActivity::refreshGameTimeGroups(BaseActivity *const this, uint32_t hour)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  common::milog::MiLogStream *v10; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool isActivityGameTimeGroupValid; // r14
  Scene *v14; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v16; // rdx
  Scene *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  Scene *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v23; // rdx
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  unsigned __int64 v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rcx
  Scene *v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-158h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-150h]
  std::vector<unsigned int> *__for_range_1; // [rsp+38h] [rbp-148h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+40h] [rbp-140h] BYREF
  common::milog::MiLogStream v48; // [rsp+50h] [rbp-130h] BYREF
  char v49[272]; // [rsp+70h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 13 group_id:3295 48 4 9 hour:3240 64 16 14 scene_ptr:3247 96 24 29 to_register_group_id_v"
                        "ec:3253 160 24 31 to_unregister_group_id_vec:3254";
  *(_QWORD *)(v2 + 16) = BaseActivity::refreshGameTimeGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -234881024;
  v4[536862724] = -218959118;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
  *(_DWORD *)(v2 + 48) = hour;
  if ( !std::set<unsigned int>::empty(&this->gametime_dynamic_group_set_) )
  {
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "refreshGameTimeGroups",
      3246);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v48,
           (const char (*)[29])"refreshGameTimeGroups, hour:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    v7 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v6, (const char (*)[15])", activity_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->activity_id_);
    v9 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v8, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v48);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v2 + 64), &__r);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "refreshGameTimeGroups",
        3250);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v48,
              (const char (*)[27])"getMainWorldScene failed, ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v10, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v48);
    }
    else
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 96));
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 160));
      __for_range = &this->gametime_dynamic_group_set_;
      __for_begin._M_node = std::set<unsigned int>::begin(&this->gametime_dynamic_group_set_)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(&this->gametime_dynamic_group_set_)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 32) = *v11;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&__r);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__r);
        isActivityGameTimeGroupValid = NewActivityExcelConfigMgr::isActivityGameTimeGroupValid(
                                         &v12->design_config.txt_config_mgr.new_activity_config_mgr,
                                         *(_DWORD *)(v2 + 32),
                                         *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
        if ( isActivityGameTimeGroupValid )
        {
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v14);
          if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          v16 = *(_QWORD *)BlockGroupComp + 112LL;
          if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
            BlockGroupComp = __asan_report_load8();
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v16)(
                 BlockGroupComp,
                 *(unsigned int *)(v2 + 32)) != 1 )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v2 + 96),
              (const std::vector<unsigned int>::value_type *)(v2 + 32));
        }
        else
        {
          v17 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v18 = (unsigned __int64)Scene::getBlockGroupComp(v17);
          if ( *(_BYTE *)((v18 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8();
          v19 = *(_QWORD *)v18 + 112LL;
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v18 = __asan_report_load8();
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, _QWORD))v19)(v18, *(unsigned int *)(v2 + 32)) )
            std::vector<unsigned int>::push_back(
              (std::vector<unsigned int> *const)(v2 + 160),
              (const std::vector<unsigned int>::value_type *)(v2 + 32));
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 160)) )
      {
        v20 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v21 = (unsigned __int64)Scene::getBlockGroupComp(v20);
        if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        v22 = *(_QWORD *)v21 + 104LL;
        if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
          v21 = __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v22)(v21, v2 + 160, 1LL);
        __for_range_0 = (std::vector<unsigned int> *)(v2 + 160);
        __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 160))._M_current;
        __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
        {
          v23 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v2 + 32) = *v23;
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/base_activity.cpp",
            "refreshGameTimeGroups",
            3279);
          v24 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v48,
                  (const char (*)[39])"unregister gametime group activity_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->activity_id_);
          v26 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v25, (const char (*)[8])", hour:");
          v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v26,
                  (const unsigned int *)(v2 + 48));
          v28 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v27, (const char (*)[12])", group_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v48);
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
        }
      }
      if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 96)) )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v29 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
        if ( *(_BYTE *)((v29 >> 3) + 0x7FFF8000) )
          v29 = __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(BaseActivity *const))v29)(this) )
        {
          common::milog::MiLogStream::create(
            &v48,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/base_activity.cpp",
            "refreshGameTimeGroups",
            3289);
          v30 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(&v48, (const char (*)[62])off_25060E20);
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &this->activity_id_);
          v32 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v31, (const char (*)[10])", player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v32, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v48);
        }
        else
        {
          v33 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v34 = (unsigned __int64)Scene::getBlockGroupComp(v33);
          if ( *(_BYTE *)((v34 >> 3) + 0x7FFF8000) )
            v34 = __asan_report_load8();
          v35 = *(_QWORD *)v34 + 96LL;
          if ( *(_BYTE *)((v35 >> 3) + 0x7FFF8000) )
            v34 = __asan_report_load8();
          (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, _QWORD))v35)(v34, v2 + 96, 0LL, 0LL);
          __for_range_1 = (std::vector<unsigned int> *)(v2 + 96);
          __for_begin._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 96))._M_current;
          __for_end._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<unsigned int>::end(__for_range_1)._M_current;
          while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
          {
            v36 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            *(_DWORD *)(v2 + 32) = *v36;
            common::milog::MiLogStream::create(
              &v48,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/base_activity.cpp",
              "refreshGameTimeGroups",
              3297);
            v37 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v48,
                    (const char (*)[37])"register gametime group activity_id:");
            v38 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, &this->activity_id_);
            v39 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v38, (const char (*)[8])", hour:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v39,
                    (const unsigned int *)(v2 + 48));
            v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v40,
                    (const char (*)[12])", group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream(&v48);
            __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
          }
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 160));
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
  if ( v49 == (char *)v2 )
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

// Line 3305: range 00000000137CB452-00000000137CB995
void __cdecl BaseActivity::registerGameTimeGroups(
        BaseActivity *const this,
        const std::vector<unsigned int> *group_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  PlayerBasicComp *BasicComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rcx
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  bool is_changed; // [rsp+13h] [rbp-9Dh]
  uint32_t hour; // [rsp+14h] [rbp-9Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-80h] BYREF
  char v28[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 group_id:3314";
  *(_QWORD *)(v2 + 16) = BaseActivity::registerGameTimeGroups;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
    v5 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(BaseActivity *const))v5)(this) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "registerGameTimeGroups",
      3309);
    v6 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(&v27, (const char (*)[62])off_25060E20);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
    v8 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v7, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    hour = PlayerBasicComp::getGameHour(BasicComp);
    is_changed = 0;
    __for_range = group_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(group_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(group_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 32) = *v10;
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "registerGameTimeGroups",
        3316);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(&v27, (const char (*)[38])off_25060F40);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])", activity_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &this->activity_id_);
      v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])", player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v15, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v16 = std::set<unsigned int>::insert(
              &this->gametime_dynamic_group_set_,
              (const std::set<unsigned int>::value_type *)(v2 + 32));
      if ( v16.second )
      {
        is_changed = 1;
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "registerGameTimeGroups",
          3320);
        v17 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v27,
                (const char (*)[34])"registerGameTimeGroups. group_id:");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v2 + 32));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])", activity_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &this->activity_id_);
        v21 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v20, (const char (*)[10])", player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v21, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v27);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( is_changed )
      BaseActivity::refreshGameTimeGroups(this, hour);
  }
  if ( v28 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3330: range 00000000137CB996-00000000137CBE5D
void __cdecl BaseActivity::unregisterGameTimeGroups(
        BaseActivity *const this,
        const std::vector<unsigned int> *group_id_vec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // rcx
  Scene *v12; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v14; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+30h] [rbp-C0h] BYREF
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
  *(_QWORD *)(v2 + 8) = "2 48 4 13 group_id:3331 64 16 14 scene_ptr:3338";
  *(_QWORD *)(v2 + 16) = BaseActivity::unregisterGameTimeGroups;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  __for_range = group_id_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(group_id_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(group_id_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v5;
    std::set<unsigned int>::erase(
      &this->gametime_dynamic_group_set_,
      (const std::set<unsigned int>::key_type *)(v2 + 48));
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "unregisterGameTimeGroups",
      3334);
    v6 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(&v19, (const char (*)[40])off_25061080);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])", activity_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->activity_id_);
    v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])", player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v19);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  if ( !std::vector<unsigned int>::empty(group_id_vec) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)&__r);
    std::shared_ptr<Scene>::shared_ptr<PlayerWorldScene,void>((std::shared_ptr<Scene> *const)(v2 + 64), &__r);
    std::shared_ptr<PlayerWorldScene>::~shared_ptr(&__r);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "unregisterGameTimeGroups",
        3341);
      v11 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v19,
              (const char (*)[27])"getMainWorldScene failed, ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v11, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v19);
    }
    else
    {
      v12 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v12);
      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v14 = *(_QWORD *)BlockGroupComp + 104LL;
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, const std::vector<unsigned int> *, __int64))v14)(
        BlockGroupComp,
        group_id_vec,
        1LL);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
  }
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
};

// Line 3349: range 00000000137CBE5E-00000000137CC2A6
void __cdecl BaseActivity::clearAllGameTimeGroups(BaseActivity *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::_Rb_tree_const_iterator<unsigned int>::reference v4; // rdx
  common::milog::MiLogStream *v5; // rcx
  Scene *v6; // rax
  unsigned __int64 BlockGroupComp; // rax
  unsigned __int64 v8; // rdx
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-118h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-110h] BYREF
  std::set<unsigned int> *__for_range; // [rsp+28h] [rbp-108h]
  std::shared_ptr<PlayerWorldScene> __r; // [rsp+30h] [rbp-100h] BYREF
  common::milog::MiLogStream v13; // [rsp+40h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+60h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 4 13 group_id:3351 64 16 14 scene_ptr:3358 96 24 17 group_id_vec:3350";
  *(_QWORD *)(v1 + 16) = BaseActivity::clearAllGameTimeGroups;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
  __for_range = &this->gametime_dynamic_group_set_;
  __for_begin._M_node = std::set<unsigned int>::begin(&this->gametime_dynamic_group_set_)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(&this->gametime_dynamic_group_set_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v4 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 48) = *v4;
    std::vector<unsigned int>::push_back(
      (std::vector<unsigned int> *const)(v1 + 96),
      (const std::vector<unsigned int>::value_type *)(v1 + 48));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  std::set<unsigned int>::clear(&this->gametime_dynamic_group_set_);
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96)) )
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
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "clearAllGameTimeGroups",
        3361);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v13,
             (const char (*)[27])"getMainWorldScene failed, ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      operator<<(v5, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v13);
    }
    else
    {
      v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BlockGroupComp = (unsigned __int64)Scene::getBlockGroupComp(v6);
      if ( *(_BYTE *)((BlockGroupComp >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      v8 = *(_QWORD *)BlockGroupComp + 104LL;
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        BlockGroupComp = __asan_report_load8();
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))v8)(BlockGroupComp, v1 + 96, 1LL);
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
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

// Line 3369: range 00000000137CC2A8-00000000137CC75F
void __cdecl BaseActivity::clearLastScheduleExhibitionData(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  ExhibitionExcelConfigMgr *p_exhibition_config_mgr; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  PlayerExhibitionComp *ExhibitionComp; // rax
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const std::set<unsigned int> *series_id_set_ptr; // [rsp+28h] [rbp-A8h]
  const std::set<unsigned int> *__for_range; // [rsp+30h] [rbp-A0h]
  const data::ExhibitionSeriesExcelConfig *series_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v20; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v21; // [rsp+50h] [rbp-80h] BYREF
  char v22[96]; // [rsp+70h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 series_id:3375";
  *(_QWORD *)(v1 + 16) = BaseActivity::clearLastScheduleExhibitionData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_exhibition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.exhibition_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  series_id_set_ptr = ExhibitionExcelConfigMgr::getSeriesIdSetByActivityId(p_exhibition_config_mgr, this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v20);
  if ( series_id_set_ptr )
  {
    __for_range = series_id_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(series_id_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(series_id_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v5;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
      series_config_ptr = data::ExhibitionExcelConfigMgrBase::findExhibitionSeriesExcelConfig(
                            &v6->design_config.txt_config_mgr.exhibition_config_mgr,
                            *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( series_config_ptr )
      {
        if ( *(char *)(((unsigned __int64)&series_config_ptr->is_reset_when_start >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&series_config_ptr->is_reset_when_start);
        if ( !series_config_ptr->is_reset_when_start )
          goto LABEL_20;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        ExhibitionComp = Player::getExhibitionComp(this->player_);
        if ( PlayerExhibitionComp::clearSeriesExhibitionData(ExhibitionComp, *(_DWORD *)(v1 + 32)) )
          v11 = 1;
        else
LABEL_20:
          v11 = 0;
        if ( v11 )
        {
          common::milog::MiLogStream::create(
            &v21,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/base_activity.cpp",
            "clearLastScheduleExhibitionData",
            3386);
          v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v21,
                  (const char (*)[45])"clearSeriesExhibitionData failed, series_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v1 + 32));
          v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v13,
                  (const char (*)[15])", activity_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->activity_id_);
          common::milog::MiLogStream::~MiLogStream(&v21);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/base_activity.cpp",
          "clearLastScheduleExhibitionData",
          3380);
        v7 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               &v21,
               (const char (*)[51])"findExhibitionSeriesExcelConfig failed, series_id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v8, (const char (*)[15])", activity_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( v22 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3392: range 00000000137CC760-00000000137CC885
int32_t __cdecl BaseActivity::setBannerCleared(BaseActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_banner_cleared_);
  }
  if ( this->is_banner_cleared_ )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "setBannerCleared",
      3395);
    v1 = common::milog::MiLogStream::operator<<<BaseActivity,(BaseActivity*)0>(&v3, this);
    common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v1, (const char (*)[17])" alread cleared.");
    common::milog::MiLogStream::~MiLogStream(&v3);
    return 10300;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_banner_cleared_);
    }
    this->is_banner_cleared_ = 1;
    return 0;
  }
};

// Line 3405: range 00000000137CC886-00000000137CCCD9
void __cdecl BaseActivity::updateQuickOpenUnfinishedQuestVec(BaseActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  unsigned __int64 v5; // rax
  char v6; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rdx
  uint32_t QuestComp; // eax
  std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const data::NewActivityScheduleExcelConfig *activity_schedule_config_ptr; // [rsp+20h] [rbp-90h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  char v15[128]; // [rsp+30h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 13 quest_id:3423 64 16 21 parent_quest_ptr:3425";
  *(_QWORD *)(v1 + 16) = BaseActivity::updateQuickOpenUnfinishedQuestVec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  activity_schedule_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                   p_new_activity_config_mgr,
                                   this->schedule_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( activity_schedule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&activity_schedule_config_ptr->allow_quick_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)activity_schedule_config_ptr + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&activity_schedule_config_ptr->allow_quick_open >> 3)
                                                                                + 0x7FFF8000) )
    {
      __asan_report_load1(&activity_schedule_config_ptr->allow_quick_open);
    }
    if ( activity_schedule_config_ptr->allow_quick_open )
    {
      if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
        goto LABEL_17;
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8();
      if ( (*(unsigned __int8 (__fastcall **)(BaseActivity *const))v5)(this) )
LABEL_17:
        v6 = 1;
      else
        v6 = 0;
      if ( !v6 )
      {
        std::vector<unsigned int>::clear(&this->quick_open_unfinished_quest_vec_);
        __for_range = &activity_schedule_config_ptr->quick_open_pre_quest_list;
        __for_begin._M_current = std::vector<unsigned int>::begin(&activity_schedule_config_ptr->quick_open_pre_quest_list)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&activity_schedule_config_ptr->quick_open_pre_quest_list)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v1 + 48) = *v7;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          QuestComp = (unsigned int)Player::getQuestComp(this->player_);
          PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v1 + 64), QuestComp);
          if ( std::operator==<ParentQuest>((const std::shared_ptr<ParentQuest> *)(v1 + 64), 0LL)
            || (v9 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64)),
                ParentQuest::getParentQuestState(v9) != PARENT_QUEST_STATE_FINISHED) )
          {
            std::vector<unsigned int>::push_back(
              &this->quick_open_unfinished_quest_vec_,
              (const std::vector<unsigned int>::value_type *)(v1 + 48));
          }
          std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v1 + 64));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
    }
  }
  if ( v15 == (char *)v1 )
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

// Line 3435: range 00000000137CCCDA-00000000137CCE14
void __cdecl BaseActivity::tryRegisterPreQuestFinishObserver(BaseActivity *const this)
{
  std::weak_ptr<BaseActivity> *EventComp; // r14
  std::enable_shared_from_this<BaseActivity> v3; // [rsp+10h] [rbp-40h] BYREF
  std::weak_ptr<Observer> __r; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::vector<unsigned int>::empty(&this->quick_open_unfinished_quest_vec_)
    && std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->quick_open_finish_quest_observer_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<BaseActivity> *)Player::getEventComp(this->player_);
    std::enable_shared_from_this<BaseActivity>::weak_from_this(&v3);
    PlayerEventComp::registerObserver<BaseActivity,FinishParentQuestEvent>(
      (PlayerEventComp *const)&__r,
      EventComp,
      (void (*)(BaseActivity *, const FinishParentQuestEvent *))&v3);
    std::weak_ptr<Observer>::operator=(&this->quick_open_finish_quest_observer_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<BaseActivity>::~weak_ptr(&v3._M_weak_this);
  }
};

// Line 3445: range 00000000137CCE16-00000000137CD6F7
// local variable allocation has failed, the output may be wrong!
int32_t __cdecl BaseActivity::quickOpen(BaseActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned __int64 v4; // rax
  char v5; // al
  int32_t v6; // r14d
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v18; // r14
  int32_t result; // eax
  std::string v20; // [rsp+0h] [rbp-F0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> v22; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-B0h] BYREF
  char v24[144]; // [rsp+60h] [rbp-90h] BYREF

  v20._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 18 contextHolder:3484 64 16 12 log_ptr:3485";
  *(_QWORD *)(v1 + 16) = BaseActivity::quickOpen;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( !BaseActivity::isOpening((const BaseActivity *const)v20._M_string_length, 0)
    || BaseActivity::isSettled((const BaseActivity *const)v20._M_string_length) )
  {
    goto LABEL_11;
  }
  if ( *(_BYTE *)((v20._M_string_length >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v4 = *(_QWORD *)v20._M_string_length + 136LL;
  if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
    v4 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(std::string::size_type))v4)(v20._M_string_length) )
LABEL_11:
    v5 = 1;
  else
    v5 = 0;
  if ( v5 )
  {
    v6 = 860;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((v20._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v20._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((v20._M_string_length + 36) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(&v20._anon_0._M_allocated_capacity + 1) = (std::string::size_type)data::NewActivityExcelConfigMgrBase::findNewActivityScheduleExcelConfig(
                                                                          p_new_activity_config_mgr,
                                                                          *(_DWORD *)(v20._M_string_length + 36));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
    if ( *(&v20._anon_0._M_allocated_capacity + 1) )
    {
      if ( *(_BYTE *)(((*(&v20._anon_0._M_allocated_capacity + 1) + 92) >> 3) + 0x7FFF8000) != 0
        && ((v20._anon_0._M_local_buf[8] + 92) & 7) >= *(_BYTE *)(((*(&v20._anon_0._M_allocated_capacity + 1) + 92) >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(*(&v20._anon_0._M_allocated_capacity + 1) + 92);
      }
      if ( *(_BYTE *)(*(&v20._anon_0._M_allocated_capacity + 1) + 92) != 1 )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/base_activity.cpp",
          "quickOpen",
          3459);
        v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(&v23, (const char (*)[35])off_25061440);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v20._M_string_length + 36));
        v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((v20._M_string_length + 24) >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HIDWORD(v20._anon_0._M_allocated_capacity) = Player::getUid(*(const Player *const *)(v20._M_string_length + 24));
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v11,
          (const unsigned int *)&v20._anon_0._M_allocated_capacity + 1);
        common::milog::MiLogStream::~MiLogStream(&v23);
        v6 = -1;
      }
      else
      {
        if ( *(char *)(((v20._M_string_length + 632) >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(v20._M_string_length + 632);
        if ( *(_BYTE *)(v20._M_string_length + 632) )
        {
          common::milog::MiLogStream::create(
            &v23,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/base_activity.cpp",
            "quickOpen",
            3464);
          v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  &v23,
                  (const char (*)[42])"activity already quick open, schedule_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v12,
            (const unsigned int *)(v20._M_string_length + 36));
          common::milog::MiLogStream::~MiLogStream(&v23);
          v6 = -1;
        }
        else
        {
          BaseActivity::updateQuickOpenUnfinishedQuestVec((BaseActivity *const)v20._M_string_length);
          if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v20._M_string_length + 640)) )
          {
            common::milog::MiLogStream::create(
              &v23,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/base_activity.cpp",
              "quickOpen",
              3472);
            v13 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    &v23,
                    (const char (*)[62])off_25061500);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v13,
              (const unsigned int *)(v20._M_string_length + 36));
            common::milog::MiLogStream::~MiLogStream(&v23);
            v6 = -1;
          }
          else
          {
            BaseActivity::tryRegisterPreQuestFinishObserver((BaseActivity *const)v20._M_string_length);
            if ( *(char *)(((v20._M_string_length + 632) >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(v20._M_string_length + 632);
            *(_BYTE *)(v20._M_string_length + 632) = 1;
            BaseActivity::updateAllConds((BaseActivity *const)v20._M_string_length);
            BaseActivity::notifyClientData((BaseActivity *const)v20._M_string_length, 0);
            if ( *(_BYTE *)(((v20._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            BasicComp = Player::getBasicComp(*(Player *const *)(v20._M_string_length + 24));
            PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v23, BasicComp);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE09u, v20);
            std::string::~string(&v23);
            common::tools::perf::make_shared<proto_log::PlayerLogBodyQuickOpenActivity>();
            v15 = std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( *(_BYTE *)(((v20._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((v20._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyQuickOpenActivity::set_activity_id(v15, *(_DWORD *)(v20._M_string_length + 32));
            v16 = std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            if ( *(_BYTE *)(((v20._M_string_length + 36) >> 3) + 0x7FFF8000) != 0
              && (char)(((LOBYTE(v20._M_string_length) + 36) & 7) + 3) >= *(_BYTE *)(((v20._M_string_length + 36) >> 3)
                                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            proto_log::PlayerLogBodyQuickOpenActivity::set_schedule_id(v16, *(_DWORD *)(v20._M_string_length + 36));
            v17 = std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            proto_log::PlayerLogBodyQuickOpenActivity::set_state(v17, 1u);
            if ( *(_BYTE *)(((v20._M_string_length + 24) >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v18 = *(Player **)(v20._M_string_length + 24);
            std::shared_ptr<google::protobuf::Message>::shared_ptr(&v22, 0LL);
            std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity,void>(
              &p_body_ptr,
              (const std::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity> *)(v1 + 64));
            Player::printStatLog(v18, &p_body_ptr, &v22, 0xEu);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
            std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v22);
            v6 = 0;
            std::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity> *const)(v1 + 64));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
          }
        }
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "quickOpen",
        3454);
      v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v23,
             (const char (*)[47])"activity_schedule_config is null, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v8,
        (const unsigned int *)(v20._M_string_length + 36));
      common::milog::MiLogStream::~MiLogStream(&v23);
      v6 = -1;
    }
  }
  result = v6;
  if ( v24 == (char *)v1 )
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

// Line 3494: range 00000000137CD6F8-00000000137CD77E
void __cdecl BaseActivity::tryUnregisterPreQuestFinishObserver(BaseActivity *const this)
{
  PlayerEventComp *EventComp; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->quick_open_finish_quest_observer_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->quick_open_finish_quest_observer_wtr_);
  }
  std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->quick_open_finish_quest_observer_wtr_);
};

// Line 3503: range 00000000137CD780-00000000137CDBF3
void __cdecl BaseActivity::onFinishQuestEvent(BaseActivity *const this, const FinishParentQuestEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int>::iterator v5; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *v10; // r14
  std::string v11; // [rsp+0h] [rbp-110h]
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > v12; // [rsp+20h] [rbp-F0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > __i; // [rsp+28h] [rbp-E8h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __first; // [rsp+30h] [rbp-E0h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > v15; // [rsp+38h] [rbp-D8h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-C0h] BYREF
  std::string v18; // [rsp+60h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+80h] [rbp-90h] BYREF

  *(&v11._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v11._anon_0._M_allocated_capacity = (std::string::size_type)event;
  v2 = (unsigned __int64)v19;
  v11._M_dataplus._M_p = v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 18 contextHolder:3513 64 16 12 log_ptr:3514";
  *(_QWORD *)(v2 + 16) = BaseActivity::onFinishQuestEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  __i._M_current = std::vector<unsigned int>::end(&this->quick_open_unfinished_quest_vec_)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &v15,
    &__i);
  v11._M_string_length = (std::string::size_type)std::vector<unsigned int>::end(&this->quick_open_unfinished_quest_vec_)._M_current;
  v5._M_current = std::vector<unsigned int>::begin(&this->quick_open_unfinished_quest_vec_)._M_current;
  v12._M_current = std::remove<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                     v5,
                     (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v11._M_string_length,
                     &event->parent_quest_id)._M_current;
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
    &__first,
    &v12);
  std::vector<unsigned int>::erase(&this->quick_open_unfinished_quest_vec_, __first, v15);
  if ( std::vector<unsigned int>::empty(&this->quick_open_unfinished_quest_vec_) )
  {
    BaseActivity::tryUnregisterPreQuestFinishObserver(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v18, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE09u, v11);
    std::string::~string(&v18);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyQuickOpenActivity>();
    v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((*(&v11._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((*(&v11._anon_0._M_allocated_capacity + 1) + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyQuickOpenActivity::set_activity_id(
      v7,
      *(_DWORD *)(*(&v11._anon_0._M_allocated_capacity + 1) + 32));
    v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((*(&v11._anon_0._M_allocated_capacity + 1) + 36) >> 3) + 0x7FFF8000) != 0
      && (char)(((v11._anon_0._M_local_buf[8] + 36) & 7) + 3) >= *(_BYTE *)(((*(&v11._anon_0._M_allocated_capacity + 1)
                                                                            + 36) >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyQuickOpenActivity::set_schedule_id(
      v8,
      *(_DWORD *)(*(&v11._anon_0._M_allocated_capacity + 1) + 36));
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyQuickOpenActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    proto_log::PlayerLogBodyQuickOpenActivity::set_state(v9, 2u);
    if ( *(_BYTE *)(((*(&v11._anon_0._M_allocated_capacity + 1) + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = *(Player **)(*(&v11._anon_0._M_allocated_capacity + 1) + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity> *)(v2 + 64));
    Player::printStatLog(v10, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyQuickOpenActivity> *const)(v2 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  }
  if ( v11._M_dataplus._M_p == (std::string::pointer)v2 )
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

// Line 3523: range 00000000137CDBF4-00000000137CDD9D
void __cdecl BaseActivity::sendHaveRecvGiftNotify(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 24 11 notify:3524";
  *(_QWORD *)(v1 + 16) = BaseActivity::sendHaveRecvGiftNotify;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218103808;
  v3[536862722] = -202116109;
  proto::ActivityHaveRecvGiftNotify::ActivityHaveRecvGiftNotify((proto::ActivityHaveRecvGiftNotify *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityHaveRecvGiftNotify::set_schedule_id(
    (proto::ActivityHaveRecvGiftNotify *const)(v1 + 32),
    this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
  proto::ActivityHaveRecvGiftNotify::~ActivityHaveRecvGiftNotify((proto::ActivityHaveRecvGiftNotify *const)(v1 + 32));
  if ( v4 == (char *)v1 )
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

// Line 3530: range 00000000137CDD9E-00000000137CDE78
std::set<unsigned int> *__cdecl BaseActivity::getRecvGiftUids(
        std::set<unsigned int> *retstr,
        const BaseActivity *const this)
{
  std::map<unsigned int,ActivityRecvGiftData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,ActivityRecvGiftData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  const std::map<unsigned int,ActivityRecvGiftData> *__for_range; // [rsp+20h] [rbp-30h]
  const std::pair<unsigned int const,ActivityRecvGiftData> *v6; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,ActivityRecvGiftData> >::type *uid; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,ActivityRecvGiftData> >::type *_; // [rsp+38h] [rbp-18h]

  std::set<unsigned int>::set(retstr);
  __for_range = &this->gift_data_.recv_gift_data_map;
  __for_begin._M_node = std::map<unsigned int,ActivityRecvGiftData>::begin(&this->gift_data_.recv_gift_data_map)._M_node;
  __for_end._M_node = std::map<unsigned int,ActivityRecvGiftData>::end(&this->gift_data_.recv_gift_data_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityRecvGiftData>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,ActivityRecvGiftData>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,ActivityRecvGiftData> >::type *)std::get<1ul,unsigned int const,ActivityRecvGiftData>(v6);
    std::set<unsigned int>::insert(retstr, uid);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,ActivityRecvGiftData>>::operator++(&__for_begin);
  }
  return retstr;
};

// Line 3540: range 00000000137CDE7A-00000000137CE3CE
void __fastcall BaseActivity::updateRecvFriendGiftOp(
        BaseActivity *const this,
        uint32_t friend_uid,
        const google::protobuf::Map<unsigned int,unsigned int> *give_gift_num_map)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r12
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  uint32_t v15; // r14d
  unsigned __int64 v16; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v17; // rax
  int v18; // esi
  unsigned int Uid; // [rsp+2Ch] [rbp-F4h] BYREF
  unsigned __int64 val; // [rsp+30h] [rbp-F0h] BYREF
  std::map<unsigned int,unsigned int> *recv_gift_data; // [rsp+38h] [rbp-E8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-E0h]
  const unsigned int *p_gift_id; // [rsp+48h] [rbp-D8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+50h] [rbp-D0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+70h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+90h] [rbp-90h] BYREF
  char v28[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 friend_uid:3539";
  *(_QWORD *)(v3 + 16) = BaseActivity::updateRecvFriendGiftOp;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = friend_uid;
  if ( std::map<unsigned int,ActivityRecvGiftData>::size(&this->gift_data_.recv_gift_data_map) > 0x18F
    && !common::tools::MiscUtils::isContains<std::map<unsigned int,ActivityRecvGiftData>,unsigned int>(
          &this->gift_data_.recv_gift_data_map,
          (const unsigned int *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "updateRecvFriendGiftOp",
      3544);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v27,
           (const char (*)[43])"[ACTIVITY] recv gift record reach max num:");
    val = std::map<unsigned int,ActivityRecvGiftData>::size(&this->gift_data_.recv_gift_data_map);
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])" friend_uid:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "updateRecvFriendGiftOp",
      3547);
    v12 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v27,
            (const char (*)[58])"[ACTIVITY] recv friend give gift offline msg, friend_uid:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v27);
    recv_gift_data = &std::map<unsigned int,ActivityRecvGiftData>::operator[](
                        &this->gift_data_.recv_gift_data_map,
                        (const std::map<unsigned int,ActivityRecvGiftData>::key_type *)(v3 + 32))->gift_num_map;
    v15 = *(_DWORD *)(v3 + 32);
    v16 = (unsigned __int64)std::map<unsigned int,ActivityRecvGiftData>::operator[](
                              &this->gift_data_.recv_gift_data_map,
                              (const std::map<unsigned int,ActivityRecvGiftData>::key_type *)(v3 + 32));
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v16 >> 3) + 0x7FFF8000) <= 3 )
      v16 = __asan_report_store4(v16);
    *(_DWORD *)v16 = v15;
    __for_range = give_gift_num_map;
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_gift_num_map);
    google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
    while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
    {
      p_gift_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)(p_gift_id + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_gift_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_gift_id + 1) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( p_gift_id[1] )
      {
        v17 = std::map<unsigned int,unsigned int>::operator[](recv_gift_data, p_gift_id);
        if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v18 = *v17;
        if ( *(_BYTE *)(((unsigned __int64)(p_gift_id + 1) >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)p_gift_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_gift_id + 1) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v17 = v18 + p_gift_id[1];
      }
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
    }
    BaseActivity::sendHaveRecvGiftNotify(this);
  }
  if ( v28 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3563: range 00000000137CE3D0-00000000137CE964
void __cdecl BaseActivity::onServerGetFriendBriefRspBase(
        BaseActivity *const this,
        const proto::ServerGetFriendBriefRsp *server_rsp)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const proto::ProfilePicture *v5; // rax
  google::protobuf::uint32 v6; // eax
  const proto::ProfilePicture *v7; // rax
  google::protobuf::uint32 v8; // eax
  const std::string *v9; // rax
  PlayerSocialComp *SocialComp; // rax
  const std::string *v11; // rax
  google::protobuf::Map<unsigned int,unsigned int> *v12; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData> >::pointer v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  google::protobuf::int32 v19; // eax
  unsigned int val; // [rsp+14h] [rbp-14Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_begin; // [rsp+18h] [rbp-148h] BYREF
  google::protobuf::RepeatedPtrField<proto::FriendBrief>::const_iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData> >::_Self __y; // [rsp+28h] [rbp-138h] BYREF
  const google::protobuf::RepeatedPtrField<proto::FriendBrief> *__for_range; // [rsp+30h] [rbp-130h]
  const proto::FriendBrief *friend_brief; // [rsp+38h] [rbp-128h]
  proto::ActivityRecvGiftData *record; // [rsp+40h] [rbp-120h]
  proto::ProfilePicture *profile_picture_proto; // [rsp+48h] [rbp-118h]
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-110h] BYREF
  char v29[240]; // [rsp+70h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 uid:3574 64 8 16 record_iter:3575 96 56 8 rsp:3564";
  *(_QWORD *)(v2 + 16) = BaseActivity::onServerGetFriendBriefRspBase;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862724] = -218103808;
  v4[536862725] = -202116109;
  proto::ActivityGetRecvGiftListRsp::ActivityGetRecvGiftListRsp((proto::ActivityGetRecvGiftListRsp *const)(v2 + 96));
  if ( !proto::ServerGetFriendBriefRsp::retcode(server_rsp) )
  {
    __for_range = proto::ServerGetFriendBriefRsp::friend_brief_list(server_rsp);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::FriendBrief>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      friend_brief = google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator*(&__for_begin);
      *(_DWORD *)(v2 + 48) = proto::FriendBrief::uid(friend_brief);
      *(std::map<unsigned int,ActivityRecvGiftData>::iterator *)(v2 + 64) = std::map<unsigned int,ActivityRecvGiftData>::find(
                                                                              &this->gift_data_.recv_gift_data_map,
                                                                              (const std::map<unsigned int,ActivityRecvGiftData>::key_type *)(v2 + 48));
      __y._M_node = std::map<unsigned int,ActivityRecvGiftData>::end(&this->gift_data_.recv_gift_data_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData> >::_Self *)(v2 + 64),
             &__y) )
      {
        record = proto::ActivityGetRecvGiftListRsp::add_recv_gift_list((proto::ActivityGetRecvGiftListRsp *const)(v2 + 96));
        proto::ActivityRecvGiftData::set_uid(record, *(_DWORD *)(v2 + 48));
        profile_picture_proto = proto::ActivityRecvGiftData::mutable_profile_picture(record);
        v5 = proto::FriendBrief::profile_picture(friend_brief);
        v6 = proto::ProfilePicture::avatar_id(v5);
        proto::ProfilePicture::set_avatar_id(profile_picture_proto, v6);
        v7 = proto::FriendBrief::profile_picture(friend_brief);
        v8 = proto::ProfilePicture::costume_id(v7);
        proto::ProfilePicture::set_costume_id(profile_picture_proto, v8);
        v9 = proto::FriendBrief::nickname[abi:cxx11](friend_brief);
        proto::ActivityRecvGiftData::set_nickname(record, v9);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        SocialComp = Player::getSocialComp(this->player_);
        v11 = PlayerSocialComp::findFriendRemarkName[abi:cxx11](SocialComp, *(_DWORD *)(v2 + 48));
        proto::ActivityRecvGiftData::set_remark_name(record, v11);
        v12 = proto::ActivityRecvGiftData::mutable_gift_num_map(record);
        v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ActivityRecvGiftData> > *const)(v2 + 64));
        common::tools::MiscUtils::toProtoMap<std::map<unsigned int,unsigned int>,google::protobuf::Map<unsigned int,unsigned int>>(
          &v13->second.gift_num_map,
          v12);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "onServerGetFriendBriefRspBase",
          3590);
        v14 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v28,
                (const char (*)[49])"[ACTIVITY] recv gift data not found, friend uid:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 48));
        v16 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v15, (const char (*)[13])"schedule_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->schedule_id_);
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
      }
      google::protobuf::internal::RepeatedPtrIterator<proto::FriendBrief const>::operator++(&__for_begin);
    }
  }
  v19 = proto::ServerGetFriendBriefRsp::retcode(server_rsp);
  proto::ActivityGetRecvGiftListRsp::set_retcode((proto::ActivityGetRecvGiftListRsp *const)(v2 + 96), v19);
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityGetRecvGiftListRsp::set_schedule_id(
    (proto::ActivityGetRecvGiftListRsp *const)(v2 + 96),
    this->schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 96));
  proto::ActivityGetRecvGiftListRsp::~ActivityGetRecvGiftListRsp((proto::ActivityGetRecvGiftListRsp *const)(v2 + 96));
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3602: range 00000000137CE966-00000000137CEE58
void __cdecl BaseActivity::printGiftLog(
        BaseActivity *const this,
        uint32_t friend_uid,
        uint32_t reason,
        const google::protobuf::Map<unsigned int,unsigned int> *give_gift_num_map)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *player; // r14
  std::string v14; // [rsp+0h] [rbp-150h]
  const google::protobuf::Map<unsigned int,unsigned int> *give_gift_num_mapa; // [rsp+8h] [rbp-148h]
  google::protobuf::uint32 reasona; // [rsp+10h] [rbp-140h]
  google::protobuf::uint32 friend_uida; // [rsp+14h] [rbp-13Ch]
  BaseActivity *thisa; // [rsp+18h] [rbp-138h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_gift_id; // [rsp+30h] [rbp-120h]
  proto_log::ActivityGiveGiftLog *gift_log; // [rsp+38h] [rbp-118h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+40h] [rbp-110h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+50h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+60h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+80h] [rbp-D0h] BYREF
  std::string v25; // [rsp+A0h] [rbp-B0h] BYREF
  char v26[144]; // [rsp+C0h] [rbp-90h] BYREF

  *(&v14._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v14._anon_0._M_allocated_capacity) = friend_uid;
  *(_DWORD *)v14._anon_0._M_local_buf = reason;
  v14._M_string_length = (std::string::size_type)give_gift_num_map;
  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 11 holder:3603 64 16 12 log_ptr:3604";
  *(_QWORD *)(v4 + 16) = BaseActivity::printGiftLog;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v25, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xE11u, v14);
  std::string::~string(&v25);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyActivityGiveAcceptGift>();
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyActivityGiveAcceptGift::set_friend_uid(v8, friend_uida);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  proto_log::PlayerLogBodyActivityGiveAcceptGift::set_reason(v9, reasona);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)thisa + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyActivityGiveAcceptGift::set_schedule_id(v10, thisa->schedule_id_);
  v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto_log::PlayerLogBodyActivityGiveAcceptGift::set_activity_id(v11, thisa->activity_id_);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, give_gift_num_mapa);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, give_gift_num_mapa);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_gift_id = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyActivityGiveAcceptGift,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    gift_log = proto_log::PlayerLogBodyActivityGiveAcceptGift::add_gift_list(v12);
    if ( *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_gift_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gift_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::ActivityGiveGiftLog::set_gift_id(gift_log, p_gift_id->first);
    if ( *(_BYTE *)(((unsigned __int64)&p_gift_id->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_gift_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_gift_id->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::ActivityGiveGiftLog::set_gift_num(gift_log, p_gift_id->second);
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = thisa->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyActivityGiveAcceptGift,void>(
    &p_body_ptr,
    (const std::shared_ptr<proto_log::PlayerLogBodyActivityGiveAcceptGift> *)(v4 + 64));
  Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyActivityGiveAcceptGift>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyActivityGiveAcceptGift> *const)(v4 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
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
};

// Line 3619: range 00000000137CEE5A-00000000137CF253
int32_t __cdecl BaseActivity::onAcceptAllGiveGiftReq(
        BaseActivity *const this,
        proto::ActivityAcceptAllGiveGiftRsp *rsp_0)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v7; // rdx
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rax
  const google::protobuf::Map<unsigned int,unsigned int> *v10; // rdx
  int32_t result; // eax
  uint32_t uid; // [rsp+1Ch] [rbp-F4h]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  proto::ActivityAcceptGiftResultInfo *accept_gift_result_info; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 ret:3629 64 24 12 uid_vec:3620";
  *(_QWORD *)(v2 + 16) = BaseActivity::onAcceptAllGiveGiftReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,ActivityRecvGiftData>>(
    (std::vector<unsigned int> *)(v2 + 64),
    &this->gift_data_.recv_gift_data_map);
  if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "onAcceptAllGiveGiftReq",
      3623);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v17,
           (const char (*)[42])"[ACTIVITY] uid_vec is empty, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v6 = -1;
  }
  else
  {
    __for_range = (std::vector<unsigned int> *)(v2 + 64);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 64))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v7 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      uid = *v7;
      accept_gift_result_info = proto::ActivityAcceptAllGiveGiftRsp::add_accept_gift_result_info_list(rsp_0);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v8 = (unsigned __int64)(this->_vptr_DescribalBase + 31);
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8();
      *(_DWORD *)(v2 + 48) = (*(__int64 (__fastcall **)(BaseActivity *const, _QWORD, proto::ActivityAcceptGiftResultInfo *))v8)(
                               this,
                               uid,
                               accept_gift_result_info);
      if ( *(_DWORD *)(v2 + 48) )
      {
        common::milog::MiLogStream::create(
          &v17,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "onAcceptAllGiveGiftReq",
          3632);
        v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v17,
               (const char (*)[40])"[ACTIVITY] accept recv item fail. ret: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v9, (const int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v17);
        v6 = *(_DWORD *)(v2 + 48);
        goto LABEL_18;
      }
      v10 = proto::ActivityAcceptGiftResultInfo::accept_gift_num_map(accept_gift_result_info);
      BaseActivity::printGiftLog(this, uid, 2u, v10);
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    v6 = 0;
  }
LABEL_18:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  result = v6;
  if ( v18 == (char *)v2 )
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

// Line 3641: range 00000000137CF254-00000000137CF2DD
void __cdecl BaseActivity::clearQuickOpenByGm(BaseActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_quick_open_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_quick_open_);
  this->is_quick_open_ = 0;
  BaseActivity::tryUnregisterPreQuestFinishObserver(this);
  std::vector<unsigned int>::clear(&this->quick_open_unfinished_quest_vec_);
  BaseActivity::updateAllConds(this);
  BaseActivity::notifyClientData(this, 0);
};

// Line 3650: range 00000000137CF2DE-00000000137CF6F4
void __cdecl BaseActivity::checkAndTryNotifyBanner(const BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  NewActivityExcelConfigMgr *v6; // rcx
  std::_Rb_tree_const_iterator<unsigned int>::reference v7; // rdx
  bool is_need; // [rsp+1Fh] [rbp-A1h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const std::set<unsigned int> *banner_meet_cond_set_ptr; // [rsp+30h] [rbp-90h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  const std::set<unsigned int> *banner_expire_cond_set_ptr; // [rsp+40h] [rbp-80h]
  const std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-70h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 12 cond_id:3669";
  *(_QWORD *)(v1 + 16) = BaseActivity::checkAndTryNotifyBanner;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  is_need = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  banner_meet_cond_set_ptr = NewActivityExcelConfigMgr::getBannerCondIdSetByActivityId(
                               p_new_activity_config_mgr,
                               this->activity_id_,
                               1);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( banner_meet_cond_set_ptr )
  {
    __for_range = banner_meet_cond_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(banner_meet_cond_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(banner_meet_cond_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v5;
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->meet_cond_set_,
             (const unsigned int *)(v1 + 32)) )
      {
        is_need = 1;
        break;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v6 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15)->design_config.txt_config_mgr.new_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  banner_expire_cond_set_ptr = NewActivityExcelConfigMgr::getBannerCondIdSetByActivityId(v6, this->activity_id_, 0);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  if ( banner_expire_cond_set_ptr )
  {
    __for_range_0 = banner_expire_cond_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(banner_expire_cond_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v7;
      if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
             &this->expired_cond_set_,
             (const unsigned int *)(v1 + 32)) )
      {
        is_need = 1;
        break;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
  }
  if ( is_need )
    BaseActivity::tryNotifyBanner(this);
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3686: range 00000000137CF6F6-00000000137CF9B8
void __cdecl BaseActivity::tryNotifyBanner(const BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  char v5[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 32 11 notify:3689";
  *(_QWORD *)(v1 + 16) = BaseActivity::tryNotifyBanner;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 31) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_banner_cleared_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_banner_cleared_);
  }
  if ( !this->is_banner_cleared_ )
  {
    proto::ActivityBannerNotify::ActivityBannerNotify((proto::ActivityBannerNotify *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ActivityBannerNotify::set_activity_id((proto::ActivityBannerNotify *const)(v1 + 32), this->activity_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ActivityBannerNotify::set_schedule_id((proto::ActivityBannerNotify *const)(v1 + 32), this->schedule_id_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 32));
    proto::ActivityBannerNotify::~ActivityBannerNotify((proto::ActivityBannerNotify *const)(v1 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "tryNotifyBanner",
      3695);
    v4 = common::milog::MiLogStream::operator<<<BaseActivity,(BaseActivity*)0>(
           (common::milog::MiLogStream *const)(v1 + 32),
           this);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v4, (const char (*)[25])" banner already cleared.");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
  }
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

// Line 3700: range 00000000137CF9BA-00000000137CFB4C
__int64 __fastcall BaseActivity::getQuestContentValue(const BaseActivity *const this, uint32_t key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __x; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 key:3699 64 8 9 iter:3701";
  *(_QWORD *)(v2 + 16) = BaseActivity::getQuestContentValue;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = key;
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->quest_content_map_,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  __x._M_node = std::map<unsigned int,unsigned int>::end(&this->quest_content_map_)._M_node;
  if ( std::operator==(
         &__x,
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64)) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v6 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v6->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v6->second;
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
  return result;
};

// Line 3711: range 00000000137CFB4E-00000000137CFDF7
void __fastcall BaseActivity::updateQuestContent(BaseActivity *const this, uint32_t key)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v6; // rax
  PlayerEventComp *EventComp; // r14
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-B0h] BYREF
  char v10[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 key:3710 64 16 14 event_ptr:3714";
  *(_QWORD *)(v2 + 16) = BaseActivity::updateQuestContent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = key;
  common::milog::MiLogStream::create(
    &v9,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/base_activity.cpp",
    "updateQuestContent",
    3712);
  v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
         &v9,
         (const char (*)[45])"QUEST_CONTENT_ACTIVITY_TRIGGER_UPDATE, key: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
  common::milog::MiLogStream::~MiLogStream(&v9);
  v6 = std::map<unsigned int,unsigned int>::operator[](
         &this->quest_content_map_,
         (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ++*v6;
  common::tools::perf::make_shared<ActivityTriggerUpdateQuestEvent,unsigned int &,unsigned int &>(
    (unsigned int *)(v2 + 64),
    &this->activity_id_,
    (unsigned int *)(v2 + 48),
    &this->activity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr<ActivityTriggerUpdateQuestEvent,void>(
    &p_event_ptr,
    (const std::shared_ptr<ActivityTriggerUpdateQuestEvent> *)(v2 + 64));
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<ActivityTriggerUpdateQuestEvent>::~shared_ptr((std::shared_ptr<ActivityTriggerUpdateQuestEvent> *const)(v2 + 64));
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
};

// Line 3720: range 00000000137CFDF8-00000000137D018E
__int64 __fastcall BaseActivity::tryRecordActivityPushTips(BaseActivity *const this, uint32_t activity_push_tips_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // rcx
  bool v8; // r14
  proto::ActivityPushTipsState *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  proto::ActivityPushTipsState v17; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-90h] BYREF
  char v20[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 26 activity_push_tips_id:3719";
  *(_QWORD *)(v2 + 16) = BaseActivity::tryRecordActivityPushTips;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = activity_push_tips_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    result = 860LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.new_activity_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v8 = !NewActivityExcelConfigMgr::isValidActivityPushtipsId(
            p_new_activity_config_mgr,
            *(_DWORD *)(v2 + 32),
            this->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( v8 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "tryRecordActivityPushTips",
        3727);
      v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              &v19,
              (const char (*)[32])"invalid activity push_tips_id: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v11, (const char (*)[16])", activity_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->activity_id_);
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v17 = ACTIVITY_PUSH_TIPS_STATE_START;
      v13 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int &,proto::ActivityPushTipsState>(
              &this->activity_push_tips_map_,
              (unsigned int *)(v2 + 32),
              &v17,
              (unsigned int *)&this->activity_push_tips_map_,
              v9);
      if ( !v13.second )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "tryRecordActivityPushTips",
          3732);
        v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v19,
                (const char (*)[41])"record duplicate activity push tips id: ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v15,
                (const char (*)[16])", activity id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v19);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        BaseActivity::notifyActivityPushTipsInfo(this);
        result = 0LL;
      }
    }
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
  return result;
};

// Line 3740: range 00000000137D0190-00000000137D0645
int32_t __cdecl BaseActivity::onActivityReadPushTipsReq(
        BaseActivity *const this,
        const google::protobuf::RepeatedField<unsigned int> *activity_push_tips_id_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v17; // rdx
  unsigned int *p_second; // rax
  bool is_notify; // [rsp+1Bh] [rbp-F5h]
  int32_t ret; // [rsp+1Ch] [rbp-F4h]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+20h] [rbp-F0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range; // [rsp+30h] [rbp-E0h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v26; // [rsp+60h] [rbp-B0h] BYREF
  char v27[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 26 activity_push_tips_id:3747 64 8 9 iter:3749";
  *(_QWORD *)(v2 + 16) = BaseActivity::onActivityReadPushTipsReq;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
  {
    result = 860;
  }
  else
  {
    ret = 0;
    is_notify = 0;
    __for_range = activity_push_tips_id_list;
    __for_begin = google::protobuf::RepeatedField<unsigned int>::begin(activity_push_tips_id_list);
    __for_end = google::protobuf::RepeatedField<unsigned int>::end(activity_push_tips_id_list);
    while ( __for_begin != __for_end )
    {
      if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v2 + 48) = *__for_begin;
      *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                &this->activity_push_tips_map_,
                                                                                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
      __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->activity_push_tips_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/base_activity.cpp",
          "onActivityReadPushTipsReq",
          3752);
        v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v25,
               (const char (*)[41])"trying to read unrecorded push tips id: ");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])", activity id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->activity_id_);
        common::milog::MiLogStream::~MiLogStream(&v25);
        ret = -1;
      }
      else
      {
        v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
        if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v10 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( v10->second == 1 )
        {
          v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
          p_second = &v17->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(p_second);
          }
          v17->second = 2;
          is_notify = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v26,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/base_activity.cpp",
            "onActivityReadPushTipsReq",
            3758);
          v11 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v26,
                  (const char (*)[52])"activity pushtips state is not right, push tips id:");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v11,
                  (const unsigned int *)(v2 + 48));
          v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v12, (const char (*)[10])", state: ");
          v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->second);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v15,
                  (const char (*)[16])", activity id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->activity_id_);
          common::milog::MiLogStream::~MiLogStream(&v26);
          ret = -1;
        }
      }
      ++__for_begin;
    }
    if ( is_notify )
      BaseActivity::notifyActivityPushTipsInfo(this);
    result = ret;
  }
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
  return result;
};

// Line 3774: range 00000000137D0646-00000000137D0B02
void __cdecl BaseActivity::notifyActivityPushTipsInfo(BaseActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rcx
  std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  google::protobuf::RepeatedPtrField<proto::ActivityPushTipsData> *v7; // r14
  int v8; // eax
  std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *player; // r14
  std::unordered_map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-C8h]
  const std::pair<unsigned int const,unsigned int> *v15; // [rsp+30h] [rbp-C0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *activity_push_tips_id; // [rsp+38h] [rbp-B8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *state; // [rsp+40h] [rbp-B0h]
  proto::ActivityPushTipsData *proto_activity_push_tips; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<proto::ActivityPushTipsInfoNotify> __r; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v20; // [rsp+60h] [rbp-90h] BYREF
  char v21[112]; // [rsp+80h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 15 notify_ptr:3775";
  *(_QWORD *)(v1 + 16) = BaseActivity::notifyActivityPushTipsInfo;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::ActivityPushTipsInfoNotify>();
  v4 = std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ActivityPushTipsInfoNotify::set_schedule_id(v4, this->schedule_id_);
  v5 = std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ActivityPushTipsInfoNotify::set_activity_id(v5, this->activity_id_);
  v6 = std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  v7 = proto::ActivityPushTipsInfoNotify::mutable_activity_push_tips_data_list(v6);
  v8 = std::unordered_map<unsigned int,unsigned int>::size(&this->activity_push_tips_map_);
  google::protobuf::RepeatedPtrField<proto::ActivityPushTipsData>::Reserve(v7, v8);
  __for_range = &this->activity_push_tips_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->activity_push_tips_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->activity_push_tips_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v15 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    activity_push_tips_id = std::get<0ul,unsigned int const,unsigned int>(v15);
    state = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v15);
    v9 = std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ActivityPushTipsInfoNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    proto_activity_push_tips = proto::ActivityPushTipsInfoNotify::add_activity_push_tips_data_list(v9);
    if ( *(_BYTE *)(((unsigned __int64)activity_push_tips_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)activity_push_tips_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)activity_push_tips_id >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ActivityPushTipsData::set_activity_push_tips_id(proto_activity_push_tips, *activity_push_tips_id);
    if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !proto::ActivityPushTipsState_IsValid(*state) )
    {
      common::milog::MiLogStream::create(
        &v20,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/base_activity.cpp",
        "notifyActivityPushTipsInfo",
        3785);
      v10 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v20,
              (const char (*)[40])"activity pushtips is not valid, state: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, state);
      common::milog::MiLogStream::~MiLogStream(&v20);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)state & 7) + 3) >= *(_BYTE *)(((unsigned __int64)state >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::ActivityPushTipsData::set_state(proto_activity_push_tips, (proto::ActivityPushTipsState)*state);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ActivityPushTipsInfoNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::ActivityPushTipsInfoNotify>::~shared_ptr((std::shared_ptr<proto::ActivityPushTipsInfoNotify> *const)(v1 + 32));
  if ( v21 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3794: range 00000000137D0B04-00000000137D0CBD
int32_t __cdecl BaseActivity::commonCloseContent(BaseActivity *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  unsigned __int64 v5; // rax
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-30h] BYREF

  if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_common_content_closed_);
  if ( this->is_common_content_closed_ )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/base_activity.cpp",
      "commonCloseContent",
      3797);
    v1 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v6,
           (const char (*)[27])"content is already closed ");
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->schedule_id_);
    v3 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v2, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v6);
    return 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_common_content_closed_);
    this->is_common_content_closed_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(this->_vptr_DescribalBase + 39);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load8();
    (*(void (__fastcall **)(BaseActivity *const))v5)(this);
    BaseActivity::notifyClientData(this, 0);
    return 0;
  }
};

// Line 3808: range 00000000137D0CBE-00000000137D0DE3
int32_t __cdecl BaseActivityGmTool::clearByGm(BaseActivityGmTool *const this)
{
  BaseActivity *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rbx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int ScheduleId; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
    return -1;
  v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
  BaseActivity::clear(v2);
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/base_activity.cpp",
    "clearByGm",
    3814);
  v3 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
         &v10,
         (const char (*)[23])"clearByGm,activity_id:");
  v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
  val = BaseActivity::getActivityId(v4);
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
  v6 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v5, (const char (*)[13])"schedule_id:");
  v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
  ScheduleId = BaseActivity::getScheduleId(v7);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &ScheduleId);
  common::milog::MiLogStream::~MiLogStream(&v10);
  return 0;
};

// Line 3819: range 00000000137D0DE4-00000000137D107C
void __fastcall BaseActivityGmTool::openCondByGm(BaseActivityGmTool *const this, uint32_t cond_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // r15
  uint32_t v6; // r14d
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t ActivityId; // eax
  std::map<unsigned int,bool>::mapped_type *v9; // rax
  _BYTE *v10; // rdx
  BaseActivity *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 cond_id:3818";
  *(_QWORD *)(v2 + 16) = BaseActivityGmTool::openCondByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cond_id;
  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    v6 = *(_DWORD *)(v2 + 32);
    v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    ActivityId = BaseActivity::getActivityId(v7);
    LOBYTE(v6) = !NewActivityExcelConfigMgr::isActivityContainsCondId(p_new_activity_config_mgr, ActivityId, v6);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( !(_BYTE)v6 )
    {
      v9 = std::map<unsigned int,bool>::operator[](
             &this->gm_cond_map_,
             (const std::map<unsigned int,bool>::key_type *)(v2 + 32));
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v9);
      }
      *v10 = 1;
      v11 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      BaseActivity::updateCond(v11, *(_DWORD *)(v2 + 32));
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "openCondByGm",
        3828);
      v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v14,
              (const char (*)[22])"gm open cond,cond_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
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
};

// Line 3831: range 00000000137D107E-00000000137D1316
void __fastcall BaseActivityGmTool::closeCondByGm(BaseActivityGmTool *const this, uint32_t cond_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // r15
  uint32_t v6; // r14d
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t ActivityId; // eax
  std::map<unsigned int,bool>::mapped_type *v9; // rax
  _BYTE *v10; // rdx
  BaseActivity *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-90h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 cond_id:3830";
  *(_QWORD *)(v2 + 16) = BaseActivityGmTool::closeCondByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cond_id;
  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.new_activity_config_mgr;
    v6 = *(_DWORD *)(v2 + 32);
    v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    ActivityId = BaseActivity::getActivityId(v7);
    LOBYTE(v6) = !NewActivityExcelConfigMgr::isActivityContainsCondId(p_new_activity_config_mgr, ActivityId, v6);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    if ( !(_BYTE)v6 )
    {
      v9 = std::map<unsigned int,bool>::operator[](
             &this->gm_cond_map_,
             (const std::map<unsigned int,bool>::key_type *)(v2 + 32));
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v9 & 7) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(v9);
      }
      *v10 = 0;
      v11 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      BaseActivity::updateCond(v11, *(_DWORD *)(v2 + 32));
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "closeCondByGm",
        3840);
      v12 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v14,
              (const char (*)[23])"gm close cond,cond_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
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
};

// Line 3843: range 00000000137D1318-00000000137D1576
void __fastcall BaseActivityGmTool::resetCondByGm(BaseActivityGmTool *const this, uint32_t cond_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // r15
  uint32_t v6; // r14d
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t ActivityId; // eax
  BaseActivity *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 cond_id:3842";
  *(_QWORD *)(v2 + 16) = BaseActivityGmTool::resetCondByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = cond_id;
  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.new_activity_config_mgr;
    v6 = *(_DWORD *)(v2 + 32);
    v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    ActivityId = BaseActivity::getActivityId(v7);
    LOBYTE(v6) = !NewActivityExcelConfigMgr::isActivityContainsCondId(p_new_activity_config_mgr, ActivityId, v6);
    std::shared_ptr<Config>::~shared_ptr(&v11);
    if ( !(_BYTE)v6 )
    {
      std::map<unsigned int,bool>::erase(&this->gm_cond_map_, (const std::map<unsigned int,bool>::key_type *)(v2 + 32));
      v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      BaseActivity::updateCond(v9, *(_DWORD *)(v2 + 32));
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/base_activity.cpp",
        "resetCondByGm",
        3852);
      v10 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
              &v12,
              (const char (*)[23])"gm reset cond,cond_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3856: range 00000000137D1578-00000000137D1617
const std::set<unsigned int> *__cdecl BaseActivityGmTool::getAllActiveCondByGm(BaseActivityGmTool *const this)
{
  if ( !(_BYTE)`guard variable for'BaseActivityGmTool::getAllActiveCondByGm(void)::empty_set
    && __cxa_guard_acquire(&`guard variable for'BaseActivityGmTool::getAllActiveCondByGm(void)::empty_set) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)&BaseActivityGmTool::getAllActiveCondByGm(void)::empty_set);
    __cxa_guard_release(&`guard variable for'BaseActivityGmTool::getAllActiveCondByGm(void)::empty_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      (void *)&BaseActivityGmTool::getAllActiveCondByGm(void)::empty_set,
      &_dso_handle);
  }
  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
    return &BaseActivityGmTool::getAllActiveCondByGm(void)::empty_set;
  else
    return &std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_)->meet_cond_set_;
};

// Line 3866: range 00000000137D1618-00000000137D1668
bool __cdecl BaseActivityGmTool::isCondActiveByGm(BaseActivityGmTool *const this, uint32_t cond_id)
{
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
    return 0;
  v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
  return BaseActivity::isMeetCond(v3, cond_id);
};

// Line 3875: range 00000000137D166A-00000000137D183F
int32_t __cdecl BaseActivityGmTool::settleByGm(BaseActivityGmTool *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  BaseActivity *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-90h] BYREF
  char v12[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 8 ret:3880";
  *(_QWORD *)(v1 + 16) = BaseActivityGmTool::settleByGm;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    result = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    *(_DWORD *)(v1 + 32) = BaseActivity::settle(v5);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "settleByGm",
      3881);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v11,
           (const char (*)[25])"gm settle activity, ret:");
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"activity_id:");
    v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    val = BaseActivity::getActivityId(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = *(_DWORD *)(v1 + 32);
  }
  if ( v12 == (char *)v1 )
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

// Line 3887: range 00000000137D1840-00000000137D1983
void __cdecl BaseActivityGmTool::setScoreLimitByGm(BaseActivityGmTool *const this, uint32_t score_limit)
{
  BaseActivity *v2; // rax
  BaseActivity *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int ActivityId; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::setScoreLimit(v2, score_limit);
    v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::notifyClientData(v3, 0);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "setScoreLimitByGm",
      3894);
    v4 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v11,
           (const char (*)[45])"gm activity setScoreLimitByGm , score_limit:");
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    val = BaseActivity::getScoreLimit(v5);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])"activity_id:");
    v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    ActivityId = BaseActivity::getActivityId(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &ActivityId);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 3899: range 00000000137D1984-00000000137D1D71
int32_t __cdecl BaseActivityGmTool::makeAllWatcherTakeable(BaseActivityGmTool *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  int32_t result; // eax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  NewActivityExcelConfigMgr *p_new_activity_config_mgr; // r14
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v9; // rdx
  __int64 v10; // rax
  uint32_t WatcherComp; // eax
  bool v12; // r14
  __int64 v13; // rax
  PlayerWatcherComp *v14; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  BaseActivity *v16; // rax
  __int64 v17; // rax
  PlayerItemComp *ItemComp; // rax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-88h]
  std::shared_ptr<Config> v22; // [rsp+30h] [rbp-80h] BYREF
  char v23[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 15 watcher_id:3906";
  *(_QWORD *)(v1 + 16) = BaseActivityGmTool::makeAllWatcherTakeable;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    result = -1;
  }
  else
  {
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    std::set<unsigned int>::clear(&v5->taken_watcher_id_set_);
    v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    std::set<unsigned int>::clear(&v6->finished_watcher_id_set_);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    p_new_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.new_activity_config_mgr;
    v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)&v8->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    __for_range = NewActivityExcelConfigMgr::findNewActivityWatcherSet(p_new_activity_config_mgr, v8->activity_id_);
    std::shared_ptr<Config>::~shared_ptr(&v22);
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v9 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v9;
      v10 = (__int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8();
      WatcherComp = (unsigned int)Player::getWatcherComp(*(Player *const *)(v10 + 24));
      PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v22, WatcherComp);
      v12 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v22);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v22);
      if ( v12 )
      {
        v13 = (__int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
        if ( *(_BYTE *)(((unsigned __int64)(v13 + 24) >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8();
        v14 = Player::getWatcherComp(*(Player *const *)(v13 + 24));
        PlayerWatcherComp::delWatcherAndNotify(v14, *(_DWORD *)(v1 + 32));
      }
      v15 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      std::set<unsigned int>::insert(
        &v15->finished_watcher_id_set_,
        (const std::set<unsigned int>::value_type *)(v1 + 32));
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    v16 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::notifyClientData(v16, 0);
    v17 = (__int64)std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)(v17 + 24) >> 3) + 0x7FFF8000) )
      v17 = __asan_report_load8();
    ItemComp = Player::getItemComp(*(Player *const *)(v17 + 24));
    PlayerItemComp::clearOutputControlRecordsByYaceAndGm(ItemComp);
    result = 0;
  }
  if ( v23 == (char *)v1 )
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

// Line 3920: range 00000000137D1D72-00000000137D1EB5
void __cdecl BaseActivityGmTool::setScoreByGm(BaseActivityGmTool *const this, uint32_t score)
{
  BaseActivity *v2; // rax
  BaseActivity *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int ActivityId; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::setCurScore(v2, score);
    v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::notifyClientData(v3, 0);
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "setScoreByGm",
      3927);
    v4 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v11,
           (const char (*)[34])"gm activity setScoreByGm , score:");
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    val = BaseActivity::getCurScore(v5);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    v7 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v6, (const char (*)[13])"activity_id:");
    v8 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    ActivityId = BaseActivity::getActivityId(v8);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &ActivityId);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
};

// Line 3931: range 00000000137D1EB6-00000000137D2081
void __fastcall BaseActivityGmTool::selectAvatarCardByGm(BaseActivityGmTool *const this, uint32_t reward_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseActivity *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 reward_id:3930";
  *(_QWORD *)(v2 + 16) = BaseActivityGmTool::selectAvatarCardByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = reward_id;
  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::selectAvatarCard(v5, *(_DWORD *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "selectAvatarCardByGm",
      3937);
    v6 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v11,
           (const char (*)[46])"gm activity selectAvatarCardByGm , reward_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"activity_id:");
    v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    val = BaseActivity::getActivityId(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
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

// Line 3941: range 00000000137D2082-00000000137D224D
void __fastcall BaseActivityGmTool::recordPushtipsByGm(BaseActivityGmTool *const this, uint32_t activity_push_tips_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseActivity *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-80h] BYREF
  char v12[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 26 activity_push_tips_id:3940";
  *(_QWORD *)(v2 + 16) = BaseActivityGmTool::recordPushtipsByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = activity_push_tips_id;
  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::tryRecordActivityPushTips(v5, *(_DWORD *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "recordPushtipsByGm",
      3947);
    v6 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v11,
           (const char (*)[56])"gm activity recordPushtipsByGm , activity_push_tips_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v7, (const char (*)[13])"activity_id:");
    v9 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    val = BaseActivity::getActivityId(v9);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v11);
  }
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

// Line 3951: range 00000000137D224E-00000000137D2439
void __fastcall BaseActivityGmTool::removePushtipsByGm(BaseActivityGmTool *const this, uint32_t activity_push_tips_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  BaseActivity *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r13
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-80h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 26 activity_push_tips_id:3950";
  *(_QWORD *)(v2 + 16) = BaseActivityGmTool::removePushtipsByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = activity_push_tips_id;
  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    v5 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    std::unordered_map<unsigned int,unsigned int>::erase(
      &v5->activity_push_tips_map_,
      (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32));
    v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::notifyActivityPushTipsInfo(v6);
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "removePushtipsByGm",
      3958);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v12,
           (const char (*)[56])"gm activity removePushtipsByGm , activity_push_tips_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])"activity_id:");
    v10 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    val = BaseActivity::getActivityId(v10);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 3962: range 00000000137D243A-00000000137D2742
void __fastcall BaseActivityGmTool::setPushtipsStateByGm(
        BaseActivityGmTool *const this,
        uint32_t activity_push_tips_id,
        uint32_t state)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int v9; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  BaseActivity *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rbx
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-B0h] BYREF
  char v23[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 26 activity_push_tips_id:3961 48 4 10 state:3961 64 8 9 iter:3967";
  *(_QWORD *)(v3 + 16) = BaseActivityGmTool::setPushtipsStateByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = activity_push_tips_id;
  *(_DWORD *)(v3 + 48) = state;
  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    v6 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                              &v6->activity_push_tips_map_,
                                                                              (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v3 + 32));
    v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&v7->activity_push_tips_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64),
           &__y)
      && proto::ActivityPushTipsState_IsValid(*(_DWORD *)(v3 + 48)) )
    {
      v9 = *(_DWORD *)(v3 + 48);
      v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 64));
      p_second = &v10->second;
      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(p_second);
      }
      v10->second = v9;
      v12 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      BaseActivity::notifyActivityPushTipsInfo(v12);
    }
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/base_activity.cpp",
      "setPushtipsStateByGm",
      3973);
    v13 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
            &v22,
            (const char (*)[58])"gm activity setPushtipsStateByGm , activity_push_tips_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])", state: ");
    v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])"activity_id:");
    v18 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    val = BaseActivity::getActivityId(v18);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  if ( v23 == (char *)v3 )
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

// Line 3978: range 00000000137D2744-00000000137D2896
int32_t __cdecl BaseActivityGmTool::addActivityGeneralCoinByGm(
        BaseActivityGmTool *const this,
        proto::VirtualItem coin_type,
        uint32_t coin_num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  int32_t result; // eax
  BaseActivity *v7; // rax
  char v9[128]; // [rsp+10h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 24 18 action_reason:3983";
  *(_QWORD *)(v3 + 16) = BaseActivityGmTool::addActivityGeneralCoinByGm;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218103808;
  v5[536862722] = -202116109;
  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    result = -1;
  }
  else
  {
    ActionReason::ActionReason((ActionReason *const)(v3 + 32), ACTION_REASON_GM, ITEM_LIMIT_GM);
    v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    result = BaseActivity::addActivityGeneralCoin(v7, coin_type, coin_num, (const ActionReason *)(v3 + 32), 1);
  }
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
  return result;
};

// Line 3987: range 00000000137D2898-00000000137D29AC
int32_t __cdecl BaseActivityGmTool::subActivityGeneralCoinByGm(
        BaseActivityGmTool *const this,
        proto::VirtualItem coin_type,
        uint32_t coin_num)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  BaseActivity *v7; // rax
  char v9[96]; // [rsp+10h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 8 18 action_reason:3992";
  *(_QWORD *)(v3 + 16) = BaseActivityGmTool::subActivityGeneralCoinByGm;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116352;
  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    result = -1;
  }
  else
  {
    SubItemReason::SubItemReason((SubItemReason *const)(v3 + 32), ACTION_REASON_GM);
    v7 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    result = BaseActivity::subActivityGeneralCoin(v7, coin_type, coin_num, (const SubItemReason *)(v3 + 32), 1);
  }
  if ( v9 == (char *)v3 )
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

// Line 3997: range 00000000137D29AE-00000000137D29FE
uint32_t __cdecl BaseActivityGmTool::getActivityGeneralCoinByGm(
        BaseActivityGmTool *const this,
        proto::VirtualItem coin_type)
{
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
    return 0;
  v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
  return BaseActivity::getActivityGeneralCoin(v3, coin_type);
};

// Line 4005: range 00000000137D2A00-00000000137D2A59
void __cdecl BaseActivityGmTool::resetActivityGeneralCoinByGm(BaseActivityGmTool *const this)
{
  BaseActivity *v1; // rax
  BaseActivity *v2; // rax

  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    v1 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::clearGeneralCoin(v1);
    v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
    BaseActivity::setInitialGeneralCoin(v2);
  }
};

// Line 4015: range 00000000137D2A5A-00000000137D2B14
void __cdecl BaseActivityGmTool::controlCommonContentCloseStateByGm(BaseActivityGmTool *const this, bool is_close)
{
  BaseActivity *v2; // rax
  std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  BaseActivity *v4; // rax

  if ( !std::operator==<BaseActivity>(0LL, &this->activity_ptr_) )
  {
    if ( is_close )
    {
      v2 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      BaseActivity::commonCloseContent(v2);
    }
    else
    {
      v3 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      if ( *(char *)(((unsigned __int64)&v3->is_common_content_closed_ >> 3) + 0x7FFF8000) < 0 )
        v3 = (std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store1(&v3->is_common_content_closed_);
      v3->is_common_content_closed_ = 0;
      v4 = std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->activity_ptr_);
      BaseActivity::notifyClientData(v4, 0);
    }
  }
};

// Line 4030: range 0000000013828D60-0000000013828D74
void __cdecl GLOBAL__sub_I_merge_single_ability_comp_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 4030: range 0000000013828754-0000000013828D5F
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const std::_V2::error_category *v2; // rax
  const std::_V2::error_category *v3; // rax
  const std::_V2::error_category *v4; // rax
  const std::_V2::error_category *v5; // rax
  const std::_V2::error_category *v6; // rax
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  const boost::system::error_category *misc_category; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  _BYTE *v15; // rcx
  _BYTE *v16; // rcx
  const char *v17; // rcx
  _BYTE *v18; // rcx
  _BYTE *v19; // rcx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  const char *v24; // rcx

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_ability_comp.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      v2 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&std::ios_base::Init::~Init);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v2);
      v3 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v3);
      v4 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v4);
      v5 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v5);
      v6 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v6);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)5);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)5);
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)5);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::system_category);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::netdb_category);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::addrinfo_category);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        __asan_report_store8(&boost::asio::error::misc_category);
      boost::asio::error::misc_category = misc_category;
      v11 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v11 )
      {
        v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        }
        *v12 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v13 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
        }
        *v14 = 1;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v15 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v15 )
      {
        v16 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        }
        *v16 = 1;
        v17 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v17;
      }
      v18 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v18 )
      {
        v19 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        }
        *v19 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v20 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        }
        *v21 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) != 0
          && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
        {
          __asan_report_store1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        }
        *v23 = 1;
        v24 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v24;
      }
    }
    __asan_after_dynamic_init();
  }
};
