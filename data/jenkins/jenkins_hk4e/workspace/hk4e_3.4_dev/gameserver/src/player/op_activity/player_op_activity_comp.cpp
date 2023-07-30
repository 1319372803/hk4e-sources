// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/op_activity/player_op_activity_comp.cpp

// Line 26: range 0000000016CC99AC-0000000016CC9AAC
void __cdecl OpActivityRecord::fromBin(
        OpActivityRecord *const this,
        const proto::OpActivityRecordBin *op_activity_recored)
{
  uint32_t v2; // ecx
  char v3; // dl
  __int64 v4; // rdx
  uint32_t v5; // ecx
  char v6; // dl
  __int64 v7; // rdx
  uint32_t refresh_time; // ecx
  char v9; // dl
  __int64 v10; // rdx
  const proto::OpActivityRecordBin *op_activity_recoreda; // [rsp+0h] [rbp-10h]

  op_activity_recoreda = op_activity_recored;
  v2 = proto::OpActivityRecordBin::schedule_id(op_activity_recored);
  v3 = *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000);
  LOBYTE(op_activity_recored) = v3 != 0;
  v4 = (v3 != 0) & (unsigned __int8)((char)(((unsigned __int8)this & 7) + 3) >= v3);
  if ( (_BYTE)v4 )
    __asan_report_store4(this, op_activity_recored, v4);
  this->schedule_id = v2;
  v5 = proto::OpActivityRecordBin::use_bonus_count(op_activity_recoreda);
  v6 = *(_BYTE *)(((unsigned __int64)&this->use_bonus_count >> 3) + 0x7FFF8000);
  LOBYTE(op_activity_recored) = v6 != 0;
  v7 = (v6 != 0) & (unsigned __int8)((char)((((_BYTE)this + 4) & 7) + 3) >= v6);
  if ( (_BYTE)v7 )
    __asan_report_store4(&this->use_bonus_count, op_activity_recored, v7);
  this->use_bonus_count = v5;
  refresh_time = proto::OpActivityRecordBin::last_refresh_time(op_activity_recoreda);
  v9 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000);
  LOBYTE(op_activity_recored) = v9 != 0;
  v10 = (v9 != 0) & (unsigned __int8)((char)((((_BYTE)this + 8) & 7) + 3) >= v9);
  if ( (_BYTE)v10 )
    __asan_report_store4(&this->last_refresh_time, op_activity_recored, v10);
  this->last_refresh_time = refresh_time;
};

// Line 33: range 0000000016CC9AAE-0000000016CC9BAB
void __cdecl OpActivityRecord::toBin(
        const OpActivityRecord *const this,
        proto::OpActivityRecordBin *op_activity_recored)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  proto::OpActivityRecordBin::set_schedule_id(op_activity_recored, this->schedule_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->use_bonus_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->use_bonus_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->use_bonus_count);
  }
  proto::OpActivityRecordBin::set_use_bonus_count(op_activity_recored, this->use_bonus_count);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->last_refresh_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->last_refresh_time);
  }
  proto::OpActivityRecordBin::set_last_refresh_time(op_activity_recored, this->last_refresh_time);
};

