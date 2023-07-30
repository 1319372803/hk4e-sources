// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/mp_play/base_mp_play.cpp

// Line 51: range 0000000016CB0EBE-0000000016CB14BC
int32_t __cdecl BaseMpPlay::fromBin(BaseMpPlay *const this, const proto::MpPlayBin *mp_play_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint32_t PlayType; // r14d
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  uint32_t v10; // ecx
  char v11; // dl
  __int64 v12; // rdx
  bool is_close; // cl
  char v14; // dl
  __int64 v15; // rdx
  google::protobuf::uint32 v16; // r14d
  char *v17; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rax
  google::protobuf::uint32 *v19; // rdx
  char v20; // cl
  int v21; // eax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  bool v23; // r12
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  const proto::MpPlayBin *mp_play_bina; // [rsp+10h] [rbp-F0h]
  google::protobuf::RepeatedPtrField<proto::MpPlayBin_UidWorldLevelBin>::const_iterator __for_begin; // [rsp+28h] [rbp-D8h] BYREF
  google::protobuf::RepeatedPtrField<proto::MpPlayBin_UidWorldLevelBin>::const_iterator __for_end; // [rsp+30h] [rbp-D0h] BYREF
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-C8h]
  const google::protobuf::RepeatedPtrField<proto::MpPlayBin_UidWorldLevelBin> *__for_range; // [rsp+40h] [rbp-C0h]
  const google::protobuf::RepeatedField<unsigned int> *__for_range_0; // [rsp+48h] [rbp-B8h]
  google::protobuf::RepeatedField<unsigned int>::const_iterator __for_end_0; // [rsp+50h] [rbp-B0h]
  const proto::MpPlayBin_UidWorldLevelBin *uid_world_level_bin; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v34; // [rsp+60h] [rbp-A0h] BYREF
  common::milog::MiLogStream v35; // [rsp+70h] [rbp-90h] BYREF
  char v36[112]; // [rsp+90h] [rbp-70h] BYREF

  mp_play_bina = mp_play_bin;
  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 uid:69";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  PlayType = BaseMpPlay::getPlayType(this);
  if ( PlayType == proto::MpPlayBin::play_type(mp_play_bin) )
  {
    v10 = proto::MpPlayBin::entry_id(mp_play_bin);
    v11 = *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000);
    LOBYTE(mp_play_bin) = v11 != 0;
    v12 = (v11 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v11);
    if ( (_BYTE)v12 )
      __asan_report_store4(&this->entry_id_, mp_play_bin, v12);
    this->entry_id_ = v10;
    is_close = proto::MpPlayBin::is_close(mp_play_bina);
    v14 = *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000);
    LOBYTE(mp_play_bin) = v14 != 0;
    v15 = (v14 != 0) & (unsigned __int8)((((unsigned __int8)this + 44) & 7) >= v14);
    if ( (_BYTE)v15 )
      __asan_report_store1(&this->is_close_, mp_play_bin, v15);
    this->is_close_ = is_close;
    std::map<unsigned int,unsigned int>::clear(&this->uid_world_level_map_);
    __for_range = proto::MpPlayBin::uid_world_level_list(mp_play_bina);
    __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::MpPlayBin_UidWorldLevelBin>::begin(__for_range).it_;
    __for_end.it_ = google::protobuf::RepeatedPtrField<proto::MpPlayBin_UidWorldLevelBin>::end(__for_range).it_;
    while ( google::protobuf::internal::RepeatedPtrIterator<proto::MpPlayBin_UidWorldLevelBin const>::operator!=(
              &__for_begin,
              &__for_end) )
    {
      uid_world_level_bin = google::protobuf::internal::RepeatedPtrIterator<proto::MpPlayBin_UidWorldLevelBin const>::operator*(&__for_begin);
      v16 = proto::MpPlayBin_UidWorldLevelBin::world_level(uid_world_level_bin);
      *(_DWORD *)(v2 + 32) = proto::MpPlayBin_UidWorldLevelBin::uid(uid_world_level_bin);
      v17 = (char *)(v2 + 32);
      v18 = std::map<unsigned int,unsigned int>::operator[](
              &this->uid_world_level_map_,
              (std::map<unsigned int,unsigned int>::key_type *)(v2 + 32));
      v19 = v18;
      v20 = *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000);
      if ( v20 != 0 && (char)(((unsigned __int8)v18 & 7) + 3) >= v20 )
      {
        LOBYTE(v17) = v20 != 0;
        __asan_report_store4(v18, v17, v18);
      }
      *v19 = v16;
      google::protobuf::internal::RepeatedPtrIterator<proto::MpPlayBin_UidWorldLevelBin const>::operator++(&__for_begin);
    }
    std::vector<unsigned int>::clear(&this->reward_remain_uid_vec_);
    v21 = proto::MpPlayBin::reward_remain_uid_list_size(mp_play_bina);
    std::vector<unsigned int>::reserve(&this->reward_remain_uid_vec_, v21);
    __for_range_0 = proto::MpPlayBin::reward_remain_uid_list(mp_play_bina);
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
      std::vector<unsigned int>::push_back(
        &this->reward_remain_uid_vec_,
        (const std::vector<unsigned int>::value_type *)(v2 + 32));
      ++__for_begin_0;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v34);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entry_id_);
    }
    v23 = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_) == 0LL;
    std::shared_ptr<Config>::~shared_ptr(&v34);
    if ( v23 )
    {
      common::milog::MiLogStream::create(
        &v35,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "fromBin",
        76);
      v24 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v35,
              (const char (*)[28])"findMpPlayGroupExcelConfig ");
      v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->entry_id_);
      common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v25, (const char (*)[7])" fails");
      common::milog::MiLogStream::~MiLogStream(&v35);
      result = -1;
    }
    else
    {
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/mp_play/base_mp_play.cpp",
      "fromBin",
      55);
    v6 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v35, (const char (*)[17])off_25F27080);
    *(_DWORD *)(v2 + 32) = proto::MpPlayBin::play_type(mp_play_bin);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" play_type:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->play_type_);
    common::milog::MiLogStream::~MiLogStream(&v35);
    result = -1;
  }
  if ( v36 == (char *)v2 )
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

// Line 83: range 0000000016CB14BE-0000000016CB17E3
int32_t __cdecl BaseMpPlay::toBin(const BaseMpPlay *const this, proto::MpPlayBin *mp_play_bin)
{
  unsigned int *v2; // rax
  google::protobuf::uint32 *v3; // rdx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-30h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-28h]
  const std::pair<unsigned int const,unsigned int> *v9; // [rsp+40h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *uid; // [rsp+48h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *world_level; // [rsp+50h] [rbp-10h]
  proto::MpPlayBin::UidWorldLevelBin *uid_world_level_bin; // [rsp+58h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  proto::MpPlayBin::set_mp_play_id(mp_play_bin, this->play_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_id_);
  }
  proto::MpPlayBin::set_entry_id(mp_play_bin, this->entry_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_type_);
  }
  proto::MpPlayBin::set_play_type(mp_play_bin, this->play_type_);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_close_);
  }
  proto::MpPlayBin::set_is_close(mp_play_bin, this->is_close_);
  __for_range = &this->uid_world_level_map_;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&this->uid_world_level_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&this->uid_world_level_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    uid = std::get<0ul,unsigned int const,unsigned int>(v9);
    world_level = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v9);
    uid_world_level_bin = proto::MpPlayBin::add_uid_world_level_list(mp_play_bin);
    if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(uid);
    }
    proto::MpPlayBin_UidWorldLevelBin::set_uid(uid_world_level_bin, *uid);
    if ( *(_BYTE *)(((unsigned __int64)world_level >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)world_level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)world_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(world_level);
    }
    proto::MpPlayBin_UidWorldLevelBin::set_world_level(uid_world_level_bin, *world_level);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  __for_range_0 = &this->reward_remain_uid_vec_;
  __for_begin._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::begin(&this->reward_remain_uid_vec_)._M_current;
  __for_end._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(__for_range_0)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
  {
    v2 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    proto::MpPlayBin::add_reward_remain_uid_list(mp_play_bin, *v3);
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
  }
  return 0;
};

// Line 103: range 0000000016CB17E4-0000000016CB1BAE
int32_t __cdecl BaseMpPlay::open(BaseMpPlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 play_id; // rsi
  __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rbx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  std::shared_ptr<Config> v18; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v19; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_close_);
  }
  if ( this->is_close_ )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "open",
      106);
    v1 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v19, (const char (*)[9])"play_id:");
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->play_id_);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2, (const char (*)[16])"is alread close");
    common::milog::MiLogStream::~MiLogStream(&v19);
    return -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v18);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    play_id = this->play_id_;
    v5 = MpPlayExcelConfigMgr::randomOneMpConfigId(p_mp_play_config_mgr, play_id);
    v6 = *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000);
    LOBYTE(play_id) = v6 != 0;
    v8 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 36) & 7) + 3) >= v6);
    if ( (_BYTE)v8 )
      __asan_report_store4(&this->entry_id_, play_id, v8);
    this->entry_id_ = v5;
    std::shared_ptr<Config>::~shared_ptr(&v18);
    if ( BaseMpPlay::loadDynamicGroup(this) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "open",
        114);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v19,
             (const char (*)[34])"loadDynamicGroup fails, entry_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->entry_id_);
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v10, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/mp_play/base_mp_play.cpp",
        "open",
        118);
      v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v19, (const char (*)[9])"play_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->play_id_);
      v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" entry_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->entry_id_);
      v16 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v15, (const char (*)[12])" init. uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      return 0;
    }
  }
};

// Line 123: range 0000000016CB1BB0-0000000016CB2398
int32_t __cdecl BaseMpPlay::close(BaseMpPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  __int64 v7; // rsi
  __int64 v8; // rdx
  PlayerMatchComp *MatchComp; // rax
  uint32_t MatchMpPlayId; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  PlayerMatchComp *v14; // rax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  Scene *v17; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v19; // rdx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-9Ch] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-98h]
  common::milog::MiLogStream v26; // [rsp+20h] [rbp-90h] BYREF
  char v27[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 scene_ptr:151";
  *(_QWORD *)(v1 + 16) = BaseMpPlay::close;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_close_);
  }
  if ( this->is_close_ )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "close",
      126);
    v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v26, (const char (*)[9])"play_id:");
    v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->play_id_);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v5, (const char (*)[12])off_25F27340);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v6 = 0;
  }
  else
  {
    v7 = ((_BYTE)this + 44) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_close_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store1(&this->is_close_, v7, v8);
    this->is_close_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    MatchComp = Player::getMatchComp(this->player_);
    MatchMpPlayId = PlayerMatchComp::getMatchMpPlayId(MatchComp);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    if ( MatchMpPlayId == this->play_id_ )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/player/mp_play/base_mp_play.cpp",
        "close",
        133);
      v11 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v26,
              (const char (*)[38])"cancelMatch because close mp_play_id:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->play_id_);
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v26);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v14 = Player::getMatchComp(this->player_);
      PlayerMatchComp::cancelMatch(v14);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    if ( this->state_ == prepare )
      BaseMpPlay::interruptPrepareState(this);
    BaseMpPlay::clear(this);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v1 + 32));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 32));
    if ( entry_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
      if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "close",
          154);
        common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
          &v26,
          (const char (*)[24])"getMainWorldScene fails");
        common::milog::MiLogStream::~MiLogStream(&v26);
        v6 = -1;
      }
      else
      {
        v17 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        BlockGroupComp = Scene::getBlockGroupComp(v17);
        if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v19 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 13);
        if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        (*(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, __int64))v19)(
          BlockGroupComp,
          &entry_config_ptr->group_list,
          1LL);
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/mp_play/base_mp_play.cpp",
          "close",
          159);
        v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v26, (const char (*)[9])"play_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->play_id_);
        v22 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v21, (const char (*)[13])" close. uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v26);
        v6 = 0;
      }
      std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mp_play/base_mp_play.cpp",
        "close",
        148);
      v16 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              &v26,
              (const char (*)[34])"findMpPlayGroupExcelConfig fails ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v6 = -1;
    }
  }
  result = v6;
  if ( v27 == (char *)v1 )
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

// Line 164: range 0000000016CB239A-0000000016CB250E
void __cdecl BaseMpPlay::onLogin(BaseMpPlay *const this)
{
  common::milog::MiLogStream v2; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( !Player::isRelogin(this->player_) )
  {
    if ( BaseMpPlay::loadDynamicGroup(this) )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "onLogin",
        170);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(&v2, (const char (*)[23])"loadDynamicGroup fails");
      common::milog::MiLogStream::~MiLogStream(&v2);
    }
    if ( !std::vector<unsigned int>::empty(&this->reward_remain_uid_vec_) && BaseMpPlay::createRewardGadget(this) )
    {
      common::milog::MiLogStream::create(
        &v2,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "onLogin",
        176);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        &v2,
        (const char (*)[25])"createRewardGadget fails");
      common::milog::MiLogStream::~MiLogStream(&v2);
    }
  }
};

