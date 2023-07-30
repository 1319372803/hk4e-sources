// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/chess_activity.cpp

// Line 29: range 0000000017955D12-0000000017956209
int32_t __cdecl ChessActivity::fromScheduleBin(ChessActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  uint32_t v6; // edx
  bool is_teach_dungeon_finished; // cl
  unsigned int second; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v9; // rax
  unsigned int *v10; // rdx
  uint32_t v11; // edx
  uint32_t v12; // edx
  bool is_content_closed; // cl
  int32_t result; // eax
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+10h] [rbp-E0h]
  const proto::ChessScheduleBin *proto_chess_bin; // [rsp+18h] [rbp-D8h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-D0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+28h] [rbp-C8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-C0h]
  google::protobuf::Map<unsigned int,unsigned int>::const_reference p_day_index; // [rsp+38h] [rbp-B8h]
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-B0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+60h] [rbp-90h] BYREF
  char v23[112]; // [rsp+80h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 9 map_id:39";
  *(_QWORD *)(v2 + 16) = ChessActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  proto_chess_bin = proto::ActivityScheduleBin::chess_bin(bin);
  v5 = proto::ChessScheduleBin::level(proto_chess_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = v5;
  v6 = proto::ChessScheduleBin::exp(proto_chess_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_);
  }
  this->exp_ = v6;
  is_teach_dungeon_finished = proto::ChessScheduleBin::is_teach_dungeon_finished(proto_chess_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_teach_dungeon_finished_);
  }
  this->is_teach_dungeon_finished_ = is_teach_dungeon_finished;
  __for_range = proto::ChessScheduleBin::daily_obtained_exp_map(proto_chess_bin);
  google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin, __for_range);
  google::protobuf::Map<unsigned int,unsigned int>::end(&__for_end, __for_range);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_day_index = google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&p_day_index->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)p_day_index + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&p_day_index->second >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    second = p_day_index->second;
    v9 = std::unordered_map<unsigned int,unsigned int>::operator[](
           &this->daily_obtained_exp_map_,
           (const std::unordered_map<unsigned int,unsigned int>::key_type *)p_day_index);
    v10 = v9;
    if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v9);
    }
    *v10 = second;
    google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin);
  }
  v11 = proto::ChessScheduleBin::coin(proto_chess_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->coin_);
  }
  this->coin_ = v11;
  __for_range_0 = proto::ChessScheduleBin::finished_map_id_list(proto_chess_bin);
  __for_begin_0 = google::protobuf::RepeatedField<unsigned int>::begin(__for_range_0);
  __for_end_0 = google::protobuf::RepeatedField<unsigned int>::end(__for_range_0);
  while ( __for_begin_0 != __for_end_0 )
  {
    if ( *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)__for_begin_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin_0 >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *__for_begin_0;
    std::set<unsigned int>::insert(&this->finished_map_id_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    ++__for_begin_0;
  }
  v12 = proto::ChessScheduleBin::punish_over_time(proto_chess_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->punish_over_time_);
  }
  this->punish_over_time_ = v12;
  is_content_closed = proto::ChessScheduleBin::is_content_closed(proto_chess_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_content_closed_);
  }
  this->is_content_closed_ = is_content_closed;
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

