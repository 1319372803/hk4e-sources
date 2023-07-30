// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/giving/player_giving_comp.cpp

// Line 30: range 000000001663546A-0000000016635785
void __cdecl GivingRecord::toClient(const GivingRecord *const this, proto::GivingRecord *proto_giving_record)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::Map<unsigned int,unsigned int> *proto_material_count_map; // [rsp+28h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v12; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+48h] [rbp-18h]

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  proto::GivingRecord::set_giving_id(proto_giving_record, this->giving_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finished);
  }
  proto::GivingRecord::set_is_finished(proto_giving_record, this->is_finished);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_group_id);
  }
  proto::GivingRecord::set_last_group_id(proto_giving_record, this->last_group_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_gadget_giving >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gadget_giving >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_gadget_giving);
  }
  if ( this->is_gadget_giving )
  {
    proto::GivingRecord::set_is_gadget_giving(proto_giving_record, this->is_gadget_giving);
    if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->group_id);
    }
    proto::GivingRecord::set_group_id(proto_giving_record, this->group_id);
    if ( *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->config_id);
    }
    proto::GivingRecord::set_config_id(proto_giving_record, this->config_id);
    proto_material_count_map = proto::GivingRecord::mutable_material_cnt_map(proto_giving_record);
    __for_range = &this->material_cnt_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->material_cnt_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->material_cnt_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      material_id = std::get<0ul,unsigned int const,unsigned int>(v12);
      v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v12);
      count = v2;
      if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v2);
      }
      if ( *count )
      {
        v3 = *count;
        v4 = material_id;
        v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_material_count_map, material_id);
        v6 = v5;
        v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
        if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
        {
          LOBYTE(v4) = v7 != 0;
          __asan_report_store4(v5, v4, v5);
        }
        *v6 = v3;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
  }
};

// Line 52: range 0000000016635786-0000000016635C44
int32_t __cdecl PlayerGivingComp::fromBin(PlayerGivingComp *const this, const proto::PlayerDataBin *player_data_bin)
{
  const unsigned int *v2; // rsi
  __int64 v3; // rdx
  char v4; // al
  bool is_finished; // cl
  char v6; // dl
  __int64 v7; // rdx
  __int64 group_id; // rdx
  char v9; // al
  bool is_gadget_giving; // cl
  char v11; // dl
  __int64 v12; // rdx
  __int64 v13; // rdx
  char v14; // al
  uint32_t v15; // ecx
  char v16; // dl
  __int64 v17; // rdx
  const unsigned int *v18; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  const proto::PlayerGivingCompBin *proto_comp; // [rsp+20h] [rbp-E0h]
  const google::protobuf::Map<unsigned int,proto::GivingRecordBin> *__for_range; // [rsp+28h] [rbp-D8h]
  const unsigned int *p_giving_id; // [rsp+30h] [rbp-D0h]
  GivingRecord *giving_record; // [rsp+38h] [rbp-C8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_0; // [rsp+40h] [rbp-C0h]
  const unsigned int *p_material_id; // [rsp+48h] [rbp-B8h]
  google::protobuf::Map<unsigned int,proto::GivingRecordBin>::const_iterator __for_begin; // [rsp+50h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,proto::GivingRecordBin>::const_iterator __for_end; // [rsp+70h] [rbp-90h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+90h] [rbp-70h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+B0h] [rbp-50h] BYREF
  common::milog::MiLogStream v35; // [rsp+D0h] [rbp-30h] BYREF

  proto_comp = proto::PlayerDataBin::giving_bin(player_data_bin);
  __for_range = proto::PlayerGivingCompBin::giving_record_map(proto_comp);
  google::protobuf::Map<unsigned int,proto::GivingRecordBin>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,proto::GivingRecordBin>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_giving_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::GivingRecordBin>::const_iterator::operator*(&__for_begin);
    v2 = p_giving_id;
    giving_record = std::map<unsigned int,GivingRecord>::operator[](&this->giving_record_map_, p_giving_id);
    v3 = proto::GivingRecordBin::giving_id((const proto::GivingRecordBin *const)(p_giving_id + 2));
    v4 = *(_BYTE *)(((unsigned __int64)giving_record >> 3) + 0x7FFF8000);
    if ( v4 != 0 && v4 <= 3 )
    {
      LOBYTE(v2) = v4 != 0;
      __asan_report_store4(giving_record, v2, v3);
    }
    giving_record->giving_id = v3;
    is_finished = proto::GivingRecordBin::is_finished((const proto::GivingRecordBin *const)(p_giving_id + 2));
    v6 = *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000);
    LOBYTE(v2) = v6 != 0;
    v7 = (v6 != 0) & (unsigned __int8)((((unsigned __int8)giving_record + 4) & 7) >= v6);
    if ( (_BYTE)v7 )
      __asan_report_store1(&giving_record->is_finished, v2, v7);
    giving_record->is_finished = is_finished;
    group_id = proto::GivingRecordBin::last_group_id((const proto::GivingRecordBin *const)(p_giving_id + 2));
    v9 = *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000);
    if ( v9 != 0 && v9 <= 3 )
    {
      LOBYTE(v2) = v9 != 0;
      __asan_report_store4(&giving_record->last_group_id, v2, group_id);
    }
    giving_record->last_group_id = group_id;
    if ( proto::GivingRecordBin::is_gadget_giving((const proto::GivingRecordBin *const)(p_giving_id + 2)) )
    {
      is_gadget_giving = proto::GivingRecordBin::is_gadget_giving((const proto::GivingRecordBin *const)(p_giving_id + 2));
      v11 = *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3) + 0x7FFF8000);
      LOBYTE(v2) = v11 != 0;
      v12 = (v11 != 0) & (unsigned __int8)((((unsigned __int8)giving_record + 12) & 7) >= v11);
      if ( (_BYTE)v12 )
        __asan_report_store1(&giving_record->is_gadget_giving, v2, v12);
      giving_record->is_gadget_giving = is_gadget_giving;
      v13 = proto::GivingRecordBin::group_id((const proto::GivingRecordBin *const)(p_giving_id + 2));
      v14 = *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v2) = v14 != 0;
        __asan_report_store4(&giving_record->group_id, v2, v13);
      }
      giving_record->group_id = v13;
      v15 = proto::GivingRecordBin::config_id((const proto::GivingRecordBin *const)(p_giving_id + 2));
      v16 = *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3) + 0x7FFF8000);
      LOBYTE(v2) = v16 != 0;
      v17 = (v16 != 0) & (unsigned __int8)((char)((((_BYTE)giving_record + 20) & 7) + 3) >= v16);
      if ( (_BYTE)v17 )
        __asan_report_store4(&giving_record->config_id, v2, v17);
      giving_record->config_id = v15;
      __for_range_0 = proto::GivingRecordBin::material_cnt_map((const proto::GivingRecordBin *const)(p_giving_id + 2));
      google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_0, __for_range_0);
      google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end_0, __for_range_0);
      while ( google::protobuf::operator!=(&__for_begin_0, &__for_end_0) )
      {
        p_material_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_0);
        v19 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                &giving_record->material_cnt_map,
                p_material_id,
                p_material_id + 1,
                (const unsigned int *)&giving_record->material_cnt_map,
                v18);
        if ( !v19.second )
        {
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/giving/player_giving_comp.cpp",
            "fromBin",
            69);
          v20 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  &v35,
                  (const char (*)[23])"duplicate material_id:");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, p_material_id);
          v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
        google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_0);
      }
    }
    google::protobuf::Map<unsigned int,proto::GivingRecordBin>::const_iterator::operator++(&__for_begin);
  }
  return 0;
};