// Line 182: range 0000000016CB2510-0000000016CB2AC9
int32_t __cdecl BaseMpPlay::loadDynamicGroup(BaseMpPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  int32_t v6; // r14d
  common::milog::MiLogStream *v7; // r14
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  Scene *v14; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  unsigned __int64 v16; // rdx
  void (__fastcall *v17)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD); // r8
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 15 world_level:195 64 16 13 scene_ptr:189";
  *(_QWORD *)(v1 + 16) = BaseMpPlay::loadDynamicGroup;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 64));
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64))->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 64));
  if ( entry_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 64));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "loadDynamicGroup",
        192);
      v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             &v21,
             (const char (*)[31])"getMainWorldScene fails, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v6 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      *(_DWORD *)(v1 + 48) = PlayerBasicComp::getWorldLevel(BasicComp);
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mp_play/base_mp_play.cpp",
        "loadDynamicGroup",
        196);
      v9 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v21, (const char (*)[17])"BaseMpPlay uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" ,world_level: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v1 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v12, (const char (*)[15])" , revise_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &entry_config_ptr->revise_id);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v14 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      BlockGroupComp = Scene::getBlockGroupComp(v14);
      if ( *(_BYTE *)(((unsigned __int64)BlockGroupComp >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v16 = (unsigned __int64)(BlockGroupComp->_vptr_SceneCompBase + 12);
      if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v17 = *(void (__fastcall **)(SceneBlockGroupComp *, std::vector<unsigned int> *, _QWORD, _QWORD))v16;
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->revise_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->revise_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->revise_id);
      }
      v17(BlockGroupComp, &entry_config_ptr->group_list, 0LL, entry_config_ptr->revise_id);
      v6 = 0;
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/mp_play/base_mp_play.cpp",
      "loadDynamicGroup",
      186);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v21,
           (const char (*)[34])"findMpPlayGroupExcelConfig fails ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v6 = -1;
  }
  result = v6;
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

// Line 202: range 0000000016CB2ACA-0000000016CB2B0B
void __cdecl BaseMpPlay::onLogout(BaseMpPlay *const this)
{
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
};

// Line 211: range 0000000016CB2B0C-0000000016CB3248
int32_t __cdecl BaseMpPlay::findBornScenePosRot(
        BaseMpPlay *const this,
        uint32_t *born_scene_id,
        Vector3 *born_pos,
        Vector3 *born_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  int32_t result; // eax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  __int64 born_config_id; // rsi
  common::milog::MiLogStream *v16; // rax
  uint32_t v17; // ecx
  char v18; // dl
  __int64 v19; // rdx
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-A8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-A0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v26; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v27; // [rsp+50h] [rbp-80h] BYREF
  char v28[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 17 main_scene_id:212";
  *(_QWORD *)(v4 + 16) = BaseMpPlay::findBornScenePosRot;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  *(_DWORD *)(v4 + 32) = TxtConfigMgr::getDefaultWorldMainSceneId(&v7->design_config.txt_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( entry_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config_ptr->born_group_id);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, entry_config_ptr->born_group_id);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)entry_config_ptr - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->born_config_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&entry_config_ptr->born_config_id);
      }
      born_config_id = entry_config_ptr->born_config_id;
      point_script_config_ptr = GroupScriptConfig::findPointConfig(group_script_config_ptr, born_config_id);
      if ( point_script_config_ptr )
      {
        v17 = *(_DWORD *)(v4 + 32);
        v18 = *(_BYTE *)(((unsigned __int64)born_scene_id >> 3) + 0x7FFF8000);
        LOBYTE(born_config_id) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)(((unsigned __int8)born_scene_id & 7) + 3) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store4(born_scene_id, born_config_id, v19);
        *born_scene_id = v17;
        if ( ((unsigned __int8)born_pos & 7) >= *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)born_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)born_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_pos->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_store_n(born_pos, 12LL);
        }
        if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                              + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
        }
        *(_QWORD *)&born_pos->x = *(_QWORD *)&point_script_config_ptr->pos.x;
        born_pos->z = point_script_config_ptr->pos.z;
        if ( ((unsigned __int8)born_rot & 7) >= *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)born_rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)born_rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&born_rot->z + 3) >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_store_n(born_rot, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
        }
        *(_QWORD *)&born_rot->x = *(_QWORD *)&point_script_config_ptr->rot.x;
        born_rot->z = point_script_config_ptr->rot.z;
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "findBornScenePosRot",
          228);
        v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v27,
                (const char (*)[24])"findPointConfig fails, ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &entry_config_ptr->born_config_id);
        common::milog::MiLogStream::~MiLogStream(&v27);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "findBornScenePosRot",
        222);
      v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v27,
              (const char (*)[30])"findGroupScriptConfig fails, ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 32));
      v14 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v13, (const char (*)[2])":");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &entry_config_ptr->born_group_id);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "findBornScenePosRot",
      216);
    v9 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v27,
           (const char (*)[45])"findMpPlayGroupExcelConfig fails, config_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
  }
  if ( v28 == (char *)v4 )
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

// Line 240: range 0000000016CB324A-0000000016CB3A21
__int64 __fastcall BaseMpPlay::findRebornPosRot(
        BaseMpPlay *const this,
        uint32_t scene_id,
        unsigned __int64 reborn_pos,
        unsigned __int64 reborn_rot)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  char v8; // r15
  __int64 result; // rax
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+38h] [rbp-B8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+40h] [rbp-B0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v24; // [rsp+50h] [rbp-A0h] BYREF
  common::milog::MiLogStream v25; // [rsp+60h] [rbp-90h] BYREF
  char v26[112]; // [rsp+80h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 scene_id:239";
  *(_QWORD *)(v4 + 16) = BaseMpPlay::findRebornPosRot;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = scene_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
  if ( TxtConfigMgr::getDefaultWorldMainSceneId(&v7->design_config.txt_config_mgr) != *(_DWORD *)(v4 + 32) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == battle )
    v8 = 0;
  else
LABEL_8:
    v8 = 1;
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( entry_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_group_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_group_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->reborn_group_id);
      }
      group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, entry_config_ptr->reborn_group_id);
      std::shared_ptr<Config>::~shared_ptr(&v24);
      if ( group_script_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)entry_config_ptr - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reborn_config_id >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&entry_config_ptr->reborn_config_id);
        }
        point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                    group_script_config_ptr,
                                    entry_config_ptr->reborn_config_id);
        if ( point_script_config_ptr )
        {
          if ( (char)(reborn_pos & 7) >= *(_BYTE *)((reborn_pos >> 3) + 0x7FFF8000)
            && *(_BYTE *)((reborn_pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((reborn_pos + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((reborn_pos + 11) & 7) >= *(_BYTE *)(((reborn_pos + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(reborn_pos, 12LL);
          }
          if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                                + 0x7FFF8000)
            && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
          }
          *(_QWORD *)reborn_pos = *(_QWORD *)&point_script_config_ptr->pos.x;
          *(float *)(reborn_pos + 8) = point_script_config_ptr->pos.z;
          if ( (char)(reborn_rot & 7) >= *(_BYTE *)((reborn_rot >> 3) + 0x7FFF8000)
            && *(_BYTE *)((reborn_rot >> 3) + 0x7FFF8000) != 0
            || *(_BYTE *)(((reborn_rot + 11) >> 3) + 0x7FFF8000) != 0
            && (char)((reborn_rot + 11) & 7) >= *(_BYTE *)(((reborn_rot + 11) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(reborn_rot, 12LL);
          }
          if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                   + 3) >> 3)
                                                                                 + 0x7FFF8000) )
          {
            __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
          }
          *(_QWORD *)reborn_rot = *(_QWORD *)&point_script_config_ptr->rot.x;
          *(float *)(reborn_rot + 8) = point_script_config_ptr->rot.z;
          result = 0LL;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mp_play/base_mp_play.cpp",
            "findRebornPosRot",
            260);
          v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v25,
                  (const char (*)[24])"findPointConfig fails, ");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  &entry_config_ptr->reborn_group_id);
          v18 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v17, (const char (*)[2])":");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v18,
            &entry_config_ptr->reborn_config_id);
          common::milog::MiLogStream::~MiLogStream(&v25);
          result = 0xFFFFFFFFLL;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v25,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "findRebornPosRot",
          254);
        v13 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v25,
                (const char (*)[29])"findGroupScriptConfig fails,");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v4 + 32));
        v15 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v14, (const char (*)[2])":");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &entry_config_ptr->reborn_group_id);
        common::milog::MiLogStream::~MiLogStream(&v25);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v25,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "findRebornPosRot",
        248);
      v11 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v25,
              (const char (*)[43])"findMpPlayGroupExcelConfig fails, play_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->play_id_);
      common::milog::MiLogStream::~MiLogStream(&v25);
      result = 0xFFFFFFFFLL;
    }
  }
  if ( v26 == (char *)v4 )
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

// Line 271: range 0000000016CB3A22-0000000016CB413D
int32_t __cdecl BaseMpPlay::findRewardPosRot(const BaseMpPlay *const this, Vector3 *pos, Vector3 *rot)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-A8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+30h] [rbp-A0h]
  const PointScriptConfig *point_script_config_ptr; // [rsp+38h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-80h] BYREF
  char v23[96]; // [rsp+70h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 scene_id:278";
  *(_QWORD *)(v3 + 16) = BaseMpPlay::findRewardPosRot;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( entry_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
    *(_DWORD *)(v3 + 32) = TxtConfigMgr::getDefaultWorldMainSceneId(&v9->design_config.txt_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v21);
    p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config_ptr->reward_group_id);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(p_lua_config_mgr, entry_config_ptr->reward_group_id);
    std::shared_ptr<Config>::~shared_ptr(&v21);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)entry_config_ptr - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->reward_config_id >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&entry_config_ptr->reward_config_id);
      }
      point_script_config_ptr = GroupScriptConfig::findPointConfig(
                                  group_script_config_ptr,
                                  entry_config_ptr->reward_config_id);
      if ( point_script_config_ptr )
      {
        if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(pos, 12LL);
        }
        if ( (((unsigned __int8)point_script_config_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3)
                                                                              + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&point_script_config_ptr->pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->pos.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->pos, 12LL);
        }
        *pos = point_script_config_ptr->pos;
        if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(rot, 12LL);
        }
        if ( *(char *)(((unsigned __int64)&point_script_config_ptr->rot >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)point_script_config_ptr + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&point_script_config_ptr->rot.z
                                                                                 + 3) >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load_n(&point_script_config_ptr->rot, 12LL);
        }
        *(_QWORD *)&rot->x = *(_QWORD *)&point_script_config_ptr->rot.x;
        rot->z = point_script_config_ptr->rot.z;
        result = 0;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "findRewardPosRot",
          288);
        v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                &v22,
                (const char (*)[24])"findPointConfig fails, ");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                &entry_config_ptr->reward_group_id);
        v16 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v15, (const char (*)[2])":");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &entry_config_ptr->reward_config_id);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = -1;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "findRewardPosRot",
        282);
      v11 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              &v22,
              (const char (*)[29])"findGroupScriptConfig fails,");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 32));
      v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])":");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &entry_config_ptr->reward_group_id);
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "findRewardPosRot",
      275);
    v7 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v22,
           (const char (*)[43])"findMpPlayGroupExcelConfig fails, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_id_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = -1;
  }
  if ( v23 == (char *)v3 )
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

// Line 299: range 0000000016CB413E-0000000016CB4329
int32_t __cdecl BaseMpPlay::findTargetPos(BaseMpPlay *const this, Vector3 *target_pos)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-58h]
  Vector3 v6; // [rsp+24h] [rbp-4Ch] BYREF
  std::shared_ptr<Config> v7; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v7);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v7);
  if ( entry_config_ptr )
  {
    Vector3::Vector3(&v6, &entry_config_ptr->target_pos_list);
    if ( ((unsigned __int8)target_pos & 7) >= *(_BYTE *)(((unsigned __int64)target_pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)target_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&target_pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)target_pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&target_pos->z + 3) >> 3)
                                                              + 0x7FFF8000) )
    {
      __asan_report_store_n(target_pos, 12LL);
    }
    *target_pos = v6;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "findTargetPos",
      303);
    v3 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           &v8,
           (const char (*)[43])"findMpPlayGroupExcelConfig fails, play_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->play_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 312: range 0000000016CB44DA-0000000016CB49F8
