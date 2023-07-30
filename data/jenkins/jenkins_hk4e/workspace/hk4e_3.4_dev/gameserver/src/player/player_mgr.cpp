// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/player_mgr.cpp

// Line 35: range 00000000179A734C-00000000179A74A1
void __cdecl SavePlayerQueue::SavePlayerQueue(SavePlayerQueue *const this, SavePlayerQueue *rhs)
{
  uint32_t *p_last_send_proto_time; // rdx
  PlayerMgr *player_mgr; // rdx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  std::unordered_set<unsigned int>::unordered_set(&this->need_save_player_set_);
  std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::unordered_map(&this->save_info_map_);
  p_last_send_proto_time = &this->last_send_proto_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_send_proto_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_send_proto_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_send_proto_time_, rhs, p_last_send_proto_time);
  }
  this->last_send_proto_time_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&rhs->player_mgr_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  player_mgr = rhs->player_mgr_;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_mgr_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_mgr_, rhs);
  this->player_mgr_ = player_mgr;
  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/player_mgr.cpp",
    "SavePlayerQueue",
    38);
  common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(&v4, (const char (*)[72])off_26265680);
  common::milog::MiLogStream::~MiLogStream(&v4);
};

// Line 42: range 00000000179A74A2-00000000179A7AD4
int32_t __cdecl PlayerSaveWaitData::sendToDb(PlayerSaveWaitData *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int uid; // edi
  common::milog::MiLogStream *v6; // rdx
  int v7; // r15d
  common::milog::MiLogStream *v8; // rdx
  __int64 Now; // rsi
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  proto::PlayerData *player_data; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF
  std::pair<unsigned int,unsigned int> gate_session; // 0:rsi.8

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 6 req:45";
  *(_QWORD *)(v2 + 16) = PlayerSaveWaitData::sendToDb;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_player_data_dirty);
  }
  if ( !this->is_player_data_dirty )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "sendToDb",
      57);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v16, (const char (*)[21])"player data is clear");
    common::milog::MiLogStream::~MiLogStream(&v16);
    if ( PlayerSaveWaitData::checkBlockSave(this) )
      goto LABEL_24;
LABEL_19:
    if ( *(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_player_data_dirty);
    }
    if ( !this->is_player_data_dirty )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "sendToDb",
        65);
      v8 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v16,
             (const char (*)[61])"should not happen, player data and block data all clear,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->uid);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v1 = -1;
    }
    else
    {
LABEL_24:
      Now = (unsigned int)common::tools::TimeUtils::getNow();
      if ( *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_save_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_save_time, Now, &this->last_save_time);
      }
      this->last_save_time = Now;
      if ( *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->try_save_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->try_save_count);
      }
      ++this->try_save_count;
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_mgr.cpp",
        "sendToDb",
        71);
      v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              &v16,
              (const char (*)[56])"[DATA_VERSION] save to db from save wait, data_version:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->data_version);
      v12 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->uid);
      common::milog::MiLogStream::~MiLogStream(&v16);
      v1 = 0;
    }
    goto LABEL_29;
  }
  proto::SavePlayerDataReq::SavePlayerDataReq((proto::SavePlayerDataReq *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->save_stat_id >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  proto::SavePlayerDataReq::set_save_stat_id((proto::SavePlayerDataReq *const)(v2 + 32), this->save_stat_id);
  player_data = proto::SavePlayerDataReq::mutable_player_data((proto::SavePlayerDataReq *const)(v2 + 32));
  proto::PlayerData::CopyFrom(player_data, &this->bin_data);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(this);
  }
  uid = this->uid;
  if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->gate_session >> 3) + 0x7FFF8000)
    && *(_BYTE *)(((unsigned __int64)&this->gate_session >> 3) + 0x7FFF8000) != 0
    || *(_BYTE *)((((unsigned __int64)&this->gate_session.second + 3) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->gate_session.second + 3) >> 3)
                                                      + 0x7FFF8000) )
  {
    uid = (_DWORD)this + 4;
    __asan_report_load_n(&this->gate_session, 8LL);
  }
  gate_session = this->gate_session;
  if ( (unsigned int)Player::saveToDb(uid, gate_session, (proto::SavePlayerDataReq *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "sendToDb",
      51);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           &v16,
           (const char (*)[22])"saveToDb failed, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->uid);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v1 = -1;
    v7 = 0;
  }
  else
  {
    v7 = 1;
  }
  proto::SavePlayerDataReq::~SavePlayerDataReq((proto::SavePlayerDataReq *const)(v2 + 32));
  if ( v7 == 1 )
    goto LABEL_19;
LABEL_29:
  result = v1;
  if ( v17 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
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

// Line 76: range 00000000179A7AD6-00000000179A7E52
bool __cdecl PlayerSaveWaitData::checkBlockSave(PlayerSaveWaitData *const this)
{
  std::map<unsigned int,proto::BlockInfo> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  proto::BlockInfo *v4; // rax
  const std::string *v5; // rax
  bool v6; // r15
  __int32 player_bin_size; // esi
  __int32 uid; // edi
  bool result; // al
  __int32 total_size; // [rsp+1Ch] [rbp-E4h]
  std::map<unsigned int,proto::BlockInfo>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,proto::BlockInfo>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,proto::BlockInfo> *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,proto::BlockInfo> >::type *block_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,proto::BlockInfo> >::type *block_info; // [rsp+48h] [rbp-B8h]
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (std::map<unsigned int,proto::BlockInfo> *)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,proto::BlockInfo> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 23 dirty_block_info_map:77";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerSaveWaitData::checkBlockSave;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::map<unsigned int,proto::BlockInfo>::map(v1 + 1);
  total_size = 0;
  __for_range = &this->block_info_map;
  __for_begin._M_node = std::map<unsigned int,proto::BlockInfo>::begin(&this->block_info_map)._M_node;
  __for_end._M_node = std::map<unsigned int,proto::BlockInfo>::end(&this->block_info_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator*(&__for_begin);
    block_id = std::get<0ul,unsigned int const,proto::BlockInfo>(__in);
    block_info = std::get<1ul,unsigned int const,proto::BlockInfo>(__in);
    if ( proto::BlockInfo::is_dirty(block_info) )
    {
      v4 = std::map<unsigned int,proto::BlockInfo>::operator[](v1 + 1, block_id);
      proto::BlockInfo::CopyFrom(v4, block_info);
    }
    v5 = proto::BlockInfo::bin_data[abi:cxx11](block_info);
    total_size += std::string::size(v5);
    std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator++(&__for_begin);
  }
  if ( std::map<unsigned int,proto::BlockInfo>::empty(v1 + 1) )
  {
    v6 = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_bin_size >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->player_bin_size >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->player_bin_size);
    }
    player_bin_size = this->player_bin_size;
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(this);
    }
    uid = this->uid;
    if ( (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->gate_session >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&this->gate_session >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&this->gate_session.second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&this->gate_session.second + 3) >> 3)
                                                        + 0x7FFF8000) )
    {
      player_bin_size = 8;
      uid = (_DWORD)this + 4;
      __asan_report_load_n(&this->gate_session, 8LL);
    }
    BlockDataMgr::saveToDb(uid, v1 + 1, *(_QWORD *)&this->gate_session, total_size, player_bin_size);
    v6 = 1;
  }
  std::map<unsigned int,proto::BlockInfo>::~map(v1 + 1);
  result = v6;
  if ( v18 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 98: range 00000000179A7E54-00000000179A8239
void __fastcall PlayerSaveWaitData::onSaveBlockSucc(
        PlayerSaveWaitData *const this,
        uint32_t block_id,
        uint32_t data_version)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  bool is_dirty; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Self __y; // [rsp+20h] [rbp-C0h] BYREF
  proto::BlockInfo *block_info; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 11 block_id:97 48 4 15 data_version:97 64 8 7 iter:99";
  *(_QWORD *)(v3 + 16) = PlayerSaveWaitData::onSaveBlockSucc;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 32) = block_id;
  *(_DWORD *)(v3 + 48) = data_version;
  *(std::map<unsigned int,proto::BlockInfo>::iterator *)(v3 + 64) = std::map<unsigned int,proto::BlockInfo>::find(
                                                                      &this->block_info_map,
                                                                      (const std::map<unsigned int,proto::BlockInfo>::key_type *)(v3 + 32));
  __y._M_node = std::map<unsigned int,proto::BlockInfo>::end(&this->block_info_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo> >::_Self *)(v3 + 64),
         &__y) )
  {
    block_info = &std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo> > *const)(v3 + 64))->second;
    if ( proto::BlockInfo::is_dirty(block_info) && proto::BlockInfo::data_version(block_info) == *(_DWORD *)(v3 + 48) )
    {
      proto::BlockInfo::set_is_dirty(block_info, 0);
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_mgr.cpp",
        "onSaveBlockSucc",
        106);
      v7 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             &v21,
             (const char (*)[26])"block is clean, block_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_mgr.cpp",
        "onSaveBlockSucc",
        110);
      v8 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v21,
             (const char (*)[32])"block state not right,block id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])", isDirty:");
      is_dirty = proto::BlockInfo::is_dirty(block_info);
      v12 = common::milog::MiLogStream::operator<<(v10, is_dirty);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v12, (const char (*)[16])", data_version:");
      val = proto::BlockInfo::data_version(block_info);
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      v15 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v14,
              (const char (*)[20])", rsp_data_version:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v21);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "onSaveBlockSucc",
      116);
    v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            &v21,
            (const char (*)[28])"cannot find block,block id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  if ( v22 == (char *)v3 )
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

// Line 121: range 00000000179A823A-00000000179A8428
bool __cdecl PlayerSaveWaitData::isDirty(PlayerSaveWaitData *const this)
{
  common::milog::MiLogStream *v2; // rax
  std::map<unsigned int,proto::BlockInfo>::iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::map<unsigned int,proto::BlockInfo>::iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  std::map<unsigned int,proto::BlockInfo> *__for_range; // [rsp+20h] [rbp-50h]
  std::pair<unsigned int const,proto::BlockInfo> *__in; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,proto::BlockInfo> >::type *block_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,proto::BlockInfo> >::type *block_info; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v9; // [rsp+40h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_player_data_dirty >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_player_data_dirty);
  }
  if ( this->is_player_data_dirty )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "isDirty",
      124);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      &v9,
      (const char (*)[27])"player data is still dirty");
    common::milog::MiLogStream::~MiLogStream(&v9);
    return 1;
  }
  else
  {
    __for_range = &this->block_info_map;
    __for_begin._M_node = std::map<unsigned int,proto::BlockInfo>::begin(&this->block_info_map)._M_node;
    __for_end._M_node = std::map<unsigned int,proto::BlockInfo>::end(&this->block_info_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator*(&__for_begin);
      block_id = std::get<0ul,unsigned int const,proto::BlockInfo>(__in);
      block_info = std::get<1ul,unsigned int const,proto::BlockInfo>(__in);
      if ( proto::BlockInfo::is_dirty(block_info) )
      {
        common::milog::MiLogStream::create(
          &v9,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_mgr.cpp",
          "isDirty",
          132);
        v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
               &v9,
               (const char (*)[37])"block data is still dirty, block id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, block_id);
        common::milog::MiLogStream::~MiLogStream(&v9);
        return 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,proto::BlockInfo>>::operator++(&__for_begin);
    }
    return 0;
  }
};

