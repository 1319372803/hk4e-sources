// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/forge/player_forge_comp.cpp

// Line 35: range 0000000016627CBC-0000000016627E1E
void __cdecl ForgeQueue::toClient(const ForgeQueue *const this, proto::ForgeQueueData *proto_forge_queue)
{
  uint32_t TakableCount; // edx
  uint32_t UnfinishCount; // edx
  uint32_t NextFinishTime; // edx
  uint32_t TotalFinishTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->queue_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->queue_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->queue_id);
  }
  proto::ForgeQueueData::set_queue_id(proto_forge_queue, this->queue_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->forge_id);
  }
  proto::ForgeQueueData::set_forge_id(proto_forge_queue, this->forge_id);
  TakableCount = ForgeQueue::getTakableCount(this);
  proto::ForgeQueueData::set_finish_count(proto_forge_queue, TakableCount);
  UnfinishCount = ForgeQueue::getUnfinishCount(this);
  proto::ForgeQueueData::set_unfinish_count(proto_forge_queue, UnfinishCount);
  NextFinishTime = ForgeQueue::getNextFinishTime(this);
  proto::ForgeQueueData::set_next_finish_timestamp(proto_forge_queue, NextFinishTime);
  TotalFinishTime = ForgeQueue::getTotalFinishTime(this);
  proto::ForgeQueueData::set_total_finish_timestamp(proto_forge_queue, TotalFinishTime);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avatar_id);
  }
  proto::ForgeQueueData::set_avatar_id(proto_forge_queue, this->avatar_id);
};

// Line 46: range 0000000016627E1F-0000000016627F90
common::milog::MiLogStream *__cdecl operator<<(common::milog::MiLogStream *stream, const ForgeQueue *forge_queue)
{
  common::milog::MiLogStream *v2; // rdx
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax

  v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         stream,
         (const char (*)[29])" forge_queue[transaction_no:");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &forge_queue->transaction_no);
  v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" queue_id:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &forge_queue->queue_id);
  v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v5, (const char (*)[11])" forge_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &forge_queue->forge_id);
  v8 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v7, (const char (*)[14])" forge_count:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &forge_queue->forge_count);
  v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" finish_count:");
  v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &forge_queue->finish_count);
  v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" taken_count:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &forge_queue->taken_count);
  v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" start_time:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &forge_queue->start_time);
  v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v15, (const char (*)[19])" single_time_cost:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &forge_queue->single_time_cost);
  v18 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v17, (const char (*)[21])" proud_skill_id_vec:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int>(v18, &forge_queue->proud_skill_id_vec);
  common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])"]");
  return stream;
};

// Line 58: range 0000000016627F92-0000000016628431
int32_t __cdecl PlayerForgeComp::fromBin(PlayerForgeComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  __int64 transaction_no; // rdx
  char v3; // al
  uint32_t v4; // edx
  uint32_t refresh_time; // edx
  const unsigned int *v6; // rsi
  __int64 v7; // rdx
  char v8; // al
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // al
  uint32_t v14; // ecx
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rdx
  char v18; // al
  uint32_t v19; // ecx
  char v20; // dl
  __int64 v21; // rdx
  __int64 started; // rdx
  char v23; // al
  uint32_t v24; // ecx
  char v25; // dl
  __int64 v26; // rdx
  const google::protobuf::RepeatedField<unsigned int> *v27; // rax
  std::vector<unsigned int> *p_proud_skill_id_vec; // rsi
  __int64 v29; // rdx
  char v30; // al
  int v31; // eax
  std::unordered_set<unsigned int>::value_type __x; // [rsp+18h] [rbp-78h] BYREF
  int32_t idx; // [rsp+1Ch] [rbp-74h]
  const proto::PlayerForgeCompBin *proto_comp; // [rsp+20h] [rbp-70h]
  const google::protobuf::Map<unsigned int,proto::ForgeQueueBin> *__for_range; // [rsp+28h] [rbp-68h]
  const unsigned int *p_forge_queue_id; // [rsp+30h] [rbp-60h]
  ForgeQueue *forge_queue; // [rsp+38h] [rbp-58h]
  google::protobuf::Map<unsigned int,proto::ForgeQueueBin>::const_iterator __for_begin; // [rsp+40h] [rbp-50h] BYREF
  google::protobuf::Map<unsigned int,proto::ForgeQueueBin>::const_iterator __for_end; // [rsp+60h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::forge_bin(player_data_bin);
  transaction_no = proto::PlayerForgeCompBin::last_transaction_no(proto_comp);
  v3 = *(_BYTE *)(((unsigned __int64)&this->last_transaction_no_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(player_data_bin) = v3 != 0;
    __asan_report_store4(&this->last_transaction_no_, player_data_bin, transaction_no);
  }
  this->last_transaction_no_ = transaction_no;
  v4 = proto::PlayerForgeCompBin::forge_point(proto_comp);
  PlayerForgeComp::setCurForgePoint(this, v4);
  refresh_time = proto::PlayerForgeCompBin::last_refresh_time(proto_comp);
  PlayerForgeComp::setLastDayRefreshTime(this, refresh_time);
  __for_range = proto::PlayerForgeCompBin::forge_queue_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::ForgeQueueBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::ForgeQueueBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_forge_queue_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::ForgeQueueBin>::const_iterator::operator*(&__for_begin);
    v6 = p_forge_queue_id;
    forge_queue = std::map<unsigned int,ForgeQueue>::operator[](&this->forge_queue_map_, p_forge_queue_id);
    v7 = proto::ForgeQueueBin::transaction_no((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v8 = *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000);
    if ( v8 != 0 && v8 <= 3 )
    {
      LOBYTE(v6) = v8 != 0;
      __asan_report_store4(forge_queue, v6, v7);
    }
    forge_queue->transaction_no = v7;
    v9 = proto::ForgeQueueBin::queue_id((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v10 = *(_BYTE *)(((unsigned __int64)&forge_queue->queue_id >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v10 != 0;
    v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 4) & 7) + 3) >= v10);
    if ( (_BYTE)v11 )
      __asan_report_store4(&forge_queue->queue_id, v6, v11);
    forge_queue->queue_id = v9;
    v12 = proto::ForgeQueueBin::forge_id((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v13 = *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v6) = v13 != 0;
      __asan_report_store4(&forge_queue->forge_id, v6, v12);
    }
    forge_queue->forge_id = v12;
    v14 = proto::ForgeQueueBin::forge_count((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v15 = *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v15 != 0;
    v16 = (v15 != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 12) & 7) + 3) >= v15);
    if ( (_BYTE)v16 )
      __asan_report_store4(&forge_queue->forge_count, v6, v16);
    forge_queue->forge_count = v14;
    v17 = proto::ForgeQueueBin::finish_count((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v18 = *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000);
    if ( v18 != 0 && v18 <= 3 )
    {
      LOBYTE(v6) = v18 != 0;
      __asan_report_store4(&forge_queue->finish_count, v6, v17);
    }
    forge_queue->finish_count = v17;
    v19 = proto::ForgeQueueBin::taken_count((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v20 = *(_BYTE *)(((unsigned __int64)&forge_queue->taken_count >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v20 != 0;
    v21 = (v20 != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 20) & 7) + 3) >= v20);
    if ( (_BYTE)v21 )
      __asan_report_store4(&forge_queue->taken_count, v6, v21);
    forge_queue->taken_count = v19;
    started = proto::ForgeQueueBin::start_time((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v23 = *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000);
    if ( v23 != 0 && v23 <= 3 )
    {
      LOBYTE(v6) = v23 != 0;
      __asan_report_store4(&forge_queue->start_time, v6, started);
    }
    forge_queue->start_time = started;
    v24 = proto::ForgeQueueBin::single_time_cost((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v25 = *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3) + 0x7FFF8000);
    LOBYTE(v6) = v25 != 0;
    v26 = (v25 != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 28) & 7) + 3) >= v25);
    if ( (_BYTE)v26 )
      __asan_report_store4(&forge_queue->single_time_cost, v6, v26);
    forge_queue->single_time_cost = v24;
    v27 = proto::ForgeQueueBin::proud_skill_id_list((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    p_proud_skill_id_vec = &forge_queue->proud_skill_id_vec;
    common::tools::MiscUtils::repeatedToVector<unsigned int,unsigned int>(v27, &forge_queue->proud_skill_id_vec);
    v29 = proto::ForgeQueueBin::avatar_id((const proto::ForgeQueueBin *const)(p_forge_queue_id + 2));
    v30 = *(_BYTE *)(((unsigned __int64)&forge_queue->avatar_id >> 3) + 0x7FFF8000);
    if ( v30 != 0 && v30 <= 3 )
    {
      LOBYTE(p_proud_skill_id_vec) = v30 != 0;
      __asan_report_store4(&forge_queue->avatar_id, p_proud_skill_id_vec, v29);
    }
    forge_queue->avatar_id = v29;
    google::protobuf::Map<unsigned int,proto::ForgeQueueBin>::const_iterator::operator++(&__for_begin);
  }
  for ( idx = 0; ; ++idx )
  {
    v31 = proto::PlayerForgeCompBin::unlock_forge_id_list_size(proto_comp);
    if ( idx >= v31 )
      break;
    __x = proto::PlayerForgeCompBin::unlock_forge_id_list(proto_comp, idx);
    std::unordered_set<unsigned int>::insert(&this->unlock_forge_id_set_, &__x);
  }
  return 0;
};

// Line 87: range 0000000016628432-00000000166288FE
int32_t __cdecl PlayerForgeComp::toBin(PlayerForgeComp *const this, proto::PlayerDataBin *player_data_bin)
{
  uint32_t CurForgePoint; // eax
  uint32_t LastDayRefreshTime; // eax
  google::protobuf::RepeatedField<unsigned int> *v4; // rax
  unsigned int *v5; // rax
  google::protobuf::uint32 *v6; // rdx
  std::map<unsigned int,ForgeQueue>::iterator __for_begin; // [rsp+20h] [rbp-50h] BYREF
  std::map<unsigned int,ForgeQueue>::iterator __for_end; // [rsp+28h] [rbp-48h] BYREF
  proto::PlayerForgeCompBin *proto_comp; // [rsp+30h] [rbp-40h]
  google::protobuf::Map<unsigned int,proto::ForgeQueueBin> *proto_forge_queue_map; // [rsp+38h] [rbp-38h]
  std::map<unsigned int,ForgeQueue> *__for_range; // [rsp+40h] [rbp-30h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-28h]
  const std::pair<unsigned int const,ForgeQueue> *v14; // [rsp+50h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue_id; // [rsp+58h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue; // [rsp+60h] [rbp-10h]
  proto::ForgeQueueBin *forge_queue_bin; // [rsp+68h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_forge_bin(player_data_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_transaction_no_);
  }
  proto::PlayerForgeCompBin::set_last_transaction_no(proto_comp, this->last_transaction_no_);
  CurForgePoint = PlayerForgeComp::getCurForgePoint(this);
  proto::PlayerForgeCompBin::set_forge_point(proto_comp, CurForgePoint);
  LastDayRefreshTime = PlayerForgeComp::getLastDayRefreshTime(this);
  proto::PlayerForgeCompBin::set_last_refresh_time(proto_comp, LastDayRefreshTime);
  proto_forge_queue_map = proto::PlayerForgeCompBin::mutable_forge_queue_map(proto_comp);
  __for_range = &this->forge_queue_map_;
  __for_begin._M_node = std::map<unsigned int,ForgeQueue>::begin(&this->forge_queue_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ForgeQueue>::end(&this->forge_queue_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator*(&__for_begin);
    forge_queue_id = std::get<0ul,unsigned int const,ForgeQueue>(v14);
    forge_queue = (std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *)std::get<1ul,unsigned int const,ForgeQueue>(v14);
    forge_queue_bin = google::protobuf::Map<unsigned int,proto::ForgeQueueBin>::operator[](
                        proto_forge_queue_map,
                        forge_queue_id);
    if ( *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(forge_queue);
    }
    proto::ForgeQueueBin::set_transaction_no(forge_queue_bin, forge_queue->transaction_no);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->queue_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)forge_queue + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->queue_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&forge_queue->queue_id);
    }
    proto::ForgeQueueBin::set_queue_id(forge_queue_bin, forge_queue->queue_id);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&forge_queue->forge_id);
    }
    proto::ForgeQueueBin::set_forge_id(forge_queue_bin, forge_queue->forge_id);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)forge_queue + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&forge_queue->forge_count);
    }
    proto::ForgeQueueBin::set_forge_count(forge_queue_bin, forge_queue->forge_count);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&forge_queue->finish_count);
    }
    proto::ForgeQueueBin::set_finish_count(forge_queue_bin, forge_queue->finish_count);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->taken_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)forge_queue + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->taken_count >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&forge_queue->taken_count);
    }
    proto::ForgeQueueBin::set_taken_count(forge_queue_bin, forge_queue->taken_count);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&forge_queue->start_time);
    }
    proto::ForgeQueueBin::set_start_time(forge_queue_bin, forge_queue->start_time);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)forge_queue + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&forge_queue->single_time_cost);
    }
    proto::ForgeQueueBin::set_single_time_cost(forge_queue_bin, forge_queue->single_time_cost);
    v4 = proto::ForgeQueueBin::mutable_proud_skill_id_list(forge_queue_bin);
    common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&forge_queue->proud_skill_id_vec, v4);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->avatar_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_queue->avatar_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&forge_queue->avatar_id);
    }
    proto::ForgeQueueBin::set_avatar_id(forge_queue_bin, forge_queue->avatar_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->unlock_forge_id_set_;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Base_ptr)std::unordered_set<unsigned int>::begin(&this->unlock_forge_id_set_)._M_cur;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Base_ptr)std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)&__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    proto::PlayerForgeCompBin::add_unlock_forge_id_list(proto_comp, *v6);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)&__for_begin);
  }
  return 0;
};

// Line 117: range 0000000016628900-0000000016628934
int32_t __cdecl PlayerForgeComp::onLogin(PlayerForgeComp *const this, bool is_new_player)
{
  PlayerForgeComp::tryUpdateForgeQueues(this);
  PlayerForgeComp::tryRefreshForgePoint(this, 0);
  return 0;
};

// Line 125: range 0000000016628936-0000000016628954
int32_t __cdecl PlayerForgeComp::init(PlayerForgeComp *const this)
{
  PlayerForgeComp::initEventObservers(this);
  return 0;
};

// Line 134: range 0000000016628956-0000000016628975
void __cdecl PlayerForgeComp::onDailyRefresh(PlayerForgeComp *const this)
{
  PlayerForgeComp::tryRefreshForgePoint(this, 1);
};

// Line 140: range 0000000016628976-0000000016629078
int32_t __cdecl PlayerForgeComp::notifyAllData(PlayerForgeComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  PlayerQuestComp *QuestComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v8; // rax
  uint32_t *v9; // rdx
  std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rcx
  std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // r14
  uint32_t MaxForgeQueueNum; // eax
  std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  proto::ForgeQueueData *v16; // rax
  Player *player; // r14
  int32_t result; // eax
  uint32_t forge_id_0; // [rsp+10h] [rbp-130h]
  uint32_t forge_id; // [rsp+14h] [rbp-12Ch]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-118h]
  std::vector<unsigned int> *__for_range_0; // [rsp+30h] [rbp-110h]
  const std::unordered_map<unsigned int,data::ForgeExcelConfig> *__for_range_1; // [rsp+38h] [rbp-108h]
  google::protobuf::Map<unsigned int,proto::ForgeQueueData> *proto_forge_queue_map; // [rsp+40h] [rbp-100h]
  std::map<unsigned int,ForgeQueue> *__for_range_2; // [rsp+48h] [rbp-F8h]
  const std::pair<unsigned int const,ForgeQueue> *v28; // [rsp+50h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue_id; // [rsp+58h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue; // [rsp+60h] [rbp-E0h]
  const std::pair<unsigned int const,data::ForgeExcelConfig> *v31; // [rsp+68h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::ForgeExcelConfig> >::type *forge_id_1; // [rsp+70h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::ForgeExcelConfig> >::type *forge_config; // [rsp+78h] [rbp-C8h]
  std::shared_ptr<const google::protobuf::Message> v34; // [rsp+80h] [rbp-C0h] BYREF
  char v35[176]; // [rsp+90h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 20 forge_notify_ptr:142 64 24 20 unlock_forge_vec:149";
  *(_QWORD *)(v1 + 16) = PlayerForgeComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -218103808;
  v3[536862723] = -202116109;
  common::tools::perf::make_shared<proto::ForgeDataNotify>();
  __for_range = &this->unlock_forge_id_set_;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&this->unlock_forge_id_set_)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&this->unlock_forge_id_set_)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    forge_id = *v5;
    v6 = std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    proto::ForgeDataNotify::add_forge_id_list(v6, forge_id);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  QuestComp = Player::getQuestComp(this->player_);
  PlayerQuestComp::getQuestUnlockForgeData((std::vector<unsigned int> *)(v1 + 64), QuestComp);
  __for_range_0 = (std::vector<unsigned int> *)(v1 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v1 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
    v9 = v8;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    forge_id_0 = *v9;
    v10 = std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    proto::ForgeDataNotify::add_forge_id_list(v10, forge_id_0);
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  __for_range_1 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.forge_config_mgr.forge_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v34);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,data::ForgeExcelConfig>::begin(__for_range_1)._M_cur;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,data::ForgeExcelConfig>::end(__for_range_1)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ForgeExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)&__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::ForgeExcelConfig>,false> *)&__for_end) )
  {
    v31 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)&__for_begin);
    forge_id_1 = std::get<0ul,unsigned int const,data::ForgeExcelConfig>(v31);
    forge_config = (std::tuple_element<1,const std::pair<unsigned int const,data::ForgeExcelConfig> >::type *)std::get<1ul,unsigned int const,data::ForgeExcelConfig>(v31);
    if ( *(char *)(((unsigned __int64)&forge_config->is_default_show >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&forge_config->is_default_show);
    if ( forge_config->is_default_show
      && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            &this->unlock_forge_id_set_,
            forge_id_1)
      && !common::tools::MiscUtils::isContains<unsigned int>((std::vector<unsigned int> *)(v1 + 64), forge_id_1) )
    {
      v12 = std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)forge_id_1 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)forge_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forge_id_1 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(forge_id_1);
      }
      proto::ForgeDataNotify::add_forge_id_list(v12, *forge_id_1);
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeExcelConfig>,false,false> *const)&__for_begin);
  }
  v13 = std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  MaxForgeQueueNum = PlayerForgeComp::getMaxForgeQueueNum(this);
  proto::ForgeDataNotify::set_max_queue_num(v13, MaxForgeQueueNum);
  v15 = std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  proto_forge_queue_map = proto::ForgeDataNotify::mutable_forge_queue_map(v15);
  __for_range_2 = &this->forge_queue_map_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::map<unsigned int,ForgeQueue>::begin(&this->forge_queue_map_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::map<unsigned int,ForgeQueue>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)&__for_end) )
  {
    v28 = std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> > *const)&__for_begin);
    forge_queue_id = std::get<0ul,unsigned int const,ForgeQueue>(v28);
    forge_queue = (std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *)std::get<1ul,unsigned int const,ForgeQueue>(v28);
    v16 = google::protobuf::Map<unsigned int,proto::ForgeQueueData>::operator[](proto_forge_queue_map, forge_queue_id);
    ForgeQueue::toClient(forge_queue, v16);
    std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> > *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ForgeDataNotify>((const std::shared_ptr<proto::ForgeDataNotify> *)&v34);
  Player::sendMessage(player, &v34, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v34);
  PlayerForgeComp::notifyCurForgePoint(this);
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  std::shared_ptr<proto::ForgeDataNotify>::~shared_ptr((std::shared_ptr<proto::ForgeDataNotify> *const)(v1 + 32));
  result = 0;
  if ( v35 == (char *)v1 )
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
  return result;
};