// Line 40: range 0000000016CC9BAC-0000000016CC9DC4
int32_t __cdecl PlayerOpActivityComp::fromBin(
        PlayerOpActivityComp *const this,
        const proto::PlayerDataBin *player_data_bin)
{
  proto::PlayerOpActivityCompBin *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  const proto::PlayerOpActivityCompBin *v5; // rax
  OpActivityRecord *v6; // rax
  int32_t result; // eax
  std::unordered_map<unsigned int,OpActivityRecord>::key_type __k; // [rsp+1Ch] [rbp-D4h] BYREF
  google::protobuf::RepeatedPtrField<proto::OpActivityRecordBin>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  google::protobuf::RepeatedPtrField<proto::OpActivityRecordBin>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const google::protobuf::RepeatedPtrField<proto::OpActivityRecordBin> *__for_range; // [rsp+30h] [rbp-C0h]
  const proto::OpActivityRecordBin *proto_op_activity_recored; // [rsp+38h] [rbp-B8h]
  char v13[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (proto::PlayerOpActivityCompBin *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (proto::PlayerOpActivityCompBin *)v3;
  }
  v2->_vptr_MessageLite = (int (**)(...))1102416563;
  v2->_internal_metadata_.ptr_ = "1 48 48 13 proto_comp:41";
  v2->op_activity_recored_list_.arena_ = (google::protobuf::Arena *)PlayerOpActivityComp::fromBin;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  v5 = proto::PlayerDataBin::op_activity_bin(player_data_bin);
  proto::PlayerOpActivityCompBin::PlayerOpActivityCompBin(v2 + 1, v5);
  __for_range = proto::PlayerOpActivityCompBin::op_activity_recored_list(v2 + 1);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::OpActivityRecordBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::OpActivityRecordBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::OpActivityRecordBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_op_activity_recored = google::protobuf::internal::RepeatedPtrIterator<proto::OpActivityRecordBin const>::operator*(&__for_begin);
    __k = proto::OpActivityRecordBin::schedule_id(proto_op_activity_recored);
    v6 = std::unordered_map<unsigned int,OpActivityRecord>::operator[](&this->op_activity_record_map_, &__k);
    OpActivityRecord::fromBin(v6, proto_op_activity_recored);
    google::protobuf::internal::RepeatedPtrIterator<proto::OpActivityRecordBin const>::operator++(&__for_begin);
  }
  proto::PlayerOpActivityCompBin::~PlayerOpActivityCompBin(v2 + 1);
  result = 0;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v2->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 50: range 0000000016CC9DC6-0000000016CC9E8B
int32_t __cdecl PlayerOpActivityComp::toBin(PlayerOpActivityComp *const this, proto::PlayerDataBin *player_data_bin)
{
  proto::OpActivityRecordBin *v2; // rax
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  proto::PlayerOpActivityCompBin *proto_comp; // [rsp+28h] [rbp-28h]
  std::unordered_map<unsigned int,OpActivityRecord> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,OpActivityRecord> *v8; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,OpActivityRecord> >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *op_activity_recored; // [rsp+48h] [rbp-8h]

  proto_comp = proto::PlayerDataBin::mutable_op_activity_bin(player_data_bin);
  __for_range = &this->op_activity_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::begin(&this->op_activity_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::end(&this->op_activity_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,OpActivityRecord>,false>(&__for_begin, &__for_end) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,OpActivityRecord>(v8);
    op_activity_recored = (std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *)std::get<1ul,unsigned int const,OpActivityRecord>(v8);
    v2 = proto::PlayerOpActivityCompBin::add_op_activity_recored_list(proto_comp);
    OpActivityRecord::toBin(op_activity_recored, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 60: range 0000000016CC9E8C-0000000016CC9EAA
int32_t __cdecl PlayerOpActivityComp::init(PlayerOpActivityComp *const this)
{
  PlayerOpActivityComp::initEventObservers(this);
  return 0;
};

// Line 67: range 0000000016CC9EAC-0000000016CC9ECF
int32_t __cdecl PlayerOpActivityComp::onLogin(PlayerOpActivityComp *const this, bool is_new_player)
{
  PlayerOpActivityComp::checkRefreshScheduleAndBonusCount(this);
  return 0;
};

// Line 73: range 0000000016CC9ED0-0000000016CC9F42
void __cdecl PlayerOpActivityComp::onDailyRefresh(PlayerOpActivityComp *const this)
{
  void (__fastcall **v1)(PlayerOpActivityComp *const); // rax

  PlayerOpActivityComp::checkRefreshScheduleAndBonusCount(this);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (void (__fastcall **)(PlayerOpActivityComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*v1)(this);
};

// Line 80: range 0000000016CC9F44-0000000016CCA0D6
int32_t __cdecl PlayerOpActivityComp::notifyAllData(PlayerOpActivityComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedPtrField<proto::OpActivityInfo> *v4; // rdx
  int32_t result; // eax
  char v6[176]; // [rsp+10h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 48 48 9 notify:81";
  *(_QWORD *)(v1 + 16) = PlayerOpActivityComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::OpActivityDataNotify::OpActivityDataNotify((proto::OpActivityDataNotify *const)(v1 + 48));
  v4 = proto::OpActivityDataNotify::mutable_op_activity_info_list((proto::OpActivityDataNotify *const)(v1 + 48));
  PlayerOpActivityComp::fillOpActivityInfoList(this, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::OpActivityDataNotify::~OpActivityDataNotify((proto::OpActivityDataNotify *const)(v1 + 48));
  result = 0;
  if ( v6 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 88: range 0000000016CCA0D8-0000000016CCA207
int32_t __cdecl PlayerOpActivityComp::start(PlayerOpActivityComp *const this)
{
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v5; // [rsp+20h] [rbp-30h] BYREF

  if ( common::tools::MiTimer::isActive(&this->op_activity_timer)
    || !PlayerUnixTimer::startS(
          &this->op_activity_timer,
          0x3Cu,
          1,
          "./src/player/op_activity/player_op_activity_comp.cpp",
          "start",
          89) )
  {
    return 0;
  }
  common::milog::MiLogStream::create(
    &v5,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/op_activity/player_op_activity_comp.cpp",
    "start",
    91);
  v2 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v5,
         (const char (*)[37])"op_activity_timer start failed, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v5);
  return -1;
};

// Line 98: range 0000000016CCA208-0000000016CCA599
void __cdecl PlayerOpActivityComp::initEventObservers(PlayerOpActivityComp *const this)
{
  unsigned __int64 p_pending_que; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // [rsp+10h] [rbp-F0h]
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  PlayerEventComp *event_comp; // [rsp+28h] [rbp-D8h]
  std::weak_ptr<PlayerOpActivityComp> v7; // [rsp+30h] [rbp-D0h] BYREF
  PlayerEventComp varC0; // [rsp+40h] [rbp-C0h] BYREF

  p_pending_que = (unsigned __int64)&varC0.event_center_.context_.pending_que_;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_pending_que = v2;
  }
  *(_QWORD *)p_pending_que = 1102416563LL;
  *(_QWORD *)(p_pending_que + 8) = "2 32 16 12 this_ptr:101 64 16 12 this_wtr:107";
  *(_QWORD *)(p_pending_que + 16) = PlayerOpActivityComp::initEventObservers;
  v3 = (_DWORD *)(p_pending_que >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/op_activity/player_op_activity_comp.cpp",
    "initEventObservers",
    99);
  v4 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
         (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
         (const char (*)[18])"initObservers....");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  toThisPtr<PlayerOpActivityComp>((PlayerOpActivityComp *)(p_pending_que + 32));
  if ( std::operator==<PlayerOpActivityComp>(0LL, (const std::shared_ptr<PlayerOpActivityComp> *)(p_pending_que + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&varC0._M_weak_this._M_refcount,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/op_activity/player_op_activity_comp.cpp",
      "initEventObservers",
      104);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount,
      (const char (*)[52])"dynamic_pointer_cast to PlayerOpActivityComp failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&varC0._M_weak_this._M_refcount);
  }
  else
  {
    std::weak_ptr<PlayerOpActivityComp>::weak_ptr<PlayerOpActivityComp,void>(
      (std::weak_ptr<PlayerOpActivityComp> *const)(p_pending_que + 64),
      (const std::shared_ptr<PlayerOpActivityComp> *)(p_pending_que + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    event_comp = Player::getEventComp(this->player_);
    std::weak_ptr<PlayerOpActivityComp>::weak_ptr(
      &v7,
      (const std::weak_ptr<PlayerOpActivityComp> *)(p_pending_que + 64));
    PlayerEventComp::registerObserver<PlayerOpActivityComp,PlayerLevelupEvent>(
      &varC0,
      (std::weak_ptr<PlayerOpActivityComp> *)event_comp,
      (void (*)(PlayerOpActivityComp *, const PlayerLevelupEvent *))&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&varC0);
    std::weak_ptr<PlayerOpActivityComp>::~weak_ptr(&v7);
    std::weak_ptr<PlayerOpActivityComp>::~weak_ptr((std::weak_ptr<PlayerOpActivityComp> *const)(p_pending_que + 64));
  }
  std::shared_ptr<PlayerOpActivityComp>::~shared_ptr((std::shared_ptr<PlayerOpActivityComp> *const)(p_pending_que + 32));
  if ( &varC0.event_center_.context_.pending_que_ == (std::queue<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >> *)p_pending_que )
  {
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_pending_que = 1172321806LL;
    *(_QWORD *)((p_pending_que >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_pending_que >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 115: range 0000000016CCA59A-0000000016CCA614
void __cdecl PlayerOpActivityComp::onOpActivityTimer(PlayerOpActivityComp *const this, uint64_t now_ms)
{
  void (__fastcall **v2)(PlayerOpActivityComp *const); // rax

  if ( PlayerOpActivityComp::checkRefreshScheduleAndBonusCount(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = (void (__fastcall **)(PlayerOpActivityComp *const))(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v2)(this);
  }
};

// Line 123: range 0000000016CCA616-0000000016CCAC15
bool __cdecl PlayerOpActivityComp::checkRefreshScheduleAndBonusCount(PlayerOpActivityComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::pointer v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rax
  _DWORD *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  OpActivityRecord *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  bool result; // al
  bool is_has_change; // [rsp+13h] [rbp-15Dh]
  uint32_t now; // [rsp+14h] [rbp-15Ch]
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-158h] BYREF
  const data::DbOpActivityConfigMgr *db_op_activity_mgr; // [rsp+20h] [rbp-150h]
  const std::vector<unsigned int> *cur_schedule_id_vec; // [rsp+28h] [rbp-148h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-140h]
  const data::OpActivityExcelConfig *activity_config_ptr; // [rsp+38h] [rbp-138h]
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-130h] BYREF
  common::milog::MiLogStream v24; // [rsp+50h] [rbp-120h] BYREF
  common::milog::MiLogStream v25; // [rsp+70h] [rbp-100h] BYREF
  common::milog::MiLogStream v26; // [rsp+90h] [rbp-E0h] BYREF
  char v27[192]; // [rsp+B0h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 17 is_has_update:174 64 4 15 schedule_id:144 80 4 15 activity_id:150 96 8 8 iter:130 128 "
                        "12 22 op_activity_record:162";
  *(_QWORD *)(v1 + 16) = PlayerOpActivityComp::checkRefreshScheduleAndBonusCount;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234556924;
  v3[536862723] = -218959360;
  v3[536862724] = -202177536;
  is_has_change = 0;
  now = common::tools::TimeUtils::getNow();
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v23);
  db_op_activity_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.db_config_mgr.db_local_config_mgr.op_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v23);
  cur_schedule_id_vec = data::DbOpActivityConfigMgr::findActiveOpActivitySchedules(db_op_activity_mgr, now);
  *(std::unordered_map<unsigned int,OpActivityRecord>::iterator *)(v1 + 96) = std::unordered_map<unsigned int,OpActivityRecord>::begin(&this->op_activity_record_map_);
  while ( 1 )
  {
    __for_end._M_current = (const unsigned int *)std::unordered_map<unsigned int,OpActivityRecord>::end(&this->op_activity_record_map_)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,OpActivityRecord>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,OpActivityRecord>,false> *)(v1 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,OpActivityRecord>,false> *)&__for_end) )
      break;
    v4 = std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false> *const)(v1 + 96));
    if ( !common::tools::MiscUtils::isContains<unsigned int>(cur_schedule_id_vec, &v4->first) )
    {
      *(std::unordered_map<unsigned int,OpActivityRecord>::iterator *)(v1 + 96) = std::unordered_map<unsigned int,OpActivityRecord>::erase(
                                                                                    &this->op_activity_record_map_,
                                                                                    *(std::unordered_map<unsigned int,OpActivityRecord>::iterator *)(v1 + 96));
      is_has_change = 1;
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false> *const)(v1 + 96));
    }
  }
  __for_range = cur_schedule_id_vec;
  *(std::vector<unsigned int>::const_iterator *)(v1 + 96) = std::vector<unsigned int>::begin(cur_schedule_id_vec);
  __for_end._M_current = std::vector<unsigned int>::end(__for_range)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v1 + 96),
            &__for_end) )
  {
    v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 96));
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v1 + 64) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,OpActivityRecord>,unsigned int>(
            &this->op_activity_record_map_,
            (const unsigned int *)(v1 + 64)) )
    {
      *(_DWORD *)(v1 + 80) = data::DbOpActivityConfigMgr::getActivityIdByScheduleId(
                               db_op_activity_mgr,
                               *(_DWORD *)(v1 + 64));
      if ( *(_DWORD *)(v1 + 80) )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v23);
        v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23);
        activity_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityExcelConfig(
                                &v8->design_config.txt_config_mgr.op_activity_config_mgr,
                                *(_DWORD *)(v1 + 80));
        std::shared_ptr<Config>::~shared_ptr(&v23);
        if ( activity_config_ptr )
        {
          *(_DWORD *)(v1 + 128) = 0;
          *(_DWORD *)(v1 + 132) = 0;
          *(_DWORD *)(v1 + 136) = 0;
          *(_DWORD *)(v1 + 128) = *(_DWORD *)(v1 + 64);
          *(_DWORD *)(v1 + 132) = 0;
          v13 = std::unordered_map<unsigned int,OpActivityRecord>::emplace<unsigned int &,OpActivityRecord&>(
                  &this->op_activity_record_map_,
                  (unsigned int *)(v1 + 64),
                  (OpActivityRecord *)(v1 + 128),
                  (unsigned int *)&this->op_activity_record_map_,
                  v9);
          if ( !v13.second )
          {
            common::milog::MiLogStream::create(
              &v26,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/op_activity/player_op_activity_comp.cpp",
              "checkRefreshScheduleAndBonusCount",
              167);
            v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    &v26,
                    (const char (*)[48])"emplace op_activity_record failed, schedule_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 64));
            common::milog::MiLogStream::~MiLogStream(&v26);
          }
          else
          {
            is_has_change = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v25,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/op_activity/player_op_activity_comp.cpp",
            "checkRefreshScheduleAndBonusCount",
            159);
          v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v25,
                  (const char (*)[47])"findOpActivityExcelConfig failed, schedule_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v10,
                  (const unsigned int *)(v1 + 64));
          v12 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v11, (const char (*)[13])", config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 80));
          common::milog::MiLogStream::~MiLogStream(&v25);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/op_activity/player_op_activity_comp.cpp",
          "checkRefreshScheduleAndBonusCount",
          153);
        v7 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
               &v24,
               (const char (*)[31])"activity_id is 0, schedule_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 64));
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
    }
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v1 + 96));
  }
  *(_BYTE *)(v1 + 48) = 0;
  PlayerOpActivityComp::updateBonusCount(this, now, (bool *)(v1 + 48));
  result = is_has_change || *(_BYTE *)(v1 + 48);
  if ( v27 == (char *)v1 )
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
  return result;
};