// Line 140: range 00000000179A842A-00000000179A86B5
int32_t __cdecl PlayerSaveWaitData::printStatLog(
        PlayerSaveWaitData *const this,
        MessagePtr *p_body_ptr,
        MessagePtr *p_body_ext_ptr,
        uint32_t log_level)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  GameserverService *v7; // rax
  int32_t v8; // r14d
  int32_t result; // eax
  StatLogMgr *stat_log_mgr_ptr; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 64 12 stat_log:142";
  *(_QWORD *)(v4 + 16) = PlayerSaveWaitData::printStatLog;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450892) = -202116109;
  *(_QWORD *)(v4 + 32) = 0LL;
  *(_QWORD *)(v4 + 40) = 0LL;
  *(_QWORD *)(v4 + 48) = 0LL;
  *(_QWORD *)(v4 + 56) = 0LL;
  *(_QWORD *)(v4 + 64) = 0LL;
  *(_QWORD *)(v4 + 72) = 0LL;
  *(_QWORD *)(v4 + 80) = 0LL;
  *(_QWORD *)(v4 + 88) = 0LL;
  std::shared_ptr<google::protobuf::Message>::operator=(
    (std::shared_ptr<google::protobuf::Message> *const)(v4 + 32),
    &this->head_ptr);
  std::shared_ptr<google::protobuf::Message>::operator=(
    (std::shared_ptr<google::protobuf::Message> *const)(v4 + 48),
    &this->head_ext_ptr);
  std::shared_ptr<google::protobuf::Message>::operator=(
    (std::shared_ptr<google::protobuf::Message> *const)(v4 + 64),
    p_body_ptr);
  std::shared_ptr<google::protobuf::Message>::operator=(
    (std::shared_ptr<google::protobuf::Message> *const)(v4 + 80),
    p_body_ext_ptr);
  v7 = ServiceBox::findService<GameserverService>();
  stat_log_mgr_ptr = ServiceBase::findStatLogMgr(v7, log_level);
  if ( stat_log_mgr_ptr )
  {
    StatLogMgr::pushStatLog(stat_log_mgr_ptr, (const StatLog *)(v4 + 32));
    v8 = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "printStatLog",
      151);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v13, (const char (*)[20])"findStatLogMgr fail");
    common::milog::MiLogStream::~MiLogStream(&v13);
    v8 = -1;
  }
  StatLog::~StatLog((StatLog *const)(v4 + 32));
  result = v8;
  if ( v14 == (char *)v4 )
  {
    *(_DWORD *)((v4 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 161: range 00000000179A86B6-00000000179A88C0
void __fastcall SavePlayerQueue::enqueueSavePlayer(SavePlayerQueue *const this, uint32_t uid, uint32_t save_timeout)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false,false>::pointer v6; // rdx
  uint32_t *p_save_timeout; // rax
  char v8; // al
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false> __y; // [rsp+18h] [rbp-98h] BYREF
  char v11[144]; // [rsp+20h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:160 64 8 8 iter:163";
  *(_QWORD *)(v3 + 16) = SavePlayerQueue::enqueueSavePlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = uid;
  *(std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::find(
                                                                                         &this->save_info_map_,
                                                                                         (const std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::end(&this->save_info_map_)._M_cur;
  if ( !std::__detail::operator!=<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false> *)(v3 + 64),
          &__y) )
    goto LABEL_9;
  v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false,false> *const)(v3 + 64));
  p_save_timeout = &v6->second.save_timeout;
  if ( *(_BYTE *)(((unsigned __int64)p_save_timeout >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_save_timeout & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_save_timeout >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(p_save_timeout);
  }
  if ( save_timeout > v6->second.save_timeout )
    v8 = 1;
  else
LABEL_9:
    v8 = 0;
  if ( !v8 )
  {
    std::unordered_set<unsigned int>::insert(
      &this->need_save_player_set_,
      (const std::unordered_set<unsigned int>::value_type *)(v3 + 48));
    SavePlayerQueue::SaveInfo::SaveInfo((SavePlayerQueue::SaveInfo *const)&__y, *(_DWORD *)(v3 + 48), save_timeout);
    std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::insert_or_assign<SavePlayerQueue::SaveInfo>(
      &this->save_info_map_,
      (const std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::key_type *)(v3 + 48),
      (SavePlayerQueue::SaveInfo *)&__y);
  }
  if ( v11 == (char *)v3 )
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

// Line 173: range 00000000179A88C2-00000000179A89AA
void __fastcall SavePlayerQueue::removeSavePlayer(SavePlayerQueue *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:172";
  *(_QWORD *)(v2 + 16) = SavePlayerQueue::removeSavePlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  std::unordered_set<unsigned int>::erase(
    &this->need_save_player_set_,
    (const std::unordered_set<unsigned int>::key_type *)(v2 + 32));
  std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::erase(
    &this->save_info_map_,
    (const std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::key_type *)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 179: range 00000000179A89AC-00000000179A965A
__int64 __fastcall SavePlayerQueue::sendSaveProto(
        SavePlayerQueue *const this,
        uint32_t allow_cost_time_ms,
        uint32_t hard_limit_cost_time_ms)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::string *p_title; // rsi
  std::pair<unsigned int const,SavePlayerQueue::SaveInfo> *n; // rax
  unsigned int *v9; // r8
  std::priority_queue<SavePlayerQueue::SaveInfo>::const_reference v10; // rdx
  uint32_t *p_save_timeout; // rax
  char v12; // al
  std::priority_queue<SavePlayerQueue::SaveInfo>::const_reference v13; // rax
  _QWORD *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  int v18; // r15d
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  __int64 v24; // rax
  int v25; // r14d
  uint32_t v26; // ecx
  char v27; // al
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  __int64 result; // rax
  std::allocator<char> v47; // [rsp+22h] [rbp-1FEh] BYREF
  std::allocator<char> __a; // [rsp+23h] [rbp-1FDh] BYREF
  unsigned int val; // [rsp+24h] [rbp-1FCh] BYREF
  std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo> *__for_range; // [rsp+28h] [rbp-1F8h]
  std::tuple_element<0,std::pair<unsigned int const,SavePlayerQueue::SaveInfo> >::type *uid; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<1,std::pair<unsigned int const,SavePlayerQueue::SaveInfo> >::type *save_info; // [rsp+38h] [rbp-1E8h]
  std::pair<unsigned int const,SavePlayerQueue::SaveInfo> __in; // [rsp+44h] [rbp-1DCh] BYREF
  std::string title; // [rsp+50h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v55; // [rsp+70h] [rbp-1B0h] BYREF
  char v56[400]; // [rsp+90h] [rbp-190h] BYREF

  v4 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(352LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "11 48 4 14 begin_time:182 64 4 20 time_ms_from_now:196 80 4 7 uid:217 96 4 22 allow_cost_time_ms"
                        ":178 112 4 27 hard_limit_cost_time_ms:178 128 8 12 old_size:197 160 8 12 new_size:240 192 8 13 s"
                        "ave_info:214 224 16 9 timer:195 256 16 14 timer_user:200 288 32 19 save_info_queue:189";
  *(_QWORD *)(v4 + 16) = SavePlayerQueue::sendSaveProto;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -234556924;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -219021312;
  v6[536862728] = -219021312;
  v6[536862730] = -202116109;
  *(_DWORD *)(v4 + 96) = allow_cost_time_ms;
  *(_DWORD *)(v4 + 112) = hard_limit_cost_time_ms;
  *(_DWORD *)(v4 + 48) = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_send_proto_time_);
  }
  if ( this->last_send_proto_time_ == *(_DWORD *)(v4 + 48) )
  {
    v3 = 0;
  }
  else
  {
    std::priority_queue<SavePlayerQueue::SaveInfo>::priority_queue<std::vector<SavePlayerQueue::SaveInfo>,void>((std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288));
    __for_range = &this->save_info_map_;
    *(std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::iterator *)(v4 + 160) = std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::begin(&this->save_info_map_);
    *(std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::iterator *)(v4 + 192) = std::unordered_map<unsigned int,SavePlayerQueue::SaveInfo>::end(__for_range);
    while ( 1 )
    {
      p_title = (std::string *)(v4 + 192);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false> *)(v4 + 160),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false> *)(v4 + 192)) )
        break;
      n = std::__detail::_Node_iterator<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false,false> *const)(v4 + 160));
      if ( ((unsigned __int8)n & 7) >= *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)n >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&n->second.save_timeout + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)n + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&n->second.save_timeout + 3) >> 3)
                                                       + 0x7FFF8000) )
      {
        n = (std::pair<unsigned int const,SavePlayerQueue::SaveInfo> *)__asan_report_load_n(n, 12LL);
      }
      __in = *n;
      uid = std::get<0ul,unsigned int const,SavePlayerQueue::SaveInfo>(&__in);
      save_info = std::get<1ul,unsigned int const,SavePlayerQueue::SaveInfo>(&__in);
      std::priority_queue<SavePlayerQueue::SaveInfo>::emplace<unsigned int &,unsigned int &>(
        (std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288),
        (unsigned int *)save_info,
        &save_info->save_timeout,
        (unsigned int *)save_info,
        v9);
      std::__detail::_Node_iterator<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,SavePlayerQueue::SaveInfo>,false,false> *const)(v4 + 160));
    }
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 224));
    *(_DWORD *)(v4 + 64) = 0;
    *(_QWORD *)(v4 + 128) = std::priority_queue<SavePlayerQueue::SaveInfo>::size((const std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288));
    do
    {
      if ( std::priority_queue<SavePlayerQueue::SaveInfo>::empty((const std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288)) )
        break;
      common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v4 + 256));
      if ( *(_DWORD *)(v4 + 64) <= *(_DWORD *)(v4 + 96) )
        goto LABEL_20;
      v10 = std::priority_queue<SavePlayerQueue::SaveInfo>::top((const std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288));
      p_save_timeout = &v10->save_timeout;
      if ( *(_BYTE *)(((unsigned __int64)p_save_timeout >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_save_timeout & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_save_timeout >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(p_save_timeout);
      }
      if ( v10->save_timeout <= *(_DWORD *)(v4 + 48) )
LABEL_20:
        v12 = 0;
      else
        v12 = 1;
      if ( v12 )
      {
        v3 = 0;
      }
      else if ( *(_DWORD *)(v4 + 64) <= *(_DWORD *)(v4 + 112) )
      {
        v13 = std::priority_queue<SavePlayerQueue::SaveInfo>::top((const std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288));
        v14 = v13;
        if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v13->save_timeout + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->save_timeout + 3) >> 3)
                                                          + 0x7FFF8000) )
        {
          __asan_report_load_n(v13, 8LL);
        }
        *(_QWORD *)(v4 + 192) = *v14;
        *(_DWORD *)(v4 + 80) = *(_DWORD *)(v4 + 192);
        std::priority_queue<SavePlayerQueue::SaveInfo>::pop((std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288));
        SavePlayerQueue::removeSavePlayer(this, *(_DWORD *)(v4 + 80));
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_mgr.cpp",
          "sendSaveProto",
          225);
        v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v55,
                (const char (*)[21])"send save proto uid:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v4 + 80));
        v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                v16,
                (const char (*)[32])", save at (now - LastSaveTime):");
        v18 = *(_DWORD *)(v4 + 48);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_mgr_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = v18 - PlayerMgr::getPlayerLastSaveTime(this->player_mgr_, *(_DWORD *)(v4 + 80));
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v20 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                v19,
                (const char (*)[26])", save at (timeout - now)");
        *(_QWORD *)(v4 + 160) = *(unsigned int *)(v4 + 196) - (unsigned __int64)*(unsigned int *)(v4 + 48);
        v21 = common::milog::MiLogStream::operator<<<long,(long *)0>(v20, (const __int64 *)(v4 + 160));
        v22 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v21, (const char (*)[7])", now:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::~MiLogStream(&v55);
        if ( *(_BYTE *)(((unsigned __int64)&this->player_mgr_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( PlayerMgr::savePlayerToDb(this->player_mgr_, *(_DWORD *)(v4 + 80)) )
        {
          common::milog::MiLogStream::create(
            &v55,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/player_mgr.cpp",
            "sendSaveProto",
            232);
          v23 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v55,
                  (const char (*)[27])"savePlayerToDb failed,uid:");
          p_title = (std::string *)(v4 + 80);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v4 + 80));
          common::milog::MiLogStream::~MiLogStream(&v55);
          v3 = 1;
        }
        else
        {
          *(_DWORD *)(v4 + 64) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 224))
                               / 1000;
          LODWORD(v24) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 256));
          common::milog::MiLog::writeLog(
            &common::milog::MiLogDefault::default_log_obj_,
            0xBu,
            "|%s|%u|%u|%s|%d|%s|%d",
            "timer",
            *(unsigned int *)(v4 + 80),
            0LL,
            "timerSavePlayerToDb",
            0LL,
            "RET_SUCC",
            v24);
          v25 = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v4 + 256));
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v55, "timerSavePlayerToDb", &__a);
          std::allocator<char>::allocator(&v47);
          std::string::basic_string<std::allocator<char>>(&title, "timer", &v47);
          p_title = &title;
          CmdReport::addCmdRecord(*(_DWORD *)(v4 + 80), &title, (const std::string *)&v55, v25, 1u);
          std::string::~string(&title);
          std::allocator<char>::~allocator(&v47);
          std::string::~string(&v55);
          std::allocator<char>::~allocator(&__a);
          v3 = 2;
        }
      }
      else
      {
        v3 = 0;
      }
      common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 256));
    }
    while ( v3 );
    *(_QWORD *)(v4 + 160) = std::priority_queue<SavePlayerQueue::SaveInfo>::size((const std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288));
    if ( *(_QWORD *)(v4 + 128) != *(_QWORD *)(v4 + 160) )
    {
      v26 = *(_DWORD *)(v4 + 48);
      v27 = *(_BYTE *)(((unsigned __int64)&this->last_send_proto_time_ >> 3) + 0x7FFF8000);
      if ( v27 != 0 && v27 <= 3 )
      {
        LOBYTE(p_title) = v27 != 0;
        __asan_report_store4(&this->last_send_proto_time_, p_title, &this->last_send_proto_time_);
      }
      this->last_send_proto_time_ = v26;
      common::milog::MiLogStream::create(
        &v55,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_mgr.cpp",
        "sendSaveProto",
        245);
      v28 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              &v55,
              (const char (*)[20])"save_time_cost_ms: ");
      v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, (const unsigned int *)(v4 + 64));
      v30 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v29, (const char (*)[13])", save_num: ");
      *(_QWORD *)(v4 + 192) = *(_QWORD *)(v4 + 128) - *(_QWORD *)(v4 + 160);
      v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v30,
              (const unsigned __int64 *)(v4 + 192));
      v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v31, (const char (*)[13])", old_size: ");
      v33 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v32,
              (const unsigned __int64 *)(v4 + 128));
      v34 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v33, (const char (*)[12])", new_size:");
      v35 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v34,
              (const unsigned __int64 *)(v4 + 160));
      v36 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v35,
              (const char (*)[22])", allow_cost_time_ms:");
      v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, (const unsigned int *)(v4 + 96));
      v38 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v37,
              (const char (*)[27])", hard_limit_cost_time_ms:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, (const unsigned int *)(v4 + 112));
      common::milog::MiLogStream::~MiLogStream(&v55);
      if ( (unsigned int)(2 * *(_DWORD *)(v4 + 96)) < *(_DWORD *)(v4 + 64) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_mgr.cpp",
          "sendSaveProto",
          252);
        v39 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v55,
                (const char (*)[20])"save time cost(ms):");
        v40 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v39,
                (const unsigned int *)(v4 + 64));
        v41 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v40,
                (const char (*)[45])" more than 2 * allow value, allow_value(ms):");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, (const unsigned int *)(v4 + 96));
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
      if ( *(_DWORD *)(v4 + 64) > *(_DWORD *)(v4 + 112) )
      {
        common::milog::MiLogStream::create(
          &v55,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/player_mgr.cpp",
          "sendSaveProto",
          258);
        v42 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v55,
                (const char (*)[20])"save time cost(ms):");
        v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v42,
                (const unsigned int *)(v4 + 64));
        v44 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v43,
                (const char (*)[33])" more than hard_limit_value(ms):");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v4 + 112));
        common::milog::MiLogStream::~MiLogStream(&v55);
      }
    }
    LOBYTE(v3) = *(_QWORD *)(v4 + 128) != *(_QWORD *)(v4 + 160);
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v4 + 224));
    std::priority_queue<SavePlayerQueue::SaveInfo>::~priority_queue((std::priority_queue<SavePlayerQueue::SaveInfo> *const)(v4 + 288));
  }
  result = v3;
  if ( v56 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
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

// Line 265: range 00000000179A965C-00000000179A9927
void __cdecl PlayerMgr::PlayerMgr(PlayerMgr *const this, PlayerMgr *a2)
{
  uint32_t *p_last_check_save_wait_time; // rdx
  common::milog::MiLogStream v3; // [rsp+10h] [rbp-30h] BYREF

  std::unordered_map<unsigned int,std::shared_ptr<Player>>::unordered_map(&this->online_player_map_);
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::unordered_map(&this->save_wait_player_map_);
  p_last_check_save_wait_time = &this->last_check_save_wait_time_;
  if ( *(_BYTE *)(((unsigned __int64)p_last_check_save_wait_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_last_check_save_wait_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_check_save_wait_time_, a2, p_last_check_save_wait_time);
  }
  this->last_check_save_wait_time_ = 0;
  SavePlayerQueue::SavePlayerQueue(&this->save_player_queue_, this);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->daily_refresh_timer_ptr_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_day_, this, &this->last_refresh_day_);
  }
  this->last_refresh_day_ = 0;
  std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::map(&this->version_online_uid_map_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->safe_server_heartbeat_timer_ptr_);
  std::shared_ptr<UnixTimer>::shared_ptr(&this->lua_state_memory_report_ptr_);
  std::set<unsigned int>::set(&this->feature_switch_all_closed_item_set_);
  std::set<unsigned int>::set(&this->feature_switch_nickname_audit_param_set_);
  std::set<unsigned int>::set(&this->feature_switch_signature_audit_param_set_);
  std::set<unsigned int>::set(&this->feature_switch_ban_card_set_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_kick_player_time_by_packet_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_kick_player_time_by_packet_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(
      &this->last_kick_player_time_by_packet_cost_time_,
      this,
      &this->last_kick_player_time_by_packet_cost_time_);
  }
  this->last_kick_player_time_by_packet_cost_time_ = 0;
  common::milog::MiLogStream::create(
    &v3,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/player_mgr.cpp",
    "PlayerMgr",
    268);
  common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(&v3, (const char (*)[56])off_26266240);
  common::milog::MiLogStream::~MiLogStream(&v3);
};

// Line 273: range 00000000179A9928-00000000179A9BC7
std::shared_ptr<Player> *__fastcall PlayerMgr::createPlayer(std::shared_ptr<Player> *uid, int a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  Player *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:272 64 16 14 player_ptr:274";
  *(_QWORD *)(v2 + 16) = PlayerMgr::createPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = a2;
  common::tools::perf::make_shared<Player,unsigned int &>((unsigned int *)(v2 + 64), (unsigned int *)(v2 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "createPlayer",
      277);
    v5 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           &v9,
           (const char (*)[26])"createPlayer failed, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Player>::shared_ptr(uid, 0LL);
  }
  else
  {
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    if ( Player::constructPlayer(v6) )
    {
      common::milog::MiLogStream::create(
        &v9,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "createPlayer",
        283);
      v7 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v9,
             (const char (*)[29])"constructPlayer failed, uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v9);
      std::shared_ptr<Player>::shared_ptr(uid, 0LL);
    }
    else
    {
      std::shared_ptr<Player>::shared_ptr(uid, (std::shared_ptr<Player> *)(v2 + 64));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
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
  return uid;
};

// Line 292: range 00000000179A9BC8-00000000179A9D48
PlayerMgr *__fastcall PlayerMgr::findOnlinePlayer(
        PlayerMgr *const this,
        std::unordered_map<unsigned int,std::shared_ptr<Player>> *uid,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:291 64 8 6 it:293";
  *(_QWORD *)(v3 + 16) = PlayerMgr::findOnlinePlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Player>>::find(
                                                                                       uid,
                                                                                       (const std::unordered_map<unsigned int,std::shared_ptr<Player>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(uid)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false> *const)(v3 + 64));
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 304: range 00000000179A9D4A-00000000179AA24A
PlayerMgr *__fastcall PlayerMgr::findPlayerAndCheckSession(
        PlayerMgr *const this,
        PlayerMgr *uid,
        const common::minet::PacketPtr *packet_ptr,
        const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::minet::Packet *v10; // rax
  uint32_t ServiceAppId; // r14d
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t v14; // r14d
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  const std::string *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  uint32_t UserSessionId; // r15d
  std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  uint32_t GateserverId; // eax
  int v30; // [rsp+1Ch] [rbp-114h]
  common::milog::MiLogStream v31; // [rsp+40h] [rbp-F0h] BYREF
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-D0h] BYREF
  char v33[176]; // [rsp+80h] [rbp-B0h] BYREF

  v30 = (int)packet_ptr;
  v4 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 7 uid:303 64 16 14 player_ptr:307 96 16 15 session_ptr:318";
  *(_QWORD *)(v4 + 16) = PlayerMgr::findPlayerAndCheckSession;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  *(_DWORD *)(v4 + 48) = v30;
  common::tools::TimeUtils::getNow();
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v4 + 64), &uid->online_player_map_, *(_DWORD *)(v4 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v4 + 64), 0LL) )
  {
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
  }
  else
  {
    v7 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(a4);
    if ( common::minet::Packet::getSourceService(v7) == 2 )
    {
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      Player::getSession((const Player *const)(v4 + 96));
      if ( std::operator==<PlayerSessionProxy>((const std::shared_ptr<PlayerSessionProxy> *)(v4 + 96), 0LL) )
      {
        PlayerMgr::notifyGateNotFoundPlayer(uid, (const common::minet::PacketPtr *)a4);
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_mgr.cpp",
          "findPlayerAndCheckSession",
          322);
        v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v32, (const char (*)[6])"uid: ");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" getSession nullptr");
        common::milog::MiLogStream::~MiLogStream(&v32);
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
      }
      else if ( std::operator!=<common::minet::Packet>((const std::shared_ptr<common::minet::Packet> *)a4, 0LL)
             && ((v10 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(a4),
                  ServiceAppId = common::minet::Packet::getServiceAppId(v10, 2u),
                  v12 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96)),
                  ServiceAppId != PlayerSessionProxy::getGateserverId(v12))
              || (v13 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(a4),
                  v14 = common::minet::Packet::getUserSessionId(v13),
                  v15 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96)),
                  v14 != PlayerSessionProxy::getGateserverSessionId(v15))) )
      {
        PlayerMgr::notifyGateNotFoundPlayer(uid, (const common::minet::PacketPtr *)a4);
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_mgr.cpp",
          "findPlayerAndCheckSession",
          331);
        v17 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(&v31, (const char (*)[6])"uid: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v17,
                (const unsigned int *)(v4 + 48));
        v19 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v18, (const char (*)[15])" cur session: ");
        v20 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        v21 = PlayerSessionProxy::getFlagStr[abi:cxx11](v20);
        v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, v21);
        v23 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v22,
                (const char (*)[18])" packet session: ");
        v24 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->(a4);
        UserSessionId = common::minet::Packet::getUserSessionId(v24);
        v26 = std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSessionProxy,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        GateserverId = PlayerSessionProxy::getGateserverId(v26);
        PlayerSessionProxy::getFlagStr[abi:cxx11]((std::string *)&v32, GateserverId, UserSessionId);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, (const std::string *)&v32);
        std::string::~string(&v32);
        common::milog::MiLogStream::~MiLogStream(&v31);
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, 0LL);
      }
      else
      {
        std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, (std::shared_ptr<Player> *)(v4 + 64));
      }
      std::shared_ptr<PlayerSessionProxy>::~shared_ptr((std::shared_ptr<PlayerSessionProxy> *const)(v4 + 96));
    }
    else
    {
      std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)this, (std::shared_ptr<Player> *)(v4 + 64));
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  if ( v33 == (char *)v4 )
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
  return this;
};

// Line 340: range 00000000179AA24C-00000000179AA6C5
void __cdecl PlayerMgr::notifyGateNotFoundPlayer(PlayerMgr *const this, const common::minet::PacketPtr *packet_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::minet::Packet *v5; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  common::minet::Packet *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  NetworkMgrBase *v15; // r14
  common::minet::Packet *v16; // rax
  uint32_t v17; // r15d
  uint32_t v18; // r8d
  unsigned int val; // [rsp+24h] [rbp-ECh] BYREF
  unsigned int ServiceAppId; // [rsp+28h] [rbp-E8h] BYREF
  unsigned int UserSessionId; // [rsp+2Ch] [rbp-E4h] BYREF
  std::shared_ptr<common::minet::Packet> v22; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 21 notify_packet_ptr:343 64 24 10 notify:341";
  *(_QWORD *)(v2 + 16) = PlayerMgr::notifyGateNotFoundPlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  proto::DisconnectClientNotify::DisconnectClientNotify((proto::DisconnectClientNotify *const)(v2 + 64));
  proto::DisconnectClientNotify::set_data((proto::DisconnectClientNotify *const)(v2 + 64), 8u);
  common::minet::PacketUtils::createPacket<proto::DisconnectClientNotify>((const proto::DisconnectClientNotify *)(v2 + 32));
  if ( std::operator==<common::minet::Packet>(0LL, (const std::shared_ptr<common::minet::Packet> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_mgr.cpp",
      "notifyGateNotFoundPlayer",
      346);
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v23, (const char (*)[21])"create packet failed");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  else
  {
    v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    v6 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
    if ( common::minet::Packet::copyHead(v5, v6) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_mgr.cpp",
        "notifyGateNotFoundPlayer",
        351);
      common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v23, (const char (*)[16])"copyHead failed");
      common::milog::MiLogStream::~MiLogStream(&v23);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_mgr.cpp",
        "notifyGateNotFoundPlayer",
        355);
      v7 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             &v23,
             (const char (*)[39])"[LOGIN] notifyGateNotFoundPlayer uid: ");
      v8 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      val = common::minet::Packet::getUserId(v8);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      v10 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v9, (const char (*)[15])" gatesession: ");
      v11 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      ServiceAppId = common::minet::Packet::getServiceAppId(v11, 2u);
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &ServiceAppId);
      v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])":");
      v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      UserSessionId = common::minet::Packet::getUserSessionId(v14);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &UserSessionId);
      common::milog::MiLogStream::~MiLogStream(&v23);
      v15 = std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<NetworkMgrBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::network_mgr_ptr);
      v16 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)packet_ptr);
      v17 = common::minet::Packet::getServiceAppId(v16, 2u);
      std::shared_ptr<common::minet::Packet>::shared_ptr(
        &v22,
        (const std::shared_ptr<common::minet::Packet> *)(v2 + 32));
      NetworkMgrBase::sendPacketToTargetService(v15, (common::minet::PacketPtr)__PAIR128__(2LL, &v22), v17, v18);
      std::shared_ptr<common::minet::Packet>::~shared_ptr(&v22);
    }
  }
  std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 32));
  proto::DisconnectClientNotify::~DisconnectClientNotify((proto::DisconnectClientNotify *const)(v2 + 64));
  if ( v24 == (char *)v2 )
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