// Line 50: range 000000001795620A-000000001795663E
int32_t __cdecl ChessActivity::toScheduleBin(const ChessActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v2; // ebx
  unsigned int *v3; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v4; // rdx
  google::protobuf::uint32 *v5; // rdx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-50h] BYREF
  proto::ChessScheduleBin *proto_chess_bin; // [rsp+28h] [rbp-48h]
  google::protobuf::Map<unsigned int,unsigned int> *proto_daily_obtained_exp_map; // [rsp+30h] [rbp-40h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-38h]
  const std::set<unsigned int> *__for_range_0; // [rsp+40h] [rbp-30h]
  const std::pair<unsigned int const,unsigned int> *v13; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *day_index; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *obtained_exp; // [rsp+58h] [rbp-18h]

  proto_chess_bin = proto::ActivityScheduleBin::mutable_chess_bin(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::ChessScheduleBin::set_level(proto_chess_bin, this->level_);
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessScheduleBin::set_exp(proto_chess_bin, this->exp_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_teach_dungeon_finished_);
  }
  proto::ChessScheduleBin::set_is_teach_dungeon_finished(proto_chess_bin, this->is_teach_dungeon_finished_);
  proto_daily_obtained_exp_map = proto::ChessScheduleBin::mutable_daily_obtained_exp_map(proto_chess_bin);
  __for_range = &this->daily_obtained_exp_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->daily_obtained_exp_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->daily_obtained_exp_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v13 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    day_index = std::get<0ul,unsigned int const,unsigned int>(v13);
    obtained_exp = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v13);
    if ( *(_BYTE *)(((unsigned __int64)obtained_exp >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)obtained_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)obtained_exp >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( *obtained_exp )
    {
      if ( *(_BYTE *)(((unsigned __int64)obtained_exp >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)obtained_exp & 7) + 3) >= *(_BYTE *)(((unsigned __int64)obtained_exp >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v2 = *obtained_exp;
      v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](proto_daily_obtained_exp_map, day_index);
      v4 = v3;
      if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3);
      }
      *v4 = v2;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessScheduleBin::set_coin(proto_chess_bin, this->coin_);
  __for_range_0 = &this->finished_map_id_set_;
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<unsigned int>::begin(&this->finished_map_id_set_)._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false>::__node_type *)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v5 = (google::protobuf::uint32 *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ChessScheduleBin::add_finished_map_id_list(proto_chess_bin, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::ChessScheduleBin::set_punish_over_time(proto_chess_bin, this->punish_over_time_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  proto::ChessScheduleBin::set_is_content_closed(proto_chess_bin, this->is_content_closed_);
  return 0;
};

// Line 76: range 0000000017956640-0000000017956B0D
int32_t __cdecl ChessActivity::toClient(ChessActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r13
  int32_t result; // eax
  unsigned int *v7; // rdx
  uint32_t ContentCloseTime; // eax
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  unsigned int map_id; // [rsp+1Ch] [rbp-A4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-A0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+28h] [rbp-98h] BYREF
  proto::ChessActivityDetailInfo *chess_info; // [rsp+30h] [rbp-90h]
  std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-80h] BYREF
  char v16[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 exp_info:87";
  *(_QWORD *)(v2 + 16) = ChessActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  if ( BaseActivity::toClient((BaseActivity *const)this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "toClient",
      79);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v15,
           (const char (*)[45])"[CHESS] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = -1;
  }
  else
  {
    chess_info = proto::ActivityInfo::mutable_chess_info(activity_info);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::ChessActivityDetailInfo::set_level(chess_info, this->level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ChessActivityDetailInfo::set_exp(chess_info, this->exp_);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_teach_dungeon_finished_);
    }
    proto::ChessActivityDetailInfo::set_is_teach_dungeon_finished(chess_info, this->is_teach_dungeon_finished_);
    *(std::pair<unsigned int,unsigned int> *)(v2 + 32) = ChessActivity::getExpInfoTillToday(this);
    proto::ChessActivityDetailInfo::set_obtained_exp(chess_info, *(_DWORD *)(v2 + 32));
    proto::ChessActivityDetailInfo::set_available_exp(chess_info, *(_DWORD *)(v2 + 36));
    __for_range = &this->finished_map_id_set_;
    __for_begin._M_node = std::set<unsigned int>::begin(&this->finished_map_id_set_)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&this->finished_map_id_set_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      map_id = *v7;
      proto::ChessActivityDetailInfo::add_finished_map_id_list(chess_info, map_id);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::ChessActivityDetailInfo::set_punish_over_time(chess_info, this->punish_over_time_);
    ContentCloseTime = ChessActivity::getContentCloseTime(this);
    proto::ChessActivityDetailInfo::set_content_close_time(chess_info, ContentCloseTime);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_content_closed_);
    }
    proto::ChessActivityDetailInfo::set_is_content_closed(chess_info, this->is_content_closed_);
    result = 0;
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
  return result;
};

// Line 102: range 0000000017956B0E-0000000017956B1C
int32_t __cdecl ChessActivity::init(ChessActivity *const this)
{
  return 0;
};

// Line 107: range 0000000017956B1E-0000000017956BD0
void __cdecl ChessActivity::onLogin(ChessActivity *const this)
{
  unsigned __int64 v1; // rax
  char v2; // al

  if ( !BaseActivity::isOpening((const BaseActivity *const)this, 0) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(ChessActivity *const))v1)(this)
    || BaseActivity::isSettled((const BaseActivity *const)this) )
  {
LABEL_8:
    v2 = 1;
  }
  else
  {
    v2 = 0;
  }
  if ( !v2 )
    BaseActivity::onLogin((BaseActivity *const)this);
};

// Line 117: range 0000000017956BD2-0000000017956C2B
void __cdecl ChessActivity::onStart(ChessActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 1;
};

// Line 123: range 0000000017956C2C-0000000017956EC2
void __cdecl ChessActivity::onClear(ChessActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:130";
  *(_QWORD *)(v1 + 16) = ChessActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->level_);
  }
  this->level_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->exp_);
  }
  this->exp_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_teach_dungeon_finished_);
  }
  this->is_teach_dungeon_finished_ = 0;
  std::unordered_map<unsigned int,unsigned int>::clear(&this->daily_obtained_exp_map_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->coin_ )
  {
    SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    ChessActivity::subCoin(this, this->coin_, (const SubItemReason *)(v1 + 32), 0);
  }
  std::set<unsigned int>::clear(&this->finished_map_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->punish_over_time_);
  }
  this->punish_over_time_ = 0;
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

// Line 138: range 0000000017956EC4-0000000017956F3B
int32_t __cdecl ChessActivity::execAction(ChessActivity *const this, const data::NewActivityExec *action_exec)
{
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( action_exec->type != NEW_ACTIVITY_ACTION_CLOSE_CHESS_CONTENT )
    return BaseActivity::execAction((BaseActivity *const)this, action_exec);
  ChessActivity::closeContent(this);
  return 0;
};