// Line 182: range 000000001662907A-00000000166297B1
void __cdecl PlayerForgeComp::initEventObservers(PlayerForgeComp *const this)
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
  *(_QWORD *)(p_M_bucket_count + 8) = "2 32 16 12 this_ptr:185 64 16 12 this_wtr:191";
  *(_QWORD *)(p_M_bucket_count + 16) = PlayerForgeComp::initEventObservers;
  v3 = (_DWORD *)(p_M_bucket_count >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/forge/player_forge_comp.cpp",
    "initEventObservers",
    183);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
  toThisPtr<PlayerForgeComp>((PlayerForgeComp *)(p_M_bucket_count + 32));
  if ( std::operator==<PlayerForgeComp>(0LL, (const std::shared_ptr<PlayerForgeComp> *)(p_M_bucket_count + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "initEventObservers",
      188);
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
      (common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last,
      (const char (*)[47])"dynamic_pointer_cast to PlayerForgeComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish._M_last);
  }
  else
  {
    std::weak_ptr<PlayerForgeComp>::weak_ptr<PlayerForgeComp,void>(
      (std::weak_ptr<PlayerForgeComp> *const)(p_M_bucket_count + 64),
      (const std::shared_ptr<PlayerForgeComp> *)(p_M_bucket_count + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerForgeComp>::weak_ptr(
      (std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerForgeComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerForgeComp,StartQuestEvent>(
      &v7,
      (std::weak_ptr<PlayerForgeComp> *)event_comp,
      (void (*)(PlayerForgeComp *, const StartQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerForgeComp>::weak_ptr(
      (std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerForgeComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerForgeComp,FinishQuestEvent>(
      (PlayerEventComp *const)&v7._M_weak_this._M_refcount,
      (std::weak_ptr<PlayerForgeComp> *)event_comp,
      (void (*)(PlayerForgeComp *, const FinishQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7._M_weak_this._M_refcount);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerForgeComp>::weak_ptr(
      (std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerForgeComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerForgeComp,OpenStateChangeEvent>(
      (PlayerEventComp *const)&v7.event_center_,
      (std::weak_ptr<PlayerForgeComp> *)event_comp,
      (void (*)(PlayerForgeComp *, const OpenStateChangeEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerForgeComp>::weak_ptr(
      (std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerForgeComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerForgeComp,PlayerLevelupEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_,
      (std::weak_ptr<PlayerForgeComp> *)event_comp,
      (void (*)(PlayerForgeComp *, const PlayerLevelupEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerForgeComp>::weak_ptr(
      (std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerForgeComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerForgeComp,FinishParentQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start,
      (std::weak_ptr<PlayerForgeComp> *)event_comp,
      (void (*)(PlayerForgeComp *, const FinishParentQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerForgeComp>::weak_ptr(
      (std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (const std::weak_ptr<PlayerForgeComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerForgeComp,FailParentQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (std::weak_ptr<PlayerForgeComp> *)event_comp,
      (void (*)(PlayerForgeComp *, const FailParentQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerForgeComp>::weak_ptr(
      (std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last,
      (const std::weak_ptr<PlayerForgeComp> *)(p_M_bucket_count + 64));
    PlayerEventComp::registerObserver<PlayerForgeComp,CancelParentQuestEvent>(
      (PlayerEventComp *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish,
      (std::weak_ptr<PlayerForgeComp> *)event_comp,
      (void (*)(PlayerForgeComp *, const CancelParentQuestEvent *))&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_finish);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)&v7.event_center_.context_.pending_que_.c._M_impl._M_start._M_last);
    std::weak_ptr<PlayerForgeComp>::~weak_ptr((std::weak_ptr<PlayerForgeComp> *const)(p_M_bucket_count + 64));
  }
  std::shared_ptr<PlayerForgeComp>::~shared_ptr((std::shared_ptr<PlayerForgeComp> *const)(p_M_bucket_count + 32));
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

// Line 206: range 00000000166297B2-00000000166299BE
uint32_t __cdecl PlayerForgeComp::getMaxForgeQueueNum(const PlayerForgeComp *const this)
{
  PlayerBasicComp *BasicComp; // rax
  const std::pair<unsigned int const,data::ForgeUpdateExcelConfig> *v2; // rax
  uint32_t optimal_player_level; // [rsp+1Ch] [rbp-64h]
  uint32_t optimal_forge_queue_num; // [rsp+20h] [rbp-60h]
  std::tuple_element<0,std::pair<unsigned int const,data::ForgeUpdateExcelConfig> >::type player_level; // [rsp+24h] [rbp-5Ch]
  std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::const_iterator __for_end; // [rsp+30h] [rbp-50h] BYREF
  const std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig> *__for_range; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,data::ForgeUpdateExcelConfig> >::type *min_player_level; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,data::ForgeUpdateExcelConfig> >::type *forge_update_config; // [rsp+48h] [rbp-38h]
  std::shared_ptr<Config> v12; // [rsp+50h] [rbp-30h] BYREF
  std::pair<unsigned int const,data::ForgeUpdateExcelConfig> __in; // [rsp+60h] [rbp-20h] BYREF

  optimal_player_level = 0;
  optimal_forge_queue_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  player_level = PlayerBasicComp::getLevel(BasicComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.forge_config_mgr.forge_update_excel_config_map;
  std::shared_ptr<Config>::~shared_ptr(&v12);
  __for_begin._M_cur = std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,data::ForgeUpdateExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false>(
            &__for_begin,
            &__for_end) )
  {
    v2 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false,false>::operator*(&__for_begin);
    std::pair<unsigned int const,data::ForgeUpdateExcelConfig>::pair(&__in, v2);
    min_player_level = std::get<0ul,unsigned int const,data::ForgeUpdateExcelConfig>(&__in);
    forge_update_config = std::get<1ul,unsigned int const,data::ForgeUpdateExcelConfig>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)min_player_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)min_player_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)min_player_level >> 3)
                                                                         + 0x7FFF8000) )
    {
      __asan_report_load4(min_player_level);
    }
    if ( player_level >= *min_player_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)min_player_level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)min_player_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)min_player_level >> 3)
                                                                           + 0x7FFF8000) )
      {
        __asan_report_load4(min_player_level);
      }
      if ( optimal_player_level < *min_player_level )
      {
        optimal_player_level = *min_player_level;
        if ( *(_BYTE *)(((unsigned __int64)&forge_update_config->forge_queue_num >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)forge_update_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_update_config->forge_queue_num >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&forge_update_config->forge_queue_num);
        }
        optimal_forge_queue_num = forge_update_config->forge_queue_num;
      }
    }
    std::pair<unsigned int const,data::ForgeUpdateExcelConfig>::~pair(&__in);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::ForgeUpdateExcelConfig>,false,false>::operator++(&__for_begin);
  }
  return optimal_forge_queue_num;
};

// Line 227: range 00000000166299C0-000000001662C874
int32_t __cdecl PlayerForgeComp::startForge(
        PlayerForgeComp *const this,
        const proto::ForgeStartReq *req,
        proto::ForgeStartRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v8; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool isForgeSystemClosed; // r15
  FeatureSwitchMgr *p_feature_switch_mgr; // r15
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  PlayerBasicComp *v15; // rax
  uint32_t AvatarComp; // eax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // r14
  PlayerBasicComp *v21; // rax
  uint32_t Level; // ecx
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v25; // rax
  PlayerBasicComp *v26; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v28; // rax
  common::milog::MiLogStream *v29; // r14
  std::map<unsigned int,ForgeQueue>::size_type v30; // r15
  PlayerForgeComp *ForgeComp; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // r14
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  uint32_t ItemComp; // ecx
  std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  unsigned __int64 v37; // rdx
  unsigned int v38; // eax
  ForgeExcelConfigMgr *p_forge_config_mgr; // rcx
  common::milog::MiLogStream *v40; // rax
  int v41; // r15d
  uint32_t v42; // ecx
  unsigned int result_item_count; // ecx
  uint32_t v44; // esi
  unsigned int v45; // eax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // r14
  uint32_t *p_count; // rax
  common::milog::MiLogStream *v51; // r14
  common::milog::MiLogStream *v52; // r14
  PlayerItemComp *v53; // rax
  common::milog::MiLogStream *v55; // r14
  PlayerItemComp *v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  TalentComp *TalentComp; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v60; // rax
  _DWORD *v61; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false>::pointer v62; // rax
  const float *v63; // rax
  _DWORD *v64; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false>::pointer v65; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false>::pointer v66; // rax
  common::milog::MiLogStream *v67; // rax
  char *v68; // rsi
  uint32_t v69; // ecx
  char v70; // al
  uint32_t v71; // ecx
  char v72; // dl
  __int64 v73; // rdx
  uint32_t v74; // ecx
  char v75; // al
  __int64 v76; // rsi
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 Now; // rsi
  float *v80; // rax
  float *v81; // rdx
  uint32_t v82; // edi
  __int64 v83; // rdx
  std::vector<unsigned int> *v84; // rsi
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // r14
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v89; // rax
  google::protobuf::RepeatedField<unsigned int> *v90; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v92; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v93; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v94; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v95; // rcx
  uint32_t single_time_cost; // esi
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v97; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v98; // rax
  Player *player; // r14
  int32_t result; // eax
  std::string __l; // [rsp+0h] [rbp-3A0h]
  std::initializer_list<unsigned int> __la; // [rsp+0h] [rbp-3A0h]
  std::allocator<unsigned int> v105; // [rsp+3Fh] [rbp-361h] BYREF
  float __a; // [rsp+40h] [rbp-360h] BYREF
  uint32_t output_future_stack; // [rsp+44h] [rbp-35Ch]
  uint32_t forge_count; // [rsp+48h] [rbp-358h]
  uint32_t avatar_id; // [rsp+4Ch] [rbp-354h]
  uint32_t forge_point; // [rsp+50h] [rbp-350h]
  int32_t ret; // [rsp+54h] [rbp-34Ch]
  std::vector<unsigned int>::iterator __for_begin_0; // [rsp+58h] [rbp-348h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+60h] [rbp-340h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end_0; // [rsp+68h] [rbp-338h] BYREF
  const data::ForgeExcelConfig *config_ptr; // [rsp+70h] [rbp-330h]
  const uint32_t *output_id; // [rsp+78h] [rbp-328h]
  const data::MaterialExcelConfig *output_config_ptr; // [rsp+80h] [rbp-320h]
  std::map<unsigned int,ForgeQueue> *__for_range; // [rsp+88h] [rbp-318h]
  const std::pair<unsigned int const,ForgeQueue> *v119; // [rsp+90h] [rbp-310h]
  std::tuple_element<0,const std::pair<unsigned int const,ForgeQueue> >::type *queue_id; // [rsp+98h] [rbp-308h]
  std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue_0; // [rsp+A0h] [rbp-300h]
  const data::ForgeExcelConfig *queue_forge_config_ptr; // [rsp+A8h] [rbp-2F8h]
  const uint32_t *queue_forge_output_id; // [rsp+B0h] [rbp-2F0h]
  const std::vector<data::IdCountConfig> *__for_range_0; // [rsp+B8h] [rbp-2E8h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>> *proud_forge_config_map; // [rsp+C0h] [rbp-2E0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+C8h] [rbp-2D8h]
  ForgeQueue *forge_queue; // [rsp+D0h] [rbp-2D0h]
  const std::vector<data::IdCountConfig> *__for_range_2; // [rsp+D8h] [rbp-2C8h]
  proto_log::ItemLog *item_log_0; // [rsp+E0h] [rbp-2C0h]
  proto_log::ItemLog *item_log_1; // [rsp+E8h] [rbp-2B8h]
  const data::IdCountConfig *id_count_config_0; // [rsp+F0h] [rbp-2B0h]
  proto_log::ItemLog *item_log; // [rsp+F8h] [rbp-2A8h]
  const LifeEffectForgeReduceTime *reduce_time_config_ptr; // [rsp+100h] [rbp-2A0h]
  const LifeEffectForgeAddExtraProb *add_extra_prob_config_ptr; // [rsp+108h] [rbp-298h]
  const LifeEffectForgeReturnMaterial *return_material_config_ptr; // [rsp+110h] [rbp-290h]
  const data::IdCountConfig *id_count_config; // [rsp+118h] [rbp-288h]
  std::shared_ptr<google::protobuf::Message> v137; // [rsp+120h] [rbp-280h] BYREF
  std::vector<unsigned int> forge_queue_vec; // [rsp+130h] [rbp-270h] BYREF
  std::vector<unsigned int> removed_forge_queue_vec; // [rsp+150h] [rbp-250h] BYREF
  common::milog::MiLogStream v140; // [rsp+170h] [rbp-230h] BYREF
  common::milog::MiLogStream v141; // [rsp+190h] [rbp-210h] BYREF
  char v142[496]; // [rsp+1B0h] [rbp-1F0h] BYREF

  *(&__l._anon_0._M_allocated_capacity + 1) = (std::string::size_type)rsp_0;
  v4 = (unsigned __int64)v142;
  __l._anon_0._M_allocated_capacity = (std::string::size_type)v142;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(448LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "14 32 1 9 holer:247 48 4 12 forge_id:249 64 4 15 world_level:285 80 4 22 new_forge_queue_id:378 "
                        "96 4 25 max_reduce_time_ratio:394 112 4 22 output_stack_limit:312 128 8 8 iter:286 160 8 8 iter:"
                        "401 192 8 10 reason:386 224 16 21 formal_avatar_ptr:253 256 16 23 forge_start_log_ptr:458 288 16"
                        " 14 output_ptr:315 320 24 23 cost_item_param_vec:351 384 24 22 proud_skill_id_vec:395";
  *(_QWORD *)(v4 + 16) = PlayerForgeComp::startForge;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862729] = -219021312;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -218103808;
  v6[536862733] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( !PlayerBasicComp::isStateOpen(BasicComp, 0x25u) )
  {
    common::milog::MiLogStream::create(
      &v141,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      230);
    v8 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v141,
           (const char (*)[33])"OPEN_STATE_FORGE is locked. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v4 + 112) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::~MiLogStream(&v141);
    v3 = 141;
    goto LABEL_198;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v137);
  v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v137);
  isForgeSystemClosed = FeatureSwitchMgr::isForgeSystemClosed(&v9->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v137);
  if ( isForgeSystemClosed )
  {
    common::milog::MiLogStream::create(
      &v141,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      237);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      &v141,
      (const char (*)[36])"[FEATURE_SWITCH] ForgeSystem closed");
    common::milog::MiLogStream::~MiLogStream(&v141);
    v3 = 142;
    goto LABEL_198;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v137);
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v137)->feature_switch_mgr;
  v12 = proto::ForgeStartReq::forge_id(req);
  LOBYTE(p_feature_switch_mgr) = FeatureSwitchMgr::isForgeClosed(p_feature_switch_mgr, v12);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v137);
  if ( (_BYTE)p_feature_switch_mgr )
  {
    common::milog::MiLogStream::create(
      &v141,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      243);
    v13 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v141,
            (const char (*)[40])"[FEATURE_SWITCH] ForgeSystem forge_id: ");
    *(_DWORD *)(v4 + 112) = proto::ForgeStartReq::forge_id(req);
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 112));
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v14, (const char (*)[8])" closed");
    common::milog::MiLogStream::~MiLogStream(&v141);
    v3 = 142;
    goto LABEL_198;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v15 = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v141, v15);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0x7A0u, __l);
  std::string::~string(&v141);
  *(_DWORD *)(v4 + 48) = proto::ForgeStartReq::forge_id(req);
  forge_count = proto::ForgeStartReq::forge_count(req);
  avatar_id = proto::ForgeStartReq::avatar_id(req);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  AvatarComp = (unsigned int)Player::getAvatarComp(this->player_);
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 224), AvatarComp);
  if ( !forge_count || std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 224)) )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      258);
    v18 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
            &v140,
            (const char (*)[19])"invalid req, req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = -1;
    goto LABEL_197;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v137);
  v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v137);
  config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
                 &v19->design_config.txt_config_mgr.forge_config_mgr,
                 *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v137);
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      265);
    v20 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v140,
            (const char (*)[33])"findForgeExcelConfig fail! req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = 5;
    goto LABEL_197;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v21 = Player::getBasicComp(this->player_);
  Level = PlayerBasicComp::getLevel(v21);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->player_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->player_level >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->player_level);
  }
  if ( Level < config_ptr->player_level )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      272);
    v23 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v140,
            (const char (*)[31])"player level not enough. req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = 117;
    goto LABEL_197;
  }
  if ( *(char *)(((unsigned __int64)&config_ptr->is_default_show >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&config_ptr->is_default_show);
  if ( !config_ptr->is_default_show
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
          &this->unlock_forge_id_set_,
          (const unsigned int *)(v4 + 48))
    && !PlayerForgeComp::isUnlockByQuest(this, *(_DWORD *)(v4 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v141,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      281);
    v25 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            &v141,
            (const char (*)[30])"player don't unlock forge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v141);
    v3 = 692;
    goto LABEL_197;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v26 = Player::getBasicComp(this->player_);
  *(_DWORD *)(v4 + 64) = PlayerBasicComp::getWorldLevel(v26);
  M_current = std::vector<unsigned int>::end(&config_ptr->effective_world_levels)._M_current;
  v28._M_current = std::vector<unsigned int>::begin(&config_ptr->effective_world_levels)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                  v28,
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                  (const unsigned int *)(v4 + 64));
  *(std::vector<unsigned int>::const_iterator *)(v4 + 192) = std::vector<unsigned int>::end(&config_ptr->effective_world_levels);
  if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
         (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 128),
         (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v4 + 192)) )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      289);
    v29 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v140,
            (const char (*)[36])"player world level not match. req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = 673;
    goto LABEL_197;
  }
  v30 = std::map<unsigned int,ForgeQueue>::size(&this->forge_queue_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ForgeComp = Player::getForgeComp(this->player_);
  if ( v30 >= PlayerForgeComp::getMaxForgeQueueNum(ForgeComp) )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      296);
    v32 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v140,
            (const char (*)[27])"forge_queue is full! req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = 634;
    goto LABEL_197;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->queue_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->queue_num >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->queue_num);
  }
  if ( forge_count > config_ptr->queue_num )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      303);
    v33 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v140,
            (const char (*)[27])"forge_queue is full! req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v33, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = 635;
    goto LABEL_197;
  }
  output_id = &config_ptr->result_item_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v137);
  p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v137)->design_config.txt_config_mgr.material_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)output_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)output_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)output_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(output_id);
  }
  output_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *output_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v137);
  if ( output_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&output_config_ptr->stack_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&output_config_ptr->stack_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&output_config_ptr->stack_limit);
    }
    *(_DWORD *)(v4 + 112) = output_config_ptr->stack_limit;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->result_item_count);
    }
    output_future_stack = SAFE_MULTIPLY<unsigned int,unsigned int>(forge_count, config_ptr->result_item_count);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    ItemComp = (unsigned int)Player::getItemComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)output_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)output_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)output_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(output_id);
    }
    PlayerItemComp::findMaterial((PlayerItemComp *const)(v4 + 288), ItemComp);
    if ( std::operator!=<Material>((const std::shared_ptr<Material> *)(v4 + 288), 0LL) )
    {
      v36 = std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 288));
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v36);
      v37 = (unsigned __int64)(v36->_vptr_Item + 8);
      if ( *(_BYTE *)((v37 >> 3) + 0x7FFF8000) )
        __asan_report_load8(v36->_vptr_Item + 8);
      v38 = (*(__int64 (__fastcall **)(std::__shared_ptr_access<Material,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v37)(v36);
      output_future_stack = SAFE_ADD<unsigned int,unsigned int>(output_future_stack, v38);
    }
    __for_range = &this->forge_queue_map_;
    __for_end_0._M_current = (const data::IdCountConfig *)std::map<unsigned int,ForgeQueue>::begin(&this->forge_queue_map_)._M_node;
    *(std::map<unsigned int,ForgeQueue>::iterator *)(v4 + 192) = std::map<unsigned int,ForgeQueue>::end(&this->forge_queue_map_);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)&__for_end_0,
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)(v4 + 192)) )
    {
      v119 = std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> > *const)&__for_end_0);
      queue_id = std::get<0ul,unsigned int const,ForgeQueue>(v119);
      forge_queue_0 = (std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *)std::get<1ul,unsigned int const,ForgeQueue>(v119);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v137);
      p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v137)->design_config.txt_config_mgr.forge_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&forge_queue_0->forge_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&forge_queue_0->forge_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&forge_queue_0->forge_id);
      }
      queue_forge_config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
                                 p_forge_config_mgr,
                                 forge_queue_0->forge_id);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v137);
      if ( !queue_forge_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v141,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/forge/player_forge_comp.cpp",
          "startForge",
          326);
        v40 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v141,
                (const char (*)[38])"findForgeExcelConfig fail! forge_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &forge_queue_0->forge_id);
        common::milog::MiLogStream::~MiLogStream(&v141);
        v3 = 5;
        v41 = 0;
        goto LABEL_92;
      }
      queue_forge_output_id = &queue_forge_config_ptr->result_item_id;
      if ( *(_BYTE *)(((unsigned __int64)&queue_forge_config_ptr->result_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)queue_forge_config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&queue_forge_config_ptr->result_item_id >> 3)
                                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&queue_forge_config_ptr->result_item_id);
      }
      v42 = *queue_forge_output_id;
      if ( *(_BYTE *)(((unsigned __int64)output_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)output_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)output_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(output_id);
      }
      if ( v42 == *output_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&queue_forge_config_ptr->result_item_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&queue_forge_config_ptr->result_item_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&queue_forge_config_ptr->result_item_count);
        }
        result_item_count = queue_forge_config_ptr->result_item_count;
        if ( *(_BYTE *)(((unsigned __int64)&forge_queue_0->forge_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)forge_queue_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue_0->forge_count >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&forge_queue_0->forge_count);
        }
        v44 = forge_queue_0->forge_count;
        if ( *(_BYTE *)(((unsigned __int64)&forge_queue_0->taken_count >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)forge_queue_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue_0->taken_count >> 3)
                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&forge_queue_0->taken_count);
        }
        v45 = SAFE_MULTIPLY<unsigned int,unsigned int>(v44 - forge_queue_0->taken_count, result_item_count);
        output_future_stack = SAFE_ADD<unsigned int,unsigned int>(output_future_stack, v45);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> > *const)&__for_end_0);
    }
    if ( output_future_stack <= *(_DWORD *)(v4 + 112) )
    {
      v41 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v141,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/forge/player_forge_comp.cpp",
        "startForge",
        337);
      v46 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v141,
              (const char (*)[51])"output_future_stack exceed stack limit, output_id:");
      v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, output_id);
      v48 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v47, (const char (*)[15])", stack_limit:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, (const unsigned int *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream(&v141);
      v3 = 694;
      v41 = 0;
    }