// Line 182: range 0000000016CCAC16-0000000016CCAF19
void __cdecl PlayerOpActivityComp::fillOpActivityInfoList(
        PlayerOpActivityComp *const this,
        google::protobuf::RepeatedPtrField<proto::OpActivityInfo> *proto_op_activity_info_list)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  proto::OpActivityInfo *v6; // r14
  proto::OpActivityInfo *v7; // rax
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord> *__for_range; // [rsp+20h] [rbp-F0h]
  const std::pair<unsigned int const,OpActivityRecord> *v11; // [rsp+28h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,OpActivityRecord> >::type *schedule_id; // [rsp+30h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *op_activity_record; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-D0h] BYREF
  char v15[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 56 20 op_activity_info:185";
  *(_QWORD *)(v2 + 16) = PlayerOpActivityComp::fillOpActivityInfoList;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  __for_range = &this->op_activity_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::begin(&this->op_activity_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::end(&this->op_activity_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,OpActivityRecord>,false>(&__for_begin, &__for_end) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator*(&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,OpActivityRecord>(v11);
    op_activity_record = (std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *)std::get<1ul,unsigned int const,OpActivityRecord>(v11);
    proto::OpActivityInfo::OpActivityInfo((proto::OpActivityInfo *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    if ( PlayerOpActivityComp::fillOpActivitiInfo(this, (proto::OpActivityInfo *)(v2 + 32), *schedule_id) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/op_activity/player_op_activity_comp.cpp",
        "fillOpActivityInfoList",
        188);
      v5 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v14,
             (const char (*)[40])"fillOpActivitiInfo failed, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, schedule_id);
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      v6 = std::move<proto::OpActivityInfo &>((proto::OpActivityInfo *)(v2 + 32));
      v7 = google::protobuf::RepeatedPtrField<proto::OpActivityInfo>::Add(proto_op_activity_info_list);
      proto::OpActivityInfo::operator=(v7, v6);
    }
    proto::OpActivityInfo::~OpActivityInfo((proto::OpActivityInfo *const)(v2 + 32));
    std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator++(&__for_begin);
  }
  if ( v15 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 196: range 0000000016CCAF1A-0000000016CCB520
__int64 __fastcall PlayerOpActivityComp::fillOpActivitiInfo(
        PlayerOpActivityComp *const this,
        proto::OpActivityInfo *op_activity_info,
        uint32_t schedule_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  OpActivityExcelConfigMgr *p_op_activity_config_mgr; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::unordered_map<unsigned int,OpActivityRecord>::mapped_type *v12; // rdx
  uint32_t *p_use_bonus_count; // rax
  common::milog::MiLogStream *v14; // rax
  uint32_t use_bonus_count; // [rsp+2Ch] [rbp-B4h]
  data::DbOpActivityConfigMgr *db_op_activity_mgr; // [rsp+30h] [rbp-B0h]
  const data::OpActivityScheduleConfig *schedule_config_ptr; // [rsp+38h] [rbp-A8h]
  const data::OpActivityExcelConfig *activity_config_ptr; // [rsp+40h] [rbp-A0h]
  proto::BonusOpActivityInfo *bonus_info; // [rsp+48h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-80h] BYREF
  char v23[96]; // [rsp+80h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 15 schedule_id:195";
  *(_QWORD *)(v3 + 16) = PlayerOpActivityComp::fillOpActivitiInfo;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = schedule_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  db_op_activity_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.db_config_mgr.db_local_config_mgr.op_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,OpActivityRecord>,unsigned int>(
         &this->op_activity_record_map_,
         (const unsigned int *)(v3 + 32)) )
  {
    schedule_config_ptr = data::DbOpActivityConfigMgr::findOpActivityScheduleConfig(
                            db_op_activity_mgr,
                            *(_DWORD *)(v3 + 32));
    if ( schedule_config_ptr )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v21);
      p_op_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.op_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                          + 0x7FFF8000) )
      {
        __asan_report_load4(&schedule_config_ptr->config_id);
      }
      activity_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityExcelConfig(
                              p_op_activity_config_mgr,
                              schedule_config_ptr->config_id);
      std::shared_ptr<Config>::~shared_ptr(&v21);
      if ( activity_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->config_id);
        }
        proto::OpActivityInfo::set_activity_id(op_activity_info, schedule_config_ptr->config_id);
        proto::OpActivityInfo::set_schedule_id(op_activity_info, *(_DWORD *)(v3 + 32));
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->begin_time >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->begin_time);
        }
        proto::OpActivityInfo::set_begin_time(op_activity_info, schedule_config_ptr->begin_time);
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->end_time);
        }
        proto::OpActivityInfo::set_end_time(op_activity_info, schedule_config_ptr->end_time);
        bonus_info = proto::OpActivityInfo::mutable_bonus_info(op_activity_info);
        v12 = std::unordered_map<unsigned int,OpActivityRecord>::operator[](
                &this->op_activity_record_map_,
                (const std::unordered_map<unsigned int,OpActivityRecord>::key_type *)(v3 + 32));
        p_use_bonus_count = &v12->use_bonus_count;
        if ( *(_BYTE *)(((unsigned __int64)p_use_bonus_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)p_use_bonus_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_use_bonus_count >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(p_use_bonus_count);
        }
        use_bonus_count = v12->use_bonus_count;
        if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&activity_config_ptr->bonus_value);
        }
        if ( use_bonus_count >= activity_config_ptr->bonus_value )
          proto::BonusOpActivityInfo::set_left_bonus_count(bonus_info, 0);
        else
          proto::BonusOpActivityInfo::set_left_bonus_count(
            bonus_info,
            activity_config_ptr->bonus_value - use_bonus_count);
        result = 0LL;
      }
      else
      {
        common::milog::MiLogStream::create(
          &v22,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/op_activity/player_op_activity_comp.cpp",
          "fillOpActivitiInfo",
          209);
        v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               &v22,
               (const char (*)[47])"findOpActivityExcelConfig failed, schedule_id:");
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v9,
                (const unsigned int *)(v3 + 32));
        v11 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v10, (const char (*)[13])", config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &schedule_config_ptr->config_id);
        common::milog::MiLogStream::~MiLogStream(&v22);
        result = 0xFFFFFFFFLL;
      }
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/op_activity/player_op_activity_comp.cpp",
        "fillOpActivitiInfo",
        203);
      v6 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
             &v22,
             (const char (*)[51])"findOpActivityScheduleConfig nullptr, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = 0xFFFFFFFFLL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/op_activity/player_op_activity_comp.cpp",
      "fillOpActivitiInfo",
      229);
    v14 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v22,
            (const char (*)[36])"schedule_id not exist, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
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