// Line 153: range 0000000017956F3C-0000000017956FE9
void __cdecl ChessActivity::fillActivityCoinInfo(
        ChessActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t coin; // ebx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  coin = this->coin_;
  key[0] = 130;
  v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = coin;
};

// Line 158: range 0000000017956FEA-0000000017957009
void __cdecl ChessActivity::onDailyRefresh(ChessActivity *const this)
{
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
};

// Line 163: range 000000001795700A-0000000017957C6E
int32_t __cdecl ChessActivity::addExp(
        ChessActivity *const this,
        uint32_t add_exp,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  uint32_t v8; // edx
  const ActivityChessExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  uint32_t exp; // ecx
  uint32_t level; // r14d
  uint32_t exp_to_next; // ecx
  const ActivityChessExcelConfigMgr *v14; // rcx
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  uint32_t v18; // ecx
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v19; // rax
  PlayerEventComp *EventComp; // r14
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  Player *player; // r14
  int32_t result; // eax
  std::string v29; // [rsp+0h] [rbp-130h]
  bool is_notifya; // [rsp+10h] [rbp-120h]
  google::protobuf::uint32 add_expa; // [rsp+14h] [rbp-11Ch]
  ChessActivity *thisa; // [rsp+18h] [rbp-118h]
  unsigned int val; // [rsp+2Ch] [rbp-104h] BYREF
  uint32_t old_level; // [rsp+30h] [rbp-100h]
  uint32_t old_exp; // [rsp+34h] [rbp-FCh]
  const data::ActivityChessLevelExcelConfig *level_config_ptr; // [rsp+38h] [rbp-F8h]
  const ActivityChessExcelConfigMgr *config_mgr; // [rsp+40h] [rbp-F0h]
  const data::ActivityChessLevelExcelConfig *new_level_config_ptr; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> v39; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v40; // [rsp+60h] [rbp-D0h] BYREF
  char v41[176]; // [rsp+80h] [rbp-B0h] BYREF

  *(&v29._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  HIDWORD(v29._anon_0._M_allocated_capacity) = add_exp;
  v29._M_string_length = (std::string::size_type)reason;
  v29._anon_0._M_local_buf[0] = is_notify;
  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 1 10 holder:212 48 4 17 cur_day_index:200 64 16 11 log_ptr:213 96 16 13 event_ptr:208";
  *(_QWORD *)(v4 + 16) = ChessActivity::addExp;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556927;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  if ( add_exp )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_level = this->level_;
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_exp = this->exp_;
    v8 = SAFE_ADD<unsigned int,unsigned int>(this->exp_, add_exp);
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->exp_);
    }
    this->exp_ = v8;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.activity_chess_config_mgr;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v39);
    v9 = config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(v9, this->level_);
    if ( level_config_ptr )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        exp = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp_to_next >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp_to_next >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( exp < level_config_ptr->exp_to_next )
          break;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        level = this->level_;
        if ( level >= ActivityChessExcelConfigMgr::getMaxChessLevel(config_mgr) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp_to_next >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp_to_next >> 3)
                                                                            + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          exp_to_next = level_config_ptr->exp_to_next;
          if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->exp_);
          }
          this->exp_ = exp_to_next;
          break;
        }
        v14 = config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        new_level_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessLevelExcelConfig(
                                 v14,
                                 this->level_ + 1);
        if ( !new_level_config_ptr )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/activity/chess_activity.cpp",
            "addExp",
            192);
          v15 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v40,
                  (const char (*)[56])"[CHESS] findActivityChessLevelExcelConfig failed, uid: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" ,level: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v4 + 48) = this->level_ + 1;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, (const unsigned int *)(v4 + 48));
          common::milog::MiLogStream::~MiLogStream(&v40);
          break;
        }
        if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++this->level_;
        if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v18 = this->exp_;
        if ( *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp_to_next >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&level_config_ptr->exp_to_next >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        this->exp_ = v18 - level_config_ptr->exp_to_next;
        level_config_ptr = new_level_config_ptr;
      }
      *(_DWORD *)(v4 + 48) = BaseActivity::getDayIndexAfterStart((BaseActivity *const)this);
      if ( *(_DWORD *)(v4 + 48) )
      {
        v19 = std::unordered_map<unsigned int,unsigned int>::operator[](
                &this->daily_obtained_exp_map_,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v4 + 48));
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *v19 += add_exp;
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      if ( old_level != this->level_ )
      {
        common::tools::perf::make_shared<ChessLevelUpEvent,unsigned int &>((unsigned int *)(v4 + 96), &this->level_);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        EventComp = Player::getEventComp(this->player_);
        std::shared_ptr<BaseEvent>::shared_ptr<ChessLevelUpEvent,void>(
          (std::shared_ptr<BaseEvent> *const)&v39,
          (const std::shared_ptr<ChessLevelUpEvent> *)(v4 + 96));
        PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v39);
        std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v39);
        std::shared_ptr<ChessLevelUpEvent>::~shared_ptr((std::shared_ptr<ChessLevelUpEvent> *const)(v4 + 96));
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v40, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32), 0xDB6u, v29);
      std::string::~string(&v40);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyChessExpChange>();
      v22 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto_log::PlayerLogBodyChessExpChange::set_add_exp(v22, add_expa);
      v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto_log::PlayerLogBodyChessExpChange::set_old_level(v23, old_level);
      v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      proto_log::PlayerLogBodyChessExpChange::set_old_exp(v24, old_exp);
      v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->level_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyChessExpChange::set_level(v25, thisa->level_);
      v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyChessExpChange,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->exp_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->exp_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto_log::PlayerLogBodyChessExpChange::set_exp(v26, thisa->exp_);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&v39, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyChessExpChange,void>(
        (std::shared_ptr<google::protobuf::Message> *const)(v4 + 96),
        (const std::shared_ptr<proto_log::PlayerLogBodyChessExpChange> *)(v4 + 64));
      Player::printStatLog(player, (MessagePtr *)(v4 + 96), &v39, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v4 + 96));
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v39);
      if ( is_notifya )
        BaseActivity::notifyClientData((BaseActivity *const)thisa, 0);
      v7 = 0;
      std::shared_ptr<proto_log::PlayerLogBodyChessExpChange>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyChessExpChange> *const)(v4 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/chess_activity.cpp",
        "addExp",
        177);
      v10 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v40,
              (const char (*)[58])"[CHESS] findActivityChessLevelExcelConfig failed, level_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->level_);
      common::milog::MiLogStream::~MiLogStream(&v40);
      v7 = -1;
    }
  }
  else
  {
    v7 = 0;
  }
  result = v7;
  if ( v41 == (char *)v4 )
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