int32_t __cdecl BaseMpPlay::jumpMpPlay(BaseMpPlay *const this)
{
  std::weak_ptr<BaseMpPlay> *v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  int32_t v7; // r14d
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  PlayerUnixTimer *v9; // rax
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-C8h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-C4h] BYREF
  BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> __args_1; // [rsp+20h] [rbp-C0h] BYREF
  std::weak_ptr<BaseMpPlay> v14; // [rsp+30h] [rbp-B0h] BYREF
  std::shared_ptr<BaseMpPlay> __r; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v16; // [rsp+50h] [rbp-90h] BYREF
  char v17[112]; // [rsp+70h] [rbp-70h] BYREF

  v1 = (std::weak_ptr<BaseMpPlay> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = (std::weak_ptr<BaseMpPlay> *)v2;
  }
  v1->_M_ptr = (std::__weak_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)1102416563;
  v1->_M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)"1 32 16 15 mp_play_wtr:320";
  v1[1]._M_ptr = (std::__weak_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)BaseMpPlay::jumpMpPlay;
  v3 = (unsigned __int64)v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mp_play/base_mp_play.cpp",
    "jumpMpPlay",
    313);
  v4 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v16, (const char (*)[19])"jumpMpPlay, state:");
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  val = this->state_;
  v5 = common::milog::MiLogStream::operator<<<int,(int *)0>(v4, &val);
  v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v16);
  BaseMpPlay::clear(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, &Uid, &this->state_);
  }
  this->state_ = jump;
  std::string::clear(&this->transaction_no_);
  toThisPtr<BaseMpPlay>((BaseMpPlay *)&__r);
  std::weak_ptr<BaseMpPlay>::weak_ptr<BaseMpPlay,void>(v1 + 2, &__r);
  std::shared_ptr<BaseMpPlay>::~shared_ptr(&__r);
  std::weak_ptr<BaseMpPlay>::weak_ptr(&v14, v1 + 2);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  toPtr<Player,Player>((Player *)&__args_1);
  common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player>,BaseMpPlay::jumpMpPlay(void)::{lambda(unsigned long)#1}>(
    (std::shared_ptr<Player> *)&__r,
    &__args_1,
    (std::shared_ptr<Player> *)&v14,
    &__args_1);
  std::shared_ptr<PlayerUnixTimer>::operator=(&this->player_count_timer_ptr_, (std::shared_ptr<PlayerUnixTimer> *)&__r);
  std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&__r);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&__args_1);
  BaseMpPlay::jumpMpPlay(void)::{lambda(unsigned long)#1}::~jumpMpPlay((BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> *const)&v14);
  if ( std::operator==<PlayerUnixTimer>(0LL, &this->player_count_timer_ptr_) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "jumpMpPlay",
      323);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      &v16,
      (const char (*)[25])"MAKE_MP_PLAY_TIMER fails");
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
    common::tools::MiTimer::cancel(v8);
    v9 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
    if ( PlayerUnixTimer::startS(v9, 5u, 1, "./src/player/mp_play/base_mp_play.cpp", "jumpMpPlay", 327) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "jumpMpPlay",
        329);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v16,
        (const char (*)[33])"player_count_timer_ startS fails");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    v7 = 0;
  }
  std::weak_ptr<BaseMpPlay>::~weak_ptr(v1 + 2);
  result = v7;
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    v1->_M_ptr = (std::__weak_ptr<BaseMpPlay,(__gnu_cxx::_Lock_policy)2>::element_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 320: range 0000000016D3E31A-0000000016D3E33F
void __cdecl BaseMpPlay::jumpMpPlay(void)::{lambda(unsigned long)#1}::jumpMpPlay(
        BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> *const this,
        BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseMpPlay>::weak_ptr(&this->__mp_play_wtr, &a2->__mp_play_wtr);
};

// Line 320: range 0000000016D3F7F4-0000000016D3F819
void __cdecl BaseMpPlay::jumpMpPlay(void)::{lambda(unsigned long)#1}::jumpMpPlay(
        BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> *const this,
        const BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseMpPlay>::weak_ptr(&this->__mp_play_wtr, &a2->__mp_play_wtr);
};

// Line 320: range 0000000016CB432A-0000000016CB44BC
void __cdecl BaseMpPlay::jumpMpPlay(void)::{lambda(unsigned long)#1}::operator()(
        const BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseMpPlay *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 mp_play_ptr:320";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::jumpMpPlay(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseMpPlay>::lock((const std::weak_ptr<BaseMpPlay> *const)(v2 + 32));
  if ( std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseMpPlay::onPlayerCountTimer(v5, now_ms);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "operator()",
      320);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v6, (const char (*)[25])"mp_play_wtr lock nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 32));
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

// Line 320: range 0000000016CB44BE-0000000016CB44D8
void __cdecl BaseMpPlay::jumpMpPlay(void)::{lambda(unsigned long)#1}::~jumpMpPlay(
        BaseMpPlay::jumpMpPlay::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseMpPlay>::~weak_ptr(&this->__mp_play_wtr);
};

// Line 337: range 0000000016CB4BAA-0000000016CB56A2
int32_t __cdecl BaseMpPlay::prepareMpPlay(BaseMpPlay *const this)
{
  int32_t v1; // r14d
  unsigned __int64 p_M_end_of_storage; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r15
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  __int64 v10; // rsi
  PlayerBasicComp *BasicComp; // rax
  uint32_t *p_play_id; // rsi
  int v13; // r15d
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  PlayerUnixTimer *v15; // rax
  uint32_t v16; // ecx
  char v17; // dl
  __int64 v18; // rdx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  __int64 v20; // rsi
  uint32_t play_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v22; // rdx
  char v23; // cl
  int32_t result; // eax
  int val; // [rsp+1Ch] [rbp-144h] BYREF
  unsigned int Uid; // [rsp+20h] [rbp-140h] BYREF
  uint32_t prepare_time; // [rsp+24h] [rbp-13Ch]
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-138h]
  BaseMpPlay t; // [rsp+30h] [rbp-130h] BYREF

  p_M_end_of_storage = (unsigned __int64)&t.reward_remain_uid_vec_._M_impl._M_end_of_storage;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      p_M_end_of_storage = v3;
  }
  *(_QWORD *)p_M_end_of_storage = 1102416563LL;
  *(_QWORD *)(p_M_end_of_storage + 8) = "4 32 16 13 world_ptr:340 64 16 15 mp_play_wtr:363 96 16 11 evt_ptr:384 128 32 10 notify:378";
  *(_QWORD *)(p_M_end_of_storage + 16) = BaseMpPlay::prepareMpPlay;
  v4 = (_DWORD *)(p_M_end_of_storage >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -202116109;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(p_M_end_of_storage + 128),
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mp_play/base_mp_play.cpp",
    "prepareMpPlay",
    338);
  v5 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
         (common::milog::MiLogStream *const)(p_M_end_of_storage + 128),
         (const char (*)[22])"prepareMpPlay, state:");
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  val = this->state_;
  v6 = common::milog::MiLogStream::operator<<<int,(int *)0>(v5, &val);
  v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &Uid);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(p_M_end_of_storage + 128));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(p_M_end_of_storage + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(p_M_end_of_storage + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(p_M_end_of_storage + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "prepareMpPlay",
      343);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
      (common::milog::MiLogStream *const)(p_M_end_of_storage + 128),
      (const char (*)[18])"getCurWorld fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(p_M_end_of_storage + 128));
    v1 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(p_M_end_of_storage + 96));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 96))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(p_M_end_of_storage + 96));
    if ( entry_config_ptr )
    {
      v10 = (((_BYTE)entry_config_ptr - 60) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->prepare_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)entry_config_ptr - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&entry_config_ptr->prepare_time >> 3)
                                                                        + 0x7FFF8000) )
      {
        __asan_report_load4(&entry_config_ptr->prepare_time);
      }
      prepare_time = entry_config_ptr->prepare_time;
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->state_, v10, &this->state_);
      }
      this->state_ = prepare;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)(p_M_end_of_storage + 128), BasicComp);
      std::operator+<char>((std::string *)&t.play_id_, (std::string *)(p_M_end_of_storage + 128), "_MpPlay");
      p_play_id = &t.play_id_;
      std::string::operator=(&this->transaction_no_, &t.play_id_);
      std::string::~string(&t.play_id_);
      std::string::~string((void *)(p_M_end_of_storage + 128));
      if ( !prepare_time )
        goto LABEL_31;
      toThisPtr<BaseMpPlay>(&t);
      std::weak_ptr<BaseMpPlay>::weak_ptr<BaseMpPlay,void>(
        (std::weak_ptr<BaseMpPlay> *const)(p_M_end_of_storage + 64),
        (const std::shared_ptr<BaseMpPlay> *)&t);
      std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)&t);
      std::weak_ptr<BaseMpPlay>::weak_ptr(
        (std::weak_ptr<BaseMpPlay> *const)(p_M_end_of_storage + 96),
        (const std::weak_ptr<BaseMpPlay> *)(p_M_end_of_storage + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      toPtr<Player,Player>((Player *)&t);
      common::tools::perf::make_shared<PlayerUnixTimer,std::shared_ptr<Player>,BaseMpPlay::prepareMpPlay(void)::{lambda(unsigned long)#1}>(
        (std::shared_ptr<Player> *)&t._M_weak_this._M_refcount,
        (BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *)&t,
        (std::shared_ptr<Player> *)(p_M_end_of_storage + 96),
        (BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *)&t);
      std::shared_ptr<PlayerUnixTimer>::operator=(
        &this->start_timer_ptr_,
        (std::shared_ptr<PlayerUnixTimer> *)&t._M_weak_this._M_refcount);
      std::shared_ptr<PlayerUnixTimer>::~shared_ptr((std::shared_ptr<PlayerUnixTimer> *const)&t._M_weak_this._M_refcount);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)&t);
      BaseMpPlay::prepareMpPlay(void)::{lambda(unsigned long)#1}::~prepareMpPlay((BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *const)(p_M_end_of_storage + 96));
      if ( std::operator==<PlayerUnixTimer>(0LL, &this->start_timer_ptr_) )
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(p_M_end_of_storage + 128),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "prepareMpPlay",
          366);
        p_play_id = (uint32_t *)"MAKE_MP_PLAY_TIMER fails";
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          (common::milog::MiLogStream *const)(p_M_end_of_storage + 128),
          (const char (*)[25])"MAKE_MP_PLAY_TIMER fails");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(p_M_end_of_storage + 128));
        v1 = -1;
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
        common::tools::MiTimer::cancel(v14);
        v15 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
        p_play_id = (uint32_t *)prepare_time;
        if ( PlayerUnixTimer::startS(
               v15,
               prepare_time,
               0,
               "./src/player/mp_play/base_mp_play.cpp",
               "prepareMpPlay",
               370) )
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(p_M_end_of_storage + 128),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mp_play/base_mp_play.cpp",
            "prepareMpPlay",
            372);
          p_play_id = (uint32_t *)"startS fails";
          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
            (common::milog::MiLogStream *const)(p_M_end_of_storage + 128),
            (const char (*)[13])"startS fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(p_M_end_of_storage + 128));
          v1 = -1;
          v13 = 0;
        }
        else
        {
          v13 = 1;
        }
      }
      std::weak_ptr<BaseMpPlay>::~weak_ptr((std::weak_ptr<BaseMpPlay> *const)(p_M_end_of_storage + 64));
      if ( v13 == 1 )
      {
LABEL_31:
        v16 = common::tools::TimeUtils::getNow() + prepare_time;
        v17 = *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000);
        LOBYTE(p_play_id) = v17 != 0;
        v18 = (v17 != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= v17);
        if ( (_BYTE)v18 )
          __asan_report_store4(&this->prepare_end_time_, p_play_id, v18);
        this->prepare_end_time_ = v16;
        proto::MpPlayPrepareNotify::MpPlayPrepareNotify((proto::MpPlayPrepareNotify *const)(p_M_end_of_storage + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->play_id_);
        }
        proto::MpPlayPrepareNotify::set_mp_play_id(
          (proto::MpPlayPrepareNotify *const)(p_M_end_of_storage + 128),
          this->play_id_);
        if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&this->prepare_end_time_);
        }
        proto::MpPlayPrepareNotify::set_prepare_end_time(
          (proto::MpPlayPrepareNotify *const)(p_M_end_of_storage + 128),
          this->prepare_end_time_);
        v19 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 32));
        World::notifyAllPlayer<proto::MpPlayPrepareNotify>(
          v19,
          (const proto::MpPlayPrepareNotify *)(p_M_end_of_storage + 128),
          0);
        EventUtil::createEvent((data::EventType)(p_M_end_of_storage + 96));
        v20 = 0LL;
        if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(p_M_end_of_storage + 96), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->play_id_);
          }
          play_id = this->play_id_;
          v22 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(p_M_end_of_storage + 96));
          v23 = *(_BYTE *)(((unsigned __int64)&v22->param1 >> 3) + 0x7FFF8000);
          if ( v23 != 0 && (char)((((_BYTE)v22 + 44) & 7) + 3) >= v23 )
          {
            LOBYTE(v20) = v23 != 0;
            __asan_report_store4(&v22->param1, v20, v22);
          }
          v22->param1 = play_id;
          BaseMpPlay::notifyGroupEvent(this, (EventPtr *)(p_M_end_of_storage + 96));
        }
        if ( !prepare_time )
          BaseMpPlay::battleMpPlay(this);
        v1 = 0;
        std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(p_M_end_of_storage + 96));
        proto::MpPlayPrepareNotify::~MpPlayPrepareNotify((proto::MpPlayPrepareNotify *const)(p_M_end_of_storage + 128));
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(p_M_end_of_storage + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/mp_play/base_mp_play.cpp",
        "prepareMpPlay",
        349);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             (common::milog::MiLogStream *const)(p_M_end_of_storage + 128),
             (const char (*)[34])"findMpPlayGroupExcelConfig fails ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(p_M_end_of_storage + 128));
      v1 = -1;
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(p_M_end_of_storage + 32));
  result = v1;
  if ( &t.reward_remain_uid_vec_._M_impl._M_end_of_storage == (std::_Vector_base<unsigned int>::pointer *)p_M_end_of_storage )
  {
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)p_M_end_of_storage = 1172321806LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((p_M_end_of_storage >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 363: range 0000000016CB49FA-0000000016CB4B8C
void __cdecl BaseMpPlay::prepareMpPlay(void)::{lambda(unsigned long)#1}::operator()(
        const BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *const __closure,
        uint64_t now_ms)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  BaseMpPlay *v5; // rdx
  common::milog::MiLogStream v6; // [rsp+10h] [rbp-80h] BYREF
  char v7[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 15 mp_play_ptr:363";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::prepareMpPlay(void)::{lambda(unsigned long)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::weak_ptr<BaseMpPlay>::lock((const std::weak_ptr<BaseMpPlay> *const)(v2 + 32));
  if ( std::operator!=<BaseMpPlay>((const std::shared_ptr<BaseMpPlay> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseMpPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    BaseMpPlay::onStartTimer(v5, now_ms);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "operator()",
      363);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v6, (const char (*)[25])"mp_play_wtr lock nullptr");
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  std::shared_ptr<BaseMpPlay>::~shared_ptr((std::shared_ptr<BaseMpPlay> *const)(v2 + 32));
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

// Line 363: range 0000000016D3E646-0000000016D3E66B
void __cdecl BaseMpPlay::prepareMpPlay(void)::{lambda(unsigned long)#1}::prepareMpPlay(
        BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *const this,
        BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseMpPlay>::weak_ptr(&this->__mp_play_wtr, &a2->__mp_play_wtr);
};

// Line 363: range 0000000016D3F9D6-0000000016D3F9FB
void __cdecl BaseMpPlay::prepareMpPlay(void)::{lambda(unsigned long)#1}::prepareMpPlay(
        BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *const this,
        const BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *a2)
{
  std::weak_ptr<BaseMpPlay>::weak_ptr(&this->__mp_play_wtr, &a2->__mp_play_wtr);
};

// Line 363: range 0000000016CB4B8E-0000000016CB4BA8
void __cdecl BaseMpPlay::prepareMpPlay(void)::{lambda(unsigned long)#1}::~prepareMpPlay(
        BaseMpPlay::prepareMpPlay::<lambda(uint64_t)> *const this)
{
  std::weak_ptr<BaseMpPlay>::~weak_ptr(&this->__mp_play_wtr);
};

// Line 399: range 0000000016CB56A4-0000000016CB58BA
void __cdecl BaseMpPlay::onStartTimer(BaseMpPlay *const this, uint64_t now_ms)
{
  common::milog::MiLogStream *v2; // rbx
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream *v4; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v7,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mp_play/base_mp_play.cpp",
    "onStartTimer",
    400);
  v2 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v7, (const char (*)[18])"onStartTimer uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v7);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == prepare )
  {
    if ( std::operator!=<PlayerUnixTimer>(&this->start_timer_ptr_, 0LL) )
    {
      v5 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
      common::tools::MiTimer::cancel(v5);
    }
    BaseMpPlay::battleMpPlay(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "onStartTimer",
      403);
    v3 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v7, (const char (*)[8])"state_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    val = this->state_;
    v4 = common::milog::MiLogStream::operator<<<int,(int *)0>(v3, (const int *)&val);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v4, (const char (*)[19])off_25F27DC0);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 414: range 0000000016CB5A00-0000000016CB6685
void __cdecl BaseMpPlay::onPlayerCountTimer(BaseMpPlay *const this, uint64_t now_ms)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned __int64 v9; // rdx
  char v10; // al
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  uint32_t v13; // eax
  common::milog::MiLogStream *v14; // rax
  Player *v15; // rax
  PlayerSceneComp *SceneComp; // rax
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Player *v19; // rax
  Player *v20; // rax
  PlayerSceneComp *v21; // r14
  Scene *v22; // rax
  common::milog::MiLogStream *v23; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  BaseMpPlay::onPlayerCountTimer::<lambda(Player&)> v29; // [rsp-20h] [rbp-230h]
  unsigned int val; // [rsp+14h] [rbp-1FCh] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_begin; // [rsp+18h] [rbp-1F8h] BYREF
  std::vector<std::shared_ptr<Player>>::iterator __for_end; // [rsp+20h] [rbp-1F0h] BYREF
  std::vector<std::shared_ptr<Player>> *__for_range; // [rsp+28h] [rbp-1E8h]
  std::shared_ptr<Player> *player_ptr; // [rsp+30h] [rbp-1E0h]
  const data::MpPlayMatchExcelConfig *match_config_ptr; // [rsp+38h] [rbp-1D8h]
  BaseMpPlay::onPlayerCountTimer::<lambda(Player&)> __f; // [rsp+40h] [rbp-1D0h]
  common::milog::MiLogStream v37; // [rsp+60h] [rbp-1B0h] BYREF
  TransferReason p_reason; // [rsp+80h] [rbp-190h] BYREF
  char v39[336]; // [rsp+C0h] [rbp-150h] BYREF

  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 14 inside_cnt:422 48 4 17 born_scene_id:462 64 12 12 born_pos:463 96 12 12 born_rot:463 1"
                        "28 16 13 world_ptr:415 160 16 13 scene_ptr:469 192 16 14 avatar_ptr:479 224 24 22 outside_player_vec:421";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::onPlayerCountTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 128));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 128)) )
  {
    common::milog::MiLogStream::create(
      &v37,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "onPlayerCountTimer",
      418);
    common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v37, (const char (*)[18])"getCurWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v37);
  }
  else
  {
    std::vector<std::shared_ptr<Player>>::vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 224));
    *(_DWORD *)(v2 + 32) = 0;
    v5 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    __f.__this = this;
    __f.__outside_player_vec = (std::vector<std::shared_ptr<Player>> *)(v2 + 224);
    __f.__inside_cnt = (uint32_t *)(v2 + 32);
    v29.__inside_cnt = (uint32_t *)(v2 + 32);
    v29.__outside_player_vec = (std::vector<std::shared_ptr<Player>> *)(v2 + 224);
    v29.__this = this;
    std::function<ForeachPolicy ()(Player &)>::function<BaseMpPlay::onPlayerCountTimer(unsigned long)::{lambda(Player &)#1},void,void>(
      (std::function<ForeachPolicy(Player&)> *const)&v37,
      v29);
    World::foreachPlayer(v5, (std::function<ForeachPolicy(Player&)> *)&v37);
    std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v37);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->state_);
    }
    if ( this->state_ == jump )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 192));
      p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192))->design_config.txt_config_mgr.mp_play_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->play_id_);
      }
      match_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayMatchExcelConfig(
                           p_mp_play_config_mgr,
                           this->play_id_);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 192));
      if ( match_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_players >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)match_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&match_config_ptr->min_players >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4(&match_config_ptr->min_players);
        }
        if ( match_config_ptr->min_players <= *(_DWORD *)(v2 + 32) )
          BaseMpPlay::prepareMpPlay(this);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v37,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "onPlayerCountTimer",
          441);
        v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
               &v37,
               (const char (*)[34])"findMpPlayMatchExcelConfig fails:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->play_id_);
        common::milog::MiLogStream::~MiLogStream(&v37);
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->state_);
      }
      if ( this->state_ == prepare || this->state_ == battle )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->state_);
        }
        if ( this->state_ != prepare )
          goto LABEL_32;
        v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = (unsigned __int64)(v8->_vptr_World + 23);
        if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        if ( (*(unsigned __int8 (__fastcall **)(std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v9)(v8) != 1 )
          v10 = 1;
        else
LABEL_32:
          v10 = 0;
        if ( v10 )
        {
          common::milog::MiLogStream::create(
            &v37,
            &common::milog::MiLogDefault::default_log_obj_,
            2u,
            "./src/player/mp_play/base_mp_play.cpp",
            "onPlayerCountTimer",
            455);
          v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                  &v37,
                  (const char (*)[59])"world_ptr->isInMpMode false, interrupt prepare state! uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Player::getUid(this->player_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
          common::milog::MiLogStream::~MiLogStream(&v37);
          BaseMpPlay::interruptPrepareState(this);
        }
        else
        {
          *(_DWORD *)(v2 + 48) = 0;
          Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
          Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
          if ( BaseMpPlay::findBornScenePosRot(this, (uint32_t *)(v2 + 48), (Vector3 *)(v2 + 64), (Vector3 *)(v2 + 96)) )
          {
            common::milog::MiLogStream::create(
              &v37,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/mp_play/base_mp_play.cpp",
              "onPlayerCountTimer",
              466);
            v12 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    &v37,
                    (const char (*)[39])"findBornScenePosRot fails, mp_play_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->play_id_);
            common::milog::MiLogStream::~MiLogStream(&v37);
          }
          else
          {
            v13 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
            World::findScene((World *const)(v2 + 160), v13);
            if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 160)) )
            {
              common::milog::MiLogStream::create(
                &v37,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/mp_play/base_mp_play.cpp",
                "onPlayerCountTimer",
                472);
              v14 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                      &v37,
                      (const char (*)[17])"findScene fails:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v14,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v37);
            }
            else
            {
              __for_range = (std::vector<std::shared_ptr<Player>> *)(v2 + 224);
              __for_begin._M_current = std::vector<std::shared_ptr<Player>>::begin((std::vector<std::shared_ptr<Player>> *const)(v2 + 224))._M_current;
              __for_end._M_current = std::vector<std::shared_ptr<Player>>::end((std::vector<std::shared_ptr<Player>> *const)(v2 + 224))._M_current;
              while ( __gnu_cxx::operator!=<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>(
                        &__for_begin,
                        &__for_end) )
              {
                player_ptr = __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator*(&__for_begin);
                v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                SceneComp = Player::getSceneComp(v15);
                if ( !PlayerSceneComp::isInTransfer(SceneComp) )
                {
                  v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                  if ( Player::isConnected(v17) )
                  {
                    v19 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                    Player::getAvatarComp(v19);
                    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v2 + 192));
                    if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v2 + 192)) )
                    {
                      v20 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                      v21 = Player::getSceneComp(v20);
                      TransferReason::TransferReason(&p_reason, ENTER_REASON_MP_PLAY);
                      v22 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                      LOBYTE(v21) = PlayerSceneComp::jumpToScene(
                                      v21,
                                      v22,
                                      (const Vector3 *)(v2 + 64),
                                      (const Vector3 *)(v2 + 96),
                                      0,
                                      &p_reason) != 0;
                      TransferReason::~TransferReason(&p_reason);
                      if ( (_BYTE)v21 )
                      {
                        common::milog::MiLogStream::create(
                          &v37,
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/player/mp_play/base_mp_play.cpp",
                          "onPlayerCountTimer",
                          484);
                        v23 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                                &v37,
                                (const char (*)[8])"player:");
                        v24 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                        val = Player::getUid(v24);
                        v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
                        common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                          v25,
                          (const char (*)[23])" jumpTo born pos fails");
                        common::milog::MiLogStream::~MiLogStream(&v37);
                      }
                      common::milog::MiLogStream::create(
                        &v37,
                        &common::milog::MiLogDefault::default_log_obj_,
                        1u,
                        "./src/player/mp_play/base_mp_play.cpp",
                        "onPlayerCountTimer",
                        486);
                      v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                              &v37,
                              (const char (*)[11])"force uid:");
                      v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)player_ptr);
                      val = Player::getUid(v27);
                      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
                      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                        v28,
                        (const char (*)[17])" goback mp_play!");
                      common::milog::MiLogStream::~MiLogStream(&v37);
                    }
                    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v2 + 192));
                  }
                }
                __gnu_cxx::__normal_iterator<std::shared_ptr<Player> *,std::vector<std::shared_ptr<Player>>>::operator++(&__for_begin);
              }
            }
            std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
          }
        }
      }
    }
    std::vector<std::shared_ptr<Player>>::~vector((std::vector<std::shared_ptr<Player>> *const)(v2 + 224));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 128));
  if ( v39 == (char *)v2 )
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
};