// Line 79: range 0000000016635C46-0000000016636048
int32_t __cdecl PlayerGivingComp::toBin(PlayerGivingComp *const this, proto::PlayerDataBin *player_data_bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v2; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v3; // ebx
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *v4; // rsi
  unsigned int *v5; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rdx
  char v7; // cl
  std::map<unsigned int,GivingRecord>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::map<unsigned int,GivingRecord>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-80h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end_0; // [rsp+28h] [rbp-78h] BYREF
  proto::PlayerGivingCompBin *proto_comp; // [rsp+30h] [rbp-70h]
  google::protobuf::Map<unsigned int,proto::GivingRecordBin> *giving_record_bin_map; // [rsp+38h] [rbp-68h]
  std::map<unsigned int,GivingRecord> *__for_range; // [rsp+40h] [rbp-60h]
  const std::pair<unsigned int const,GivingRecord> *v16; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,GivingRecord> >::type *giving_id; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,GivingRecord> >::type *giving_record; // [rsp+58h] [rbp-48h]
  proto::GivingRecordBin *giving_record_bin; // [rsp+60h] [rbp-40h]
  google::protobuf::Map<unsigned int,unsigned int> *material_count_map; // [rsp+68h] [rbp-38h]
  const std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+70h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v22; // [rsp+78h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+80h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+88h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::mutable_giving_bin(player_data_bin);
  giving_record_bin_map = proto::PlayerGivingCompBin::mutable_giving_record_map(proto_comp);
  __for_range = &this->giving_record_map_;
  __for_begin._M_node = std::map<unsigned int,GivingRecord>::begin(&this->giving_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator*(&__for_begin);
    giving_id = std::get<0ul,unsigned int const,GivingRecord>(v16);
    giving_record = (std::tuple_element<1,const std::pair<unsigned int const,GivingRecord> >::type *)std::get<1ul,unsigned int const,GivingRecord>(v16);
    giving_record_bin = google::protobuf::Map<unsigned int,proto::GivingRecordBin>::operator[](
                          giving_record_bin_map,
                          giving_id);
    if ( *(_BYTE *)(((unsigned __int64)giving_record >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)giving_record >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(giving_record);
    }
    proto::GivingRecordBin::set_giving_id(giving_record_bin, giving_record->giving_id);
    if ( *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)giving_record + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load1(&giving_record->is_finished);
    }
    proto::GivingRecordBin::set_is_finished(giving_record_bin, giving_record->is_finished);
    if ( *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&giving_record->last_group_id);
    }
    proto::GivingRecordBin::set_last_group_id(giving_record_bin, giving_record->last_group_id);
    if ( *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)giving_record + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&giving_record->is_gadget_giving);
    }
    if ( giving_record->is_gadget_giving )
    {
      proto::GivingRecordBin::set_is_gadget_giving(giving_record_bin, giving_record->is_gadget_giving);
      if ( *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&giving_record->group_id);
      }
      proto::GivingRecordBin::set_group_id(giving_record_bin, giving_record->group_id);
      if ( *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)giving_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&giving_record->config_id);
      }
      proto::GivingRecordBin::set_config_id(giving_record_bin, giving_record->config_id);
      material_count_map = proto::GivingRecordBin::mutable_material_cnt_map(giving_record_bin);
      __for_range_0 = &giving_record->material_cnt_map;
      __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin(&giving_record->material_cnt_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
        material_id = std::get<0ul,unsigned int const,unsigned int>(v22);
        v2 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v22);
        count = v2;
        if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v2);
        }
        if ( *count )
        {
          v3 = *count;
          v4 = material_id;
          v5 = google::protobuf::Map<unsigned int,unsigned int>::operator[](material_count_map, material_id);
          v6 = v5;
          v7 = *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000);
          if ( v7 != 0 && (char)(((unsigned __int8)v5 & 7) + 3) >= v7 )
          {
            LOBYTE(v4) = v7 != 0;
            __asan_report_store4(v5, v4, v5);
          }
          *v6 = v3;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 108: range 000000001663604A-0000000016636297