LABEL_92:
    std::shared_ptr<Material>::~shared_ptr((std::shared_ptr<Material> *const)(v4 + 288));
    if ( v41 != 1 )
      goto LABEL_197;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->forge_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->forge_point >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->forge_point);
  }
  forge_point = config_ptr->forge_point;
  if ( PlayerForgeComp::tryConsumeForgePoint(this, forge_point, forge_count) )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      346);
    v49 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v140,
            (const char (*)[28])"forge_point is not enough: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v49, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = 674;
    goto LABEL_197;
  }
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 320));
  __for_range_0 = &config_ptr->material_items;
  __for_end_0._M_current = std::vector<data::IdCountConfig>::begin(&config_ptr->material_items)._M_current;
  *(std::vector<data::IdCountConfig>::const_iterator *)(v4 + 192) = std::vector<data::IdCountConfig>::end(__for_range_0);
  while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
            &__for_end_0,
            (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v4 + 192)) )
  {
    id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_end_0);
    p_count = &id_count_config->count;
    if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_count);
    }
    if ( !id_count_config->count )
    {
      common::milog::MiLogStream::create(
        &v140,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/forge/player_forge_comp.cpp",
        "startForge",
        356);
      v51 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              &v140,
              (const char (*)[33])"id_count_config.count is 0, req:");
      google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v51, (const std::string *)&v141);
      std::string::~string(&v141);
      common::milog::MiLogStream::~MiLogStream(&v140);
      v3 = -1;
      goto LABEL_196;
    }
    if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&id_count_config->id);
    }
    LODWORD(v137._M_ptr) = id_count_config->id;
    if ( *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)id_count_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config->count >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&id_count_config->count);
    }
    HIDWORD(v137._M_ptr) = SAFE_MULTIPLY<unsigned int,unsigned int>(id_count_config->count, forge_count);
    v137._M_refcount._M_pi = 0LL;
    std::vector<ItemParam>::push_back(
      (std::vector<ItemParam> *const)(v4 + 320),
      (std::vector<ItemParam>::value_type *)&v137);
    __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_end_0);
  }
  if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 320)) )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      363);
    v52 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v140,
            (const char (*)[35])"cost_item_param_vec is empty, req:");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v52, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = -1;
    goto LABEL_196;
  }
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->scoin_cost);
  }
  if ( config_ptr->scoin_cost )
  {
    LODWORD(v137._M_ptr) = 202;
    HIDWORD(v137._M_ptr) = SAFE_MULTIPLY<unsigned int,unsigned int>(config_ptr->scoin_cost, forge_count);
    v137._M_refcount._M_pi = 0LL;
    std::vector<ItemParam>::push_back(
      (std::vector<ItemParam> *const)(v4 + 320),
      (std::vector<ItemParam>::value_type *)&v137);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v53 = Player::getItemComp(this->player_);
  ret = PlayerItemComp::checkSubItemBatch(v53, (const std::vector<ItemParam> *)(v4 + 320));
  if ( ret )
  {
    v3 = ret;
    goto LABEL_196;
  }
  *(_DWORD *)(v4 + 80) = PlayerForgeComp::genNewForgeQueueId(this);
  if ( !*(_DWORD *)(v4 + 80)
    || common::tools::MiscUtils::isContains<std::map<unsigned int,ForgeQueue>,unsigned int>(
         &this->forge_queue_map_,
         (const unsigned int *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      381);
    v55 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            &v140,
            (const char (*)[31])"genNewForgeQueueId fail! req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v55, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = -1;
    goto LABEL_196;
  }
  SubItemReason::SubItemReason((SubItemReason *const)(v4 + 192), ACTION_REASON_FORGE_COST);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v56 = Player::getItemComp(this->player_);
  ret = PlayerItemComp::subItemBatch(v56, (const std::vector<ItemParam> *)(v4 + 320), (const SubItemReason *)(v4 + 192));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v140,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/forge/player_forge_comp.cpp",
      "startForge",
      390);
    v57 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v140, (const char (*)[15])"subItem! req: ");
    google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v57, (const std::string *)&v141);
    std::string::~string(&v141);
    common::milog::MiLogStream::~MiLogStream(&v140);
    v3 = ret;
    goto LABEL_196;
  }
  *(_DWORD *)(v4 + 96) = 0;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 384));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v137);
  proud_forge_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v137)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_forge_config_map;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v137);
  v58 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
  TalentComp = Avatar::getTalentComp(v58);
  TalentComp::getProudSkills(&removed_forge_queue_vec, TalentComp);
  __for_range_1 = &removed_forge_queue_vec;
  __for_begin_0._M_current = std::vector<unsigned int>::begin(&removed_forge_queue_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin_0, &__for_end) )
  {
    v60 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin_0);
    v61 = v60;
    if ( *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v60 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v60 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v60);
    }
    *(_DWORD *)(v4 + 112) = *v61;
    *(std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::const_iterator *)(v4 + 160) = std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::find(proud_forge_config_map, (const std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::key_type *)(v4 + 112));
    __for_end_0._M_current = (const data::IdCountConfig *)std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::end(proud_forge_config_map)._M_cur;
    if ( !std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> *)(v4 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> *)&__for_end_0) )
    {
      v62 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false> *const)(v4 + 160));
      reduce_time_config_ptr = std::get_if<LifeEffectForgeReduceTime,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>(&v62->second);
      if ( reduce_time_config_ptr )
      {
        if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
               &reduce_time_config_ptr->forge_type_set,
               &config_ptr->forge_type) )
        {
          v63 = std::max<float>((const float *)(v4 + 96), &reduce_time_config_ptr->reduce_ratio);
          v64 = v63;
          if ( *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v63 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v63 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v63);
          }
          *(_DWORD *)(v4 + 96) = *v64;
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v4 + 384),
            (const std::vector<unsigned int>::value_type *)(v4 + 112));
        }
      }
      else
      {
        v65 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false> *const)(v4 + 160));
        add_extra_prob_config_ptr = std::get_if<LifeEffectForgeAddExtraProb,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>(&v65->second);
        if ( add_extra_prob_config_ptr )
        {
          if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                  &add_extra_prob_config_ptr->forge_type_set,
                  &config_ptr->forge_type) )
            goto LABEL_145;
LABEL_140:
          std::vector<unsigned int>::push_back(
            (std::vector<unsigned int> *const)(v4 + 384),
            (const std::vector<unsigned int>::value_type *)(v4 + 112));
          goto LABEL_145;
        }
        v66 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false> *const)(v4 + 160));
        return_material_config_ptr = std::get_if<LifeEffectForgeReturnMaterial,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>(&v66->second);
        if ( return_material_config_ptr )
        {
          if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                 &return_material_config_ptr->forge_type_set,
                 &config_ptr->forge_type) )
          {
            goto LABEL_140;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v141,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/forge/player_forge_comp.cpp",
            "startForge",
            438);
          v67 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v141,
                  (const char (*)[38])"unknown forge effect, proud_skill_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, (const unsigned int *)(v4 + 112));
          common::milog::MiLogStream::~MiLogStream(&v141);
        }
      }
    }
LABEL_145:
    __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin_0);
  }
  std::vector<unsigned int>::~vector(&removed_forge_queue_vec);
  v68 = (char *)(v4 + 80);
  forge_queue = std::map<unsigned int,ForgeQueue>::operator[](
                  &this->forge_queue_map_,
                  (const std::map<unsigned int,ForgeQueue>::key_type *)(v4 + 80));
  if ( *(_BYTE *)(((unsigned __int64)&this->last_transaction_no_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_transaction_no_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_transaction_no_);
  }
  v69 = ++this->last_transaction_no_;
  v70 = *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000);
  if ( v70 != 0 && v70 <= 3 )
  {
    LOBYTE(v68) = v70 != 0;
    __asan_report_store4(forge_queue, v68, forge_queue);
  }
  forge_queue->transaction_no = v69;
  v71 = *(_DWORD *)(v4 + 80);
  v72 = *(_BYTE *)(((unsigned __int64)&forge_queue->queue_id >> 3) + 0x7FFF8000);
  LOBYTE(v68) = v72 != 0;
  v73 = (v72 != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 4) & 7) + 3) >= v72);
  if ( (_BYTE)v73 )
    __asan_report_store4(&forge_queue->queue_id, v68, v73);
  forge_queue->queue_id = v71;
  v74 = *(_DWORD *)(v4 + 48);
  v75 = *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000);
  if ( v75 != 0 && v75 <= 3 )
  {
    LOBYTE(v68) = v75 != 0;
    __asan_report_store4(&forge_queue->forge_id, v68, &forge_queue->forge_id);
  }
  forge_queue->forge_id = v74;
  v76 = (((_BYTE)forge_queue + 12) & 7u) + 3;
  v77 = (*(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v77 )
    __asan_report_store4(&forge_queue->forge_count, v76, v77);
  forge_queue->forge_count = forge_count;
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&forge_queue->finish_count, v76, &forge_queue->finish_count);
  }
  forge_queue->finish_count = 0;
  v78 = (*(_BYTE *)(((unsigned __int64)&forge_queue->taken_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->taken_count >> 3) + 0x7FFF8000));
  if ( (_BYTE)v78 )
    __asan_report_store4(&forge_queue->taken_count, (((_BYTE)forge_queue + 20) & 7u) + 3, v78);
  forge_queue->taken_count = 0;
  Now = (unsigned int)common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&forge_queue->start_time, Now, &forge_queue->start_time);
  }
  forge_queue->start_time = Now;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->forge_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->forge_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->forge_time);
  }
  *(float *)(v4 + 112) = (float)((float)(1.0 - *(float *)(v4 + 96)) * (float)(int)config_ptr->forge_time) + 0.5;
  __a = 1.0;
  v80 = (float *)std::max<float>(&__a, (const float *)(v4 + 112));
  v81 = v80;
  if ( *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v80 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v80 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v80);
  }
  v82 = (int)*v81;
  v83 = (*(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)forge_queue + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3) + 0x7FFF8000));
  if ( (_BYTE)v83 )
  {
    v82 = (_DWORD)forge_queue + 28;
    __asan_report_store4(&forge_queue->single_time_cost, (((_BYTE)forge_queue + 28) & 7u) + 3, v83);
  }
  forge_queue->single_time_cost = v82;
  v84 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v4 + 384));
  std::vector<unsigned int>::operator=(&forge_queue->proud_skill_id_vec, v84);
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&forge_queue->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&forge_queue->avatar_id, v84, &forge_queue->avatar_id);
  }
  forge_queue->avatar_id = avatar_id;
  common::milog::MiLogStream::create(
    &v140,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/forge/player_forge_comp.cpp",
    "startForge",
    453);
  v85 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v140, (const char (*)[13])"forge start:");
  v86 = operator<<(v85, forge_queue);
  v87 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v86, (const char (*)[7])" req: ");
  google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v141, &req->google::protobuf::Message);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v87, (const std::string *)&v141);
  std::string::~string(&v141);
  common::milog::MiLogStream::~MiLogStream(&v140);
  memset(&removed_forge_queue_vec, 0, sizeof(removed_forge_queue_vec));
  std::vector<unsigned int>::vector(&removed_forge_queue_vec);
  *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 80);
  __la._M_array = (std::initializer_list<unsigned int>::iterator)(v4 + 112);
  __la._M_len = 1LL;
  std::allocator<unsigned int>::allocator(&v105);
  std::vector<unsigned int>::vector(&forge_queue_vec, __la, &v105);
  PlayerForgeComp::notifyForgeQueueData(this, &forge_queue_vec, &removed_forge_queue_vec);
  std::vector<unsigned int>::~vector(&forge_queue_vec);
  std::allocator<unsigned int>::~allocator(&v105);
  std::vector<unsigned int>::~vector(&removed_forge_queue_vec);
  PlayerForgeComp::tryUpdateForgeQueues(this);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyForgeStart>();
  v88 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  proto_log::PlayerLogBodyForgeStart::set_avatar_id(v88, avatar_id);
  v89 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  v90 = proto_log::PlayerLogBodyForgeStart::mutable_proud_skill_id_list(v89);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&forge_queue->proud_skill_id_vec, v90);
  v91 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  proto_log::PlayerLogBodyForgeStart::set_forge_id(v91, *(_DWORD *)(v4 + 48));
  __for_range_2 = &config_ptr->material_items;
  *(std::vector<data::IdCountConfig>::const_iterator *)(v4 + 160) = std::vector<data::IdCountConfig>::begin(&config_ptr->material_items);
  __for_end_0._M_current = std::vector<data::IdCountConfig>::end(__for_range_2)._M_current;
  while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
            (const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *)(v4 + 160),
            &__for_end_0) )
  {
    id_count_config_0 = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v4 + 160));
    v92 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
    item_log = proto_log::PlayerLogBodyForgeStart::add_input_item(v92);
    if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&id_count_config_0->id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&id_count_config_0->id);
    }
    proto_log::ItemLog::set_item_id(item_log, id_count_config_0->id);
    if ( *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)id_count_config_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&id_count_config_0->count >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&id_count_config_0->count);
    }
    proto_log::ItemLog::set_count(item_log, id_count_config_0->count);
    __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::IdCountConfig*,std::vector<data::IdCountConfig> > *const)(v4 + 160));
  }
  v93 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  item_log_0 = proto_log::PlayerLogBodyForgeStart::add_output_item(v93);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->result_item_id);
  }
  proto_log::ItemLog::set_item_id(item_log_0, config_ptr->result_item_id);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->result_item_count);
  }
  proto_log::ItemLog::set_count(item_log_0, config_ptr->result_item_count);
  v94 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->forge_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->forge_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->forge_type);
  }
  proto_log::PlayerLogBodyForgeStart::set_target_type(v94, config_ptr->forge_type);
  v95 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)forge_queue + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&forge_queue->single_time_cost);
  }
  single_time_cost = forge_queue->single_time_cost;
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)forge_queue + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&forge_queue->forge_count);
  }
  proto_log::PlayerLogBodyForgeStart::set_target_time(v95, single_time_cost * forge_queue->forge_count);
  v97 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  if ( *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(forge_queue);
  }
  proto_log::PlayerLogBodyForgeStart::set_transaction_no(v97, forge_queue->transaction_no);
  v98 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 256));
  item_log_1 = proto_log::PlayerLogBodyForgeStart::add_target_item(v98);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3)
                                                              + 0x7FFF8000) )
  {
    __asan_report_load4(&config_ptr->result_item_id);
  }
  proto_log::ItemLog::set_item_id(item_log_1, config_ptr->result_item_id);
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->result_item_count);
  }
  proto_log::ItemLog::set_count(item_log_1, forge_count * config_ptr->result_item_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&v137, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyForgeStart,void>(
    (std::shared_ptr<google::protobuf::Message> *const)(v4 + 288),
    (const std::shared_ptr<proto_log::PlayerLogBodyForgeStart> *)(v4 + 256));
  Player::printStatLog(player, (MessagePtr *)(v4 + 288), &v137, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 288));
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v137);
  v3 = 0;
  std::shared_ptr<proto_log::PlayerLogBodyForgeStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyForgeStart> *const)(v4 + 256));
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 384));
LABEL_196:
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 320));
LABEL_197:
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 224));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
LABEL_198:
  result = v3;
  if ( __l._anon_0._M_allocated_capacity == v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 488: range 000000001664F96E-000000001664FEB4
void __fastcall PlayerForgeComp::foreachProudForgeConfig<LifeEffectForgeAddExtraProb,PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeAddExtraProb const&)#1}>(
        Player *player,
        const ForgeQueue *forge_queue,
        PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeAddExtraProb&)> func)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  ForgeExcelConfigMgr *p_forge_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false>::pointer v13; // rax
  bool v14; // al
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-108h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-100h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> __y; // [rsp+38h] [rbp-F8h] BYREF
  const data::ForgeExcelConfig *forge_config_ptr; // [rsp+40h] [rbp-F0h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>> *forge_config_map; // [rsp+48h] [rbp-E8h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-E0h]
  const LifeEffectForgeAddExtraProb *config_ptr; // [rsp+58h] [rbp-D8h]
  std::shared_ptr<Config> v23; // [rsp+60h] [rbp-D0h] BYREF
  common::milog::MiLogStream v24; // [rsp+70h] [rbp-C0h] BYREF
  char v25[160]; // [rsp+90h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 14 forge_type:496 48 4 18 proud_skill_id:499 64 8 8 iter:501 96 8 8 func:488";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::foreachProudForgeConfig<LifeEffectForgeAddExtraProb,PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeAddExtraProb const&)#1}>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeAddExtraProb&)> *)(v3 + 96) = func;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.forge_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&forge_queue->forge_id);
  }
  forge_config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, forge_queue->forge_id);
  std::shared_ptr<Config>::~shared_ptr(&v23);
  if ( forge_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&forge_config_ptr->forge_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_config_ptr->forge_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&forge_config_ptr->forge_type);
    }
    *(_DWORD *)(v3 + 32) = forge_config_ptr->forge_type;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v23);
    forge_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_forge_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v23);
    __for_range = &forge_queue->proud_skill_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&forge_queue->proud_skill_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&forge_queue->proud_skill_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v3 + 48) = *v11;
      *(std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::find(forge_config_map, (const std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::key_type *)(v3 + 48));
      __y._M_cur = std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::end(forge_config_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> *)(v3 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/forge/player_forge_comp.cpp",
          "foreachProudForgeConfig",
          504);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v24,
                (const char (*)[34])"config not found! proud_skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false> *const)(v3 + 64));
        config_ptr = std::get_if<LifeEffectForgeAddExtraProb,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>(&v13->second);
        if ( config_ptr )
        {
          v14 = !std::set<unsigned int>::empty(&config_ptr->forge_type_set)
             && !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                   &config_ptr->forge_type_set,
                   (const unsigned int *)(v3 + 32));
          if ( !v14
            && PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeAddExtraProb const&)#1}::operator()(
                 (const PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeAddExtraProb&)> *const)(v3 + 96),
                 *(_DWORD *)(v3 + 48),
                 config_ptr) )
          {
            break;
          }
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "foreachProudForgeConfig",
      493);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v24,
           (const char (*)[44])"findForgeExcelConfig fail! forge_queue_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &forge_queue->forge_id);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v24);
  }
  if ( v25 == (char *)v3 )
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