// Line 230: range 0000000017957C70-0000000017957F1F
std::pair<unsigned int,unsigned int> __cdecl ChessActivity::getExpInfoTillToday(ChessActivity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::pair<unsigned int,unsigned int> v4; // rax
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v5; // rdx
  uint32_t cur_day_index; // [rsp+1Ch] [rbp-B4h]
  ActivityChessExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-B0h]
  const data::ActivityChessScheduleExcelConfig *schedule_config_ptr; // [rsp+28h] [rbp-A8h]
  std::pair<int,int> __p; // [rsp+30h] [rbp-A0h] BYREF
  std::pair<unsigned int,unsigned int> v10; // [rsp+38h] [rbp-98h] BYREF
  std::shared_ptr<Config> v11; // [rsp+40h] [rbp-90h] BYREF
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 4 16 obtained_exp:238 48 4 17 available_exp:239 64 4 13 day_index:240";
  *(_QWORD *)(v1 + 16) = ChessActivity::getExpInfoTillToday;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -202116348;
  cur_day_index = BaseActivity::getDayIndexAfterStart((BaseActivity *const)this);
  if ( cur_day_index )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11)->design_config.txt_config_mgr.activity_chess_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v11);
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    for ( *(_DWORD *)(v1 + 64) = 1; cur_day_index >= *(_DWORD *)(v1 + 64); ++*(_DWORD *)(v1 + 64) )
    {
      v5 = std::unordered_map<unsigned int,unsigned int>::operator[](
             &this->daily_obtained_exp_map_,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) += *v5;
      schedule_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessScheduleExcelConfig(
                              config_mgr,
                              *(_DWORD *)(v1 + 64));
      if ( schedule_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->exp_up_limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->exp_up_limit >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v1 + 48) += schedule_config_ptr->exp_up_limit;
      }
    }
    v4 = std::make_pair<unsigned int &,unsigned int &>((unsigned int *)(v1 + 32), (unsigned int *)(v1 + 48));
  }
  else
  {
    *(_DWORD *)(v1 + 64) = 0;
    *(_DWORD *)(v1 + 48) = 0;
    __p = std::make_pair<int,int>((int *)(v1 + 48), (int *)(v1 + 64));
    std::pair<unsigned int,unsigned int>::pair<int,int,true>(&v10, &__p);
    v4 = v10;
  }
  if ( v12 == (char *)v1 )
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
  return v4;
};