// Line 423: range 0000000016CB58BC-0000000016CB59FE
ForeachPolicy __cdecl BaseMpPlay::onPlayerCountTimer(unsigned long)::{lambda(Player &)#1}::operator()(
        const BaseMpPlay::onPlayerCountTimer::<lambda(Player&)> *const __closure,
        Player *player)
{
  uint32_t *inside_cnt; // rax
  std::vector<std::shared_ptr<Player>> *outside_player_vec; // rbx
  std::shared_ptr<Player> v4; // rax
  std::shared_ptr<Player> v6; // [rsp+10h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  if ( BaseMpPlay::isPlayerInBattleArea(__closure->__this, player, 0) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__inside_cnt >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    inside_cnt = __closure->__inside_cnt;
    if ( *(_BYTE *)(((unsigned __int64)inside_cnt >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)inside_cnt & 7) + 3) >= *(_BYTE *)(((unsigned __int64)inside_cnt >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__inside_cnt);
    }
    ++*inside_cnt;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__outside_player_vec >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    outside_player_vec = __closure->__outside_player_vec;
    v4 = toThisPtr<Player>((Player *)&v6);
    std::vector<std::shared_ptr<Player>>::emplace_back<std::shared_ptr<Player>>(
      outside_player_vec,
      &v6,
      (std::shared_ptr<Player> *)v4._M_refcount._M_pi);
    std::shared_ptr<Player>::~shared_ptr(&v6);
  }
  return 0;
};