// Line 488: range 000000001664FEB6-000000001665042F
void __fastcall PlayerForgeComp::foreachProudForgeConfig<LifeEffectForgeReturnMaterial,PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeReturnMaterial const&)#2}>(
        Player *player,
        const ForgeQueue *forge_queue,
        PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeReturnMaterial&)> func)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ForgeExcelConfigMgr *p_forge_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false>::pointer v13; // rax
  bool v14; // al
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-128h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> __y; // [rsp+28h] [rbp-118h] BYREF
  const data::ForgeExcelConfig *forge_config_ptr; // [rsp+30h] [rbp-110h]
  const std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>> *forge_config_map; // [rsp+38h] [rbp-108h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-100h]
  const LifeEffectForgeReturnMaterial *config_ptr; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<Config> v22; // [rsp+50h] [rbp-F0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-E0h] BYREF
  char v24[192]; // [rsp+80h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 14 forge_type:496 48 4 18 proud_skill_id:499 64 8 8 iter:501 96 32 8 func:488";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::foreachProudForgeConfig<LifeEffectForgeReturnMaterial,PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeReturnMaterial const&)#2}>;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  *(PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeReturnMaterial&)> *)(v3 + 96) = func;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.forge_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&forge_queue->forge_id);
  }
  forge_config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, forge_queue->forge_id);
  std::shared_ptr<Config>::~shared_ptr(&v22);
  if ( forge_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&forge_config_ptr->forge_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_config_ptr->forge_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&forge_config_ptr->forge_type);
    }
    *(_DWORD *)(v3 + 32) = forge_config_ptr->forge_type;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v22);
    forge_config_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22)->design_config.txt_config_mgr.avatar_talent_config_mgr.proud_forge_config_map;
    std::shared_ptr<Config>::~shared_ptr(&v22);
    __for_range = &forge_queue->proud_skill_id_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&forge_queue->proud_skill_id_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&forge_queue->proud_skill_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      *(_DWORD *)(v3 + 48) = *v11;
      *(std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::find(forge_config_map, (const std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::key_type *)(v3 + 48));
      __y._M_cur = std::unordered_map<unsigned int,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>::end(forge_config_map)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false> *)(v3 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/forge/player_forge_comp.cpp",
          "foreachProudForgeConfig",
          504);
        v12 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v23,
                (const char (*)[34])"config not found! proud_skill_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v23);
      }
      else
      {
        v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::variant<LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial> >,false,false> *const)(v3 + 64));
        config_ptr = std::get_if<LifeEffectForgeReturnMaterial,LifeEffectForgeReduceTime,LifeEffectForgeAddExtraProb,LifeEffectForgeReturnMaterial>(&v13->second);
        if ( config_ptr )
        {
          v14 = !std::set<unsigned int>::empty(&config_ptr->forge_type_set)
             && !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                   &config_ptr->forge_type_set,
                   (const unsigned int *)(v3 + 32));
          if ( !v14
            && PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeReturnMaterial const&)#2}::operator()(
                 (const PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeReturnMaterial&)> *const)(v3 + 96),
                 *(_DWORD *)(v3 + 48),
                 config_ptr) )
          {
            break;
          }
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "foreachProudForgeConfig",
      493);
    v7 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v23,
           (const char (*)[44])"findForgeExcelConfig fail! forge_queue_id: ");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &forge_queue->forge_id);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" player:");
    operator<<(v9, player);
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  if ( v24 == (char *)v3 )
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

// Line 525: range 000000001662D214-000000001662FAAF
int32_t __cdecl PlayerForgeComp::manipulateForge(
        PlayerForgeComp *const this,
        const proto::ForgeQueueManipulateReq *req,
        proto::ForgeQueueManipulateRsp *rsp_0)
{
  int32_t v3; // r14d
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  proto::ForgeQueueManipulateType v8; // eax
  common::milog::MiLogStream *v9; // rax
  const data::ForgeExcelConfigMgrBase *p_forge_config_mgr; // rdi
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // esi
  SelectType v13; // ebx
  uint32_t *p_result_item_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rdi
  __int64 v16; // rdx
  uint32_t v17; // r9d
  uint32_t main_random_drop_id; // esi
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  int v25; // ebx
  unsigned int count; // ebx
  unsigned int *v27; // rdi
  SelectType v28; // ebx
  const ItemParam *v29; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v30; // rdi
  __int64 v31; // rdx
  common::milog::MiLogStream *v32; // rax
  double *v33; // rdx
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  unsigned int *v35; // rdi
  SelectType v36; // ebx
  uint32_t *p_item_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v38; // rdi
  __int64 v39; // rdx
  common::milog::MiLogStream *v41; // rax
  PlayerItemComp *ItemComp; // rax
  char *v43; // rsi
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  PlayerItemComp *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  PlayerItemComp *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  PlayerItemComp *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  PlayerItemComp *v59; // rax
  PlayerItemComp *v60; // rax
  PlayerItemComp *v61; // rax
  int finish_count; // edi
  __int64 v63; // rdx
  PlayerEventComp *EventComp; // rbx
  unsigned int *v65; // r8
  std::map<unsigned int,unsigned int> *v66; // r9
  proto_log::PlayerLogBodyForgeGetOutput *v67; // rdi
  proto_log::PlayerLogBodyForgeGetOutput *p_scoin_cost; // rdi
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v69; // rax
  uint32_t result_item_count; // ebx
  uint32_t UnfinishCount; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v72; // rax
  google::protobuf::RepeatedPtrField<proto_log::ItemLog> *v73; // rbx
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v74; // rax
  google::protobuf::RepeatedPtrField<proto_log::ItemLog> *v75; // rbx
  Player *player; // rbx
  PlayerBasicComp *v78; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v79; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v80; // rax
  google::protobuf::uint32 v81; // edx
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v82; // rbx
  int Now; // esi
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // rbx
  uint32_t TotalFinishTime; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v86; // rbx
  uint32_t v87; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v88; // rax
  google::protobuf::RepeatedPtrField<proto_log::ItemLog> *v89; // rbx
  Player *v90; // rbx
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v91; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v92; // rax
  google::protobuf::RepeatedPtrField<proto::ItemParam> *v93; // rax
  std::string __l; // [rsp+0h] [rbp-840h]
  std::string __la; // [rsp+0h] [rbp-840h]
  std::initializer_list<unsigned int> v97; // [rsp+40h] [rbp-800h]
  std::allocator<unsigned int> __a; // [rsp+7Eh] [rbp-7C2h] BYREF
  bool is_stop_forge; // [rsp+7Fh] [rbp-7C1h]
  uint32_t rand_count; // [rsp+80h] [rbp-7C0h]
  uint32_t item_count; // [rsp+84h] [rbp-7BCh]
  int32_t ret_0; // [rsp+88h] [rbp-7B8h]
  int32_t ret; // [rsp+8Ch] [rbp-7B4h]
  std::vector<data::RandomItemConfig>::const_iterator __for_begin_0; // [rsp+90h] [rbp-7B0h] BYREF
  std::vector<data::RandomItemConfig>::const_iterator __for_end_0; // [rsp+98h] [rbp-7A8h] BYREF
  std::vector<ItemParam>::iterator __for_end; // [rsp+A0h] [rbp-7A0h] BYREF
  ForgeQueue *forge_queue; // [rsp+A8h] [rbp-798h]
  const data::ForgeExcelConfig *config_ptr; // [rsp+B0h] [rbp-790h]
  std::vector<ItemParam> *__for_range; // [rsp+B8h] [rbp-788h]
  const ItemParam *item_param; // [rsp+C0h] [rbp-780h]
  const std::vector<data::RandomItemConfig> *rand_config_vec; // [rsp+C8h] [rbp-778h]
  const std::vector<data::RandomItemConfig> *__for_range_0; // [rsp+D0h] [rbp-770h]
  const data::RandomItemConfig *random_item_config; // [rsp+D8h] [rbp-768h]
  double probability; // [rsp+E0h] [rbp-760h]
  proto_log::ForgeOutputItem *forge_output_item; // [rsp+E8h] [rbp-758h]
  std::shared_ptr<PlayerForgeEvent> __r; // [rsp+F0h] [rbp-750h] BYREF
  std::shared_ptr<google::protobuf::Message> v119; // [rsp+100h] [rbp-740h] BYREF
  common::milog::MiLogStream v120; // [rsp+110h] [rbp-730h] BYREF
  std::string v121; // [rsp+130h] [rbp-710h] BYREF
  char v122[1776]; // [rsp+150h] [rbp-6F0h] BYREF

  v4 = (unsigned __int64)v122;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_5(1728LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "28 48 1 10 holder:526 64 1 10 holder:762 80 4 18 forge_queue_id:528 96 4 17 takable_count:540 11"
                        "2 4 22 max_add_extra_prob:583 128 8 8 iter:532 160 8 17 output_result:567 192 16 24 forge_output"
                        "_log_ptr:745 224 16 24 forge_finish_log_ptr:763 256 24 24 total_item_param_vec:668 320 24 30 mai"
                        "n_output_item_param_vec:669 384 24 29 sub_output_item_param_vec:670 448 24 25 return_item_param_"
                        "vec:671 512 24 17 action_reason:679 576 24 24 return_action_reason:680 640 24 26 main_output_res"
                        "ult_vec:717 704 24 25 sub_output_result_vec:718 768 24 28 return_output_result_vec:719 832 24 17"
                        " action_reason:564 896 24 19 drop_result_vec:566 960 48 17 main_item_map:549 1040 48 19 random_i"
                        "tem_map:550 1120 48 16 sub_item_map:551 1200 48 19 return_item_map:552 1280 48 24 main_output_it"
                        "em_map:654 1360 48 19 output_item_map:658 1440 48 18 total_item_map:662 1520 144 16 distribution:598";
  *(_QWORD *)(v4 + 16) = PlayerForgeComp::manipulateForge;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -234556927;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -219021312;
  v6[536862727] = -219021312;
  v6[536862728] = -234881024;
  v6[536862729] = -218959118;
  v6[536862730] = -234881024;
  v6[536862731] = -218959118;
  v6[536862732] = -234881024;
  v6[536862733] = -218959118;
  v6[536862734] = -234881024;
  v6[536862735] = -218959118;
  v6[536862736] = -234881024;
  v6[536862737] = -218959118;
  v6[536862738] = -234881024;
  v6[536862739] = -218959118;
  v6[536862740] = -234881024;
  v6[536862741] = -218959118;
  v6[536862742] = -234881024;
  v6[536862743] = -218959118;
  v6[536862744] = -234881024;
  v6[536862745] = -218959118;
  v6[536862746] = -234881024;
  v6[536862747] = -218959118;
  v6[536862748] = -234881024;
  v6[536862749] = -218959118;
  v6[536862751] = -219021312;
  v6[536862752] = 62194;
  v6[536862754] = -218959118;
  v6[536862756] = -219021312;
  v6[536862757] = 62194;
  v6[536862759] = -218959118;
  v6[536862761] = -219021312;
  v6[536862762] = 62194;
  v6[536862764] = -218959118;
  v6[536862766] = -219021312;
  v6[536862767] = 62194;
  v6[536862772] = -202116109;
  v6[536862773] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v121, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0x7A1u, __l);
  std::string::~string(&v121);
  *(_DWORD *)(v4 + 80) = proto::ForgeQueueManipulateReq::forge_queue_id(req);
  is_stop_forge = proto::ForgeQueueManipulateReq::manipulate_type(req) == FORGE_QUEUE_MANIPULATE_TYPE_STOP_FORGE;
  v8 = proto::ForgeQueueManipulateReq::manipulate_type(req);
  proto::ForgeQueueManipulateRsp::set_manipulate_type(rsp_0, v8);
  *(std::map<unsigned int,ForgeQueue>::iterator *)(v4 + 128) = std::map<unsigned int,ForgeQueue>::find(
                                                                 &this->forge_queue_map_,
                                                                 (const std::map<unsigned int,ForgeQueue>::key_type *)(v4 + 80));
  *(std::map<unsigned int,ForgeQueue>::iterator *)(v4 + 160) = std::map<unsigned int,ForgeQueue>::end(&this->forge_queue_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)(v4 + 128),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)(v4 + 160)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v121,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/forge/player_forge_comp.cpp",
      "manipulateForge",
      535);
    v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           (common::milog::MiLogStream *const)&v121,
           (const char (*)[40])"forge queue not found! forge_queue_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v121);
    v3 = 636;
  }
  else
  {
    forge_queue = &std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> > *const)(v4 + 128))->second;
    *(_DWORD *)(v4 + 96) = ForgeQueue::getTakableCount(forge_queue);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v119);
    p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v119)->design_config.txt_config_mgr.forge_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_forge_config_mgr = (const data::ForgeExcelConfigMgrBase *)&forge_queue->forge_id;
      __asan_report_load4(&forge_queue->forge_id);
    }
    config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, forge_queue->forge_id);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v119);
    if ( config_ptr )
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 960));
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 1040));
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 1120));
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 1200));
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->result_item_id);
      }
      if ( config_ptr->result_item_id )
      {
        v12 = *(_DWORD *)(v4 + 96);
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->result_item_count);
        }
        v13 = SAFE_MULTIPLY<unsigned int,unsigned int>(config_ptr->result_item_count, v12);
        p_result_item_id = &config_ptr->result_item_id;
        v15 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v4 + 960),
                &config_ptr->result_item_id);
        v16 = *(unsigned __int8 *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
        if ( (_BYTE)v16 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= (char)v16 )
        {
          LOBYTE(p_result_item_id) = (_BYTE)v16 != 0;
          __asan_report_store4(v15, p_result_item_id, v16);
        }
        *v15 = v13;
      }
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->main_random_drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->main_random_drop_id >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->main_random_drop_id);
      }
      if ( !config_ptr->main_random_drop_id || !*(_DWORD *)(v4 + 96) )
        goto LABEL_155;
      ActionReason::ActionReason((ActionReason *const)(v4 + 832), ACTION_REASON_FORGE_OUTPUT, ITEM_LIMIT_FORGE_DROP);
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 896));
      v17 = *(_DWORD *)(v4 + 96);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->main_random_drop_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->main_random_drop_id >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->main_random_drop_id);
      }
      main_random_drop_id = config_ptr->main_random_drop_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(OutputResult *)(v4 + 160) = DropUtils::dropItems(
                                      this->player_,
                                      main_random_drop_id,
                                      v17,
                                      (const ActionReason *)(v4 + 832),
                                      (std::vector<ItemParam> *)(v4 + 896));
      if ( *(_DWORD *)(v4 + 160) )
      {
        LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v4 + 160));
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&v121,
          &common::milog::MiLogDefault::default_log_obj_,
          LogLevel,
          "./src/player/forge/player_forge_comp.cpp",
          "manipulateForge",
          570);
        v20 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                (common::milog::MiLogStream *const)&v121,
                (const char (*)[25])"dropItems fail, drop_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                &config_ptr->main_random_drop_id);
        v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])" ret:");
        v23 = common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v4 + 160));
        v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v24, this->player_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v121);
        v3 = *(_DWORD *)(v4 + 160);
        v25 = 0;
      }
      else
      {
        __for_range = (std::vector<ItemParam> *)(v4 + 896);
        __for_end_0._M_current = (const data::RandomItemConfig *)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 896))._M_current;
        __for_end._M_current = std::vector<ItemParam>::end((std::vector<ItemParam> *const)(v4 + 896))._M_current;
        while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                  (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end_0,
                  &__for_end) )
        {
          item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_end_0);
          if ( *(_BYTE *)(((unsigned __int64)&item_param->count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)item_param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_param->count >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&item_param->count);
          }
          count = item_param->count;
          v27 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v4 + 1040),
                  &item_param->item_id);
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v27);
          }
          v28 = SAFE_ADD<unsigned int,unsigned int>(*v27, count);
          v29 = item_param;
          v30 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v4 + 1040),
                  &item_param->item_id);
          v31 = *(unsigned __int8 *)(((unsigned __int64)v30 >> 3) + 0x7FFF8000);
          if ( (_BYTE)v31 != 0 && (char)(((unsigned __int8)v30 & 7) + 3) >= (char)v31 )
          {
            LOBYTE(v29) = (_BYTE)v31 != 0;
            __asan_report_store4(v30, v29, v31);
          }
          *v30 = v28;
          __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_end_0);
        }
        v25 = 1;
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 896));
      if ( v25 == 1 )
      {
LABEL_155:
        if ( *(_DWORD *)(v4 + 96) )
        {
          *(_DWORD *)(v4 + 112) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          PlayerForgeComp::foreachProudForgeConfig<LifeEffectForgeAddExtraProb,PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeAddExtraProb const&)#1}>(
            this->player_,
            forge_queue,
            (PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeAddExtraProb&)>)(v4 + 112));
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v121,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/forge/player_forge_comp.cpp",
            "manipulateForge",
            589);
          v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                  (common::milog::MiLogStream *const)&v121,
                  (const char (*)[20])"max_add_extra_prob:");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v32, (const float *)(v4 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v121);
          rand_config_vec = &config_ptr->random_items;
          __for_range_0 = &config_ptr->random_items;
          __for_begin_0._M_current = std::vector<data::RandomItemConfig>::begin(&config_ptr->random_items)._M_current;
          __for_end_0._M_current = std::vector<data::RandomItemConfig>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>(
                    &__for_begin_0,
                    &__for_end_0) )
          {
            random_item_config = __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator*(&__for_begin_0);
            if ( *(_BYTE *)(((unsigned __int64)&random_item_config->weight >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&random_item_config->weight >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&random_item_config->weight);
            }
            probability = (double)(int)random_item_config->weight / 10000.0;
            *(double *)(v4 + 160) = *(float *)(v4 + 112) + probability;
            __for_end._M_current = (ItemParam *)0x3FF0000000000000LL;
            v33 = (double *)std::min<double>((const double *)&__for_end, (const double *)(v4 + 160));
            if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
              __asan_report_load8(v33);
            probability = *v33;
            std::binomial_distribution<unsigned int>::binomial_distribution(
              (std::binomial_distribution<unsigned int> *const)(v4 + 1520),
              *(_DWORD *)(v4 + 96),
              probability);
            RandGenerator = common::tools::RandomUtils::getRandGenerator();
            rand_count = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                           (std::binomial_distribution<unsigned int> *const)(v4 + 1520),
                           RandGenerator);
            if ( *(_BYTE *)(((unsigned __int64)&random_item_config->count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)random_item_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&random_item_config->count >> 3)
                                                                                + 0x7FFF8000) )
            {
              __asan_report_load4(&random_item_config->count);
            }
            item_count = SAFE_MULTIPLY<unsigned int,unsigned int>(random_item_config->count, rand_count);
            v35 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v4 + 1120),
                    &random_item_config->item_id);
            if ( *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v35 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v35);
            }
            v36 = SAFE_ADD<unsigned int,unsigned int>(*v35, item_count);
            p_item_id = &random_item_config->item_id;
            v38 = std::map<unsigned int,unsigned int>::operator[](
                    (std::map<unsigned int,unsigned int> *const)(v4 + 1120),
                    &random_item_config->item_id);
            v39 = *(unsigned __int8 *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000);
            if ( (_BYTE)v39 != 0 && (char)(((unsigned __int8)v38 & 7) + 3) >= (char)v39 )
            {
              LOBYTE(p_item_id) = (_BYTE)v39 != 0;
              __asan_report_store4(v38, p_item_id, v39);
            }
            *v38 = v36;
            __gnu_cxx::__normal_iterator<data::RandomItemConfig const*,std::vector<data::RandomItemConfig>>::operator++(&__for_begin_0);
          }
        }
        if ( is_stop_forge
          && (ret_0 = PlayerForgeComp::calcForgeQueueReturnItems(
                        this,
                        forge_queue,
                        (PlayerForgeComp::ItemMap *)(v4 + 1200))) != 0 )
        {
          v3 = ret_0;
        }
        else
        {
          if ( *(_DWORD *)(v4 + 96) )
          {
            v121._M_dataplus._M_p = (std::string::pointer)this;
            v121._M_string_length = (std::string::size_type)forge_queue;
            *(_DWORD *)v121._anon_0._M_local_buf = *(_DWORD *)(v4 + 96);
            *(&v121._anon_0._M_allocated_capacity + 1) = v4 + 1200;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            PlayerForgeComp::foreachProudForgeConfig<LifeEffectForgeReturnMaterial,PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeReturnMaterial const&)#2}>(
              this->player_,
              forge_queue,
              (PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeReturnMaterial&)>)v121);
          }
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 1280));
          PlayerForgeComp::mergeItemMap(
            this,
            (PlayerForgeComp::ItemMap *)(v4 + 1280),
            (const PlayerForgeComp::ItemMap *)(v4 + 960));
          PlayerForgeComp::mergeItemMap(
            this,
            (PlayerForgeComp::ItemMap *)(v4 + 1280),
            (const PlayerForgeComp::ItemMap *)(v4 + 1040));
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 1360));
          PlayerForgeComp::mergeItemMap(
            this,
            (PlayerForgeComp::ItemMap *)(v4 + 1360),
            (const PlayerForgeComp::ItemMap *)(v4 + 1280));
          PlayerForgeComp::mergeItemMap(
            this,
            (PlayerForgeComp::ItemMap *)(v4 + 1360),
            (const PlayerForgeComp::ItemMap *)(v4 + 1120));
          std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 1440));
          PlayerForgeComp::mergeItemMap(
            this,
            (PlayerForgeComp::ItemMap *)(v4 + 1440),
            (const PlayerForgeComp::ItemMap *)(v4 + 1280));
          PlayerForgeComp::mergeItemMap(
            this,
            (PlayerForgeComp::ItemMap *)(v4 + 1440),
            (const PlayerForgeComp::ItemMap *)(v4 + 1120));
          PlayerForgeComp::mergeItemMap(
            this,
            (PlayerForgeComp::ItemMap *)(v4 + 1440),
            (const PlayerForgeComp::ItemMap *)(v4 + 1200));
          ItemParam::mapToItemParamVec(
            (std::vector<ItemParam> *)(v4 + 256),
            (const std::map<unsigned int,unsigned int> *)(v4 + 1440),
            0);
          ItemParam::mapToItemParamVec(
            (std::vector<ItemParam> *)(v4 + 320),
            (const std::map<unsigned int,unsigned int> *)(v4 + 1280),
            0);
          ItemParam::mapToItemParamVec(
            (std::vector<ItemParam> *)(v4 + 384),
            (const std::map<unsigned int,unsigned int> *)(v4 + 1120),
            0);
          ItemParam::mapToItemParamVec(
            (std::vector<ItemParam> *)(v4 + 448),
            (const std::map<unsigned int,unsigned int> *)(v4 + 1200),
            0);
          if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 256))
            || std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 320))
            && std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 384))
            && std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 448)) )
          {
            common::milog::MiLogStream::create(
              &v120,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/forge/player_forge_comp.cpp",
              "manipulateForge",
              675);
            v41 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v120,
                    (const char (*)[20])"forge queue empty! ");
            operator<<(v41, forge_queue);
            common::milog::MiLogStream::~MiLogStream(&v120);
            v3 = 637;
          }
          else
          {
            ActionReason::ActionReason(
              (ActionReason *const)(v4 + 512),
              ACTION_REASON_FORGE_OUTPUT,
              ITEM_LIMIT_UNLIMITED);
            ActionReason::ActionReason(
              (ActionReason *const)(v4 + 576),
              ACTION_REASON_FORGE_RETURN,
              ITEM_LIMIT_UNLIMITED);
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->player_);
            ItemComp = Player::getItemComp(this->player_);
            v43 = (char *)(v4 + 256);
            ret = PlayerItemComp::checkAddItemBatch(
                    ItemComp,
                    (const std::vector<ItemParam> *)(v4 + 256),
                    (const ActionReason *)(v4 + 512));
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v120,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/forge/player_forge_comp.cpp",
                "manipulateForge",
                685);
              v44 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      &v120,
                      (const char (*)[25])"checkAddItemBatch fail! ");
              v45 = operator<<(v44, forge_queue);
              v46 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      v45,
                      (const char (*)[17])" total_item_map:");
              common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                v46,
                (const std::map<unsigned int,unsigned int> *)(v4 + 1440));
              common::milog::MiLogStream::~MiLogStream(&v120);
              v3 = ret;
            }
            else
            {
              if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 320)) )
                goto LABEL_156;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              v47 = Player::getItemComp(this->player_);
              v43 = (char *)(v4 + 320);
              ret = PlayerItemComp::checkAddItemBatch(
                      v47,
                      (const std::vector<ItemParam> *)(v4 + 320),
                      (const ActionReason *)(v4 + 512));
              if ( ret )
              {
                common::milog::MiLogStream::create(
                  &v120,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/player/forge/player_forge_comp.cpp",
                  "manipulateForge",
                  694);
                v48 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                        &v120,
                        (const char (*)[25])"checkAddItemBatch fail! ");
                v49 = operator<<(v48, forge_queue);
                v50 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                        v49,
                        (const char (*)[29])" main_output_item_param_vec:");
                common::milog::MiLogStream::operator<<<ItemParam>(v50, (const std::vector<ItemParam> *)(v4 + 320));
                common::milog::MiLogStream::~MiLogStream(&v120);
                v3 = ret;
              }
              else
              {
                if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 384)) )
                  goto LABEL_157;