// Line 254: range 0000000017957F20-0000000017958006
uint32_t __cdecl ChessActivity::getRemainExp(ChessActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  uint32_t result; // eax
  uint32_t obtained_exp; // [rsp+18h] [rbp-68h]
  uint32_t available_exp; // [rsp+1Ch] [rbp-64h]
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 8 12 exp_info:255";
  *(_QWORD *)(v1 + 16) = ChessActivity::getRemainExp;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  *(std::pair<unsigned int,unsigned int> *)(v1 + 32) = ChessActivity::getExpInfoTillToday(this);
  obtained_exp = *(_DWORD *)(v1 + 32);
  available_exp = *(_DWORD *)(v1 + 36);
  if ( obtained_exp >= available_exp )
    result = 0;
  else
    result = available_exp - obtained_exp;
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

// Line 267: range 0000000017958008-0000000017958267
__int64 __fastcall ChessActivity::checkAddCoin(const ChessActivity *const this, uint32_t add_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:266";
  *(_QWORD *)(v2 + 16) = ChessActivity::checkAddCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( this->coin_ && *(_DWORD *)(v2 + 32) + this->coin_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->coin_ || *(_DWORD *)(v2 + 32) + this->coin_ <= *(_DWORD *)(v2 + 32) )
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
      "./src/player/activity/chess_activity.cpp",
      "checkAddCoin",
      270);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v9,
           (const char (*)[34])"[CHESS] coin over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->coin_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9185LL;
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

// Line 277: range 0000000017958268-0000000017958430
__int64 __fastcall ChessActivity::checkSubCoin(const ChessActivity *const this, uint32_t sub_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:276";
  *(_QWORD *)(v2 + 16) = ChessActivity::checkSubCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( this->coin_ >= *(_DWORD *)(v2 + 32) )
  {
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "checkSubCoin",
      280);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v9,
           (const char (*)[35])"[CHESS] coin not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->coin_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_262431E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9186LL;
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

// Line 287: range 0000000017958432-0000000017958800
int32_t __cdecl ChessActivity::addCoin(
        ChessActivity *const this,
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
  ChessActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  unsigned int old_coin; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:294";
  *(_QWORD *)(v4 + 16) = ChessActivity::addCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = ChessActivity::checkAddCoin(this, add_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_coin = thisa->coin_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_coin, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&thisa->coin_);
    }
    thisa->coin_ = v9;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_CHESS_COIN,
      old_coin,
      thisa->coin_,
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

// Line 307: range 0000000017958802-0000000017958B47
int32_t __cdecl ChessActivity::subCoin(
        ChessActivity *const this,
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
  ChessActivity *thisa; // [rsp+18h] [rbp-A8h]
  int32_t ret; // [rsp+28h] [rbp-98h]
  uint32_t old_coin; // [rsp+2Ch] [rbp-94h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:314";
  *(_QWORD *)(v4 + 16) = ChessActivity::subCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = ChessActivity::checkSubCoin(this, sub_num);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    old_coin = thisa->coin_;
    thisa->coin_ = old_coin - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo((BaseActivity *const)thisa);
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
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) <= 3 )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_CHESS_COIN,
      old_coin,
      thisa->coin_,
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

// Line 327: range 0000000017958B48-00000000179593F3
__int64 __fastcall ChessActivity::checkEnterDungeon(ChessActivity *const this, uint32_t dungeon_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  time_t Now; // r14
  uint32_t unlock_day; // ecx
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  const ActivityChessExcelConfigMgr *config_mgr; // [rsp+20h] [rbp-D0h]
  const data::ActivityChessMapExcelConfig *map_config_ptr; // [rsp+28h] [rbp-C8h]
  std::shared_ptr<Config> v27; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+60h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 map_id:341 64 4 14 dungeon_id:326";
  *(_QWORD *)(v2 + 16) = ChessActivity::checkEnterDungeon;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = dungeon_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v27);
  map_config_ptr = ActivityChessExcelConfigMgr::getMapConfigByDungeonId(config_mgr, *(_DWORD *)(v2 + 64));
  if ( !map_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "checkEnterDungeon",
      332);
    v5 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v28,
           (const char (*)[53])"[CHESS] getMapConfigByDungeonId failed, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 0xFFFFFFFFLL;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( this->is_content_closed_ )
  {
    result = 860LL;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->chess_map_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&map_config_ptr->chess_map_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = map_config_ptr->chess_map_id;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->unlock_day >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)map_config_ptr - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config_ptr->unlock_day >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  unlock_day = map_config_ptr->unlock_day;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( Now < BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, unlock_day) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "checkEnterDungeon",
      344);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v28,
           (const char (*)[35])"[CHESS] map id still locked, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" ,map_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 9189LL;
    goto LABEL_44;
  }
  if ( *(char *)(((unsigned __int64)&map_config_ptr->is_teach_map >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&map_config_ptr->is_teach_map);
  if ( map_config_ptr->is_teach_map )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_teach_dungeon_finished_);
    }
    if ( this->is_teach_dungeon_finished_
      || common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_map_id_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/chess_activity.cpp",
        "checkEnterDungeon",
        353);
      v13 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              &v28,
              (const char (*)[46])"[CHESS] teach dungeon already finished, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" ,map_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v28);
      result = 9183LL;
      goto LABEL_44;
    }
LABEL_43:
    result = 0LL;
    goto LABEL_44;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_teach_dungeon_finished_);
  }
  if ( !this->is_teach_dungeon_finished_ )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/chess_activity.cpp",
      "checkEnterDungeon",
      362);
    v16 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            &v28,
            (const char (*)[40])"[CHESS] teach dungeon unfinished, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
    v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" ,map_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 9184LL;
  }
  else
  {
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_map_id_set_,
           &map_config_ptr->prev_map_id) )
    {
      goto LABEL_43;
    }
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/chess_activity.cpp",
      "checkEnterDungeon",
      368);
    v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v28,
            (const char (*)[38])"[CHESS] prev map id unfinished, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
    v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])" ,map_id: ");
    v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 48));
    v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v22, (const char (*)[16])" ,prev_map_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &map_config_ptr->prev_map_id);
    common::milog::MiLogStream::~MiLogStream(&v28);
    result = 9188LL;
  }