int32_t __cdecl PlayerGivingComp::notifyAllData(PlayerGivingComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<proto::GivingRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  proto::GivingRecord *v5; // rax
  Player *player; // r14
  int32_t result; // eax
  std::map<unsigned int,GivingRecord>::iterator __for_begin; // [rsp+10h] [rbp-B0h] BYREF
  std::map<unsigned int,GivingRecord>::iterator __for_end; // [rsp+18h] [rbp-A8h] BYREF
  std::map<unsigned int,GivingRecord> *__for_range; // [rsp+20h] [rbp-A0h]
  const std::pair<unsigned int const,GivingRecord> *v11; // [rsp+28h] [rbp-98h]
  std::tuple_element<0,const std::pair<unsigned int const,GivingRecord> >::type *giving_id; // [rsp+30h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,GivingRecord> >::type *giving_record; // [rsp+38h] [rbp-88h]
  std::shared_ptr<proto::GivingRecordNotify> __r; // [rsp+40h] [rbp-80h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 notify_ptr:109";
  *(_QWORD *)(v1 + 16) = PlayerGivingComp::notifyAllData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::GivingRecordNotify>();
  __for_range = &this->giving_record_map_;
  __for_begin._M_node = std::map<unsigned int,GivingRecord>::begin(&this->giving_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator*(&__for_begin);
    giving_id = std::get<0ul,unsigned int const,GivingRecord>(v11);
    giving_record = (std::tuple_element<1,const std::pair<unsigned int const,GivingRecord> >::type *)std::get<1ul,unsigned int const,GivingRecord>(v11);
    v4 = std::__shared_ptr_access<proto::GivingRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GivingRecordNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v5 = proto::GivingRecordNotify::add_giving_record_list(v4);
    GivingRecord::toClient(giving_record, v5);
    std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::GivingRecordNotify>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::GivingRecordNotify>::~shared_ptr((std::shared_ptr<proto::GivingRecordNotify> *const)(v1 + 32));
  result = (int)player;
  if ( v15 == (char *)v1 )
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

// Line 119: range 0000000016636298-0000000016638455
int32_t __cdecl PlayerGivingComp::onItemGivingReq(
        PlayerGivingComp *const this,
        const proto::ItemGivingReq *req,
        proto::ItemGivingRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // r14
  int32_t v9; // r14d
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v17; // rax
  bool *p_is_finished; // rax
  common::milog::MiLogStream *v19; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  data::GivingMethod giving_method; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rax
  bool v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v35; // rax
  _QWORD *v36; // rdx
  GivingExcelConfigMgr *v37; // rcx
  bool v38; // r14
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v53; // rax
  _QWORD *v54; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v55; // rax
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type v56; // ecx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  GivingExcelConfigMgr *p_giving_config_mgr; // rcx
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  PlayerItemComp *v66; // rax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  __int64 v73; // rsi
  __int64 v74; // rdx
  const unsigned int *v75; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v76; // rax
  common::milog::MiLogStream *v77; // rax
  PlayerQuestComp *QuestComp; // rax
  PlayerEventComp *EventComp; // r14
  uint32_t v80; // ecx
  common::milog::MiLogStream *v81; // rax
  __int64 v82; // rsi
  uint32_t config_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v84; // rdx
  char v85; // cl
  int v86; // r14d
  __int64 v87; // rax
  char v88; // dl
  __int64 v89; // rdx
  uint32_t v90; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v91; // rdx
  char v92; // cl
  Group *v93; // rax
  int32_t result; // eax
  unsigned int __args_0; // [rsp+20h] [rbp-280h] BYREF
  unsigned int Uid; // [rsp+24h] [rbp-27Ch] BYREF
  uint32_t last_group_id; // [rsp+28h] [rbp-278h]
  uint32_t total_item_count; // [rsp+2Ch] [rbp-274h]
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-270h] BYREF
  const google::protobuf::RepeatedPtrField<proto::ItemParam> *__for_range; // [rsp+38h] [rbp-268h]
  GivingRecord *giving_record; // [rsp+40h] [rbp-260h]
  const data::GivingExcelConfig *config_ptr; // [rsp+48h] [rbp-258h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id_0; // [rsp+50h] [rbp-250h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+58h] [rbp-248h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+60h] [rbp-240h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+68h] [rbp-238h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+70h] [rbp-230h]
  std::vector<ItemParam> *__for_range_1; // [rsp+78h] [rbp-228h]
  const ItemParam *item_param; // [rsp+80h] [rbp-220h]
  const proto::ItemParam *proto_item_param; // [rsp+88h] [rbp-218h]
  common::milog::MiLogStream v112; // [rsp+90h] [rbp-210h] BYREF
  std::string val; // [rsp+B0h] [rbp-1F0h] BYREF
  char v114[464]; // [rsp+D0h] [rbp-1D0h] BYREF

  v3 = (unsigned __int64)v114;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(416LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 13 giving_id:120 48 8 8 iter:153 80 8 8 iter:235 112 8 10 reason:265 144 16 17 cur_scene"
                        "_ptr:182 176 16 13 event_ptr:294 208 16 13 group_ptr:300 240 16 11 evt_ptr:307 272 24 18 item_pa"
                        "ram_vec:122 336 48 12 item_map:121";
  *(_QWORD *)(v3 + 16) = PlayerGivingComp::onItemGivingReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = -218959360;
  v5[536862730] = 62194;
  v5[536862732] = -202116109;
  *(_DWORD *)(v3 + 32) = proto::ItemGivingReq::giving_id(req);
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 336));
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 272));
  last_group_id = 0;
  proto::ItemGivingRsp::set_giving_id(rsp_0, *(_DWORD *)(v3 + 32));
  __for_range = proto::ItemGivingReq::item_param_list(req);
  *(google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator *)(v3 + 80) = google::protobuf::RepeatedPtrField<proto::ItemParam>::begin(__for_range);
  *(google::protobuf::RepeatedPtrField<proto::ItemParam>::const_iterator *)(v3 + 112) = google::protobuf::RepeatedPtrField<proto::ItemParam>::end(__for_range);
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator!=(
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)(v3 + 80),
            (const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam>::iterator *)(v3 + 112)) )
  {
    proto_item_param = google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator*((const google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)(v3 + 80));
    Uid = proto::ItemParam::count(proto_item_param);
    __args_0 = proto::ItemParam::item_id(proto_item_param);
    v7 = std::map<unsigned int,unsigned int>::emplace<unsigned int,unsigned int>(
           (std::map<unsigned int,unsigned int> *const)(v3 + 336),
           &__args_0,
           &Uid,
           &__args_0,
           v6);
    if ( !v7.second )
    {
      common::milog::MiLogStream::create(
        &v112,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/giving/player_giving_comp.cpp",
        "onItemGivingReq",
        131);
      v8 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v112,
             (const char (*)[34])"duplicate item_id, ItemGivingReq:");
      google::protobuf::Message::ShortDebugString[abi:cxx11](&val, &req->google::protobuf::Message);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &val);
      std::string::~string(&val);
      common::milog::MiLogStream::~MiLogStream(&v112);
      v9 = -1;
      goto LABEL_140;
    }
    *(_QWORD *)(v3 + 240) = 0LL;
    *(_QWORD *)(v3 + 248) = 0LL;
    *(_DWORD *)(v3 + 240) = proto::ItemParam::item_id(proto_item_param);
    *(_DWORD *)(v3 + 244) = proto::ItemParam::count(proto_item_param);
    std::vector<ItemParam>::push_back(
      (std::vector<ItemParam> *const)(v3 + 272),
      (const std::vector<ItemParam>::value_type *)(v3 + 240));
    if ( !*(_DWORD *)(v3 + 244) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/giving/player_giving_comp.cpp",
        "onItemGivingReq",
        140);
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[33])"cost item count is 0, giving_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v11, (const char (*)[11])" item_map:");
      common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
        v12,
        (const std::map<unsigned int,unsigned int> *)(v3 + 336));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v9 = 609;
      goto LABEL_140;
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::ItemParam const>::operator++((google::protobuf::internal::RepeatedPtrIterator<const proto::ItemParam> *const)(v3 + 80));
  }
  if ( std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v3 + 336)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "onItemGivingReq",
      148);
    v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[31])"cost item is empty, giving_id:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" item_map:");
    common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
      v15,
      (const std::map<unsigned int,unsigned int> *)(v3 + 336));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v9 = 609;
    goto LABEL_140;
  }
  *(std::map<unsigned int,GivingRecord>::iterator *)(v3 + 48) = std::map<unsigned int,GivingRecord>::find(
                                                                  &this->giving_record_map_,
                                                                  (const std::map<unsigned int,GivingRecord>::key_type *)(v3 + 32));
  *(std::map<unsigned int,GivingRecord>::iterator *)(v3 + 112) = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_);
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v3 + 48),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v3 + 112)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "onItemGivingReq",
      156);
    v16 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[31])"giving is finished, giving_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v9 = 633;
    goto LABEL_140;
  }
  v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v3 + 48));
  giving_record = &v17->second;
  p_is_finished = &v17->second.is_finished;
  if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(p_is_finished);
  }
  if ( giving_record->is_finished )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/giving/player_giving_comp.cpp",
      "onItemGivingReq",
      162);
    v19 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[31])"giving is finished, giving_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v9 = 632;
    goto LABEL_140;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 240));
  v20 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
  config_ptr = data::GivingExcelConfigMgrBase::findGivingExcelConfig(
                 &v20->design_config.txt_config_mgr.giving_config_mgr,
                 *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
  if ( !config_ptr )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "onItemGivingReq",
      169);
    v21 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[39])"findGivingExcelConfig fail, giving_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v9 = 5;
    goto LABEL_140;
  }
  if ( *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)giving_record + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3)
                                                               + 0x7FFF8000) )
  {
    __asan_report_load1(&giving_record->is_gadget_giving);
  }
  if ( giving_record->is_gadget_giving )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->giving_type);
    }
    if ( config_ptr->giving_type != GIVING_TYPE_GADGET )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/giving/player_giving_comp.cpp",
        "onItemGivingReq",
        177);
      v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[30])off_25D3D3A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      v9 = -1;
      goto LABEL_140;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 144));
  if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 144)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&val,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "onItemGivingReq",
      185);
    v23 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            (common::milog::MiLogStream *const)&val,
            (const char (*)[27])off_25D3D3E0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &Uid);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v9 = -1;
    goto LABEL_139;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  ItemComp = Player::getItemComp(this->player_);
  if ( !PlayerItemComp::checkSubItemBatch(ItemComp, (const std::vector<ItemParam> *)(v3 + 272)) )
  {
    v28 = *(unsigned __int8 *)(((unsigned __int64)&config_ptr->giving_method >> 3) + 0x7FFF8000);
    if ( (_BYTE)v28 != 0 && (char)v28 <= 3 )
      __asan_report_load4(&config_ptr->giving_method);
    giving_method = config_ptr->giving_method;
    if ( giving_method == GIVING_METHOD_VAGUE_GROUP )
    {
      if ( std::map<unsigned int,unsigned int>::size((const std::map<unsigned int,unsigned int> *const)(v3 + 336)) != 1 )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/giving/player_giving_comp.cpp",
          "onItemGivingReq",
          232);
        v47 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[36])"wrong vague giving item, giving_id:");
        v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v47,
                (const unsigned int *)(v3 + 32));
        v49 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v48, (const char (*)[11])" item_map:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v49,
          (const std::map<unsigned int,unsigned int> *)(v3 + 336));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v9 = 631;
        goto LABEL_139;
      }
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 80) = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 336));
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 112) = std::map<unsigned int,unsigned int>::end((std::map<unsigned int,unsigned int> *const)(v3 + 336));
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 80),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/giving/player_giving_comp.cpp",
          "onItemGivingReq",
          238);
        v50 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[11])"giving_id:");
        v51 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v50,
                (const unsigned int *)(v3 + 32));
        v52 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v51, (const char (*)[11])" item_map:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v52,
          (const std::map<unsigned int,unsigned int> *)(v3 + 336));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v9 = -1;
        goto LABEL_139;
      }
      v53 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 80));
      v54 = v53;
      if ( ((unsigned __int8)v53 & 7) >= *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v53 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v53->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v53 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v53->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v53, 8LL);
      }
      *(_QWORD *)(v3 + 112) = *v54;
      item_id_0 = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 112));
      v55 = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 112));
      count_0 = v55;
      if ( *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v55 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v55 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v55);
      }
      v56 = *count_0;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->giving_group_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->giving_group_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->giving_group_count);
      }
      if ( v56 != config_ptr->giving_group_count )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/giving/player_giving_comp.cpp",
          "onItemGivingReq",
          245);
        v57 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[23])"vague giving count != ");
        v58 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v57,
                &config_ptr->giving_group_count);
        v59 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v58, (const char (*)[13])", giving_id:");
        v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v59,
                (const unsigned int *)(v3 + 32));
        v61 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v60, (const char (*)[11])" item_map:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v61,
          (const std::map<unsigned int,unsigned int> *)(v3 + 336));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v9 = 631;
        goto LABEL_139;
      }
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 240));
      p_giving_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240))->design_config.txt_config_mgr.giving_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)item_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id_0 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(item_id_0);
      }
      last_group_id = GivingExcelConfigMgr::findGroupIdByGivingIdAndItemId(
                        p_giving_config_mgr,
                        *(_DWORD *)(v3 + 32),
                        *item_id_0);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
      if ( !last_group_id )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/giving/player_giving_comp.cpp",
          "onItemGivingReq",
          251);
        v63 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[38])"vague giving item invalid, giving_id:");
        v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v63,
                (const unsigned int *)(v3 + 32));
        v65 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v64, (const char (*)[11])" item_map:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v65,
          (const std::map<unsigned int,unsigned int> *)(v3 + 336));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v9 = 631;
        goto LABEL_139;
      }
      proto::ItemGivingRsp::set_giving_group_id(rsp_0, last_group_id);
    }
    else
    {
      if ( giving_method > GIVING_METHOD_VAGUE_GROUP )
      {
LABEL_79:
        v9 = -1;
        goto LABEL_139;
      }
      if ( giving_method == GIVING_METHOD_EXACT )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v3 + 240));
        v30 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
        v31 = !GivingExcelConfigMgr::checkExactGivingItems(
                 &v30->design_config.txt_config_mgr.giving_config_mgr,
                 *(_DWORD *)(v3 + 32),
                 (const std::map<unsigned int,unsigned int> *)(v3 + 336));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
        if ( v31 )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/giving/player_giving_comp.cpp",
            "onItemGivingReq",
            202);
          v32 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[24])"wrong items, giving_id:");
          v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v32,
                  (const unsigned int *)(v3 + 32));
          v34 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v33, (const char (*)[11])" item_map:");
          common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v34,
            (const std::map<unsigned int,unsigned int> *)(v3 + 336));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v9 = 631;
          goto LABEL_139;
        }
      }
      else
      {
        if ( giving_method != GIVING_METHOD_GROUP )
          goto LABEL_79;
        total_item_count = 0;
        __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 336);
        __for_begin._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v3 + 336))._M_node;
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 80) = std::map<unsigned int,unsigned int>::end(__for_range_0);
        while ( std::operator!=(
                  &__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 80)) )
        {
          v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
          v36 = v35;
          if ( ((unsigned __int8)v35 & 7) >= *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)v35 >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&v35->second + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v35 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v35->second + 3) >> 3) + 0x7FFF8000) )
          {
            __asan_report_load_n(v35, 8LL);
          }
          *(_QWORD *)(v3 + 112) = *v36;
          item_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 112));
          count = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 112));
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 240));
          v37 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240))->design_config.txt_config_mgr.giving_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(item_id);
          }
          v38 = !GivingExcelConfigMgr::checkGroupGivingItem(v37, *(_DWORD *)(v3 + 32), *item_id);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 240));
          if ( v38 )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&val,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/giving/player_giving_comp.cpp",
              "onItemGivingReq",
              215);
            v39 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    (common::milog::MiLogStream *const)&val,
                    (const char (*)[15])"wrong item_id:");
            v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, item_id);
            v41 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                    v40,
                    (const char (*)[12])" giving_id:");
            v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v41,
                    (const unsigned int *)(v3 + 32));
            v43 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v42, (const char (*)[11])" item_map:");
            common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
              v43,
              (const std::map<unsigned int,unsigned int> *)(v3 + 336));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
            v9 = 631;
            goto LABEL_139;
          }
          if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(count);
          }
          total_item_count = SAFE_ADD<unsigned int,unsigned int>(total_item_count, *count);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
        }
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->giving_group_count >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->giving_group_count >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->giving_group_count);
        }
        if ( total_item_count != config_ptr->giving_group_count )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/giving/player_giving_comp.cpp",
            "onItemGivingReq",
            222);
          v44 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[35])"wrong total item count, giving_id:");
          v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v44,
                  (const unsigned int *)(v3 + 32));
          v46 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v45, (const char (*)[11])" item_map:");
          common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
            v46,
            (const std::map<unsigned int,unsigned int> *)(v3 + 336));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
          v9 = 631;
          goto LABEL_139;
        }
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_remove_item >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)config_ptr + 92) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_remove_item >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&config_ptr->is_remove_item);
    }
    if ( config_ptr->is_remove_item )
    {
      SubItemReason::SubItemReason((SubItemReason *const)(v3 + 112), ACTION_REASON_ITEM_GIVING);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v66 = Player::getItemComp(this->player_);
      if ( PlayerItemComp::subItemBatch(
             v66,
             (const std::vector<ItemParam> *)(v3 + 272),
             (const SubItemReason *)(v3 + 112)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/giving/player_giving_comp.cpp",
          "onItemGivingReq",
          268);
        v67 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[26])off_25D3D720);
        v68 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v67,
                (const unsigned int *)(v3 + 32));
        v69 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v68, (const char (*)[11])" item_map:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v69,
          (const std::map<unsigned int,unsigned int> *)(v3 + 336));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v9 = -1;
        goto LABEL_139;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&config_ptr->is_repeatable);
      }
      if ( config_ptr->is_repeatable )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/giving/player_giving_comp.cpp",
          "onItemGivingReq",
          274);
        v70 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[56])"giving is repeatable and not to remove item, giving_id:");
        v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v70,
                (const unsigned int *)(v3 + 32));
        v72 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v71, (const char (*)[11])" item_map:");
        common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
          v72,
          (const std::map<unsigned int,unsigned int> *)(v3 + 336));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        v9 = -1;
        goto LABEL_139;
      }
    }
    v73 = ((_BYTE)giving_record + 4) & 7;
    v74 = (*(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v73 >= *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000));
    if ( (_BYTE)v74 )
      __asan_report_store1(&giving_record->is_finished, v73, v74);
    giving_record->is_finished = 1;
    if ( *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&giving_record->last_group_id, v73, &giving_record->last_group_id);
    }
    giving_record->last_group_id = last_group_id;
    if ( *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)giving_record + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&giving_record->is_gadget_giving);
    }
    if ( giving_record->is_gadget_giving )
    {
      __for_range_1 = (std::vector<ItemParam> *)(v3 + 272);
      *(std::vector<ItemParam>::iterator *)(v3 + 80) = std::vector<ItemParam>::begin((std::vector<ItemParam> *const)(v3 + 272));
      *(std::vector<ItemParam>::iterator *)(v3 + 112) = std::vector<ItemParam>::end(__for_range_1);
      while ( __gnu_cxx::operator!=<ItemParam *,std::vector<ItemParam>>(
                (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v3 + 80),
                (const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *)(v3 + 112)) )
      {
        item_param = __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator*((const __gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v3 + 80));
        v76 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                &giving_record->material_cnt_map,
                &item_param->item_id,
                &item_param->count,
                (const unsigned int *)&giving_record->material_cnt_map,
                v75);
        if ( !v76.second )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&val,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/giving/player_giving_comp.cpp",
            "onItemGivingReq",
            286);
          v77 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                  (common::milog::MiLogStream *const)&val,
                  (const char (*)[23])"duplicate material_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v77, &item_param->item_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
        }
        __gnu_cxx::__normal_iterator<ItemParam *,std::vector<ItemParam>>::operator++((__gnu_cxx::__normal_iterator<ItemParam*,std::vector<ItemParam> > *const)(v3 + 80));
      }
    }
    PlayerGivingComp::notifyGivingRecord(this, *(_DWORD *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    QuestComp = Player::getQuestComp(this->player_);
    PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_ITEM_GIVING_FINISHED, 1, 0);
    Uid = proto::ItemGivingRsp::giving_group_id(rsp_0);
    common::tools::perf::make_shared<FinishItemGivingEvent,unsigned int &,unsigned int>(
      (unsigned int *)(v3 + 240),
      (unsigned int *)(v3 + 32),
      &Uid,
      (unsigned int *)(v3 + 32));
    std::shared_ptr<BaseEvent>::shared_ptr<FinishItemGivingEvent,void>(
      (std::shared_ptr<BaseEvent> *const)(v3 + 176),
      (std::shared_ptr<FinishItemGivingEvent> *)(v3 + 240));
    std::shared_ptr<FinishItemGivingEvent>::~shared_ptr((std::shared_ptr<FinishItemGivingEvent> *const)(v3 + 240));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    std::shared_ptr<BaseEvent>::shared_ptr(
      (std::shared_ptr<BaseEvent> *const)(v3 + 240),
      (const std::shared_ptr<BaseEvent> *)(v3 + 176));
    PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)(v3 + 240));
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 240));
    if ( *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)giving_record + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load1(&giving_record->is_gadget_giving);
    }
    if ( giving_record->is_gadget_giving )
    {
      v80 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
      if ( *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&giving_record->group_id);
      }
      Scene::findGroup((Scene *const)(v3 + 208), v80);
      if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 208)) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&val,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/giving/player_giving_comp.cpp",
          "onItemGivingReq",
          303);
        v81 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)&val,
                (const char (*)[28])off_25D3D7C0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v81, &giving_record->group_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
      }
      else
      {
        EventUtil::createEvent((data::EventType)(v3 + 240));
        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 240), 0LL) )
        {
          v82 = (((_BYTE)giving_record + 20) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)giving_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4(&giving_record->config_id);
          }
          config_id = giving_record->config_id;
          v84 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
          v85 = *(_BYTE *)(((unsigned __int64)&v84->param1 >> 3) + 0x7FFF8000);
          if ( v85 != 0 && (char)((((_BYTE)v84 + 44) & 7) + 3) >= v85 )
          {
            LOBYTE(v82) = v85 != 0;
            __asan_report_store4(&v84->param1, v82, v84);
          }
          v84->param1 = config_id;
          v86 = *(_DWORD *)(v3 + 32);
          v87 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
          v88 = *(_BYTE *)(((unsigned __int64)(v87 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v82) = v88 != 0;
          v89 = (v88 != 0) & (unsigned __int8)(v88 <= 3);
          if ( (_BYTE)v89 )
            v87 = __asan_report_store4(v87 + 48, v82, v89);
          *(_DWORD *)(v87 + 48) = v86;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->player_);
          v90 = Player::getUid(this->player_);
          v91 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 240));
          v92 = *(_BYTE *)(((unsigned __int64)&v91->uid >> 3) + 0x7FFF8000);
          if ( v92 != 0 && (char)((((_BYTE)v91 + 60) & 7) + 3) >= v92 )
          {
            LOBYTE(v82) = v92 != 0;
            __asan_report_store4(&v91->uid, v82, v91);
          }
          v91->uid = v90;
        }
        v93 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 208));
        Group::handleEvent(v93, (EventPtr *)(v3 + 240));
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 240));
      }
      std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 208));
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->giving_type);
    }
    if ( config_ptr->giving_type == GIVING_TYPE_QUEST )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load1(&config_ptr->is_repeatable);
      }
      if ( config_ptr->is_repeatable )
      {
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_reset >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)config_ptr + 93) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_reset >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load1(&config_ptr->is_reset);
        }
        if ( config_ptr->is_reset )
          PlayerGivingComp::activeItemGiving(this, *(_DWORD *)(v3 + 32));
      }
    }
    v9 = 0;
    std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v3 + 176));
    goto LABEL_139;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&val,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/giving/player_giving_comp.cpp",
    "onItemGivingReq",
    191);
  v25 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)&val,
          (const char (*)[33])"cost item not enough, giving_id:");
  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 32));
  v27 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v26, (const char (*)[11])" item_map:");
  common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(
    v27,
    (const std::map<unsigned int,unsigned int> *)(v3 + 336));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
  v9 = 609;