// Line 364: range 00000000179AA6C6-00000000179AADFA
int32_t __cdecl PlayerMgr::addOnlinePlayer(PlayerMgr *const this, PlayerPtr *p_player_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  char v6; // al
  int32_t result; // eax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::shared_ptr<Player> *v9; // rdx
  GameserverService *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rdx
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  GameserverService *v17; // rax
  GameThreadLocal *GameThreadLocal; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rdx
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rbx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  GameserverService *v25; // rbx
  uint32_t v26; // eax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> __x; // [rsp+10h] [rbp-D0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v29; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+30h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 7 uid:373 48 4 9 count:389 64 4 20 count_cur_thread:395";
  *(_QWORD *)(v2 + 16) = PlayerMgr::addOnlinePlayer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116348;
  if ( std::operator==<Player>(0LL, p_player_ptr) )
    goto LABEL_8;
  v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  if ( *(_BYTE *)(((unsigned __int64)&v5->uid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v5->uid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&v5->uid_);
  }
  if ( v5->uid_ )
    v6 = 0;
  else
LABEL_8:
    v6 = 1;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/player_mgr.cpp",
      "addOnlinePlayer",
      368);
    common::milog::MiLogStream::operator()(&v30, off_26266740);
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    *(_DWORD *)(v2 + 32) = Player::getUid(v8);
    __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::find(
                   &this->online_player_map_,
                   (const std::unordered_map<unsigned int,std::shared_ptr<Player>>::key_type *)(v2 + 32))._M_cur;
    __x._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(&__x, &__y) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_mgr.cpp",
        "addOnlinePlayer",
        376);
      common::milog::MiLogStream::operator()(&v30, "player uid=%u is already in online map", *(unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v30);
      result = -1;
    }
    else
    {
      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::find(&this->save_wait_player_map_, (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::key_type *)(v2 + 32))._M_cur;
      __x._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::end(&this->save_wait_player_map_)._M_cur;
      if ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData>>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData> >,false> *)&__x,
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData> >,false> *)&__y) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_mgr.cpp",
          "addOnlinePlayer",
          383);
        common::milog::MiLogStream::operator()(
          &v30,
          "player uid=%u is already in save_wait map",
          *(unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v30);
        result = -1;
      }
      else
      {
        v9 = std::unordered_map<unsigned int,std::shared_ptr<Player>>::operator[](
               &this->online_player_map_,
               (const std::unordered_map<unsigned int,std::shared_ptr<Player>>::key_type *)(v2 + 32));
        std::shared_ptr<Player>::operator=(v9, p_player_ptr);
        v10 = ServiceBox::findService<GameserverService>();
        *(_DWORD *)(v2 + 48) = GameserverService::getOnlinePlayerNum(v10);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        if ( *(_BYTE *)(((unsigned __int64)&v11->warn_online_player >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v11 - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v11->warn_online_player >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v11->warn_online_player);
        }
        v12 = v11->warn_online_player <= *(_DWORD *)(v2 + 48);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( v12 )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/player_mgr.cpp",
            "addOnlinePlayer",
            392);
          v13 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v30,
                  (const char (*)[22])"online player count: ");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v13,
                  (const unsigned int *)(v2 + 48));
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])" warn count:");
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v29);
          v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &v16->warn_online_player);
          std::shared_ptr<Config>::~shared_ptr(&v29);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        v17 = ServiceBox::findService<GameserverService>();
        GameThreadLocal = GameserverService::getGameThreadLocal(v17);
        *(_DWORD *)(v2 + 64) = PlayerMgr::getOnlinePlayerNum(&GameThreadLocal->player_mgr);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v29);
        v19 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
        if ( *(_BYTE *)(((unsigned __int64)&v19->warn_online_player_per_thread >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v19 - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v19->warn_online_player_per_thread >> 3)
                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&v19->warn_online_player_per_thread);
        }
        v20 = v19->warn_online_player_per_thread <= *(_DWORD *)(v2 + 64);
        std::shared_ptr<Config>::~shared_ptr(&v29);
        if ( v20 )
        {
          common::milog::MiLogStream::create(
            &v30,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/player_mgr.cpp",
            "addOnlinePlayer",
            398);
          v21 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v30,
                  (const char (*)[33])"online player per thread count: ");
          v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v21,
                  (const unsigned int *)(v2 + 64));
          v23 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v22, (const char (*)[13])" warn count:");
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v29);
          v24 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v23,
            &v24->warn_online_player_per_thread);
          std::shared_ptr<Config>::~shared_ptr(&v29);
          common::milog::MiLogStream::~MiLogStream(&v30);
        }
        v25 = ServiceBox::findService<GameserverService>();
        v26 = std::unordered_map<unsigned int,std::shared_ptr<Player>>::size(&this->online_player_map_);
        GameserverService::updateOnlinePlayerNum(v25, v26);
        result = 0;
      }
    }
  }
  if ( v31 == (char *)v2 )
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

// Line 409: range 00000000179AADFC-00000000179AAE8E
int32_t __cdecl PlayerMgr::getOnlinePlayerUidVec(PlayerMgr *const this, std::vector<unsigned int> *uid_vec)
{
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>> *__for_range; // [rsp+20h] [rbp-10h]
  std::pair<unsigned int const,std::shared_ptr<Player> > *p; // [rsp+28h] [rbp-8h]

  std::vector<unsigned int>::clear(uid_vec);
  __for_range = &this->online_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
            &__for_begin,
            &__for_end) )
  {
    p = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator*(&__for_begin);
    std::vector<unsigned int>::push_back(uid_vec, &p->first);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 418: range 00000000179AAE90-00000000179ABE1C
// local variable allocation has failed, the output may be wrong!
__int64 __fastcall PlayerMgr::mvOnlinePlayerToSaveWait(PlayerMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  unsigned int M_invoker_high; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rsi
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  char v12; // dl
  __int64 v13; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  __int64 v17; // rax
  std::string::size_type M_string_length; // rsi
  Player *v19; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rdx
  char v21; // cl
  Player *v22; // rax
  __int64 v23; // rax
  char v24; // dl
  __int64 v25; // rdx
  __int64 M_string_length_low; // rsi
  Player *v27; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rdx
  char v29; // cl
  Player *v30; // rax
  __int64 v31; // rax
  char v32; // dl
  __int64 v33; // rdx
  Player *v34; // rax
  __int64 v35; // rax
  char v36; // dl
  __int64 v37; // rsi
  __int64 v38; // rdx
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v39; // rax
  common::milog::MiLogStream *v40; // rax
  proto::PlayerData *p_bin_data; // rsi
  common::milog::MiLogStream *v42; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v43; // rax
  __int64 v44; // rax
  char v45; // dl
  __int64 v46; // rdx
  __int64 v47; // rsi
  Player *v48; // rax
  PlayerBasicComp *BasicComp; // rax
  __int64 v50; // rax
  Player *v51; // rax
  PlayerBasicComp *v52; // rax
  proto_log::PlayerLogHead *v53; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  proto_log::PlayerLogHeadExt *v55; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v56; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v57; // rax
  std::shared_ptr<PlayerSaveWaitData> *v58; // r8
  common::minet::Packet *v59; // rax
  PlayerMgr **v60; // r9
  GameserverService *v61; // r14
  uint32_t v62; // eax
  common::milog::MiLogStream *v63; // r14
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v64; // rax
  common::milog::MiLogStream *v65; // rax
  common::milog::MiLogStream *v66; // rax
  __int64 result; // rax
  std::string v68; // [rsp+0h] [rbp-260h] BYREF
  AsyncTaskCallbackFunc v69; // [rsp+20h] [rbp-240h] OVERLAPPED
  PlayerMgr *v70; // [rsp+40h] [rbp-220h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> __y; // [rsp+48h] [rbp-218h] BYREF
  int (*v72[2])(PlayerMgr *, std::shared_ptr<common::minet::Packet>, std::any); // [rsp+50h] [rbp-210h] BYREF
  int (*__f[2])(PlayerMgr *, std::shared_ptr<common::minet::Packet>, std::any, int); // [rsp+60h] [rbp-200h] BYREF
  std::shared_ptr<common::minet::Packet> v74; // [rsp+70h] [rbp-1F0h] BYREF
  std::shared_ptr<proto_log::PlayerLogHeadExt> __r; // [rsp+80h] [rbp-1E0h] BYREF
  std::_Bind_helper<false,int (PlayerMgr::*)(std::shared_ptr<common::minet::Packet>,std::any),PlayerMgr*,const std::_Placeholder<1>&,const std::_Placeholder<2>&>::type v76; // [rsp+90h] [rbp-1D0h] BYREF
  std::_Bind_helper<false,int (PlayerMgr::*)(std::shared_ptr<common::minet::Packet>,std::any,int),PlayerMgr*,const std::_Placeholder<1>&,const std::_Placeholder<2>&,const std::_Placeholder<3>&>::type p___f; // [rsp+B0h] [rbp-1B0h] BYREF
  std::function<int(std::shared_ptr<common::minet::Packet>,std::any)> v78; // [rsp+D0h] [rbp-190h] BYREF
  std::string packet_ptr; // [rsp+F0h] [rbp-170h] BYREF
  char v80[336]; // [rsp+110h] [rbp-150h] BYREF

  *(_QWORD *)&v69._M_functor._M_pod_data[8] = this;
  *(_DWORD *)&v69._M_functor._M_pod_data[4] = uid;
  v2 = (unsigned __int64)v80;
  v68._M_dataplus._M_p = v80;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "9 32 1 10 holder:466 48 4 7 uid:417 64 8 6 it:419 96 16 14 player_ptr:426 128 16 12 save_ptr:432"
                        " 160 16 12 head_ptr:467 192 16 16 head_ext_ptr:469 224 16 15 context_ptr:478 256 16 14 packet_ptr:483";
  *(_QWORD *)(v2 + 16) = PlayerMgr::mvOnlinePlayerToSaveWait;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -202178560;
  *(_DWORD *)(v2 + 48) = *(_DWORD *)&v69._M_functor._M_pod_data[4];
  *(std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Player>>::find(
                                                                                       *(std::unordered_map<unsigned int,std::shared_ptr<Player>> *const *)&v69._M_functor._M_pod_data[8],
                                                                                       (const std::unordered_map<unsigned int,std::shared_ptr<Player>>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(*(std::unordered_map<unsigned int,std::shared_ptr<Player>> *const *)&v69._M_functor._M_pod_data[8])._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&packet_ptr,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "mvOnlinePlayerToSaveWait",
      422);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)&packet_ptr,
           (const char (*)[16])off_26266A40);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
    M_invoker_high = -1;
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false> *const)(v2 + 64));
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v2 + 96), &v7->second);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 96), 0LL) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&packet_ptr,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_mgr.cpp",
        "mvOnlinePlayerToSaveWait",
        429);
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             (common::milog::MiLogStream *const)&packet_ptr,
             (const char (*)[24])"player_ptr is null,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
      M_invoker_high = -1;
    }
    else
    {
      common::tools::perf::make_shared<PlayerSaveWaitData>();
      v9 = 0LL;
      if ( std::operator==<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 128), 0LL) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&packet_ptr,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_mgr.cpp",
          "mvOnlinePlayerToSaveWait",
          435);
        v10 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                (common::milog::MiLogStream *const)&packet_ptr,
                (const char (*)[29])"player_data_ptr is null,uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
        M_invoker_high = -1;
      }
      else
      {
        LODWORD(v68._M_string_length) = *(_DWORD *)(v2 + 48);
        v11 = (unsigned __int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v12 = *(_BYTE *)((v11 >> 3) + 0x7FFF8000);
        LOBYTE(v9) = v12 != 0;
        v13 = (v12 != 0) & (unsigned __int8)(v12 <= 3);
        if ( (_BYTE)v13 )
          v11 = __asan_report_store4(v11, v9, v13);
        *(_DWORD *)v11 = v68._M_string_length;
        v14 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false>::__node_type *)Player::getLastGateSession(v14);
        v15 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        std::pair<unsigned int,unsigned int>::operator=(
          &v15->gate_session,
          (std::conditional<true,std::pair<unsigned int,unsigned int>&&,std::__nonesuch_no_braces&&>::type)&__y);
        v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v68._M_string_length = Player::getLoginRand(v16);
        v17 = (__int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)(v17 + 168) >> 3) + 0x7FFF8000) )
          v17 = __asan_report_store8(v17 + 168, &__y);
        M_string_length = v68._M_string_length;
        *(_QWORD *)(v17 + 168) = v68._M_string_length;
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LODWORD(v68._M_string_length) = Player::getDataVersion(v19);
        v20 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v21 = *(_BYTE *)(((unsigned __int64)&v20->data_version >> 3) + 0x7FFF8000);
        if ( v21 != 0 && (char)((((_BYTE)v20 - 100) & 7) + 3) >= v21 )
        {
          LOBYTE(M_string_length) = v21 != 0;
          __asan_report_store4(&v20->data_version, M_string_length, v20);
        }
        v20->data_version = v68._M_string_length;
        v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LODWORD(v68._M_string_length) = Player::getTransferTargetUid(v22);
        v23 = (__int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v24 = *(_BYTE *)(((unsigned __int64)(v23 + 144) >> 3) + 0x7FFF8000);
        LOBYTE(M_string_length) = v24 != 0;
        v25 = (v24 != 0) & (unsigned __int8)(v24 <= 3);
        if ( (_BYTE)v25 )
          v23 = __asan_report_store4(v23 + 144, M_string_length, v25);
        M_string_length_low = LODWORD(v68._M_string_length);
        *(_DWORD *)(v23 + 144) = v68._M_string_length;
        v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LODWORD(v68._M_string_length) = Player::getTransferTargetHomeOwnerUid(v27);
        v28 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v29 = *(_BYTE *)(((unsigned __int64)&v28->transfer_target_home_owner_uid >> 3) + 0x7FFF8000);
        if ( v29 != 0 && (char)((((_BYTE)v28 - 108) & 7) + 3) >= v29 )
        {
          LOBYTE(M_string_length_low) = v29 != 0;
          __asan_report_store4(&v28->transfer_target_home_owner_uid, M_string_length_low, v28);
        }
        v28->transfer_target_home_owner_uid = v68._M_string_length;
        v30 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LODWORD(v68._M_string_length) = Player::getTransferTargetHomeGameServerId(v30);
        v31 = (__int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v32 = *(_BYTE *)(((unsigned __int64)(v31 + 152) >> 3) + 0x7FFF8000);
        LOBYTE(M_string_length_low) = v32 != 0;
        v33 = (v32 != 0) & (unsigned __int8)(v32 <= 3);
        if ( (_BYTE)v33 )
          v31 = __asan_report_store4(v31 + 152, M_string_length_low, v33);
        v37 = LODWORD(v68._M_string_length);
        *(_DWORD *)(v31 + 152) = v68._M_string_length;
        v34 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        LODWORD(v68._M_string_length) = Player::getLastSaveTime(v34);
        v35 = (__int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        v36 = *(_BYTE *)(((unsigned __int64)(v35 + 160) >> 3) + 0x7FFF8000);
        LOBYTE(v37) = v36 != 0;
        v38 = (v36 != 0) & (unsigned __int8)(v36 <= 3);
        if ( (_BYTE)v38 )
          v35 = __asan_report_store4(v35 + 160, v37, v38);
        *(_DWORD *)(v35 + 160) = v68._M_string_length;
        v68._M_string_length = (std::string::size_type)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v39 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( Player::toBlockBin((Player *const)v68._M_string_length, &v39->block_info_map) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&packet_ptr,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/player_mgr.cpp",
            "mvOnlinePlayerToSaveWait",
            451);
          v40 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)&packet_ptr,
                  (const char (*)[26])"moveBlockData failed,uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
          M_invoker_high = -1;
        }
        else
        {
          v68._M_string_length = (std::string::size_type)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
          p_bin_data = &std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128))->bin_data;
          if ( Player::toBin((Player *const)v68._M_string_length, p_bin_data) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&packet_ptr,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/player_mgr.cpp",
              "mvOnlinePlayerToSaveWait",
              457);
            v42 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    (common::milog::MiLogStream *const)&packet_ptr,
                    (const char (*)[25])"player tobin failed,uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
            M_invoker_high = -1;
          }
          else
          {
            v43 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            LODWORD(v68._M_string_length) = Player::getLastSavePlayerBinSize(v43);
            v44 = (__int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v45 = *(_BYTE *)(((unsigned __int64)(v44 + 232) >> 3) + 0x7FFF8000);
            LOBYTE(p_bin_data) = v45 != 0;
            v46 = (v45 != 0) & (unsigned __int8)(v45 <= 3);
            if ( (_BYTE)v46 )
              v44 = __asan_report_store4(v44 + 232, p_bin_data, v46);
            v47 = LODWORD(v68._M_string_length);
            *(_DWORD *)(v44 + 232) = v68._M_string_length;
            v48 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            BasicComp = Player::getBasicComp(v48);
            v68._M_string_length = PlayerBasicComp::getPlayerStatId(BasicComp);
            v50 = (__int64)std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            if ( *(_BYTE *)(((unsigned __int64)(v50 + 240) >> 3) + 0x7FFF8000) )
              v50 = __asan_report_store8(v50 + 240, v47);
            *(_QWORD *)(v50 + 240) = v68._M_string_length;
            v51 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v52 = Player::getBasicComp(v51);
            PlayerBasicComp::getNextTransNo[abi:cxx11](&packet_ptr, v52);
            StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0x461u, v68);
            std::string::~string(&packet_ptr);
            common::tools::perf::make_shared<proto_log::PlayerLogHead>();
            v68._M_string_length = (std::string::size_type)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v53 = std::__shared_ptr_access<proto_log::PlayerLogHead,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto_log::PlayerLogHead,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            Player::initLogHead((Player *const)v68._M_string_length, v53);
            common::tools::perf::make_shared<proto_log::PlayerLogHeadExt>();
            common::tools::perf::make_shared<proto_log::PlayerLogHeadExt>();
            v54 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            std::shared_ptr<google::protobuf::Message>::operator=<proto_log::PlayerLogHeadExt>(&v54->head_ext_ptr, &__r);
            std::shared_ptr<proto_log::PlayerLogHeadExt>::~shared_ptr(&__r);
            v68._M_string_length = (std::string::size_type)std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v55 = std::__shared_ptr_access<proto_log::PlayerLogHeadExt,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<proto_log::PlayerLogHeadExt,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
            Player::initLogHeadExt((Player *const)v68._M_string_length, v55);
            v56 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            std::shared_ptr<google::protobuf::Message>::operator=<proto_log::PlayerLogHead>(
              &v56->head_ptr,
              (const std::shared_ptr<proto_log::PlayerLogHead> *)(v2 + 160));
            v57 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            std::shared_ptr<google::protobuf::Message>::operator=<proto_log::PlayerLogHeadExt>(
              &v57->head_ext_ptr,
              (const std::shared_ptr<proto_log::PlayerLogHeadExt> *)(v2 + 192));
            std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::emplace<unsigned int &,std::shared_ptr<PlayerSaveWaitData>&>(
              (std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>> *const)(*(_QWORD *)&v69._M_functor._M_pod_data[8]
                                                                                          + 56LL),
              (unsigned int *)(v2 + 48),
              (std::shared_ptr<PlayerSaveWaitData> *)(v2 + 128),
              (unsigned int *)(*(_QWORD *)&v69._M_functor._M_pod_data[8] + 56LL),
              v58);
            std::unordered_map<unsigned int,std::shared_ptr<Player>>::erase(
              *(std::unordered_map<unsigned int,std::shared_ptr<Player>> *const *)&v69._M_functor._M_pod_data[8],
              (const std::unordered_map<unsigned int,std::shared_ptr<Player>>::key_type *)(v2 + 48));
            std::shared_ptr<Player>::shared_ptr(
              (std::shared_ptr<Player> *const)&__r,
              (const std::shared_ptr<Player> *)(v2 + 96));
            common::tools::perf::make_shared<DestoryPlayerContext,DestoryPlayerContext>(
              (DestoryPlayerContext *)(v2 + 224),
              (DestoryPlayerContext *)&__r);
            DestoryPlayerContext::~DestoryPlayerContext((DestoryPlayerContext *const)&__r);
            std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::reset((std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 96));
            common::minet::PacketUtils::createPacket();
            v59 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 256));
            common::minet::Packet::setUserId(v59, *(_DWORD *)(v2 + 48));
            v68._M_string_length = (std::string::size_type)ServiceBox::findService<GameserverService>();
            std::any::any<std::shared_ptr<DestoryPlayerContext> &,std::shared_ptr<DestoryPlayerContext>,std::any::_Manager_external<std::shared_ptr<DestoryPlayerContext>>,true,true>(
              (std::any *const)&__r,
              (std::shared_ptr<DestoryPlayerContext> *)(v2 + 224));
            std::shared_ptr<common::minet::Packet>::shared_ptr(
              &v74,
              (const std::shared_ptr<common::minet::Packet> *)(v2 + 256));
            __y._M_cur = *(std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false>::__node_type **)&v69._M_functor._M_pod_data[8];
            v68._anon_0._M_allocated_capacity = (std::string::size_type)PlayerMgr::asyncDestoryPlayerCallback;
            *(&v68._anon_0._M_allocated_capacity + 1) = 0LL;
            *(__m128i *)__f = _mm_load_si128((const __m128i *)&v68._anon_0);
            std::bind<int (PlayerMgr::*)(std::shared_ptr<common::minet::Packet>,std::any,int),PlayerMgr*,std::_Placeholder<1> const&,std::_Placeholder const&<2>,std::_Placeholder const&<3>>(
              &p___f,
              __f,
              (PlayerMgr **)&__y,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              (const std::_Placeholder<2> *)&std::placeholders::_2,
              (const std::_Placeholder<3> *)&std::placeholders::_3,
              (PlayerMgr **)v68._M_dataplus._M_p,
              (const std::_Placeholder<1> *)v68._M_string_length,
              (const std::_Placeholder<2> *)PlayerMgr::asyncDestoryPlayerCallback,
              0LL);
            std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::function<std::_Bind<int (PlayerMgr::*)(std::shared_ptr<common::minet::Packet>,std::any,int) ()(PlayerMgr*,std::_Placeholder<1>,std::_Placeholder<2>,std::_Placeholder<3>)>,void,void>(
              (std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr,
              &p___f);
            v70 = *(PlayerMgr **)&v69._M_functor._M_pod_data[8];
            v72[0] = (int (*)(PlayerMgr *, std::shared_ptr<common::minet::Packet>, std::any))PlayerMgr::asyncDestoryPlayer;
            v72[1] = 0LL;
            std::bind<int (PlayerMgr::*)(std::shared_ptr<common::minet::Packet>,std::any),PlayerMgr*,std::_Placeholder<1> const&,std::_Placeholder const&<2>>(
              &v76,
              v72,
              &v70,
              (const std::_Placeholder<1> *)&std::placeholders::_1,
              (const std::_Placeholder<2> *)&std::placeholders::_2,
              v60,
              (const std::_Placeholder<1> *)v68._M_dataplus._M_p,
              (const std::_Placeholder<2> *)v68._M_string_length);
            std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::function<std::_Bind<int (PlayerMgr::*)(std::shared_ptr<common::minet::Packet>,std::any) ()(PlayerMgr*,std::_Placeholder<1>,std::_Placeholder<2>)>,void,void>(
              &v78,
              &v76);
            HIDWORD(v69._M_invoker) = ServiceBase::pushAsyncTask(
                                        (ServiceBase *const)v68._M_string_length,
                                        (AsyncTaskFunc)v68,
                                        v69,
                                        (common::minet::PacketPtr)__PAIR128__(&packet_ptr, &v78),
                                        (std::any)__PAIR128__(&__r, &v74));
            std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any)>::~function(&v78);
            std::function<int ()(std::shared_ptr<common::minet::Packet>,std::any,int)>::~function((std::function<int(std::shared_ptr<common::minet::Packet>,std::any,int)> *const)&packet_ptr);
            std::shared_ptr<common::minet::Packet>::~shared_ptr(&v74);
            std::any::~any((std::any *const)&__r);
            v61 = ServiceBox::findService<GameserverService>();
            v62 = std::unordered_map<unsigned int,std::shared_ptr<Player>>::size(*(const std::unordered_map<unsigned int,std::shared_ptr<Player>> *const *)&v69._M_functor._M_pod_data[8]);
            GameserverService::updateOnlinePlayerNum(v61, v62);
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&packet_ptr,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/player_mgr.cpp",
              "mvOnlinePlayerToSaveWait",
              493);
            v63 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                    (common::milog::MiLogStream *const)&packet_ptr,
                    (const char (*)[63])"[DATA_VERSION][LOGOUT] player move to save wait, data_version:");
            v64 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            v65 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, &v64->data_version);
            v66 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v65, (const char (*)[7])", uid:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v66, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&packet_ptr);
            M_invoker_high = HIDWORD(v69._M_invoker);
            std::shared_ptr<common::minet::Packet>::~shared_ptr((std::shared_ptr<common::minet::Packet> *const)(v2 + 256));
            std::shared_ptr<DestoryPlayerContext>::~shared_ptr((std::shared_ptr<DestoryPlayerContext> *const)(v2 + 224));
            std::shared_ptr<proto_log::PlayerLogHeadExt>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogHeadExt> *const)(v2 + 192));
            std::shared_ptr<proto_log::PlayerLogHead>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogHead> *const)(v2 + 160));
            StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
          }
        }
      }
      std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v2 + 128));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 96));
  }
  result = M_invoker_high;
  if ( v68._M_dataplus._M_p == (std::string::pointer)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
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
  return result;
};