// Line 492: range 0000000016CB6686-0000000016CB6E40
int32_t __cdecl BaseMpPlay::forcePlayerBackBornPos(BaseMpPlay *const this, Player *player)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int32_t v5; // r14d
  PlayerSceneComp *SceneComp; // rax
  common::milog::MiLogStream *v8; // rbx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  uint32_t v11; // eax
  common::milog::MiLogStream *v12; // rax
  PlayerSceneComp *v13; // r14
  Scene *v14; // rax
  common::milog::MiLogStream *v15; // r14
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  common::milog::MiLogStream *v18; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+18h] [rbp-158h] BYREF
  int32_t ret; // [rsp+1Ch] [rbp-154h]
  common::milog::MiLogStream v22; // [rsp+20h] [rbp-150h] BYREF
  TransferReason p_reason; // [rsp+40h] [rbp-130h] BYREF
  char v24[240]; // [rsp+80h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 17 born_scene_id:509 64 12 12 born_pos:510 96 12 12 born_rot:510 128 16 13 world_ptr:503 "
                        "160 16 13 scene_ptr:516";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::forcePlayerBackBornPos;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219020288;
  v4[536862723] = -219020288;
  v4[536862724] = -219021312;
  v4[536862725] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == prepare || this->state_ == battle )
  {
    SceneComp = Player::getSceneComp(player);
    if ( PlayerSceneComp::isInTransfer(SceneComp) || !Player::isConnected(player) )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/mp_play/base_mp_play.cpp",
        "forcePlayerBackBornPos",
        500);
      v8 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v22, (const char (*)[5])"uid:");
      val = Player::getUid(player);
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        v9,
        (const char (*)[35])" isInTransfer or isConnected false");
      common::milog::MiLogStream::~MiLogStream(&v22);
      v5 = -1;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 128));
      if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "forcePlayerBackBornPos",
          506);
        common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(&v22, (const char (*)[18])"getCurWorld fails");
        common::milog::MiLogStream::~MiLogStream(&v22);
        v5 = -1;
      }
      else
      {
        *(_DWORD *)(v2 + 48) = 0;
        Vector3::Vector3((Vector3 *const)(v2 + 64), 0.0, 0.0, 0.0);
        Vector3::Vector3((Vector3 *const)(v2 + 96), 0.0, 0.0, 0.0);
        if ( BaseMpPlay::findBornScenePosRot(this, (uint32_t *)(v2 + 48), (Vector3 *)(v2 + 64), (Vector3 *)(v2 + 96)) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/mp_play/base_mp_play.cpp",
            "forcePlayerBackBornPos",
            513);
          v10 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  &v22,
                  (const char (*)[39])"findBornScenePosRot fails, mp_play_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->play_id_);
          common::milog::MiLogStream::~MiLogStream(&v22);
          v5 = -1;
        }
        else
        {
          v11 = (unsigned int)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
          World::findScene((World *const)(v2 + 160), v11);
          if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 160)) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/mp_play/base_mp_play.cpp",
              "forcePlayerBackBornPos",
              519);
            v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v22,
                    (const char (*)[17])"findScene fails:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 48));
            common::milog::MiLogStream::~MiLogStream(&v22);
            v5 = -1;
          }
          else
          {
            v13 = Player::getSceneComp(player);
            TransferReason::TransferReason(&p_reason, ENTER_REASON_MP_PLAY);
            v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
            ret = PlayerSceneComp::jumpToScene(
                    v13,
                    v14,
                    (const Vector3 *)(v2 + 64),
                    (const Vector3 *)(v2 + 96),
                    0,
                    &p_reason);
            TransferReason::~TransferReason(&p_reason);
            if ( ret )
            {
              common::milog::MiLogStream::create(
                &v22,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/mp_play/base_mp_play.cpp",
                "forcePlayerBackBornPos",
                525);
              v15 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v22, (const char (*)[8])"player:");
              val = Player::getUid(player);
              v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
              common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                v16,
                (const char (*)[23])" jumpTo born pos fails");
              common::milog::MiLogStream::~MiLogStream(&v22);
            }
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/mp_play/base_mp_play.cpp",
              "forcePlayerBackBornPos",
              527);
            v17 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                    &v22,
                    (const char (*)[11])"force uid:");
            val = Player::getUid(player);
            v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v18, (const char (*)[17])" goback mp_play!");
            common::milog::MiLogStream::~MiLogStream(&v22);
            v5 = ret;
          }
          std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
        }
      }
      std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 128));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "forcePlayerBackBornPos",
      495);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v22, (const char (*)[19])"state not support!");
    common::milog::MiLogStream::~MiLogStream(&v22);
    v5 = -1;
  }
  result = v5;
  if ( v24 == (char *)v2 )
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

// Line 532: range 0000000016CB6E42-0000000016CB7281
void __cdecl BaseMpPlay::interruptPrepareState(BaseMpPlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  __int64 v8; // rsi
  uint32_t play_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+40h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "3 32 16 13 world_ptr:538 64 16 11 evt_ptr:547 96 24 10 notify:541";
  *(_QWORD *)(v1 + 16) = BaseMpPlay::interruptPrepareState;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  common::milog::MiLogStream::create(
    &v13,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mp_play/base_mp_play.cpp",
    "interruptPrepareState",
    533);
  v4 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
         &v13,
         (const char (*)[34])"interruptPrepareState mp_play_id:");
  v5 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &this->play_id_);
  v6 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v5, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
  common::milog::MiLogStream::~MiLogStream(&v13);
  BaseMpPlay::clear(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v1 + 32), 0LL) )
  {
    proto::MpPlayPrepareInterruptNotify::MpPlayPrepareInterruptNotify((proto::MpPlayPrepareInterruptNotify *const)(v1 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    proto::MpPlayPrepareInterruptNotify::set_mp_play_id(
      (proto::MpPlayPrepareInterruptNotify *const)(v1 + 96),
      this->play_id_);
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    World::notifyAllPlayer<proto::MpPlayPrepareInterruptNotify>(
      v7,
      (const proto::MpPlayPrepareInterruptNotify *)(v1 + 96),
      0);
    proto::MpPlayPrepareInterruptNotify::~MpPlayPrepareInterruptNotify((proto::MpPlayPrepareInterruptNotify *const)(v1 + 96));
  }
  EventUtil::createEvent((data::EventType)(v1 + 64));
  v8 = 0LL;
  if ( std::operator!=<Event>((const std::shared_ptr<Event> *)(v1 + 64), 0LL) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    play_id = this->play_id_;
    v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    v11 = *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)((((_BYTE)v10 + 44) & 7) + 3) >= v11 )
    {
      LOBYTE(v8) = v11 != 0;
      __asan_report_store4(&v10->param1, v8, v10);
    }
    v10->param1 = play_id;
    BaseMpPlay::notifyGroupEvent(this, (EventPtr *)(v1 + 64));
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 64));
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
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

// Line 556: range 0000000016CB7282-0000000016CB7506
void __cdecl BaseMpPlay::clear(BaseMpPlay *const this)
{
  common::milog::MiLogStream *v1; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdx
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int val; // [rsp+18h] [rbp-38h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mp_play/base_mp_play.cpp",
    "clear",
    557);
  v1 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(&v11, (const char (*)[7])"state:");
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  val = this->state_;
  v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  v3 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v2, (const char (*)[13])" clear, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v11);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, &Uid, &this->state_);
  }
  this->state_ = none;
  v4 = (*(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v4 )
    __asan_report_store4(&this->prepare_end_time_, (((_BYTE)this + 124) & 7u) + 3, v4);
  this->prepare_end_time_ = 0;
  v5 = ((_BYTE)this - 124) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_store1(&this->is_battle_started_, v5, v6);
  this->is_battle_started_ = 0;
  if ( std::operator!=<PlayerUnixTimer>(&this->start_timer_ptr_, 0LL) )
  {
    v7 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->start_timer_ptr_);
    common::tools::MiTimer::cancel(v7);
  }
  if ( std::operator!=<PlayerUnixTimer>(&this->player_count_timer_ptr_, 0LL) )
  {
    v8 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
    common::tools::MiTimer::cancel(v8);
  }
  std::vector<unsigned int>::clear(&this->reward_remain_uid_vec_);
  std::map<unsigned int,unsigned int>::clear(&this->uid_world_level_map_);
  BaseMpPlay::destroyRewardGadget(this);
};

// Line 578: range 0000000016CB7508-0000000016CB7AE1
void __cdecl BaseMpPlay::notifyGroupEvent(BaseMpPlay *const this, EventPtr *evt_ptr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v9; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  uint32_t v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  Group *v17; // rdx
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-F0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-E8h] BYREF
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+20h] [rbp-E0h]
  const std::vector<unsigned int> *__for_range; // [rsp+28h] [rbp-D8h]
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
  *(_QWORD *)(v2 + 8) = "4 32 4 12 scene_id:589 48 4 12 group_id:596 64 16 13 scene_ptr:590 96 16 13 group_ptr:598";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::notifyGroupEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  if ( !std::operator==<Event>(0LL, evt_ptr) )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->design_config.txt_config_mgr.mp_play_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->entry_id_);
    }
    entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( entry_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 96));
      v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      *(_DWORD *)(v2 + 32) = TxtConfigMgr::getDefaultWorldMainSceneId(&v7->design_config.txt_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      SceneComp = (unsigned int)Player::getSceneComp(this->player_);
      PlayerSceneComp::findScene((const PlayerSceneComp *const)(v2 + 64), SceneComp);
      if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/mp_play/base_mp_play.cpp",
          "notifyGroupEvent",
          593);
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               &v22,
               (const char (*)[18])"findScene fails, ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v22);
      }
      else
      {
        __for_range = &entry_config_ptr->notify_group_vec;
        __for_begin._M_current = std::vector<unsigned int>::begin(&entry_config_ptr->notify_group_vec)._M_current;
        __for_end._M_current = std::vector<unsigned int>::end(&entry_config_ptr->notify_group_vec)._M_current;
        while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
        {
          v10 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
          v11 = v10;
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v10);
          }
          *(_DWORD *)(v2 + 48) = *v11;
          v12 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          Scene::findGroup((Scene *const)(v2 + 96), v12);
          if ( std::operator!=<Group>((const std::shared_ptr<Group> *)(v2 + 96), 0LL) )
          {
            common::milog::MiLogStream::create(
              &v22,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/mp_play/base_mp_play.cpp",
              "notifyGroupEvent",
              601);
            v13 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v22, (const char (*)[10])"group_id:");
            v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v13,
                    (const unsigned int *)(v2 + 48));
            v15 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                    v14,
                    (const char (*)[15])" handle event:");
            v16 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)evt_ptr);
            common::milog::MiLogStream::operator<<<data::EventType,(data::EventType*)0>(v15, &v16->event_type);
            common::milog::MiLogStream::~MiLogStream(&v22);
            v17 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            Group::handleEvent(v17, evt_ptr);
          }
          std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v2 + 96));
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
        }
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "notifyGroupEvent",
        586);
      v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v22,
             (const char (*)[35])"findMpPlayGroupExcelConfig fails, ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v22);
    }
  }
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

// Line 609: range 0000000016CB7AE2-0000000016CB7E8C
int32_t __cdecl BaseMpPlay::battleMpPlay(BaseMpPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // rcx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  char *v7; // rsi
  int32_t v8; // r14d
  uint32_t play_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  char v11; // cl
  int32_t result; // eax
  int val; // [rsp+18h] [rbp-98h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 11 evt_ptr:614";
  *(_QWORD *)(v1 + 16) = BaseMpPlay::battleMpPlay;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    2u,
    "./src/player/mp_play/base_mp_play.cpp",
    "battleMpPlay",
    610);
  v4 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(&v15, (const char (*)[21])"battleMpPlay, state:");
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  val = this->state_;
  v5 = common::milog::MiLogStream::operator<<<int,(int *)0>(v4, &val);
  v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v5, (const char (*)[7])" uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v15);
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->state_, &Uid, &this->state_);
  }
  this->state_ = battle;
  EventUtil::createEvent((data::EventType)(v1 + 32));
  v7 = (char *)(v1 + 32);
  if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "battleMpPlay",
      617);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      &v15,
      (const char (*)[39])"createEvent EVENT_MP_PLAY_BATTLE fails");
    common::milog::MiLogStream::~MiLogStream(&v15);
    v8 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    play_id = this->play_id_;
    v10 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    v11 = *(_BYTE *)(((unsigned __int64)&v10->param1 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)((((_BYTE)v10 + 44) & 7) + 3) >= v11 )
    {
      LOBYTE(v7) = v11 != 0;
      __asan_report_store4(&v10->param1, v7, v10);
    }
    v10->param1 = play_id;
    BaseMpPlay::notifyGroupEvent(this, (EventPtr *)(v1 + 32));
    v8 = 0;
  }
  std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v1 + 32));
  result = v8;
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