LABEL_139:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 144));
LABEL_140:
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 272));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 336));
  result = v9;
  if ( v114 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 329: range 0000000016638456-00000000166388F9
__int64 __fastcall PlayerGivingComp::activeItemGiving(PlayerGivingComp *const this, uint32_t giving_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v8; // rdx
  bool *p_is_finished; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  char *v12; // rsi
  uint32_t v13; // ecx
  char v14; // al
  __int64 v15; // rsi
  __int64 v16; // rdx
  PlayerQuestComp *QuestComp; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  const data::GivingExcelConfig *config_ptr; // [rsp+20h] [rbp-C0h]
  GivingRecord *giving_record; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-A0h] BYREF
  char v23[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 giving_id:328 64 8 8 iter:337";
  *(_QWORD *)(v2 + 16) = PlayerGivingComp::activeItemGiving;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = giving_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  config_ptr = data::GivingExcelConfigMgrBase::findGivingExcelConfig(
                 &v5->design_config.txt_config_mgr.giving_config_mgr,
                 *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( config_ptr )
  {
    *(std::map<unsigned int,GivingRecord>::iterator *)(v2 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                    &this->giving_record_map_,
                                                                    (const std::map<unsigned int,GivingRecord>::key_type *)(v2 + 48));
    __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v2 + 64),
            &__y) )
      goto LABEL_14;
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v2 + 64));
    p_is_finished = &v8->second.is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    if ( !v8->second.is_finished )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&config_ptr->is_repeatable);
    }
    if ( !config_ptr->is_repeatable )
      v10 = 1;
    else