// Line 500: range 00000000179ABE1E-00000000179AC5A8
__int64 __fastcall PlayerMgr::checkSaveCoolDown(PlayerMgr *const this, uint32_t uid)
{
  unsigned int v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  int v9; // r15d
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  bool v13; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  time_t v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 v22; // r15
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __int64 result; // rax
  double timer_save_time_interval; // [rsp+8h] [rbp-138h]
  double v27; // [rsp+8h] [rbp-138h]
  uint32_t last_save_time; // [rsp+24h] [rbp-11Ch]
  __int64 val; // [rsp+28h] [rbp-118h] BYREF
  std::shared_ptr<Config> v30; // [rsp+30h] [rbp-110h] BYREF
  std::shared_ptr<Config> v31; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v32; // [rsp+50h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 try_count:502 64 4 13 next_time:525 80 4 7 uid:499 96 16 14 player_ptr:503 128 16 12 save_ptr:511";
  *(_QWORD *)(v3 + 16) = PlayerMgr::checkSaveCoolDown;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 80) = uid;
  last_save_time = 0;
  *(_DWORD *)(v3 + 48) = 0;
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 96), &this->online_player_map_, *(_DWORD *)(v3 + 80));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "checkSaveCoolDown",
      506);
    v6 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           &v32,
           (const char (*)[27])"player is not nullptr,uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 80));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v2 = 0;
  }
  else
  {
    PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)(v3 + 128), (uint32_t)this);
    if ( std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)(v3 + 128), 0LL) )
    {
      v7 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v7->last_save_time);
      }
      last_save_time = v7->last_save_time;
      v8 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&v8->try_save_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v8->try_save_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v8->try_save_count);
      }
      *(_DWORD *)(v3 + 48) = v8->try_save_count;
      v9 = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "checkSaveCoolDown",
        519);
      v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v32,
              (const char (*)[24])"find player failed,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 80));
      common::milog::MiLogStream::~MiLogStream(&v32);
      v2 = 1;
      v9 = 0;
    }
    std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v3 + 128));
    if ( v9 == 1 )
    {
      if ( *(_DWORD *)(v3 + 48) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v30);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
        if ( *(_BYTE *)(((unsigned __int64)&v11->timer_save_time_interval >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v11->timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v11->timer_save_time_interval);
        }
        timer_save_time_interval = (double)(int)v11->timer_save_time_interval;
        *(_DWORD *)(v3 + 64) = (int)(std::pow<double,unsigned int>(1.5, *(_DWORD *)(v3 + 48) - 1)
                                   * timer_save_time_interval);
        std::shared_ptr<Config>::~shared_ptr(&v30);
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v31);
        v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
        if ( *(_BYTE *)(((unsigned __int64)&v12->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v12->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v12->player_save_timeout_max_cooldown_expo);
        }
        v13 = v12->player_save_timeout_max_cooldown_expo < *(_DWORD *)(v3 + 48);
        std::shared_ptr<Config>::~shared_ptr(&v31);
        if ( v13 )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v31);
          v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v31);
          if ( *(_BYTE *)(((unsigned __int64)&v14->timer_save_time_interval >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v14->timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v14->timer_save_time_interval);
          }
          v27 = (double)(int)v14->timer_save_time_interval;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)(v3 + 128));
          v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
          if ( *(_BYTE *)(((unsigned __int64)&v15->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v15->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&v15->player_save_timeout_max_cooldown_expo);
          }
          *(_DWORD *)(v3 + 64) = (int)(std::pow<int,unsigned int>(2, v15->player_save_timeout_max_cooldown_expo - 1)
                                     * v27);
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
          std::shared_ptr<Config>::~shared_ptr(&v31);
        }
        v16 = *(_DWORD *)(v3 + 64) + last_save_time;
        if ( v16 <= common::tools::TimeUtils::getNow() )
        {
          v2 = 1;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_mgr.cpp",
            "checkSaveCoolDown",
            533);
          v17 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v32,
                  (const char (*)[22])"[SAVE]try_save_count:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v18, (const char (*)[13])",delay time:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v3 + 64));
          v21 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v20, (const char (*)[12])",time left:");
          v22 = *(_DWORD *)(v3 + 64) + last_save_time;
          val = v22 - common::tools::TimeUtils::getNow();
          v23 = common::milog::MiLogStream::operator<<<long,(long *)0>(v21, &val);
          v24 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v23, (const char (*)[6])",uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream(&v32);
          v2 = 0;
        }
      }
      else
      {
        v2 = 1;
      }
    }
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  result = v2;
  if ( v33 == (char *)v3 )
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

// Line 541: range 00000000179AC5AA-00000000179AC810
__int64 __fastcall PlayerMgr::savePlayerToDb(PlayerMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  unsigned int v6; // r14d
  PlayerSaveWaitData *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:540 64 16 14 player_ptr:542 96 16 12 save_ptr:547";
  *(_QWORD *)(v2 + 16) = PlayerMgr::savePlayerToDb;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), &this->online_player_map_, *(_DWORD *)(v2 + 48));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v6 = Player::saveToDb(v5);
  }
  else
  {
    PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)(v2 + 96), (uint32_t)this);
    if ( std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 96), 0LL) )
    {
      v7 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v6 = PlayerSaveWaitData::sendToDb(v7);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "savePlayerToDb",
        552);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v10,
             (const char (*)[29])"cannot find player info,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v10);
      v6 = -1;
    }
    std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = v6;
  if ( v11 == (char *)v2 )
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

// Line 557: range 00000000179AC812-00000000179ACAA9
__int64 __fastcall PlayerMgr::getPlayerLastSaveTime(PlayerMgr *const this, uint32_t uid)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  Player *v5; // rax
  uint32_t LastSaveTime; // r14d
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  common::milog::MiLogStream v10; // [rsp+10h] [rbp-D0h] BYREF
  char v11[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 7 uid:556 64 16 14 player_ptr:558 96 16 12 save_ptr:563";
  *(_QWORD *)(v2 + 16) = PlayerMgr::getPlayerLastSaveTime;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = uid;
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 64), &this->online_player_map_, *(_DWORD *)(v2 + 48));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    v5 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    LastSaveTime = Player::getLastSaveTime(v5);
  }
  else
  {
    PlayerMgr::findSaveWaitPlayer((PlayerMgr *const)(v2 + 96), (uint32_t)this);
    if ( std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)(v2 + 96), 0LL) )
    {
      v7 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v7->last_save_time);
      }
      LastSaveTime = v7->last_save_time;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "getPlayerLastSaveTime",
        568);
      v8 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             &v10,
             (const char (*)[29])"cannot find player info,uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v10);
      LastSaveTime = 0;
    }
    std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v2 + 96));
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
  result = LastSaveTime;
  if ( v11 == (char *)v2 )
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

// Line 575: range 00000000179ACAAA-00000000179ACEB1
int32_t __cdecl PlayerMgr::asyncDestoryPlayer(
        PlayerMgr *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context)
{
  std::shared_ptr<DestoryPlayerContext> *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  std::size_t v6; // r14
  const std::type_info *v7; // rax
  const char *v8; // r12
  const std::type_info *v9; // rax
  const char *v10; // rax
  int32_t v11; // r14d
  std::__shared_ptr_access<DestoryPlayerContext,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-ACh] BYREF
  std::any __any; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (std::shared_ptr<DestoryPlayerContext> *)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = (std::shared_ptr<DestoryPlayerContext> *)v4;
  }
  v3->_M_ptr = (std::__shared_ptr<DestoryPlayerContext,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v3->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 15 context_ptr:577";
  v3[1]._M_ptr = (std::__shared_ptr<DestoryPlayerContext,(__gnu_cxx::_Lock_policy)2>::element_type *)PlayerMgr::asyncDestoryPlayer;
  v5 = (unsigned __int64)v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  v6 = std::type_info::hash_code((const std::type_info *const)&`typeinfo for'std::shared_ptr<DestoryPlayerContext>);
  v7 = std::any::type(p_context);
  if ( v6 == std::type_info::hash_code(v7) )
  {
    std::shared_ptr<DestoryPlayerContext>::shared_ptr(v3 + 2, 0LL);
    std::any_cast<std::shared_ptr<DestoryPlayerContext>>(&__any);
    std::shared_ptr<DestoryPlayerContext>::operator=(v3 + 2, (std::shared_ptr<DestoryPlayerContext> *)&__any);
    std::shared_ptr<DestoryPlayerContext>::~shared_ptr((std::shared_ptr<DestoryPlayerContext> *const)&__any);
    if ( std::operator!=<DestoryPlayerContext>(v3 + 2, 0LL) )
    {
      v12 = std::__shared_ptr_access<DestoryPlayerContext,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DestoryPlayerContext,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v3[2]);
      std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::reset(&v12->player_ptr);
    }
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "asyncDestoryPlayer",
      582);
    v13 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            &v19,
            (const char (*)[20])"player destory,uid:");
    v14 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
    val = common::minet::Packet::getUserId(v14);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v11 = 0;
    std::shared_ptr<DestoryPlayerContext>::~shared_ptr(v3 + 2);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "asyncDestoryPlayer",
      577);
    v8 = std::type_info::name((const std::type_info *const)&`typeinfo for'std::shared_ptr<DestoryPlayerContext>);
    v9 = std::any::type(p_context);
    v10 = std::type_info::name(v9);
    common::milog::MiLogStream::operator()(&v19, off_26266F80, v10, v8);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v11 = -1;
  }
  result = v11;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v3->_M_ptr = (std::__shared_ptr<DestoryPlayerContext,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 587: range 00000000179ACEB2-00000000179ACF67
int32_t __cdecl PlayerMgr::asyncDestoryPlayerCallback(
        PlayerMgr *const this,
        common::minet::PacketPtr *p_packet_ptr,
        std::any *p_context,
        int32_t retcode)
{
  common::milog::MiLogStream *v4; // rbx
  std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int val; // [rsp+2Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_mgr.cpp",
    "asyncDestoryPlayerCallback",
    588);
  v4 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
         &v8,
         (const char (*)[29])"player destory callback,uid:");
  v5 = std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<common::minet::Packet,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_packet_ptr);
  val = common::minet::Packet::getUserId(v5);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v8);
  return 0;
};