LABEL_44:
  if ( v29 == (char *)v2 )
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

// Line 378: range 00000000179593F4-0000000017959470
int32_t __cdecl ChessActivity::checkMatchDungeon(ChessActivity *const this, uint32_t dungeon_id)
{
  time_t Now; // rcx

  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( Now >= this->punish_over_time_ )
    return ChessActivity::checkEnterDungeon(this, dungeon_id);
  else
    return 9187;
};

// Line 388: range 0000000017959472-00000000179597AC
void __fastcall ChessActivity::onDungeonSettle(ChessActivity *const this, uint32_t dungeon_id, bool is_succ)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  ActivityChessExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-A0h]
  const data::ActivityChessMapExcelConfig *map_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 dungeon_id:387";
  *(_QWORD *)(v3 + 16) = ChessActivity::onDungeonSettle;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = dungeon_id;
  common::milog::MiLogStream::create(
    &v14,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/chess_activity.cpp",
    "onDungeonSettle",
    389);
  v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v14,
         (const char (*)[38])"[CHESS] onDungeonSettle, dungeon_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" ,is_succ: ");
  common::milog::MiLogStream::operator<<(v8, is_succ);
  common::milog::MiLogStream::~MiLogStream(&v14);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v13);
  map_config_ptr = ActivityChessExcelConfigMgr::getMapConfigByDungeonId(config_mgr, *(_DWORD *)(v3 + 32));
  if ( map_config_ptr )
  {
    if ( is_succ )
    {
      std::set<unsigned int>::insert(&this->finished_map_id_set_, &map_config_ptr->chess_map_id);
      if ( *(char *)(((unsigned __int64)&map_config_ptr->is_teach_map >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&map_config_ptr->is_teach_map);
      if ( map_config_ptr->is_teach_map )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store1(&this->is_teach_dungeon_finished_);
        }
        this->is_teach_dungeon_finished_ = 1;
      }
    }
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "onDungeonSettle",
      394);
    v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
           &v14,
           (const char (*)[53])"[CHESS] getMapConfigByDungeonId failed, dungeon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
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

// Line 411: range 00000000179597AE-000000001795991C
uint32_t __cdecl ChessActivity::getExhibitionSeriesId(const ChessActivity *const this)
{
  const data::ActivityChessExcelConfigMgrBase *v1; // rdx
  common::milog::MiLogStream *v2; // rax
  ActivityChessExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-50h]
  const data::ActivityChessPreviewExcelConfig *preview_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v6);
  v1 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  preview_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessPreviewExcelConfig(
                         v1,
                         this->activity_id_);
  if ( preview_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->series_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)preview_config_ptr + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&preview_config_ptr->series_id >> 3)
                                                                        + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    return preview_config_ptr->series_id;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "getExhibitionSeriesId",
      416);
    v2 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v7,
           (const char (*)[67])"[CHESS] findActivityChessPreviewExcelConfig failed, activity_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
};

// Line 424: range 000000001795991E-0000000017959BAA
std::vector<unsigned int> *__cdecl ChessActivity::getTeachExhibitionScoreIdVec(
        std::vector<unsigned int> *retstr,
        const ChessActivity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const data::ActivityChessExcelConfigMgrBase *v5; // rdx
  common::milog::MiLogStream *v6; // rax
  ActivityChessExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-C0h]
  const data::ActivityChessPreviewExcelConfig *preview_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<Config> v10; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v11; // [rsp+30h] [rbp-A0h] BYREF
  char v12[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 24 13 empty_vec:425";
  *(_QWORD *)(v2 + 16) = ChessActivity::getTeachExhibitionScoreIdVec;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218103808;
  v4[536862722] = -202116109;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 32));
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v10);
  v5 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  preview_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessPreviewExcelConfig(
                         v5,
                         this->activity_id_);
  if ( preview_config_ptr )
  {
    std::vector<unsigned int>::vector(retstr, &preview_config_ptr->teach_score_id_list);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "getTeachExhibitionScoreIdVec",
      430);
    v6 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v11,
           (const char (*)[67])"[CHESS] findActivityChessPreviewExcelConfig failed, activity_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    std::vector<unsigned int>::vector(retstr, (std::vector<unsigned int> *)(v2 + 32));
  }
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 32));
  if ( v12 == (char *)v2 )
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
  return retstr;
};