LABEL_14:
      v10 = 0;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/giving/player_giving_comp.cpp",
        "activeItemGiving",
        340);
      v11 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v22,
              (const char (*)[50])"giving is finished and not repeatable! giving_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      v12 = (char *)(v2 + 48);
      giving_record = std::map<unsigned int,GivingRecord>::operator[](
                        &this->giving_record_map_,
                        (const std::map<unsigned int,GivingRecord>::key_type *)(v2 + 48));
      v13 = *(_DWORD *)(v2 + 48);
      v14 = *(_BYTE *)(((unsigned __int64)giving_record >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v12) = v14 != 0;
        __asan_report_store4(giving_record, v12, giving_record);
      }
      giving_record->giving_id = v13;
      v15 = ((_BYTE)giving_record + 4) & 7;
      v16 = (*(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000));
      if ( (_BYTE)v16 )
        __asan_report_store1(&giving_record->is_finished, v15, v16);
      giving_record->is_finished = 0;
      PlayerGivingComp::notifyGivingRecord(this, *(_DWORD *)(v2 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      QuestComp = Player::getQuestComp(this->player_);
      PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_ITEM_GIVING_ACTIVED, 1, 0);
      result = 0LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "activeItemGiving",
      333);
    v6 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v22,
           (const char (*)[39])"findGivingExcelConfig fail, giving_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
  }
  if ( v23 == (char *)v2 )
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

// Line 356: range 00000000166388FA-0000000016638B03
__int64 __fastcall PlayerGivingComp::deactiveItemGiving(PlayerGivingComp *const this, uint32_t giving_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v6; // rax
  uint32_t last_group_id; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v8; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+18h] [rbp-98h] BYREF
  char v10[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 giving_id:355 64 8 8 iter:357";
  *(_QWORD *)(v2 + 16) = PlayerGivingComp::deactiveItemGiving;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = giving_id;
  *(std::map<unsigned int,GivingRecord>::iterator *)(v2 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                  &this->giving_record_map_,
                                                                  (const std::map<unsigned int,GivingRecord>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v6->second.last_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->second.last_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer)__asan_report_load4(&v6->second.last_group_id);
    }
    last_group_id = v6->second.last_group_id;
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v8->second >> 3) + 0x7FFF8000) <= 3 )
    {
      v8 = (std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer)__asan_report_load4(&v8->second);
    }
    PlayerGivingComp::notifyDeactiveGivingRecord(this, v8->second.giving_id, last_group_id);
    std::map<unsigned int,GivingRecord>::erase(
      &this->giving_record_map_,
      (const std::map<unsigned int,GivingRecord>::key_type *)(v2 + 48));
    result = 0LL;
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

// Line 369: range 0000000016638B04-0000000016638CA7
_BOOL8 __fastcall PlayerGivingComp::isItemGivingActive(const PlayerGivingComp *const this, uint32_t giving_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  _BOOL8 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v6; // rax
  bool *p_is_finished; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  const GivingRecord *giving_record; // [rsp+18h] [rbp-88h]
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 giving_id:368 64 8 8 iter:370";
  *(_QWORD *)(v2 + 16) = PlayerGivingComp::isItemGivingActive;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = giving_id;
  *(std::map<unsigned int,GivingRecord>::const_iterator *)(v2 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                        &this->giving_record_map_,
                                                                        (const std::map<unsigned int,GivingRecord>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v2 + 64));
    giving_record = &v6->second;
    p_is_finished = &v6->second.is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    result = !giving_record->is_finished;
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

// Line 382: range 0000000016638CA8-0000000016638EBC
__int64 __fastcall PlayerGivingComp::isItemGivingFinished(
        const PlayerGivingComp *const this,
        uint32_t giving_id,
        uint32_t giving_group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v7; // rax
  bool *p_is_finished; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+10h] [rbp-90h] BYREF
  const GivingRecord *giving_record; // [rsp+18h] [rbp-88h]
  char v12[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 giving_id:381 64 8 8 iter:383";
  *(_QWORD *)(v3 + 16) = PlayerGivingComp::isItemGivingFinished;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = giving_id;
  *(std::map<unsigned int,GivingRecord>::const_iterator *)(v3 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                        &this->giving_record_map_,
                                                                        (const std::map<unsigned int,GivingRecord>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v3 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v3 + 64));
    giving_record = &v7->second;
    p_is_finished = &v7->second.is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    if ( !giving_record->is_finished )
    {
      result = 0LL;
    }
    else
    {
      if ( !giving_group_id )
        goto LABEL_14;
      if ( *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&giving_record->last_group_id);
      }
      if ( giving_group_id != giving_record->last_group_id )
        result = 0LL;
      else
LABEL_14:
        result = 1LL;
    }
  }
  if ( v12 == (char *)v3 )
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