// Line 595: range 00000000179ACF68-00000000179AD43A
int32_t __cdecl PlayerMgr::logoutAllOnlinePlayerAndMoveToSaveWait(PlayerMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false>::pointer v4; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false>::pointer v5; // rax
  Player *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  Player *v9; // rax
  Player *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int *v13; // rax
  uint32_t *v14; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-140h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-138h]
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-130h] BYREF
  char v19[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 7 uid:600 64 8 6 it:598 96 16 14 player_ptr:601 128 56 14 player_set:597";
  *(_QWORD *)(v1 + 16) = PlayerMgr::logoutAllOnlinePlayerAndMoveToSaveWait;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -218959360;
  v3[536862723] = -219021312;
  v3[536862725] = -218103808;
  v3[536862726] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 128));
  *(std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_);
  while ( 1 )
  {
    __for_end._M_cur = (std::__detail::_Node_iterator_base<unsigned int,false>::__node_type *)std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> *)(v1 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> *)&__for_end) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false> *const)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v4);
    }
    *(_DWORD *)(v1 + 48) = v4->first;
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false> *const)(v1 + 64));
    std::shared_ptr<Player>::shared_ptr((std::shared_ptr<Player> *const)(v1 + 96), &v5->second);
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( Player::blockStopCoroutine(v6) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "logoutAllOnlinePlayerAndMoveToSaveWait",
        606);
      v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v18,
             (const char (*)[33])"blockStopCoroutine failed, uid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( Player::isConnected(v8) )
    {
      v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      Player::onPlayerDisconnect(v9, 6u);
    }
    v10 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( Player::logout(v10, PlayerLogoutReq_Reason_SERVER_CLOSE) )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "logoutAllOnlinePlayerAndMoveToSaveWait",
        619);
      v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v18, (const char (*)[5])"uid:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 48));
      common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" logout failed");
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    std::unordered_set<unsigned int>::insert(
      (std::unordered_set<unsigned int> *const)(v1 + 128),
      (const std::unordered_set<unsigned int>::value_type *)(v1 + 48));
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++(
      (std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false> *const)(v1 + 64),
      0);
  }
  __for_range = (std::unordered_set<unsigned int> *)(v1 + 128);
  *(std::unordered_set<unsigned int>::iterator *)(v1 + 64) = std::unordered_set<unsigned int>::begin((std::unordered_set<unsigned int> *const)(v1 + 128));
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(
            (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v1 + 64),
            &__for_end) )
  {
    v13 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_iterator<unsigned int,true,false> *const)(v1 + 64));
    v14 = v13;
    if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v13);
    }
    PlayerMgr::mvOnlinePlayerToSaveWait(this, *v14);
    std::__detail::_Node_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_iterator<unsigned int,true,false> *const)(v1 + 64));
  }
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 128));
  result = 0;
  if ( v19 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 634: range 00000000179AD43C-00000000179AD5C4
PlayerMgr *__fastcall PlayerMgr::findSaveWaitPlayer(
        PlayerMgr *const this,
        std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>> *uid,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData> >,false,false>::pointer v6; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData> >,false> __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:633 64 8 6 it:635";
  *(_QWORD *)(v3 + 16) = PlayerMgr::findSaveWaitPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::find(
                                                                                                   uid + 1,
                                                                                                   (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::key_type *)(v3 + 48));
  __y._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::end(uid + 1)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData> >,false> *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<PlayerSaveWaitData>::shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)this, 0LL);
  }
  else
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData> >,false,false> *const)(v3 + 64));
    std::shared_ptr<PlayerSaveWaitData>::shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)this, &v6->second);
  }
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 645: range 00000000179AD5C6-00000000179AD6AB
__int64 __fastcall PlayerMgr::delSaveWaitPlayer(PlayerMgr *const this, uint32_t uid)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 uid:644";
  *(_QWORD *)(v2 + 16) = PlayerMgr::delSaveWaitPlayer;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = uid;
  if ( std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::erase(
         &this->save_wait_player_map_,
         (const std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::key_type *)(v2 + 32)) )
  {
    result = 0LL;
  }
  else
  {
    result = 0xFFFFFFFFLL;
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

// Line 655: range 00000000179AD6AC-00000000179ADBF2
__int64 __fastcall PlayerMgr::checkSaveWaitPlayer(
        PlayerMgr *const this,
        uint32_t player_save_timeout_after_send_proto,
        uint32_t check_interval)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  unsigned int v6; // r15d
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  uint32_t now; // [rsp+1Ch] [rbp-144h]
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::iterator __for_begin; // [rsp+20h] [rbp-140h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::iterator __for_end; // [rsp+28h] [rbp-138h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>> *__for_range; // [rsp+30h] [rbp-130h]
  std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData> > *p; // [rsp+38h] [rbp-128h]
  std::shared_ptr<PlayerSaveWaitData> p_save_ptr; // [rsp+40h] [rbp-120h] BYREF
  common::milog::MiLogStream v25; // [rsp+50h] [rbp-110h] BYREF
  char v26[240]; // [rsp+70h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 22 save_timeout_count:663 48 4 40 player_save_timeout_after_send_proto:654 64 4 18 check_"
                        "interval:654 80 16 12 save_ptr:667 112 48 19 timeout_uid_set:664";
  *(_QWORD *)(v3 + 16) = PlayerMgr::checkSaveWaitPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 48) = player_save_timeout_after_send_proto;
  *(_DWORD *)(v3 + 64) = check_interval;
  now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_check_save_wait_time_);
  }
  if ( now > this->last_check_save_wait_time_ + *(_DWORD *)(v3 + 64) )
  {
    *(_DWORD *)(v3 + 32) = 0;
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
    __for_range = &this->save_wait_player_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::begin(&this->save_wait_player_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::end(&this->save_wait_player_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData>>,false>(
              &__for_begin,
              &__for_end) )
    {
      p = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData>>,false,false>::operator*(&__for_begin);
      std::shared_ptr<PlayerSaveWaitData>::shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v3 + 80), &p->second);
      if ( std::operator!=<PlayerSaveWaitData>((const std::shared_ptr<PlayerSaveWaitData> *)(v3 + 80), 0LL) )
      {
        v7 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
        if ( *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&v7->last_save_time >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&v7->last_save_time);
        }
        if ( now >= v7->last_save_time + *(_DWORD *)(v3 + 48) )
        {
          ++*(_DWORD *)(v3 + 32);
          v8 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          std::set<unsigned int>::insert((std::set<unsigned int> *const)(v3 + 112), &v8->uid);
          v9 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
          if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(v9);
          }
          if ( (unsigned __int8)PlayerMgr::checkSaveCoolDown(this, v9->uid) )
          {
            std::shared_ptr<PlayerSaveWaitData>::shared_ptr(
              &p_save_ptr,
              (const std::shared_ptr<PlayerSaveWaitData> *)(v3 + 80));
            PlayerMgr::enqueueSavePlayer(this, &p_save_ptr, now);
            std::shared_ptr<PlayerSaveWaitData>::~shared_ptr(&p_save_ptr);
          }
        }
      }
      std::shared_ptr<PlayerSaveWaitData>::~shared_ptr((std::shared_ptr<PlayerSaveWaitData> *const)(v3 + 80));
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<PlayerSaveWaitData>>,false,false>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->last_check_save_wait_time_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->last_check_save_wait_time_, &__for_end, &this->last_check_save_wait_time_);
    }
    this->last_check_save_wait_time_ = now;
    if ( *(_DWORD *)(v3 + 32) > 1u )
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_mgr.cpp",
        "checkSaveWaitPlayer",
        685);
      v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v25,
              (const char (*)[18])"save_wait_player:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int>(v10, (const std::set<unsigned int> *)(v3 + 112));
      v12 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              v11,
              (const char (*)[22])", save_timeout_count:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              v13,
              (const char (*)[40])", player_save_timeout_after_send_proto:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 48));
      v16 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              v15,
              (const char (*)[18])", check_interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream(&v25);
    }
    v6 = 1;
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
  }
  else
  {
    v6 = 0;
  }
  result = v6;
  if ( v26 == (char *)v3 )
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
  return result;
};

// Line 695: range 00000000179ADBF4-00000000179ADC0D
uint32_t __cdecl PlayerMgr::getOnlinePlayerNum(PlayerMgr *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<Player>>::size(&this->online_player_map_);
};

// Line 700: range 00000000179ADC0E-00000000179ADCED
uint32_t __cdecl PlayerMgr::getMpPlayerNum(PlayerMgr *const this)
{
  Player *v1; // rax
  PlayerMpComp *MpComp; // rax
  uint32_t mp_player_num; // [rsp+1Ch] [rbp-34h]
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Player> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *uid; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *player_ptr; // [rsp+48h] [rbp-8h]

  mp_player_num = 0;
  __for_range = &this->online_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::shared_ptr<Player>>(__in);
    player_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Player>>(__in);
    if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool(player_ptr) )
    {
      v1 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      MpComp = Player::getMpComp(v1);
      if ( PlayerMpComp::isInMpMode(MpComp) )
        ++mp_player_num;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  return mp_player_num;
};

// Line 713: range 00000000179ADCEE-00000000179ADD0B
uint32_t __cdecl PlayerMgr::getSaveWaitPlayerNum(PlayerMgr *const this)
{
  return std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::size(&this->save_wait_player_map_);
};

// Line 719: range 00000000179ADD0C-00000000179ADE2F
int32_t __cdecl PlayerMgr::checkOnlinePlayerMapOnExit(PlayerMgr *const this)
{
  common::milog::MiLogStream *v1; // rax
  int32_t ret; // [rsp+1Ch] [rbp-64h]
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>> *__for_range; // [rsp+30h] [rbp-50h]
  std::pair<unsigned int const,std::shared_ptr<Player> > *__in; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *uid; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *_; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+50h] [rbp-30h] BYREF

  ret = 0;
  __for_range = &this->online_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::shared_ptr<Player>>(__in);
    _ = std::get<1ul,unsigned int const,std::shared_ptr<Player>>(__in);
    ret = -1;
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "checkOnlinePlayerMapOnExit",
      724);
    v1 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v10,
           (const char (*)[43])"checkOnlinePlayerMapOnExit fail, find uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, uid);
    common::milog::MiLogStream::~MiLogStream(&v10);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  return ret;
};

// Line 730: range 00000000179ADE30-00000000179AE11F
void __cdecl PlayerMgr::destroy(PlayerMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_begin; // [rsp+10h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_end; // [rsp+18h] [rbp-88h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>> *__for_range; // [rsp+20h] [rbp-80h]
  std::pair<unsigned int const,std::shared_ptr<Player> > *__in; // [rsp+28h] [rbp-78h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *uid; // [rsp+30h] [rbp-70h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *player_ptr; // [rsp+38h] [rbp-68h]
  char v15[96]; // [rsp+40h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 14 avatar_ptr:733";
  *(_QWORD *)(v1 + 16) = PlayerMgr::destroy;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  __for_range = &this->online_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::shared_ptr<Player>>(__in);
    player_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Player>>(__in);
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    Player::getCurAvatar((Player *const)(v1 + 32));
    if ( std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v1 + 32), 0LL) )
    {
      v4 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v5 = *(_QWORD *)v4->baseclass_0 + 128LL;
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      (*(void (__fastcall **)(std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v5)(
        v4,
        &VisionContext::miss_context);
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v1 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::clear(&this->online_player_map_);
  std::unordered_map<unsigned int,std::shared_ptr<PlayerSaveWaitData>>::clear(&this->save_wait_player_map_);
  if ( std::operator!=<UnixTimer>(&this->daily_refresh_timer_ptr_, 0LL) )
  {
    v6 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->daily_refresh_timer_ptr_);
    common::tools::MiTimer::cancel(v6);
  }
  if ( std::operator!=<UnixTimer>(&this->safe_server_heartbeat_timer_ptr_, 0LL) )
  {
    v7 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->safe_server_heartbeat_timer_ptr_);
    common::tools::MiTimer::cancel(v7);
  }
  if ( std::operator!=<UnixTimer>(&this->lua_state_memory_report_ptr_, 0LL) )
  {
    v8 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->lua_state_memory_report_ptr_);
    common::tools::MiTimer::cancel(v8);
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

// Line 756: range 00000000179AE120-00000000179AE34D
PlayerMgr *__fastcall PlayerMgr::findCurAvatar(
        PlayerMgr *const this,
        std::unordered_map<unsigned int,std::shared_ptr<Player>> *uid,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-A0h] BYREF
  char v10[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 7 uid:755 64 16 14 player_ptr:757";
  *(_QWORD *)(v3 + 16) = PlayerMgr::findCurAvatar;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 64), uid, *(_DWORD *)(v3 + 48));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "findCurAvatar",
      760);
    v6 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
           &v9,
           (const char (*)[23])"findPlayer fails, uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v9);
    std::shared_ptr<Avatar>::shared_ptr((std::shared_ptr<Avatar> *const)this, 0LL);
  }
  else
  {
    std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this);
    Player::getCurAvatar((Player *const)this);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 64));
  if ( v10 == (char *)v3 )
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
  return this;
};

// Line 769: range 00000000179AE34E-00000000179AE596
int32_t __cdecl PlayerMgr::sendToPlayerList<google::protobuf::Message>(
        PlayerMgr *const this,
        const std::vector<unsigned int> *uid_vec,
        common::minet::ConstMessagePtr *p_msg_ptr)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  unsigned int *v6; // rax
  int *v7; // rdx
  Player *v8; // r14
  int32_t result; // eax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  std::shared_ptr<const google::protobuf::Message> v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 player_ptr:772";
  *(_QWORD *)(v3 + 16) = PlayerMgr::sendToPlayerList<google::protobuf::Message>;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  __for_range = uid_vec;
  __for_begin._M_current = std::vector<unsigned int>::begin(uid_vec)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(uid_vec)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    v7 = (int *)v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v3 + 32), &this->online_player_map_, *v7);
    if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      std::shared_ptr<google::protobuf::Message const>::shared_ptr(&v14, p_msg_ptr);
      Player::sendMessage(v8, &v14, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr(&v14);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 782: range 00000000179AE598-00000000179AE8E1
int32_t __cdecl PlayerMgr::foreachPlayer(PlayerMgr *const this, std::function<ForeachPolicy(Player&)> *p_func)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::size_type v6; // rax
  int v7; // r14d
  Player *v8; // rdx
  int32_t result; // eax
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>> *__for_range; // [rsp+30h] [rbp-E0h]
  std::vector<std::weak_ptr<Player>> *__for_range_0; // [rsp+38h] [rbp-D8h]
  std::weak_ptr<Player> *online_player_wtr; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<Player> > *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *online_player_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *online_player_ptr; // [rsp+58h] [rbp-B8h]
  char v18[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 21 online_player_ptr:792 64 24 21 online_player_vec:784";
  *(_QWORD *)(v3 + 16) = PlayerMgr::foreachPlayer;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -218103808;
  v5[536862723] = -202116109;
  std::vector<std::weak_ptr<Player>>::vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  v6 = std::unordered_map<unsigned int,std::shared_ptr<Player>>::size(&this->online_player_map_);
  std::vector<std::weak_ptr<Player>>::reserve((std::vector<std::weak_ptr<Player>> *const)(v3 + 64), v6);
  __for_range = &this->online_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator*(&__for_begin);
    online_player_id = std::get<0ul,unsigned int const,std::shared_ptr<Player>>(__in);
    online_player_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Player>>(__in);
    std::vector<std::weak_ptr<Player>>::emplace_back<std::shared_ptr<Player> &>(
      (std::vector<std::weak_ptr<Player>> *const)(v3 + 64),
      online_player_ptr,
      online_player_ptr);
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = (std::vector<std::weak_ptr<Player>> *)(v3 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false>::__node_type *)std::vector<std::weak_ptr<Player>>::begin((std::vector<std::weak_ptr<Player>> *const)(v3 + 64))._M_current;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false>::__node_type *)std::vector<std::weak_ptr<Player>>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *)&__for_end) )
  {
    online_player_wtr = __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
    std::weak_ptr<Player>::lock((const std::weak_ptr<Player> *const)(v3 + 32));
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 32), 0LL) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      if ( std::function<ForeachPolicy ()(Player &)>::operator()(p_func, v8) )
      {
        v2 = 1;
        v7 = 1;
      }
      else
      {
        v7 = 2;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 32));
    if ( v7 && v7 != 2 )
      goto LABEL_18;
    __gnu_cxx::__normal_iterator<std::weak_ptr<Player> *,std::vector<std::weak_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::weak_ptr<Player>*,std::vector<std::weak_ptr<Player>> > *const)&__for_begin);
  }
  v2 = 0;
LABEL_18:
  std::vector<std::weak_ptr<Player>>::~vector((std::vector<std::weak_ptr<Player>> *const)(v3 + 64));
  result = v2;
  if ( v18 == (char *)v3 )
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