LABEL_156:
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                v51 = Player::getItemComp(this->player_);
                v43 = (char *)(v4 + 384);
                ret = PlayerItemComp::checkAddItemBatch(
                        v51,
                        (const std::vector<ItemParam> *)(v4 + 384),
                        (const ActionReason *)(v4 + 512));
                if ( ret )
                {
                  common::milog::MiLogStream::create(
                    &v120,
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/player/forge/player_forge_comp.cpp",
                    "manipulateForge",
                    703);
                  v52 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                          &v120,
                          (const char (*)[25])"checkAddItemBatch fail! ");
                  v53 = operator<<(v52, forge_queue);
                  v54 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          v53,
                          (const char (*)[28])" sub_output_item_param_vec:");
                  common::milog::MiLogStream::operator<<<ItemParam>(v54, (const std::vector<ItemParam> *)(v4 + 384));
                  common::milog::MiLogStream::~MiLogStream(&v120);
                  v3 = ret;
                }
                else
                {
                  if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 448)) )
                    goto LABEL_93;
LABEL_157:
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v55 = Player::getItemComp(this->player_);
                  v43 = (char *)(v4 + 448);
                  ret = PlayerItemComp::checkAddItemBatch(
                          v55,
                          (const std::vector<ItemParam> *)(v4 + 448),
                          (const ActionReason *)(v4 + 576));
                  if ( ret )
                  {
                    common::milog::MiLogStream::create(
                      &v120,
                      &common::milog::MiLogDefault::default_log_obj_,
                      1u,
                      "./src/player/forge/player_forge_comp.cpp",
                      "manipulateForge",
                      712);
                    v56 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                            &v120,
                            (const char (*)[25])"checkAddItemBatch fail! ");
                    v57 = operator<<(v56, forge_queue);
                    v58 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                            v57,
                            (const char (*)[18])" return_item_map:");
                    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
                      v58,
                      (const std::map<unsigned int,unsigned int> *)(v4 + 1200));
                    common::milog::MiLogStream::~MiLogStream(&v120);
                    v3 = ret;
                  }
                  else
                  {
LABEL_93:
                    std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v4 + 640));
                    std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v4 + 704));
                    std::vector<AddItemResult>::vector((std::vector<AddItemResult> *const)(v4 + 768));
                    if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 320)) )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v59 = Player::getItemComp(this->player_);
                      v43 = (char *)(v4 + 320);
                      PlayerItemComp::addItemBatch(
                        v59,
                        (const std::vector<ItemParam> *)(v4 + 320),
                        (const ActionReason *)(v4 + 512),
                        (std::vector<AddItemResult> *)(v4 + 640));
                    }
                    if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 384)) )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v60 = Player::getItemComp(this->player_);
                      v43 = (char *)(v4 + 384);
                      PlayerItemComp::addItemBatch(
                        v60,
                        (const std::vector<ItemParam> *)(v4 + 384),
                        (const ActionReason *)(v4 + 512),
                        (std::vector<AddItemResult> *)(v4 + 704));
                    }
                    if ( !std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v4 + 448)) )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v61 = Player::getItemComp(this->player_);
                      v43 = (char *)(v4 + 448);
                      PlayerItemComp::addItemBatch(
                        v61,
                        (const std::vector<ItemParam> *)(v4 + 448),
                        (const ActionReason *)(v4 + 576),
                        (std::vector<AddItemResult> *)(v4 + 768));
                    }
                    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&forge_queue->finish_count);
                    }
                    finish_count = forge_queue->finish_count;
                    v63 = *(unsigned __int8 *)(((unsigned __int64)&forge_queue->taken_count >> 3) + 0x7FFF8000);
                    if ( (_BYTE)v63 != 0 && (char)((((_BYTE)forge_queue + 20) & 7) + 3) >= (char)v63 )
                    {
                      finish_count = (_DWORD)forge_queue + 20;
                      LOBYTE(v43) = (_BYTE)v63 != 0;
                      __asan_report_store4(&forge_queue->taken_count, v43, v63);
                    }
                    forge_queue->taken_count = finish_count;
                    *(_QWORD *)(v4 + 896) = 0LL;
                    *(_QWORD *)(v4 + 904) = 0LL;
                    *(_QWORD *)(v4 + 912) = 0LL;
                    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 896));
                    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 80);
                    __la._M_dataplus._M_p = (std::string::pointer)(v4 + 112);
                    __la._M_string_length = 1LL;
                    std::allocator<unsigned int>::allocator(&__a);
                    std::vector<unsigned int>::vector(
                      (std::vector<unsigned int> *const)(v4 + 832),
                      *(std::initializer_list<unsigned int> *)&__la._M_dataplus._M_p,
                      &__a);
                    PlayerForgeComp::notifyForgeQueueData(
                      this,
                      (const std::vector<unsigned int> *)(v4 + 832),
                      (const std::vector<unsigned int> *)(v4 + 896));
                    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 832));
                    std::allocator<unsigned int>::~allocator(&__a);
                    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 896));
                    if ( *(_DWORD *)(v4 + 96) )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      EventComp = Player::getEventComp(this->player_);
                      common::tools::perf::make_shared<PlayerForgeEvent,unsigned int &,unsigned int &,std::map<unsigned int,unsigned int> &>(
                        (unsigned int *)&__r,
                        &forge_queue->forge_id,
                        (std::map<unsigned int,unsigned int> *)(v4 + 96),
                        (unsigned int *)(v4 + 1360),
                        v65,
                        v66);
                      std::shared_ptr<BaseEvent>::shared_ptr<PlayerForgeEvent,void>(
                        (std::shared_ptr<BaseEvent> *const)&v119,
                        &__r);
                      PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v119);
                      std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v119);
                      std::shared_ptr<PlayerForgeEvent>::~shared_ptr(&__r);
                    }
                    common::tools::perf::make_shared<proto_log::PlayerLogBodyForgeGetOutput>();
                    v67 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    if ( *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) <= 3 )
                    {
                      v67 = (proto_log::PlayerLogBodyForgeGetOutput *)forge_queue;
                      __asan_report_load4(forge_queue);
                    }
                    proto_log::PlayerLogBodyForgeGetOutput::set_transaction_no(v67, forge_queue->transaction_no);
                    p_scoin_cost = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
                    {
                      p_scoin_cost = (proto_log::PlayerLogBodyForgeGetOutput *)&config_ptr->scoin_cost;
                      __asan_report_load4(&config_ptr->scoin_cost);
                    }
                    proto_log::PlayerLogBodyForgeGetOutput::set_currency_cost(
                      p_scoin_cost,
                      config_ptr->scoin_cost * *(_DWORD *)(v4 + 96));
                    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3)
                                                                                + 0x7FFF8000) )
                    {
                      __asan_report_load4(&config_ptr->result_item_id);
                    }
                    if ( config_ptr->result_item_id )
                    {
                      v69 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                      forge_output_item = proto_log::PlayerLogBodyForgeGetOutput::add_main_output_item(v69);
                      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)config_ptr + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_id >> 3)
                                                                                  + 0x7FFF8000) )
                      {
                        __asan_report_load4(&config_ptr->result_item_id);
                      }
                      proto_log::ForgeOutputItem::set_item_id(forge_output_item, config_ptr->result_item_id);
                      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&config_ptr->result_item_count);
                      }
                      proto_log::ForgeOutputItem::set_item_get_num(
                        forge_output_item,
                        *(_DWORD *)(v4 + 96) * config_ptr->result_item_count);
                      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&config_ptr->result_item_count >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&config_ptr->result_item_count);
                      }
                      result_item_count = config_ptr->result_item_count;
                      UnfinishCount = ForgeQueue::getUnfinishCount(forge_queue);
                      proto_log::ForgeOutputItem::set_item_left_num(
                        forge_output_item,
                        UnfinishCount * result_item_count);
                    }
                    __la._anon_0._M_allocated_capacity = (std::string::size_type)ItemParam::toItemLog;
                    *(&__la._anon_0._M_allocated_capacity + 1) = 0LL;
                    v72 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    v73 = proto_log::PlayerLogBodyForgeGetOutput::mutable_sub_output_item(v72);
                    ItemParam::mapToItemParamVec(
                      (std::vector<ItemParam> *)(v4 + 896),
                      (const std::map<unsigned int,unsigned int> *)(v4 + 1120),
                      0);
                    common::tools::MiscUtils::vectorToRepeated<ItemParam,proto_log::ItemLog,void (ItemParam::*)(proto_log::ItemLog&)const>(
                      (const std::vector<ItemParam> *)(v4 + 896),
                      v73,
                      (void (*)(const ItemParam *, proto_log::ItemLog *))ItemParam::toItemLog);
                    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 896));
                    v74 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeGetOutput,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 192));
                    v75 = proto_log::PlayerLogBodyForgeGetOutput::mutable_random_output_item(v74);
                    ItemParam::mapToItemParamVec(
                      (std::vector<ItemParam> *)(v4 + 896),
                      (const std::map<unsigned int,unsigned int> *)(v4 + 1040),
                      0);
                    common::tools::MiscUtils::vectorToRepeated<ItemParam,proto_log::ItemLog,void (ItemParam::*)(proto_log::ItemLog&)const>(
                      (const std::vector<ItemParam> *)(v4 + 896),
                      v75,
                      (void (*)(const ItemParam *, proto_log::ItemLog *))ItemParam::toItemLog);
                    std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 896));
                    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                      __asan_report_load8(&this->player_);
                    player = this->player_;
                    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v119, 0LL);
                    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyForgeGetOutput,void>(
                      (std::shared_ptr<google::protobuf::Message> *const)&__r,
                      (const std::shared_ptr<proto_log::PlayerLogBodyForgeGetOutput> *)(v4 + 192));
                    Player::printStatLog(player, (MessagePtr *)&__r, &v119, 0xEu);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
                    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v119);
                    if ( !ForgeQueue::getUnfinishCount(forge_queue) || is_stop_forge )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v78 = Player::getBasicComp(this->player_);
                      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v120, v78);
                      StatLogUtils::ContextHolder::ContextHolder(
                        (StatLogUtils::ContextHolder *const)(v4 + 64),
                        0x7A2u,
                        __la);
                      std::string::~string(&v120);
                      common::tools::perf::make_shared<proto_log::PlayerLogBodyForgeFinish>();
                      v79 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      if ( *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)forge_queue >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(forge_queue);
                      }
                      proto_log::PlayerLogBodyForgeFinish::set_transaction_no(v79, forge_queue->transaction_no);
                      v80 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      if ( is_stop_forge )
                        v81 = 1;
                      else
                        v81 = 2;
                      proto_log::PlayerLogBodyForgeFinish::set_reason(v80, v81);
                      v82 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      Now = common::tools::TimeUtils::getNow();
                      if ( *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) != 0
                        && *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) <= 3 )
                      {
                        __asan_report_load4(&forge_queue->start_time);
                      }
                      proto_log::PlayerLogBodyForgeFinish::set_use_time(v82, Now - forge_queue->start_time);
                      v84 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      TotalFinishTime = ForgeQueue::getTotalFinishTime(forge_queue);
                      proto_log::PlayerLogBodyForgeFinish::set_finish_time(v84, TotalFinishTime);
                      v86 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      v87 = ForgeQueue::getUnfinishCount(forge_queue);
                      proto_log::PlayerLogBodyForgeFinish::set_left_num(v86, v87);
                      v88 = std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyForgeFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 224));
                      v89 = proto_log::PlayerLogBodyForgeFinish::mutable_sub_output_item(v88);
                      ItemParam::mapToItemParamVec(
                        (std::vector<ItemParam> *)(v4 + 896),
                        (const std::map<unsigned int,unsigned int> *)(v4 + 1200),
                        0);
                      common::tools::MiscUtils::vectorToRepeated<ItemParam,proto_log::ItemLog,void (ItemParam::*)(proto_log::ItemLog&)const>(
                        (const std::vector<ItemParam> *)(v4 + 896),
                        v89,
                        (void (*)(const ItemParam *, proto_log::ItemLog *))ItemParam::toItemLog);
                      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 896));
                      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                        __asan_report_load8(&this->player_);
                      v90 = this->player_;
                      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v119, 0LL);
                      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyForgeFinish,void>(
                        (std::shared_ptr<google::protobuf::Message> *const)&__r,
                        (const std::shared_ptr<proto_log::PlayerLogBodyForgeFinish> *)(v4 + 224));
                      Player::printStatLog(v90, (MessagePtr *)&__r, &v119, 0xEu);
                      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&__r);
                      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v119);
                      std::map<unsigned int,ForgeQueue>::erase[abi:cxx11](
                        &this->forge_queue_map_,
                        *(std::map<unsigned int,ForgeQueue>::iterator *)(v4 + 128));
                      *(_DWORD *)(v4 + 112) = *(_DWORD *)(v4 + 80);
                      v97._M_array = (std::initializer_list<unsigned int>::iterator)(v4 + 112);
                      v97._M_len = 1LL;
                      std::allocator<unsigned int>::allocator(&__a);
                      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 896), v97, &__a);
                      *(_QWORD *)(v4 + 832) = 0LL;
                      *(_QWORD *)(v4 + 840) = 0LL;
                      *(_QWORD *)(v4 + 848) = 0LL;
                      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v4 + 832));
                      PlayerForgeComp::notifyForgeQueueData(
                        this,
                        (const std::vector<unsigned int> *)(v4 + 832),
                        (const std::vector<unsigned int> *)(v4 + 896));
                      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 832));
                      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v4 + 896));
                      std::allocator<unsigned int>::~allocator(&__a);
                      std::shared_ptr<proto_log::PlayerLogBodyForgeFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyForgeFinish> *const)(v4 + 224));
                      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 64));
                    }
                    PlayerForgeComp::tryUpdateForgeQueues(this);
                    v91 = proto::ForgeQueueManipulateRsp::mutable_output_item_list(rsp_0);
                    ItemUtils::vecToProtoItemParam((const std::vector<AddItemResult> *)(v4 + 640), v91);
                    v92 = proto::ForgeQueueManipulateRsp::mutable_return_item_list(rsp_0);
                    ItemUtils::vecToProtoItemParam((const std::vector<AddItemResult> *)(v4 + 768), v92);
                    v93 = proto::ForgeQueueManipulateRsp::mutable_extra_output_item_list(rsp_0);
                    ItemUtils::vecToProtoItemParam((const std::vector<AddItemResult> *)(v4 + 704), v93);
                    v3 = 0;
                    std::shared_ptr<proto_log::PlayerLogBodyForgeGetOutput>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyForgeGetOutput> *const)(v4 + 192));
                    std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 768));
                    std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 704));
                    std::vector<AddItemResult>::~vector((std::vector<AddItemResult> *const)(v4 + 640));
                  }
                }
              }
            }
          }
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 448));
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 384));
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 320));
          std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 256));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 1440));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 1360));
          std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 1280));
        }
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 1200));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 1120));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 1040));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 960));
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v121,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/forge/player_forge_comp.cpp",
        "manipulateForge",
        545);
      v11 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
              (common::milog::MiLogStream *const)&v121,
              (const char (*)[44])"findForgeExcelConfig fail! forge_queue_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v121);
      v3 = 5;
    }
  }
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  if ( v122 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8070) = 0LL;
    memset(
      (void *)((unsigned __int64)(v6 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v6 + 2147450880 - (((_DWORD)v6 + 2147450888) & 0xFFFFFFF8) + 120) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v4 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF80B0) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80B8) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF80D0) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    __asan_stack_free_5(v4, 1728LL, v122);
  }
  return v3;
};