// Line 237: range 0000000016CCB522-0000000016CCC2BB
__int64 __fastcall PlayerOpActivityComp::tryGetMaxDropCountInBlossom(
        PlayerOpActivityComp *const this,
        uint32_t refresh_id,
        unsigned __int64 choose_schedule_id,
        unsigned __int64 drop_count)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  void (__fastcall **v7)(PlayerOpActivityComp *const); // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::unordered_map<unsigned int,OpActivityRecord>::iterator *p_for_end; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rcx
  uint32_t use_bonus_count; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v20; // rax
  _DWORD *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rcx
  std::pair<unsigned int,unsigned int> *v29; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v32; // al
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  std::pair<unsigned int,unsigned int> *v37; // rax
  uint32_t *v38; // rdx
  uint32_t v39; // ecx
  char v40; // dl
  __int64 v41; // rdx
  __int64 v42; // rdx
  bool is_has_candidate_activity; // [rsp+23h] [rbp-1BDh]
  uint32_t max_bonus_ratio; // [rsp+24h] [rbp-1BCh]
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_begin; // [rsp+28h] [rbp-1B8h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_end; // [rsp+30h] [rbp-1B0h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+40h] [rbp-1A0h] BYREF
  const data::DbOpActivityConfigMgr *db_op_activity_mgr; // [rsp+48h] [rbp-198h]
  const OpActivityExcelConfigMgr *op_activity_config_mgr; // [rsp+50h] [rbp-190h]
  const std::set<unsigned int> *candidate_bonus_id_set; // [rsp+58h] [rbp-188h]
  std::unordered_map<unsigned int,OpActivityRecord> *__for_range; // [rsp+60h] [rbp-180h]
  const std::pair<unsigned int const,OpActivityRecord> *v55; // [rsp+68h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,OpActivityRecord> >::type *schedule_id; // [rsp+70h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *record; // [rsp+78h] [rbp-168h]
  const data::OpActivityScheduleConfig *schedule_config_ptr; // [rsp+80h] [rbp-160h]
  const data::OpActivityExcelConfig *activity_config_ptr; // [rsp+88h] [rbp-158h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+90h] [rbp-150h]
  const data::OpActivityBonusExcelConfig *bonus_config_ptr; // [rsp+98h] [rbp-148h]
  std::pair<unsigned int,unsigned int> __u; // [rsp+A0h] [rbp-140h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+A8h] [rbp-138h] BYREF
  std::shared_ptr<Config> v64; // [rsp+B0h] [rbp-130h] BYREF
  common::milog::MiLogStream v65; // [rsp+C0h] [rbp-120h] BYREF
  common::milog::MiLogStream v66; // [rsp+E0h] [rbp-100h] BYREF
  common::milog::MiLogStream v67; // [rsp+100h] [rbp-E0h] BYREF
  char v68[192]; // [rsp+120h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 activity_id:266 64 4 12 bonus_id:279 80 4 14 refresh_id:236 96 8 8 iter:246 128 12 19 "
                        "chosen_schedule:255";
  *(_QWORD *)(v4 + 16) = PlayerOpActivityComp::tryGetMaxDropCountInBlossom;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -202177536;
  *(_DWORD *)(v4 + 80) = refresh_id;
  if ( PlayerOpActivityComp::checkRefreshScheduleAndBonusCount(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (void (__fastcall **)(PlayerOpActivityComp *const))(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v7)(this);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v64);
  db_op_activity_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64)->design_config.db_config_mgr.db_local_config_mgr.op_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v64);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v64);
  op_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v64)->design_config.txt_config_mgr.op_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v64);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &op_activity_config_mgr->refresh_id_bonus_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v4 + 80));
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&op_activity_config_mgr->refresh_id_bonus_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v67,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/op_activity/player_op_activity_comp.cpp",
      "tryGetMaxDropCountInBlossom",
      249);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v67,
           (const char (*)[31])"no op_activity for refresh_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    common::milog::MiLogStream::~MiLogStream(&v67);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    candidate_bonus_id_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v4 + 96))->second;
    max_bonus_ratio = 0;
    *(_QWORD *)(v4 + 128) = 0LL;
    *(_DWORD *)(v4 + 136) = 0;
    is_has_candidate_activity = 0;
    __for_range = &this->op_activity_record_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::begin(&this->op_activity_record_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::end(&this->op_activity_record_map_)._M_cur;
    while ( 1 )
    {
      p_for_end = &__for_end;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,OpActivityRecord>,false>(&__for_begin, &__for_end) )
        break;
      v55 = std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator*(&__for_begin);
      schedule_id = std::get<0ul,unsigned int const,OpActivityRecord>(v55);
      record = (std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *)std::get<1ul,unsigned int const,OpActivityRecord>(v55);
      if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(schedule_id);
      }
      schedule_config_ptr = data::DbOpActivityConfigMgr::findOpActivityScheduleConfig(db_op_activity_mgr, *schedule_id);
      if ( schedule_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->config_id);
        }
        *(_DWORD *)(v4 + 48) = schedule_config_ptr->config_id;
        activity_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityExcelConfig(
                                op_activity_config_mgr,
                                *(_DWORD *)(v4 + 48));
        if ( activity_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&record->use_bonus_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->use_bonus_count >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&record->use_bonus_count);
          }
          use_bonus_count = record->use_bonus_count;
          if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&activity_config_ptr->bonus_value);
          }
          if ( use_bonus_count < activity_config_ptr->bonus_value )
          {
            is_has_candidate_activity = 1;
            __for_range_0 = &activity_config_ptr->bonus_list;
            __for_begin_0._M_current = std::vector<unsigned int>::begin(&activity_config_ptr->bonus_list)._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v20 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v21 = v20;
              if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v20);
              }
              *(_DWORD *)(v4 + 64) = *v21;
              if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                     candidate_bonus_id_set,
                     (const unsigned int *)(v4 + 64)) )
              {
                bonus_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityBonusExcelConfig(
                                     op_activity_config_mgr,
                                     *(_DWORD *)(v4 + 64));
                if ( bonus_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                                    + 0x7FFF8000) )
                  {
                    __asan_report_load4(&bonus_config_ptr->bonus_ratio);
                  }
                  if ( max_bonus_ratio <= bonus_config_ptr->bonus_ratio )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4(&bonus_config_ptr->bonus_ratio);
                    }
                    if ( max_bonus_ratio == bonus_config_ptr->bonus_ratio )
                    {
                      if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128)) )
                        goto LABEL_52;
                      v29 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128));
                      p_second = &v29->second;
                      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                                   + 0x7FFF8000) )
                      {
                        __asan_report_load4(p_second);
                      }
                      second = v29->second;
                      if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)schedule_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                                           + 0x7FFF8000) )
                      {
                        __asan_report_load4(&schedule_config_ptr->end_time);
                      }
                      if ( second > schedule_config_ptr->end_time )