// Line 807: range 00000000179AE8E2-00000000179AEAE4
int32_t __cdecl PlayerMgr::init(PlayerMgr *const this)
{
  PlayerMgr **v1; // r8
  const std::_Placeholder<1> *v2; // r9
  uint64_t NowMs; // rdx
  PlayerMgr **v4; // r8
  const std::_Placeholder<1> *v5; // r9
  PlayerMgr **v6; // r8
  const std::_Placeholder<1> *v7; // r9
  PlayerMgr *v9; // [rsp+18h] [rbp-78h] BYREF
  void (*__f)(PlayerMgr *, unsigned __int64); // [rsp+20h] [rbp-70h] BYREF
  __int64 v11; // [rsp+28h] [rbp-68h]
  std::_Bind<void (PlayerMgr::*(PlayerMgr*,std::_Placeholder<1>))(long unsigned int)> __args_0; // [rsp+30h] [rbp-60h] BYREF

  v9 = this;
  __f = (void (*)(PlayerMgr *, unsigned __int64))PlayerMgr::onDailyRefreshTimer;
  v11 = 0LL;
  std::bind<void (PlayerMgr::*)(unsigned long),PlayerMgr*,std::_Placeholder<1> const&>(
    (std::_Bind_helper<false,void (PlayerMgr::*)(long unsigned int),PlayerMgr*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
    &__f,
    &v9,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v1,
    v2);
  common::tools::perf::make_shared<UnixTimer,std::_Bind<void (PlayerMgr::*)(unsigned long) ()(PlayerMgr*,std::_Placeholder<1>)>>(
    &__args_0,
    (std::_Bind<void (PlayerMgr::*(PlayerMgr*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
  std::shared_ptr<UnixTimer>::operator=(&this->daily_refresh_timer_ptr_, (std::shared_ptr<UnixTimer> *)&__args_0);
  std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&__args_0);
  NowMs = common::tools::TimeUtils::getNowMs();
  PlayerMgr::onDailyRefreshTimer(this, NowMs);
  v9 = this;
  __f = (void (*)(PlayerMgr *, unsigned __int64))PlayerMgr::onSafeServerHeartbeatTimer;
  v11 = 0LL;
  std::bind<void (PlayerMgr::*)(unsigned long),PlayerMgr*,std::_Placeholder<1> const&>(
    (std::_Bind_helper<false,void (PlayerMgr::*)(long unsigned int),PlayerMgr*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
    &__f,
    &v9,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v4,
    v5);
  common::tools::perf::make_shared<UnixTimer,std::_Bind<void (PlayerMgr::*)(unsigned long) ()(PlayerMgr*,std::_Placeholder<1>)>>(
    &__args_0,
    (std::_Bind<void (PlayerMgr::*(PlayerMgr*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
  std::shared_ptr<UnixTimer>::operator=(
    &this->safe_server_heartbeat_timer_ptr_,
    (std::shared_ptr<UnixTimer> *)&__args_0);
  std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&__args_0);
  PlayerMgr::startSafeServerHeartbeatTimer(this);
  v9 = this;
  __f = (void (*)(PlayerMgr *, unsigned __int64))PlayerMgr::onLuaStateMemoryReportTimer;
  v11 = 0LL;
  std::bind<void (PlayerMgr::*)(unsigned long),PlayerMgr*,std::_Placeholder<1> const&>(
    (std::_Bind_helper<false,void (PlayerMgr::*)(long unsigned int),PlayerMgr*,const std::_Placeholder<1>&>::type *)&__args_0._M_bound_args,
    &__f,
    &v9,
    (const std::_Placeholder<1> *)&std::placeholders::_1,
    v6,
    v7);
  common::tools::perf::make_shared<UnixTimer,std::_Bind<void (PlayerMgr::*)(unsigned long) ()(PlayerMgr*,std::_Placeholder<1>)>>(
    &__args_0,
    (std::_Bind<void (PlayerMgr::*(PlayerMgr*,std::_Placeholder<1>))(long unsigned int)> *)&__args_0._M_bound_args);
  std::shared_ptr<UnixTimer>::operator=(&this->lua_state_memory_report_ptr_, (std::shared_ptr<UnixTimer> *)&__args_0);
  std::shared_ptr<UnixTimer>::~shared_ptr((std::shared_ptr<UnixTimer> *const)&__args_0);
  PlayerMgr::startLuaStateMemoryReportTimer(this);
  return 0;
};

// Line 818: range 00000000179AEAE6-00000000179AEBEF
void __cdecl PlayerMgr::enqueueSavePlayer(PlayerMgr *const this, PlayerPtr *p_player_ptr)
{
  Player *v2; // rax
  uint32_t LastSaveTime; // r12d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rdx
  uint32_t v5; // r12d
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t Uid; // eax
  std::shared_ptr<Config> v8[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( !std::operator==<Player>(0LL, p_player_ptr) )
  {
    v2 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    LastSaveTime = Player::getLastSaveTime(v2);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v8);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v8);
    if ( *(_BYTE *)(((unsigned __int64)&v4->max_save_time_interval >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v4 - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v4->max_save_time_interval >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load4(&v4->max_save_time_interval);
    }
    v5 = v4->max_save_time_interval + LastSaveTime;
    v6 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
    Uid = Player::getUid(v6);
    SavePlayerQueue::enqueueSavePlayer(&this->save_player_queue_, Uid, v5);
    std::shared_ptr<Config>::~shared_ptr(v8);
  }
};

// Line 829: range 00000000179AEBF0-00000000179AEC76
void __cdecl PlayerMgr::enqueueSavePlayer(
        PlayerMgr *const this,
        PlayerSaveWaitDataPtr *p_save_ptr,
        uint32_t save_timeout)
{
  std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax

  if ( !std::operator==<PlayerSaveWaitData>(0LL, p_save_ptr) )
  {
    v3 = std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerSaveWaitData,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_save_ptr);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v3);
    }
    SavePlayerQueue::enqueueSavePlayer(&this->save_player_queue_, v3->uid, save_timeout);
  }
};

// Line 838: range 00000000179AEC78-00000000179AECC0
void __cdecl PlayerMgr::enqueueSavePlayer(PlayerMgr *const this, PlayerPtr *p_player_ptr, uint32_t save_timeout)
{
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t Uid; // eax

  v3 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_player_ptr);
  Uid = Player::getUid(v3);
  SavePlayerQueue::enqueueSavePlayer(&this->save_player_queue_, Uid, save_timeout);
};

// Line 843: range 00000000179AECC2-00000000179AECED
bool __cdecl PlayerMgr::sendSaveProto(
        PlayerMgr *const this,
        uint32_t allow_cost_time_ms,
        uint32_t hard_limit_cost_time_ms)
{
  return SavePlayerQueue::sendSaveProto(&this->save_player_queue_, allow_cost_time_ms, hard_limit_cost_time_ms);
};

// Line 848: range 00000000179AECEE-00000000179AF6B0
void __fastcall PlayerMgr::onDailyRefreshTimer(PlayerMgr *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  uint32_t v14; // ecx
  char v15; // al
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v16; // rax
  _DWORD *v17; // rdx
  common::milog::MiLogStream *v18; // rax
  Player *v19; // rax
  common::milog::MiLogStream *v20; // rax
  Player *v21; // rax
  Player *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  unsigned __int64 v28; // rdx
  common::milog::MiLogStream *v29; // r14
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  uint32_t time_offset_sec; // [rsp+14h] [rbp-16Ch]
  std::vector<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-168h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-160h] BYREF
  std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-158h]
  common::milog::MiLogStream v36; // [rsp+30h] [rbp-150h] BYREF
  char v37[304]; // [rsp+50h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 18 is_cross_month:869 64 4 7 now:849 80 4 19 cur_refresh_day:851 96 4 21 next_refresh_tim"
                        "e:890 112 4 12 interval:897 128 8 10 now_ms:847 160 16 14 player_ptr:863 192 24 11 uid_vec:858";
  *(_QWORD *)(v2 + 16) = PlayerMgr::onDailyRefreshTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  *(_QWORD *)(v2 + 128) = now_ms;
  *(_DWORD *)(v2 + 64) = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 160));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
  time_offset_sec = ConstValueExcelConfigMgr::getTimeOffsetSec(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
  *(_DWORD *)(v2 + 80) = common::tools::TimeUtils::getTimeDay(*(unsigned int *)(v2 + 64), time_offset_sec);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_day_);
  }
  if ( this->last_refresh_day_ != *(_DWORD *)(v2 + 80) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "onDailyRefreshTimer",
      855);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v36, (const char (*)[17])"cur_refresh_day:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 80));
    v8 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v7, (const char (*)[20])" last_refresh_day_:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->last_refresh_day_);
    v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" now:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 64));
    v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" nowMs:");
    v13 = (char *)(v2 + 128);
    common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v12, (const unsigned __int64 *)(v2 + 128));
    common::milog::MiLogStream::~MiLogStream(&v36);
    v14 = *(_DWORD *)(v2 + 80);
    v15 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_day_ >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v13) = v15 != 0;
      __asan_report_store4(&this->last_refresh_day_, v13, &this->last_refresh_day_);
    }
    this->last_refresh_day_ = v14;
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 192));
    PlayerMgr::getOnlinePlayerUidVec(this, (std::vector<unsigned int> *)(v2 + 192));
    __for_range = (std::vector<unsigned int> *)(v2 + 192);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 192))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 192))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v16 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v16);
      }
      *(_DWORD *)(v2 + 112) = *v17;
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 160), &this->online_player_map_, *(_DWORD *)(v2 + 112));
      if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_mgr.cpp",
          "onDailyRefreshTimer",
          866);
        v18 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v36,
                (const char (*)[28])"findOnlinePlayer fail, uid:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 112));
        common::milog::MiLogStream::~MiLogStream(&v36);
      }
      else
      {
        *(_BYTE *)(v2 + 48) = 0;
        v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        if ( !Player::checkAndSetLastRefreshTime(v19, *(_DWORD *)(v2 + 64), (bool *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v36,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/player_mgr.cpp",
            "onDailyRefreshTimer",
            872);
          v20 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v36,
                  (const char (*)[38])"checkAndSetLastRefreshTime fail, uid:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 112));
          common::milog::MiLogStream::~MiLogStream(&v36);
        }
        else
        {
          v21 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
          Player::onDailyRefresh(v21);
          if ( *(_BYTE *)(v2 + 48) )
          {
            v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            Player::onMonthlyRefresh(v22);
          }
        }
      }
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 192));
  }
  if ( std::operator==<UnixTimer>(0LL, &this->daily_refresh_timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "onDailyRefreshTimer",
      886);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v36,
      (const char (*)[33])"daily_refresh_timer_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v36);
  }
  else
  {
    *(_DWORD *)(v2 + 96) = common::tools::TimeUtils::getDailyStartTime(
                             (unsigned int)(*(_DWORD *)(v2 + 80) + 1),
                             time_offset_sec);
    if ( *(_DWORD *)(v2 + 96) > *(_DWORD *)(v2 + 64) )
    {
      *(_DWORD *)(v2 + 112) = *(_DWORD *)(v2 + 96) - *(_DWORD *)(v2 + 64);
      v26 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->daily_refresh_timer_ptr_);
      common::tools::MiTimer::cancel(v26);
      v27 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->daily_refresh_timer_ptr_);
      if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v28 = (unsigned __int64)(v27->_vptr_MiTimer + 2);
      if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD))v28)(
             v27,
             *(unsigned int *)(v2 + 112),
             0LL,
             "./src/player/player_mgr.cpp",
             "onDailyRefreshTimer",
             899LL,
             0LL,
             0LL) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/player_mgr.cpp",
          "onDailyRefreshTimer",
          901);
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          &v36,
          (const char (*)[21])" start timer failed!");
        common::milog::MiLogStream::~MiLogStream(&v36);
      }
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_mgr.cpp",
        "onDailyRefreshTimer",
        903);
      v29 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v36, (const char (*)[11])"after now:");
      __for_end._M_current = (unsigned int *)common::tools::TimeUtils::getNow();
      v30 = common::milog::MiLogStream::operator<<<long,(long *)0>(v29, (const __int64 *)&__for_end);
      v31 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v30, (const char (*)[11])" interval:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, (const unsigned int *)(v2 + 112));
      common::milog::MiLogStream::~MiLogStream(&v36);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "onDailyRefreshTimer",
        893);
      v23 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v36,
              (const char (*)[19])"next_refresh_time:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, (const unsigned int *)(v2 + 96));
      v25 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v24, (const char (*)[6])" now:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v2 + 64));
      common::milog::MiLogStream::~MiLogStream(&v36);
    }
  }
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 908: range 00000000179AF6B2-00000000179AF8D8
void __cdecl PlayerMgr::startSafeServerHeartbeatTimer(PlayerMgr *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rdx
  uint32_t *p_heartbeat_interval; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  unsigned __int64 v5; // rdx
  uint32_t interval; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<UnixTimer>(0LL, &this->safe_server_heartbeat_timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "startSafeServerHeartbeatTimer",
      911);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v8,
      (const char (*)[41])"safe_server_heartbeat_timer_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
    p_heartbeat_interval = &v1->security_config.safe_server_config.connection_status_notify_config.heartbeat_interval;
    if ( *(_BYTE *)(((unsigned __int64)p_heartbeat_interval >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_heartbeat_interval & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_heartbeat_interval >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(p_heartbeat_interval);
    }
    interval = v1->security_config.safe_server_config.connection_status_notify_config.heartbeat_interval;
    std::shared_ptr<Config>::~shared_ptr(&v7);
    v3 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->safe_server_heartbeat_timer_ptr_);
    common::tools::MiTimer::cancel(v3);
    v4 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->safe_server_heartbeat_timer_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v5 = (unsigned __int64)(v4->_vptr_MiTimer + 2);
    if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD))v5)(
           v4,
           interval,
           0LL,
           "./src/player/player_mgr.cpp",
           "startSafeServerHeartbeatTimer",
           917LL,
           0LL,
           0LL) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_mgr.cpp",
        "startSafeServerHeartbeatTimer",
        919);
      common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v8, (const char (*)[21])" start timer failed!");
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
};

// Line 924: range 00000000179AF8DA-00000000179B000E
void __cdecl PlayerMgr::onSafeServerHeartbeatTimer(PlayerMgr *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r15
  std::vector<std::pair<unsigned int,unsigned int>>::size_type v8; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  const unsigned int *v12; // r8
  __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::reference v13; // rax
  std::pair<unsigned int,unsigned int> *v14; // rdx
  proto_security::GameHeartBeatInfo *v15; // rcx
  const std::string *v16; // rax
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_begin_0; // [rsp+28h] [rbp-1E8h] BYREF
  std::vector<std::pair<unsigned int,unsigned int>>::iterator __for_end_0; // [rsp+30h] [rbp-1E0h] BYREF
  Config *config; // [rsp+38h] [rbp-1D8h]
  const SafeServerConfig::ConnectionStatusNotifyConfig *notify_config; // [rsp+40h] [rbp-1D0h]
  std::unordered_map<unsigned int,std::shared_ptr<Player>> *__for_range; // [rsp+48h] [rbp-1C8h]
  google::protobuf::Map<unsigned int,proto_security::GameHeartBeatInfo> *platform_uid_map; // [rsp+50h] [rbp-1C0h]
  std::vector<std::pair<unsigned int,unsigned int>> *__for_range_0; // [rsp+58h] [rbp-1B8h]
  std::tuple_element<0,std::pair<unsigned int,unsigned int> >::type *platform_type; // [rsp+60h] [rbp-1B0h]
  std::tuple_element<1,std::pair<unsigned int,unsigned int> >::type *uid_0; // [rsp+68h] [rbp-1A8h]
  const std::pair<unsigned int const,std::shared_ptr<Player> > *v26; // [rsp+70h] [rbp-1A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Player> > >::type *uid; // [rsp+78h] [rbp-198h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Player> > >::type *player_ptr; // [rsp+80h] [rbp-190h]
  std::pair<unsigned int,unsigned int> __for_end; // [rsp+88h] [rbp-188h] BYREF
  std::shared_ptr<Config> v30; // [rsp+90h] [rbp-180h] BYREF
  std::string value; // [rsp+A0h] [rbp-170h] BYREF
  char v32[336]; // [rsp+C0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 12 platform:949 48 16 14 config_ptr:925 80 24 20 platform_uid_vec:935 144 112 10 notify:945";
  *(_QWORD *)(v2 + 16) = PlayerMgr::onSafeServerHeartbeatTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862722] = 62194;
  v4[536862723] = -218959360;
  v4[536862724] = 62194;
  v4[536862728] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 48));
  if ( !std::operator==<Config>(0LL, (const std::shared_ptr<Config> *)(v2 + 48)) )
  {
    config = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 48));
    notify_config = &config->security_config.safe_server_config.connection_status_notify_config;
    v5 = 0;
    if ( *(char *)(((unsigned __int64)&config->security_config.safe_server_config >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&config->security_config.safe_server_config);
    v7 = 0;
    if ( notify_config->is_enable )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v30);
      v5 = 1;
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30);
      if ( !FeatureSwitchMgr::isSafeServerNotifyClosed(&v6->feature_switch_mgr) )
        v7 = 1;
    }
    if ( v5 )
      std::shared_ptr<Config>::~shared_ptr(&v30);
    if ( v7 )
    {
      std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80));
      v8 = std::unordered_map<unsigned int,std::shared_ptr<Player>>::size(&this->online_player_map_);
      std::vector<std::pair<unsigned int,unsigned int>>::reserve(
        (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80),
        v8);
      __for_range = &this->online_player_map_;
      __for_end_0._M_current = (std::pair<unsigned int,unsigned int> *)std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_)._M_cur;
      __for_end = (std::pair<unsigned int,unsigned int>)std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
      while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> *)&__for_end_0,
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::shared_ptr<Player> >,false> *)&__for_end) )
      {
        v26 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false> *const)&__for_end_0);
        uid = std::get<0ul,unsigned int const,std::shared_ptr<Player>>(v26);
        player_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Player> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Player>>(v26);
        if ( std::operator!=<Player>(0LL, player_ptr) )
        {
          v9 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
          if ( Player::isConnected(v9) )
          {
            v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
            *(_DWORD *)(v2 + 32) = Player::getPlatformType(v11);
            std::vector<std::pair<unsigned int,unsigned int>>::emplace_back<unsigned int,unsigned int const&>(
              (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80),
              (unsigned int *)(v2 + 32),
              uid,
              (unsigned int *)(v2 + 32),
              v12);
          }
        }
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player> >,false,false> *const)&__for_end_0);
      }
      proto_security::GameHeartBeatNotifyRequest::GameHeartBeatNotifyRequest((proto_security::GameHeartBeatNotifyRequest *const)(v2 + 144));
      platform_uid_map = proto_security::GameHeartBeatNotifyRequest::mutable_platform_uid_list((proto_security::GameHeartBeatNotifyRequest *const)(v2 + 144));
      __for_range_0 = (std::vector<std::pair<unsigned int,unsigned int>> *)(v2 + 80);
      __for_begin_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::begin((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80))._M_current;
      __for_end_0._M_current = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>(
                &__for_begin_0,
                &__for_end_0) )
      {
        v13 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator*(&__for_begin_0);
        v14 = v13;
        if ( ((unsigned __int8)v13 & 7) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v13 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v13->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v13, 8LL);
        }
        __for_end = *v14;
        platform_type = std::get<0ul,unsigned int,unsigned int>(&__for_end);
        uid_0 = std::get<1ul,unsigned int,unsigned int>(&__for_end);
        if ( *(_BYTE *)(((unsigned __int64)platform_type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)platform_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)platform_type >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(platform_type);
        }
        *(_DWORD *)(v2 + 32) = Config::getSecurityPlatformTypeByPlatformType(config, *platform_type);
        v15 = google::protobuf::Map<unsigned int,proto_security::GameHeartBeatInfo>::operator[](
                platform_uid_map,
                (const google::protobuf::Map<unsigned int,proto_security::GameHeartBeatInfo>::key_type *)(v2 + 32));
        if ( *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)uid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(uid_0);
        }
        proto_security::GameHeartBeatInfo::add_uid(v15, *uid_0);
        __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> *,std::vector<std::pair<unsigned int,unsigned int>>>::operator++(&__for_begin_0);
      }
      v16 = ConfigBase::getRegionName[abi:cxx11](config);
      proto_security::GameHeartBeatNotifyRequest::set_region(
        (proto_security::GameHeartBeatNotifyRequest *const)(v2 + 144),
        v16);
      Config::findRegionGameBiz[abi:cxx11](&value, config);
      proto_security::GameHeartBeatNotifyRequest::set_biz_game(
        (proto_security::GameHeartBeatNotifyRequest *const)(v2 + 144),
        &value);
      std::string::~string(&value);
      PlayerMgr::asyncSendNotifyToSafeServer(
        &notify_config->heartbeat_uri,
        (const google::protobuf::Message *)(v2 + 144));
      proto_security::GameHeartBeatNotifyRequest::~GameHeartBeatNotifyRequest((proto_security::GameHeartBeatNotifyRequest *const)(v2 + 144));
      std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 80));
    }
    PlayerMgr::startSafeServerHeartbeatTimer(this);
  }
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 48));
  if ( v32 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
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

// Line 963: range 00000000179B0010-00000000179B0242
void __cdecl PlayerMgr::startLuaStateMemoryReportTimer(PlayerMgr *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  unsigned __int64 v4; // rdx
  char v5; // al
  uint32_t interval; // [rsp+1Ch] [rbp-44h]
  std::shared_ptr<Config> v7; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<UnixTimer>(0LL, &this->lua_state_memory_report_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "startLuaStateMemoryReportTimer",
      966);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      &v8,
      (const char (*)[41])"safe_server_heartbeat_timer_ptr_ is null");
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v7);
    v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7);
    if ( *(_BYTE *)(((unsigned __int64)&v1->lua_memory_report_interval >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v1->lua_memory_report_interval >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&v1->lua_memory_report_interval);
    }
    interval = v1->lua_memory_report_interval;
    std::shared_ptr<Config>::~shared_ptr(&v7);
    v2 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->lua_state_memory_report_ptr_);
    common::tools::MiTimer::cancel(v2);
    if ( !interval )
      goto LABEL_12;
    v3 = std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->lua_state_memory_report_ptr_);
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = (unsigned __int64)(v3->_vptr_MiTimer + 2);
    if ( *(_BYTE *)((v4 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    if ( (*(unsigned int (__fastcall **)(std::__shared_ptr_access<UnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, _QWORD, _QWORD, const char *, const char *, __int64, _QWORD, _QWORD))v4)(
           v3,
           interval,
           0LL,
           "./src/player/player_mgr.cpp",
           "startLuaStateMemoryReportTimer",
           972LL,
           0LL,
           0LL) )
    {
      v5 = 1;
    }
    else
    {
LABEL_12:
      v5 = 0;
    }
    if ( v5 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "startLuaStateMemoryReportTimer",
        974);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        &v8,
        (const char (*)[40])"lua_state_memory_report_ptr startS fail");
      common::milog::MiLogStream::~MiLogStream(&v8);
    }
  }
};

// Line 980: range 00000000179B0244-00000000179B06C0
void __cdecl PlayerMgr::onLuaStateMemoryReportTimer(PlayerMgr *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  LuaScriptMgr *v5; // rax
  PlayerCoroExec *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  MonitorReport *v10; // rax
  MonitorReport *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_begin; // [rsp+10h] [rbp-120h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>>::iterator __for_end; // [rsp+18h] [rbp-118h] BYREF
  std::unordered_map<unsigned int,std::shared_ptr<Player>> *__for_range; // [rsp+20h] [rbp-110h]
  std::pair<unsigned int const,std::shared_ptr<Player> > *__in; // [rsp+28h] [rbp-108h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *uid; // [rsp+30h] [rbp-100h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Player> > >::type *player_ptr; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-F0h] BYREF
  char v24[208]; // [rsp+60h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 17 tl_lua_memory:984 64 4 25 all_player_lua_memory:985 80 4 21 player_lua_memory:993 96 1"
                        "6 9 timer:981 128 16 17 coro_exec_ptr:990";
  *(_QWORD *)(v2 + 16) = PlayerMgr::onLuaStateMemoryReportTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  common::tools::TimeUtils::Timer::reset((common::tools::TimeUtils::Timer *const)(v2 + 96));
  v5 = (LuaScriptMgr *)ZTWN12LuaScriptMgr17tl_lua_script_mgrE(v2 + 96);
  *(_DWORD *)(v2 + 48) = LuaScriptMgr::getLuaStateMemoryAccount(v5);
  *(_DWORD *)(v2 + 64) = 0;
  __for_range = &this->online_player_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::begin(&this->online_player_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,std::shared_ptr<Player>>::end(&this->online_player_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::shared_ptr<Player>>,false>(
            &__for_begin,
            &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,std::shared_ptr<Player>>(__in);
    player_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Player>>(__in);
    if ( std::__shared_ptr<Player,(__gnu_cxx::_Lock_policy)2>::operator bool(player_ptr) )
    {
      std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
      Player::getCoroExecPtr((Player *const)(v2 + 128));
      if ( std::__shared_ptr<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2>::operator bool((const std::__shared_ptr<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2> *const)(v2 + 128)) )
      {
        v6 = std::__shared_ptr_access<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerCoroExec,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        *(_DWORD *)(v2 + 80) = PlayerCoroExec::getPlayerLuaStateMemoryAccount(v6);
        common::milog::MiLogStream::create(
          &v23,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/player_mgr.cpp",
          "onLuaStateMemoryReportTimer",
          994);
        v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v23, (const char (*)[12])"player uid:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, uid);
        v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               v8,
               (const char (*)[20])" player_lua_memory:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 80));
        common::milog::MiLogStream::~MiLogStream(&v23);
        *(_DWORD *)(v2 + 64) += *(_DWORD *)(v2 + 80);
      }
      std::shared_ptr<PlayerCoroExec>::~shared_ptr((std::shared_ptr<PlayerCoroExec> *const)(v2 + 128));
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::shared_ptr<Player>>,false,false>::operator++(&__for_begin);
  }
  v10 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  MonitorReport::addValue(v10, MONITOR_TL_LUA_MEM_SIZE, *(_DWORD *)(v2 + 48));
  v11 = std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MonitorReport,(__gnu_cxx::_Lock_policy)2,false,false> *const)&ResourceBox::monitor_report_ptr);
  MonitorReport::addValue(v11, MONITOR_ALL_PLAYER_LUA_MEM_SIZE, *(_DWORD *)(v2 + 64));
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/player_mgr.cpp",
    "onLuaStateMemoryReportTimer",
    1003);
  v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v23, (const char (*)[15])"tl_lua_memory:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          v13,
          (const char (*)[24])" all_player_lua_memory:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 64));
  v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])" cost:");
  *(_DWORD *)(v2 + 80) = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v2 + 96));
  common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 80));
  common::milog::MiLogStream::~MiLogStream(&v23);
  PlayerMgr::startLuaStateMemoryReportTimer(this);
  common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v2 + 96));
  if ( v24 == (char *)v2 )
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
};