// Line 626: range 0000000016CB7E8E-0000000016CB7F99
void __cdecl BaseMpPlay::onBattleStart(BaseMpPlay *const this)
{
  common::milog::MiLogStream *v1; // rbx
  __int64 v2; // rsi
  __int64 v3; // rdx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mp_play/base_mp_play.cpp",
    "onBattleStart",
    628);
  v1 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
         &v5,
         (const char (*)[31])"BaseMpPlay::onBattleStart uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  v2 = ((_BYTE)this - 124) & 7;
  v3 = (*(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v2 >= *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v3 )
    __asan_report_store1(&this->is_battle_started_, v2, v3);
  this->is_battle_started_ = 1;
};

// Line 633: range 0000000016CB8722-0000000016CB8E64
void __cdecl BaseMpPlay::onBattleStop(BaseMpPlay *const this, const MpPlayBattleResult *result)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  PlayerMatchComp *MatchComp; // rax
  uint32_t MatchMpPlayId; // ecx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r14
  PlayerMatchComp *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  BaseMpPlay::onBattleStop::<lambda(Player&)>_1 v21; // [rsp-20h] [rbp-130h]
  unsigned int val; // [rsp+18h] [rbp-F8h] BYREF
  uint32_t world_level; // [rsp+1Ch] [rbp-F4h]
  std::function<ForeachPolicy(Player&)> v24; // [rsp+20h] [rbp-F0h] BYREF
  std::function<ForeachPolicy(Player&)> p_func; // [rsp+40h] [rbp-D0h] BYREF
  char v26[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 13 world_ptr:638 64 24 11 uid_vec:683";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::onBattleStop;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  BaseMpPlay::clear(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&result->is_win >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&result->is_win >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&result->is_win);
  }
  if ( result->is_win )
  {
    if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 32), 0LL) )
    {
      v5 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#1},void,void>(
        &p_func,
        (BaseMpPlay::onBattleStop::<lambda(Player&)>)this);
      World::foreachPlayer(v5, &p_func);
      std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    }
    else
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&p_func,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "onBattleStop",
        671);
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
        (common::milog::MiLogStream *const)&p_func,
        (const char (*)[18])"getCurWorld fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    }
  }
  if ( !std::vector<unsigned int>::empty(&this->reward_remain_uid_vec_) && BaseMpPlay::createRewardGadget(this) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "onBattleStop",
      678);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)&p_func,
      (const char (*)[25])"createRewardGadget fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
  }
  if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 32), 0LL) )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 64));
    v7 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    std::function<ForeachPolicy ()(Player &)>::function<BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#2},void,void>(
      &p_func,
      (BaseMpPlay::onBattleStop::<lambda(Player&)>_0)(v2 + 64));
    World::foreachPlayer(v7, &p_func);
    std::function<ForeachPolicy ()(Player &)>::~function(&p_func);
    v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    world_level = PlayerWorld::getLevel(v8);
    v9 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_func._M_functor._M_unused._M_object = this;
    *(_DWORD *)&p_func._M_functor._M_pod_data[8] = world_level;
    p_func._M_manager = (std::_Function_base::_Manager_type)result;
    p_func._M_invoker = (std::function<ForeachPolicy(Player&)>::_Invoker_type)(v2 + 64);
    v21.__uid_vec = (std::vector<unsigned int> *)(v2 + 64);
    v21.__result = result;
    *(_OWORD *)&v21.__this = __PAIR128__(*(unsigned __int64 *)&p_func._M_functor._M_pod_data[8], (unsigned __int64)this);
    std::function<ForeachPolicy ()(Player &)>::function<BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#3},void,void>(
      &v24,
      v21);
    World::foreachPlayer(v9, &v24);
    std::function<ForeachPolicy ()(Player &)>::~function(&v24);
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 64));
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  MatchComp = Player::getMatchComp(this->player_);
  MatchMpPlayId = PlayerMatchComp::getMatchMpPlayId(MatchComp);
  if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->play_id_);
  }
  if ( MatchMpPlayId == this->play_id_ )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v24,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/base_mp_play.cpp",
      "onBattleStop",
      709);
    v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)&v24,
            (const char (*)[44])"cancelMatch because battle over mp_play_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->play_id_);
    v14 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v13, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v24);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v15 = Player::getMatchComp(this->player_);
    PlayerMatchComp::cancelMatch(v15);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v24,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/mp_play/base_mp_play.cpp",
    "onBattleStop",
    713);
  v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
          (common::milog::MiLogStream *const)&v24,
          (const char (*)[21])"onBattleStop is_win:");
  v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &result->is_win);
  v18 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])" uids:");
  v19 = common::milog::MiLogStream::operator<<<unsigned int,unsigned int>(v18, &this->uid_world_level_map_);
  v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])" play_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->play_id_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v24);
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  if ( v26 == (char *)v2 )
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

// Line 643: range 0000000016CB7F9A-0000000016CB831B
ForeachPolicy __cdecl BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#1}::operator()(
        const BaseMpPlay::onBattleStop::<lambda(Player&)> *const __closure,
        Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::vector<unsigned int> *p_reward_remain_uid_vec; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t Level; // r14d
  std::map<unsigned int,unsigned int> *p_uid_world_level_map; // r15
  std::vector<unsigned int>::value_type *p_x; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  char v12; // cl
  std::map<unsigned int,unsigned int> *v13; // r14
  std::vector<unsigned int>::value_type *v14; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v15; // rax
  _DWORD *v16; // rdx
  char v17; // cl
  common::milog::MiLogStream *v18; // r14
  common::milog::MiLogStream *v19; // rax
  ForeachPolicy result; // eax
  std::vector<unsigned int>::value_type __x; // [rsp+2Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v23; // [rsp+30h] [rbp-90h] BYREF
  char v24[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 13 world_ptr:656";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_reward_remain_uid_vec = &__closure->__this->reward_remain_uid_vec_;
  __x = Player::getUid(player);
  std::vector<unsigned int>::push_back(p_reward_remain_uid_vec, &__x);
  Player::getSceneComp(player);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v2 + 32));
  if ( std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v2 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    Level = PlayerWorld::getLevel(v6);
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_uid_world_level_map = &__closure->__this->uid_world_level_map_;
    __x = Player::getUid(player);
    p_x = &__x;
    v10 = std::map<unsigned int,unsigned int>::operator[](p_uid_world_level_map, &__x);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(p_x) = v12 != 0;
      __asan_report_store4(v10, p_x, v10);
    }
    *v11 = Level;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = &__closure->__this->uid_world_level_map_;
    __x = Player::getUid(player);
    v14 = &__x;
    v15 = std::map<unsigned int,unsigned int>::operator[](v13, &__x);
    v16 = v15;
    v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
    if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
    {
      LOBYTE(v14) = v17 != 0;
      __asan_report_store4(v15, v14, v15);
    }
    *v16 = 0;
    common::milog::MiLogStream::create(
      &v23,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "operator()",
      664);
    v18 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v23, (const char (*)[5])"uid:");
    __x = Player::getUid(player);
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &__x);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v19, (const char (*)[24])" getMyPlayerWorld fails");
    common::milog::MiLogStream::~MiLogStream(&v23);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v2 + 32));
  result = FOREACH_CONTINUE;
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

// Line 684: range 0000000016CB831C-0000000016CB837E
ForeachPolicy __cdecl BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#2}::operator()(
        const BaseMpPlay::onBattleStop::<lambda(Player&)>_0 *const __closure,
        Player *player)
{
  std::vector<unsigned int> *uid_vec; // rbx
  std::vector<unsigned int>::value_type __x[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  uid_vec = __closure->__uid_vec;
  __x[0] = Player::getUid(player);
  std::vector<unsigned int>::push_back(uid_vec, __x);
  return 0;
};

// Line 690: range 0000000016CB8380-0000000016CB8720
ForeachPolicy __cdecl BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#3}::operator()(
        const BaseMpPlay::onBattleStop::<lambda(Player&)>_1 *const __closure,
        Player *player)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_uid_score_map; // r14
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v6; // rdx
  unsigned int *p_second; // rax
  unsigned int *p_score; // r8
  const unsigned int *p_world_level; // rdi
  MpPlayBattleResult *v10; // r10
  const unsigned int *p_is_win; // rcx
  const std::vector<unsigned int> *v12; // r14
  std::__shared_ptr_access<MpPlayBattleSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerEventComp *EventComp; // r14
  ForeachPolicy result; // eax
  Player *playera; // [rsp+0h] [rbp-E0h]
  BaseMpPlay *const *p_thisa; // [rsp+8h] [rbp-D8h]
  const unsigned int *v19; // [rsp+10h] [rbp-D0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+20h] [rbp-C0h] BYREF
  char v22[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 element_score:692 64 8 8 iter:693 96 16 13 event_ptr:698";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::onBattleStop(MpPlayBattleResult const&)::{lambda(Player &)#3}::operator();
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_uid_score_map = &__closure->__result->uid_score_map;
  *(_DWORD *)(v2 + 48) = Player::getUid(player);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_uid_score_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  __y._M_node = std::map<unsigned int,unsigned int>::end(&__closure->__result->uid_score_map)._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v6->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v2 + 48) = v6->second;
  }
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__result >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  p_score = &__closure->__result->score;
  p_world_level = &__closure->__world_level;
  v10 = (MpPlayBattleResult *)__closure->__result;
  p_is_win = &v10->is_win;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
  {
    p_world_level = (const unsigned int *)__closure;
    __asan_report_load8();
  }
  common::tools::perf::make_shared<MpPlayBattleSettleEvent,unsigned int &,unsigned int &,unsigned int const&,unsigned int const&,unsigned int &,unsigned int const&,unsigned int const&>(
    (unsigned int *)(v2 + 96),
    &__closure->__this->play_id_,
    &__closure->__this->play_type_,
    p_is_win,
    &v10->cost_time,
    (const unsigned int *)(v2 + 48),
    p_world_level,
    p_score,
    (unsigned int *)player,
    (const unsigned int *)__closure,
    v19,
    (unsigned int *)__y._M_node,
    (const unsigned int *)p_event_ptr._M_ptr,
    (const unsigned int *)p_event_ptr._M_refcount._M_pi);
  if ( *(_BYTE *)(((unsigned __int64)(p_thisa + 3) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v12 = (const std::vector<unsigned int> *)*((_QWORD *)p_thisa + 3);
  v13 = std::__shared_ptr_access<MpPlayBattleSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<MpPlayBattleSettleEvent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
  std::vector<unsigned int>::operator=(&v13->uid_vec, v12);
  EventComp = Player::getEventComp(playera);
  std::shared_ptr<BaseEvent>::shared_ptr<MpPlayBattleSettleEvent,void>(
    &p_event_ptr,
    (const std::shared_ptr<MpPlayBattleSettleEvent> *)(v2 + 96));
  PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
  std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
  std::shared_ptr<MpPlayBattleSettleEvent>::~shared_ptr((std::shared_ptr<MpPlayBattleSettleEvent> *const)(v2 + 96));
  result = FOREACH_CONTINUE;
  if ( v22 == (char *)v2 )
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

// Line 717: range 0000000016CB8E66-0000000016CB9243
void __cdecl BaseMpPlay::tryRevertMiddleState(BaseMpPlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  time_t Now; // rcx
  char v4; // al
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream v13; // [rsp+10h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ == jump )
  {
    this->state_ = none;
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/base_mp_play.cpp",
      "tryRevertMiddleState",
      722);
    v1 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v13, (const char (*)[12])"mp_play_id:");
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->play_id_);
    common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v2, (const char (*)[20])" revert jump state!");
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->state_);
  }
  if ( this->state_ != battle )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 124) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_battle_started_);
  }
  if ( this->is_battle_started_ )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prepare_end_time_);
  }
  if ( !this->prepare_end_time_ )
    goto LABEL_18;
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->prepare_end_time_);
  }
  if ( Now > this->prepare_end_time_ + 30 )
    v4 = 1;
  else
LABEL_18:
    v4 = 0;
  if ( v4 )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/player/mp_play/base_mp_play.cpp",
      "tryRevertMiddleState",
      728);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v13, (const char (*)[12])"mp_play_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->play_id_);
    v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v6, (const char (*)[20])" prepare_end_time_:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->prepare_end_time_);
    common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(v8, (const char (*)[22])" revert battle state!");
    common::milog::MiLogStream::~MiLogStream(&v13);
    if ( *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->state_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->state_, " revert battle state!", &this->state_);
    }
    this->state_ = none;
    v9 = (*(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->prepare_end_time_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v9 )
      __asan_report_store4(&this->prepare_end_time_, (((_BYTE)this + 124) & 7u) + 3, v9);
    this->prepare_end_time_ = 0;
    v10 = ((_BYTE)this - 124) & 7;
    v11 = (*(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->is_battle_started_ >> 3) + 0x7FFF8000));
    if ( (_BYTE)v11 )
      __asan_report_store1(&this->is_battle_started_, v10, v11);
    this->is_battle_started_ = 0;
    if ( std::operator!=<PlayerUnixTimer>(&this->player_count_timer_ptr_, 0LL) )
    {
      v12 = std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerUnixTimer,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->player_count_timer_ptr_);
      common::tools::MiTimer::cancel(v12);
    }
  }
};