// Line 438: range 0000000017959BAC-0000000017959D6B
void __cdecl ChessActivity::dealPunish(ChessActivity *const this)
{
  const data::ActivityChessExcelConfigMgrBase *v1; // rdx
  common::milog::MiLogStream *v2; // rax
  int Now; // esi
  uint32_t v4; // ecx
  ActivityChessExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-50h]
  const data::ActivityChessPreviewExcelConfig *preview_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v7);
  v1 = config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  preview_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessPreviewExcelConfig(
                         v1,
                         this->activity_id_);
  if ( preview_config_ptr )
  {
    Now = common::tools::TimeUtils::getNow();
    if ( *(_BYTE *)(((unsigned __int64)&preview_config_ptr->punish_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&preview_config_ptr->punish_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    v4 = Now + preview_config_ptr->punish_time;
    if ( *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->punish_over_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->punish_over_time_);
    }
    this->punish_over_time_ = v4;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "dealPunish",
      443);
    v2 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
           &v8,
           (const char (*)[67])"[CHESS] findActivityChessPreviewExcelConfig failed, activity_id_: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 452: range 0000000017959D6C-0000000017959E33
uint32_t __cdecl ChessActivity::getContentCloseTime(const ChessActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t v2; // ecx
  uint32_t BeginTimeByOpenDay; // ebx
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  v2 = ActivityChessExcelConfigMgr::getMaxDayIndex(&v1->design_config.txt_config_mgr.activity_chess_config_mgr) + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v2);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return BeginTimeByOpenDay;
};

// Line 457: range 0000000017959E34-0000000017959EE3
void __cdecl ChessActivity::closeContent(ChessActivity *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_content_closed_);
  }
  if ( !this->is_content_closed_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_content_closed_);
    }
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  }
};

// Line 468: range 0000000017959EE4-000000001795A170
__int64 __fastcall ChessActivity::finishChessMapByGm(ChessActivity *const this, uint32_t chess_map_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  ActivityChessExcelConfigMgr *config_mgr; // [rsp+10h] [rbp-A0h]
  const data::ActivityChessMapExcelConfig *map_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 16 chess_map_id:467";
  *(_QWORD *)(v2 + 16) = ChessActivity::finishChessMapByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = chess_map_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v9);
  config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v9)->design_config.txt_config_mgr.activity_chess_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v9);
  map_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig(
                     config_mgr,
                     *(_DWORD *)(v2 + 32));
  if ( map_config_ptr )
  {
    std::set<unsigned int>::insert(&this->finished_map_id_set_, (const std::set<unsigned int>::value_type *)(v2 + 32));
    if ( *(char *)(((unsigned __int64)&map_config_ptr->is_teach_map >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&map_config_ptr->is_teach_map);
    if ( map_config_ptr->is_teach_map )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_teach_dungeon_finished_);
      }
      this->is_teach_dungeon_finished_ = 1;
    }
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "finishChessMapByGm",
      473);
    v5 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v10,
           (const char (*)[57])"[CHESS] findActivityChessMapExcelConfig failed, map_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v10);
    result = 0xFFFFFFFFLL;
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

// Line 488: range 000000001795A172-000000001795A1EC
int32_t __cdecl ChessActivity::clearFinishedChessMapByGm(ChessActivity *const this)
{
  std::set<unsigned int>::clear(&this->finished_map_id_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_teach_dungeon_finished_ >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_teach_dungeon_finished_);
  }
  this->is_teach_dungeon_finished_ = 0;
  BaseActivity::notifyClientData((BaseActivity *const)this, 0);
  return 0;
};

// Line 497: range 000000001795A1EE-000000001795A4B0
__int64 __fastcall ChessActivity::setLevelByGm(ChessActivity *const this, uint32_t level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  char v5; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r15
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  uint32_t v10; // ecx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 9 level:496";
  *(_QWORD *)(v2 + 16) = ChessActivity::setLevelByGm;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = level;
  v5 = 0;
  v7 = 1;
  if ( *(_DWORD *)(v2 + 32) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    v5 = 1;
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
    if ( ActivityChessExcelConfigMgr::getMaxChessLevel(&v6->design_config.txt_config_mgr.activity_chess_config_mgr) >= *(_DWORD *)(v2 + 32) )
      v7 = 0;
  }
  if ( v5 )
    std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( v7 )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "setLevelByGm",
      500);
    v8 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v12,
           (const char (*)[37])"[CHESS] setLevelByGm failed, level: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->level_);
    }
    this->level_ = v10;
    if ( *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->exp_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->exp_);
    }
    this->exp_ = 0;
    BaseActivity::notifyClientData((BaseActivity *const)this, 0);
    result = 0LL;
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
  return result;
};