// Line 1008: range 00000000179B08B2-00000000179B1143
void __cdecl PlayerMgr::asyncSendNotifyToSafeServer(const std::string *uri, const google::protobuf::Message *notify)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::remove_reference<std::string&>::type *v6; // rax
  const char *v7; // rsi
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
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  GameserverService *v25; // r14
  bool v26; // r14
  common::milog::MiLogStream *v27; // rax
  google::protobuf::Message *notifya; // [rsp+0h] [rbp-2C0h]
  const std::string *uria; // [rsp+8h] [rbp-2B8h]
  int v30; // [rsp+10h] [rbp-2B0h]
  char notify_configa; // [rsp+18h] [rbp-2A8h]
  const SafeServerConfig::ConnectionStatusNotifyConfig *notify_config; // [rsp+18h] [rbp-2A8h]
  std::shared_ptr<Config> v33; // [rsp+20h] [rbp-2A0h] BYREF
  std::string val; // [rsp+30h] [rbp-290h] BYREF
  char v35[624]; // [rsp+50h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 1 22 response_callback:1010 48 4 12 options:1016 64 32 16 json_string:1019 128 32 12 msg_st"
                        "r:1037 192 40 15 status_ret:1020 272 240 17 http_request:1027";
  *(_QWORD *)(v2 + 16) = PlayerMgr::asyncSendNotifyToSafeServer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959360;
  v4[536862728] = 62194;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v33);
  notify_configa = (unsigned __int8)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v33)
                 + 72;
  std::shared_ptr<Config>::~shared_ptr(&v33);
  google::protobuf::util::JsonPrintOptions::JsonPrintOptions((google::protobuf::util::JsonPrintOptions *const)(v2 + 48));
  *(_BYTE *)(v2 + 49) = 1;
  *(_BYTE *)(v2 + 51) = 1;
  std::string::basic_string(v2 + 64);
  google::protobuf::util::MessageToJsonString(
    (google::protobuf::util::Status *)(v2 + 192),
    (google::protobuf::Message *)notify,
    (int)notify,
    (void *)uri,
    v30,
    notify_configa,
    (int)v33._M_ptr,
    v33._M_refcount._M_pi);
  if ( !google::protobuf::util::Status::ok((const google::protobuf::util::Status *const)(v2 + 192)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/player_mgr.cpp",
      "asyncSendNotifyToSafeServer",
      1023);
    v5 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[35])"MessageToJsonString fails, notify:");
    google::protobuf::Message::ShortDebugString[abi:cxx11](&val, notifya);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &val);
    std::string::~string(&val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
  }
  else
  {
    common::minet::http_client::HttpRequest::HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 272));
    std::string::operator=(v2 + 272, &notify_config->host);
    std::string::operator=(v2 + 304, &notify_config->port);
    std::string::operator=(v2 + 336, uria);
    *(_DWORD *)(v2 + 496) = !std::operator==<char>(&notify_config->method, off_26268100);
    *(_DWORD *)(v2 + 500) = 1;
    if ( *(char *)(((unsigned __int64)&notify_config->is_ssl >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&notify_config->is_ssl);
    *(_BYTE *)(v2 + 504) = notify_config->is_ssl;
    v6 = std::move<std::string &>((std::string *)(v2 + 64));
    std::string::operator=(v2 + 464, v6);
    std::map<std::string,std::string>::operator=(
      (std::map<std::string,std::string> *const)(v2 + 368),
      &notify_config->head_map);
    std::string::basic_string(v2 + 128);
    if ( common::minet::http_client::HttpUtils::serializeHttpRequest(
           (const common::minet::http_client::HttpRequest *)(v2 + 272),
           (std::string *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "asyncSendNotifyToSafeServer",
        1040);
      v7 = "serializeHttpRequest fail";
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)&val,
        (const char (*)[26])"serializeHttpRequest fail");
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_mgr.cpp",
        "asyncSendNotifyToSafeServer",
        1044);
      v8 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             (common::milog::MiLogStream *const)&val,
             (const char (*)[19])"http_request host:");
      v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v2 + 272));
      v10 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v9, (const char (*)[7])" port:");
      v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v2 + 304));
      v12 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v11, (const char (*)[6])" uri:");
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v2 + 336));
      v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" method:");
      v15 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpMethod,(common::minet::http_client::HttpMethod*)0>(
              v14,
              (const common::minet::http_client::HttpMethod *)(v2 + 496));
      v16 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])" version:");
      v17 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpVersion,(common::minet::http_client::HttpVersion*)0>(
              v16,
              (const common::minet::http_client::HttpVersion *)(v2 + 500));
      v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" is_ssl:");
      v19 = common::milog::MiLogStream::operator<<(v18, *(_BYTE *)(v2 + 504));
      v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])" body:");
      v21 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v2 + 464));
      v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" head_map:");
      v23 = common::milog::MiLogStream::operator<<<std::string,std::string>(
              v22,
              (const std::map<std::string,std::string> *)(v2 + 368));
      v24 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v23, (const char (*)[10])" msg_str:");
      LOBYTE(v7) = v2 + 0x80;
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, (const std::string *)(v2 + 128));
    }
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    v25 = ServiceBox::findService<GameserverService>();
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::function<PlayerMgr::asyncSendNotifyToSafeServer(std::string const&,google::protobuf::Message const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &,common::minet::http_client::HttpResponse)#1},void,void>(
      (std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&val,
      (PlayerMgr::asyncSendNotifyToSafeServer::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)>)v7);
    if ( *(_BYTE *)(((unsigned __int64)&notify_config->timeout >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&notify_config->timeout >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&notify_config->timeout);
    }
    v26 = GameserverService::asyncHttpRequest(
            v25,
            (const common::minet::http_client::HttpRequest *)(v2 + 272),
            notify_config->timeout,
            2u,
            (common::minet::http_client::ResponseCallBackFunc *)&val) != 0;
    std::function<void ()(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)>::~function((std::function<void(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest&&,common::minet::http_client::HttpResponse&&)> *const)&val);
    if ( v26 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&val,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/player_mgr.cpp",
        "asyncSendNotifyToSafeServer",
        1057);
      v27 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              (common::milog::MiLogStream *const)&val,
              (const char (*)[34])"asyncHttpRequest fail, http body:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v27, (const std::string *)(v2 + 464));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&val);
    }
    std::string::~string((void *)(v2 + 128));
    common::minet::http_client::HttpRequest::~HttpRequest((common::minet::http_client::HttpRequest *const)(v2 + 272));
  }
  google::protobuf::util::Status::~Status((google::protobuf::util::Status *const)(v2 + 192));
  std::string::~string((void *)(v2 + 64));
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1010: range 00000000179B06C2-00000000179B08B0
void __fastcall PlayerMgr::asyncSendNotifyToSafeServer(std::string const&,google::protobuf::Message const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator()(
        const PlayerMgr::asyncSendNotifyToSafeServer::<lambda(common::minet::http_client::HttpRetcode, common::minet::http_client::HttpRequest&&, common::minet::http_client::HttpResponse&&)> *const __closure,
        common::minet::http_client::HttpRetcode http_retcode,
        common::minet::http_client::HttpRequest *http_request,
        common::minet::http_client::HttpResponse *http_response)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-80h] BYREF
  char v19[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 17 http_retcode:1010";
  *(_QWORD *)(v4 + 16) = PlayerMgr::asyncSendNotifyToSafeServer(std::string const&,google::protobuf::Message const&)::{lambda(common::minet::http_client::HttpRetcode,common::minet::http_client::HttpRequest &&,common::minet::http_client::HttpResponse &&)#1}::operator();
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = http_retcode;
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_mgr.cpp",
    "operator()",
    1012);
  v7 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
         &v18,
         (const char (*)[61])"asyncSendNotifyToSafeServer response_callback: http_retcode:");
  v8 = common::milog::MiLogStream::operator<<<common::minet::http_client::HttpRetcode,(common::minet::http_client::HttpRetcode*)0>(
         v7,
         (const common::minet::http_client::HttpRetcode *)(v4 + 32));
  v9 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v8, (const char (*)[20])" http_request.body:");
  v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &http_request->body);
  v11 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
          v10,
          (const char (*)[23])" http_response.status:");
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &http_response->status);
  v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v12,
          (const char (*)[25])" http_response.head_map:");
  v14 = common::milog::MiLogStream::operator<<<std::string,std::string>(v13, &http_response->head_map);
  v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v14, (const char (*)[21])" http_response.body:");
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &http_response->body);
  common::milog::MiLogStream::~MiLogStream(&v18);
  if ( v19 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1062: range 00000000179B11BA-00000000179B1743
void __cdecl PlayerMgr::onReloadConfig(PlayerMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::set<unsigned int> *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned __int8 v7; // si
  GameserverService *v8; // rax
  GameserverService *v9; // rax
  GameserverService *v10; // rax
  GameserverService *v11; // rax
  GameserverService *v12; // rax
  GameserverService *v13; // rax
  GameserverService *v14; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  unsigned __int64 v16; // rax
  _DWORD *v17; // rdx
  GameserverService *v18; // rax
  GameserverService *v19; // rax
  _BYTE is_server_data_changed[3]; // [rsp+13h] [rbp-16Dh]
  bool is_crc_changed; // [rsp+16h] [rbp-16Ah]
  bool is_next_res_changed; // [rsp+17h] [rbp-169h]
  ClientVersionConfig *last_version_config; // [rsp+18h] [rbp-168h]
  std::map<unsigned int,std::set<std::string>> *last_crc_version_map; // [rsp+20h] [rbp-160h]
  ClientVersionConfig *version_config; // [rsp+28h] [rbp-158h]
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-150h] BYREF
  std::map<unsigned int,std::set<std::string>> v27; // [rsp+50h] [rbp-130h] BYREF
  char v28[256]; // [rsp+80h] [rbp-100h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 15 config_ptr:1078 64 40 23 closed_item_notify:1068 144 48 28 cur_all_closed_item_set:1064";
  *(_QWORD *)(v1 + 16) = PlayerMgr::onReloadConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -218959360;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  FeatureSwitchMgr::getAllClosedItem((std::set<unsigned int> *)(v1 + 144), &v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v1 + 144),
         &this->feature_switch_all_closed_item_set_) )
  {
    v5 = std::move<std::set<unsigned int> &>((std::set<unsigned int> *)(v1 + 144));
    std::set<unsigned int>::operator=(&this->feature_switch_all_closed_item_set_, v5);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 32));
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    FeatureSwitchMgr::getClosedItemNotify((proto::ClosedItemNotify *)(v1 + 64), &v6->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMgr::onReloadConfig(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      (PlayerMgr::onReloadConfig::<lambda(Player&)>)(v1 + 64));
    PlayerMgr::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    proto::ClosedItemNotify::~ClosedItemNotify((proto::ClosedItemNotify *const)(v1 + 64));
  }
  PlayerMgr::checkAndNotifyNicknameAuditData(this);
  PlayerMgr::checkAndNotifySignatureAuditData(this);
  PlayerMgr::checkAndNotifyGCGBanCard(this);
  v7 = (unsigned __int8)ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  v8 = ServiceBox::findService<GameserverService>();
  last_version_config = &GameserverService::getGameThreadLocal(v8)->last_version_config;
  v9 = ServiceBox::findService<GameserverService>();
  last_crc_version_map = &GameserverService::getGameThreadLocal(v9)->last_crc_version_map;
  version_config = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.version_config;
  v10 = ServiceBox::findService<GameserverService>();
  is_server_data_changed[0] = GameserverService::isServerDataVersionChanged(v10);
  v11 = ServiceBox::findService<GameserverService>();
  is_server_data_changed[1] = GameserverService::isClientDataVersionChanged(v11);
  v12 = ServiceBox::findService<GameserverService>();
  is_server_data_changed[2] = GameserverService::isResVersionChanged(v12);
  v13 = ServiceBox::findService<GameserverService>();
  is_crc_changed = GameserverService::isCrcVersionChanged(v13);
  v14 = ServiceBox::findService<GameserverService>();
  is_next_res_changed = GameserverService::isNextResVersionChanged(v14);
  if ( *(_WORD *)is_server_data_changed || is_server_data_changed[2] || is_crc_changed || is_next_res_changed )
  {
    if ( *(_WORD *)&is_server_data_changed[1] )
    {
      std::function<ForeachPolicy ()(Player &)>::function<PlayerMgr::onReloadConfig(void)::{lambda(Player &)#2},void,void>(
        &p_func,
        (PlayerMgr::onReloadConfig::<lambda(Player&)>_0)v7);
      PlayerMgr::foreachPlayer(this, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    }
    ClientVersionConfig::operator=(last_version_config, version_config);
    v15 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    SecurityUtils::getCrcVersionMap[abi:cxx11](&v27, &v15->security_config);
    std::map<unsigned int,std::set<std::string>>::operator=(last_crc_version_map, &v27);
    std::map<unsigned int,std::set<std::string>>::~map(&v27);
    v16 = ZTWN11ThreadLocal17work_thread_indexE();
    v17 = (_DWORD *)v16;
    if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) != 0 && (char)((v16 & 7) + 3) >= *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
      __asan_report_load4(v16);
    if ( !*v17 )
    {
      v18 = ServiceBox::findService<GameserverService>();
      GameserverService::sendVersionConfigSyncNotify(v18, 0);
      v19 = ServiceBox::findService<GameserverService>();
      GameserverService::reportVersionInfos(v19);
    }
  }
  PlayerMgr::refreshVersionStopConfig(this);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1069: range 00000000179B1144-00000000179B1194
ForeachPolicy __cdecl PlayerMgr::onReloadConfig(void)::{lambda(Player &)#1}::operator()(
        const PlayerMgr::onReloadConfig::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__closed_item_notify);
  return 0;
};

// Line 1094: range 00000000179B1196-00000000179B11B8
ForeachPolicy __cdecl PlayerMgr::onReloadConfig(void)::{lambda(Player &)#2}::operator()(
        const PlayerMgr::onReloadConfig::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  Player::onDataResVersionChange(player);
  return 0;
};