// Line 584: range 000000001662C876-000000001662C970
ForeachPolicy __cdecl PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeAddExtraProb const&)#1}::operator()(
        const PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeAddExtraProb&)> *const __closure,
        uint32_t proud_skill_id,
        const LifeEffectForgeAddExtraProb *config)
{
  float *p_add_prob; // rdx
  const float *v4; // rdx
  float *max_add_extra_prob; // rcx
  __int64 v6; // rsi
  int v7; // xmm0_4
  char v8; // dl
  __int64 v9; // rdx

  p_add_prob = &config->add_prob;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v4 = std::max<float>(__closure->__max_add_extra_prob, p_add_prob);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  max_add_extra_prob = __closure->__max_add_extra_prob;
  v6 = (*(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)v4 & 7)
                                                                                            + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load4(v4);
  v7 = *(_DWORD *)v4;
  v8 = *(_BYTE *)(((unsigned __int64)max_add_extra_prob >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v8 != 0;
  v9 = (v8 != 0) & (unsigned __int8)((char)(((unsigned __int8)max_add_extra_prob & 7) + 3) >= v8);
  if ( (_BYTE)v9 )
    __asan_report_store4(max_add_extra_prob, v6, v9);
  *(_DWORD *)max_add_extra_prob = v7;
  return 0;
};

// Line 618: range 000000001662C972-000000001662D212
ForeachPolicy __cdecl PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeReturnMaterial const&)#2}::operator()(
        const PlayerForgeComp::manipulateForge::<lambda(uint32_t, const LifeEffectForgeReturnMaterial&)> *const __closure,
        uint32_t proud_skill,
        const LifeEffectForgeReturnMaterial *config)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // rbx
  double probability; // xmm0_8
  std::mersenne_twister_engine<long unsigned int,32,624,397,31,2567483615,11,4294967295,7,2636928640,15,4022730752,18,1812433253> *RandGenerator; // rax
  const data::ForgeExcelConfigMgrBase *p_forge_config_mgr; // rdi
  ForgeQueue *forge_queue; // rax
  common::milog::MiLogStream *v10; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v11; // rax
  _DWORD *v12; // rdx
  uint32_t *p_count; // rax
  unsigned int count; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  unsigned int *v16; // rdx
  SelectType v17; // r14d
  uint32_t *p_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v19; // rax
  SelectType *v20; // rdx
  char v21; // cl
  Player **p_player; // rdi
  PlayerForgeComp *this; // rax
  common::milog::MiLogStream *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdi
  PlayerForgeComp *v27; // rax
  ForeachPolicy result; // eax
  std::binomial_distribution<unsigned int>::result_type batch_count; // [rsp+2Ch] [rbp-214h]
  uint32_t idx; // [rsp+34h] [rbp-20Ch]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-208h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-200h] BYREF
  const data::ForgeExcelConfig *config_ptr; // [rsp+48h] [rbp-1F8h]
  const std::vector<unsigned int> *__for_range; // [rsp+50h] [rbp-1F0h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-1E8h]
  std::shared_ptr<Config> v38; // [rsp+60h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v39; // [rsp+70h] [rbp-1D0h] BYREF
  char v40[432]; // [rsp+90h] [rbp-1B0h] BYREF

  v3 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(384LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 24 19 return_item_vec:643 96 48 17 cost_item_map:632 176 144 16 distribution:620";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::manipulateForge(proto::ForgeQueueManipulateReq const&,proto::ForgeQueueManipulateRsp &)::{lambda(unsigned int,LifeEffectForgeReturnMaterial const&)#2}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234881024;
  v5[536862722] = -218959118;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862730] = -202116109;
  v5[536862731] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)config >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(config);
  }
  probability = config->probability;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__takable_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__takable_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__takable_count);
  }
  std::binomial_distribution<unsigned int>::binomial_distribution(
    (std::binomial_distribution<unsigned int> *const)(v3 + 176),
    __closure->__takable_count,
    probability);
  RandGenerator = common::tools::RandomUtils::getRandGenerator();
  batch_count = std::binomial_distribution<unsigned int>::operator()<std::mersenne_twister_engine<unsigned long,32ul,624ul,397ul,31ul,2567483615ul,11ul,4294967295ul,7ul,2636928640ul,15ul,4022730752ul,18ul,1812433253ul>>(
                  (std::binomial_distribution<unsigned int> *const)(v3 + 176),
                  RandGenerator);
  if ( batch_count )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v38);
    p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.forge_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__forge_queue >> 3) + 0x7FFF8000) )
    {
      p_forge_config_mgr = (const data::ForgeExcelConfigMgrBase *)&__closure->__forge_queue;
      __asan_report_load8(&__closure->__forge_queue);
    }
    forge_queue = __closure->__forge_queue;
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) <= 3 )
    {
      p_forge_config_mgr = (const data::ForgeExcelConfigMgrBase *)&forge_queue->forge_id;
      forge_queue = (ForgeQueue *)__asan_report_load4(&forge_queue->forge_id);
    }
    config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, forge_queue->forge_id);
    std::shared_ptr<Config>::~shared_ptr(&v38);
    if ( config_ptr )
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 96));
      __for_range = &config_ptr->talent_return_able_index_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(&config_ptr->talent_return_able_index_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&config_ptr->talent_return_able_index_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v11 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        idx = *v12 - 1;
        if ( idx < std::vector<data::IdCountConfig>::size(&config_ptr->material_items) )
        {
          id_count_config = std::vector<data::IdCountConfig>::operator[](&config_ptr->material_items, idx);
          p_count = &id_count_config->count;
          if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_count);
          }
          count = id_count_config->count;
          v15 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 96),
                  &id_count_config->id);
          v16 = v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = SAFE_ADD<unsigned int,unsigned int>(*v16, count);
          p_id = &id_count_config->id;
          v19 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 96),
                  &id_count_config->id);
          v20 = v19;
          v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
          if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
          {
            LOBYTE(p_id) = v21 != 0;
            __asan_report_store4(v19, p_id, v19);
          }
          *v20 = v17;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->return_ratio >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->return_ratio);
      }
      *(float *)&p_player = config->return_ratio;
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      {
        LODWORD(p_player) = (_DWORD)__closure;
        __asan_report_load8(__closure);
      }
      this = __closure->__this;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
      {
        p_player = &__closure->__this->player_;
        __asan_report_load8(p_player);
      }
      if ( DropUtils::randomExtraItemsForLifeEffectTalent(
             this->player_,
             (const std::map<unsigned int,unsigned int> *)(v3 + 96),
             batch_count,
             *(float *)&p_player,
             (std::vector<ItemParam> *)(v3 + 32),
             0) )
      {
        common::milog::MiLogStream::create(
          &v39,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/forge/player_forge_comp.cpp",
          "operator()",
          646);
        v24 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                &v39,
                (const char (*)[55])"randomExtraItemsForLifeEffectTalent fail, forge_queue:");
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__forge_queue >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__forge_queue);
        v25 = operator<<(v24, __closure->__forge_queue);
        v26 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v25, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        {
          v26 = (common::milog::MiLogStream *)__closure;
          __asan_report_load8(__closure);
        }
        v27 = __closure->__this;
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__this->player_ >> 3) + 0x7FFF8000) )
        {
          v26 = (common::milog::MiLogStream *)&__closure->__this->player_;
          __asan_report_load8(v26);
        }
        operator<<(v26, v27->player_);
        common::milog::MiLogStream::~MiLogStream(&v39);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&__closure->__return_item_map >> 3) + 0x7FFF8000) )
          __asan_report_load8(&__closure->__return_item_map);
        ItemParam::addVecToItemCountMap((const std::vector<ItemParam> *)(v3 + 32), __closure->__return_item_map);
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 32));
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 96));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v39,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/forge/player_forge_comp.cpp",
        "operator()",
        629);
      v10 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v39,
              (const char (*)[28])"findForgeExcelConfig fail! ");
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__forge_queue >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__forge_queue);
      operator<<(v10, __closure->__forge_queue);
      common::milog::MiLogStream::~MiLogStream(&v39);
    }
  }
  result = FOREACH_CONTINUE;
  if ( v40 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 788: range 000000001662FAB0-000000001662FFEC
int32_t __cdecl PlayerForgeComp::notifyForgeQueueData(
        PlayerForgeComp *const this,
        const std::vector<unsigned int> *forge_queue_vec,
        const std::vector<unsigned int> *removed_forge_queue_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v6; // rax
  _DWORD *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  ForgeQueue *p_second; // r14
  proto::ForgeQueueData *v11; // rax
  unsigned int *v12; // rax
  uint32_t *v13; // rdx
  std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Player *player; // r14
  int32_t result; // eax
  uint32_t forge_queue_id; // [rsp+2Ch] [rbp-134h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-130h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-128h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-120h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-118h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+50h] [rbp-110h]
  google::protobuf::Map<unsigned int,proto::ForgeQueueData> *proto_forge_queue_map; // [rsp+58h] [rbp-108h]
  std::shared_ptr<proto::ForgeQueueDataNotify> __r; // [rsp+60h] [rbp-100h] BYREF
  common::milog::MiLogStream v28; // [rsp+70h] [rbp-F0h] BYREF
  common::milog::MiLogStream v29; // [rsp+90h] [rbp-D0h] BYREF
  char v30[176]; // [rsp+B0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 18 forge_queue_id:790 64 8 8 iter:792 96 16 14 notify_ptr:789";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::notifyForgeQueueData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  common::tools::perf::make_shared<proto::ForgeQueueDataNotify>();
  __for_range = forge_queue_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(forge_queue_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(forge_queue_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    *(std::map<unsigned int,ForgeQueue>::iterator *)(v3 + 64) = std::map<unsigned int,ForgeQueue>::find(
                                                                  &this->forge_queue_map_,
                                                                  (const std::map<unsigned int,ForgeQueue>::key_type *)(v3 + 48));
    __for_end_0._M_current = (const unsigned int *)std::map<unsigned int,ForgeQueue>::end(&this->forge_queue_map_)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)(v3 + 64),
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> >::_Self *)&__for_end_0) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/forge/player_forge_comp.cpp",
        "notifyForgeQueueData",
        795);
      v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v29,
             (const char (*)[39])"forge_queue not found! forge_queue_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      v9 = std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      proto_forge_queue_map = proto::ForgeQueueDataNotify::mutable_forge_queue_map(v9);
      p_second = &std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue> > *const)(v3 + 64))->second;
      v11 = google::protobuf::Map<unsigned int,proto::ForgeQueueData>::operator[](
              proto_forge_queue_map,
              (const google::protobuf::Map<unsigned int,proto::ForgeQueueData>::key_type *)(v3 + 48));
      ForgeQueue::toClient(p_second, v11);
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = removed_forge_queue_vec;
  *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(removed_forge_queue_vec);
  __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
            &__for_end_0) )
  {
    v12 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    forge_queue_id = *v13;
    v14 = std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    proto::ForgeQueueDataNotify::add_removed_forge_queue_list(v14, forge_queue_id);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
  }
  common::milog::MiLogStream::create(
    &v28,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/forge/player_forge_comp.cpp",
    "notifyForgeQueueData",
    805);
  v15 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v28,
          (const char (*)[34])"send proto::ForgeQueueDataNotify:");
  v16 = std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeQueueDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  google::protobuf::Message::ShortDebugString[abi:cxx11]((std::string *)&v29, v16);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)&v29);
  std::string::~string(&v29);
  common::milog::MiLogStream::~MiLogStream(&v28);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ForgeQueueDataNotify>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::ForgeQueueDataNotify>::~shared_ptr((std::shared_ptr<proto::ForgeQueueDataNotify> *const)(v3 + 96));
  result = (int)player;
  if ( v30 == (char *)v3 )
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

// Line 811: range 000000001662FFEE-00000000166301E5
uint32_t __cdecl PlayerForgeComp::genNewForgeQueueId(const PlayerForgeComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t result; // eax
  unsigned __int64 v5; // rax
  uint32_t idx; // [rsp+14h] [rbp-9Ch]
  std::map<unsigned int,ForgeQueue> v7; // [rsp+18h] [rbp-98h] BYREF

  v1 = (unsigned __int64)&v7._M_t._M_impl.std::_Rb_tree_header;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 16 new_queue_id:817 64 8 12 rev_iter:812";
  *(_QWORD *)(v1 + 16) = PlayerForgeComp::genNewForgeQueueId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202116352;
  std::map<unsigned int,ForgeQueue>::rbegin((const std::map<unsigned int,ForgeQueue> *const)(v1 + 64));
  std::map<unsigned int,ForgeQueue>::rend(&v7);
  if ( std::operator==<std::_Rb_tree_const_iterator<std::pair<unsigned int const,ForgeQueue>>>(
         (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,ForgeQueue> > > *)(v1 + 64),
         (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,ForgeQueue> > > *)&v7) )
  {
    result = 1;
  }
  else
  {
    v5 = (unsigned __int64)std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,ForgeQueue>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,ForgeQueue> > > *const)(v1 + 64));
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((v5 >> 3) + 0x7FFF8000) <= 3 )
      v5 = __asan_report_load4(v5);
    *(_DWORD *)(v1 + 48) = *(_DWORD *)v5 + 1;
    for ( idx = 0; idx < std::map<unsigned int,ForgeQueue>::size(&this->forge_queue_map_); ++idx )
    {
      if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,ForgeQueue> const,unsigned int>(
              &this->forge_queue_map_,
              (const unsigned int *)(v1 + 48)) )
      {
        result = *(_DWORD *)(v1 + 48);
        goto LABEL_14;
      }
      ++*(_DWORD *)(v1 + 48);
    }
    result = *(_DWORD *)(v1 + 48);
  }
LABEL_14:
  if ( &v7._M_t._M_impl.std::_Rb_tree_header == (std::_Rb_tree_header *)v1 )
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

// Line 831: range 00000000166301E6-0000000016630204
void __cdecl PlayerForgeComp::onTimer(PlayerForgeComp *const this, uint64_t now_ms)
{
  PlayerForgeComp::tryUpdateForgeQueues(this);
};

// Line 837: range 0000000016630206-0000000016630FA0
void __cdecl PlayerForgeComp::tryUpdateForgeQueues(PlayerForgeComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t finish_count; // ecx
  common::milog::MiLogStream *v5; // rax
  uint32_t v6; // eax
  unsigned int v7; // ecx
  const unsigned int *v8; // rax
  _DWORD *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  uint32_t v19; // ecx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  const unsigned int *v22; // rax
  _DWORD *v23; // rdx
  Player *player; // rsi
  common::milog::MiLogStream *v25; // rcx
  uint32_t v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  common::milog::MiLogStream *v33; // rax
  unsigned int __b; // [rsp+14h] [rbp-18Ch] BYREF
  uint32_t old_finish_count; // [rsp+18h] [rbp-188h]
  uint32_t next_finish_time; // [rsp+1Ch] [rbp-184h]
  std::map<unsigned int,ForgeQueue>::iterator __for_begin; // [rsp+20h] [rbp-180h] BYREF
  std::map<unsigned int,ForgeQueue>::iterator __for_end; // [rsp+28h] [rbp-178h] BYREF
  std::map<unsigned int,ForgeQueue> *__for_range; // [rsp+30h] [rbp-170h]
  std::map<unsigned int,ForgeQueue> *__for_range_0; // [rsp+38h] [rbp-168h]
  const std::pair<unsigned int const,ForgeQueue> *v41; // [rsp+40h] [rbp-160h]
  std::tuple_element<0,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue_id_0; // [rsp+48h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *forge_queue_0; // [rsp+50h] [rbp-150h]
  std::pair<unsigned int const,ForgeQueue> *__in; // [rsp+58h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,ForgeQueue> >::type *forge_queue_id; // [rsp+60h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,ForgeQueue> >::type *forge_queue; // [rsp+68h] [rbp-138h]
  std::vector<unsigned int> removed_forge_queue_vec; // [rsp+70h] [rbp-130h] BYREF
  common::milog::MiLogStream v48; // [rsp+90h] [rbp-110h] BYREF
  common::milog::MiLogStream v49; // [rsp+B0h] [rbp-F0h] BYREF
  char v50[208]; // [rsp+D0h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 7 now:838 48 4 25 next_refresh_interval:840 64 4 20 current_interval:860 80 4 20 new_fini"
                        "sh_count:861 96 24 27 updated_forge_queue_vec:839";
  *(_QWORD *)(v1 + 16) = PlayerForgeComp::tryUpdateForgeQueues;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -234556924;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  *(_DWORD *)(v1 + 32) = common::tools::TimeUtils::getNow();
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 96));
  *(_DWORD *)(v1 + 48) = -1;
  __for_range = &this->forge_queue_map_;
  __for_begin._M_node = std::map<unsigned int,ForgeQueue>::begin(&this->forge_queue_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,ForgeQueue>::end(&this->forge_queue_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator*(&__for_begin);
    forge_queue_id = std::get<0ul,unsigned int const,ForgeQueue>(__in);
    forge_queue = std::get<1ul,unsigned int const,ForgeQueue>(__in);
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&forge_queue->finish_count);
    }
    finish_count = forge_queue->finish_count;
    if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)forge_queue + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->forge_count >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4(&forge_queue->forge_count);
    }
    if ( finish_count < forge_queue->forge_count )
    {
      if ( ForgeQueue::getNextFinishTime(forge_queue) <= *(_DWORD *)(v1 + 32) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)forge_queue + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&forge_queue->single_time_cost);
        }
        if ( !forge_queue->single_time_cost )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/forge/player_forge_comp.cpp",
            "tryUpdateForgeQueues",
            855);
          v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                 &v49,
                 (const char (*)[36])"forge_queue.single_time_cost is 0! ");
          operator<<(v5, forge_queue);
          common::milog::MiLogStream::~MiLogStream(&v49);
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&forge_queue->start_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&forge_queue->start_time);
        }
        if ( forge_queue->start_time >= *(_DWORD *)(v1 + 32) )
          v6 = 0;
        else
          v6 = *(_DWORD *)(v1 + 32) - forge_queue->start_time;
        *(_DWORD *)(v1 + 64) = v6;
        v7 = *(_DWORD *)(v1 + 64);
        if ( *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)forge_queue + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&forge_queue->single_time_cost >> 3)
                                                                     + 0x7FFF8000) )
        {
          __asan_report_load4(&forge_queue->single_time_cost);
        }
        __b = v7 / forge_queue->single_time_cost;
        v8 = std::min<unsigned int>(&forge_queue->forge_count, &__b);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        *(_DWORD *)(v1 + 80) = *v9;
        if ( *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&forge_queue->finish_count);
        }
        if ( forge_queue->finish_count > *(_DWORD *)(v1 + 80) )
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/forge/player_forge_comp.cpp",
            "tryUpdateForgeQueues",
            864);
          v10 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v49, (const char (*)[5])"now:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v1 + 32));
          v12 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v11,
                  (const char (*)[19])" current_interval:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v12,
                  (const unsigned int *)(v1 + 64));
          v14 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                  v13,
                  (const char (*)[19])" new_finish_count:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v14,
                  (const unsigned int *)(v1 + 80));
          operator<<(v15, forge_queue);
          common::milog::MiLogStream::~MiLogStream(&v49);
          goto LABEL_45;
        }
        if ( *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&forge_queue->finish_count);
        }
        if ( forge_queue->finish_count < *(_DWORD *)(v1 + 80) )
        {
          old_finish_count = forge_queue->finish_count;
          forge_queue->finish_count = *(_DWORD *)(v1 + 80);
          std::vector<unsigned int>::push_back((std::vector<unsigned int> *const)(v1 + 96), forge_queue_id);
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/forge/player_forge_comp.cpp",
            "tryUpdateForgeQueues",
            873);
          v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                  &v49,
                  (const char (*)[21])" update forge_queue:");
          v17 = operator<<(v16, forge_queue);
          v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          operator<<(v18, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v49);
          if ( *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&forge_queue->finish_count >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&forge_queue->finish_count);
          }
          v19 = forge_queue->finish_count;
          if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&forge_queue->forge_id);
          }
          PlayerForgeComp::triggerLostItemEventOnAddForgeFinishCount(this, forge_queue->forge_id, old_finish_count, v19);
        }
      }
      if ( ForgeQueue::getUnfinishCount(forge_queue) )
      {
        next_finish_time = ForgeQueue::getNextFinishTime(forge_queue);
        if ( next_finish_time > *(_DWORD *)(v1 + 32) )
        {
          __b = next_finish_time - *(_DWORD *)(v1 + 32);
          v22 = std::min<unsigned int>((const unsigned int *)(v1 + 48), &__b);
          v23 = v22;
          if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v22);
          }
          *(_DWORD *)(v1 + 48) = *v23;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v49,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/forge/player_forge_comp.cpp",
            "tryUpdateForgeQueues",
            887);
          v20 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v49, (const char (*)[5])"now:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  (const unsigned int *)(v1 + 32));
          operator<<(v21, forge_queue);
          common::milog::MiLogStream::~MiLogStream(&v49);
        }
      }
    }