LABEL_52:
                        v32 = 1;
                      else
                        v32 = 0;
                      if ( v32 )
                      {
                        __u = std::make_pair<unsigned int const&,unsigned int const&>(
                                schedule_id,
                                &schedule_config_ptr->end_time);
                        std::optional<std::pair<unsigned int,unsigned int>>::operator=<std::pair<unsigned int,unsigned int>>(
                          (std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128),
                          &__u);
                      }
                    }
                    else
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                                        + 0x7FFF8000) )
                      {
                        __asan_report_load4(&bonus_config_ptr->bonus_ratio);
                      }
                      max_bonus_ratio = bonus_config_ptr->bonus_ratio;
                      __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::make_pair<unsigned int const&,unsigned int const&>(schedule_id, &schedule_config_ptr->end_time);
                      std::optional<std::pair<unsigned int,unsigned int>>::operator=<std::pair<unsigned int,unsigned int>>(
                        (std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128),
                        (std::pair<unsigned int,unsigned int> *)&__y);
                    }
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v67,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/op_activity/player_op_activity_comp.cpp",
                    "tryGetMaxDropCountInBlossom",
                    288);
                  v22 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v67,
                          (const char (*)[49])byte_25F2CD60);
                  v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v22,
                          (const unsigned int *)(v4 + 64));
                  v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v23,
                          (const char (*)[14])" schedule_id:");
                  v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, schedule_id);
                  v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v25,
                          (const char (*)[14])" activity_id:");
                  v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v26,
                          (const unsigned int *)(v4 + 48));
                  v28 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v27,
                          (const char (*)[9])" player:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  operator<<(v28, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v67);
                }
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v66,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/op_activity/player_op_activity_comp.cpp",
            "tryGetMaxDropCountInBlossom",
            270);
          v14 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v66,
                  (const char (*)[47])"findOpActivityExcelConfig failed, schedule_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, schedule_id);
          v16 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v15,
                  (const char (*)[14])" activity_id:");
          v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v16,
                  (const unsigned int *)(v4 + 48));
          v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v18, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v66);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v65,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/op_activity/player_op_activity_comp.cpp",
          "tryGetMaxDropCountInBlossom",
          262);
        v11 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v65,
                (const char (*)[48])"findOpActivityScheduleConfig fail, schedule_id:");
        v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, schedule_id);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v13, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v65);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator++(&__for_begin);
    }
    if ( !max_bonus_ratio
      || !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v67,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/op_activity/player_op_activity_comp.cpp",
        "tryGetMaxDropCountInBlossom",
        314);
      v34 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v67,
              (const char (*)[47])"tryGetMaxDropCountInBlossom failed, refresh_id");
      v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, (const unsigned int *)(v4 + 80));
      v36 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v35,
              (const char (*)[29])", is_has_candidate_activity:");
      common::milog::MiLogStream::operator<<(v36, is_has_candidate_activity);
      common::milog::MiLogStream::~MiLogStream(&v67);
      if ( is_has_candidate_activity )
        result = 9301LL;
      else
        result = 9302LL;
    }
    else
    {
      v37 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128));
      v38 = (uint32_t *)v37;
      if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v37);
      }
      v39 = *v38;
      v40 = *(_BYTE *)((choose_schedule_id >> 3) + 0x7FFF8000);
      LOBYTE(p_for_end) = v40 != 0;
      v41 = (v40 != 0) & (unsigned __int8)((char)((choose_schedule_id & 7) + 3) >= v40);
      if ( (_BYTE)v41 )
        __asan_report_store4(choose_schedule_id, p_for_end, v41);
      *(_DWORD *)choose_schedule_id = v39;
      v42 = (*(_BYTE *)((drop_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((drop_count & 7) + 3) >= *(_BYTE *)((drop_count >> 3) + 0x7FFF8000));
      if ( (_BYTE)v42 )
        __asan_report_store4(drop_count, (unsigned int)(drop_count & 7) + 3, v42);
      *(_DWORD *)drop_count = max_bonus_ratio;
      result = 0LL;
    }
  }
  if ( v68 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 324: range 0000000016CCC2BC-0000000016CCC2E5
int32_t __cdecl PlayerOpActivityComp::getCurOpActivityInfo(
        PlayerOpActivityComp *const this,
        google::protobuf::RepeatedPtrField<proto::OpActivityInfo> *proto_op_activity_info_list)
{
  PlayerOpActivityComp::fillOpActivityInfoList(this, proto_op_activity_info_list);
  return 0;
};

// Line 330: range 0000000016CCC2E6-0000000016CCC60A
void __fastcall PlayerOpActivityComp::notifyScheduleUpdate(PlayerOpActivityComp *const this, uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t v5; // r14d
  std::__shared_ptr_access<proto::OpActivityUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::OpActivityInfo *v7; // rax
  common::milog::MiLogStream *v8; // rax
  Player *player; // r14
  common::milog::MiLogStream *v10; // rax
  std::shared_ptr<proto::OpActivityUpdateNotify> __r; // [rsp+10h] [rbp-C0h] BYREF
  common::milog::MiLogStream v12; // [rsp+20h] [rbp-B0h] BYREF
  char v13[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 15 schedule_id:329 64 16 14 notify_ptr:333";
  *(_QWORD *)(v2 + 16) = PlayerOpActivityComp::notifyScheduleUpdate;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = schedule_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,OpActivityRecord>,unsigned int>(
         &this->op_activity_record_map_,
         (const unsigned int *)(v2 + 48)) )
  {
    common::tools::perf::make_shared<proto::OpActivityUpdateNotify>();
    v5 = *(_DWORD *)(v2 + 48);
    v6 = std::__shared_ptr_access<proto::OpActivityUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::OpActivityUpdateNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    v7 = proto::OpActivityUpdateNotify::mutable_op_activity_info(v6);
    if ( (unsigned int)PlayerOpActivityComp::fillOpActivitiInfo(this, v7, v5) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/op_activity/player_op_activity_comp.cpp",
        "notifyScheduleUpdate",
        336);
      v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v12,
             (const char (*)[40])"fillOpActivitiInfo failed, schedule_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = this->player_;
      std::dynamic_pointer_cast<google::protobuf::Message const,proto::OpActivityUpdateNotify>(&__r);
      Player::sendMessage(player, (common::minet::ConstMessagePtr *)&__r, 0LL);
      std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)&__r);
    }
    std::shared_ptr<proto::OpActivityUpdateNotify>::~shared_ptr((std::shared_ptr<proto::OpActivityUpdateNotify> *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/op_activity/player_op_activity_comp.cpp",
      "notifyScheduleUpdate",
      343);
    v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            &v12,
            (const char (*)[33])"schedule not exist, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v12);
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

// Line 348: range 0000000016CCC60C-0000000016CCC7DE
void __fastcall PlayerOpActivityComp::addUseBonusCount(PlayerOpActivityComp *const this, uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::unordered_map<unsigned int,OpActivityRecord>::mapped_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream v7; // [rsp+10h] [rbp-80h] BYREF
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 schedule_id:347";
  *(_QWORD *)(v2 + 16) = PlayerOpActivityComp::addUseBonusCount;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = schedule_id;
  if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,OpActivityRecord>,unsigned int>(
         &this->op_activity_record_map_,
         (const unsigned int *)(v2 + 32)) )
  {
    v5 = std::unordered_map<unsigned int,OpActivityRecord>::operator[](
           &this->op_activity_record_map_,
           (const std::unordered_map<unsigned int,OpActivityRecord>::key_type *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v5->use_bonus_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->use_bonus_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&v5->use_bonus_count);
    }
    ++v5->use_bonus_count;
    PlayerOpActivityComp::notifyScheduleUpdate(this, *(_DWORD *)(v2 + 32));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/op_activity/player_op_activity_comp.cpp",
      "addUseBonusCount",
      356);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v7,
           (const char (*)[33])"schedule not exist, schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
  if ( v8 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 361: range 0000000016CCC7E0-0000000016CCC9EA
void __cdecl PlayerOpActivityComp::updateBonusCount(
        PlayerOpActivityComp *const this,
        uint32_t now,
        bool *is_has_update)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  time_t v4; // rcx
  uint32_t *p_last_refresh_time; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  uint32_t time_offset; // [rsp+2Ch] [rbp-44h]
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_begin; // [rsp+30h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_end; // [rsp+38h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord> *__for_range; // [rsp+40h] [rbp-30h]
  std::pair<unsigned int const,OpActivityRecord> *__in; // [rsp+48h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,OpActivityRecord> >::type *schedule_id; // [rsp+50h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,OpActivityRecord> >::type *op_activity_record; // [rsp+58h] [rbp-18h]
  std::shared_ptr<Config> v19; // [rsp+60h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v3->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  __for_range = &this->op_activity_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::begin(&this->op_activity_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::end(&this->op_activity_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,OpActivityRecord>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator*(&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,OpActivityRecord>(__in);
    op_activity_record = std::get<1ul,unsigned int const,OpActivityRecord>(__in);
    v4 = time_offset;
    p_last_refresh_time = &op_activity_record->last_refresh_time;
    if ( *(_BYTE *)(((unsigned __int64)p_last_refresh_time >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_last_refresh_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_last_refresh_time >> 3)
                                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(p_last_refresh_time);
    }
    if ( !common::tools::TimeUtils::isSameDay(now, op_activity_record->last_refresh_time, v4) )
    {
      v6 = (*(_BYTE *)(((unsigned __int64)&op_activity_record->last_refresh_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)op_activity_record + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op_activity_record->last_refresh_time >> 3) + 0x7FFF8000));
      if ( (_BYTE)v6 )
        __asan_report_store4(&op_activity_record->last_refresh_time, (((_BYTE)op_activity_record + 8) & 7u) + 3, v6);
      op_activity_record->last_refresh_time = now;
      v7 = (*(_BYTE *)(((unsigned __int64)&op_activity_record->use_bonus_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)op_activity_record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&op_activity_record->use_bonus_count >> 3) + 0x7FFF8000));
      if ( (_BYTE)v7 )
        __asan_report_store4(&op_activity_record->use_bonus_count, (((_BYTE)op_activity_record + 4) & 7u) + 3, v7);
      op_activity_record->use_bonus_count = 0;
      v8 = (unsigned __int8)is_has_update & 7;
      v9 = (*(_BYTE *)(((unsigned __int64)is_has_update >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)is_has_update >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(is_has_update, v8, v9);
      *is_has_update = 1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator++(&__for_begin);
  }
};

// Line 376: range 0000000016CCC9EC-0000000016CCCA56
void __cdecl PlayerOpActivityComp::onPlayerLevelupEvent(
        PlayerOpActivityComp *const this,
        const PlayerLevelupEvent *event)
{
  void (__fastcall **v2)(PlayerOpActivityComp *const); // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (void (__fastcall **)(PlayerOpActivityComp *const))(this->_vptr_PlayerCompBase + 10);
  if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  (*v2)(this);
};

// Line 381: range 0000000016CCCA58-0000000016CCCBAA
__int64 __fastcall PlayerOpActivityComp::getCurActivityIdByScheduleId(
        PlayerOpActivityComp *const this,
        uint32_t schedule_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t ActivityIdByScheduleId; // r13d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 result; // rax
  std::shared_ptr<Config> v8; // [rsp+10h] [rbp-70h] BYREF
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 schedule_id:380";
  *(_QWORD *)(v2 + 16) = PlayerOpActivityComp::getCurActivityIdByScheduleId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = schedule_id;
  if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,OpActivityRecord>,unsigned int>(
          &this->op_activity_record_map_,
          (const unsigned int *)(v2 + 32)) )
  {
    ActivityIdByScheduleId = 0;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v8);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v8);
    ActivityIdByScheduleId = data::DbOpActivityConfigMgr::getActivityIdByScheduleId(
                               &v6->design_config.db_config_mgr.db_local_config_mgr.op_activity_config_mgr,
                               *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr(&v8);
  }
  result = ActivityIdByScheduleId;
  if ( v9 == (char *)v2 )
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

// Line 390: range 0000000016CCCBAC-0000000016CCCCD3
void __cdecl PlayerOpActivityComp::clearUseBonusCountByGm(PlayerOpActivityComp *const this)
{
  uint32_t *p_use_bonus_count; // rax
  __int64 v2; // rdx
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,OpActivityRecord> *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,OpActivityRecord> >::type *schedule_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,OpActivityRecord> >::type *record; // [rsp+38h] [rbp-8h]

  __for_range = &this->op_activity_record_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::begin(&this->op_activity_record_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::end(&this->op_activity_record_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,OpActivityRecord>,false>(&__for_begin, &__for_end) )
  {
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator*(&__for_begin);
    schedule_id = std::get<0ul,unsigned int const,OpActivityRecord>(__in);
    record = std::get<1ul,unsigned int const,OpActivityRecord>(__in);
    p_use_bonus_count = &record->use_bonus_count;
    v2 = (*(_BYTE *)(((unsigned __int64)p_use_bonus_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)(((unsigned __int8)p_use_bonus_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_use_bonus_count >> 3) + 0x7FFF8000));
    if ( (_BYTE)v2 )
      __asan_report_store4(p_use_bonus_count, (((_BYTE)record + 4) & 7u) + 3, v2);
    record->use_bonus_count = 0;
    if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(schedule_id);
    }
    PlayerOpActivityComp::notifyScheduleUpdate(this, *schedule_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator++(&__for_begin);
  }
};

// Line 400: range 0000000016CCCCD4-0000000016CCDAC4
__int64 __fastcall PlayerOpActivityComp::tryGetMaxDropCountInDungeon(
        PlayerOpActivityComp *const this,
        uint32_t dungeon_id,
        unsigned __int64 choose_schedule_id_ptr,
        unsigned __int64 drop_count)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  void (__fastcall **v7)(PlayerOpActivityComp *const); // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  __int64 result; // rax
  std::unordered_map<unsigned int,OpActivityRecord>::iterator *p_for_end; // rsi
  data::DbOpActivityConfigMgr *p_op_activity_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rcx
  uint32_t use_bonus_count; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v23; // rax
  _DWORD *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rcx
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx
  std::pair<unsigned int,unsigned int> *v34; // rdx
  unsigned int *p_second; // rax
  uint32_t second; // ecx
  char v37; // al
  std::pair<unsigned int,unsigned int> *v39; // rax
  uint32_t *v40; // rdx
  uint32_t v41; // ecx
  char v42; // dl
  __int64 v43; // rdx
  __int64 v44; // rdx
  bool has_candidate_activity; // [rsp+2Bh] [rbp-1B5h]
  uint32_t max_bonus_ratio; // [rsp+2Ch] [rbp-1B4h]
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_begin; // [rsp+30h] [rbp-1B0h] BYREF
  std::unordered_map<unsigned int,OpActivityRecord>::iterator __for_end; // [rsp+38h] [rbp-1A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+40h] [rbp-1A0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+48h] [rbp-198h] BYREF
  const OpActivityExcelConfigMgr *op_activity_config_mgr; // [rsp+50h] [rbp-190h]
  const std::set<unsigned int> *candidate_bonus_id_set; // [rsp+58h] [rbp-188h]
  std::unordered_map<unsigned int,OpActivityRecord> *__for_range; // [rsp+60h] [rbp-180h]
  const std::pair<unsigned int const,OpActivityRecord> *v56; // [rsp+68h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,OpActivityRecord> >::type *schedule_id; // [rsp+70h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *record; // [rsp+78h] [rbp-168h]
  const data::OpActivityScheduleConfig *schedule_config_ptr; // [rsp+80h] [rbp-160h]
  const data::OpActivityExcelConfig *activity_config_ptr; // [rsp+88h] [rbp-158h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+90h] [rbp-150h]
  const data::OpActivityBonusExcelConfig *bonus_config_ptr; // [rsp+98h] [rbp-148h]
  std::pair<unsigned int,unsigned int> __u; // [rsp+A0h] [rbp-140h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> __y; // [rsp+A8h] [rbp-138h] BYREF
  std::shared_ptr<Config> v65; // [rsp+B0h] [rbp-130h] BYREF
  common::milog::MiLogStream v66; // [rsp+C0h] [rbp-120h] BYREF
  common::milog::MiLogStream v67; // [rsp+E0h] [rbp-100h] BYREF
  common::milog::MiLogStream v68; // [rsp+100h] [rbp-E0h] BYREF
  char v69[192]; // [rsp+120h] [rbp-C0h] BYREF

  v4 = (unsigned __int64)v69;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 15 activity_id:428 64 4 12 bonus_id:441 80 4 14 dungeon_id:399 96 8 8 iter:408 128 12 19 "
                        "chosen_schedule:417";
  *(_QWORD *)(v4 + 16) = PlayerOpActivityComp::tryGetMaxDropCountInDungeon;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -202177536;
  *(_DWORD *)(v4 + 80) = dungeon_id;
  if ( PlayerOpActivityComp::checkRefreshScheduleAndBonusCount(this) )
  {
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v7 = (void (__fastcall **)(PlayerOpActivityComp *const))(this->_vptr_PlayerCompBase + 10);
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    (*v7)(this);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v65);
  op_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65)->design_config.txt_config_mgr.op_activity_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v65);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            &op_activity_config_mgr->dungeon_id_bonus_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v4 + 80));
  __y._M_cur = std::unordered_map<unsigned int,std::set<unsigned int>>::end(&op_activity_config_mgr->dungeon_id_bonus_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v4 + 96),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v68,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/op_activity/player_op_activity_comp.cpp",
      "tryGetMaxDropCountInDungeon",
      411);
    v8 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
           &v68,
           (const char (*)[31])"no op_activity for dungeon_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 80));
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v10, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v68);
    result = 0xFFFFFFFFLL;
  }
  else
  {
    candidate_bonus_id_set = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v4 + 96))->second;
    max_bonus_ratio = 0;
    *(_QWORD *)(v4 + 128) = 0LL;
    *(_DWORD *)(v4 + 136) = 0;
    has_candidate_activity = 0;
    __for_range = &this->op_activity_record_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::begin(&this->op_activity_record_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,OpActivityRecord>::end(&this->op_activity_record_map_)._M_cur;
    while ( 1 )
    {
      p_for_end = &__for_end;
      if ( !std::__detail::operator!=<std::pair<unsigned int const,OpActivityRecord>,false>(&__for_begin, &__for_end) )
        break;
      v56 = std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator*(&__for_begin);
      schedule_id = std::get<0ul,unsigned int const,OpActivityRecord>(v56);
      record = (std::tuple_element<1,const std::pair<unsigned int const,OpActivityRecord> >::type *)std::get<1ul,unsigned int const,OpActivityRecord>(v56);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v65);
      p_op_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v65)->design_config.db_config_mgr.db_local_config_mgr.op_activity_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)schedule_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)schedule_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(schedule_id);
      }
      schedule_config_ptr = data::DbOpActivityConfigMgr::findOpActivityScheduleConfig(
                              p_op_activity_config_mgr,
                              *schedule_id);
      std::shared_ptr<Config>::~shared_ptr(&v65);
      if ( schedule_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->config_id >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&schedule_config_ptr->config_id);
        }
        *(_DWORD *)(v4 + 48) = schedule_config_ptr->config_id;
        activity_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityExcelConfig(
                                op_activity_config_mgr,
                                *(_DWORD *)(v4 + 48));
        if ( activity_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&record->use_bonus_count >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->use_bonus_count >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&record->use_bonus_count);
          }
          use_bonus_count = record->use_bonus_count;
          if ( *(_BYTE *)(((unsigned __int64)&activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&activity_config_ptr->bonus_value >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&activity_config_ptr->bonus_value);
          }
          if ( use_bonus_count < activity_config_ptr->bonus_value )
          {
            has_candidate_activity = 1;
            __for_range_0 = &activity_config_ptr->bonus_list;
            __for_begin_0._M_current = std::vector<unsigned int>::begin(&activity_config_ptr->bonus_list)._M_current;
            __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
            while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
            {
              v23 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
              v24 = v23;
              if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v23);
              }
              *(_DWORD *)(v4 + 64) = *v24;
              if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
                     candidate_bonus_id_set,
                     (const unsigned int *)(v4 + 64)) )
              {
                bonus_config_ptr = data::OpActivityExcelConfigMgrBase::findOpActivityBonusExcelConfig(
                                     op_activity_config_mgr,
                                     *(_DWORD *)(v4 + 64));
                if ( bonus_config_ptr )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  BasicComp = Player::getBasicComp(this->player_);
                  Level = PlayerBasicComp::getLevel(BasicComp);
                  if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->open_level >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->open_level >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&bonus_config_ptr->open_level);
                  }
                  if ( Level >= bonus_config_ptr->open_level )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                                      + 0x7FFF8000) )
                    {
                      __asan_report_load4(&bonus_config_ptr->bonus_ratio);
                    }
                    if ( max_bonus_ratio <= bonus_config_ptr->bonus_ratio )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                                        + 0x7FFF8000) )
                      {
                        __asan_report_load4(&bonus_config_ptr->bonus_ratio);
                      }
                      if ( max_bonus_ratio == bonus_config_ptr->bonus_ratio )
                      {
                        if ( !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128)) )
                          goto LABEL_59;
                        v34 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128));
                        p_second = &v34->second;
                        if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                          && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                                     + 0x7FFF8000) )
                        {
                          __asan_report_load4(p_second);
                        }
                        second = v34->second;
                        if ( *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)schedule_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&schedule_config_ptr->end_time >> 3)
                                                                                             + 0x7FFF8000) )
                        {
                          __asan_report_load4(&schedule_config_ptr->end_time);
                        }
                        if ( second > schedule_config_ptr->end_time )