// Line 399: range 0000000016638EBE-00000000166393BB
__int64 __fastcall PlayerGivingComp::setGivingStateByGm(
        PlayerGivingComp *const this,
        uint32_t giving_id,
        uint32_t state,
        uint32_t last_group_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int v7; // r14d
  int v8; // r14d
  unsigned __int64 v9; // rax
  char v10; // dl
  char *v11; // rsi
  __int64 v12; // rdx
  char *v13; // rsi
  std::map<unsigned int,GivingRecord>::mapped_type *v14; // rdx
  char v15; // cl
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v16; // rax
  bool *p_is_finished; // rax
  __int64 v18; // rsi
  __int64 v19; // rdx
  uint32_t v20; // ecx
  char v21; // al
  PlayerQuestComp *QuestComp; // rax
  PlayerQuestComp *v23; // rax
  PlayerEventComp *EventComp; // r14
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+20h] [rbp-D0h] BYREF
  GivingRecord *giving_record; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<FinishItemGivingEvent> __r; // [rsp+30h] [rbp-C0h] BYREF
  char v31[176]; // [rsp+40h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 4 13 giving_id:398 48 4 17 last_group_id:398 64 8 8 iter:415 96 16 13 event_ptr:437";
  *(_QWORD *)(v4 + 16) = PlayerGivingComp::setGivingStateByGm;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 32) = giving_id;
  *(_DWORD *)(v4 + 48) = last_group_id;
  if ( state )
  {
    if ( state == 1 )
    {
      v8 = *(_DWORD *)(v4 + 32);
      v11 = (char *)(v4 + 32);
      v9 = (unsigned __int64)std::map<unsigned int,GivingRecord>::operator[](
                               &this->giving_record_map_,
                               (const std::map<unsigned int,GivingRecord>::key_type *)(v4 + 32));
      v10 = *(_BYTE *)((v9 >> 3) + 0x7FFF8000);
      LOBYTE(v11) = v10 != 0;
      v12 = (v10 != 0) & (unsigned __int8)(v10 <= 3);
      if ( (_BYTE)v12 )
        v9 = __asan_report_store4(v9, v11, v12);
      *(_DWORD *)v9 = v8;
      v13 = (char *)(v4 + 32);
      v14 = std::map<unsigned int,GivingRecord>::operator[](
              &this->giving_record_map_,
              (const std::map<unsigned int,GivingRecord>::key_type *)(v4 + 32));
      v15 = *(_BYTE *)(((unsigned __int64)&v14->is_finished >> 3) + 0x7FFF8000);
      if ( v15 != 0 && (((unsigned __int8)v14 + 4) & 7) >= v15 )
      {
        LOBYTE(v13) = v15 != 0;
        __asan_report_store1(&v14->is_finished, v13, v14);
      }
      v14->is_finished = 0;
    }
    else
    {
      if ( state != 2 )
      {
        v7 = -1;
        goto LABEL_30;
      }
      *(std::map<unsigned int,GivingRecord>::iterator *)(v4 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                      &this->giving_record_map_,
                                                                      (const std::map<unsigned int,GivingRecord>::key_type *)(v4 + 32));
      __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v4 + 64),
              &__y) )
      {
        v7 = -1;
        goto LABEL_30;
      }
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v4 + 64));
      giving_record = &v16->second;
      p_is_finished = &v16->second.is_finished;
      v18 = (unsigned __int8)p_is_finished & 7;
      v19 = (*(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000));
      if ( (_BYTE)v19 )
        __asan_report_store1(p_is_finished, v18, v19);
      giving_record->is_finished = 1;
      v20 = *(_DWORD *)(v4 + 48);
      v21 = *(_BYTE *)(((unsigned __int64)&giving_record->last_group_id >> 3) + 0x7FFF8000);
      if ( v21 != 0 && v21 <= 3 )
      {
        LOBYTE(v18) = v21 != 0;
        __asan_report_store4(&giving_record->last_group_id, v18, &giving_record->last_group_id);
      }
      giving_record->last_group_id = v20;
    }
  }
  else
  {
    if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,GivingRecord>,unsigned int>(
            &this->giving_record_map_,
            (const unsigned int *)(v4 + 32)) )
    {
      v7 = -1;
      goto LABEL_30;
    }
    std::map<unsigned int,GivingRecord>::erase(
      &this->giving_record_map_,
      (const std::map<unsigned int,GivingRecord>::key_type *)(v4 + 32));
  }
  PlayerGivingComp::notifyGivingRecord(this, *(_DWORD *)(v4 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  QuestComp = Player::getQuestComp(this->player_);
  PlayerQuestComp::tryAcceptQuestByCond(QuestComp, QUEST_COND_ITEM_GIVING_ACTIVED, 1, 0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v23 = Player::getQuestComp(this->player_);
  PlayerQuestComp::tryAcceptQuestByCond(v23, QUEST_COND_ITEM_GIVING_FINISHED, 1, 0);
  common::tools::perf::make_shared<FinishItemGivingEvent,unsigned int &,unsigned int &>(
    (unsigned int *)&__r,
    (unsigned int *)(v4 + 32),
    (unsigned int *)(v4 + 48),
    (unsigned int *)(v4 + 32));
  std::shared_ptr<BaseEvent>::shared_ptr<FinishItemGivingEvent,void>((std::shared_ptr<BaseEvent> *const)(v4 + 96), &__r);
  std::shared_ptr<FinishItemGivingEvent>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  EventComp = Player::getEventComp(this->player_);
  std::shared_ptr<BaseEvent>::shared_ptr(
    (std::shared_ptr<BaseEvent> *const)&__r,
    (const std::shared_ptr<BaseEvent> *)(v4 + 96));
  PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&__r);
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&__r);
  v7 = 0;
  std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)(v4 + 96));
LABEL_30:
  result = v7;
  if ( v31 == (char *)v4 )
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
  return result;
};

// Line 444: range 00000000166393BC-00000000166394BA
__int64 __fastcall PlayerGivingComp::removeGadgetGivingByGm(PlayerGivingComp *const this, uint32_t giving_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 giving_id:443";
  *(_QWORD *)(v2 + 16) = PlayerGivingComp::removeGadgetGivingByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = giving_id;
  if ( !common::tools::MiscUtils::isContains<std::map<unsigned int,GivingRecord>,unsigned int>(
          &this->giving_record_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    std::map<unsigned int,GivingRecord>::erase(
      &this->giving_record_map_,
      (const std::map<unsigned int,GivingRecord>::key_type *)(v2 + 32));
    result = 0LL;
  }
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

// Line 456: range 00000000166394BC-0000000016639712
__int64 __fastcall PlayerGivingComp::notifyGivingRecord(const PlayerGivingComp *const this, uint32_t giving_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  GivingRecord *p_second; // r14
  std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  proto::GivingRecord *v8; // rax
  Player *player; // r14
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<proto::GivingRecordChangeNotify> __r; // [rsp+20h] [rbp-C0h] BYREF
  char v13[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 giving_id:455 64 8 8 iter:457 96 16 21 change_notify_ptr:462";
  *(_QWORD *)(v2 + 16) = PlayerGivingComp::notifyGivingRecord;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = giving_id;
  *(std::map<unsigned int,GivingRecord>::const_iterator *)(v2 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                        &this->giving_record_map_,
                                                                        (const std::map<unsigned int,GivingRecord>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = -1;
  }
  else
  {
    common::tools::perf::make_shared<proto::GivingRecordChangeNotify>();
    p_second = &std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v2 + 64))->second;
    v7 = std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    v8 = proto::GivingRecordChangeNotify::mutable_giving_record(v7);
    GivingRecord::toClient(p_second, v8);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::GivingRecordChangeNotify>(&__r);
    v5 = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    std::shared_ptr<proto::GivingRecordChangeNotify>::~shared_ptr((std::shared_ptr<proto::GivingRecordChangeNotify> *const)(v2 + 96));
  }
  result = v5;
  if ( v13 == (char *)v2 )
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

// Line 468: range 0000000016639714-0000000016639905
int32_t __cdecl PlayerGivingComp::notifyDeactiveGivingRecord(
        const PlayerGivingComp *const this,
        uint32_t giving_id,
        uint32_t last_group_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  Player *player; // r14
  int32_t result; // eax
  proto::GivingRecord *proto_giving_record; // [rsp+18h] [rbp-88h]
  std::shared_ptr<proto::GivingRecordChangeNotify> __r; // [rsp+20h] [rbp-80h] BYREF
  char v13[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 change_notify_ptr:469";
  *(_QWORD *)(v3 + 16) = PlayerGivingComp::notifyDeactiveGivingRecord;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  common::tools::perf::make_shared<proto::GivingRecordChangeNotify>();
  v6 = std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto_giving_record = proto::GivingRecordChangeNotify::mutable_giving_record(v6);
  proto::GivingRecord::set_giving_id(proto_giving_record, giving_id);
  proto::GivingRecord::set_is_finished(proto_giving_record, 0);
  proto::GivingRecord::set_last_group_id(proto_giving_record, last_group_id);
  v7 = std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::GivingRecordChangeNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
  proto::GivingRecordChangeNotify::set_is_deactive(v7, 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  std::dynamic_pointer_cast<google::protobuf::Message const,proto::GivingRecordChangeNotify>(&__r);
  LODWORD(player) = Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
  std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
  std::shared_ptr<proto::GivingRecordChangeNotify>::~shared_ptr((std::shared_ptr<proto::GivingRecordChangeNotify> *const)(v3 + 32));
  result = (int)player;
  if ( v13 == (char *)v3 )
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

// Line 482: range 0000000016639906-0000000016639FEB
__int64 __fastcall PlayerGivingComp::activeGadgetItemGiving(
        PlayerGivingComp *const this,
        uint32_t giving_id,
        uint32_t group_id,
        uint32_t config_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v10; // rdx
  bool *p_is_finished; // rax
  char v12; // al
  common::milog::MiLogStream *v13; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v14; // rdx
  bool *v15; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v16; // rax
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  char *v20; // rsi
  uint32_t v21; // ecx
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+28h] [rbp-C8h] BYREF
  const data::GivingExcelConfig *config_ptr; // [rsp+30h] [rbp-C0h]
  GivingRecord *giving_record; // [rsp+38h] [rbp-B8h]
  std::shared_ptr<Config> v33; // [rsp+40h] [rbp-B0h] BYREF
  common::milog::MiLogStream v34; // [rsp+50h] [rbp-A0h] BYREF
  char v35[128]; // [rsp+70h] [rbp-80h] BYREF

  v4 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 13 giving_id:481 64 8 8 iter:490";
  *(_QWORD *)(v4 + 16) = PlayerGivingComp::activeGadgetItemGiving;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202116352;
  *(_DWORD *)(v4 + 48) = giving_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33);
  config_ptr = data::GivingExcelConfigMgrBase::findGivingExcelConfig(
                 &v7->design_config.txt_config_mgr.giving_config_mgr,
                 *(_DWORD *)(v4 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v33);
  if ( config_ptr )
  {
    *(std::map<unsigned int,GivingRecord>::iterator *)(v4 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                    &this->giving_record_map_,
                                                                    (const std::map<unsigned int,GivingRecord>::key_type *)(v4 + 48));
    __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v4 + 64),
            &__y) )
      goto LABEL_14;
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v4 + 64));
    p_is_finished = &v10->second.is_finished;
    if ( *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_finished & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finished >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(p_is_finished);
    }
    if ( !v10->second.is_finished )
      goto LABEL_14;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)config_ptr + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_repeatable >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_load1(&config_ptr->is_repeatable);
    }
    if ( !config_ptr->is_repeatable )
      v12 = 1;
    else