LABEL_45:
    std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator++(&__for_begin);
  }
  if ( std::numeric_limits<unsigned int>::max() == *(_DWORD *)(v1 + 48) )
  {
    common::tools::MiTimer::cancel(&this->forge_timer_);
  }
  else
  {
    common::tools::MiTimer::cancel(&this->forge_timer_);
    player = (Player *)*(unsigned int *)(v1 + 48);
    if ( PlayerUnixTimer::startS(
           &this->forge_timer_,
           (uint32_t)player,
           0,
           "./src/player/forge/player_forge_comp.cpp",
           "tryUpdateForgeQueues",
           902) )
    {
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/forge/player_forge_comp.cpp",
        "tryUpdateForgeQueues",
        904);
      v25 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v49,
              (const char (*)[22])" start timer failed !");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      player = this->player_;
      operator<<(v25, player);
      common::milog::MiLogStream::~MiLogStream(&v49);
    }
    v26 = *(_DWORD *)(v1 + 32) + *(_DWORD *)(v1 + 48);
    v27 = *(_BYTE *)(((unsigned __int64)&this->next_refresh_time >> 3) + 0x7FFF8000);
    if ( v27 != 0 && v27 <= 3 )
    {
      LOBYTE(player) = v27 != 0;
      __asan_report_store4(&this->next_refresh_time, player, &this->next_refresh_time);
    }
    this->next_refresh_time = v26;
    common::milog::MiLogStream::create(
      &v48,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/forge/player_forge_comp.cpp",
      "tryUpdateForgeQueues",
      908);
    v28 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v48, (const char (*)[11])"forge uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    __b = Player::getUid(this->player_);
    v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &__b);
    v30 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v29,
            (const char (*)[24])" next_refresh_interval:");
    v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, (const unsigned int *)(v1 + 48));
    v32 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v31,
            (const char (*)[20])" next_refresh_time:");
    if ( *(_BYTE *)(((unsigned __int64)&this->next_refresh_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->next_refresh_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->next_refresh_time);
    }
    common::tools::TimeUtils::getStrByTime[abi:cxx11]((std::string *)&v49, this->next_refresh_time);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v32, (const std::string *)&v49);
    std::string::~string(&v49);
    common::milog::MiLogStream::~MiLogStream(&v48);
    __for_range_0 = &this->forge_queue_map_;
    __for_begin._M_node = std::map<unsigned int,ForgeQueue>::begin(&this->forge_queue_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,ForgeQueue>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v41 = std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator*(&__for_begin);
      forge_queue_id_0 = std::get<0ul,unsigned int const,ForgeQueue>(v41);
      forge_queue_0 = (std::tuple_element<1,const std::pair<unsigned int const,ForgeQueue> >::type *)std::get<1ul,unsigned int const,ForgeQueue>(v41);
      common::milog::MiLogStream::create(
        &v49,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/forge/player_forge_comp.cpp",
        "tryUpdateForgeQueues",
        912);
      v33 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(&v49, (const char (*)[13])"forge_queue:");
      operator<<(v33, forge_queue_0);
      common::milog::MiLogStream::~MiLogStream(&v49);
      std::_Rb_tree_iterator<std::pair<unsigned int const,ForgeQueue>>::operator++(&__for_begin);
    }
  }
  if ( !std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v1 + 96)) )
  {
    memset(&removed_forge_queue_vec, 0, sizeof(removed_forge_queue_vec));
    std::vector<unsigned int>::vector(&removed_forge_queue_vec);
    PlayerForgeComp::notifyForgeQueueData(this, (const std::vector<unsigned int> *)(v1 + 96), &removed_forge_queue_vec);
    std::vector<unsigned int>::~vector(&removed_forge_queue_vec);
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 96));
  if ( v50 == (char *)v1 )
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

// Line 924: range 0000000016630FA2-00000000166318D1
void __fastcall PlayerForgeComp::triggerLostItemEventOnAddForgeFinishCount(
        PlayerForgeComp *const this,
        uint32_t forge_id,
        uint32_t old_finish_count,
        uint32_t cur_finish_count)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rcx
  uint32_t *p_count; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int finish_count; // [rsp+24h] [rbp-15Ch]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+28h] [rbp-158h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+30h] [rbp-150h] BYREF
  const data::ForgeExcelConfig *config_ptr; // [rsp+38h] [rbp-148h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+40h] [rbp-140h]
  std::vector<ItemParam> *__for_range_0; // [rsp+48h] [rbp-138h]
  const ItemParam *item_param; // [rsp+50h] [rbp-130h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-128h]
  std::shared_ptr<Config> v37; // [rsp+60h] [rbp-120h] BYREF
  common::milog::MiLogStream v38; // [rsp+70h] [rbp-110h] BYREF
  char v39[240]; // [rsp+90h] [rbp-F0h] BYREF

  v4 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 12 forge_id:923 64 4 20 old_finish_count:923 80 4 20 cur_finish_count:923 96 16 13 event_"
                        "ptr:959 128 24 23 cost_item_param_vec:944";
  *(_QWORD *)(v4 + 16) = PlayerForgeComp::triggerLostItemEventOnAddForgeFinishCount;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -219021312;
  v6[536862724] = -218103808;
  v6[536862725] = -202116109;
  *(_DWORD *)(v4 + 48) = forge_id;
  *(_DWORD *)(v4 + 64) = old_finish_count;
  *(_DWORD *)(v4 + 80) = cur_finish_count;
  if ( *(_DWORD *)(v4 + 64) < *(_DWORD *)(v4 + 80) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v37);
    v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v37);
    config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
                   &v14->design_config.txt_config_mgr.forge_config_mgr,
                   *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v37);
    if ( config_ptr )
    {
      finish_count = *(_DWORD *)(v4 + 80) - *(_DWORD *)(v4 + 64);
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->queue_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->queue_num >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_load4(&config_ptr->queue_num);
      }
      if ( finish_count > config_ptr->queue_num )
      {
        common::milog::MiLogStream::create(
          &v38,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/forge/player_forge_comp.cpp",
          "triggerLostItemEventOnAddForgeFinishCount",
          941);
        v18 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                &v38,
                (const char (*)[37])"finish count is bigger than max_num:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &config_ptr->queue_num);
        v20 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v19,
                (const char (*)[19])" old_finish_count:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v4 + 64));
        v22 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                v21,
                (const char (*)[19])" cur_finish_count:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                (const unsigned int *)(v4 + 80));
        v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v23, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        operator<<(v24, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v38);
      }
      std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v4 + 128));
      __for_range = &config_ptr->material_items;
      __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&config_ptr->material_items)._M_current;
      __for_end._M_current = std::vector<data::IdCountConfig>::end(&config_ptr->material_items)._M_current;
      while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(
                &__for_begin,
                &__for_end) )
      {
        id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
        p_count = &id_count_config->count;
        if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(p_count);
        }
        if ( id_count_config->count )
        {
          if ( *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&id_count_config->id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&id_count_config->id);
          }
          LODWORD(v37._M_ptr) = id_count_config->id;
          HIDWORD(v37._M_ptr) = SAFE_MULTIPLY<unsigned int,unsigned int>(id_count_config->count, finish_count);
          v37._M_refcount._M_pi = 0LL;
          std::vector<ItemParam>::push_back(
            (std::vector<ItemParam> *const)(v4 + 128),
            (std::vector<ItemParam>::value_type *)&v37);
        }
        __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->scoin_cost);
      }
      if ( config_ptr->scoin_cost )
      {
        LODWORD(v37._M_ptr) = 202;
        HIDWORD(v37._M_ptr) = SAFE_MULTIPLY<unsigned int,unsigned int>(config_ptr->scoin_cost, finish_count);
        v37._M_refcount._M_pi = 0LL;
        std::vector<ItemParam>::push_back(
          (std::vector<ItemParam> *const)(v4 + 128),
          (std::vector<ItemParam>::value_type *)&v37);
      }
      __for_range_0 = (std::vector<ItemParam> *)(v4 + 128);
      __for_begin._M_current = (const data::IdCountConfig *)std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v4 + 128))._M_current;
      __for_end._M_current = (const data::IdCountConfig *)std::vector<ItemParam>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_begin,
                (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)&__for_end) )
      {
        item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
        common::tools::perf::make_shared<LoseItemEvent,unsigned int const&,unsigned int const&>(
          (const unsigned int *)&v37,
          &item_param->item_id,
          &item_param->count,
          &item_param->item_id);
        std::shared_ptr<BaseEvent>::shared_ptr<LoseItemEvent,void>(
          (std::shared_ptr<BaseEvent> *const)(v4 + 96),
          (std::shared_ptr<LoseItemEvent> *)&v37);
        std::shared_ptr<LoseItemEvent>::~shared_ptr((std::shared_ptr<LoseItemEvent> *const)&v37);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr(
          (std::shared_ptr<BaseEvent> *const)&v37,
          (const std::shared_ptr<BaseEvent> *)(v4 + 96));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v37);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v37);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 96));
        __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)&__for_begin);
      }
      std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v4 + 128));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/forge/player_forge_comp.cpp",
        "triggerLostItemEventOnAddForgeFinishCount",
        934);
      v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v38,
              (const char (*)[38])"findForgeExcelConfig fail! forge_id: ");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 48));
      v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      operator<<(v17, this->player_);
      common::milog::MiLogStream::~MiLogStream(&v38);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "triggerLostItemEventOnAddForgeFinishCount",
      927);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v38, (const char (*)[10])"forge_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v4 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v8, (const char (*)[19])" old_finish_count:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 64));
    v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v10, (const char (*)[19])" cur_finish_count:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v4 + 80));
    v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v13, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
  }
  if ( v39 == (char *)v4 )
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
};

// Line 966: range 00000000166318D2-0000000016631D4F
int32_t __cdecl PlayerForgeComp::calcForgeQueueReturnItems(
        PlayerForgeComp *const this,
        const ForgeQueue *forge_queue,
        PlayerForgeComp::ItemMap *item_map)
{
  ForgeExcelConfigMgr *p_forge_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rdx
  uint32_t *p_count; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  unsigned int *v8; // rdx
  SelectType v9; // ebx
  uint32_t *p_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  SelectType *v12; // rdx
  char v13; // cl
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  unsigned int *v15; // rdx
  SelectType v16; // ebx
  std::map<unsigned int,unsigned int>::key_type *v17; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rax
  SelectType *v19; // rdx
  char v20; // cl
  std::map<unsigned int,unsigned int>::key_type v22; // [rsp+24h] [rbp-7Ch] BYREF
  std::map<unsigned int,unsigned int>::key_type __k; // [rsp+28h] [rbp-78h] BYREF
  uint32_t unfinish_count; // [rsp+2Ch] [rbp-74h]
  uint32_t item_count_0; // [rsp+30h] [rbp-70h]
  uint32_t item_count; // [rsp+34h] [rbp-6Ch]
  std::vector<data::IdCountConfig>::const_iterator __for_begin; // [rsp+38h] [rbp-68h] BYREF
  std::vector<data::IdCountConfig>::const_iterator __for_end; // [rsp+40h] [rbp-60h] BYREF
  const data::ForgeExcelConfig *config_ptr; // [rsp+48h] [rbp-58h]
  const std::vector<data::IdCountConfig> *__for_range; // [rsp+50h] [rbp-50h]
  const data::IdCountConfig *id_count_config; // [rsp+58h] [rbp-48h]
  std::shared_ptr<Config> v32; // [rsp+60h] [rbp-40h] BYREF
  common::milog::MiLogStream v33; // [rsp+70h] [rbp-30h] BYREF

  unfinish_count = ForgeQueue::getUnfinishCount(forge_queue);
  if ( !unfinish_count )
    return 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v32);
  p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32)->design_config.txt_config_mgr.forge_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&forge_queue->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&forge_queue->forge_id);
  }
  config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, forge_queue->forge_id);
  std::shared_ptr<Config>::~shared_ptr(&v32);
  if ( config_ptr )
  {
    __for_range = &config_ptr->material_items;
    __for_begin._M_current = std::vector<data::IdCountConfig>::begin(&config_ptr->material_items)._M_current;
    __for_end._M_current = std::vector<data::IdCountConfig>::end(&config_ptr->material_items)._M_current;
    while ( __gnu_cxx::operator!=<data::IdCountConfig const*,std::vector<data::IdCountConfig>>(&__for_begin, &__for_end) )
    {
      id_count_config = __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator*(&__for_begin);
      p_count = &id_count_config->count;
      if ( *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(p_count);
      }
      item_count = SAFE_MULTIPLY<unsigned int,unsigned int>(id_count_config->count, unfinish_count);
      v7 = std::map<unsigned int,unsigned int>::operator[](item_map, &id_count_config->id);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = SAFE_ADD<unsigned int,unsigned int>(*v8, item_count);
      p_id = &id_count_config->id;
      v11 = std::map<unsigned int,unsigned int>::operator[](item_map, &id_count_config->id);
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(p_id) = v13 != 0;
        __asan_report_store4(v11, p_id, v11);
      }
      *v12 = v9;
      __gnu_cxx::__normal_iterator<data::IdCountConfig const*,std::vector<data::IdCountConfig>>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->scoin_cost >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->scoin_cost);
    }
    if ( config_ptr->scoin_cost )
    {
      item_count_0 = SAFE_MULTIPLY<unsigned int,unsigned int>(config_ptr->scoin_cost, unfinish_count);
      __k = 202;
      v14 = std::map<unsigned int,unsigned int>::operator[](item_map, &__k);
      v15 = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v16 = SAFE_ADD<unsigned int,unsigned int>(*v15, item_count_0);
      v22 = 202;
      v17 = &v22;
      v18 = std::map<unsigned int,unsigned int>::operator[](item_map, &v22);
      v19 = v18;
      v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
      {
        LOBYTE(v17) = v20 != 0;
        __asan_report_store4(v18, v17, v18);
      }
      *v19 = v16;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->forge_point >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->forge_point >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4(&config_ptr->forge_point);
    }
    if ( config_ptr->forge_point )
      PlayerForgeComp::tryReturnForgePoint(this, config_ptr->forge_point, unfinish_count);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "calcForgeQueueReturnItems",
      977);
    v5 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v33,
           (const char (*)[28])"findForgeExcelConfig fail! ");
    operator<<(v5, forge_queue);
    common::milog::MiLogStream::~MiLogStream(&v33);
    return 5;
  }
};

// Line 1003: range 0000000016631D50-0000000016631F4A
void __cdecl PlayerForgeComp::mergeItemMap(
        const PlayerForgeComp *const this,
        PlayerForgeComp::ItemMap *target_item_map,
        const PlayerForgeComp::ItemMap *item_map)
{
  std::pair<unsigned int const,unsigned int> *v3; // rax
  std::pair<unsigned int const,unsigned int> *v4; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v5; // rax
  unsigned int v6; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v7; // rax
  unsigned int *v8; // rdx
  SelectType v9; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v10; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  SelectType *v12; // rdx
  char v13; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+40h] [rbp-20h]
  std::pair<unsigned int const,unsigned int> v20; // [rsp+48h] [rbp-18h] BYREF

  __for_range = item_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(item_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v3 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v4 = v3;
    if ( ((unsigned __int8)v3 & 7) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v3 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v3->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v3, 8LL);
    }
    v20 = *v4;
    item_id = std::get<0ul,unsigned int const,unsigned int>(&v20);
    v5 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(&v20);
    count = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    v6 = *count;
    v7 = std::map<unsigned int,unsigned int>::operator[](target_item_map, item_id);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = SAFE_ADD<unsigned int,unsigned int>(*v8, v6);
    v10 = item_id;
    v11 = std::map<unsigned int,unsigned int>::operator[](target_item_map, item_id);
    v12 = v11;
    v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
    if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
    {
      LOBYTE(v10) = v13 != 0;
      __asan_report_store4(v11, v10, v11);
    }
    *v12 = v9;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
};

// Line 1011: range 0000000016631F4C-000000001663230C
void __cdecl PlayerForgeComp::notifyMarkNewId(
        PlayerForgeComp *const this,
        uint32_t old_level,
        proto::MarkNewType mark_new_type,
        const std::unordered_map<unsigned int,std::vector<unsigned int>> *unlock_id_map)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const unsigned int *v9; // rax
  _DWORD *v10; // rdx
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  google::protobuf::RepeatedField<unsigned int> *v13; // r14
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v14; // rax
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  Player *player; // r14
  unsigned int __a; // [rsp+20h] [rbp-D0h] BYREF
  uint32_t level_limit; // [rsp+24h] [rbp-CCh]
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> __y; // [rsp+28h] [rbp-C8h] BYREF
  std::shared_ptr<const google::protobuf::Message> v22; // [rsp+30h] [rbp-C0h] BYREF
  char v23[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 10 level:1015 64 8 9 iter:1017 96 16 15 notify_ptr:1013";
  *(_QWORD *)(v4 + 16) = PlayerForgeComp::notifyMarkNewId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  *(_DWORD *)(v4 + 48) = PlayerBasicComp::getLevel(BasicComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v22);
  v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
  __a = PlayerExcelConfigMgr::getPlayerMaxLevel(&v8->design_config.txt_config_mgr.player_config_mgr);
  v9 = std::min<unsigned int>(&__a, (const unsigned int *)(v4 + 48));
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  level_limit = *v10 + 1;
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
  common::tools::perf::make_shared<proto::MarkNewNotify>();
  v11 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  proto::MarkNewNotify::set_mark_new_type(v11, mark_new_type);
  for ( *(_DWORD *)(v4 + 48) = old_level + 1; level_limit > *(_DWORD *)(v4 + 48); ++*(_DWORD *)(v4 + 48) )
  {
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                                 unlock_id_map,
                                                                                                 (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v4 + 48));
    __y._M_cur = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(unlock_id_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v4 + 64),
           &__y) )
    {
      v12 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      v13 = proto::MarkNewNotify::mutable_id_list(v12);
      v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v4 + 64));
      common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(&v14->second, v13);
    }
  }
  v15 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
  if ( proto::MarkNewNotify::id_list_size(v15) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::MarkNewNotify>((const std::shared_ptr<proto::MarkNewNotify> *)&v22);
    Player::sendMessage(player, &v22, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v22);
  }
  std::shared_ptr<proto::MarkNewNotify>::~shared_ptr((std::shared_ptr<proto::MarkNewNotify> *const)(v4 + 96));
  if ( v23 == (char *)v4 )
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

// Line 1031: range 000000001663230E-00000000166324EB
void __cdecl PlayerForgeComp::notifyMarkNewId(
        PlayerForgeComp *const this,
        proto::MarkNewType mark_new_type,
        std::vector<unsigned int> *p_unlock_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  google::protobuf::RepeatedField<unsigned int> *v8; // rdx
  std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  Player *player; // r14
  std::shared_ptr<proto::MarkNewNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 15 notify_ptr:1032";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::notifyMarkNewId;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::MarkNewNotify>();
  v6 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::MarkNewNotify::set_mark_new_type(v6, mark_new_type);
  v7 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  v8 = proto::MarkNewNotify::mutable_id_list(v7);
  common::tools::MiscUtils::vectorToRepeated<unsigned int,unsigned int>(p_unlock_id_vec, v8);
  v9 = std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::MarkNewNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  if ( proto::MarkNewNotify::id_list_size(v9) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::MarkNewNotify>(&__r);
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  }
  std::shared_ptr<proto::MarkNewNotify>::~shared_ptr((std::shared_ptr<proto::MarkNewNotify> *const)(v3 + 32));
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

// Line 1043: range 00000000166324EC-00000000166325B1
void __cdecl PlayerForgeComp::onPlayerLevelup(PlayerForgeComp *const this, const PlayerLevelupEvent *event)
{
  std::unordered_map<unsigned int,std::vector<unsigned int>> *p_unlock_forge_map; // rcx
  std::shared_ptr<Config> v3[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v3);
  p_unlock_forge_map = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v3)->design_config.txt_config_mgr.forge_config_mgr.unlock_forge_map_;
  if ( *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->last_level);
  }
  PlayerForgeComp::notifyMarkNewId(this, event->last_level, MARK_NEW_TYPE_FORGE, p_unlock_forge_map);
  std::shared_ptr<Config>::~shared_ptr(v3);
};

// Line 1049: range 00000000166325B2-0000000016632614
void __cdecl PlayerForgeComp::onOpenStateChange(PlayerForgeComp *const this, const OpenStateChangeEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->key >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->key);
  }
  if ( event->key == 37 )
    PlayerForgeComp::tryRefreshForgePoint(this, 1);
};

// Line 1056: range 0000000016632616-00000000166326FE
void __cdecl PlayerForgeComp::onQuestStart(PlayerForgeComp *const this, const StartQuestEvent *event)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  if ( PlayerForgeComp::unlockForgeByQuest(this, event->quest_id) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "onQuestStart",
      1059);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v3,
           (const char (*)[36])"unlockForgeByQuest failed, quest_id");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &event->quest_id);
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
};

// Line 1065: range 0000000016632700-00000000166327E8
void __cdecl PlayerForgeComp::onQuestFinish(PlayerForgeComp *const this, const FinishQuestEvent *event)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->quest_id);
  }
  if ( PlayerForgeComp::lockForgeByQuest(this, event->quest_id) )
  {
    common::milog::MiLogStream::create(
      &v3,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "onQuestFinish",
      1068);
    v2 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v3,
           (const char (*)[34])"lockForgeByQuest failed, quest_id");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &event->quest_id);
    common::milog::MiLogStream::~MiLogStream(&v3);
  }
};

// Line 1074: range 00000000166327EA-0000000016632844
void __cdecl PlayerForgeComp::onFinishParentQuestEvent(
        PlayerForgeComp *const this,
        const FinishParentQuestEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  PlayerForgeComp::lockForgeByParentQuest(this, event->parent_quest_id);
};