LABEL_59:
                          v37 = 1;
                        else
                          v37 = 0;
                        if ( v37 )
                        {
                          __u = std::make_pair<unsigned int const&,unsigned int const&>(
                                  schedule_id,
                                  &schedule_config_ptr->end_time);
                          std::optional<std::pair<unsigned int,unsigned int>>::operator=<std::pair<unsigned int,unsigned int>>(
                            (std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128),
                            &__u);
                        }
                      }
                      else
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3) + 0x7FFF8000) != 0
                          && (char)((((_BYTE)bonus_config_ptr + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&bonus_config_ptr->bonus_ratio >> 3)
                                                                                          + 0x7FFF8000) )
                        {
                          __asan_report_load4(&bonus_config_ptr->bonus_ratio);
                        }
                        max_bonus_ratio = bonus_config_ptr->bonus_ratio;
                        __y._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false>::__node_type *)std::make_pair<unsigned int const&,unsigned int const&>(schedule_id, &schedule_config_ptr->end_time);
                        std::optional<std::pair<unsigned int,unsigned int>>::operator=<std::pair<unsigned int,unsigned int>>(
                          (std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128),
                          (std::pair<unsigned int,unsigned int> *)&__y);
                      }
                    }
                  }
                }
                else
                {
                  common::milog::MiLogStream::create(
                    &v68,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/player/op_activity/player_op_activity_comp.cpp",
                    "tryGetMaxDropCountInDungeon",
                    450);
                  v25 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          &v68,
                          (const char (*)[49])byte_25F2CD60);
                  v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v25,
                          (const unsigned int *)(v4 + 64));
                  v27 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v26,
                          (const char (*)[14])" schedule_id:");
                  v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, schedule_id);
                  v29 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                          v28,
                          (const char (*)[14])" activity_id:");
                  v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v29,
                          (const unsigned int *)(v4 + 48));
                  v31 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v30,
                          (const char (*)[9])" player:");
                  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                    __asan_report_load8();
                  operator<<(v31, this->player_);
                  common::milog::MiLogStream::~MiLogStream(&v68);
                }
              }
              __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
            }
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v67,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/op_activity/player_op_activity_comp.cpp",
            "tryGetMaxDropCountInDungeon",
            432);
          v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                  &v67,
                  (const char (*)[47])"findOpActivityExcelConfig failed, schedule_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, schedule_id);
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v18,
                  (const char (*)[14])" activity_id:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v4 + 48));
          v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v21, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v67);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v66,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/op_activity/player_op_activity_comp.cpp",
          "tryGetMaxDropCountInDungeon",
          424);
        v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v66,
                (const char (*)[48])"findOpActivityScheduleConfig fail, schedule_id:");
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, schedule_id);
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        operator<<(v16, this->player_);
        common::milog::MiLogStream::~MiLogStream(&v66);
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,OpActivityRecord>,false,false>::operator++(&__for_begin);
    }
    if ( !max_bonus_ratio
      || !std::optional<std::pair<unsigned int,unsigned int>>::operator bool((const std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128)) )
    {
      if ( has_candidate_activity )
        result = 9301LL;
      else
        result = 9302LL;
    }
    else
    {
      if ( choose_schedule_id_ptr )
      {
        v39 = std::optional<std::pair<unsigned int,unsigned int>>::value((std::optional<std::pair<unsigned int,unsigned int> > *const)(v4 + 128));
        v40 = (uint32_t *)v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        v41 = *v40;
        v42 = *(_BYTE *)((choose_schedule_id_ptr >> 3) + 0x7FFF8000);
        LOBYTE(p_for_end) = v42 != 0;
        v43 = (v42 != 0) & (unsigned __int8)((char)((choose_schedule_id_ptr & 7) + 3) >= v42);
        if ( (_BYTE)v43 )
          __asan_report_store4(choose_schedule_id_ptr, p_for_end, v43);
        *(_DWORD *)choose_schedule_id_ptr = v41;
      }
      v44 = (*(_BYTE *)((drop_count >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((drop_count & 7) + 3) >= *(_BYTE *)((drop_count >> 3) + 0x7FFF8000));
      if ( (_BYTE)v44 )
        __asan_report_store4(drop_count, (unsigned int)(drop_count & 7) + 3, v44);
      *(_DWORD *)drop_count = max_bonus_ratio;
      result = 0LL;
    }
  }
  if ( v69 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