// Line 511: range 000000001795A4B2-000000001795AF8B
int32_t __cdecl ChessActivity::enterChessDungeon(
        ChessActivity *const this,
        const proto::EnterChessDungeonReq *req,
        proto::EnterChessDungeonRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v7; // rbx
  int32_t v8; // r14d
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // rax
  PlayerDungeonComp *DungeonComp; // r14
  __int32 entry_point_id; // r15d
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  __int32 SceneId; // eax
  common::milog::MiLogStream *v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v21; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+2Ch] [rbp-174h] BYREF
  const ActivityChessExcelConfigMgr *config_mgr; // [rsp+30h] [rbp-170h]
  const data::ActivityChessMapExcelConfig *map_config_ptr; // [rsp+38h] [rbp-168h]
  std::tuple_element<0,std::pair<int,std::shared_ptr<DungeonScene> > >::type *ret; // [rsp+40h] [rbp-160h]
  std::tuple_element<1,std::pair<int,std::shared_ptr<DungeonScene> > >::type *dungeon_scene_ptr; // [rsp+48h] [rbp-158h]
  std::shared_ptr<Config> v29; // [rsp+50h] [rbp-150h] BYREF
  std::pair<int,std::shared_ptr<DungeonScene> > __in; // [rsp+60h] [rbp-140h] BYREF
  EnterDungeonOption v31; // [rsp+80h] [rbp-120h] BYREF
  common::milog::MiLogStream v32; // [rsp+A0h] [rbp-100h] BYREF
  std::map<unsigned int,unsigned int> level_config_id_map; // [rsp+C0h] [rbp-E0h] BYREF
  char v34[176]; // [rsp+F0h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 10 map_id:512 48 4 14 dungeon_id:544 64 16 17 cur_world_ptr:522 96 16 13 scene_ptr:529";
  *(_QWORD *)(v3 + 16) = ChessActivity::enterChessDungeon;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 32) = proto::EnterChessDungeonReq::map_id(req);
  proto::EnterChessDungeonRsp::set_map_id(rsp_0, *(_DWORD *)(v3 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/chess_activity.cpp",
      "enterChessDungeon",
      518);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v32,
           (const char (*)[33])"[CHESS] not in self world, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v32);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v3 + 64));
    if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/chess_activity.cpp",
        "enterChessDungeon",
        525);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v32,
             (const char (*)[34])"[CHESS] getCurWorld failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v8 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/chess_activity.cpp",
          "enterChessDungeon",
          532);
        v10 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v32,
                (const char (*)[32])"[CHESS] scene_ptr is null, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
        common::milog::MiLogStream::~MiLogStream(&v32);
        v8 = 512;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29)->design_config.txt_config_mgr.activity_chess_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v29);
        map_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessMapExcelConfig(
                           config_mgr,
                           *(_DWORD *)(v3 + 32));
        if ( map_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)map_config_ptr - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&map_config_ptr->dungeon_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          *(_DWORD *)(v3 + 48) = map_config_ptr->dungeon_id;
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          DungeonComp = Player::getDungeonComp(this->player_);
          memset(&v31, 0, sizeof(v31));
          EnterDungeonOption::EnterDungeonOption(&v31);
          memset(&level_config_id_map, 0, sizeof(level_config_id_map));
          std::map<unsigned int,unsigned int>::map(&level_config_id_map);
          if ( *(_BYTE *)(((unsigned __int64)&map_config_ptr->entry_point_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&map_config_ptr->entry_point_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          entry_point_id = map_config_ptr->entry_point_id;
          v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          SceneId = Scene::getSceneId(v14);
          PlayerDungeonComp::enterDungeon(
            &__in,
            DungeonComp,
            *(_DWORD *)(v3 + 48),
            SceneId,
            entry_point_id,
            &level_config_id_map,
            v31);
          std::map<unsigned int,unsigned int>::~map(&level_config_id_map);
          ret = std::get<0ul,int,std::shared_ptr<DungeonScene>>(&__in);
          dungeon_scene_ptr = std::get<1ul,int,std::shared_ptr<DungeonScene>>(&__in);
          if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( *ret )
          {
            if ( *ret < 0 )
            {
              common::milog::MiLogStream::create(
                &v32,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/chess_activity.cpp",
                "enterChessDungeon",
                550);
              v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      &v32,
                      (const char (*)[35])"[CHESS] enterDungeon failed, uid: ");
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              val = Player::getUid(this->player_);
              v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
              v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                      v17,
                      (const char (*)[15])" ,dungeon_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream(&v32);
            }
            if ( *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)ret & 7) + 3) >= *(_BYTE *)(((unsigned __int64)ret >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v8 = *ret;
          }
          else if ( std::operator!=<DungeonScene>(0LL, dungeon_scene_ptr)
                 && (v19 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)dungeon_scene_ptr),
                     DungeonScene::getDungeonId(v19) != *(_DWORD *)(v3 + 48)) )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/activity/chess_activity.cpp",
              "enterChessDungeon",
              558);
            v21 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    &v32,
                    (const char (*)[35])"[CHESS] enter dungeon failed, uid:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            val = Player::getUid(this->player_);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
            common::milog::MiLogStream::~MiLogStream(&v32);
            v8 = -1;
          }
          else
          {
            v8 = 0;
          }
          std::pair<int,std::shared_ptr<DungeonScene>>::~pair(&__in);
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/chess_activity.cpp",
            "enterChessDungeon",
            540);
          v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                  &v32,
                  (const char (*)[57])"[CHESS] findActivityChessMapExcelConfig failed, map_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream(&v32);
          v8 = -1;
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
    }
    std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v3 + 64));
  }
  result = v8;
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