// Line 741: range 0000000016CB9244-0000000016CB982D
bool __cdecl BaseMpPlay::isPlayerInBattleArea(const BaseMpPlay *const this, Player *other_player, uint32_t radius)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  bool v8; // r15
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v11; // r14
  uint32_t v12; // r15d
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  const Vector3 *Position; // rax
  bool result; // al
  unsigned int val; // [rsp+20h] [rbp-F0h] BYREF
  uint32_t scene_id; // [rsp+24h] [rbp-ECh]
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Player> v20; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+60h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 12 10 center:748 64 16 13 scene_ptr:756 96 16 20 other_avatar_ptr:763";
  *(_QWORD *)(v3 + 16) = BaseMpPlay::isPlayerInBattleArea;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v20);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
  if ( entry_config_ptr )
  {
    Vector3::Vector3((Vector3 *const)(v3 + 32), &entry_config_ptr->center_pos_list);
    if ( !radius )
    {
      if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->center_radius >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->center_radius >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&entry_config_ptr->center_radius);
      }
      radius = entry_config_ptr->center_radius;
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v20);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
    scene_id = TxtConfigMgr::getDefaultWorldMainSceneId(&v9->design_config.txt_config_mgr);
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v20);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    SceneComp = (unsigned int)Player::getSceneComp(this->player_);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 64), SceneComp);
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "isPlayerInBattleArea",
        759);
      v11 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
              &v21,
              (const char (*)[22])"findScene fails, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v21);
      v8 = 0;
    }
    else
    {
      Player::getAvatarComp(other_player);
      PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 96));
      v12 = (unsigned int)std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      Player::getUid(other_player);
      Scene::findPlayer((const Scene *const)&v20, v12);
      v8 = 0;
      if ( std::operator!=<Player>(&v20, 0LL)
        && std::operator!=<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 96), 0LL) )
      {
        v13 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        Position = Entity::getPosition((const Entity *const)v13);
        if ( (float)(int)radius > getDistance(Position, (const Vector3 *)(v3 + 32)) )
          v8 = 1;
      }
      std::shared_ptr<Player>::~shared_ptr(&v20);
      std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 96));
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "isPlayerInBattleArea",
      745);
    v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v21,
           (const char (*)[34])"findMpPlayGroupExcelConfig fails:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entry_id_);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v8 = 0;
  }
  result = v8;
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

// Line 770: range 0000000016CB982E-0000000016CBA005
int32_t __cdecl BaseMpPlay::createRewardGadget(BaseMpPlay *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  Scene *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  unsigned __int64 v10; // rax
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rsi
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  __int64 EntityId; // rdx
  char v14; // al
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  unsigned __int64 v20; // rdx
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v22; // rax
  void (__fastcall *v24)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // [rsp+0h] [rbp-500h]
  unsigned int val; // [rsp+1Ch] [rbp-4E4h] BYREF
  std::shared_ptr<Config> v26; // [rsp+20h] [rbp-4E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-4D0h] BYREF
  char v28[1200]; // [rsp+50h] [rbp-4B0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1152LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 16 13 scene_ptr:771 64 16 14 gadget_ptr:790 96 16 13 world_ptr:800 128 48 18 qulify_uid_set"
                        ":803 208 816 9 param:781";
  *(_QWORD *)(v1 + 16) = BaseMpPlay::createRewardGadget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -219021312;
  v3[536862723] = -219021312;
  v3[536862725] = -219021312;
  v3[536862726] = 62194;
  v3[536862752] = -202116109;
  v3[536862753] = -202116109;
  v3[536862754] = -202116109;
  v3[536862755] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "createRewardGadget",
      774);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v27, (const char (*)[24])"getMainWorldScene fails");
    common::milog::MiLogStream::~MiLogStream(&v27);
    v4 = -1;
  }
  else
  {
    BaseMpPlay::destroyRewardGadget(this);
    GadgetParam::GadgetParam((GadgetParam *const)(v1 + 208));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    *(_DWORD *)(v1 + 208) = ConstValueExcelConfigMgr::getMpPlayRewardGadgetId(&v5->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->play_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->play_id_);
    }
    *(_DWORD *)(v1 + 312) = this->play_id_;
    v6 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    *(_DWORD *)(v1 + 216) = Scene::genNewEntityId(v6, PROT_ENTITY_GADGET);
    if ( BaseMpPlay::findRewardPosRot(this, (Vector3 *)(v1 + 220), (Vector3 *)(v1 + 232)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "createRewardGadget",
        787);
      v7 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v27,
             (const char (*)[34])"findRewardPosRot fails, entry_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->entry_id_);
      common::milog::MiLogStream::~MiLogStream(&v27);
      v4 = -1;
    }
    else
    {
      EntityMgr::createGadget((const GadgetParam *)(v1 + 64));
      if ( std::operator==<Gadget>(0LL, (const std::shared_ptr<Gadget> *)(v1 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          2u,
          "./src/player/mp_play/base_mp_play.cpp",
          "createRewardGadget",
          793);
        v8 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v27,
               (const char (*)[30])"createGadget fails, entry_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->entry_id_);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v4 = -1;
      }
      else
      {
        v9 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v10 = *(_QWORD *)v9->baseclass_0 + 56LL;
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v24 = *(void (__fastcall **)(std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v10;
        v11 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        v24(v9, v11, &VisionContext::meet_context);
        v12 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        EntityId = Entity::getEntityId((const Entity *const)v12);
        v14 = *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000);
        if ( v14 != 0 && v14 <= 3 )
        {
          LOBYTE(v11) = v14 != 0;
          __asan_report_store4(&this->reward_gadget_eid_, v11, EntityId);
        }
        this->reward_gadget_eid_ = EntityId;
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/mp_play/base_mp_play.cpp",
          "createRewardGadget",
          798);
        v15 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                &v27,
                (const char (*)[21])"create RewardGadget:");
        v16 = std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Gadget,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v17 = common::milog::MiLogStream::operator<<<Gadget,(Gadget*)0>(v15, v16);
        v18 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v17, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        v19 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v20 = (unsigned __int64)(v19->_vptr_DescribalBase + 8);
        if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        (*(void (__fastcall **)(unsigned __int64, std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *))v20)(
          v1 + 96,
          v19);
        if ( std::operator!=<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 96)) )
        {
          M_current = std::vector<unsigned int>::end(&this->reward_remain_uid_vec_)._M_current;
          v22._M_current = std::vector<unsigned int>::begin(&this->reward_remain_uid_vec_)._M_current;
          std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
            (std::set<unsigned int> *const)(v1 + 128),
            v22,
            (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
          std::set<unsigned int>::~set((std::set<unsigned int> *const)(v1 + 128));
        }
        v4 = 0;
        std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 96));
      }
      std::shared_ptr<Gadget>::~shared_ptr((std::shared_ptr<Gadget> *const)(v1 + 64));
    }
    GadgetParam::~GadgetParam((GadgetParam *const)(v1 + 208));
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8080) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8088) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    __asan_stack_free_5(v1, 1152LL, v28);
  }
  return v4;
};

// Line 810: range 0000000016CBA006-0000000016CBA3C6
void __cdecl BaseMpPlay::destroyRewardGadget(BaseMpPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  uint32_t v4; // esi
  VisionContext *v5; // rsi
  Creature *v6; // rax
  std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  unsigned __int64 v8; // rax
  void (__fastcall *v9)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *); // r15
  VisionContext v10; // [rsp+14h] [rbp-BCh] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 13 scene_ptr:815 64 16 16 creature_ptr:821";
  *(_QWORD *)(v1 + 16) = BaseMpPlay::destroyRewardGadget;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reward_gadget_eid_);
  }
  if ( this->reward_gadget_eid_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getMainWorldScene((PlayerSceneComp *const)(v1 + 32));
    if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v1 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "destroyRewardGadget",
        818);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        &v11,
        (const char (*)[24])"getMainWorldScene fails");
      common::milog::MiLogStream::~MiLogStream(&v11);
    }
    else
    {
      v4 = (unsigned int)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->reward_gadget_eid_);
      }
      Scene::findEntity<Creature>((const Scene *const)(v1 + 64), v4);
      v5 = 0LL;
      if ( std::operator!=<Creature>((const std::shared_ptr<Creature> *)(v1 + 64), 0LL) )
      {
        v6 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        Creature::changeLifeState(v6, LIFE_DEAD, 0LL, 1);
        v7 = std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v8 = *(_QWORD *)v7->baseclass_0 + 128LL;
        if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        v9 = *(void (__fastcall **)(std::__shared_ptr_access<Creature,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, VisionContext *))v8;
        VisionContext::VisionContext(&v10, VISION_DIE);
        v5 = &v10;
        v9(v7, &v10);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->reward_gadget_eid_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->reward_gadget_eid_, v5, &this->reward_gadget_eid_);
      }
      this->reward_gadget_eid_ = 0;
      std::shared_ptr<Creature>::~shared_ptr((std::shared_ptr<Creature> *const)(v1 + 64));
    }
    std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v1 + 32));
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
};

// Line 832: range 0000000016CBA3C8-0000000016CBA6EC
int32_t __cdecl BaseMpPlay::checkTakeReward(const BaseMpPlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v7; // rax
  PlayerItemComp *ItemComp; // rax
  std::map<unsigned int,unsigned int>::key_type __x; // [rsp+10h] [rbp-E0h] BYREF
  uint32_t resin; // [rsp+14h] [rbp-DCh]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-D0h] BYREF
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 8 iter:833 64 8 13 remain_it:838 96 16 9 param:853";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::checkTakeReward;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  __x = Player::getUid(player);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 32) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->uid_world_level_map_,
                                                                        &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->uid_world_level_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 32),
         &__y) )
  {
    result = 818;
  }
  else
  {
    __x = Player::getUid(player);
    M_current = std::vector<unsigned int>::end(&this->reward_remain_uid_vec_)._M_current;
    v7._M_current = std::vector<unsigned int>::begin(&this->reward_remain_uid_vec_)._M_current;
    *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                   v7,
                                                                                                   (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                   &__x);
    __y._M_node = (std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::vector<unsigned int>::end(&this->reward_remain_uid_vec_)._M_current;
    if ( __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64),
           (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__y) )
    {
      result = 819;
    }
    else if ( BaseMpPlay::findPlayerDropId(this, player) )
    {
      resin = BaseMpPlay::getResinCost(this);
      if ( resin
        && (*(_QWORD *)(v2 + 96) = 0LL,
            *(_QWORD *)(v2 + 104) = 0LL,
            *(_DWORD *)(v2 + 96) = 106,
            *(_DWORD *)(v2 + 100) = resin,
            ItemComp = Player::getItemComp(player),
            PlayerItemComp::checkSubItem(ItemComp, (const ItemParam *)(v2 + 96))) )
      {
        result = 660;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "checkTakeReward",
        845);
      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
        &v12,
        (const char (*)[23])"findPlayerDropId fails");
      common::milog::MiLogStream::~MiLogStream(&v12);
      result = 1221;
    }
  }
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