// Line 1079: range 0000000016632846-00000000166328A0
void __cdecl PlayerForgeComp::onFailParentQuestEvent(PlayerForgeComp *const this, const FailParentQuestEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  PlayerForgeComp::lockForgeByParentQuest(this, event->parent_quest_id);
};

// Line 1084: range 00000000166328A2-00000000166328FC
void __cdecl PlayerForgeComp::onCancelParentQuestEvent(
        PlayerForgeComp *const this,
        const CancelParentQuestEvent *event)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->parent_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->parent_quest_id);
  }
  PlayerForgeComp::lockForgeByParentQuest(this, event->parent_quest_id);
};

// Line 1090: range 00000000166328FE-0000000016632A32
void __cdecl PlayerForgeComp::tryRefreshForgePoint(PlayerForgeComp *const this, bool is_notify)
{
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t now; // [rsp+18h] [rbp-18h]
  uint32_t time_offset; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x25u) )
  {
    now = common::tools::TimeUtils::getNow();
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
    time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v3->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v7);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->last_day_refresh_time_);
    }
    if ( !this->last_day_refresh_time_
      || !common::tools::TimeUtils::isSameDay(now, this->last_day_refresh_time_, time_offset) )
    {
      PlayerForgeComp::doRefreshForgePoint(this, now, is_notify);
    }
  }
};

// Line 1110: range 0000000016632A34-0000000016632B24
// local variable allocation has failed, the output may be wrong!
void __cdecl PlayerForgeComp::doRefreshForgePoint(PlayerForgeComp *const this, uint32_t now, bool is_notify)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  __int64 v4; // rdx
  uint32_t forge_point_day_limit; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-10h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_day_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_day_refresh_time_, *(_QWORD *)&now, &this->last_day_refresh_time_);
  }
  this->last_day_refresh_time_ = now;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
  forge_point_day_limit = ConstValueExcelConfigMgr::getForgePointDayLimit(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  v4 = (*(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->cur_forge_point_, (((_BYTE)this + 36) & 7u) + 3, v4);
  this->cur_forge_point_ = forge_point_day_limit;
  if ( is_notify )
    PlayerForgeComp::notifyCurForgePoint(this);
};

// Line 1123: range 0000000016632B26-0000000016632BBF
void __cdecl PlayerForgeComp::doRefreshForgePointByGm(PlayerForgeComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  __int64 v2; // rdx
  uint32_t forge_point_day_limit; // [rsp+1Ch] [rbp-14h]
  std::shared_ptr<Config> v4; // [rsp+20h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v4);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v4);
  forge_point_day_limit = ConstValueExcelConfigMgr::getForgePointDayLimit(&v1->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v4);
  v2 = (*(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v2 )
    __asan_report_store4(&this->cur_forge_point_, (((_BYTE)this + 36) & 7u) + 3, v2);
  this->cur_forge_point_ = forge_point_day_limit;
};

// Line 1129: range 0000000016632BC0-0000000016632D93
void __fastcall PlayerForgeComp::setCurForgePointByGm(PlayerForgeComp *const this, uint32_t set_forge_point)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char *v6; // rsi
  uint32_t *v7; // rax
  uint32_t *v8; // rdx
  uint32_t v9; // ecx
  char v10; // dl
  __int64 v11; // rdx
  std::shared_ptr<Config> v12; // [rsp+10h] [rbp-90h] BYREF
  char v13[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 26 forge_point_day_limit:1130 64 4 20 set_forge_point:1128";
  *(_QWORD *)(v2 + 16) = PlayerForgeComp::setCurForgePointByGm;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = set_forge_point;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  *(_DWORD *)(v2 + 48) = ConstValueExcelConfigMgr::getForgePointDayLimit(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  v6 = (char *)(v2 + 48);
  v7 = (uint32_t *)std::min<unsigned int>((const unsigned int *)(v2 + 64), (const unsigned int *)(v2 + 48));
  v8 = v7;
  if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v7);
  }
  v9 = *v8;
  v10 = *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000);
  LOBYTE(v6) = v10 != 0;
  v11 = (v10 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v10);
  if ( (_BYTE)v11 )
    __asan_report_store4(&this->cur_forge_point_, v6, v11);
  this->cur_forge_point_ = v9;
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

// Line 1137: range 0000000016632D94-0000000016632E66
int32_t __cdecl PlayerForgeComp::notifyCurForgePoint(PlayerForgeComp *const this)
{
  Player *player; // rbx
  int32_t v2; // ebx
  proto::PropValue prop_value; // [rsp+10h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_forge_point_);
  }
  buildIntProp(&prop_value, 0x272Du, this->cur_forge_point_);
  v2 = Player::notifyPlayerProp(player, &prop_value);
  proto::PropValue::~PropValue(&prop_value);
  return v2;
};

// Line 1143: range 0000000016632E68-00000000166330E8
__int64 __fastcall PlayerForgeComp::tryConsumeForgePoint(
        PlayerForgeComp *const this,
        uint32_t forge_point,
        uint32_t forge_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  SelectType consume_forge_point; // [rsp+1Ch] [rbp-A4h]
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-A0h] BYREF
  char v16[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 16 forge_point:1142 64 4 16 forge_count:1142";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::tryConsumeForgePoint;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 48) = forge_point;
  *(_DWORD *)(v3 + 64) = forge_count;
  consume_forge_point = SAFE_MULTIPLY<unsigned int,unsigned int>(*(_DWORD *)(v3 + 48), *(_DWORD *)(v3 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->cur_forge_point_);
  }
  if ( consume_forge_point > this->cur_forge_point_ )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/forge/player_forge_comp.cpp",
      "tryConsumeForgePoint",
      1152);
    v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v15,
           (const char (*)[29])"tryConsumeForgePoint failed,");
    v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v7, (const char (*)[19])" cur_forge_point: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->cur_forge_point_);
    v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" forge_point: ");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v11, (const char (*)[15])" forge_count: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    this->cur_forge_point_ -= consume_forge_point;
    PlayerForgeComp::notifyCurForgePoint(this);
    result = 0LL;
  }
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

// Line 1161: range 00000000166330EA-00000000166333AE
void __cdecl PlayerForgeComp::tryReturnForgePoint(
        PlayerForgeComp *const this,
        uint32_t forge_point,
        uint32_t unfinished_point)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t v8; // ecx
  char v9; // dl
  __int64 v10; // rsi
  __int64 v11; // rdx
  char *v12; // rsi
  uint32_t *v13; // rax
  uint32_t *v14; // rdx
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  unsigned int forge_point_count; // [rsp+1Ch] [rbp-74h]
  std::shared_ptr<Config> v20; // [rsp+20h] [rbp-70h] BYREF
  char v21[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 26 forge_point_day_limit:1169";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::tryReturnForgePoint;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::isStateOpen(BasicComp, 0x25u) )
  {
    forge_point_count = SAFE_MULTIPLY<unsigned int,unsigned int>(forge_point, unfinished_point);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    *(_DWORD *)(v3 + 32) = ConstValueExcelConfigMgr::getForgePointDayLimit(&v7->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v20);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->cur_forge_point_);
    }
    v10 = forge_point_count;
    v8 = SAFE_ADD<unsigned int,unsigned int>(this->cur_forge_point_, forge_point_count);
    v9 = *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000);
    LOBYTE(v10) = v9 != 0;
    v11 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v9);
    if ( (_BYTE)v11 )
      __asan_report_store4(&this->cur_forge_point_, v10, v11);
    this->cur_forge_point_ = v8;
    v12 = (char *)(v3 + 32);
    v13 = (uint32_t *)std::min<unsigned int>(&this->cur_forge_point_, (const unsigned int *)(v3 + 32));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    v15 = *v14;
    v16 = *(_BYTE *)(((unsigned __int64)&this->cur_forge_point_ >> 3) + 0x7FFF8000);
    LOBYTE(v12) = v16 != 0;
    v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v16);
    if ( (_BYTE)v17 )
      __asan_report_store4(&this->cur_forge_point_, v12, v17);
    this->cur_forge_point_ = v15;
    PlayerForgeComp::notifyCurForgePoint(this);
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1179: range 00000000166333B0-0000000016633A2F
__int64 __fastcall PlayerForgeComp::unlockForgeByFormula(PlayerForgeComp *const this, uint32_t forge_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rbx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerWatcherComp *WatcherComp; // rax
  common::milog::MiLogStream *v17; // [rsp+8h] [rbp-E8h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-CDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  const data::ForgeExcelConfig *config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-C0h] BYREF
  std::vector<unsigned int> p_unlock_id_vec; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v23; // [rsp+60h] [rbp-90h] BYREF
  char v24[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 forge_id:1178";
  *(_QWORD *)(v2 + 16) = PlayerForgeComp::unlockForgeByFormula;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = forge_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
                 &v5->design_config.txt_config_mgr.forge_config_mgr,
                 *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->unlock_config.unlock_method);
    }
    if ( config_ptr->unlock_config.unlock_method == FORGE_UNLOCK_FORMULA )
    {
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
             &this->unlock_forge_id_set_,
             (const unsigned int *)(v2 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/forge/player_forge_comp.cpp",
          "unlockForgeByFormula",
          1193);
        v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v23,
                (const char (*)[48])"[FORGE] forge_id is already unlocked, forge_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v11,
                (const unsigned int *)(v2 + 32));
        v13 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v12, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        result = 0LL;
      }
      else
      {
        std::unordered_set<unsigned int>::insert(
          &this->unlock_forge_id_set_,
          (const std::unordered_set<unsigned int>::value_type *)(v2 + 32));
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/forge/player_forge_comp.cpp",
          "unlockForgeByFormula",
          1199);
        v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                &v23,
                (const char (*)[51])"[FORGE] forge_id is unlocked by formula, forge_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 32));
        v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v23);
        PlayerForgeComp::notifyForgeFormulaData(this, *(_DWORD *)(v2 + 32), 0);
        val = *(_DWORD *)(v2 + 32);
        std::allocator<unsigned int>::allocator(&__a);
        std::vector<unsigned int>::vector(
          &p_unlock_id_vec,
          (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
          &__a);
        PlayerForgeComp::notifyMarkNewId(this, MARK_NEW_TYPE_FORGE, &p_unlock_id_vec);
        std::vector<unsigned int>::~vector(&p_unlock_id_vec);
        std::allocator<unsigned int>::~allocator(&__a);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        WatcherComp = Player::getWatcherComp(this->player_);
        PlayerWatcherComp::triggerUnlockForge(WatcherComp, *(_DWORD *)(v2 + 32));
        result = 0LL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/forge/player_forge_comp.cpp",
        "unlockForgeByFormula",
        1188);
      v8 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
             &v23,
             (const char (*)[48])"forge can not be unlocked by Formula, forge_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v23);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "unlockForgeByFormula",
      1183);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v23,
           (const char (*)[39])"findForgeExcelConfig failed, forge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v23);
    result = 0xFFFFFFFFLL;
  }
  if ( v24 == (char *)v2 )
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

// Line 1210: range 0000000016633A30-000000001663414E
__int64 __fastcall PlayerForgeComp::unlockForgeByQuest(PlayerForgeComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  ForgeExcelConfigMgr *p_forge_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  bool v17; // [rsp+8h] [rbp-108h]
  common::milog::MiLogStream *v18; // [rsp+8h] [rbp-108h]
  std::allocator<unsigned int> __a; // [rsp+23h] [rbp-EDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  const uint32_t *forge_id; // [rsp+40h] [rbp-D0h]
  const data::ForgeExcelConfig *config_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v26; // [rsp+50h] [rbp-C0h] BYREF
  std::vector<unsigned int> p_unlock_id_vec; // [rsp+60h] [rbp-B0h] BYREF
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-90h] BYREF
  char v29[112]; // [rsp+A0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 quest_id:1209";
  *(_QWORD *)(v2 + 16) = PlayerForgeComp::unlockForgeByQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  v17 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>(
           &v5->design_config.txt_config_mgr.forge_config_mgr.quest_unlock_forge_map_,
           (const unsigned int *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( v17 )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    __for_range = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                    &v7->design_config.txt_config_mgr.forge_config_mgr.quest_unlock_forge_map_,
                    (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v26);
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        result = 0LL;
        goto LABEL_26;
      }
      forge_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.forge_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)forge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(forge_id);
      }
      config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, *forge_id);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( !config_ptr )
        break;
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/forge/player_forge_comp.cpp",
        "unlockForgeByQuest",
        1223);
      v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v28,
              (const char (*)[49])"[FORGE] forge_id is unlocked by quest, forge_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, forge_id);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])", quest_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::~MiLogStream(&v28);
      if ( *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)forge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(forge_id);
      }
      PlayerForgeComp::notifyForgeFormulaData(this, *forge_id, 0);
      if ( *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)forge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(forge_id);
      }
      val = *forge_id;
      std::allocator<unsigned int>::allocator(&__a);
      std::vector<unsigned int>::vector(
        &p_unlock_id_vec,
        (std::initializer_list<unsigned int>)__PAIR128__(1LL, &val),
        &__a);
      PlayerForgeComp::notifyMarkNewId(this, MARK_NEW_TYPE_FORGE, &p_unlock_id_vec);
      std::vector<unsigned int>::~vector(&p_unlock_id_vec);
      std::allocator<unsigned int>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      WatcherComp = Player::getWatcherComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)forge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(forge_id);
      }
      PlayerWatcherComp::triggerUnlockForge(WatcherComp, *forge_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "unlockForgeByQuest",
      1220);
    v9 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v28,
           (const char (*)[37])"findForgeExcelConfig fail, forge_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, forge_id);
    v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
  }
LABEL_26:
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

// Line 1233: range 0000000016634150-00000000166346CC
__int64 __fastcall PlayerForgeComp::lockForgeByQuest(PlayerForgeComp *const this, uint32_t quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  bool v6; // r14
  __int64 result; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  ForgeExcelConfigMgr *p_forge_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r13
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-B8h]
  const uint32_t *forge_id; // [rsp+30h] [rbp-B0h]
  const data::ForgeExcelConfig *config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-90h] BYREF
  char v26[112]; // [rsp+70h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 quest_id:1232";
  *(_QWORD *)(v2 + 16) = PlayerForgeComp::lockForgeByQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = quest_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  v6 = !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::vector<unsigned int>> const,unsigned int>(
          &v5->design_config.txt_config_mgr.forge_config_mgr.quest_lock_forge_map_,
          (const unsigned int *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( v6 )
  {
    result = 0LL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    __for_range = std::unordered_map<unsigned int,std::vector<unsigned int>>::at(
                    &v8->design_config.txt_config_mgr.forge_config_mgr.quest_lock_forge_map_,
                    (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v24);
    __for_begin._M_current = std::vector<unsigned int>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
    while ( 1 )
    {
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        result = 0LL;
        goto LABEL_20;
      }
      forge_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.forge_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)forge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(forge_id);
      }
      config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, *forge_id);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( !config_ptr )
        break;
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/forge/player_forge_comp.cpp",
        "lockForgeByQuest",
        1246);
      v13 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v25,
              (const char (*)[47])"[FORGE] forge_id is locked by quest, forge_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, forge_id);
      v15 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v14, (const char (*)[12])", quest_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 32));
      v17 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
      common::milog::MiLogStream::~MiLogStream(&v25);
      if ( *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)forge_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)forge_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(forge_id);
      }
      PlayerForgeComp::notifyForgeFormulaData(this, *forge_id, 1);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "lockForgeByQuest",
      1243);
    v10 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            &v25,
            (const char (*)[37])"findForgeExcelConfig fail, forge_id:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, forge_id);
    v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    result = 0xFFFFFFFFLL;
  }
LABEL_20:
  if ( v26 == (char *)v2 )
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

// Line 1254: range 00000000166346CE-00000000166349C1
__int64 __fastcall PlayerForgeComp::lockForgeByParentQuest(PlayerForgeComp *const this, uint32_t parent_quest_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  PlayerQuestComp *QuestComp; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r13
  __int64 result; // rax
  unsigned int *v10; // rax
  unsigned int *v11; // rdx
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  unsigned int quest_id; // [rsp+1Ch] [rbp-A4h]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  const data::MainQuestExcelConfig *parent_quest_config_ptr; // [rsp+30h] [rbp-90h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-80h] BYREF
  char v19[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 20 parent_quest_id:1253";
  *(_QWORD *)(v2 + 16) = PlayerForgeComp::lockForgeByParentQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = parent_quest_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  QuestComp = Player::getQuestComp(this->player_);
  parent_quest_config_ptr = PlayerQuestComp::findPlayerParentQuestExcelConfig(QuestComp, *(_DWORD *)(v2 + 32));
  if ( parent_quest_config_ptr )
  {
    __for_range = &parent_quest_config_ptr->child_quest_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&parent_quest_config_ptr->child_quest_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&parent_quest_config_ptr->child_quest_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v10 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      quest_id = *v11;
      PlayerForgeComp::lockForgeByQuest(this, quest_id);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "lockForgeByParentQuest",
      1258);
    v6 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
           &v18,
           (const char (*)[50])"parent_quest_config_ptr nullptr, parent_quest_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = 0xFFFFFFFFLL;
  }
  if ( v19 == (char *)v2 )
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

// Line 1269: range 00000000166349C2-0000000016634C41
_BOOL8 __fastcall PlayerForgeComp::isUnlockByQuest(PlayerForgeComp *const this, uint32_t forge_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  PlayerQuestComp *QuestComp; // rax
  const data::ForgeExcelConfig *config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-80h] BYREF
  char v12[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 forge_id:1268";
  *(_QWORD *)(v2 + 16) = PlayerForgeComp::isUnlockByQuest;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = forge_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
                 &v5->design_config.txt_config_mgr.forge_config_mgr,
                 *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->unlock_config.unlock_method >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->unlock_config.unlock_method);
    }
    if ( config_ptr->unlock_config.unlock_method == FORGE_UNLOCK_QUEST )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      QuestComp = Player::getQuestComp(this->player_);
      result = PlayerQuestComp::isUnlockForgeByQuest(QuestComp, *(_DWORD *)(v2 + 32));
    }
    else
    {
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "isUnlockByQuest",
      1273);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v11,
           (const char (*)[37])"findForgeExcelConfig fail, forge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0LL;
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
  return result;
};

// Line 1288: range 0000000016634C42-0000000016634DFC
int32_t __cdecl PlayerForgeComp::notifyForgeFormulaData(PlayerForgeComp *const this, uint32_t forge_id, bool is_locked)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto::ForgeFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::ForgeFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *player; // r14
  int32_t result; // eax
  std::shared_ptr<proto::ForgeFormulaDataNotify> __r; // [rsp+10h] [rbp-80h] BYREF
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 forge_notify_ptr:1290";
  *(_QWORD *)(v3 + 16) = PlayerForgeComp::notifyForgeFormulaData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::ForgeFormulaDataNotify>();
  v6 = std::__shared_ptr_access<proto::ForgeFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::ForgeFormulaDataNotify::set_forge_id(v6, forge_id);
  v7 = std::__shared_ptr_access<proto::ForgeFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::ForgeFormulaDataNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::ForgeFormulaDataNotify::set_is_locked(v7, is_locked);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::ForgeFormulaDataNotify>(&__r);
  Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::ForgeFormulaDataNotify>::~shared_ptr((std::shared_ptr<proto::ForgeFormulaDataNotify> *const)(v3 + 32));
  result = 0;
  if ( v12 == (char *)v3 )
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

// Line 1298: range 0000000016634DFE-000000001663505E
_BOOL8 __fastcall PlayerForgeComp::isForgeUnlocked(PlayerForgeComp *const this, uint32_t forge_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  _BOOL8 result; // rax
  const data::ForgeExcelConfig *config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v9; // [rsp+20h] [rbp-90h] BYREF
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 forge_id:1297";
  *(_QWORD *)(v2 + 16) = PlayerForgeComp::isForgeUnlocked;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = forge_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9);
  config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(
                 &v5->design_config.txt_config_mgr.forge_config_mgr,
                 *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v9);
  if ( config_ptr )
  {
    if ( *(char *)(((unsigned __int64)&config_ptr->is_default_show >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config_ptr->is_default_show);
    result = config_ptr->is_default_show
          || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
               &this->unlock_forge_id_set_,
               (const unsigned int *)(v2 + 32))
          || PlayerForgeComp::isUnlockByQuest(this, *(_DWORD *)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/forge/player_forge_comp.cpp",
      "isForgeUnlocked",
      1302);
    v6 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v10,
           (const char (*)[31])"findForgeExcelConfig fail! id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0LL;
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
  return result;
};