// Line 1116: range 00000000179B1744-00000000179B2071
void __cdecl PlayerMgr::refreshVersionStopConfig(PlayerMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  uint32_t *v4; // rax
  uint32_t *v5; // rdx
  uint32_t v6; // r15d
  uint32_t *v7; // rax
  uint32_t *v8; // rdx
  uint32_t v9; // r14d
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  const unsigned int *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const unsigned int *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v21; // rax
  _DWORD *v22; // rdx
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  char v26; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::shared_ptr<Player> *v32; // rax
  Player *v33; // rax
  Config *v34; // [rsp+10h] [rbp-1C0h]
  bool v35; // [rsp+10h] [rbp-1C0h]
  std::allocator<char> __a; // [rsp+27h] [rbp-1A9h] BYREF
  std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::iterator __for_begin; // [rsp+28h] [rbp-1A8h] BYREF
  std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::iterator __for_end; // [rsp+30h] [rbp-1A0h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+38h] [rbp-198h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+40h] [rbp-190h] BYREF
  std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>> *__for_range; // [rsp+48h] [rbp-188h]
  std::vector<std::shared_ptr<Player>> *__for_range_1; // [rsp+50h] [rbp-180h]
  std::shared_ptr<Player> *player_ptr; // [rsp+58h] [rbp-178h]
  const std::pair<const std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int> > *v44; // [rsp+60h] [rbp-170h]
  std::tuple_element<0,const std::pair<const std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int> > >::type *version_key; // [rsp+68h] [rbp-168h]
  std::tuple_element<1,const std::pair<const std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int> > >::type *uid_set; // [rsp+70h] [rbp-160h]
  const std::set<unsigned int> *__for_range_0; // [rsp+78h] [rbp-158h]
  std::shared_ptr<Config> v48; // [rsp+80h] [rbp-150h] BYREF
  std::shared_ptr<Config> v49; // [rsp+90h] [rbp-140h] BYREF
  std::string remote_ip; // [rsp+A0h] [rbp-130h] BYREF
  char v51[272]; // [rsp+C0h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v51;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 8 uid:1126 64 16 15 player_ptr:1129 96 24 26 disconnect_player_vec:1117 160 32 14 client_ip:1134";
  *(_QWORD *)(v1 + 16) = PlayerMgr::refreshVersionStopConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -234881024;
  v3[536862724] = -218959118;
  v3[536862726] = -202116109;
  std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 96));
  __for_range = &this->version_online_uid_map_;
  __for_begin._M_node = std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::begin(&this->version_online_uid_map_)._M_node;
  __for_end._M_node = std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::end(&this->version_online_uid_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v44 = std::_Rb_tree_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,std::set<unsigned int>>>::operator*(&__for_begin);
    version_key = std::get<0ul,std::tuple<std::string,unsigned int,unsigned int> const,std::set<unsigned int>>(v44);
    uid_set = (std::tuple_element<1,const std::pair<const std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int> > >::type *)std::get<1ul,std::tuple<std::string,unsigned int,unsigned int> const,std::set<unsigned int>>(v44);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v49);
    v34 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&remote_ip, byte_261E1600, &__a);
    v4 = (uint32_t *)std::get<2ul,std::string,unsigned int,unsigned int>(version_key);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v6 = *v5;
    v7 = (uint32_t *)std::get<1ul,std::string,unsigned int,unsigned int>(version_key);
    v8 = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    v10 = std::get<0ul,std::string,unsigned int,unsigned int>(version_key);
    LOBYTE(v9) = !Config::isStopVersionConfig(v34, v10, v9, v6, &remote_ip);
    std::string::~string(&remote_ip);
    std::allocator<char>::~allocator(&__a);
    std::shared_ptr<Config>::~shared_ptr(&v49);
    if ( !(_BYTE)v9 )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&remote_ip,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/player_mgr.cpp",
        "refreshVersionStopConfig",
        1124);
      v11 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
              (common::milog::MiLogStream *const)&remote_ip,
              (const char (*)[14])"stop version:");
      v12 = std::get<0ul,std::string,unsigned int,unsigned int>(version_key);
      v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
      v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])",");
      v15 = std::get<1ul,std::string,unsigned int,unsigned int>(version_key);
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, v15);
      v17 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v16, (const char (*)[2])",");
      v18 = std::get<2ul,std::string,unsigned int,unsigned int>(version_key);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, v18);
      v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" player count:");
      __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::set<unsigned int>::size(uid_set);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
        v20,
        (const unsigned __int64 *)&__for_end_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&remote_ip);
      __for_range_0 = uid_set;
      __for_begin_0._M_node = std::set<unsigned int>::begin(uid_set)._M_node;
      __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v21 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
        v22 = v21;
        if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v21);
        }
        *(_DWORD *)(v1 + 48) = *v22;
        PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v1 + 64), &this->online_player_map_, *(_DWORD *)(v1 + 48));
        if ( !std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 64)) )
        {
          v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
          if ( Player::isConnected(v23) )
          {
            v25 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
            Player::getPlayerClientIp[abi:cxx11]((std::string *)(v1 + 160), v25);
            v26 = 0;
            ServiceBox::findService<GameserverService>();
            GameserverService::getConfig((GameserverService *const)&v48);
            v27 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v48);
            v35 = 1;
            if ( !DbDeployConfigMgr::isLoginWhiteIp(
                    &v27->design_config.db_config_mgr.db_deploy_config_mgr,
                    (const std::string *)(v1 + 160)) )
            {
              ServiceBox::findService<GameserverService>();
              GameserverService::getConfig((GameserverService *const)&v49);
              v26 = 1;
              v28 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v49);
              if ( !data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
                      &v28->design_config.db_config_mgr.db_local_config_mgr.stop_server_login_white_ip_config_mgr,
                      (const std::string *)(v1 + 160)) )
                v35 = 0;
            }
            if ( v26 )
              std::shared_ptr<Config>::~shared_ptr(&v49);
            std::shared_ptr<Config>::~shared_ptr(&v48);
            if ( v35 )
            {
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)&remote_ip,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/player/player_mgr.cpp",
                "refreshVersionStopConfig",
                1137);
              v29 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                      (common::milog::MiLogStream *const)&remote_ip,
                      (const char (*)[25])"is login white ip, uid: ");
              v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v29,
                      (const unsigned int *)(v1 + 48));
              v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                      v30,
                      (const char (*)[12])" client_ip:");
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, (const std::string *)(v1 + 160));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&remote_ip);
            }
            else
            {
              v32 = std::move<std::shared_ptr<Player> &>((std::shared_ptr<Player> *)(v1 + 64));
              std::vector<std::shared_ptr<Player>>::emplace_back<std::shared_ptr<Player>>(
                (std::vector<std::shared_ptr<Player>> *const)(v1 + 96),
                v32,
                v32);
            }
            std::string::~string((void *)(v1 + 160));
          }
        }
        std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 64));
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,std::set<unsigned int>>>::operator++(&__for_begin);
  }
  __for_range_1 = (std::vector<std::shared_ptr<Player>> *)(v1 + 96);
  __for_begin_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v1 + 96))._M_current;
  __for_end_0._M_node = (std::_Rb_tree_const_iterator<unsigned int>::_Base_ptr)std::vector<std::shared_ptr<Player>>::end(__for_range_1)._M_current;
  while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_begin_0,
            (const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *)&__for_end_0) )
  {
    player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*((const __gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin_0);
    v33 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
    Player::disconnectSession(v33, 6u);
    __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++((__gnu_cxx::__normal_iterator<std::shared_ptr<Player>*,std::vector<std::shared_ptr<Player>> > *const)&__for_begin_0);
  }
  std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v1 + 96));
  if ( v51 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1151: range 00000000179B2072-00000000179B2393
void __cdecl PlayerMgr::addPlayerVersion(PlayerMgr *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const std::string *v5; // rax
  const std::string *v6; // r8
  unsigned int *v7; // r9
  std::set<unsigned int> *v8; // r14
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const Player *const playera; // [rsp+0h] [rbp-100h]
  unsigned int val; // [rsp+1Ch] [rbp-E4h] BYREF
  unsigned int v19; // [rsp+20h] [rbp-E0h] BYREF
  std::set<unsigned int>::value_type __x; // [rsp+24h] [rbp-DCh] BYREF
  const proto::PlayerLoginReq *login_req; // [rsp+28h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+30h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 40 16 version_key:1153";
  *(_QWORD *)(v2 + 16) = PlayerMgr::addPlayerVersion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  login_req = Player::getSessionLoginReq(player);
  __x = proto::PlayerLoginReq::sub_channel_id(login_req);
  v19 = proto::PlayerLoginReq::channel_id(login_req);
  v5 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
  std::make_tuple<std::string const&,unsigned int,unsigned int>(
    (std::tuple<std::string,unsigned int,unsigned int> *)(v2 + 48),
    v5,
    &v19,
    &__x,
    v6,
    v7,
    (unsigned int *)player);
  v8 = std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::operator[](
         &this->version_online_uid_map_,
         (const std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::key_type *)(v2 + 48));
  __x = Player::getUid(playera);
  std::set<unsigned int>::insert(v8, &__x);
  common::milog::MiLogStream::create(
    &v22,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/player_mgr.cpp",
    "addPlayerVersion",
    1156);
  v9 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
  val = Player::getUid(playera);
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])" ");
  v12 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
  v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
  v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])",");
  v19 = proto::PlayerLoginReq::channel_id(login_req);
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v19);
  v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])",");
  __x = proto::PlayerLoginReq::sub_channel_id(login_req);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &__x);
  common::milog::MiLogStream::~MiLogStream(&v22);
  std::tuple<std::string,unsigned int,unsigned int>::~tuple((std::tuple<std::string,unsigned int,unsigned int> *const)(v2 + 48));
  if ( v23 == (char *)v2 )
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

// Line 1160: range 00000000179B2394-00000000179B2860
void __cdecl PlayerMgr::erasePlayerVersion(PlayerMgr *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  const std::string *v5; // rax
  const std::string *v6; // r8
  unsigned int *v7; // r9
  std::set<unsigned int> *p_second; // r14
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const std::string *v17; // rax
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__tuple_element_t_156 *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__tuple_element_t_21 *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__tuple_element_t_14 *v27; // rax
  Player *playera; // [rsp+0h] [rbp-120h]
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  unsigned int v30; // [rsp+18h] [rbp-108h] BYREF
  std::set<unsigned int>::key_type __x; // [rsp+1Ch] [rbp-104h] BYREF
  std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int> > >::_Self __y; // [rsp+20h] [rbp-100h] BYREF
  const proto::PlayerLoginReq *login_req; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v34; // [rsp+30h] [rbp-F0h] BYREF
  char v35[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 8 9 iter:1163 80 40 16 version_key:1162";
  *(_QWORD *)(v2 + 16) = PlayerMgr::erasePlayerVersion;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862721] = -234881024;
  v4[536862722] = 62194;
  v4[536862723] = -218103808;
  v4[536862724] = -202116109;
  login_req = Player::getSessionLoginReq(player);
  __x = proto::PlayerLoginReq::sub_channel_id(login_req);
  v30 = proto::PlayerLoginReq::channel_id(login_req);
  v5 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
  std::make_tuple<std::string const&,unsigned int,unsigned int>(
    (std::tuple<std::string,unsigned int,unsigned int> *)(v2 + 80),
    v5,
    &v30,
    &__x,
    v6,
    v7,
    (unsigned int *)player);
  *(std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::iterator *)(v2 + 48) = std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::find(&this->version_online_uid_map_, (const std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::key_type *)(v2 + 80));
  __y._M_node = std::map<std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int>>::end(&this->version_online_uid_map_)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int> > >::_Self *)(v2 + 48),
         &__y) )
  {
    p_second = &std::_Rb_tree_iterator<std::pair<std::tuple<std::string,unsigned int,unsigned int> const,std::set<unsigned int>>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::tuple<std::string,unsigned int,unsigned int>,std::set<unsigned int> > > *const)(v2 + 48))->second;
    __x = Player::getUid(playera);
    std::set<unsigned int>::erase(p_second, &__x);
    common::milog::MiLogStream::create(
      &v34,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "erasePlayerVersion",
      1167);
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v34, (const char (*)[11])"erase uid:");
    val = Player::getUid(playera);
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    v11 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v10, (const char (*)[2])" ");
    v12 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
    v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
    v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])",");
    v30 = proto::PlayerLoginReq::channel_id(login_req);
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &v30);
    v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])",");
    __x = proto::PlayerLoginReq::sub_channel_id(login_req);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &__x);
    common::milog::MiLogStream::~MiLogStream(&v34);
  }
  else
  {
    v17 = proto::PlayerLoginReq::checksum_client_version[abi:cxx11](login_req);
    if ( (unsigned __int8)std::string::empty(v17) != 1 )
    {
      common::milog::MiLogStream::create(
        &v34,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/player_mgr.cpp",
        "erasePlayerVersion",
        1172);
      v18 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(&v34, (const char (*)[15])off_262687A0);
      __x = Player::getUid(playera);
      v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &__x);
      v20 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v19, (const char (*)[2])" ");
      v21 = std::get<0ul,std::string,unsigned int,unsigned int>((std::tuple<std::string,unsigned int,unsigned int> *)(v2 + 80));
      v22 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, v21);
      v23 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v22, (const char (*)[2])",");
      v24 = std::get<1ul,std::string,unsigned int,unsigned int>((std::tuple<std::string,unsigned int,unsigned int> *)(v2 + 80));
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, v24);
      v26 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v25, (const char (*)[2])",");
      v27 = std::get<2ul,std::string,unsigned int,unsigned int>((std::tuple<std::string,unsigned int,unsigned int> *)(v2 + 80));
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, v27);
      common::milog::MiLogStream::~MiLogStream(&v34);
    }
  }
  std::tuple<std::string,unsigned int,unsigned int>::~tuple((std::tuple<std::string,unsigned int,unsigned int> *const)(v2 + 80));
  if ( v35 == (char *)v2 )
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
};

// Line 1178: range 00000000179B28B4-00000000179B2D7A
void __cdecl PlayerMgr::checkAndNotifyNicknameAuditData(PlayerMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::less<unsigned int> __comp; // [rsp+12h] [rbp-14Eh] BYREF
  std::allocator<unsigned int> __a; // [rsp+13h] [rbp-14Dh] BYREF
  int val; // [rsp+14h] [rbp-14Ch] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+18h] [rbp-148h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-130h] BYREF
  char v14[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 10 timer:1182 80 32 11 notify:1184 144 48 24 cur_audit_param_set:1179";
  *(_QWORD *)(v1 + 16) = PlayerMgr::checkAndNotifyNicknameAuditData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 48));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  LODWORD(__l._M_array) = FeatureSwitchMgr::isNicknameAuditEnabled(&v4->feature_switch_mgr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__l._M_len);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len);
  HIDWORD(__l._M_array) = FeatureSwitchMgr::getMonthlySubmitNicknameLimit(&v5->feature_switch_mgr);
  std::allocator<unsigned int>::allocator(&__a);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)(v1 + 144),
    (std::initializer_list<unsigned int>)__PAIR128__(2LL, &__l),
    &__comp,
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__l._M_len);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 48));
  if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v1 + 144),
         &this->feature_switch_nickname_audit_param_set_) )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 48));
    std::set<unsigned int>::operator=(
      &this->feature_switch_nickname_audit_param_set_,
      (const std::set<unsigned int> *)(v1 + 144));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__l._M_len);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len);
    FeatureSwitchMgr::getNicknameAuditConfigNotify(
      (proto::NicknameAuditConfigNotify *)(v1 + 80),
      &v6->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__l._M_len);
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMgr::checkAndNotifyNicknameAuditData(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      (PlayerMgr::checkAndNotifyNicknameAuditData::<lambda(Player&)>)(v1 + 80));
    PlayerMgr::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "checkAndNotifyNicknameAuditData",
      1190);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[22])off_26268880);
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 48));
    v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, &val);
    common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v8, (const char (*)[5])off_262688C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    proto::NicknameAuditConfigNotify::~NicknameAuditConfigNotify((proto::NicknameAuditConfigNotify *const)(v1 + 80));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 48));
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1185: range 00000000179B2862-00000000179B28B2
ForeachPolicy __cdecl PlayerMgr::checkAndNotifyNicknameAuditData(void)::{lambda(Player &)#1}::operator()(
        const PlayerMgr::checkAndNotifyNicknameAuditData::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 1196: range 00000000179B2DCE-00000000179B3294
void __cdecl PlayerMgr::checkAndNotifySignatureAuditData(PlayerMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // r14
  common::milog::MiLogStream *v8; // rax
  std::less<unsigned int> __comp; // [rsp+12h] [rbp-14Eh] BYREF
  std::allocator<unsigned int> __a; // [rsp+13h] [rbp-14Dh] BYREF
  int val; // [rsp+14h] [rbp-14Ch] BYREF
  std::initializer_list<unsigned int> __l; // [rsp+18h] [rbp-148h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+30h] [rbp-130h] BYREF
  char v14[272]; // [rsp+50h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 48 16 10 timer:1200 80 32 11 notify:1202 144 48 24 cur_audit_param_set:1197";
  *(_QWORD *)(v1 + 16) = PlayerMgr::checkAndNotifySignatureAuditData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862723] = -219021312;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 48));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
  LODWORD(__l._M_array) = FeatureSwitchMgr::isSignatureAuditEnabled(&v4->feature_switch_mgr);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&__l._M_len);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len);
  HIDWORD(__l._M_array) = FeatureSwitchMgr::getMonthlySubmitSignatureLimit(&v5->feature_switch_mgr);
  std::allocator<unsigned int>::allocator(&__a);
  std::set<unsigned int>::set(
    (std::set<unsigned int> *const)(v1 + 144),
    (std::initializer_list<unsigned int>)__PAIR128__(2LL, &__l),
    &__comp,
    &__a);
  std::allocator<unsigned int>::~allocator(&__a);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__l._M_len);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 48));
  if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v1 + 144),
         &this->feature_switch_signature_audit_param_set_) )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 48));
    std::set<unsigned int>::operator=(
      &this->feature_switch_signature_audit_param_set_,
      (const std::set<unsigned int> *)(v1 + 144));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&__l._M_len);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&__l._M_len);
    FeatureSwitchMgr::getSignatureAuditConfigNotify(
      (proto::SignatureAuditConfigNotify *)(v1 + 80),
      &v6->feature_switch_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__l._M_len);
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMgr::checkAndNotifySignatureAuditData(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      (PlayerMgr::checkAndNotifySignatureAuditData::<lambda(Player&)>)(v1 + 80));
    PlayerMgr::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "checkAndNotifySignatureAuditData",
      1208);
    v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[22])off_26268880);
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 48));
    v8 = common::milog::MiLogStream::operator<<<int,(int *)0>(v7, &val);
    common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v8, (const char (*)[5])off_262688C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    proto::SignatureAuditConfigNotify::~SignatureAuditConfigNotify((proto::SignatureAuditConfigNotify *const)(v1 + 80));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 48));
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1203: range 00000000179B2D7C-00000000179B2DCC
ForeachPolicy __cdecl PlayerMgr::checkAndNotifySignatureAuditData(void)::{lambda(Player &)#1}::operator()(
        const PlayerMgr::checkAndNotifySignatureAuditData::<lambda(Player&)> *const __closure,
        Player *player)
{
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  return 0;
};

// Line 1213: range 00000000179B332E-00000000179B36E5
void __cdecl PlayerMgr::checkAndNotifyGCGBanCard(PlayerMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  int val; // [rsp+1Ch] [rbp-134h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+20h] [rbp-130h] BYREF
  char v10[272]; // [rsp+40h] [rbp-110h] BYREF

  v1 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 10 timer:1217 64 40 11 notify:1219 144 48 17 ban_card_set:1214";
  *(_QWORD *)(v1 + 16) = PlayerMgr::checkAndNotifyGCGBanCard;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862723] = -218959360;
  v3[536862724] = 62194;
  v3[536862726] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 32));
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
  FeatureSwitchMgr::getGCGBanCardSet((std::set<unsigned int> *)(v1 + 144), &v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
  if ( std::operator!=<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>>(
         (const std::set<unsigned int> *)(v1 + 144),
         &this->feature_switch_ban_card_set_) )
  {
    common::tools::TimeUtils::Timer::Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
    std::set<unsigned int>::operator=(&this->feature_switch_ban_card_set_, (const std::set<unsigned int> *)(v1 + 144));
    proto::GCGDSBanCardNotify::GCGDSBanCardNotify((proto::GCGDSBanCardNotify *const)(v1 + 64));
    v5 = proto::GCGDSBanCardNotify::mutable_card_list((proto::GCGDSBanCardNotify *const)(v1 + 64));
    common::tools::MiscUtils::setToRepeated<std::set<unsigned int>,unsigned int>(
      (const std::set<unsigned int> *)(v1 + 144),
      v5);
    std::function<ForeachPolicy ()(Player &)>::function<PlayerMgr::checkAndNotifyGCGBanCard(void)::{lambda(Player &)#1},void,void>(
      &p_func,
      (PlayerMgr::checkAndNotifyGCGBanCard::<lambda(Player&)>)__PAIR128__(v1 + 144, v1 + 64));
    PlayerMgr::foreachPlayer(this, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/player_mgr.cpp",
      "checkAndNotifyGCGBanCard",
      1227);
    v6 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[22])off_26268A60);
    val = common::tools::TimeUtils::Timer::time((const common::tools::TimeUtils::Timer *const)(v1 + 32));
    v7 = common::milog::MiLogStream::operator<<<int,(int *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(v7, (const char (*)[5])off_262688C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    proto::GCGDSBanCardNotify::~GCGDSBanCardNotify((proto::GCGDSBanCardNotify *const)(v1 + 64));
    common::tools::TimeUtils::Timer::~Timer((common::tools::TimeUtils::Timer *const)(v1 + 32));
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 144));
  if ( v10 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 1221: range 00000000179B3296-00000000179B332D
ForeachPolicy __cdecl PlayerMgr::checkAndNotifyGCGBanCard(void)::{lambda(Player &)#1}::operator()(
        const PlayerMgr::checkAndNotifyGCGBanCard::<lambda(Player&)> *const __closure,
        Player *player)
{
  PlayerGCGComp *GCGComp; // rcx

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(player, __closure->__notify);
  GCGComp = Player::getGCGComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__ban_card_set >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  PlayerGCGComp::onBanCardChange(GCGComp, __closure->__ban_card_set);
  return 0;
};

// Line 1234: range 00000000179B36E6-00000000179B375B
bool __cdecl PlayerMgr::isCanKickPlayerByPacketCostTime(
        PlayerMgr *const this,
        uint32_t now,
        uint32_t thread_kick_interval)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->last_kick_player_time_by_packet_cost_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_kick_player_time_by_packet_cost_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_kick_player_time_by_packet_cost_time_);
  }
  if ( now < this->last_kick_player_time_by_packet_cost_time_ + thread_kick_interval )
    return 0;
  this->last_kick_player_time_by_packet_cost_time_ = now;
  return 1;
};