// Line 864: range 0000000016CBA6EE-0000000016CBB450
int32_t __cdecl BaseMpPlay::takeReward(BaseMpPlay *const this, Player *player, Entity *entity)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v7; // r14
  int32_t v8; // r14d
  data::ItemLimitType DropLimitType; // eax
  uint32_t LogLevel; // eax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rdx
  PlayerItemComp *ItemComp; // r14
  unsigned int *M_current; // r14
  std::vector<unsigned int>::iterator v18; // rax
  common::milog::MiLogStream *v19; // r14
  common::milog::MiLogStream *v20; // rax
  PlayerItemComp *v21; // rax
  PlayerItemComp *v22; // rax
  common::milog::MiLogStream *v23; // r14
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  Scene *v27; // rax
  common::milog::MiLogStream *v28; // r14
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v35; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v38; // rax
  int32_t result; // eax
  std::string v40; // [rsp+0h] [rbp-250h]
  Entity *entitya; // [rsp+8h] [rbp-248h]
  Player *playera; // [rsp+10h] [rbp-240h]
  BaseMpPlay *thisa; // [rsp+18h] [rbp-238h]
  unsigned int val; // [rsp+20h] [rbp-230h] BYREF
  uint32_t resin; // [rsp+24h] [rbp-22Ch]
  SubItemReason reason; // [rsp+28h] [rbp-228h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+30h] [rbp-220h] BYREF
  std::string v48; // [rsp+40h] [rbp-210h] BYREF
  char v49[496]; // [rsp+60h] [rbp-1F0h] BYREF

  *(&v40._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v40._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v40._M_string_length = (std::string::size_type)entity;
  v3 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 48 1 10 holder:865 64 4 11 drop_id:867 80 8 13 remain_it:905 112 8 17 output_result:878 144 1"
                        "6 13 scene_ptr:890 176 16 11 log_ptr:929 208 16 9 param:900 240 24 10 reason:875 304 24 18 item_"
                        "param_vec:877 368 40 14 drop_param:884";
  *(_QWORD *)(v3 + 16) = BaseMpPlay::takeReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = -218959360;
  v5[536862729] = 62194;
  v5[536862730] = -218959360;
  v5[536862731] = 62194;
  v5[536862732] = -218103808;
  v5[536862733] = -202116109;
  BasicComp = Player::getBasicComp(player);
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v48, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48), 0xB11u, v40);
  std::string::~string(&v48);
  *(_DWORD *)(v3 + 64) = BaseMpPlay::findPlayerDropId(thisa, playera);
  if ( !*(_DWORD *)(v3 + 64) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v48,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/mp_play/base_mp_play.cpp",
      "takeReward",
      870);
    v7 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           (common::milog::MiLogStream *const)&v48,
           (const char (*)[33])"findPlayerDropId fails, for uid:");
    val = Player::getUid(playera);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
    v8 = -1;
    goto LABEL_28;
  }
  if ( *(_BYTE *)(((unsigned __int64)&thisa->play_type_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&thisa->play_type_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&thisa->play_type_);
  }
  DropLimitType = MpPlayExcelConfigMgr::getDropLimitType(thisa->play_type_);
  ActionReason::ActionReason((ActionReason *const)(v3 + 240), ACTION_REASON_MP_PLAY_TAKE_REWARD, DropLimitType);
  *(_BYTE *)(v3 + 254) = 0;
  std::vector<ItemParam>::vector((std::vector<ItemParam> *const)(v3 + 304));
  *(OutputResult *)(v3 + 112) = DropUtils::dropAndSplitItems(
                                  playera,
                                  *(_DWORD *)(v3 + 64),
                                  1u,
                                  (const ActionReason *)(v3 + 240),
                                  (std::vector<ItemParam> *)(v3 + 304));
  if ( !*(_DWORD *)(v3 + 112) )
  {
    DropParam::DropParam((DropParam *const)(v3 + 368));
    if ( Entity::buildDropParamForPlayer(entitya, *(_DWORD *)(v3 + 64), 1u, playera, (DropParam *)(v3 + 368)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "takeReward",
        887);
      v14 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              (common::milog::MiLogStream *const)&v48,
              (const char (*)[41])"buildDropParamForPlayer failed, gadget: ");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v14, entitya);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
      v8 = -1;
      goto LABEL_27;
    }
    Entity::getScene((const Entity *const)(v3 + 144));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 144)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "takeReward",
        893);
      v15 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)&v48,
              (const char (*)[27])"scene_ptr is null, gadget:");
      common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v15, entitya);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
      v8 = -1;
    }
    else
    {
      resin = BaseMpPlay::getResinCost(thisa);
      if ( resin )
      {
        *(_QWORD *)(v3 + 208) = 0LL;
        *(_QWORD *)(v3 + 216) = 0LL;
        *(_DWORD *)(v3 + 208) = 106;
        *(_DWORD *)(v3 + 212) = resin;
        ItemComp = Player::getItemComp(playera);
        SubItemReason::SubItemReason(&reason, (const ActionReason *)(v3 + 240));
        PlayerItemComp::subItem(ItemComp, (const ItemParam *)(v3 + 208), &reason);
      }
      val = Player::getUid(playera);
      M_current = std::vector<unsigned int>::end(&thisa->reward_remain_uid_vec_)._M_current;
      v18._M_current = std::vector<unsigned int>::begin(&thisa->reward_remain_uid_vec_)._M_current;
      *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 80) = std::find<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,unsigned int>(
                                                                                               v18,
                                                                                               (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                               &val);
      reason = (SubItemReason)std::vector<unsigned int>::end(&thisa->reward_remain_uid_vec_)._M_current;
      if ( !__gnu_cxx::operator==<unsigned int *,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 80),
              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)&reason) )
      {
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&reason,
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 80));
        std::vector<unsigned int>::erase(
          &thisa->reward_remain_uid_vec_,
          (std::vector<unsigned int>::const_iterator)reason);
        v21 = Player::getItemComp(playera);
        if ( PlayerItemComp::checkAddItemBatch(
               v21,
               (const std::vector<ItemParam> *)(v3 + 304),
               (const ActionReason *)(v3 + 240)) )
        {
          v27 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 144));
          if ( Scene::dropItems(
                 v27,
                 (const std::vector<ItemParam> *)(v3 + 304),
                 (const DropParam *)(v3 + 368),
                 (const ActionReason *)(v3 + 240)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&v48,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/mp_play/base_mp_play.cpp",
              "takeReward",
              923);
            v28 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    (common::milog::MiLogStream *const)&v48,
                    (const char (*)[50])"[BlossomChestComp]  scene dropItems failed, uid: ");
            val = Player::getUid(playera);
            v29 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &val);
            v30 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v29, (const char (*)[11])", entity: ");
            common::milog::MiLogStream::operator<<<Entity,(Entity*)0>(v30, entitya);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
            v8 = -1;
            goto LABEL_26;
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v48,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/mp_play/base_mp_play.cpp",
            "takeReward",
            926);
          v31 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                  (common::milog::MiLogStream *const)&v48,
                  (const char (*)[5])"uid:");
          val = Player::getUid(playera);
          v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
          v33 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v32, (const char (*)[10])" drop_id:");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v34, (const char (*)[11])" dropItems");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
        }
        else
        {
          v22 = Player::getItemComp(playera);
          PlayerItemComp::addItemBatch(
            v22,
            (const std::vector<ItemParam> *)(v3 + 304),
            (const ActionReason *)(v3 + 240),
            0LL);
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&v48,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/mp_play/base_mp_play.cpp",
            "takeReward",
            917);
          v23 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
                  (common::milog::MiLogStream *const)&v48,
                  (const char (*)[5])"uid:");
          val = Player::getUid(playera);
          v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, &val);
          v25 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v24, (const char (*)[10])" drop_id:");
          v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v25,
                  (const unsigned int *)(v3 + 64));
          common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v26, (const char (*)[14])" addItemBatch");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
        }
        common::tools::perf::make_shared<proto_log::PlayerLogBodyMpPlayBattleReward>();
        v35 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        if ( *(_BYTE *)(((unsigned __int64)&thisa->play_id_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&thisa->play_id_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&thisa->play_id_);
        }
        proto_log::PlayerLogBodyMpPlayBattleReward::set_mp_play_id(v35, thisa->play_id_);
        v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        proto_log::PlayerLogBodyMpPlayBattleReward::set_transaction_no(v36, &thisa->transaction_no_);
        v37 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        proto_log::PlayerLogBodyMpPlayBattleReward::set_cost_resion(v37, resin);
        v38 = std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyMpPlayBattleReward,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 176));
        proto_log::PlayerLogBodyMpPlayBattleReward::set_drop_id(v38, *(_DWORD *)(v3 + 64));
        std::shared_ptr<google::protobuf::Message>::shared_ptr(
          (std::shared_ptr<google::protobuf::Message> *const)(v3 + 208),
          0LL);
        std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleReward,void>(
          &p_body_ptr,
          (const std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleReward> *)(v3 + 176));
        Player::printStatLog(playera, &p_body_ptr, (MessagePtr *)(v3 + 208), 0xEu);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
        std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v3 + 208));
        v8 = 0;
        std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleReward>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyMpPlayBattleReward> *const)(v3 + 176));
        goto LABEL_26;
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&v48,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/mp_play/base_mp_play.cpp",
        "takeReward",
        908);
      v19 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(
              (common::milog::MiLogStream *const)&v48,
              (const char (*)[5])"uid:");
      val = Player::getUid(playera);
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &val);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v20,
        (const char (*)[31])" not in reward_remain_uid_vec_");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
      v8 = -1;
    }
LABEL_26:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 144));
    goto LABEL_27;
  }
  LogLevel = OutputResult::getLogLevel((const OutputResult *const)(v3 + 112));
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v48,
    &common::milog::MiLogDefault::default_log_obj_,
    LogLevel,
    "./src/player/mp_play/base_mp_play.cpp",
    "takeReward",
    881);
  v11 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)&v48,
          (const char (*)[31])"dropAndSplitItems failed, uid:");
  val = Player::getUid(playera);
  v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
  v13 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v12, (const char (*)[13])" mp_play_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &thisa->play_id_);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v48);
  v8 = *(_DWORD *)(v3 + 112);
LABEL_27:
  std::vector<ItemParam>::~vector((std::vector<ItemParam> *const)(v3 + 304));
LABEL_28:
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v3 + 48));
  result = v8;
  if ( v49 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 940: range 0000000016CBB452-0000000016CBB84E
uint32_t __cdecl BaseMpPlay::findPlayerDropId(const BaseMpPlay *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r12
  uint32_t result; // eax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v7; // rdx
  unsigned int *p_second; // rax
  const MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rdi
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::map<unsigned int,unsigned int>::key_type __x; // [rsp+14h] [rbp-CCh] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self __y; // [rsp+18h] [rbp-C8h] BYREF
  std::shared_ptr<Config> v19; // [rsp+20h] [rbp-C0h] BYREF
  common::milog::MiLogStream v20; // [rsp+30h] [rbp-B0h] BYREF
  char v21[144]; // [rsp+50h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 15 world_level:947 48 4 11 drop_id:948 64 8 8 iter:941";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::findPlayerDropId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  __x = Player::getUid(player);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        &this->uid_world_level_map_,
                                                                        &__x);
  __y._M_node = std::map<unsigned int,unsigned int>::end(&this->uid_world_level_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "findPlayerDropId",
      944);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v20,
           (const char (*)[36])"uid_world_level_map_ not found uid:");
    __x = Player::getUid(player);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &__x);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 0;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v7->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    *(_DWORD *)(v2 + 32) = v7->second;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v19);
    p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.mp_play_config_mgr;
    v10 = *(_DWORD *)(v2 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
    {
      p_mp_play_config_mgr = (const MpPlayExcelConfigMgr *)&this->entry_id_;
      __asan_report_load4(&this->entry_id_);
    }
    *(_DWORD *)(v2 + 48) = MpPlayExcelConfigMgr::findMpPlayRewardId(p_mp_play_config_mgr, this->entry_id_, v10);
    std::shared_ptr<Config>::~shared_ptr(&v19);
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/mp_play/base_mp_play.cpp",
      "findPlayerDropId",
      950);
    v11 = common::milog::MiLogStream::operator<<<char [5],(char *[5])0>(&v20, (const char (*)[5])"uid:");
    __x = Player::getUid(player);
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &__x);
    v13 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v12, (const char (*)[14])" world_level:");
    v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
    v15 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v14, (const char (*)[10])" drop_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = *(_DWORD *)(v2 + 48);
  }
  if ( v21 == (char *)v2 )
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

// Line 956: range 0000000016CBB850-0000000016CBB9B9
bool __fastcall BaseMpPlay::isRemainRewards(const BaseMpPlay *const this, uint32_t uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *M_current; // r14
  std::vector<unsigned int>::const_iterator v6; // rax
  bool result; // al
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+18h] [rbp-98h] BYREF
  char v9[144]; // [rsp+20h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 7 uid:955 64 8 8 iter:957";
  *(_QWORD *)(v2 + 16) = BaseMpPlay::isRemainRewards;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = uid;
  M_current = std::vector<unsigned int>::end(&this->reward_remain_uid_vec_)._M_current;
  v6._M_current = std::vector<unsigned int>::begin(&this->reward_remain_uid_vec_)._M_current;
  *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                                                                                                 v6,
                                                                                                 (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                                                                                                 (const unsigned int *)(v2 + 48));
  __rhs._M_current = std::vector<unsigned int>::end(&this->reward_remain_uid_vec_)._M_current;
  result = __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
             (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 64),
             &__rhs);
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

// Line 962: range 0000000016CBB9BA-0000000016CBBB4C
uint32_t __cdecl BaseMpPlay::getResinCost(const BaseMpPlay *const this)
{
  MpPlayExcelConfigMgr *p_mp_play_config_mgr; // rcx
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  const data::MpPlayGroupExcelConfig *entry_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v6);
  p_mp_play_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6)->design_config.txt_config_mgr.mp_play_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->entry_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->entry_id_);
  }
  entry_config_ptr = data::MpPlayExcelConfigMgrBase::findMpPlayGroupExcelConfig(p_mp_play_config_mgr, this->entry_id_);
  std::shared_ptr<Config>::~shared_ptr(&v6);
  if ( entry_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&entry_config_ptr->resin_cost >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&entry_config_ptr->resin_cost >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&entry_config_ptr->resin_cost);
    }
    return entry_config_ptr->resin_cost;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/mp_play/base_mp_play.cpp",
      "getResinCost",
      966);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v7,
           (const char (*)[36])"findMpPlayGroupExcelConfig play_id:");
    v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &this->play_id_);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v3, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v7);
    return 0;
  }
};