LABEL_14:
      v12 = 0;
    if ( v12 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/giving/player_giving_comp.cpp",
        "activeGadgetItemGiving",
        493);
      v13 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v34,
              (const char (*)[50])"giving is finished and not repeatable! giving_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v34);
      result = 0xFFFFFFFFLL;
    }
    else
    {
      __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
      if ( !std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v4 + 64),
              &__y) )
        goto LABEL_26;
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v4 + 64));
      v15 = &v14->second.is_finished;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)v15 & 7) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(v15);
      }
      if ( !v14->second.is_finished )
        goto LABEL_26;
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_take_back >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)config_ptr + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_take_back >> 3)
                                                                 + 0x7FFF8000) )
      {
        __asan_report_load1(&config_ptr->is_take_back);
      }
      if ( config_ptr->is_take_back
        && (v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v4 + 64)),
            !std::map<unsigned int,unsigned int>::empty(&v16->second.material_cnt_map)) )
      {
        v17 = 1;
      }
      else
      {
LABEL_26:
        v17 = 0;
      }
      if ( v17 )
      {
        common::milog::MiLogStream::create(
          &v34,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/giving/player_giving_comp.cpp",
          "activeGadgetItemGiving",
          500);
        v18 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(&v34, (const char (*)[76])off_25D3DAC0);
        v19 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                v18,
                (const char (*)[34])" need take back first. giving_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v34);
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v20 = (char *)(v4 + 48);
        giving_record = std::map<unsigned int,GivingRecord>::operator[](
                          &this->giving_record_map_,
                          (const std::map<unsigned int,GivingRecord>::key_type *)(v4 + 48));
        v21 = *(_DWORD *)(v4 + 48);
        v22 = *(_BYTE *)(((unsigned __int64)giving_record >> 3) + 0x7FFF8000);
        if ( v22 != 0 && v22 <= 3 )
        {
          LOBYTE(v20) = v22 != 0;
          __asan_report_store4(giving_record, v20, giving_record);
        }
        giving_record->giving_id = v21;
        v23 = ((_BYTE)giving_record + 4) & 7;
        v24 = (*(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000));
        if ( (_BYTE)v24 )
          __asan_report_store1(&giving_record->is_finished, v23, v24);
        giving_record->is_finished = 0;
        v25 = ((_BYTE)giving_record + 12) & 7;
        v26 = (*(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v25 >= *(_BYTE *)(((unsigned __int64)&giving_record->is_gadget_giving >> 3) + 0x7FFF8000));
        if ( (_BYTE)v26 )
          __asan_report_store1(&giving_record->is_gadget_giving, v25, v26);
        giving_record->is_gadget_giving = 1;
        if ( *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_store4(&giving_record->group_id, v25, &giving_record->group_id);
        }
        giving_record->group_id = group_id;
        v27 = (*(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)giving_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3) + 0x7FFF8000));
        if ( (_BYTE)v27 )
          __asan_report_store4(&giving_record->config_id, (((_BYTE)giving_record + 20) & 7u) + 3, v27);
        giving_record->config_id = config_id;
        std::map<unsigned int,unsigned int>::clear(&giving_record->material_cnt_map);
        PlayerGivingComp::notifyGivingRecord(this, *(_DWORD *)(v4 + 48));
        result = 0LL;
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "activeGadgetItemGiving",
      486);
    v8 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v34,
           (const char (*)[39])"findGivingExcelConfig fail, giving_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    common::milog::MiLogStream::~MiLogStream(&v34);
    result = 0xFFFFFFFFLL;
  }
  if ( v35 == (char *)v4 )
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

// Line 519: range 0000000016639FEC-000000001663A4D7
std::vector<unsigned int> *__fastcall PlayerGivingComp::getGivingItemList(
        std::vector<unsigned int> *retstr,
        PlayerGivingComp *const this,
        uint32_t giving_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v10; // rax
  __int64 p_material_cnt_map; // rsi
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self __y; // [rsp+28h] [rbp-108h] BYREF
  const data::GivingExcelConfig *config_ptr; // [rsp+30h] [rbp-100h]
  const GivingRecord *giving_record; // [rsp+38h] [rbp-F8h]
  std::shared_ptr<Config> v17; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v18; // [rsp+50h] [rbp-E0h] BYREF
  char v19[192]; // [rsp+70h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 giving_id:518 64 8 8 iter:534 96 24 7 vec:520";
  *(_QWORD *)(v3 + 16) = PlayerGivingComp::getGivingItemList;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  *(_DWORD *)(v3 + 48) = giving_id;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17);
  config_ptr = data::GivingExcelConfigMgrBase::findGivingExcelConfig(
                 &v6->design_config.txt_config_mgr.giving_config_mgr,
                 *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v17);
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->giving_type);
    }
    if ( config_ptr->giving_type == GIVING_TYPE_GADGET )
    {
      *(std::map<unsigned int,GivingRecord>::iterator *)(v3 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                      &this->giving_record_map_,
                                                                      (const std::map<unsigned int,GivingRecord>::key_type *)(v3 + 48));
      __y._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v3 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v18,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/giving/player_giving_comp.cpp",
          "getGivingItemList",
          537);
        v9 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v18, (const char (*)[33])off_25D3DC20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v18);
        std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v3 + 96));
      }
      else
      {
        v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v3 + 64));
        giving_record = &v10->second;
        p_material_cnt_map = (__int64)&v10->second.material_cnt_map;
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_impl._M_end_of_storage
                                                                + 7) >> 3)
                                                              + 0x7FFF8000) )
        {
          p_material_cnt_map = 24LL;
          __asan_report_store_n(retstr, 24LL);
        }
        common::tools::MiscUtils::getAllMapKeys<std::map<unsigned int,unsigned int>>(
          retstr,
          (const std::map<unsigned int,unsigned int> *)p_material_cnt_map);
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/giving/player_giving_comp.cpp",
        "getGivingItemList",
        530);
      v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(&v18, (const char (*)[30])off_25D3D3A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v3 + 96));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "getGivingItemList",
      524);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v18,
           (const char (*)[39])"findGivingExcelConfig fail, giving_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v3 + 96));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  if ( v19 == (char *)v3 )
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
  return retstr;
};

// Line 547: range 000000001663A4D8-000000001663B34E
int32_t __cdecl PlayerGivingComp::onTakeBackGivingItemReq(
        PlayerGivingComp *const this,
        const proto::TakeBackGivingItemReq *req,
        proto::TakeBackGivingItemRsp *rsp_0)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::pointer v11; // rax
  bool *p_is_gadget_giving; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  uint32_t v17; // ecx
  common::milog::MiLogStream *v18; // rax
  __int64 v19; // rsi
  uint32_t config_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rdx
  char v22; // cl
  int v23; // r14d
  __int64 v24; // rax
  char v25; // dl
  __int64 v26; // rdx
  Group *v27; // rax
  PlayerItemComp *ItemComp; // rax
  common::milog::MiLogStream *v29; // rcx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int32_t result; // eax
  std::map<unsigned int,unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-1D0h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end; // [rsp+28h] [rbp-1C8h] BYREF
  const data::GivingExcelConfig *config_ptr; // [rsp+30h] [rbp-1C0h]
  GivingRecord *giving_record; // [rsp+38h] [rbp-1B8h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-1B0h]
  const std::pair<unsigned int const,unsigned int> *v39; // [rsp+48h] [rbp-1A8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *material_id; // [rsp+50h] [rbp-1A0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-198h]
  common::milog::MiLogStream v42; // [rsp+60h] [rbp-190h] BYREF
  char v43[368]; // [rsp+80h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 32 4 13 giving_id:548 48 4 7 ret:628 64 8 8 iter:564 96 16 17 cur_scene_ptr:598 128 16 13 grou"
                        "p_ptr:610 160 16 11 evt_ptr:617 192 24 18 item_param_vec:584 256 24 17 action_reason:627";
  *(_QWORD *)(v3 + 16) = PlayerGivingComp::onTakeBackGivingItemReq;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862728] = -218103808;
  v5[536862729] = -202116109;
  *(_DWORD *)(v3 + 32) = proto::TakeBackGivingItemReq::giving_id(req);
  proto::TakeBackGivingItemRsp::set_giving_id(rsp_0, *(_DWORD *)(v3 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  config_ptr = data::GivingExcelConfigMgrBase::findGivingExcelConfig(
                 &v6->design_config.txt_config_mgr.giving_config_mgr,
                 *(_DWORD *)(v3 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->is_take_back >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)config_ptr + 100) & 7) >= *(_BYTE *)(((unsigned __int64)&config_ptr->is_take_back >> 3)
                                                               + 0x7FFF8000) )
    {
      __asan_report_load1(&config_ptr->is_take_back);
    }
    if ( !config_ptr->is_take_back )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/giving/player_giving_comp.cpp",
        "onTakeBackGivingItemReq",
        560);
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v42,
             (const char (*)[40])"This giving can't take back! giving_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v42);
      v8 = -1;
    }
    else
    {
      *(std::map<unsigned int,GivingRecord>::iterator *)(v3 + 64) = std::map<unsigned int,GivingRecord>::find(
                                                                      &this->giving_record_map_,
                                                                      (const std::map<unsigned int,GivingRecord>::key_type *)(v3 + 32));
      __for_end._M_node = std::map<unsigned int,GivingRecord>::end(&this->giving_record_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)(v3 + 64),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> >::_Self *)&__for_end) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/giving/player_giving_comp.cpp",
          "onTakeBackGivingItemReq",
          567);
        v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(&v42, (const char (*)[33])off_25D3DC20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v42);
        v8 = -1;
      }
      else
      {
        v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,GivingRecord> > *const)(v3 + 64));
        giving_record = &v11->second;
        p_is_gadget_giving = &v11->second.is_gadget_giving;
        if ( *(_BYTE *)(((unsigned __int64)p_is_gadget_giving >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_gadget_giving & 7) >= *(_BYTE *)(((unsigned __int64)p_is_gadget_giving >> 3)
                                                                   + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_gadget_giving);
        }
        if ( !giving_record->is_gadget_giving )
          goto LABEL_18;
        if ( *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_ptr->giving_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_ptr->giving_type);
        }
        if ( config_ptr->giving_type == GIVING_TYPE_GADGET )
        {
          if ( *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)giving_record + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&giving_record->is_finished >> 3)
                                                                      + 0x7FFF8000) )
          {
            __asan_report_load1(&giving_record->is_finished);
          }
          if ( !giving_record->is_finished )
          {
            common::milog::MiLogStream::create(
              &v42,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/giving/player_giving_comp.cpp",
              "onTakeBackGivingItemReq",
              580);
            v14 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v42,
                    (const char (*)[35])"giving is not finished! giving_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
            common::milog::MiLogStream::~MiLogStream(&v42);
            v8 = -1;
          }
          else
          {
            std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 192));
            __for_range = &giving_record->material_cnt_map;
            __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&giving_record->material_cnt_map)._M_node;
            __for_end._M_node = std::map<unsigned int,unsigned int>::end(__for_range)._M_node;
            while ( std::operator!=(&__for_begin, &__for_end) )
            {
              v39 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
              material_id = std::get<0ul,unsigned int const,unsigned int>(v39);
              count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v39);
              *(_DWORD *)(v3 + 160) = 0;
              *(_DWORD *)(v3 + 164) = 0;
              *(_DWORD *)(v3 + 168) = 0;
              *(_DWORD *)(v3 + 172) = 0;
              if ( *(_BYTE *)(((unsigned __int64)material_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)material_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)material_id >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4(material_id);
              }
              *(_DWORD *)(v3 + 160) = *material_id;
              if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(count);
              }
              *(_DWORD *)(v3 + 164) = *count;
              std::vector<ItemParam>::push_back(
                (std::vector<ItemParam> *const)(v3 + 192),
                (const std::vector<ItemParam>::value_type *)(v3 + 160));
              std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
            }
            if ( std::vector<ItemParam>::empty((const std::vector<ItemParam> *const)(v3 + 192)) )
            {
              common::milog::MiLogStream::create(
                &v42,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/giving/player_giving_comp.cpp",
                "onTakeBackGivingItemReq",
                594);
              v15 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      &v42,
                      (const char (*)[38])"material_cnt_map is empty! giving_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v3 + 32));
              common::milog::MiLogStream::~MiLogStream(&v42);
              v8 = -1;
            }
            else
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->player_);
              Player::getSceneComp(this->player_);
              PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
              if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
              {
                common::milog::MiLogStream::create(
                  &v42,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/giving/player_giving_comp.cpp",
                  "onTakeBackGivingItemReq",
                  601);
                v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                        &v42,
                        (const char (*)[27])off_25D3D3E0);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                *(_DWORD *)(v3 + 48) = Player::getUid(this->player_);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v3 + 48));
                common::milog::MiLogStream::~MiLogStream(&v42);
                v8 = -1;
              }
              else
              {
                std::map<unsigned int,unsigned int>::clear(&giving_record->material_cnt_map);
                v17 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
                if ( *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&giving_record->group_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&giving_record->group_id);
                }
                Scene::findGroup((Scene *const)(v3 + 128), v17);
                if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v3 + 128)) )
                {
                  common::milog::MiLogStream::create(
                    &v42,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/giving/player_giving_comp.cpp",
                    "onTakeBackGivingItemReq",
                    613);
                  v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                          &v42,
                          (const char (*)[28])off_25D3D7C0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &giving_record->group_id);
                  common::milog::MiLogStream::~MiLogStream(&v42);
                }
                else
                {
                  EventUtil::createEvent((data::EventType)(v3 + 160));
                  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v3 + 160), 0LL) )
                  {
                    v19 = (((_BYTE)giving_record + 20) & 7u) + 3;
                    if ( *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)giving_record + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&giving_record->config_id >> 3)
                                                                                   + 0x7FFF8000) )
                    {
                      __asan_report_load4(&giving_record->config_id);
                    }
                    config_id = giving_record->config_id;
                    v21 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    v22 = *(_BYTE *)(((unsigned __int64)&v21->param1 >> 3) + 0x7FFF8000);
                    if ( v22 != 0 && (char)((((_BYTE)v21 + 44) & 7) + 3) >= v22 )
                    {
                      LOBYTE(v19) = v22 != 0;
                      __asan_report_store4(&v21->param1, v19, v21);
                    }
                    v21->param1 = config_id;
                    v23 = *(_DWORD *)(v3 + 32);
                    v24 = (__int64)std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
                    v25 = *(_BYTE *)(((unsigned __int64)(v24 + 48) >> 3) + 0x7FFF8000);
                    LOBYTE(v19) = v25 != 0;
                    v26 = (v25 != 0) & (unsigned __int8)(v25 <= 3);
                    if ( (_BYTE)v26 )
                      v24 = __asan_report_store4(v24 + 48, v19, v26);
                    *(_DWORD *)(v24 + 48) = v23;
                  }
                  v27 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
                  Group::handleEvent(v27, (EventPtr *)(v3 + 160));
                  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v3 + 160));
                }
                ActionReason::ActionReason(
                  (ActionReason *const)(v3 + 256),
                  ACTION_REASON_GIVING_TAKE_BACK,
                  ITEM_LIMIT_GIVING_TAKE_BACK);
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->player_);
                ItemComp = Player::getItemComp(this->player_);
                *(_DWORD *)(v3 + 48) = PlayerItemComp::addItemBatchWithStackLimit(
                                         ItemComp,
                                         (std::vector<ItemParam> *)(v3 + 192),
                                         (const ActionReason *)(v3 + 256),
                                         0LL);
                if ( *(_DWORD *)(v3 + 48) )
                {
                  common::milog::MiLogStream::create(
                    &v42,
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/player/giving/player_giving_comp.cpp",
                    "onTakeBackGivingItemReq",
                    631);
                  v29 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          &v42,
                          (const char (*)[34])"addItemBatchWithStackLimit fail. ");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8(&this->player_);
                  v30 = operator<<(v29, this->player_);
                  v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v30,
                          (const char (*)[9])", ret = ");
                  common::milog::MiLogStream::operator<<<int,(int *)0>(v31, (const int *)(v3 + 48));
                  common::milog::MiLogStream::~MiLogStream(&v42);
                  v8 = *(_DWORD *)(v3 + 48);
                }
                else
                {
                  v8 = 0;
                }
                std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v3 + 128));
              }
              std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
            }
            std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 192));
          }
        }
        else
        {
LABEL_18:
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/giving/player_giving_comp.cpp",
            "onTakeBackGivingItemReq",
            574);
          v13 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v42,
                  (const char (*)[57])"giving is not gadget giving, can't take back! giving_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v42);
          v8 = -1;
        }
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/giving/player_giving_comp.cpp",
      "onTakeBackGivingItemReq",
      553);
    v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v42,
           (const char (*)[39])"findGivingExcelConfig fail, giving_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v42);
    v8 = -1;
  }
  result = v8;
  if ( v43 == (char *)v3 )
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
