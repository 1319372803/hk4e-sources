// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/watcher/watcher.cpp

// Line 92: range 00000000149AC6AC-00000000149ACAB7
std::string *__cdecl BaseWatcher::getDesc[abi:cxx11](std::string *retstr, const BaseWatcher *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // r14
  unsigned int Progress; // eax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // rax
  std::pair<unsigned int const,int> *v10; // rax
  std::pair<unsigned int const,int> *v11; // rdx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v12; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v13; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v14; // rax
  std::unordered_map<unsigned int,int>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  std::unordered_map<unsigned int,int>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const std::unordered_map<unsigned int,int> *__for_range; // [rsp+20h] [rbp-90h]
  std::tuple_element<0,std::pair<unsigned int const,int> >::type *key; // [rsp+28h] [rbp-88h]
  std::tuple_element<1,std::pair<unsigned int const,int> >::type *value; // [rsp+30h] [rbp-80h]
  std::pair<unsigned int const,int> __in; // [rsp+38h] [rbp-78h] BYREF
  char v22[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:93";
  *(_QWORD *)(v2 + 16) = BaseWatcher::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[watcher|id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->watcher_id_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->watcher_id_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, ",progress:");
  Progress = BaseWatcher::getProgress(this);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, Progress);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, ",var_map:{");
  __for_range = &this->var_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin(&this->var_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,int>::end(&this->var_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end) )
  {
    v10 = (std::pair<unsigned int const,int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    v11 = v10;
    if ( ((unsigned __int8)v10 & 7) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v10 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v10->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v10, 8LL);
    }
    __in = *v11;
    key = std::get<0ul,unsigned int const,int>(&__in);
    value = std::get<1ul,unsigned int const,int>(&__in);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    v12 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
            (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
            *key);
    v13 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v12, ":");
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(value);
    }
    v14 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v13, *value);
    common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v14, ",");
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
    (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
    "}]");
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
  if ( v22 == (char *)v2 )
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

// Line 104: range 00000000149ACAB8-00000000149ACB88
void __cdecl BaseWatcher::init(BaseWatcher *const this, Player *player, uint32_t watcher_id, uint32_t initial_progress)
{
  bool v4; // dl
  std::shared_ptr<Player> __r; // [rsp+20h] [rbp-10h] BYREF

  toThisPtr<Player>((Player *)&__r);
  std::weak_ptr<Player>::operator=<Player>(&this->player_wtr_, &__r);
  std::shared_ptr<Player>::~shared_ptr(&__r);
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->watcher_id_, &__r, (_BYTE)this + 40);
  }
  this->watcher_id_ = watcher_id;
  v4 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  if ( v4 )
    __asan_report_store4(&this->progress_, (((_BYTE)this + 44) & 7u) + 3, v4);
  this->progress_ = initial_progress;
};

// Line 111: range 00000000149ACB8A-00000000149ACD20
int32_t __cdecl BaseWatcher::fromBin(BaseWatcher *const this, const proto::WatcherBin *proto)
{
  uint32_t v2; // edx
  char v3; // al
  uint32_t v4; // ecx
  char v5; // dl
  bool v6; // dl
  google::protobuf::int32 v7; // ebx
  std::unordered_map<unsigned int,int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,int>::mapped_type *v9; // rax
  google::protobuf::int32 *v10; // rdx
  char v11; // cl
  const proto::WatcherBin *protoa; // [rsp+0h] [rbp-50h]
  std::unordered_map<unsigned int,int>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::WatcherBin_Var>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::WatcherBin_Var>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::WatcherBin_Var> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::WatcherBin_Var *var; // [rsp+38h] [rbp-18h]

  protoa = proto;
  v2 = proto::WatcherBin::watcher_id(proto);
  v3 = *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(proto) = v3 != 0;
    __asan_report_store4(&this->watcher_id_, proto, v2);
  }
  this->watcher_id_ = v2;
  v4 = proto::WatcherBin::progress(protoa);
  v5 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
  LOBYTE(proto) = v5 != 0;
  v6 = v5 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v5;
  if ( v6 )
    __asan_report_store4(&this->progress_, proto, v6);
  this->progress_ = v4;
  __for_range = proto::WatcherBin::var_list(protoa);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::WatcherBin_Var>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::WatcherBin_Var>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::WatcherBin_Var const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    var = google::protobuf::internal::RepeatedPtrIterator<proto::WatcherBin_Var const>::operator*(&__for_begin);
    v7 = proto::WatcherBin_Var::value(var);
    __k = proto::WatcherBin_Var::key(var);
    p_k = &__k;
    v9 = std::unordered_map<unsigned int,int>::operator[](&this->var_map_, &__k);
    v10 = v9;
    v11 = *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000);
    if ( v11 != 0 && (char)(((unsigned __int8)v9 & 7) + 3) >= v11 )
    {
      LOBYTE(p_k) = v11 != 0;
      __asan_report_store4(v9, p_k, (_BYTE)v9);
    }
    *v10 = v7;
    google::protobuf::internal::RepeatedPtrIterator<proto::WatcherBin_Var const>::operator++(&__for_begin);
  }
  return 0;
};

// Line 122: range 00000000149ACD22-00000000149ACEFE
int32_t __cdecl BaseWatcher::toBin(const BaseWatcher *const this, proto::WatcherBin *proto)
{
  std::unordered_map<unsigned int,int>::const_iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::unordered_map<unsigned int,int>::const_iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  const std::unordered_map<unsigned int,int> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,int> *v6; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,int> >::type *key; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,int> >::type *value; // [rsp+40h] [rbp-10h]
  proto::WatcherBin_Var *var; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->watcher_id_);
  }
  proto::WatcherBin::set_watcher_id(proto, this->watcher_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->progress_);
  }
  proto::WatcherBin::set_progress(proto, this->progress_);
  __for_range = &this->var_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,int>::begin(&this->var_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,int>::end(&this->var_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,int>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator*(&__for_begin);
    key = std::get<0ul,unsigned int const,int>(v6);
    value = (std::tuple_element<1,const std::pair<unsigned int const,int> >::type *)std::get<1ul,unsigned int const,int>(v6);
    var = proto::WatcherBin::add_var_list(proto);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    proto::WatcherBin_Var::set_key(var, *key);
    if ( *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)value & 7) + 3) >= *(_BYTE *)(((unsigned __int64)value >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(value);
    }
    proto::WatcherBin_Var::set_value(var, *value);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 135: range 00000000149ACF00-00000000149AD0B0
// local variable allocation has failed, the output may be wrong!
void __cdecl BaseWatcher::addProgress(BaseWatcher *const this, uint32_t add_progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t v5; // ecx
  char v6; // dl
  bool v7; // dl
  uint32_t old_progress; // [rsp+1Ch] [rbp-64h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 this_ptr:142";
  *(_QWORD *)(v2 + 16) = BaseWatcher::addProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( add_progress )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->progress_);
    }
    old_progress = this->progress_;
    std::enable_shared_from_this<BaseWatcher>::shared_from_this((std::enable_shared_from_this<BaseWatcher> *const)(v2 + 32));
    *(_QWORD *)&add_progress = add_progress;
    v5 = SAFE_ADD<unsigned int,unsigned int>(this->progress_, add_progress);
    v6 = *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000);
    LOBYTE(add_progress) = v6 != 0;
    v7 = v6 != 0 && (char)((((_BYTE)this + 44) & 7) + 3) >= v6;
    if ( v7 )
      __asan_report_store4(&this->progress_, *(_QWORD *)&add_progress, v7);
    this->progress_ = v5;
    BaseWatcher::fireWatcherProgressUpdateEvent(this, old_progress);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 32));
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 148: range 00000000149AD0B2-00000000149AD271
void __cdecl BaseWatcher::subProgress(BaseWatcher *const this, uint32_t sub_progress)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t old_progress; // [rsp+1Ch] [rbp-64h]
  char v6[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 this_ptr:154";
  *(_QWORD *)(v2 + 16) = BaseWatcher::subProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( sub_progress )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&this->progress_);
    }
    old_progress = this->progress_;
    std::enable_shared_from_this<BaseWatcher>::shared_from_this((std::enable_shared_from_this<BaseWatcher> *const)(v2 + 32));
    if ( sub_progress < this->progress_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->progress_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&this->progress_);
      }
      this->progress_ -= sub_progress;
    }
    else
    {
      this->progress_ = 0;
    }
    BaseWatcher::fireWatcherProgressUpdateEvent(this, old_progress);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 32));
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
};

// Line 167: range 00000000149AD272-00000000149AD311
void __cdecl BaseWatcher::tryCorrectProgress(BaseWatcher *const this, uint32_t progress)
{
  uint32_t v2; // edx
  uint32_t v3; // edx
  uint32_t old_progress; // [rsp+1Ch] [rbp-4h]

  old_progress = BaseWatcher::getProgress(this);
  if ( progress <= BaseWatcher::getProgress(this) )
  {
    if ( progress >= BaseWatcher::getProgress(this) )
    {
      BaseWatcher::fireWatcherProgressUpdateEvent(this, old_progress);
    }
    else
    {
      v3 = BaseWatcher::getProgress(this) - progress;
      BaseWatcher::subProgress(this, v3);
    }
  }
  else
  {
    v2 = progress - BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, v2);
  }
};

// Line 184: range 00000000149AD312-00000000149AD75B
void __fastcall BaseWatcher::fireWatcherProgressUpdateEvent(const BaseWatcher *const this, uint32_t old_progress)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  Player *v11; // rax
  PlayerEventComp *EventComp; // r14
  unsigned int *v13; // r9
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  bool *v24; // [rsp+0h] [rbp-F0h]
  const BaseWatcher *thisa; // [rsp+8h] [rbp-E8h]
  unsigned int WatcherId; // [rsp+18h] [rbp-D8h] BYREF
  bool v27[4]; // [rsp+1Ch] [rbp-D4h] BYREF
  std::shared_ptr<WatcherProgressUpdateEvent> __r; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<BaseEvent> p_event_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+40h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+60h] [rbp-90h] BYREF

  HIDWORD(v24) = old_progress;
  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 1 15 is_finished:185 48 4 16 old_progress:183 64 16 14 player_ptr:186";
  *(_QWORD *)(v2 + 16) = BaseWatcher::fireWatcherProgressUpdateEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -202178560;
  *(_DWORD *)(v2 + 48) = old_progress;
  *(_BYTE *)(v2 + 32) = BaseWatcher::isFinished(this);
  BaseWatcher::getPlayer((const BaseWatcher *const)(v2 + 64));
  if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v2 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "fireWatcherProgressUpdateEvent",
      189);
    v5 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v30, (const char (*)[12])"watcher_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->watcher_id_);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" progress:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->progress_);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" is_finished:");
    v10 = common::milog::MiLogStream::operator<<(v9, *(_BYTE *)(v2 + 32));
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v10, (const char (*)[16])" player is null");
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  else
  {
    v11 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    EventComp = Player::getEventComp(v11);
    *(_DWORD *)v27 = BaseWatcher::getProgress(this);
    WatcherId = BaseWatcher::getWatcherId(this);
    common::tools::perf::make_shared<WatcherProgressUpdateEvent,unsigned int,unsigned int,bool &,unsigned int &>(
      (unsigned int *)&__r,
      &WatcherId,
      v27,
      (unsigned int *)(v2 + 32),
      (unsigned int *)(v2 + 48),
      v13,
      v24,
      (unsigned int *)this);
    std::shared_ptr<BaseEvent>::shared_ptr<WatcherProgressUpdateEvent,void>(&p_event_ptr, &__r);
    PlayerEventComp::notifyEvent(EventComp, &p_event_ptr);
    std::shared_ptr<BaseEvent>::~shared_ptr(&p_event_ptr);
    std::shared_ptr<WatcherProgressUpdateEvent>::~shared_ptr(&__r);
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "fireWatcherProgressUpdateEvent",
      193);
    v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(&v30, (const char (*)[12])"watcher_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &thisa->watcher_id_);
    v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" progress:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &thisa->progress_);
    v18 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v17, (const char (*)[14])" is_finished:");
    v19 = common::milog::MiLogStream::operator<<(v18, *(_BYTE *)(v2 + 32));
    v20 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v19, (const char (*)[15])" old_progress:");
    v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v2 + 48));
    v22 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v21, (const char (*)[9])" player:");
    v23 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
    operator<<(v22, v23);
    common::milog::MiLogStream::~MiLogStream(&v30);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 64));
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
};

// Line 197: range 00000000149AD75C-00000000149AD7C1
uint32_t __cdecl BaseWatcher::getTotalProgress(const BaseWatcher *const this)
{
  const data::WatcherConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = BaseWatcher::getConfig(this);
  if ( !config_ptr )
    return std::numeric_limits<unsigned int>::max();
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->progress >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->progress);
  }
  return config_ptr->progress;
};

// Line 208: range 00000000149AD7C2-00000000149AD827
data::WatcherTriggerType __cdecl BaseWatcher::getWatcherTriggerType(const BaseWatcher *const this)
{
  const data::WatcherConfig *config_ptr; // [rsp+18h] [rbp-8h]

  config_ptr = BaseWatcher::getConfig(this);
  if ( !config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&config_ptr->trigger_config.trigger_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&config_ptr->trigger_config.trigger_type);
  }
  return config_ptr->trigger_config.trigger_type;
};

// Line 219: range 00000000149AD828-00000000149AD85A
bool __cdecl BaseWatcher::isFinished(const BaseWatcher *const this)
{
  uint32_t Progress; // ebx

  Progress = BaseWatcher::getProgress(this);
  return Progress >= BaseWatcher::getTotalProgress(this);
};

// Line 224: range 00000000149AD85C-00000000149AD93D
const data::WatcherConfig *__cdecl BaseWatcher::getConfig(const BaseWatcher *const this)
{
  const data::WatcherConfig *WatcherConfig; // rbx
  WatcherExcelConfigMgr *p_watcher_config_mgr; // rcx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  if ( BaseWatcher::isDebug(this) )
    return std::__shared_ptr<data::WatcherConfig,(__gnu_cxx::_Lock_policy)2>::get(&this->debug_config_ptr_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_watcher_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.watcher_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->watcher_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->watcher_id_);
  }
  WatcherConfig = WatcherExcelConfigMgr::findWatcherConfig(p_watcher_config_mgr, this->watcher_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return WatcherConfig;
};

// Line 233: range 00000000149AD93E-00000000149AD9BA
void __cdecl BaseWatcher::copyConfig(BaseWatcher *const this, const data::WatcherConfig *config)
{
  data::WatcherConfig *v2; // rdx
  std::shared_ptr<data::WatcherConfig> __r; // [rsp+10h] [rbp-10h] BYREF

  common::tools::perf::make_shared<data::WatcherConfig>();
  std::shared_ptr<data::WatcherConfig>::operator=(&this->debug_config_ptr_, &__r);
  std::shared_ptr<data::WatcherConfig>::~shared_ptr(&__r);
  if ( std::operator!=<data::WatcherConfig>(&this->debug_config_ptr_, 0LL) )
  {
    v2 = std::__shared_ptr_access<data::WatcherConfig,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<data::WatcherConfig,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->debug_config_ptr_);
    data::WatcherConfig::operator=(v2, config);
  }
};

// Line 242: range 00000000149AD9BC-00000000149ADADB
void __fastcall WatcherFactory::registerEvent(
        InternalPlayerEventType event_type,
        data::WatcherTriggerType trigger_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  WatcherFactory *Instance; // rax
  std::set<data::WatcherTriggerType> *v6; // rax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 16 trigger_type:241 64 8 14 event_type:241";
  *(_QWORD *)(v2 + 16) = WatcherFactory::registerEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(InternalPlayerEventType *)(v2 + 64) = event_type;
  *(_DWORD *)(v2 + 48) = trigger_type;
  Instance = WatcherFactory::getInstance();
  v6 = std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::operator[](
         &Instance->event_trigger_map_,
         (const std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::key_type *)(v2 + 64));
  std::set<data::WatcherTriggerType>::insert(v6, (const std::set<data::WatcherTriggerType>::value_type *)(v2 + 48));
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
};

// Line 247: range 00000000149ADADC-00000000149ADBC4
void __fastcall WatcherFactory::registerCreateFunc(
        data::WatcherTriggerType trigger_type,
        std::function<std::shared_ptr<BaseWatcher>()> *p_func)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  WatcherFactory *Instance; // rax
  std::function<std::shared_ptr<BaseWatcher>()> *v6; // rax
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 16 trigger_type:246";
  *(_QWORD *)(v2 + 16) = WatcherFactory::registerCreateFunc;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = trigger_type;
  Instance = WatcherFactory::getInstance();
  v6 = std::unordered_map<data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher> ()(void)>>::operator[](
         &Instance->create_func_map_,
         (const std::unordered_map<data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher>()>>::key_type *)(v2 + 32));
  std::function<std::shared_ptr<BaseWatcher> ()(void)>::operator=(v6, p_func);
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

// Line 252: range 00000000149ADBC6-00000000149AE08C
// local variable allocation has failed, the output may be wrong!
BaseWatcherPtr __cdecl WatcherFactory::createWatcher(
        Player *player,
        const data::WatcherConfig *config,
        uint32_t initial_progress)
{
  uint32_t v3; // ecx
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  WatcherFactory *Instance; // rax
  WatcherFactory *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator<std::pair<const data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher>()> >,false,false>::pointer v10; // rax
  BaseWatcher *p_id; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  common::milog::MiLogStream *v14; // rax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  BaseWatcher *v16; // rdx
  BaseWatcherPtr result; // rax
  uint32_t initial_progressa; // [rsp+4h] [rbp-11Ch]
  const data::WatcherConfig *configa; // [rsp+8h] [rbp-118h]
  std::__detail::_Node_iterator_base<std::pair<const data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher>()> >,false> __y; // [rsp+28h] [rbp-F8h] BYREF
  std::function<std::shared_ptr<BaseWatcher>()> v22; // [rsp+30h] [rbp-F0h] BYREF
  char v23[192]; // [rsp+60h] [rbp-C0h] BYREF

  configa = *(const data::WatcherConfig **)&initial_progress;
  initial_progressa = v3;
  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 8 iter:254 64 16 15 watcher_ptr:253 96 32 15 create_func:260";
  *(_QWORD *)(v4 + 16) = WatcherFactory::createWatcher;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862724] = -202116109;
  std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 64), 0LL);
  Instance = WatcherFactory::getInstance();
  *(std::unordered_map<data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher>()>>::iterator *)(v4 + 32) = std::unordered_map<data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher> ()(void)>>::find(&Instance->create_func_map_, &configa->trigger_config.trigger_type);
  v8 = WatcherFactory::getInstance();
  __y._M_cur = std::unordered_map<data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher> ()(void)>>::end(&v8->create_func_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<data::WatcherTriggerType const,std::function<std::shared_ptr<BaseWatcher> ()(void)>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher>()> >,false> *)(v4 + 32),
         &__y) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v22._M_manager,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/watcher/watcher.cpp",
      "createWatcher",
      257);
    v9 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
           (common::milog::MiLogStream *const)&v22._M_manager,
           (const char (*)[61])" try creat none trigger watcher, no create func, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &configa->id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22._M_manager);
    std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)player, 0LL);
    goto LABEL_19;
  }
  v10 = std::__detail::_Node_iterator<std::pair<data::WatcherTriggerType const,std::function<std::shared_ptr<BaseWatcher> ()(void)>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const data::WatcherTriggerType,std::function<std::shared_ptr<BaseWatcher>()> >,false,false> *const)(v4 + 32));
  std::function<std::shared_ptr<BaseWatcher> ()(void)>::function(
    (std::function<std::shared_ptr<BaseWatcher>()> *const)(v4 + 96),
    &v10->second);
  std::function<std::shared_ptr<BaseWatcher> ()(void)>::operator()(&v22);
  std::shared_ptr<BaseWatcher>::operator=(
    (std::shared_ptr<BaseWatcher> *const)(v4 + 64),
    (std::shared_ptr<BaseWatcher> *)&v22);
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v22);
  if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v4 + 64)) )
    goto LABEL_17;
  p_id = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)(((unsigned __int64)&configa->id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&configa->id >> 3) + 0x7FFF8000) <= 3 )
  {
    p_id = (BaseWatcher *)&configa->id;
    __asan_report_load4(&configa->id);
  }
  BaseWatcher::init(p_id, (Player *)config, configa->id, initial_progressa);
  v12 = (unsigned __int64)std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(v12);
  v13 = *(_QWORD *)v12 + 48LL;
  if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
    v12 = __asan_report_load8(*(_QWORD *)v12 + 48LL);
  if ( !(*(unsigned int (__fastcall **)(unsigned __int64, const data::WatcherConfig *))v13)(v12, configa) )
  {
    v15 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( BaseWatcher::isDebug(v15) )
    {
      v16 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      BaseWatcher::copyConfig(v16, configa);
    }
LABEL_17:
    std::shared_ptr<BaseWatcher>::shared_ptr(
      (std::shared_ptr<BaseWatcher> *const)player,
      (std::shared_ptr<BaseWatcher> *)(v4 + 64));
    goto LABEL_18;
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&v22._M_manager,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/player/watcher/watcher.cpp",
    "createWatcher",
    269);
  v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)&v22._M_manager,
          (const char (*)[37])" init from config failed, watcher_id");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &configa->id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v22._M_manager);
  std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)player, 0LL);
LABEL_18:
  std::function<std::shared_ptr<BaseWatcher> ()(void)>::~function((std::function<std::shared_ptr<BaseWatcher>()> *const)(v4 + 96));
LABEL_19:
  std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v4 + 64));
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    result._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<BaseWatcher,(__gnu_cxx::_Lock_policy)2>::element_type *)player;
  return result;
};

// Line 281: range 00000000149AE08E-00000000149AE2CD
Player *__fastcall WatcherFactory::createWatcher(
        Player *player,
        const data::WatcherConfig *watcher_id,
        uint32_t initial_progress)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  __int64 v7; // rsi
  common::milog::MiLogStream *v8; // rax
  const data::WatcherConfig *config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+40h] [rbp-80h] BYREF
  char v15[96]; // [rsp+60h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 14 watcher_id:280";
  *(_QWORD *)(v3 + 16) = WatcherFactory::createWatcher;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = initial_progress;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  v7 = *(unsigned int *)(v3 + 32);
  config_ptr = WatcherExcelConfigMgr::findWatcherConfig(&v6->design_config.txt_config_mgr.watcher_config_mgr, v7);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( config_ptr )
  {
    if ( *(_WORD *)(((unsigned __int64)player >> 3) + 0x7FFF8000) )
      __asan_report_store16(player, v7);
    WatcherFactory::createWatcher(player, watcher_id, (uint32_t)config_ptr);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/watcher/watcher.cpp",
      "createWatcher",
      285);
    v8 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])" cannot find watcher config, watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    std::shared_ptr<BaseWatcher>::shared_ptr((std::shared_ptr<BaseWatcher> *const)player, 0LL);
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
  return player;
};

// Line 292: range 00000000149AE2CE-00000000149AE2D8
const std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>> *__cdecl WatcherFactory::getEventTriggerMap()
{
  return (const std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>> *)WatcherFactory::getInstance();
};

// Line 297: range 00000000149AE2DA-00000000149AE4EA
std::set<data::WatcherTriggerType> *__fastcall WatcherFactory::getWatcherTriggerTypeSet(
        std::set<data::WatcherTriggerType> *retstr,
        InternalPlayerEventType event_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  WatcherFactory *Instance; // rax
  WatcherFactory *v6; // rax
  std::__detail::_Node_iterator<std::pair<const std::type_index,std::set<data::WatcherTriggerType> >,false,false>::pointer v7; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::set<data::WatcherTriggerType> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 8 iter:299 64 8 14 event_type:296";
  *(_QWORD *)(v2 + 16) = WatcherFactory::getWatcherTriggerTypeSet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  *(InternalPlayerEventType *)(v2 + 64) = event_type;
  Instance = WatcherFactory::getInstance();
  *(std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::iterator *)(v2 + 32) = std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::find(
                                                                                                     &Instance->event_trigger_map_,
                                                                                                     (const std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::key_type *)(v2 + 64));
  v6 = WatcherFactory::getInstance();
  __y._M_cur = std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::end(&v6->event_trigger_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::type_index const,std::set<data::WatcherTriggerType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::set<data::WatcherTriggerType> >,false> *)(v2 + 32),
         &__y) )
  {
    if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store_n(retstr, 48LL);
    }
    *(_QWORD *)retstr->_M_t._M_impl.gap0 = 0LL;
    *(_QWORD *)&retstr->_M_t._M_impl._M_header._M_color = 0LL;
    retstr->_M_t._M_impl._M_header._M_parent = 0LL;
    retstr->_M_t._M_impl._M_header._M_left = 0LL;
    retstr->_M_t._M_impl._M_header._M_right = 0LL;
    retstr->_M_t._M_impl._M_node_count = 0LL;
    std::set<data::WatcherTriggerType>::set(retstr);
  }
  else
  {
    v7 = std::__detail::_Node_iterator<std::pair<std::type_index const,std::set<data::WatcherTriggerType>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const std::type_index,std::set<data::WatcherTriggerType> >,false,false> *const)(v2 + 32));
    std::set<data::WatcherTriggerType>::set(retstr, &v7->second);
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
  return retstr;
};

// Line 308: range 00000000149AE4EC-00000000149AE68D
const std::set<data::WatcherTriggerType> *__fastcall WatcherFactory::getWatcherTriggerTypeSetByRef(
        InternalPlayerEventType event_type)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  WatcherFactory *Instance; // rax
  WatcherFactory *v5; // rax
  const std::set<data::WatcherTriggerType> *result; // rax
  std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::set<data::WatcherTriggerType> >,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 8 8 iter:310 64 8 14 event_type:307";
  *(_QWORD *)(v1 + 16) = WatcherFactory::getWatcherTriggerTypeSetByRef;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -202116352;
  *(InternalPlayerEventType *)(v1 + 64) = event_type;
  if ( !(_BYTE)`guard variable for'WatcherFactory::getWatcherTriggerTypeSetByRef(std::type_index)::static_empty_watcher_trigger_type_set
    && __cxa_guard_acquire(&`guard variable for'WatcherFactory::getWatcherTriggerTypeSetByRef(std::type_index)::static_empty_watcher_trigger_type_set) )
  {
    std::set<data::WatcherTriggerType>::set(&WatcherFactory::getWatcherTriggerTypeSetByRef(std::type_index)::static_empty_watcher_trigger_type_set);
    __cxa_guard_release(&`guard variable for'WatcherFactory::getWatcherTriggerTypeSetByRef(std::type_index)::static_empty_watcher_trigger_type_set);
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<data::WatcherTriggerType>::~set,
      &WatcherFactory::getWatcherTriggerTypeSetByRef(std::type_index)::static_empty_watcher_trigger_type_set,
      &_dso_handle);
  }
  Instance = WatcherFactory::getInstance();
  *(std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::iterator *)(v1 + 32) = std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::find(
                                                                                                     &Instance->event_trigger_map_,
                                                                                                     (const std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::key_type *)(v1 + 64));
  v5 = WatcherFactory::getInstance();
  __y._M_cur = std::unordered_map<std::type_index,std::set<data::WatcherTriggerType>>::end(&v5->event_trigger_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<std::type_index const,std::set<data::WatcherTriggerType>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::type_index,std::set<data::WatcherTriggerType> >,false> *)(v1 + 32),
         &__y) )
  {
    result = &WatcherFactory::getWatcherTriggerTypeSetByRef(std::type_index)::static_empty_watcher_trigger_type_set;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<std::type_index const,std::set<data::WatcherTriggerType>>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<const std::type_index,std::set<data::WatcherTriggerType> >,false,false> *const)(v1 + 32))->second;
  }
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
  return result;
};

// Line 338: range 00000000149AE68E-00000000149AEE24
int32_t __cdecl CombatMulticondConfigCommonWatcher::tryUpdateProgressImpl(
        CombatMulticondConfigCommonWatcher *const this,
        Player *player,
        const CombatMulticondConfigCommonEvent *event,
        const CombatMulticondConfigCommonWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t WatcherId; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rbx
  int32_t result; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rbx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  uint32_t *v17; // rax
  uint32_t *v18; // rdx
  uint32_t *p_stage_id; // rsi
  uint32_t *v20; // rax
  uint32_t *v21; // rdx
  char v22; // cl
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v23; // rax
  _DWORD *v24; // rdx
  data::LogicType logic_type; // eax
  const unsigned int *v26; // rax
  _DWORD *v27; // rdx
  const unsigned int *v28; // rax
  _DWORD *v29; // rdx
  common::milog::MiLogStream *v30; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rbx
  unsigned int v35; // [rsp+2Ch] [rbp-D4h] BYREF
  unsigned int val; // [rsp+30h] [rbp-D0h] BYREF
  uint32_t value; // [rsp+34h] [rbp-CCh]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+38h] [rbp-C8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+40h] [rbp-C0h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+48h] [rbp-B8h]
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-B0h] BYREF
  char v42[144]; // [rsp+70h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 12 progress:352 48 4 12 stage_id:353 64 4 18 stage_progress:355";
  *(_QWORD *)(v4 + 16) = CombatMulticondConfigCommonWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202116348;
  WatcherId = BaseWatcher::getWatcherId(this);
  if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->watcher_id);
  }
  if ( WatcherId == event->watcher_id )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            &param->stage_id_set,
            &event->stage_id) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        346);
      v12 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
              &v41,
              (const char (*)[18])"invalid stage_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->stage_id);
      v14 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v13, (const char (*)[13])" watcher_id:");
      val = BaseWatcher::getWatcherId(this);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &val);
      v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
      operator<<(v16, player);
      common::milog::MiLogStream::~MiLogStream(&v41);
      result = -1;
    }
    else
    {
      v17 = (uint32_t *)std::unordered_map<unsigned int,int>::operator[](&this->var_map_, &event->stage_id);
      v18 = v17;
      if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v17);
      }
      value = *v18;
      if ( *(_BYTE *)(((unsigned __int64)&event->add_progress >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->add_progress >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->add_progress);
      }
      value = SAFE_ADD<unsigned int,unsigned int>(value, event->add_progress);
      p_stage_id = &event->stage_id;
      v20 = (uint32_t *)std::unordered_map<unsigned int,int>::operator[](&this->var_map_, &event->stage_id);
      v21 = v20;
      v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
      if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
      {
        LOBYTE(p_stage_id) = v22 != 0;
        __asan_report_store4(v20, p_stage_id, (_BYTE)v20);
      }
      *v21 = value;
      *(_DWORD *)(v4 + 32) = value;
      __for_range = &param->stage_id_set;
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->stage_id_set)._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->stage_id_set)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v23 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v24 = v23;
        if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v23);
        }
        *(_DWORD *)(v4 + 48) = *v24;
        *(_DWORD *)(v4 + 64) = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,int>>(
                                 &this->var_map_,
                                 (const std::unordered_map<unsigned int,int>::key_type *)(v4 + 48),
                                 0);
        if ( *(_BYTE *)(((unsigned __int64)&param->logic_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&param->logic_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&param->logic_type);
        }
        logic_type = param->logic_type;
        if ( logic_type == LOGIC_AND )
        {
          v26 = std::min<unsigned int>((const unsigned int *)(v4 + 32), (const unsigned int *)(v4 + 64));
          v27 = v26;
          if ( *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v26 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v26 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v26);
          }
          *(_DWORD *)(v4 + 32) = *v27;
        }
        else
        {
          if ( logic_type != LOGIC_OR )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/player/watcher/watcher.cpp",
              "tryUpdateProgressImpl",
              365);
            v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                    &v41,
                    (const char (*)[20])"invalid logic_type:");
            if ( *(_BYTE *)(((unsigned __int64)&param->logic_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&param->logic_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&param->logic_type);
            }
            v35 = param->logic_type;
            v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &v35);
            v32 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                    v31,
                    (const char (*)[13])" watcher_id:");
            val = BaseWatcher::getWatcherId(this);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &val);
            common::milog::MiLogStream::~MiLogStream(&v41);
            result = -1;
            goto LABEL_38;
          }
          v28 = std::max<unsigned int>((const unsigned int *)(v4 + 32), (const unsigned int *)(v4 + 64));
          v29 = v28;
          if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v28);
          }
          *(_DWORD *)(v4 + 32) = *v29;
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
      if ( BaseWatcher::getProgress(this) != *(_DWORD *)(v4 + 32) )
        BaseWatcher::tryCorrectProgress(this, *(_DWORD *)(v4 + 32));
      result = 0;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      341);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v41,
           (const char (*)[40])"watcher_id not match! event.watcher_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->watcher_id);
    v10 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v9, (const char (*)[13])" watcher_id:");
    val = BaseWatcher::getWatcherId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v41);
    result = -1;
  }
LABEL_38:
  if ( v42 == (char *)v4 )
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

// Line 382: range 00000000149AEE26-00000000149AEE55
int32_t __cdecl ElementBallWatcher::tryUpdateProgressImpl(
        ElementBallWatcher *const this,
        Player *player,
        const UseElementEnergyItemEvent *event,
        const ElementBallWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 391: range 00000000149AEE56-00000000149AEF4D
int32_t __cdecl WorldLevelUpWatcher::tryUpdateProgressImpl(
        WorldLevelUpWatcher *const this,
        Player *player,
        const PlayerWorldLevelLimitUpEvent *event,
        const WorldLevelUpWatcherParam *param)
{
  uint32_t old_world_level_limit; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->old_world_level_limit >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->old_world_level_limit >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&event->old_world_level_limit);
  }
  old_world_level_limit = event->old_world_level_limit;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_world_level_limit < param->target_world_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->new_world_level_limit >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->new_world_level_limit >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->new_world_level_limit);
    }
    if ( event->new_world_level_limit >= param->target_world_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 400: range 00000000149AEF4E-00000000149AEFF5
int32_t __cdecl WorldLevelUpWatcher::refreshProgressImpl(
        WorldLevelUpWatcher *const this,
        Player *player,
        const WorldLevelUpWatcherParam *param)
{
  PlayerBasicComp *BasicComp; // rax
  uint32_t world_level_limit; // [rsp+2Ch] [rbp-4h]

  if ( BaseWatcher::getProgress(this) )
    return 0;
  BasicComp = Player::getBasicComp(player);
  world_level_limit = PlayerBasicComp::calcWorldLevelLimit(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( world_level_limit >= param->target_world_level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 418: range 00000000149AEFF6-00000000149AF0A1
int32_t __cdecl DungeonEntryToBeExploredWatcher::tryUpdateProgressImpl(
        DungeonEntryToBeExploredWatcher *const this,
        Player *player,
        const DungeonEntryChangeToBeExploredEvent *event,
        const DungeonEntryToBeExploredWatcherParam *param)
{
  uint32_t dungeon_entry_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  dungeon_entry_id = param->dungeon_entry_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_entry_entity_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->dungeon_entry_entity_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->dungeon_entry_entity_id);
  }
  if ( dungeon_entry_id == event->dungeon_entry_entity_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 430: range 00000000149AF0A2-00000000149AF1C9
int32_t __cdecl UnlockGateTempleWatcher::tryUpdateProgressImpl(
        UnlockGateTempleWatcher *const this,
        Player *player,
        const InteractConsumeGadgetEvent *event,
        const UnlockGateTempleWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)&param->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->city_id);
  }
  if ( param->city_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->gadget_city_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->gadget_city_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->gadget_city_id);
    }
    if ( event->gadget_city_id != param->city_id )
      return 0;
  }
  if ( !std::unordered_set<unsigned int>::empty(&param->area_id_set)
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->area_id_set,
          &event->gadget_area_id) )
  {
    return 0;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->gadget_id_set,
         &event->gadget_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 448: range 00000000149AF1CA-00000000149AF32A
int32_t __cdecl UnlockGateTempleWatcher::refreshProgressImpl(
        UnlockGateTempleWatcher *const this,
        Player *player,
        const UnlockGateTempleWatcherParam *param)
{
  uint32_t *p_city_id; // rdx
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  PlayerSceneComp *SceneComp; // rax
  uint32_t Progress; // eax
  uint32_t total_num; // [rsp+20h] [rbp-30h]
  uint32_t gadget_id; // [rsp+24h] [rbp-2Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-28h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-20h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-18h]

  p_city_id = &param->city_id;
  if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_city_id);
  }
  if ( param->city_id )
    return 0;
  total_num = 0;
  __for_range = &param->gadget_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->gadget_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->gadget_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    gadget_id = *v6;
    SceneComp = Player::getSceneComp(player);
    total_num += PlayerSceneComp::getGadgetInteractNum(SceneComp, gadget_id);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( total_num > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, total_num - Progress);
  }
  return 0;
};

// Line 469: range 00000000149AF32C-00000000149AF4B9
bool __cdecl UnlockAreaWatcher::isAllFinished(UnlockAreaWatcher *const this, const UnlockAreaWatcherParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  bool result; // al
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 id:470";
  *(_QWORD *)(v2 + 16) = UnlockAreaWatcher::isAllFinished;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &param->area_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->area_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->area_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,int>,unsigned int>(
            &this->var_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      result = 0;
      goto LABEL_12;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  result = 1;
LABEL_12:
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

// Line 480: range 00000000149AF4BA-00000000149AF541
int32_t __cdecl UnlockAreaWatcher::tryUpdateProgressImpl(
        UnlockAreaWatcher *const this,
        Player *player,
        const UnlockAreaEvent *event,
        const UnlockAreaWatcherParam *param)
{
  int *v4; // r8
  int v8; // [rsp+2Ch] [rbp-4h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->area_id_set,
         &event->area_id) )
  {
    v8 = 0;
    std::unordered_map<unsigned int,int>::emplace<unsigned int const&,int>(
      &this->var_map_,
      &event->area_id,
      &v8,
      (const unsigned int *)&this->var_map_,
      v4);
  }
  if ( UnlockAreaWatcher::isAllFinished(this, param) )
    BaseWatcher::tryCorrectProgress(this, 1u);
  return 0;
};

// Line 493: range 00000000149AF542-00000000149AF86B
int32_t __cdecl UnlockAreaWatcher::refreshProgressImpl(
        UnlockAreaWatcher *const this,
        Player *player,
        const UnlockAreaWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  Scene *v10; // rax
  SceneAreaComp *AreaComp; // rax
  int *v12; // r8
  int32_t result; // eax
  int v15; // [rsp+24h] [rbp-CCh] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:500 64 16 13 scene_ptr:494";
  *(_QWORD *)(v3 + 16) = UnlockAreaWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<PlayerWorldScene>(0LL, (const std::shared_ptr<PlayerWorldScene> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "refreshProgressImpl",
      497);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v19,
           (const char (*)[33])"findMainWorldScene fail, player:");
    operator<<(v6, player);
    common::milog::MiLogStream::~MiLogStream(&v19);
    v7 = -1;
  }
  else
  {
    __for_range = &param->area_id_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->area_id_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->area_id_set)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v8 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v3 + 48) = *v9;
      v10 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      AreaComp = Scene::getAreaComp(v10);
      if ( SceneAreaComp::isAreaUnlocked(AreaComp, *(_DWORD *)(v3 + 48)) )
      {
        v15 = 0;
        std::unordered_map<unsigned int,int>::emplace<unsigned int &,int>(
          &this->var_map_,
          (unsigned int *)(v3 + 48),
          &v15,
          (unsigned int *)&this->var_map_,
          v12);
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    if ( UnlockAreaWatcher::isAllFinished(this, param) )
      BaseWatcher::tryCorrectProgress(this, 1u);
    v7 = 0;
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 64));
  result = v7;
  if ( v20 == (char *)v3 )
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

// Line 519: range 00000000149AF86C-00000000149AFE21
int32_t __cdecl UnlockTransPointWatcher::tryUpdateProgressImpl(
        UnlockTransPointWatcher *const this,
        Player *player,
        const UnlockTransPointEvent *event,
        const UnlockTransPointWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t v8; // esi
  char v9; // r14
  char v10; // r15
  const JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t point_id; // edx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  const char *v15; // rax
  int32_t result; // eax
  char v17; // [rsp+Eh] [rbp-D2h]
  char v18; // [rsp+Fh] [rbp-D1h]
  std::allocator<char> __a; // [rsp+3Fh] [rbp-A1h] BYREF
  std::shared_ptr<Config> v23; // [rsp+40h] [rbp-A0h] BYREF
  std::string __rhs; // [rsp+50h] [rbp-90h] BYREF
  char v25[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 19 trans_point_ptr:528";
  *(_QWORD *)(v4 + 16) = UnlockTransPointWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( !param->city_id )
    goto LABEL_49;
  if ( *(_BYTE *)(((unsigned __int64)&event->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->city_id);
  }
  if ( event->city_id == param->city_id )
  {
LABEL_49:
    if ( std::unordered_set<unsigned int>::empty(&param->area_id_set)
      || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &param->area_id_set,
           &event->area_id) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v23);
      v8 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)
         + 93080;
      if ( *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->point_id);
      }
      if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->scene_id);
      }
      JsonConfigMgr::findScenePoint<data::SceneTransPoint>((const JsonConfigMgr *const)(v4 + 32), v8, event->scene_id);
      std::shared_ptr<Config>::~shared_ptr(&v23);
      if ( !std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v4 + 32), 0LL) )
      {
        v9 = 0;
        v10 = 0;
        v18 = 0;
        if ( *(_BYTE *)(((unsigned __int64)&param->is_normal >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_normal >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(&param->is_normal);
        }
        if ( !param->is_normal )
          goto LABEL_34;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v23);
        v9 = 1;
        p_json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v23)->design_config.json_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) )
        {
          p_json_config_mgr = (const JsonConfigMgr *)&event->point_id;
          __asan_report_load4(&event->point_id);
        }
        point_id = event->point_id;
        if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          p_json_config_mgr = (const JsonConfigMgr *)&event->scene_id;
          __asan_report_load4(&event->scene_id);
        }
        if ( JsonConfigMgr::findScenePointType(p_json_config_mgr, event->scene_id, point_id) )
          goto LABEL_33;
        std::allocator<char>::allocator(&__a);
        v10 = 1;
        std::string::basic_string<std::allocator<char>>(&__rhs, "SceneTransPoint", &__a);
        v18 = 1;
        v13 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(v13);
        v14 = *(_QWORD *)v13 + 32LL;
        if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(*(_QWORD *)v13 + 32LL);
        v15 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))v14)(v13);
        if ( std::operator!=<char>(v15, &__rhs) )
LABEL_33:
          v17 = 1;
        else
LABEL_34:
          v17 = 0;
        if ( v18 )
          std::string::~string(&__rhs);
        if ( v10 )
          std::allocator<char>::~allocator(&__a);
        if ( v9 )
          std::shared_ptr<Config>::~shared_ptr(&v23);
        if ( !v17 )
          BaseWatcher::addProgress(this, 1u);
      }
      std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v4 + 32));
    }
  }
  result = 0;
  if ( v25 == (char *)v4 )
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

// Line 544: range 00000000149AFE22-00000000149B05D1
int32_t __cdecl UnlockTransPointWatcher::refreshProgressImpl(
        UnlockTransPointWatcher *const this,
        Player *player,
        const UnlockTransPointWatcherParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int *v6; // rax
  uint32_t *v7; // rdx
  uint32_t SceneComp; // eax
  Scene *v9; // rax
  unsigned int *v10; // rax
  uint32_t *v11; // rdx
  unsigned int v12; // eax
  WorldAreaExcelConfigMgr *p_world_area_config_mgr; // r14
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t AreaCityId; // ecx
  bool v16; // r14
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  char v18; // r14
  char v19; // r15
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  const char *v23; // rax
  uint32_t Progress; // eax
  uint32_t v25; // eax
  int32_t result; // eax
  char v27; // [rsp+17h] [rbp-119h]
  std::allocator<char> __a; // [rsp+33h] [rbp-FDh] BYREF
  uint32_t unlock_count; // [rsp+34h] [rbp-FCh]
  uint32_t scene_id; // [rsp+38h] [rbp-F8h]
  uint32_t point_id; // [rsp+3Ch] [rbp-F4h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+40h] [rbp-F0h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+48h] [rbp-E8h] BYREF
  std::unordered_set<unsigned int>::iterator __for_begin_0; // [rsp+50h] [rbp-E0h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end_0; // [rsp+58h] [rbp-D8h] BYREF
  const std::set<unsigned int> *__for_range; // [rsp+60h] [rbp-D0h]
  std::unordered_set<unsigned int> *__for_range_0; // [rsp+68h] [rbp-C8h]
  std::shared_ptr<Config> v39; // [rsp+70h] [rbp-C0h] BYREF
  std::string __rhs; // [rsp+80h] [rbp-B0h] BYREF
  char v41[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 scene_ptr:548 64 16 19 trans_point_ptr:555";
  *(_QWORD *)(v3 + 16) = UnlockTransPointWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  unlock_count = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v39);
  __for_range = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.world_area_config_mgr.city_related_scene_id_set;
  std::shared_ptr<Config>::~shared_ptr(&v39);
  __for_begin._M_node = std::set<unsigned int>::begin(__for_range)._M_node;
  __for_end._M_node = std::set<unsigned int>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    scene_id = *v7;
    SceneComp = (unsigned int)Player::getSceneComp(player);
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 32), SceneComp);
    if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
    {
      v9 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      __for_range_0 = Scene::getAllUnlockPoint(v9);
      __for_begin_0._M_cur = std::unordered_set<unsigned int>::begin(__for_range_0)._M_cur;
      __for_end_0._M_cur = std::unordered_set<unsigned int>::end(__for_range_0)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin_0, &__for_end_0) )
      {
        v10 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin_0);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        point_id = *v11;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v39);
        v12 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
        JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
          (const JsonConfigMgr *const)(v3 + 64),
          v12 + 93080,
          scene_id);
        std::shared_ptr<Config>::~shared_ptr(&v39);
        if ( !std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v3 + 64), 0LL) )
        {
          if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(param);
          }
          if ( !param->city_id )
            goto LABEL_52;
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v39);
          p_world_area_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39)->design_config.txt_config_mgr.world_area_config_mgr;
          v14 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          if ( *(_BYTE *)(((unsigned __int64)&v14->area_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v14->area_id >> 3) + 0x7FFF8000) <= 1 )
          {
            v14 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load2(&v14->area_id);
          }
          AreaCityId = WorldAreaExcelConfigMgr::findAreaCityId(p_world_area_config_mgr, v14->area_id);
          if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(param);
          }
          v16 = AreaCityId != param->city_id;
          std::shared_ptr<Config>::~shared_ptr(&v39);
          if ( !v16 )
          {
LABEL_52:
            if ( std::unordered_set<unsigned int>::empty(&param->area_id_set)
              || (v17 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64)),
                  common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned short>(
                    &param->area_id_set,
                    &v17->area_id)) )
            {
              v18 = 0;
              v19 = 0;
              if ( *(_BYTE *)(((unsigned __int64)&param->is_normal >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_normal >> 3)
                                                                  + 0x7FFF8000) )
              {
                __asan_report_load1(&param->is_normal);
              }
              if ( !param->is_normal )
                goto LABEL_36;
              v20 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              if ( *(_BYTE *)(((unsigned __int64)&v20->type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&v20->type >> 3) + 0x7FFF8000) <= 3 )
              {
                v20 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v20->type);
              }
              if ( v20->type )
                goto LABEL_35;
              std::allocator<char>::allocator(&__a);
              v18 = 1;
              std::string::basic_string<std::allocator<char>>(&__rhs, "SceneTransPoint", &__a);
              v19 = 1;
              v21 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
              if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
                v21 = __asan_report_load8(v21);
              v22 = *(_QWORD *)v21 + 32LL;
              if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
                v21 = __asan_report_load8(*(_QWORD *)v21 + 32LL);
              v23 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))v22)(v21);
              if ( std::operator!=<char>(v23, &__rhs) )
LABEL_35:
                v27 = 1;
              else
LABEL_36:
                v27 = 0;
              if ( v19 )
                std::string::~string(&__rhs);
              if ( v18 )
                std::allocator<char>::~allocator(&__a);
              if ( !v27 )
                ++unlock_count;
            }
          }
        }
        std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 64));
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin_0);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
    std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
  }
  Progress = BaseWatcher::getProgress(this);
  if ( unlock_count > Progress )
  {
    v25 = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, unlock_count - v25);
  }
  result = 0;
  if ( v41 == (char *)v3 )
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

// Line 593: range 00000000149B05D2-00000000149B0701
int32_t __cdecl OpenChestWithGadgetIdWatcher::tryUpdateProgressImpl(
        OpenChestWithGadgetIdWatcher *const this,
        Player *player,
        const ChestOpenEvent *event,
        const OpenChestWithGadgetIdWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)&param->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->city_id);
  }
  if ( param->city_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->deprecated_group_city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->deprecated_group_city_id >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&event->deprecated_group_city_id);
    }
    if ( event->deprecated_group_city_id != param->city_id )
      return 0;
  }
  if ( !std::unordered_set<unsigned int>::empty(&param->area_id_set)
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->area_id_set,
          &event->deprecated_group_area_id) )
  {
    return 0;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->gadget_id_set,
         &event->gadget_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 609: range 00000000149B0702-00000000149B0844
int32_t __cdecl OpenChestWithGadgetIdWatcher::refreshProgressImpl(
        OpenChestWithGadgetIdWatcher *const this,
        Player *player,
        const OpenChestWithGadgetIdWatcherParam *param)
{
  uint32_t *p_city_id; // rdx
  unsigned int *v5; // rax
  uint32_t *v6; // rdx
  PlayerSceneComp *SceneComp; // rax
  int32_t open_num; // [rsp+20h] [rbp-20h]
  uint32_t gadget_id; // [rsp+24h] [rbp-1Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  p_city_id = &param->city_id;
  if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_city_id);
  }
  if ( param->city_id )
    return 0;
  if ( !std::unordered_set<unsigned int>::empty(&param->area_id_set) )
    return 0;
  open_num = 0;
  __for_range = &param->gadget_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->gadget_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->gadget_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    gadget_id = *v6;
    SceneComp = Player::getSceneComp(player);
    open_num += PlayerSceneComp::getChestOpenNum(SceneComp, gadget_id);
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  return open_num;
};

// Line 629: range 00000000149B0846-00000000149B0A2E
int32_t __cdecl OpenWorldChestWatcher::tryUpdateProgressImpl(
        OpenWorldChestWatcher *const this,
        Player *player,
        const ChestOpenEvent *event,
        const OpenWorldChestWatcherParam *param)
{
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  bool v5; // bl
  std::shared_ptr<Config> v10[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v10);
  p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->scene_id);
  }
  v5 = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, event->scene_id) != SCENE_WORLD;
  std::shared_ptr<Config>::~shared_ptr(v10);
  if ( v5 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->city_id);
  }
  if ( param->city_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->gadget_city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->gadget_city_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->gadget_city_id);
    }
    if ( event->gadget_city_id != param->city_id )
      return 0;
  }
  if ( !std::unordered_set<unsigned int>::empty(&param->area_id_set)
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->area_id_set,
          &event->gadget_area_id) )
  {
    return 0;
  }
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->gadget_id_set,
         &event->gadget_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 652: range 00000000149B0A30-00000000149B0A7A
int32_t __cdecl EnterClimateAreaWatcher::tryUpdateProgressImpl(
        EnterClimateAreaWatcher *const this,
        Player *player,
        const EnterClimateAreaEvent *event,
        const EnterClimateAreaWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->json_climate_type_set,
         &event->json_climate_type) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 664: range 00000000149B0A7C-00000000149B0C01
int32_t __cdecl CityLevelUpWatcher::tryUpdateProgressImpl(
        CityLevelUpWatcher *const this,
        Player *player,
        const CityLevelupEvent *event,
        const CityLevelUpWatcherParam *param)
{
  uint32_t city_id; // ecx
  uint32_t cur_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->city_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->city_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->city_id);
  }
  city_id = event->city_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( city_id == param->city_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->cur_level);
    }
    cur_level = event->cur_level;
    if ( *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->level);
    }
    if ( cur_level >= param->level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->last_level);
      }
      if ( event->last_level < param->level )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 672: range 00000000149B0C02-00000000149B0ECC
int32_t __cdecl CityLevelUpWatcher::refreshProgressImpl(
        CityLevelUpWatcher *const this,
        Player *player,
        const CityLevelUpWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t v6; // r14d
  uint32_t CityComp; // ecx
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  uint32_t Level; // ecx
  int32_t result; // eax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-90h] BYREF
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 12 city_ptr:677";
  *(_QWORD *)(v3 + 16) = CityLevelUpWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( BaseWatcher::getProgress(this) )
  {
    v6 = 0;
  }
  else
  {
    CityComp = (unsigned int)Player::getCityComp(player);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    PlayerCityComp::findCity((const PlayerCityComp *const)(v3 + 32), CityComp);
    if ( std::operator==<City>(0LL, (const std::shared_ptr<City> *)(v3 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/watcher.cpp",
        "refreshProgressImpl",
        680);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v15,
             (const char (*)[25])"findCity fail, city_id: ");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)param);
      v10 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v9, (const char (*)[10])", player:");
      operator<<(v10, player);
      common::milog::MiLogStream::~MiLogStream(&v15);
      v6 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<City,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      Level = City::getLevel(v11);
      if ( *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->level);
      }
      if ( Level >= param->level )
        BaseWatcher::addProgress(this, 1u);
      v6 = 0;
    }
    std::shared_ptr<City>::~shared_ptr((std::shared_ptr<City> *const)(v3 + 32));
  }
  result = v6;
  if ( v16 == (char *)v3 )
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

// Line 694: range 00000000149B0ECE-00000000149B0F96
int32_t __cdecl MonsterDieWatcher::tryUpdateProgressImpl(
        MonsterDieWatcher *const this,
        Player *player,
        const RoundMonsterDieEvent *event,
        const MonsterDieWatcherParam *param)
{
  PlayerMpComp *MpComp; // rax

  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->monster_id_set,
          &event->monster_id) )
    return 0;
  if ( *(char *)(((unsigned __int64)&param->is_allow_mp >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&param->is_allow_mp);
  if ( param->is_allow_mp || (MpComp = Player::getMpComp(player), !PlayerMpComp::isInMpMode(MpComp)) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 711: range 00000000149B0F98-00000000149B1131
int32_t __cdecl MonsterCategoryDieWatcher::tryUpdateProgressImpl(
        MonsterCategoryDieWatcher *const this,
        Player *player,
        const RoundMonsterDieEvent *event,
        const MonsterCategoryDieWatcherParam *param)
{
  InvestigationExcelConfigMgr *p_investigation_config_mgr; // rcx
  PlayerMpComp *MpComp; // rax
  data::MonsterCategory monster_category; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<Config> v11[2]; // [rsp+30h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v11);
  p_investigation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11)->design_config.txt_config_mgr.investigation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->monster_id);
  }
  monster_category = InvestigationExcelConfigMgr::getInvestigateionMonsterCategory(
                       p_investigation_config_mgr,
                       event->monster_id);
  std::shared_ptr<Config>::~shared_ptr(v11);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( monster_category != param->monster_category )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->is_allow_mp >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_allow_mp >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_allow_mp);
  }
  if ( param->is_allow_mp || (MpComp = Player::getMpComp(player), !PlayerMpComp::isInMpMode(MpComp)) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 729: range 00000000149B1132-00000000149B1271
int32_t __cdecl UnlockSpecificTransPointWatcher::tryUpdateProgressImpl(
        UnlockSpecificTransPointWatcher *const this,
        Player *player,
        const UnlockTransPointEvent *event,
        const UnlockSpecificTransPointWatcherParam *param)
{
  uint32_t *p_scene_id; // rdx
  uint32_t scene_id; // ecx
  uint32_t point_id; // ecx

  p_scene_id = &event->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_scene_id);
  }
  scene_id = event->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( scene_id != param->scene_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->point_id);
  }
  point_id = event->point_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->point_id);
  }
  if ( point_id != param->point_id )
    return 0;
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 738: range 00000000149B1272-00000000149B153F
int32_t __cdecl UnlockSpecificTransPointWatcher::refreshProgressImpl(
        UnlockSpecificTransPointWatcher *const this,
        Player *player,
        const UnlockSpecificTransPointWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t SceneComp; // ecx
  Scene *v7; // rax
  unsigned int *v8; // rax
  uint32_t *v9; // rdx
  int32_t result; // eax
  uint32_t point_id; // [rsp+24h] [rbp-8Ch]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-88h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-80h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-78h]
  char v16[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 scene_ptr:743";
  *(_QWORD *)(v3 + 16) = UnlockSpecificTransPointWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !BaseWatcher::getProgress(this) )
  {
    SceneComp = (unsigned int)Player::getSceneComp(player);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    PlayerSceneComp::findScene((const PlayerSceneComp *const)(v3 + 32), SceneComp);
    if ( !std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v3 + 32)) )
    {
      v7 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
      __for_range = Scene::getAllUnlockPoint(v7);
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v8 = (unsigned int *)std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v9 = v8;
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v8);
        }
        point_id = *v9;
        if ( *(_BYTE *)(((unsigned __int64)&param->point_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->point_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(&param->point_id);
        }
        if ( point_id == param->point_id )
        {
          BaseWatcher::addProgress(this, 1u);
          break;
        }
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  }
  result = 0;
  if ( v16 == (char *)v3 )
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

// Line 763: range 00000000149B1540-00000000149B158A
int32_t __cdecl PlatformStartMoveWatcher::tryUpdateProgressImpl(
        PlatformStartMoveWatcher *const this,
        Player *player,
        const PlatformStartMoveEvent *event,
        const PlatformStartMoveWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->gadget_id_set,
         &event->gadget_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 774: range 00000000149B158C-00000000149B164D
int32_t __cdecl WorldGatherWatcher::tryUpdateProgressImpl(
        WorldGatherWatcher *const this,
        Player *player,
        const WorldGatherEvent *event,
        const WorldGatherWatcherParam *param)
{
  if ( std::set<unsigned int>::empty(&param->group_id_set) && std::set<unsigned int>::empty(&param->point_type_set)
    || std::set<unsigned int>::empty(&param->group_id_set)
    && common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         &param->point_type_set,
         &event->point_type)
    || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         &param->group_id_set,
         &event->group_id)
    && std::set<unsigned int>::empty(&param->point_type_set) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 788: range 00000000149B164E-00000000149B1698
int32_t __cdecl TakeGeneralRewardWatcher::tryUpdateProgressImpl(
        TakeGeneralRewardWatcher *const this,
        Player *player,
        const TakeGeneralRewardEvent *event,
        const TakeGeneralRewardWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->gadget_id_set,
         &event->gadget_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 799: range 00000000149B169A-00000000149B16E4
int32_t __cdecl InteractGadgetWithInteractIdWatcher::tryUpdateProgressImpl(
        InteractGadgetWithInteractIdWatcher *const this,
        Player *player,
        const InteractConsumeGadgetEvent *event,
        const InteractGadgetWithInteractIdWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         &param->gadget_interact_id_set,
         &event->interact_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 811: range 00000000149B16E6-00000000149B178A
int32_t __cdecl TakeDungeonFirstPassRewardWatcher::tryUpdateProgressImpl(
        TakeDungeonFirstPassRewardWatcher *const this,
        Player *player,
        const FinishDungeonEvent *event,
        const TakeDungeonFirstPassRewardWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->is_first_pass >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_first_pass >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_first_pass);
  }
  if ( event->is_first_pass
    && common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->dungeon_id_set,
         &event->dungeon_id) )
  {
    TakeDungeonFirstPassRewardWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 820: range 00000000149B178C-00000000149B1880
int32_t __cdecl TakeDungeonFirstPassRewardWatcher::refreshProgressImpl(
        TakeDungeonFirstPassRewardWatcher *const this,
        Player *player,
        const TakeDungeonFirstPassRewardWatcherParam *param)
{
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  PlayerDungeonComp *DungeonComp; // rax
  uint32_t dungeon_id; // [rsp+24h] [rbp-1Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  __for_range = &param->dungeon_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->dungeon_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v3 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    dungeon_id = *v4;
    DungeonComp = Player::getDungeonComp(player);
    if ( !PlayerDungeonComp::isDungeonPassed(DungeonComp, dungeon_id) )
      return 0;
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 838: range 00000000149B1882-00000000149B198D
int32_t __cdecl ObtainAvatarWatcher::tryUpdateProgressImpl(
        ObtainAvatarWatcher *const this,
        Player *player,
        const ObtainAvatarEvent *event,
        const ObtainAvatarWatcherParam *param)
{
  const PlayerWatcherComp *WatcherComp; // rdi
  uint32_t avatar_filter_type; // edx
  int AvatarFilterParam; // ecx

  WatcherComp = Player::getWatcherComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    WatcherComp = (const PlayerWatcherComp *)param;
    __asan_report_load4(param);
  }
  avatar_filter_type = param->avatar_filter_type;
  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    WatcherComp = (const PlayerWatcherComp *)&event->avatar_id;
    __asan_report_load4(&event->avatar_id);
  }
  AvatarFilterParam = PlayerWatcherComp::getAvatarFilterParam(WatcherComp, event->avatar_id, avatar_filter_type);
  if ( *(_BYTE *)(((unsigned __int64)&param->avatar_filter_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->avatar_filter_param >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&param->avatar_filter_param);
  }
  if ( AvatarFilterParam == param->avatar_filter_param )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 850: range 00000000149B198E-00000000149B1A85
int32_t __cdecl PlayerLevelWatcher::tryUpdateProgressImpl(
        PlayerLevelWatcher *const this,
        Player *player,
        const PlayerLevelupEvent *event,
        const PlayerLevelWatcherParam *param)
{
  uint32_t last_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->last_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->last_level);
  }
  last_level = event->last_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( last_level < param->target_player_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->cur_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->cur_level);
    }
    if ( event->cur_level >= param->target_player_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 858: range 00000000149B1A86-00000000149B1B31
int32_t __cdecl PlayerLevelWatcher::refreshProgressImpl(
        PlayerLevelWatcher *const this,
        Player *player,
        const PlayerLevelWatcherParam *param)
{
  PlayerBasicComp *BasicComp; // rax
  uint32_t Level; // ecx

  if ( BaseWatcher::getProgress(this) )
    return 0;
  BasicComp = Player::getBasicComp(player);
  Level = PlayerBasicComp::getLevel(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( Level >= param->target_player_level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 875: range 00000000149B1B32-00000000149B1C29
int32_t __cdecl AvatarUpgradeWatcher::tryUpdateProgressImpl(
        AvatarUpgradeWatcher *const this,
        Player *player,
        const AvatarLevelupEvent *event,
        const AvatarUpgradeWatcherParam *param)
{
  uint32_t *p_old_level; // rdx
  uint32_t old_level; // ecx

  p_old_level = &event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)p_old_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_old_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_old_level);
  }
  old_level = event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_level < param->avatar_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->level);
    }
    if ( event->level >= param->avatar_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 883: range 00000000149B1D26-00000000149B1ED6
int32_t __cdecl AvatarUpgradeWatcher::refreshProgressImpl(
        AvatarUpgradeWatcher *const this,
        Player *player,
        const AvatarUpgradeWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  int v6; // r13d
  uint32_t Progress; // eax
  int32_t result; // eax
  const PlayerAvatarComp *AvatarComp; // [rsp+10h] [rbp-B0h]
  std::function<ForeachPolicy(const FormalAvatar&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 avatar_count:884";
  *(_QWORD *)(v3 + 16) = AvatarUpgradeWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  AvatarComp = Player::getAvatarComp(player);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::function<AvatarUpgradeWatcher::refreshProgressImpl(Player &,AvatarUpgradeWatcherParam const&)::{lambda(FormalAvatar const&)#1},void,void>(
    &p_func,
    (AvatarUpgradeWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)>)__PAIR128__(
                                                                                (unsigned __int64)param,
                                                                                v3 + 32));
  PlayerAvatarComp::foreachFormalAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::~function(&p_func);
  if ( BaseWatcher::getProgress(this) < *(_DWORD *)(v3 + 32) )
  {
    v6 = *(_DWORD *)(v3 + 32);
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, v6 - Progress);
  }
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

// Line 885: range 00000000149B1C2A-00000000149B1D25
ForeachPolicy __cdecl AvatarUpgradeWatcher::refreshProgressImpl(Player &,AvatarUpgradeWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator()(
        const AvatarUpgradeWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  uint32_t Level; // esi
  const AvatarUpgradeWatcherParam *param; // rdx
  uint32_t *avatar_count; // rax

  Level = Creature::getLevel(formal_avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  param = __closure->__param;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__param);
  }
  if ( Level >= param->avatar_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    avatar_count = __closure->__avatar_count;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3)
                                                                          + 0x7FFF8000) )
    {
      avatar_count = (uint32_t *)__asan_report_load4(__closure->__avatar_count);
    }
    ++*avatar_count;
  }
  return 0;
};

// Line 904: range 00000000149B1ED8-00000000149B1FCF
int32_t __cdecl AvatarPromoteWatcher::tryUpdateProgressImpl(
        AvatarPromoteWatcher *const this,
        Player *player,
        const AvatarPromoteEvent *event,
        const AvatarPromoteWatcherParam *param)
{
  uint32_t *p_old_promote_level; // rdx
  uint32_t old_promote_level; // ecx

  p_old_promote_level = &event->old_promote_level;
  if ( *(_BYTE *)(((unsigned __int64)p_old_promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_old_promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_old_promote_level);
  }
  old_promote_level = event->old_promote_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_promote_level < param->avatar_promote_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->promote_level);
    }
    if ( event->promote_level >= param->avatar_promote_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 912: range 00000000149B20CC-00000000149B227C
int32_t __cdecl AvatarPromoteWatcher::refreshProgressImpl(
        AvatarPromoteWatcher *const this,
        Player *player,
        const AvatarPromoteWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  int v6; // r13d
  uint32_t Progress; // eax
  int32_t result; // eax
  const PlayerAvatarComp *AvatarComp; // [rsp+10h] [rbp-B0h]
  std::function<ForeachPolicy(const FormalAvatar&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 16 avatar_count:913";
  *(_QWORD *)(v3 + 16) = AvatarPromoteWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  AvatarComp = Player::getAvatarComp(player);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::function<AvatarPromoteWatcher::refreshProgressImpl(Player &,AvatarPromoteWatcherParam const&)::{lambda(FormalAvatar const&)#1},void,void>(
    &p_func,
    (AvatarPromoteWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)>)__PAIR128__(
                                                                                (unsigned __int64)param,
                                                                                v3 + 32));
  PlayerAvatarComp::foreachFormalAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::~function(&p_func);
  if ( BaseWatcher::getProgress(this) < *(_DWORD *)(v3 + 32) )
  {
    v6 = *(_DWORD *)(v3 + 32);
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, v6 - Progress);
  }
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

// Line 914: range 00000000149B1FD0-00000000149B20CB
ForeachPolicy __cdecl AvatarPromoteWatcher::refreshProgressImpl(Player &,AvatarPromoteWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator()(
        const AvatarPromoteWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  uint32_t PromoteLevel; // esi
  const AvatarPromoteWatcherParam *param; // rdx
  uint32_t *avatar_count; // rax

  PromoteLevel = Avatar::getPromoteLevel(formal_avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  param = __closure->__param;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__param);
  }
  if ( PromoteLevel >= param->avatar_promote_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    avatar_count = __closure->__avatar_count;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3)
                                                                          + 0x7FFF8000) )
    {
      avatar_count = (uint32_t *)__asan_report_load4(__closure->__avatar_count);
    }
    ++*avatar_count;
  }
  return 0;
};

// Line 933: range 00000000149B227E-00000000149B2375
int32_t __cdecl WeaponUpgradeWatcher::tryUpdateProgressImpl(
        WeaponUpgradeWatcher *const this,
        Player *player,
        const WeaponLevelupEvent *event,
        const WeaponUpgradeWatcherParam *param)
{
  uint32_t *p_old_level; // rdx
  uint32_t old_level; // ecx

  p_old_level = &event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)p_old_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_old_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_old_level);
  }
  old_level = event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_level < param->weapon_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->level);
    }
    if ( event->level >= param->weapon_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 941: range 00000000149B2376-00000000149B2427
int32_t __cdecl WeaponUpgradeWatcher::refreshProgressImpl(
        WeaponUpgradeWatcher *const this,
        Player *player,
        const WeaponUpgradeWatcherParam *param)
{
  PlayerItemComp *ItemComp; // rcx
  uint32_t Progress; // eax
  uint32_t levelup_num; // [rsp+2Ch] [rbp-14h]

  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  levelup_num = PlayerItemComp::getWeaponLevelupNum(ItemComp, param->weapon_level);
  if ( levelup_num > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, levelup_num - Progress);
  }
  return 0;
};

// Line 954: range 00000000149B2428-00000000149B251F
int32_t __cdecl WeaponPromoteWatcher::tryUpdateProgressImpl(
        WeaponPromoteWatcher *const this,
        Player *player,
        const WeaponPromoteEvent *event,
        const WeaponPromoteWatcherParam *param)
{
  uint32_t *p_old_promote_level; // rdx
  uint32_t old_promote_level; // ecx

  p_old_promote_level = &event->old_promote_level;
  if ( *(_BYTE *)(((unsigned __int64)p_old_promote_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_old_promote_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_old_promote_level);
  }
  old_promote_level = event->old_promote_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_promote_level < param->weapon_promote_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->promote_level);
    }
    if ( event->promote_level >= param->weapon_promote_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 962: range 00000000149B2520-00000000149B25D1
int32_t __cdecl WeaponPromoteWatcher::refreshProgressImpl(
        WeaponPromoteWatcher *const this,
        Player *player,
        const WeaponPromoteWatcherParam *param)
{
  PlayerItemComp *ItemComp; // rcx
  uint32_t Progress; // eax
  uint32_t promote_levelup_num; // [rsp+2Ch] [rbp-14h]

  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  promote_levelup_num = PlayerItemComp::getWeaponPromoteLevelupNum(ItemComp, param->weapon_promote_level);
  if ( promote_levelup_num > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, promote_levelup_num - Progress);
  }
  return 0;
};

// Line 975: range 00000000149B25D2-00000000149B275C
int32_t __cdecl ReliquaryUpgradeWatcher::tryUpdateProgressImpl(
        ReliquaryUpgradeWatcher *const this,
        Player *player,
        const ReliquaryLevelupEvent *event,
        const ReliquaryUpgradeWatcherParam *param)
{
  uint32_t rank_level; // ecx
  uint32_t old_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->rank_level);
  }
  rank_level = event->rank_level;
  if ( *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->min_rank_level);
  }
  if ( rank_level < param->min_rank_level )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->old_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->old_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->old_level);
  }
  old_level = event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_level < param->reliquary_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->level);
    }
    if ( event->level >= param->reliquary_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 987: range 00000000149B275E-00000000149B2905
int32_t __cdecl ReliquaryUpgradeWatcher::refreshProgressImpl(
        ReliquaryUpgradeWatcher *const this,
        Player *player,
        const ReliquaryUpgradeWatcherParam *param)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  bool v5; // bl
  PlayerItemComp *ItemComp; // rcx
  uint32_t Progress; // eax
  uint32_t levelup_num; // [rsp+28h] [rbp-28h]
  uint32_t rank_level; // [rsp+2Ch] [rbp-24h]
  std::shared_ptr<Config> v11[2]; // [rsp+30h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&param->is_trace_back >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_trace_back >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_trace_back);
  }
  if ( !param->is_trace_back )
    return 0;
  levelup_num = 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->min_rank_level);
  }
  for ( rank_level = param->min_rank_level; ; ++rank_level )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v11);
    v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v11);
    v5 = rank_level <= ReliquaryExcelConfigMgr::getMaxReliquaryRank(&v4->design_config.txt_config_mgr.reliquary_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(v11);
    if ( !v5 )
      break;
    ItemComp = Player::getItemComp(player);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    levelup_num += PlayerItemComp::getReliquaryLevelupNum(ItemComp, rank_level, param->reliquary_level);
  }
  if ( levelup_num > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, levelup_num - Progress);
  }
  return 0;
};

// Line 1009: range 00000000149B2906-00000000149B2A90
int32_t __cdecl ReliquaryUpgradeEqualRankLevelWatcher::tryUpdateProgressImpl(
        ReliquaryUpgradeEqualRankLevelWatcher *const this,
        Player *player,
        const ReliquaryLevelupEvent *event,
        const ReliquaryUpgradeEqualRankLevelWatcherParam *param)
{
  uint32_t rank_level; // ecx
  uint32_t old_level; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->rank_level);
  }
  rank_level = event->rank_level;
  if ( *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->min_rank_level);
  }
  if ( rank_level != param->min_rank_level )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->old_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->old_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->old_level);
  }
  old_level = event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( old_level < param->reliquary_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->level);
    }
    if ( event->level >= param->reliquary_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1021: range 00000000149B2A92-00000000149B2BDE
int32_t __cdecl ReliquaryUpgradeEqualRankLevelWatcher::refreshProgressImpl(
        ReliquaryUpgradeEqualRankLevelWatcher *const this,
        Player *player,
        const ReliquaryUpgradeEqualRankLevelWatcherParam *param)
{
  const PlayerItemComp *ItemComp; // rdi
  uint32_t reliquary_level; // ecx
  uint32_t Progress; // eax
  uint32_t levelup_num; // [rsp+2Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)&param->is_trace_back >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_trace_back >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_trace_back);
  }
  if ( !param->is_trace_back )
    return 0;
  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    ItemComp = (const PlayerItemComp *)param;
    __asan_report_load4(param);
  }
  reliquary_level = param->reliquary_level;
  if ( *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->min_rank_level >> 3) + 0x7FFF8000) )
  {
    ItemComp = (const PlayerItemComp *)&param->min_rank_level;
    __asan_report_load4(&param->min_rank_level);
  }
  levelup_num = PlayerItemComp::getReliquaryLevelupNum(ItemComp, param->min_rank_level, reliquary_level);
  if ( levelup_num > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, levelup_num - Progress);
  }
  return 0;
};

// Line 1040: range 00000000149B2BE0-00000000149B2D61
int32_t __cdecl SpecifiedWeaponUpgradeWatcher::tryUpdateProgressImpl(
        SpecifiedWeaponUpgradeWatcher *const this,
        Player *player,
        const WeaponLevelupEvent *event,
        const SpecifiedWeaponUpgradeWatcherParam *param)
{
  uint32_t *p_old_level; // rdx
  uint32_t old_level; // ecx
  uint32_t weapon_id; // ecx

  p_old_level = &event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)p_old_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_old_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_old_level);
  }
  old_level = event->old_level;
  if ( *(_BYTE *)(((unsigned __int64)&param->weapon_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->weapon_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->weapon_level);
  }
  if ( old_level < param->weapon_level )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->level);
    }
    if ( event->level >= param->weapon_level )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->weapon_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->weapon_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->weapon_id);
      }
      weapon_id = event->weapon_id;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( weapon_id == param->weapon_id )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 1048: range 00000000149B2D62-00000000149B31AF
int32_t __cdecl SpecifiedWeaponUpgradeWatcher::refreshProgressImpl(
        SpecifiedWeaponUpgradeWatcher *const this,
        Player *player,
        const SpecifiedWeaponUpgradeWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  unsigned __int64 v10; // rax
  PlayerItemComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t Level; // ecx
  std::set<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::set<long unsigned int> *weapon_guid_set_ptr; // [rsp+30h] [rbp-C0h]
  std::set<long unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 guid:1055 64 16 15 weapon_ptr:1057";
  *(_QWORD *)(v3 + 16) = SpecifiedWeaponUpgradeWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  weapon_guid_set_ptr = PlayerItemComp::getItmeGuidSetInPack(ItemComp, param->weapon_id);
  if ( !weapon_guid_set_ptr || !std::set<unsigned long>::size(weapon_guid_set_ptr) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "refreshProgressImpl",
      1052);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v21,
           (const char (*)[55])"[DRAGON_SPINE] cannot find weapon in pack, weapon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)param);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0;
  }
  else
  {
    __for_range = weapon_guid_set_ptr;
    __for_begin._M_node = std::set<unsigned long>::begin(weapon_guid_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned long>::end(weapon_guid_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = (unsigned __int64)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      *(_QWORD *)(v3 + 32) = *(_QWORD *)v10;
      v11 = Player::getItemComp(player);
      PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v3 + 64), (uint64_t)v11);
      if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/watcher/watcher.cpp",
          "refreshProgressImpl",
          1060);
        v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v21,
                (const char (*)[49])"[DRAGON_SPINE] cannot find weapon, weapon_guid: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v12,
          (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v21);
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        Level = Weapon::getLevel(v14);
        if ( *(_BYTE *)(((unsigned __int64)&param->weapon_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->weapon_level >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&param->weapon_level);
        }
        if ( Level < param->weapon_level )
        {
          v13 = 2;
        }
        else
        {
          BaseWatcher::addProgress(this, 1u);
          v13 = 1;
        }
      }
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 64));
      if ( v13 )
      {
        if ( v13 != 2 )
          break;
      }
      std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
    }
    result = 0;
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
  return result;
};

// Line 1076: range 00000000149B32A0-00000000149B373C
int32_t __cdecl WearReliquaryWatcher::tryUpdateProgressImpl(
        WearReliquaryWatcher *const this,
        Player *player,
        const WearOrTakeOffEquipEvent *event,
        const WearReliquaryWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  char v11; // al
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  EquipComp *EquipComp; // rax
  std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr M_node; // r14
  std::set<data::EquipType>::iterator v15; // rax
  uint32_t v16; // ecx
  int32_t result; // eax
  data::EquipType value; // [rsp+28h] [rbp-D8h] BYREF
  uint32_t reliquary_count; // [rsp+2Ch] [rbp-D4h]
  const std::set<data::EquipType> *reliquary_equip_type_set; // [rsp+30h] [rbp-D0h]
  const std::map<data::EquipType,std::shared_ptr<Equip>> *equip_map; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25[176]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 8 15 is_equiped:1089 64 16 15 avatar_ptr:1077 96 16 14 equip_ptr:1083";
  *(_QWORD *)(v4 + 16) = WearReliquaryWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -218959360;
  v6[536862722] = -219021312;
  v6[536862723] = -202178560;
  std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v4 + 64));
  if ( !std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 64)) )
  {
    v7 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    if ( Avatar::isFormal(v7) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v24);
      std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
      reliquary_equip_type_set = &ReliquaryExcelConfigMgr::reliquary_equip_type_set;
      std::shared_ptr<Config>::~shared_ptr(&v24);
      std::weak_ptr<Equip>::lock((const std::weak_ptr<Equip> *const)(v4 + 96));
      if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(v4 + 96)) )
        goto LABEL_15;
      v9 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(v9);
      v10 = *(_QWORD *)v9 + 96LL;
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(*(_QWORD *)v9 + 96LL);
      value = (*(unsigned int (__fastcall **)(unsigned __int64))v10)(v9);
      if ( !common::tools::MiscUtils::isContains<std::set<data::EquipType> const,data::EquipType>(
              reliquary_equip_type_set,
              &value) )
LABEL_15:
        v11 = 1;
      else
        v11 = 0;
      if ( !v11 )
      {
        v12 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        EquipComp = Avatar::getEquipComp(v12);
        equip_map = EquipComp::getEquipMap(EquipComp);
        *(_QWORD *)(v4 + 32) = equip_map;
        M_node = std::set<data::EquipType>::end(reliquary_equip_type_set)._M_node;
        v15._M_node = std::set<data::EquipType>::begin(reliquary_equip_type_set)._M_node;
        reliquary_count = std::count_if<std::_Rb_tree_const_iterator<data::EquipType>,WearReliquaryWatcher::tryUpdateProgressImpl(Player &,WearOrTakeOffEquipEvent const&,WearReliquaryWatcherParam const&)::{lambda(data::EquipType)#1}>(
                            v15,
                            (std::_Rb_tree_const_iterator<data::EquipType>)M_node,
                            *(WearReliquaryWatcher::tryUpdateProgressImpl::<lambda(data::EquipType)> *)(v4 + 32));
        if ( *(char *)(((unsigned __int64)&event->is_wear >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&event->is_wear);
        if ( !event->is_wear )
          goto LABEL_25;
        if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(param);
        }
        if ( reliquary_count == param->min_reliquary_count_per_avatar )
        {
          BaseWatcher::addProgress(this, 1u);
        }
        else
        {
LABEL_25:
          if ( *(char *)(((unsigned __int64)&event->is_wear >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&event->is_wear);
          if ( !event->is_wear )
          {
            v16 = reliquary_count + 1;
            if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(param);
            }
            if ( v16 == param->min_reliquary_count_per_avatar )
              BaseWatcher::subProgress(this, 1u);
          }
        }
      }
      std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v4 + 96));
    }
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 64));
  result = 0;
  if ( v25 == (char *)v4 )
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

// Line 1089: range 00000000149B31B0-00000000149B329F
bool __fastcall WearReliquaryWatcher::tryUpdateProgressImpl(Player &,WearOrTakeOffEquipEvent const&,WearReliquaryWatcherParam const&)::{lambda(data::EquipType)#1}::operator()(
        unsigned __int64 __closure,
        data::EquipType equip_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 equip_type:1089";
  *(_QWORD *)(v2 + 16) = WearReliquaryWatcher::tryUpdateProgressImpl(Player &,WearOrTakeOffEquipEvent const&,WearReliquaryWatcherParam const&)::{lambda(data::EquipType)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = equip_type;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::map<data::EquipType,std::shared_ptr<Equip>> const,data::EquipType>(
             *(const std::map<data::EquipType,std::shared_ptr<Equip>> **)__closure,
             (const data::EquipType *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 1102: range 00000000149B3A5E-00000000149B3C35
int32_t __cdecl WearReliquaryWatcher::refreshProgressImpl(
        WearReliquaryWatcher *const this,
        Player *player,
        const WearReliquaryWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerAvatarComp *AvatarComp; // r14
  int32_t result; // eax
  WearReliquaryWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> v8; // [rsp-20h] [rbp-110h]
  std::shared_ptr<Config> v10; // [rsp+30h] [rbp-C0h] BYREF
  WearReliquaryWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> __f; // [rsp+40h] [rbp-B0h]
  std::function<ForeachPolicy(const FormalAvatar&)> p_func; // [rsp+60h] [rbp-90h] BYREF
  char v13[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 avatar_count:1103";
  *(_QWORD *)(v3 + 16) = WearReliquaryWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  AvatarComp = Player::getAvatarComp(player);
  __f.__avatar_count = (uint32_t *)(v3 + 32);
  __f.__param = param;
  __f.__reliquary_equip_type_set = &ReliquaryExcelConfigMgr::reliquary_equip_type_set;
  v8.__reliquary_equip_type_set = &ReliquaryExcelConfigMgr::reliquary_equip_type_set;
  v8.__param = param;
  v8.__avatar_count = (uint32_t *)(v3 + 32);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::function<WearReliquaryWatcher::refreshProgressImpl(Player &,WearReliquaryWatcherParam const&)::{lambda(FormalAvatar const&)#1},void,void>(
    &p_func,
    v8);
  PlayerAvatarComp::foreachFormalAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::~function(&p_func);
  BaseWatcher::tryCorrectProgress(this, *(_DWORD *)(v3 + 32));
  result = 0;
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

// Line 1105: range 00000000149B382E-00000000149B3A5D
ForeachPolicy __cdecl WearReliquaryWatcher::refreshProgressImpl(Player &,WearReliquaryWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator()(
        const WearReliquaryWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  EquipComp *EquipComp; // rax
  std::_Rb_tree_const_iterator<data::EquipType>::_Base_ptr M_node; // r14
  std::set<data::EquipType>::iterator v7; // rax
  const WearReliquaryWatcherParam *param; // rdx
  uint32_t *avatar_count; // rax
  ForeachPolicy result; // eax
  uint32_t reliquary_count; // [rsp+14h] [rbp-7Ch]
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 15 is_equiped:1108";
  *(_QWORD *)(v2 + 16) = WearReliquaryWatcher::refreshProgressImpl(Player &,WearReliquaryWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator();
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  EquipComp = Avatar::getEquipComp(formal_avatar);
  *(_QWORD *)(v2 + 32) = EquipComp::getEquipMap(EquipComp);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__reliquary_equip_type_set >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__reliquary_equip_type_set);
  M_node = std::set<data::EquipType>::end(__closure->__reliquary_equip_type_set)._M_node;
  v7._M_node = std::set<data::EquipType>::begin(__closure->__reliquary_equip_type_set)._M_node;
  reliquary_count = std::count_if<std::_Rb_tree_const_iterator<data::EquipType>,WearReliquaryWatcher::refreshProgressImpl(Player &,WearReliquaryWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator() const(FormalAvatar const&)::{lambda(data::EquipType)#1}>(
                      v7,
                      (std::_Rb_tree_const_iterator<data::EquipType>)M_node,
                      *(WearReliquaryWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)>::operator()::<lambda(data::EquipType)> *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  param = __closure->__param;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__param);
  }
  if ( reliquary_count >= param->min_reliquary_count_per_avatar )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    avatar_count = __closure->__avatar_count;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3)
                                                                          + 0x7FFF8000) )
    {
      avatar_count = (uint32_t *)__asan_report_load4(__closure->__avatar_count);
    }
    ++*avatar_count;
  }
  result = FOREACH_CONTINUE;
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

// Line 1108: range 00000000149B373E-00000000149B382D
bool __fastcall WearReliquaryWatcher::refreshProgressImpl(Player &,WearReliquaryWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator() const(FormalAvatar const&)::{lambda(data::EquipType)#1}::operator()(
        unsigned __int64 __closure,
        data::EquipType equip_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 equip_type:1108";
  *(_QWORD *)(v2 + 16) = WearReliquaryWatcher::refreshProgressImpl(Player &,WearReliquaryWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator() const(FormalAvatar const&)::{lambda(data::EquipType)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = equip_type;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::map<data::EquipType,std::shared_ptr<Equip>> const,data::EquipType>(
             *(const std::map<data::EquipType,std::shared_ptr<Equip>> **)__closure,
             (const data::EquipType *)v4 - 8);
  if ( v7 == (char *)v2 )
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

// Line 1124: range 00000000149B3C36-00000000149B3C65
int32_t __cdecl UpgradeTalentWatcher::tryUpdateProgressImpl(
        UpgradeTalentWatcher *const this,
        Player *player,
        const AvatarSkillOrProudSkillLevelupEvent *event,
        const UpgradeTalentWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1129: range 00000000149B3DF8-00000000149B3F86
int32_t __cdecl UpgradeTalentWatcher::refreshProgressImpl(
        UpgradeTalentWatcher *const this,
        Player *player,
        const UpgradeTalentWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerAvatarComp *AvatarComp; // r14
  int v7; // r13d
  uint32_t Progress; // eax
  int32_t result; // eax
  std::function<ForeachPolicy(const FormalAvatar&)> p_func; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 24 total_levelup_count:1131";
  *(_QWORD *)(v3 + 16) = UpgradeTalentWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  AvatarComp = Player::getAvatarComp(player);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::function<UpgradeTalentWatcher::refreshProgressImpl(Player &,UpgradeTalentWatcherParam const&)::{lambda(FormalAvatar const&)#1},void,void>(
    &p_func,
    (UpgradeTalentWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)>)(v3 + 32));
  PlayerAvatarComp::foreachFormalAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::~function(&p_func);
  if ( BaseWatcher::getProgress(this) < *(_DWORD *)(v3 + 32) )
  {
    v7 = *(_DWORD *)(v3 + 32);
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, v7 - Progress);
  }
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 1132: range 00000000149B3C66-00000000149B3DF6
ForeachPolicy __cdecl UpgradeTalentWatcher::refreshProgressImpl(Player &,UpgradeTalentWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator()(
        const UpgradeTalentWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  SkillComp *SkillComp; // rax
  uint32_t TotalLevelupCount; // esi
  uint32_t *total_levelup_count; // rdx
  uint32_t v5; // ecx
  uint32_t *v6; // rdx
  __int64 v7; // rsi
  TalentComp *TalentComp; // rax
  uint32_t v9; // esi
  uint32_t *v10; // rdx
  uint32_t v11; // ecx
  uint32_t *v12; // rdx
  __int64 v13; // rsi

  SkillComp = Avatar::getSkillComp(formal_avatar);
  TotalLevelupCount = SkillComp::getTotalLevelupCount(SkillComp);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  total_levelup_count = __closure->__total_levelup_count;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__total_levelup_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3)
                                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__total_levelup_count);
  }
  v5 = *total_levelup_count;
  v6 = __closure->__total_levelup_count;
  v7 = v5 + TotalLevelupCount;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__total_levelup_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3)
                                                                               + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__total_levelup_count, v7, (_BYTE)v6);
  }
  *v6 = v7;
  TalentComp = Avatar::getTalentComp(formal_avatar);
  v9 = TalentComp::getTotalLevelupCount(TalentComp);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  v10 = __closure->__total_levelup_count;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__total_levelup_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3)
                                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(__closure->__total_levelup_count);
  }
  v11 = *v10;
  v12 = __closure->__total_levelup_count;
  v13 = v11 + v9;
  if ( *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3) + 0x7FFF8000) != 0
    && (char)(((__int64)__closure->__total_levelup_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__total_levelup_count >> 3)
                                                                               + 0x7FFF8000) )
  {
    __asan_report_store4(__closure->__total_levelup_count, v13, (_BYTE)v12);
  }
  *v12 = v13;
  return 0;
};

// Line 1149: range 00000000149B3F88-00000000149B3FB7
int32_t __cdecl UnlockRecipeWatcher::tryUpdateProgressImpl(
        UnlockRecipeWatcher *const this,
        Player *player,
        const UnlockRecipeEvent *event,
        const UnlockRecipeWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1154: range 00000000149B3FB8-00000000149B402E
int32_t __cdecl UnlockRecipeWatcher::refreshProgressImpl(
        UnlockRecipeWatcher *const this,
        Player *player,
        const UnlockRecipeWatcherParam *param)
{
  PlayerCookComp *CookComp; // rax
  const std::unordered_map<unsigned int,CookRecipeData> *RecipeDataMap; // rax
  uint32_t Progress; // eax
  uint32_t unlock_count; // [rsp+2Ch] [rbp-14h]

  CookComp = Player::getCookComp(player);
  RecipeDataMap = PlayerCookComp::getRecipeDataMap(CookComp);
  unlock_count = std::unordered_map<unsigned int,CookRecipeData>::size(RecipeDataMap);
  if ( unlock_count > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, unlock_count - Progress);
  }
  return 0;
};

// Line 1168: range 00000000149B4228-00000000149B46BA
bool __cdecl ReliquarySetNumWatcher::isAvatarSatisfyCondition(
        ReliquarySetNumWatcher *const this,
        const Avatar *avatar,
        uint32_t exclude_reliquary_id,
        uint32_t include_reliquary_id,
        const ReliquarySetNumWatcherParam *param)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // rbx
  bool v8; // r15
  EquipComp *EquipComp; // rax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t ItemId; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v12; // rax
  std::pair<unsigned int const,unsigned int> *v13; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v14; // rax
  uint32_t v15; // ecx
  bool result; // al
  std::map<unsigned int,unsigned int>::iterator __for_begin_0; // [rsp+20h] [rbp-140h] BYREF
  std::map<unsigned int,unsigned int>::iterator __for_end_0; // [rsp+28h] [rbp-138h] BYREF
  const std::map<data::EquipType,std::shared_ptr<Equip>> *__for_range; // [rsp+30h] [rbp-130h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+38h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *__0; // [rsp+40h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *reliquary_count; // [rsp+48h] [rbp-118h]
  const std::pair<const data::EquipType,std::shared_ptr<Equip> > *v26; // [rsp+50h] [rbp-110h]
  std::tuple_element<0,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *_; // [rsp+58h] [rbp-108h]
  std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *equip_ptr; // [rsp+60h] [rbp-100h]
  std::pair<unsigned int const,unsigned int> __for_end; // [rsp+68h] [rbp-F8h] BYREF
  char v30[240]; // [rsp+70h] [rbp-F0h] BYREF

  v5 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(192LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 24 28 add_reliquary_set_count:1174 112 48 22 reliquary_set_map:1173";
  *(_QWORD *)(v5 + 16) = ReliquarySetNumWatcher::isAvatarSatisfyCondition;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61937;
  v7[536862722] = -218959360;
  v7[536862723] = 62194;
  v7[536862725] = -202116109;
  if ( !Avatar::isFormal(avatar) )
  {
    v8 = 0;
  }
  else
  {
    std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v5 + 112));
    *(_QWORD *)(v5 + 48) = v5 + 112;
    *(_QWORD *)(v5 + 56) = param;
    *(_DWORD *)(v5 + 64) = exclude_reliquary_id;
    ReliquarySetNumWatcher::isAvatarSatisfyCondition(Avatar const&,unsigned int,unsigned int,ReliquarySetNumWatcherParam const&)::{lambda(unsigned int)#1}::operator()(
      (const ReliquarySetNumWatcher::isAvatarSatisfyCondition::<lambda(uint32_t)> *const)(v5 + 48),
      include_reliquary_id);
    EquipComp = Avatar::getEquipComp(avatar);
    __for_range = EquipComp::getEquipMap(EquipComp);
    __for_end_0._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Base_ptr)std::map<data::EquipType,std::shared_ptr<Equip>>::begin(__for_range)._M_node;
    __for_end = (std::pair<unsigned int const,unsigned int>)std::map<data::EquipType,std::shared_ptr<Equip>>::end(__for_range)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)&__for_end_0,
              (const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > >::_Self *)&__for_end) )
    {
      v26 = std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)&__for_end_0);
      _ = std::get<0ul,data::EquipType const,std::shared_ptr<Equip>>(v26);
      equip_ptr = (std::tuple_element<1,const std::pair<const data::EquipType,std::shared_ptr<Equip> > >::type *)std::get<1ul,data::EquipType const,std::shared_ptr<Equip>>(v26);
      if ( std::operator!=<Equip>(0LL, equip_ptr) )
      {
        v10 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)equip_ptr);
        ItemId = Item::getItemId(v10);
        ReliquarySetNumWatcher::isAvatarSatisfyCondition(Avatar const&,unsigned int,unsigned int,ReliquarySetNumWatcherParam const&)::{lambda(unsigned int)#1}::operator()(
          (const ReliquarySetNumWatcher::isAvatarSatisfyCondition::<lambda(uint32_t)> *const)(v5 + 48),
          ItemId);
      }
      std::_Rb_tree_const_iterator<std::pair<data::EquipType const,std::shared_ptr<Equip>>>::operator++((std::_Rb_tree_const_iterator<std::pair<const data::EquipType,std::shared_ptr<Equip> > > *const)&__for_end_0);
    }
    __for_range_0 = (std::map<unsigned int,unsigned int> *)(v5 + 112);
    __for_begin_0._M_node = std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v5 + 112))._M_node;
    __for_end_0._M_node = std::map<unsigned int,unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin_0);
      v13 = v12;
      if ( ((unsigned __int8)v12 & 7) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v12 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v12->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v12, 8LL);
      }
      __for_end = *v13;
      __0 = std::get<0ul,unsigned int const,unsigned int>(&__for_end);
      v14 = std::get<1ul,unsigned int const,unsigned int>(&__for_end);
      reliquary_count = v14;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      v15 = *reliquary_count;
      if ( *(_BYTE *)(((unsigned __int64)&param->same_set_reliquary_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->same_set_reliquary_count >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&param->same_set_reliquary_count);
      }
      if ( v15 >= param->same_set_reliquary_count )
      {
        v8 = 1;
        goto LABEL_23;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin_0);
    }
    v8 = 0;
LABEL_23:
    std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v5 + 112));
  }
  result = v8;
  if ( v30 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8014) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1174: range 00000000149B4030-00000000149B4226
void __cdecl ReliquarySetNumWatcher::isAvatarSatisfyCondition(Avatar const&,unsigned int,unsigned int,ReliquarySetNumWatcherParam const&)::{lambda(unsigned int)#1}::operator()(
        const ReliquarySetNumWatcher::isAvatarSatisfyCondition::<lambda(uint32_t)> *const __closure,
        uint32_t reliquary_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t rank_level; // esi
  const ReliquarySetNumWatcherParam *param; // rdx
  unsigned __int64 v5; // rax
  const data::ReliquaryExcelConfig *config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__exclude_reliquary_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&__closure->__exclude_reliquary_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&__closure->__exclude_reliquary_id);
  }
  if ( reliquary_id != __closure->__exclude_reliquary_id )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)v7);
    v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
    config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(
                   &v2->design_config.txt_config_mgr.reliquary_config_mgr,
                   reliquary_id);
    std::shared_ptr<Config>::~shared_ptr(v7);
    if ( config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config_ptr->rank_level);
      }
      rank_level = config_ptr->rank_level;
      if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
        __asan_report_load8(&__closure->__param);
      param = __closure->__param;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(__closure->__param);
      }
      if ( rank_level >= param->min_rank_level )
      {
        if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
          __asan_report_load8(__closure);
        v5 = (unsigned __int64)std::map<unsigned int,unsigned int>::operator[](
                                 __closure->__reliquary_set_map,
                                 &config_ptr->set_id);
        if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) != 0 && (char)((v5 & 7) + 3) >= *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
          v5 = __asan_report_load4(v5);
        ++*(_DWORD *)v5;
      }
    }
  }
};

// Line 1207: range 00000000149B46BC-00000000149B4AD8
int32_t __cdecl ReliquarySetNumWatcher::tryUpdateProgressImpl(
        ReliquarySetNumWatcher *const this,
        Player *player,
        const WearOrTakeOffEquipEvent *event,
        const ReliquarySetNumWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  int32_t v7; // r14d
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t ItemId; // eax
  uint32_t v12; // eax
  std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rsi
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rsi
  int32_t result; // eax
  char is_pre_satisfied; // [rsp+2Ah] [rbp-B6h]
  char is_cur_satisfied; // [rsp+2Bh] [rbp-B5h]
  data::EquipType value; // [rsp+2Ch] [rbp-B4h] BYREF
  uint32_t worn_reliquary_id; // [rsp+30h] [rbp-B0h]
  uint32_t taken_off_reliquary_id; // [rsp+34h] [rbp-ACh]
  const std::set<data::EquipType> *reliquary_equip_type_set; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v25; // [rsp+40h] [rbp-A0h] BYREF
  char v26[144]; // [rsp+50h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 16 15 avatar_ptr:1208 64 16 14 equip_ptr:1214";
  *(_QWORD *)(v4 + 16) = ReliquarySetNumWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -202178560;
  std::weak_ptr<Avatar>::lock((const std::weak_ptr<Avatar> *const)(v4 + 32));
  if ( std::operator==<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v4 + 32)) )
  {
    v7 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    reliquary_equip_type_set = &ReliquaryExcelConfigMgr::reliquary_equip_type_set;
    std::shared_ptr<Config>::~shared_ptr(&v25);
    std::weak_ptr<Equip>::lock((const std::weak_ptr<Equip> *const)(v4 + 64));
    if ( std::operator==<Equip>(0LL, (const std::shared_ptr<Equip> *)(v4 + 64)) )
    {
      v7 = -1;
    }
    else
    {
      v8 = (unsigned __int64)std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(v8);
      v9 = *(_QWORD *)v8 + 96LL;
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v8 = __asan_report_load8(*(_QWORD *)v8 + 96LL);
      value = (*(unsigned int (__fastcall **)(unsigned __int64))v9)(v8);
      if ( !common::tools::MiscUtils::isContains<std::set<data::EquipType> const,data::EquipType>(
              reliquary_equip_type_set,
              &value) )
      {
        v7 = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&event->is_wear >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&event->is_wear);
        if ( event->is_wear )
        {
          v10 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          ItemId = Item::getItemId(v10);
        }
        else
        {
          ItemId = 0;
        }
        worn_reliquary_id = ItemId;
        if ( *(char *)(((unsigned __int64)&event->is_wear >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&event->is_wear);
        if ( event->is_wear )
        {
          v12 = 0;
        }
        else
        {
          v13 = std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Equip,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
          v12 = Item::getItemId(v13);
        }
        taken_off_reliquary_id = v12;
        v14 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        is_pre_satisfied = ReliquarySetNumWatcher::isAvatarSatisfyCondition(
                             this,
                             v14,
                             worn_reliquary_id,
                             taken_off_reliquary_id,
                             param);
        v15 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        is_cur_satisfied = ReliquarySetNumWatcher::isAvatarSatisfyCondition(this, v15, 0, 0, param);
        if ( is_pre_satisfied == is_cur_satisfied )
        {
          v7 = 0;
        }
        else
        {
          if ( is_cur_satisfied )
            BaseWatcher::addProgress(this, 1u);
          else
            BaseWatcher::subProgress(this, 1u);
          v7 = 0;
        }
      }
    }
    std::shared_ptr<Equip>::~shared_ptr((std::shared_ptr<Equip> *const)(v4 + 64));
  }
  std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v4 + 32));
  result = v7;
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
  return result;
};

// Line 1243: range 00000000149B4BCE-00000000149B4D5F
int32_t __cdecl ReliquarySetNumWatcher::refreshProgressImpl(
        ReliquarySetNumWatcher *const this,
        Player *player,
        const ReliquarySetNumWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerAvatarComp *AvatarComp; // r14
  int32_t result; // eax
  ReliquarySetNumWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> v8; // [rsp-20h] [rbp-F0h]
  std::function<ForeachPolicy(const FormalAvatar&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v11[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 avatar_count:1244";
  *(_QWORD *)(v3 + 16) = ReliquarySetNumWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  AvatarComp = Player::getAvatarComp(player);
  v8.__this = this;
  v8.__param = param;
  v8.__avatar_count = (uint32_t *)(v3 + 32);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::function<ReliquarySetNumWatcher::refreshProgressImpl(Player &,ReliquarySetNumWatcherParam const&)::{lambda(FormalAvatar const&)#1},void,void>(
    &p_func,
    v8);
  PlayerAvatarComp::foreachFormalAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::~function(&p_func);
  BaseWatcher::tryCorrectProgress(this, *(_DWORD *)(v3 + 32));
  result = 0;
  if ( v11 == (char *)v3 )
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

// Line 1245: range 00000000149B4ADA-00000000149B4BCD
ForeachPolicy __cdecl ReliquarySetNumWatcher::refreshProgressImpl(Player &,ReliquarySetNumWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator()(
        const ReliquarySetNumWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  ReliquarySetNumWatcher *this; // rax
  uint32_t *avatar_count; // rax

  if ( *(_BYTE *)(((unsigned __int64)&__closure->__this >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__this);
  this = __closure->__this;
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    this = (ReliquarySetNumWatcher *)__asan_report_load8(&__closure->__param);
  if ( ReliquarySetNumWatcher::isAvatarSatisfyCondition(this, formal_avatar, 0, 0, __closure->__param) )
  {
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    avatar_count = __closure->__avatar_count;
    if ( *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3) + 0x7FFF8000) != 0
      && (char)(((__int64)__closure->__avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3)
                                                                          + 0x7FFF8000) )
    {
      avatar_count = (uint32_t *)__asan_report_load4(__closure->__avatar_count);
    }
    ++*avatar_count;
  }
  return 0;
};

// Line 1260: range 00000000149B4D60-00000000149B4DEA
int32_t __cdecl ObtainMaterialNumWatcher::tryUpdateProgressImpl(
        ObtainMaterialNumWatcher *const this,
        Player *player,
        const ObtainItemEvent *event,
        const ObtainMaterialNumWatcherParam *param)
{
  ObtainMaterialNumWatcher *v4; // rcx

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->material_id_set,
         &event->item_id) )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->item_num);
    }
    BaseWatcher::addProgress(v4, event->item_num);
  }
  return 0;
};

// Line 1272: range 00000000149B4DEC-00000000149B4F0E
int32_t __cdecl PossessMaterialNumWatcher::tryUpdateProgressImpl(
        PossessMaterialNumWatcher *const this,
        Player *player,
        const ObtainItemEvent *event,
        const PossessMaterialNumWatcherParam *param)
{
  uint32_t *p_item_id; // rdx
  uint32_t item_id; // ecx
  PlayerItemComp *ItemComp; // rcx
  uint32_t count; // [rsp+2Ch] [rbp-4h]

  p_item_id = &event->item_id;
  if ( *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_item_id);
  }
  item_id = event->item_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( item_id != param->material_id )
    return 0;
  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->item_id);
  }
  count = PlayerItemComp::getPackMaterialCount(ItemComp, event->item_id);
  if ( count > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, count);
  return 0;
};

// Line 1286: range 00000000149B4F10-00000000149B4F9B
int32_t __cdecl PossessMaterialNumWatcher::refreshProgressImpl(
        PossessMaterialNumWatcher *const this,
        Player *player,
        const PossessMaterialNumWatcherParam *param)
{
  PlayerItemComp *ItemComp; // rcx
  uint32_t count; // [rsp+2Ch] [rbp-4h]

  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  count = PlayerItemComp::getPackMaterialCount(ItemComp, param->material_id);
  if ( count )
    BaseWatcher::tryCorrectProgress(this, count);
  return 0;
};

// Line 1298: range 00000000149B4F9C-00000000149B5254
int32_t __cdecl ObtainReliquaryNumWatcher::tryUpdateProgressImpl(
        ObtainReliquaryNumWatcher *const this,
        Player *player,
        const ObtainItemEvent *event,
        const ObtainReliquaryNumWatcherParam *param)
{
  ReliquaryExcelConfigMgr *p_reliquary_config_mgr; // rcx
  uint32_t min_rank_level; // ecx
  uint32_t v7; // ecx
  ObtainReliquaryNumWatcher *v8; // rcx
  const data::ReliquaryExcelConfig *reliquary_config_ptr; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v12[2]; // [rsp+30h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v12);
  p_reliquary_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12)->design_config.txt_config_mgr.reliquary_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->item_id);
  }
  reliquary_config_ptr = data::ReliquaryExcelConfigMgrBase::findReliquaryExcelConfig(
                           p_reliquary_config_mgr,
                           event->item_id);
  std::shared_ptr<Config>::~shared_ptr(v12);
  if ( !reliquary_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->is_equal >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_equal >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_equal);
  }
  if ( param->is_equal )
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    min_rank_level = param->min_rank_level;
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reliquary_config_ptr->rank_level);
    }
    if ( min_rank_level == reliquary_config_ptr->rank_level )
      goto LABEL_21;
  }
  if ( *(_BYTE *)(((unsigned __int64)&param->is_equal >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_equal >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_equal);
  }
  if ( !param->is_equal )
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    v7 = param->min_rank_level;
    if ( *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&reliquary_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&reliquary_config_ptr->rank_level);
    }
    if ( v7 <= reliquary_config_ptr->rank_level )
    {
LABEL_21:
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->item_num);
      }
      BaseWatcher::addProgress(v8, event->item_num);
    }
  }
  return 0;
};

// Line 1316: range 00000000149B5256-00000000149B52BD
int32_t __cdecl GachaNumWatcher::tryUpdateProgressImpl(
        GachaNumWatcher *const this,
        Player *player,
        const DoGachaEvent *event,
        const GachaNumWatcherParam *param)
{
  GachaNumWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->gacha_times >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gacha_times >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->gacha_times);
  }
  BaseWatcher::addProgress(v4, event->gacha_times);
  return 0;
};

// Line 1324: range 00000000149B52BE-00000000149B52F3
int32_t __cdecl FetterMaxLevelAvatarNumWatcher::tryUpdateProgressImpl(
        FetterMaxLevelAvatarNumWatcher *const this,
        Player *player,
        const FetterLevelUpdateEvent *event,
        const FetterMaxLevelAvatarNumWatcherParam *param)
{
  FetterMaxLevelAvatarNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1329: range 00000000149B52F4-00000000149B5379
int32_t __cdecl FetterMaxLevelAvatarNumWatcher::refreshProgressImpl(
        FetterMaxLevelAvatarNumWatcher *const this,
        Player *player,
        const FetterMaxLevelAvatarNumWatcherParam *param)
{
  PlayerAvatarComp *AvatarComp; // rcx
  uint32_t FetterLevelGreaterAvatarNum; // eax

  AvatarComp = Player::getAvatarComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  FetterLevelGreaterAvatarNum = PlayerAvatarComp::getFetterLevelGreaterAvatarNum(AvatarComp, param->fetter_level);
  BaseWatcher::tryCorrectProgress(this, FetterLevelGreaterAvatarNum);
  return 0;
};

// Line 1338: range 00000000149B537A-00000000149B5886
int32_t __cdecl AvatarPromoteExcludingPlayerWatcher::tryUpdateProgressImpl(
        AvatarPromoteExcludingPlayerWatcher *const this,
        Player *player,
        const AvatarPromoteEvent *event,
        const AvatarPromoteExcludingPlayerWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  uint32_t AvatarComp; // ecx
  common::milog::MiLogStream *v8; // rax
  int32_t v9; // r14d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  uint32_t old_promote_level; // ecx
  uint32_t promote_level; // ecx
  char v19; // al
  int32_t result; // eax
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v24; // [rsp+30h] [rbp-90h] BYREF
  char v25[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 22 formal_avatar_ptr:1339";
  *(_QWORD *)(v4 + 16) = AvatarPromoteExcludingPlayerWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  AvatarComp = (unsigned int)Player::getAvatarComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->avatar_id);
  }
  PlayerAvatarComp::findFormalAvatarByAvatarId((const PlayerAvatarComp *const)(v4 + 32), AvatarComp);
  if ( std::operator==<FormalAvatar>(0LL, (const std::shared_ptr<FormalAvatar> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      1342);
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v24,
           (const char (*)[44])"findFormalAvatarByAvatarId fail, avatar_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->avatar_id);
    common::milog::MiLogStream::~MiLogStream(&v24);
    v9 = -1;
  }
  else
  {
    v10 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(v10);
    v11 = *(_QWORD *)v10 + 312LL;
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v10 = __asan_report_load8(*(_QWORD *)v10 + 312LL);
    avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v11)(v10);
    if ( avatar_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&avatar_config_ptr->avatar_identity_type);
      }
      if ( avatar_config_ptr->avatar_identity_type == AVATAR_IDENTITY_MASTER )
        goto LABEL_33;
      v14 = (unsigned __int64)std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( *(_BYTE *)((v14 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(v14);
      v15 = *(_QWORD *)v14 + 280LL;
      if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
        v14 = __asan_report_load8(*(_QWORD *)v14 + 280LL);
      v16 = (*(__int64 (__fastcall **)(unsigned __int64))v15)(v14);
      if ( *(_BYTE *)(((unsigned __int64)&param->element_type >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->element_type >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->element_type);
      }
      if ( v16 != param->element_type )
        goto LABEL_33;
      if ( *(_BYTE *)(((unsigned __int64)&event->old_promote_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->old_promote_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->old_promote_level);
      }
      old_promote_level = event->old_promote_level;
      if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(param);
      }
      if ( old_promote_level >= param->promote_level )
        goto LABEL_33;
      promote_level = param->promote_level;
      if ( *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->promote_level >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&event->promote_level);
      }
      if ( promote_level <= event->promote_level )
        v19 = 1;
      else
LABEL_33:
        v19 = 0;
      if ( v19 )
        BaseWatcher::addProgress(this, 1u);
      v9 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v24,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        1348);
      v12 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              &v24,
              (const char (*)[40])"avatar_config not found, formal_avatar:");
      v13 = std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<FormalAvatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v12, v13);
      common::milog::MiLogStream::~MiLogStream(&v24);
      v9 = -1;
    }
  }
  std::shared_ptr<FormalAvatar>::~shared_ptr((std::shared_ptr<FormalAvatar> *const)(v4 + 32));
  result = v9;
  if ( v25 == (char *)v4 )
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

// Line 1360: range 00000000149B5B96-00000000149B5DB3
int32_t __cdecl AvatarPromoteExcludingPlayerWatcher::refreshProgressImpl(
        AvatarPromoteExcludingPlayerWatcher *const this,
        Player *player,
        const AvatarPromoteExcludingPlayerWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  const PlayerAvatarComp *AvatarComp; // [rsp+10h] [rbp-C0h]
  int32_t ret; // [rsp+3Ch] [rbp-94h]
  std::function<ForeachPolicy(const FormalAvatar&)> p_func; // [rsp+40h] [rbp-90h] BYREF
  char v12[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 17 avatar_count:1361";
  *(_QWORD *)(v3 + 16) = AvatarPromoteExcludingPlayerWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = 0;
  AvatarComp = Player::getAvatarComp(player);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::function<AvatarPromoteExcludingPlayerWatcher::refreshProgressImpl(Player &,AvatarPromoteExcludingPlayerWatcherParam const&)::{lambda(FormalAvatar const&)#1},void,void>(
    &p_func,
    (AvatarPromoteExcludingPlayerWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)>)__PAIR128__(
                                                                                               (unsigned __int64)param,
                                                                                               v3 + 32));
  ret = PlayerAvatarComp::foreachFormalAvatar(AvatarComp, &p_func);
  std::function<ForeachPolicy ()(FormalAvatar const&)>::~function(&p_func);
  if ( ret )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&p_func,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "refreshProgressImpl",
      1380);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           (common::milog::MiLogStream *const)&p_func,
           (const char (*)[34])"foreachFormalAvatar fail, player:");
    operator<<(v6, player);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&p_func);
    result = -1;
  }
  else
  {
    BaseWatcher::tryCorrectProgress(this, *(_DWORD *)(v3 + 32));
    result = 0;
  }
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

// Line 1362: range 00000000149B5888-00000000149B5B95
ForeachPolicy __cdecl AvatarPromoteExcludingPlayerWatcher::refreshProgressImpl(Player &,AvatarPromoteExcludingPlayerWatcherParam const&)::{lambda(FormalAvatar const&)#1}::operator()(
        const AvatarPromoteExcludingPlayerWatcher::refreshProgressImpl::<lambda(const FormalAvatar&)> *const __closure,
        const FormalAvatar *formal_avatar)
{
  const FormalAvatar *v2; // rdx
  unsigned __int64 v3; // rax
  common::milog::MiLogStream *v4; // rdx
  const FormalAvatar *v6; // rdx
  unsigned __int64 v7; // rax
  int v8; // esi
  const AvatarPromoteExcludingPlayerWatcherParam *param; // rdx
  uint32_t PromoteLevel; // esi
  const AvatarPromoteExcludingPlayerWatcherParam *v11; // rdx
  char v12; // al
  uint32_t *avatar_count; // rax
  const data::AvatarExcelConfig *avatar_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-30h] BYREF

  v2 = formal_avatar;
  if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
    __asan_report_load8(formal_avatar);
  v3 = *(_QWORD *)formal_avatar->baseclass_0 + 312LL;
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(*(_QWORD *)formal_avatar->baseclass_0 + 312LL);
  avatar_config_ptr = (const data::AvatarExcelConfig *)(*(__int64 (__fastcall **)(const FormalAvatar *))v3)(v2);
  if ( avatar_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&avatar_config_ptr->avatar_identity_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&avatar_config_ptr->avatar_identity_type);
    }
    if ( avatar_config_ptr->avatar_identity_type == AVATAR_IDENTITY_MASTER )
      goto LABEL_25;
    v6 = formal_avatar;
    if ( *(_BYTE *)(((unsigned __int64)formal_avatar >> 3) + 0x7FFF8000) )
      __asan_report_load8(formal_avatar);
    v7 = *(_QWORD *)formal_avatar->baseclass_0 + 280LL;
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)formal_avatar->baseclass_0 + 280LL);
    v8 = (*(__int64 (__fastcall **)(const FormalAvatar *))v7)(v6);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    param = __closure->__param;
    if ( *(_BYTE *)(((unsigned __int64)&param->element_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->element_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->element_type);
    }
    if ( v8 != param->element_type )
      goto LABEL_25;
    PromoteLevel = Avatar::getPromoteLevel(formal_avatar);
    if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
      __asan_report_load8(&__closure->__param);
    v11 = __closure->__param;
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(__closure->__param);
    }
    if ( PromoteLevel >= v11->promote_level )
      v12 = 1;
    else
LABEL_25:
      v12 = 0;
    if ( v12 )
    {
      if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
        __asan_report_load8(__closure);
      avatar_count = __closure->__avatar_count;
      if ( *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3) + 0x7FFF8000) != 0
        && (char)(((__int64)__closure->__avatar_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__closure->__avatar_count >> 3)
                                                                            + 0x7FFF8000) )
      {
        avatar_count = (uint32_t *)__asan_report_load4(__closure->__avatar_count);
      }
      ++*avatar_count;
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "operator()",
      1367);
    v4 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v16,
           (const char (*)[40])"avatar_config not found, formal_avatar:");
    common::milog::MiLogStream::operator<<<FormalAvatar,(FormalAvatar*)0>(v4, formal_avatar);
    common::milog::MiLogStream::~MiLogStream(&v16);
    return 1;
  }
};

// Line 1394: range 00000000149B5DB4-00000000149B5DE3
int32_t __cdecl DailyTaskWatcher::tryUpdateProgressImpl(
        DailyTaskWatcher *const this,
        Player *player,
        const DailyTaskRewardEvent *event,
        const DailyTaskWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1403: range 00000000149B5DE4-00000000149B5E13
int32_t __cdecl RandTaskWatcher::tryUpdateProgressImpl(
        RandTaskWatcher *const this,
        Player *player,
        const RandTaskFinishEvent *event,
        const RandTaskWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1412: range 00000000149B5E14-00000000149B6034
int32_t __cdecl AvatarExpeditionWatcher::tryUpdateProgressImpl(
        AvatarExpeditionWatcher *const this,
        Player *player,
        const AvatarExpeditionFinishEvent *event,
        const AvatarExpeditionWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  ExpeditionDataExcelConfigMgr *p_expedition_config_mgr; // rcx
  int32_t result; // eax
  const data::ExpeditionDataExcelConfig *expedition_config_ptr; // [rsp+28h] [rbp-78h]
  std::shared_ptr<Config> v12; // [rsp+30h] [rbp-70h] BYREF
  char v13[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 city_id:1415";
  *(_QWORD *)(v4 + 16) = AvatarExpeditionWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( std::unordered_set<unsigned int>::empty(&param->city_id_set) )
    goto LABEL_13;
  *(_DWORD *)(v4 + 32) = 0;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  p_expedition_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.expedition_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->exp_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->exp_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->exp_id);
  }
  expedition_config_ptr = ExpeditionDataExcelConfigMgr::findExpeditionConfigByID(p_expedition_config_mgr, event->exp_id);
  std::shared_ptr<Config>::~shared_ptr(&v12);
  if ( expedition_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->city_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)expedition_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&expedition_config_ptr->city_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&expedition_config_ptr->city_id);
    }
    *(_DWORD *)(v4 + 32) = expedition_config_ptr->city_id;
  }
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->city_id_set,
          (const unsigned int *)(v4 + 32)) )
  {
    result = 0;
  }
  else
  {
LABEL_13:
    BaseWatcher::addProgress(this, 1u);
    result = 0;
  }
  if ( v13 == (char *)v4 )
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

// Line 1434: range 00000000149B6036-00000000149B6802
int32_t __cdecl FinishTowerLevelWatcher::tryUpdateProgressImpl(
        FinishTowerLevelWatcher *const this,
        Player *player,
        const FinishTowerLevelEvent *event,
        const FinishTowerLevelWatcherParam *param)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  PlayerTowerComp *TowerComp; // rax
  uint64_t *v9; // rax
  PlayerAvatarComp *AvatarComp; // rax
  std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  data::LogicType logic_type; // eax
  std::unordered_set<unsigned int>::size_type v13; // r15
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  int v26; // r15d
  uint32_t target_tower_floor_index; // ecx
  uint32_t target_tower_level_index; // ecx
  int32_t result; // eax
  bool is_satisfied; // [rsp+37h] [rbp-139h]
  std::vector<TowerTeam>::const_iterator __for_begin; // [rsp+38h] [rbp-138h] BYREF
  std::vector<TowerTeam>::const_iterator __for_end; // [rsp+40h] [rbp-130h] BYREF
  std::vector<long unsigned int>::const_iterator __for_begin_0; // [rsp+48h] [rbp-128h] BYREF
  std::vector<long unsigned int>::const_iterator __for_end_0; // [rsp+50h] [rbp-120h] BYREF
  const TowerCurLevelRecord *tower_cur_level_record; // [rsp+58h] [rbp-118h]
  const std::vector<TowerTeam> *__for_range; // [rsp+60h] [rbp-110h]
  const TowerTeam *tower_team; // [rsp+68h] [rbp-108h]
  const std::vector<long unsigned int> *__for_range_0; // [rsp+70h] [rbp-100h]
  uint64_t guid; // [rsp+78h] [rbp-F8h]
  common::milog::MiLogStream v42; // [rsp+80h] [rbp-F0h] BYREF
  char v43[208]; // [rsp+A0h] [rbp-D0h] BYREF

  v5 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_2(160LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "3 32 4 14 avatar_id:1446 48 16 15 avatar_ptr:1443 80 48 18 avatar_id_set:1437";
  *(_QWORD *)(v5 + 16) = FinishTowerLevelWatcher::tryUpdateProgressImpl;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862722] = 62194;
  v7[536862724] = -202116109;
  if ( !std::unordered_set<unsigned int>::empty(&param->use_avatar_id_set) )
  {
    std::set<unsigned int>::set((std::set<unsigned int> *const)(v5 + 80));
    TowerComp = Player::getTowerComp(player);
    tower_cur_level_record = PlayerTowerComp::getTowerCurLevelRecord(TowerComp);
    __for_range = &tower_cur_level_record->tower_team_vec;
    __for_begin._M_current = std::vector<TowerTeam>::begin(&tower_cur_level_record->tower_team_vec)._M_current;
    __for_end._M_current = std::vector<TowerTeam>::end(&tower_cur_level_record->tower_team_vec)._M_current;
    while ( __gnu_cxx::operator!=<TowerTeam const*,std::vector<TowerTeam>>(&__for_begin, &__for_end) )
    {
      tower_team = __gnu_cxx::__normal_iterator<TowerTeam const*,std::vector<TowerTeam>>::operator*(&__for_begin);
      __for_range_0 = &tower_team->mirror_avatar_guid_vec;
      __for_begin_0._M_current = std::vector<unsigned long>::begin(&tower_team->mirror_avatar_guid_vec)._M_current;
      __for_end_0._M_current = std::vector<unsigned long>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned long const*,std::vector<unsigned long>>(&__for_begin_0, &__for_end_0) )
      {
        v9 = (uint64_t *)__gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
          v9 = (uint64_t *)__asan_report_load8(v9);
        guid = *v9;
        AvatarComp = Player::getAvatarComp(player);
        PlayerAvatarComp::findAvatar((const PlayerAvatarComp *const)(v5 + 48), (uint64_t)AvatarComp);
        if ( std::operator!=<Avatar>(0LL, (const std::shared_ptr<Avatar> *)(v5 + 48)) )
        {
          v11 = std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Avatar,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 48));
          *(_DWORD *)(v5 + 32) = Avatar::getAvatarId(v11);
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 &param->use_avatar_id_set,
                 (const unsigned int *)(v5 + 32)) )
          {
            std::set<unsigned int>::insert(
              (std::set<unsigned int> *const)(v5 + 80),
              (const std::set<unsigned int>::value_type *)(v5 + 32));
          }
        }
        std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v5 + 48));
        __gnu_cxx::__normal_iterator<unsigned long const*,std::vector<unsigned long>>::operator++(&__for_begin_0);
      }
      __gnu_cxx::__normal_iterator<TowerTeam const*,std::vector<TowerTeam>>::operator++(&__for_begin);
    }
    is_satisfied = 0;
    if ( *(_BYTE *)(((unsigned __int64)&param->logic_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&param->logic_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&param->logic_type);
    }
    logic_type = param->logic_type;
    if ( logic_type == LOGIC_NOT )
    {
      is_satisfied = std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v5 + 80));
    }
    else
    {
      if ( logic_type > LOGIC_NOT )
        goto LABEL_26;
      if ( logic_type == LOGIC_AND )
      {
        v13 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v5 + 80));
        is_satisfied = v13 >= std::unordered_set<unsigned int>::size(&param->use_avatar_id_set);
        goto LABEL_27;
      }
      if ( logic_type == LOGIC_OR )
      {
        is_satisfied = !std::set<unsigned int>::empty((const std::set<unsigned int> *const)(v5 + 80));
      }
      else
      {
LABEL_26:
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/watcher/watcher.cpp",
          "tryUpdateProgressImpl",
          1467);
        v14 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                &v42,
                (const char (*)[20])"invalid logic_type:");
        v15 = common::milog::MiLogStream::operator<<<data::LogicType,(data::LogicType*)0>(v14, &param->logic_type);
        v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" player:");
        operator<<(v16, player);
        common::milog::MiLogStream::~MiLogStream(&v42);
      }
    }
LABEL_27:
    if ( !is_satisfied )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        1472);
      v17 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              &v42,
              (const char (*)[38])"condition not satisfied. floor_index:");
      v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &event->floor_index);
      v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v18, (const char (*)[14])" level_index:");
      v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &event->level_index);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v20, (const char (*)[16])" avatar_id_set:");
      v22 = common::milog::MiLogStream::operator<<<unsigned int>(v21, (const std::set<unsigned int> *)(v5 + 80));
      v23 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v22,
              (const char (*)[26])" param.use_avatar_id_set:");
      v24 = common::milog::MiLogStream::operator<<<unsigned int>(v23, &param->use_avatar_id_set);
      v25 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v24, (const char (*)[9])" player:");
      operator<<(v25, player);
      common::milog::MiLogStream::~MiLogStream(&v42);
      v4 = 0;
      v26 = 0;
    }
    else
    {
      v26 = 1;
    }
    std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 80));
    if ( v26 != 1 )
      goto LABEL_47;
  }
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( param->target_tower_floor_index )
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(param);
    }
    target_tower_floor_index = param->target_tower_floor_index;
    if ( *(_BYTE *)(((unsigned __int64)&event->floor_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->floor_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->floor_index);
    }
    if ( target_tower_floor_index == event->floor_index )
    {
      if ( *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&param->target_tower_level_index);
      }
      target_tower_level_index = param->target_tower_level_index;
      if ( *(_BYTE *)(((unsigned __int64)&event->level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->level_index);
      }
      if ( target_tower_level_index == event->level_index )
        BaseWatcher::addProgress(this, 1u);
    }
    v4 = 0;
  }
  else
  {
    BaseWatcher::addProgress(this, 1u);
    v4 = 0;
  }
LABEL_47:
  result = v4;
  if ( v43 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
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

// Line 1489: range 00000000149B6804-00000000149B692C
int32_t __cdecl FinishTowerLevelWatcher::refreshProgressImpl(
        FinishTowerLevelWatcher *const this,
        Player *player,
        const FinishTowerLevelWatcherParam *param)
{
  bool *p_is_trace_back; // rdx
  const PlayerTowerComp *TowerComp; // rdi
  uint32_t target_tower_level_index; // edx

  p_is_trace_back = &param->is_trace_back;
  if ( *(char *)(((unsigned __int64)p_is_trace_back >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_trace_back);
  if ( !param->is_trace_back )
    return 0;
  if ( BaseWatcher::getProgress(this) )
    return 0;
  TowerComp = Player::getTowerComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3)
                                                        + 0x7FFF8000) )
  {
    TowerComp = (const PlayerTowerComp *)&param->target_tower_level_index;
    __asan_report_load4(&param->target_tower_level_index);
  }
  target_tower_level_index = param->target_tower_level_index;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    TowerComp = (const PlayerTowerComp *)param;
    __asan_report_load4(param);
  }
  if ( PlayerTowerComp::isTowerLevelFinished(TowerComp, param->target_tower_floor_index, target_tower_level_index) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1509: range 00000000149B692E-00000000149B695D
int32_t __cdecl WorldBossRewardWatcher::tryUpdateProgressImpl(
        WorldBossRewardWatcher *const this,
        Player *player,
        const BossChestTakeEvent *event,
        const WorldBossRewardWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1514: range 00000000149B695E-00000000149B6A11
int32_t __cdecl WorldBossRewardWatcher::refreshProgressImpl(
        WorldBossRewardWatcher *const this,
        Player *player,
        const WorldBossRewardWatcherParam *param)
{
  PlayerSceneComp *SceneComp; // rax
  uint32_t Progress; // eax
  uint32_t total_boss_chest_take_num; // [rsp+2Ch] [rbp-14h]

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && ((unsigned __int8)param & 7) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(param);
  }
  if ( !param->is_trace_back )
    return 0;
  SceneComp = Player::getSceneComp(player);
  total_boss_chest_take_num = PlayerSceneComp::getTotalBossChestTakeNum(SceneComp);
  if ( total_boss_chest_take_num > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, Progress - total_boss_chest_take_num);
  }
  return 0;
};

// Line 1532: range 00000000149B6A12-00000000149B6A7C
int32_t __cdecl FinishDungeonWatcher::tryUpdateProgressImpl(
        FinishDungeonWatcher *const this,
        Player *player,
        const FinishDungeonEvent *event,
        const FinishDungeonWatcherParam *param)
{
  if ( std::unordered_set<unsigned int>::empty(&param->dungeon_id_set)
    || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->dungeon_id_set,
         &event->dungeon_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1545: range 00000000149B6A7E-00000000149B6AAD
int32_t __cdecl AnyRequaryUpgradeWatcher::tryUpdateProgressImpl(
        AnyRequaryUpgradeWatcher *const this,
        Player *player,
        const ReliquaryAddExpEvent *event,
        const AnyRequaryUpgradeWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1553: range 00000000149B6AAE-00000000149B6ADD
int32_t __cdecl StartAvatarExpeditionWatcher::tryUpdateProgressImpl(
        StartAvatarExpeditionWatcher *const this,
        Player *player,
        const AvatarExpeditionStartEvent *event,
        const StartAvatarExpeditionWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1561: range 00000000149B6ADE-00000000149B6B48
int32_t __cdecl OpenBlossomChestWatcher::tryUpdateProgressImpl(
        OpenBlossomChestWatcher *const this,
        Player *player,
        const OpenBlossomChestEvent *event,
        const OpenBlossomChestWatcherParam *param)
{
  if ( std::unordered_set<unsigned int>::empty(&param->refresh_type_set)
    || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->refresh_type_set,
         &event->refresh_type) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1573: range 00000000149B6B4A-00000000149B6BB4
int32_t __cdecl FinishBlossomProgressWatcher::tryUpdateProgressImpl(
        FinishBlossomProgressWatcher *const this,
        Player *player,
        const FinishBlossomProgressEvent *event,
        const FinishBlossomProgressWatcherParam *param)
{
  if ( std::unordered_set<unsigned int>::empty(&param->refresh_id_set)
    || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->refresh_id_set,
         &event->refresh_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1584: range 00000000149B6BB6-00000000149B6C61
int32_t __cdecl FinishRoutineWatcher::tryUpdateProgressImpl(
        FinishRoutineWatcher *const this,
        Player *player,
        const RoutineFinishEvent *event,
        const FinishRoutineWatcherParam *param)
{
  uint32_t *p_routine_type; // rdx
  uint32_t routine_type; // ecx

  p_routine_type = &event->routine_type;
  if ( *(_BYTE *)(((unsigned __int64)p_routine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_routine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_routine_type);
  }
  routine_type = event->routine_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( routine_type == param->routine_type )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1594: range 00000000149B6C62-00000000149B6C97
int32_t __cdecl ActivityExpeditionFinishWatcher::tryUpdateProgressImpl(
        ActivityExpeditionFinishWatcher *const this,
        Player *player,
        const ActivityExpeditionFinishEvent *event,
        const ActivityExpeditionFinishWatcherParam *param)
{
  ActivityExpeditionFinishWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 1600: range 00000000149B6C98-00000000149B6DE2
int32_t __cdecl ActivityExpeditionFinishWatcher::refreshProgressImpl(
        ActivityExpeditionFinishWatcher *const this,
        Player *player,
        const ActivityExpeditionFinishWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t ExpeditionFinishCount; // eax
  int32_t result; // eax
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1601";
  *(_QWORD *)(v3 + 16) = ActivityExpeditionFinishWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ExpeditionActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<ExpeditionActivity>(0LL, (const std::shared_ptr<ExpeditionActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ExpeditionActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    ExpeditionFinishCount = ExpeditionActivity::getExpeditionFinishCount(v6);
    BaseWatcher::tryCorrectProgress(this, ExpeditionFinishCount);
  }
  std::shared_ptr<ExpeditionActivity>::~shared_ptr((std::shared_ptr<ExpeditionActivity> *const)(v3 + 32));
  result = 0;
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

// Line 1611: range 00000000149B6DE4-00000000149B6F22
int32_t __cdecl ActivityChannellerSlabLoopDungeonTotalScoreWatcher::tryUpdateProgressImpl(
        ActivityChannellerSlabLoopDungeonTotalScoreWatcher *const this,
        Player *player,
        const ChannellerSlabLoopDungeonScoreEvent *event,
        const ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam *param)
{
  uint32_t *p_schedule_id; // rdx
  uint32_t schedule_id; // ecx
  uint32_t activity_id; // ecx

  p_schedule_id = &event->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_schedule_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_schedule_id);
  }
  schedule_id = event->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->schedule_id);
  }
  if ( schedule_id == param->schedule_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->activity_id);
    }
    activity_id = event->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( activity_id == param->activity_id )
      ActivityChannellerSlabLoopDungeonTotalScoreWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 1620: range 00000000149B6F24-00000000149B706E
int32_t __cdecl ActivityChannellerSlabLoopDungeonTotalScoreWatcher::refreshProgressImpl(
        ActivityChannellerSlabLoopDungeonTotalScoreWatcher *const this,
        Player *player,
        const ActivityChannellerSlabLoopDungeonTotalScoreWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t LoopDungeonTotalScore; // eax
  int32_t result; // eax
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:1621";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabLoopDungeonTotalScoreWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    LoopDungeonTotalScore = ChannellerSlabActivity::getLoopDungeonTotalScore(v6);
    BaseWatcher::tryCorrectProgress(this, LoopDungeonTotalScore);
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v3 + 32));
  result = 0;
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

// Line 1635: range 00000000149B7070-00000000149B727C
int32_t __cdecl DoCookWatcher::tryUpdateProgressImpl(
        DoCookWatcher *const this,
        Player *player,
        const PlayerCookEvent *event,
        const DoCookWatcherParam *param)
{
  uint32_t qte_quality; // ecx
  DoCookWatcher *v5; // rdx
  uint32_t v6; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&param->is_less >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)param + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_less >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&param->is_less);
  }
  if ( !param->is_less )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->qte_quality >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->qte_quality >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->qte_quality);
    }
    qte_quality = event->qte_quality;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( qte_quality >= param->quality )
    {
      v5 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->cook_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->cook_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->cook_count);
      }
LABEL_19:
      BaseWatcher::addProgress(v5, event->cook_count);
    }
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->qte_quality >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->qte_quality >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->qte_quality);
    }
    v6 = event->qte_quality;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( v6 < param->quality )
    {
      v5 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->cook_count >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->cook_count >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->cook_count);
      }
      goto LABEL_19;
    }
  }
  return 0;
};

// Line 1657: range 00000000149B727E-00000000149B72ED
int32_t __cdecl DoForgeWatcher::tryUpdateProgressImpl(
        DoForgeWatcher *const this,
        Player *player,
        const PlayerForgeEvent *event,
        const DoForgeWatcherParam *param)
{
  DoForgeWatcher *v4; // rcx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->forge_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->forge_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->forge_count);
  }
  BaseWatcher::addProgress(v4, event->forge_count);
  return 0;
};

// Line 1666: range 00000000149B72EE-00000000149B731D
int32_t __cdecl DoCompoundWatcher::tryUpdateProgressImpl(
        DoCompoundWatcher *const this,
        Player *player,
        const PlayerCompoundEvent *event,
        const DoCompoundWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1675: range 00000000149B731E-00000000149B734D
int32_t __cdecl DoCombineWatcher::tryUpdateProgressImpl(
        DoCombineWatcher *const this,
        Player *player,
        const PlayerCombineEvent *event,
        const DoCombineWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1684: range 00000000149B734E-00000000149B749F
int32_t __cdecl BuyShopGoodsWatcher::tryUpdateProgressImpl(
        BuyShopGoodsWatcher *const this,
        Player *player,
        const PlayerBuyShopEvent *event,
        const BuyShopGoodsWatcherParam *param)
{
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v9[2]; // [rsp+30h] [rbp-20h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->shop_type_set,
         &event->shop_type) )
  {
    if ( !std::unordered_set<unsigned int>::empty(&param->goods_type_set) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v9);
      p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9)->design_config.txt_config_mgr.material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->item_id);
      }
      material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                              p_material_config_mgr,
                              event->item_id);
      std::shared_ptr<Config>::~shared_ptr(v9);
      if ( !material_config_ptr )
        return 0;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,data::MaterialType>(
              &param->goods_type_set,
              &material_config_ptr->material_type) )
        return 0;
    }
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1708: range 00000000149B74A0-00000000149B78F9
int32_t __cdecl ForgeWeaponWatcher::tryUpdateProgressImpl(
        ForgeWeaponWatcher *const this,
        Player *player,
        const PlayerForgeEvent *event,
        const ForgeWeaponWatcherParam *param)
{
  ForgeExcelConfigMgr *p_forge_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  std::pair<unsigned int const,unsigned int> *v7; // rax
  std::pair<unsigned int const,unsigned int> *v8; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v9; // rax
  WeaponExcelConfigMgr *p_weapon_config_mgr; // rcx
  uint32_t weapon_rank_level; // ecx
  ForgeWeaponWatcher *v12; // rcx
  bool is_any_output_item_satisfiy; // [rsp+2Fh] [rbp-81h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-78h] BYREF
  const data::ForgeExcelConfig *config_ptr; // [rsp+40h] [rbp-70h]
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+48h] [rbp-68h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *item_id; // [rsp+50h] [rbp-60h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *item_count; // [rsp+58h] [rbp-58h]
  const data::WeaponExcelConfig *weapon_config_ptr; // [rsp+60h] [rbp-50h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+68h] [rbp-48h] BYREF
  std::shared_ptr<Config> v24; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v25; // [rsp+80h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v24);
  p_forge_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.forge_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->forge_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->forge_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->forge_id);
  }
  config_ptr = data::ForgeExcelConfigMgrBase::findForgeExcelConfig(p_forge_config_mgr, event->forge_id);
  std::shared_ptr<Config>::~shared_ptr(&v24);
  if ( config_ptr )
  {
    is_any_output_item_satisfiy = 0;
    __for_range = &event->output_item_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&event->output_item_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(&event->output_item_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v7 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      v8 = v7;
      if ( ((unsigned __int8)v7 & 7) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v7 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v7->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v7, 8LL);
      }
      __in = *v8;
      item_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v9 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      item_count = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      if ( *item_count )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v24);
        p_weapon_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24)->design_config.txt_config_mgr.weapon_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        weapon_config_ptr = data::WeaponExcelConfigMgrBase::findWeaponExcelConfig(p_weapon_config_mgr, *item_id);
        std::shared_ptr<Config>::~shared_ptr(&v24);
        if ( weapon_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(param);
          }
          weapon_rank_level = param->weapon_rank_level;
          if ( *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&weapon_config_ptr->rank_level >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&weapon_config_ptr->rank_level);
          }
          if ( weapon_rank_level == weapon_config_ptr->rank_level )
          {
            is_any_output_item_satisfiy = 1;
            break;
          }
        }
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    if ( is_any_output_item_satisfiy )
    {
      v12 = this;
      if ( *(_BYTE *)(((unsigned __int64)&event->forge_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->forge_count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->forge_count);
      }
      BaseWatcher::addProgress(v12, event->forge_count);
    }
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      1712);
    v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v25,
           (const char (*)[37])"findForgeExcelConfig fail, forge_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &event->forge_id);
    common::milog::MiLogStream::~MiLogStream(&v25);
    return -1;
  }
};

// Line 1740: range 00000000149B78FA-00000000149B7BCF
int32_t __cdecl BuyShopGoodsAndWatcher::tryUpdateProgressImpl(
        BuyShopGoodsAndWatcher *const this,
        Player *player,
        const PlayerBuyShopEvent *event,
        const BuyShopGoodsAndWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t shop_id; // ecx
  int32_t result; // eax
  unsigned __int64 v9; // rax
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v10; // rax
  _DWORD *v11; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v17[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 13 goods_id:1750";
  *(_QWORD *)(v4 + 16) = BuyShopGoodsAndWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->shop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->shop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->shop_id);
  }
  shop_id = event->shop_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( shop_id == param->shop_id )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            &param->goods_id_set,
            &event->goods_id) )
    {
      result = 0;
    }
    else
    {
      v9 = (unsigned __int64)std::unordered_map<unsigned int,int>::operator[](&this->var_map_, &event->goods_id);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) != 0 && (char)((v9 & 7) + 3) >= *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load4(v9);
      ++*(_DWORD *)v9;
      __for_range = &param->goods_id_set;
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->goods_id_set)._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->goods_id_set)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v10 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v11 = v10;
        if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v10);
        }
        *(_DWORD *)(v4 + 32) = *v11;
        if ( !common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,int>>(
                &this->var_map_,
                (const std::unordered_map<unsigned int,int>::key_type *)(v4 + 32),
                0) )
        {
          result = 0;
          goto LABEL_22;
        }
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
      BaseWatcher::addProgress(this, 1u);
      result = 0;
    }
  }
  else
  {
    result = 0;
  }
LABEL_22:
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

// Line 1767: range 00000000149B7BD0-00000000149B7CC7
int32_t __cdecl MpPlayBattleWinWatcher::tryUpdateProgressImpl(
        MpPlayBattleWinWatcher *const this,
        Player *player,
        const ScenePlayBattleSettleEvent *event,
        const MpPlayBattleWinWatcherParam *param)
{
  uint32_t mp_play_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->mp_play_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->mp_play_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->mp_play_type);
  }
  mp_play_type = event->mp_play_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( mp_play_type == param->mp_play_type )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_win);
    }
    if ( event->is_win )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1779: range 00000000149B7CC8-00000000149B7D5D
int32_t __cdecl KillGroupMonsterWatcher::tryUpdateProgressImpl(
        KillGroupMonsterWatcher *const this,
        Player *player,
        const KillMonsterEvent *event,
        const KillGroupMonsterWatcherParam *param)
{
  uint32_t *p_group_id; // rbx
  const unsigned int *M_current; // r12
  std::vector<unsigned int>::const_iterator v6; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __lhs; // [rsp+20h] [rbp-20h] BYREF
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > __rhs; // [rsp+28h] [rbp-18h] BYREF

  p_group_id = &event->group_id;
  M_current = std::vector<unsigned int>::cend(&param->group_id_vec)._M_current;
  v6._M_current = std::vector<unsigned int>::cbegin(&param->group_id_vec)._M_current;
  __rhs._M_current = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>(
                       v6,
                       (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current,
                       p_group_id)._M_current;
  __lhs._M_current = std::vector<unsigned int>::cend(&param->group_id_vec)._M_current;
  if ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__lhs, &__rhs) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1791: range 00000000149B7D5E-00000000149B7E9E
int32_t __cdecl KillGroupSpecificMonsterWatcher::tryUpdateProgressImpl(
        KillGroupSpecificMonsterWatcher *const this,
        Player *player,
        const KillMonsterEvent *event,
        const KillGroupSpecificMonsterWatcherParam *param)
{
  uint32_t group_id; // ecx
  uint32_t config_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  group_id = param->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->group_id);
  }
  if ( group_id == event->group_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->config_id);
    }
    config_id = param->config_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->config_id);
    }
    if ( config_id == event->config_id )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 1802: range 00000000149B7EA0-00000000149B8478
int32_t __cdecl MpPlayGroupStatisticWatcher::tryUpdateProgressImpl(
        MpPlayGroupStatisticWatcher *const this,
        Player *player,
        const ScenePlayBattleSettleEvent *event,
        const MpPlayGroupStatisticWatcherParam *param)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  int32_t v7; // r14d
  Player *v8; // rax
  PlayerScenePlayComp *ScenePlayComp; // rcx
  BaseScenePlayBattle *v10; // r15
  uint32_t Uid; // eax
  int32_t result; // eax
  int64_t value; // [rsp+38h] [rbp-F8h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-F0h] BYREF
  char v17[208]; // [rsp+60h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 32 16 14 world_ptr:1803 64 16 21 owner_player_ptr:1808 96 16 13 play_ptr:1813 128 16 15 battle_ptr:1819";
  *(_QWORD *)(v4 + 16) = MpPlayGroupStatisticWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219021312;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getCurWorld<PlayerWorld>((const PlayerSceneComp *const)(v4 + 32));
  if ( std::operator==<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 32), 0LL) )
  {
    v7 = 0;
  }
  else
  {
    std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    PlayerWorld::getOwnPlayer((const PlayerWorld *const)(v4 + 64));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v4 + 64)) )
    {
      v7 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      ScenePlayComp = Player::getScenePlayComp(v8);
      if ( *(_BYTE *)(((unsigned __int64)&event->mp_play_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->mp_play_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->mp_play_id);
      }
      PlayerScenePlayComp::findScenePlayPtr(
        (PlayerScenePlayComp *const)(v4 + 96),
        (__int64)ScenePlayComp,
        event->mp_play_id);
      if ( std::operator==<BaseScenePlay>(0LL, (const std::shared_ptr<BaseScenePlay> *)(v4 + 96)) )
      {
        common::milog::MiLogStream::create(
          &v16,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/watcher.cpp",
          "tryUpdateProgressImpl",
          1816);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          &v16,
          (const char (*)[31])"[SCENE_PLAY] play_ptr is null ");
        common::milog::MiLogStream::~MiLogStream(&v16);
        v7 = 0;
      }
      else
      {
        std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
        BaseScenePlay::findBattlePtr((BaseScenePlay *const)(v4 + 128));
        if ( std::operator!=<BaseScenePlayBattle>((const std::shared_ptr<BaseScenePlayBattle> *)(v4 + 128), 0LL) )
        {
          v10 = std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseScenePlayBattle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
          Uid = Player::getUid(player);
          value = BaseScenePlayBattle::getUidValue(v10, Uid, &param->variable_name);
          if ( *(_BYTE *)(((unsigned __int64)&param->order_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&param->order_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&param->order_type);
          }
          switch ( param->order_type )
          {
            case Less_0:
              if ( *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) )
                __asan_report_load8(&param->variable_value);
              if ( value >= param->variable_value )
                break;
              goto LABEL_35;
            case Equal_0:
              if ( *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) )
                __asan_report_load8(&param->variable_value);
              if ( value != param->variable_value )
                break;
              goto LABEL_35;
            case Greater_1:
              if ( *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) )
                __asan_report_load8(&param->variable_value);
              if ( value <= param->variable_value )
                break;
              goto LABEL_35;
            case LessOrEqual:
              if ( *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) )
                __asan_report_load8(&param->variable_value);
              if ( value > param->variable_value )
                break;
              goto LABEL_35;
            case GreaterOrEqual:
              if ( *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) )
                __asan_report_load8(&param->variable_value);
              if ( value < param->variable_value )
                break;
LABEL_35:
              BaseWatcher::addProgress(this, 1u);
              break;
            default:
              v7 = -1;
              goto LABEL_38;
          }
        }
        v7 = 0;
LABEL_38:
        std::shared_ptr<BaseScenePlayBattle>::~shared_ptr((std::shared_ptr<BaseScenePlayBattle> *const)(v4 + 128));
      }
      std::shared_ptr<BaseScenePlay>::~shared_ptr((std::shared_ptr<BaseScenePlay> *const)(v4 + 96));
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 64));
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 32));
  result = v7;
  if ( v17 == (char *)v4 )
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

// Line 1875: range 00000000149B847A-00000000149B8707
int32_t __cdecl MpPlayReachScoreWatcher::tryUpdateProgressImpl(
        MpPlayReachScoreWatcher *const this,
        Player *player,
        const ScenePlayBattleSettleResultEvent *event,
        const MpPlayReachScoreWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t score; // ecx
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t Level; // ecx
  char v10; // al
  int32_t result; // eax
  char v14[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 world_ptr:1876";
  *(_QWORD *)(v4 + 16) = MpPlayReachScoreWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 32));
  if ( !std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 32), 0LL) )
    goto LABEL_17;
  if ( *(char *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_win);
  if ( !event->is_win )
    goto LABEL_17;
  if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->score);
  }
  score = event->score;
  if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->score);
  }
  if ( score < param->score )
    goto LABEL_17;
  v8 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
  Level = PlayerWorld::getLevel(v8);
  if ( *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->battle_world_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->battle_world_level);
  }
  if ( Level <= event->battle_world_level )
    v10 = 1;
  else
LABEL_17:
    v10 = 0;
  if ( v10 )
    BaseWatcher::addProgress(this, 1u);
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 32));
  result = 0;
  if ( v14 == (char *)v4 )
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

// Line 1890: range 00000000149B8708-00000000149B88C2
int32_t __cdecl MpPlayReachRecordWatcher::tryUpdateProgressImpl(
        MpPlayReachRecordWatcher *const this,
        Player *player,
        const ScenePlayBattleSettleResultEvent *event,
        const MpPlayReachRecordWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  char v7; // al
  int32_t result; // eax
  char v11[112]; // [rsp+20h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 world_ptr:1891";
  *(_QWORD *)(v4 + 16) = MpPlayReachRecordWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 32));
  if ( !std::operator!=<PlayerWorld>((const std::shared_ptr<PlayerWorld> *)(v4 + 32), 0LL) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&event->is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_win);
  if ( event->is_win )
    v7 = 1;
  else
LABEL_9:
    v7 = 0;
  if ( v7
    && common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         &event->finished_watcher_set,
         &param->watcher_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 32));
  result = 0;
  if ( v11 == (char *)v4 )
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

// Line 1908: range 00000000149B88C4-00000000149B89D3
int32_t __cdecl LoginWatcher::tryUpdateProgressImpl(
        LoginWatcher *const this,
        Player *player,
        const PlayerLoginEvent *event,
        const LoginWatcherParam *param)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  time_t v5; // rcx
  uint32_t *now_login_time; // rdi
  uint32_t time_offset; // [rsp+2Ch] [rbp-14h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  v5 = time_offset;
  if ( *(_BYTE *)(((unsigned __int64)&event->now_login_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->now_login_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->now_login_time);
  }
  now_login_time = (uint32_t *)event->now_login_time;
  if ( *(_BYTE *)(((unsigned __int64)&event->last_login_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->last_login_time >> 3) + 0x7FFF8000) <= 3 )
  {
    now_login_time = &event->last_login_time;
    __asan_report_load4(&event->last_login_time);
  }
  if ( !common::tools::TimeUtils::isSameDay(event->last_login_time, (time_t)now_login_time, v5) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1917: range 00000000149B89D4-00000000149B8A0C
int32_t __cdecl LoginWatcher::refreshProgress(LoginWatcher *const this)
{
  if ( !BaseWatcher::getProgress(this) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 1928: range 00000000149B8A0E-00000000149B8A98
int32_t __cdecl CostMaterialWatcher::tryUpdateProgressImpl(
        CostMaterialWatcher *const this,
        Player *player,
        const LoseItemEvent *event,
        const CostMaterialWatcherParam *param)
{
  CostMaterialWatcher *v4; // rcx

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->item_id_set,
         &event->item_id) )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->item_num);
    }
    BaseWatcher::addProgress(v4, event->item_num);
  }
  return 0;
};

// Line 1939: range 00000000149B8A9A-00000000149B8E0D
int32_t __cdecl FinishChallengeWatcher::tryUpdateProgressImpl(
        FinishChallengeWatcher *const this,
        Player *player,
        const DungeonChallengeSuccessEvent *event,
        const FinishChallengeWatcherParam *param)
{
  uint32_t dungeon_id; // ecx
  uint32_t scene_id; // ecx
  uint32_t group_id; // ecx
  uint32_t challenge_id; // ecx
  uint32_t challenge_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( param->dungeon_id )
  {
    dungeon_id = param->dungeon_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->dungeon_id);
    }
    if ( dungeon_id == event->dungeon_id )
      goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( !param->dungeon_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->scene_id);
    }
    scene_id = param->scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->scene_id);
    }
    if ( scene_id == event->scene_id )
    {
LABEL_15:
      if ( *(_BYTE *)(((unsigned __int64)&param->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->group_id);
      }
      group_id = param->group_id;
      if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->group_id);
      }
      if ( group_id == event->group_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&param->challenge_id);
        }
        if ( param->challenge_id )
        {
          challenge_id = param->challenge_id;
          if ( *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event->challenge_id);
          }
          if ( challenge_id == event->challenge_id )
            goto LABEL_34;
        }
        if ( *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&param->challenge_id);
        }
        if ( !param->challenge_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)param + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load4(&param->challenge_index);
          }
          challenge_index = param->challenge_index;
          if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&event->challenge_index);
          }
          if ( challenge_index == event->challenge_index )
LABEL_34:
            BaseWatcher::addProgress(this, 1u);
        }
      }
    }
  }
  return 0;
};

// Line 1952: range 00000000149B8E0E-00000000149B8E98
int32_t __cdecl UseItemWatcher::tryUpdateProgressImpl(
        UseItemWatcher *const this,
        Player *player,
        const UseItemEvent *event,
        const UseItemWatcherParam *param)
{
  UseItemWatcher *v4; // rcx

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->item_id_set,
         &event->item_id) )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->item_num);
    }
    BaseWatcher::addProgress(v4, event->item_num);
  }
  return 0;
};

// Line 1963: range 00000000149B8FEC-00000000149B91A9
int32_t __cdecl LevelAvatarFinishDungeonCountWatcher::tryUpdateProgressImpl(
        LevelAvatarFinishDungeonCountWatcher *const this,
        Player *player,
        const FinishDungeonEvent *event,
        const LevelAvatarFinishDungeonCountWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  int32_t result; // eax
  PlayerAvatarComp *AvatarComp; // [rsp+8h] [rbp-B8h]
  std::function<ForeachPolicy(Avatar&)> p_func; // [rsp+30h] [rbp-90h] BYREF
  char v12[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 1 34 is_avatar_condition_satisfied:1968";
  *(_QWORD *)(v4 + 16) = LevelAvatarFinishDungeonCountWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->dungeon_id_set,
          &event->dungeon_id) )
  {
    result = 0;
  }
  else
  {
    *(_BYTE *)(v4 + 32) = 0;
    AvatarComp = Player::getAvatarComp(player);
    std::function<ForeachPolicy ()(Avatar &)>::function<LevelAvatarFinishDungeonCountWatcher::tryUpdateProgressImpl(Player &,FinishDungeonEvent const&,LevelAvatarFinishDungeonCountWatcherParam const&)::{lambda(Avatar &)#1},void,void>(
      &p_func,
      (LevelAvatarFinishDungeonCountWatcher::tryUpdateProgressImpl::<lambda(Avatar&)>)__PAIR128__(
                                                                                        (unsigned __int64)param,
                                                                                        v4 + 32));
    PlayerAvatarComp::foreachMyAvatarInSceneTeam(AvatarComp, &p_func);
    std::function<ForeachPolicy ()(Avatar &)>::~function(&p_func);
    if ( *(_BYTE *)(v4 + 32) )
      BaseWatcher::addProgress(this, 1u);
    result = 0;
  }
  if ( v12 == (char *)v4 )
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

// Line 1969: range 00000000149B8E9A-00000000149B8FEB
ForeachPolicy __cdecl LevelAvatarFinishDungeonCountWatcher::tryUpdateProgressImpl(Player &,FinishDungeonEvent const&,LevelAvatarFinishDungeonCountWatcherParam const&)::{lambda(Avatar &)#1}::operator()(
        const LevelAvatarFinishDungeonCountWatcher::tryUpdateProgressImpl::<lambda(Avatar&)> *const __closure,
        Avatar *avatar)
{
  unsigned int *Level; // rsi
  unsigned __int64 param; // rax
  char v4; // al
  bool *is_avatar_condition_satisfied; // rdx
  char v6; // cl
  unsigned int value; // [rsp+1Ch] [rbp-4h] BYREF

  Level = (unsigned int *)Creature::getLevel(avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  param = (unsigned __int64)__closure->__param;
  if ( *(_BYTE *)((param >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)((param >> 3) + 0x7FFF8000) <= 3 )
    param = __asan_report_load4(__closure->__param);
  if ( (unsigned int)Level < *(_DWORD *)param )
    goto LABEL_10;
  value = Avatar::getAvatarId(avatar);
  if ( *(_BYTE *)(((unsigned __int64)&__closure->__param >> 3) + 0x7FFF8000) )
    __asan_report_load8(&__closure->__param);
  Level = &value;
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &__closure->__param->avatar_id_set,
         &value) )
  {
    v4 = 1;
  }
  else
  {
LABEL_10:
    v4 = 0;
  }
  if ( !v4 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  is_avatar_condition_satisfied = __closure->__is_avatar_condition_satisfied;
  v6 = *(_BYTE *)(((unsigned __int64)__closure->__is_avatar_condition_satisfied >> 3) + 0x7FFF8000);
  if ( v6 != 0 && ((__int64)__closure->__is_avatar_condition_satisfied & 7) >= v6 )
  {
    LOBYTE(Level) = v6 != 0;
    __asan_report_store1(__closure->__is_avatar_condition_satisfied, Level, is_avatar_condition_satisfied);
  }
  *is_avatar_condition_satisfied = 1;
  return 1;
};

// Line 1988: range 00000000149B91AA-00000000149B9337
bool __cdecl FinishQuestAndWatcher::isAllFinished(
        FinishQuestAndWatcher *const this,
        const FinishQuestAndWatcherParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  bool result; // al
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 quest_id:1989";
  *(_QWORD *)(v2 + 16) = FinishQuestAndWatcher::isAllFinished;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &param->quest_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->quest_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->quest_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,int>,unsigned int>(
            &this->var_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      result = 0;
      goto LABEL_12;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  result = 1;
LABEL_12:
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

// Line 2000: range 00000000149B9338-00000000149B93BF
int32_t __cdecl FinishQuestAndWatcher::tryUpdateProgressImpl(
        FinishQuestAndWatcher *const this,
        Player *player,
        const FinishQuestEvent *event,
        const FinishQuestAndWatcherParam *param)
{
  int *v4; // r8
  int v8; // [rsp+2Ch] [rbp-4h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->quest_id_set,
         &event->quest_id) )
  {
    v8 = 0;
    std::unordered_map<unsigned int,int>::emplace<unsigned int const&,int>(
      &this->var_map_,
      &event->quest_id,
      &v8,
      (const unsigned int *)&this->var_map_,
      v4);
  }
  if ( FinishQuestAndWatcher::isAllFinished(this, param) )
    BaseWatcher::tryCorrectProgress(this, 1u);
  return 0;
};

// Line 2012: range 00000000149B93C0-00000000149B95AC
int32_t __cdecl FinishQuestAndWatcher::refreshProgressImpl(
        FinishQuestAndWatcher *const this,
        Player *player,
        const FinishQuestAndWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v6; // rax
  _DWORD *v7; // rdx
  PlayerQuestComp *QuestComp; // rax
  int *v9; // r8
  int32_t result; // eax
  int v12; // [rsp+24h] [rbp-7Ch] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 13 quest_id:2013";
  *(_QWORD *)(v3 + 16) = FinishQuestAndWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  __for_range = &param->quest_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->quest_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->quest_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 32) = *v7;
    QuestComp = Player::getQuestComp(player);
    if ( PlayerQuestComp::getQuestState(QuestComp, *(_DWORD *)(v3 + 32)) == QUEST_STATE_FINISHED )
    {
      v12 = 0;
      std::unordered_map<unsigned int,int>::emplace<unsigned int &,int>(
        &this->var_map_,
        (unsigned int *)(v3 + 32),
        &v12,
        (unsigned int *)&this->var_map_,
        v9);
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( FinishQuestAndWatcher::isAllFinished(this, param) )
    BaseWatcher::tryCorrectProgress(this, 1u);
  result = 0;
  if ( v16 == (char *)v3 )
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

// Line 2032: range 00000000149B95AE-00000000149B95F8
int32_t __cdecl FinishQuestOrWatcher::tryUpdateProgressImpl(
        FinishQuestOrWatcher *const this,
        Player *player,
        const FinishQuestEvent *event,
        const FinishQuestOrWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->quest_id_set,
         &event->quest_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2041: range 00000000149B95FA-00000000149B9714
int32_t __cdecl FinishQuestOrWatcher::refreshProgressImpl(
        FinishQuestOrWatcher *const this,
        Player *player,
        const FinishQuestOrWatcherParam *param)
{
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  PlayerQuestComp *QuestComp; // rax
  uint32_t num; // [rsp+20h] [rbp-20h]
  uint32_t quest_id; // [rsp+24h] [rbp-1Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  if ( BaseWatcher::getProgress(this) )
    return 0;
  num = 0;
  __for_range = &param->quest_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->quest_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->quest_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v4 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    quest_id = *v5;
    QuestComp = Player::getQuestComp(player);
    if ( PlayerQuestComp::getQuestState(QuestComp, quest_id) == QUEST_STATE_FINISHED )
      ++num;
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  BaseWatcher::addProgress(this, num);
  return 0;
};

// Line 2062: range 00000000149B9716-00000000149B974B
int32_t __cdecl DailyTaskVarEqualWatcher::tryUpdateProgressImpl(
        DailyTaskVarEqualWatcher *const this,
        Player *player,
        const DailyTaskVarUpdateEvent *event,
        const DailyTaskVarEqualWatcherParam *param)
{
  DailyTaskVarEqualWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2067: range 00000000149B974C-00000000149B985F
int32_t __cdecl DailyTaskVarEqualWatcher::refreshProgressImpl(
        DailyTaskVarEqualWatcher *const this,
        Player *player,
        const DailyTaskVarEqualWatcherParam *param)
{
  const PlayerDailyTaskComp *DailyTaskComp; // rdi
  uint32_t index; // ecx
  int32_t DailyTaskVar; // ecx

  DailyTaskComp = Player::getDailyTaskComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) )
  {
    DailyTaskComp = (const PlayerDailyTaskComp *)&param->index;
    __asan_report_load4(&param->index);
  }
  index = param->index;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    DailyTaskComp = (const PlayerDailyTaskComp *)param;
    __asan_report_load4(param);
  }
  DailyTaskVar = PlayerDailyTaskComp::getDailyTaskVar(DailyTaskComp, param->task_id, index);
  if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->value);
  }
  if ( DailyTaskVar == param->value )
    BaseWatcher::tryCorrectProgress(this, 1u);
  return 0;
};

// Line 2079: range 00000000149B9860-00000000149B9895
int32_t __cdecl QuestGlobalVarEqualWatcher::tryUpdateProgressImpl(
        QuestGlobalVarEqualWatcher *const this,
        Player *player,
        const QuestGlobalVarUpdateEvent *event,
        const QuestGlobalVarEqualWatcherParam *param)
{
  QuestGlobalVarEqualWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2084: range 00000000149B9896-00000000149B9966
int32_t __cdecl QuestGlobalVarEqualWatcher::refreshProgressImpl(
        QuestGlobalVarEqualWatcher *const this,
        Player *player,
        const QuestGlobalVarEqualWatcherParam *param)
{
  PlayerQuestComp *QuestComp; // rcx
  int GlobalVarValue; // ecx

  QuestComp = Player::getQuestComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  GlobalVarValue = PlayerQuestComp::getGlobalVarValue(QuestComp, param->id);
  if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->value);
  }
  if ( GlobalVarValue == param->value )
    BaseWatcher::tryCorrectProgress(this, 1u);
  return 0;
};

// Line 2095: range 00000000149B9968-00000000149B9997
int32_t __cdecl TalkNumWatcher::tryUpdateProgressImpl(
        TalkNumWatcher *const this,
        Player *player,
        const CompleteTalkEvent *event,
        const TalkNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2104: range 00000000149B9998-00000000149B9A0A
int32_t __cdecl FinishParentQuestAndWatcher::tryUpdateProgressImpl(
        FinishParentQuestAndWatcher *const this,
        Player *player,
        const FinishParentQuestEvent *event,
        const FinishParentQuestAndWatcherParam *param)
{
  int *v4; // r8
  int v8; // [rsp+2Ch] [rbp-4h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->parent_quest_id_set,
         &event->parent_quest_id) )
  {
    v8 = 0;
    std::unordered_map<unsigned int,int>::emplace<unsigned int const&,int>(
      &this->var_map_,
      &event->parent_quest_id,
      &v8,
      (const unsigned int *)&this->var_map_,
      v4);
  }
  FinishParentQuestAndWatcher::checkAndUpdateProgress(this, param);
  return 0;
};

// Line 2114: range 00000000149B9A0C-00000000149B9C97
int32_t __cdecl FinishParentQuestAndWatcher::refreshProgressImpl(
        FinishParentQuestAndWatcher *const this,
        Player *player,
        const FinishParentQuestAndWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v6; // rax
  _DWORD *v7; // rdx
  PlayerQuestComp *QuestComp; // rax
  int *v9; // r8
  std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t result; // eax
  int v14; // [rsp+24h] [rbp-9Ch] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-98h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-90h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-88h]
  char v18[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 20 parent_quest_id:2115 64 16 21 parent_quest_ptr:2117";
  *(_QWORD *)(v3 + 16) = FinishParentQuestAndWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  __for_range = &param->parent_quest_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->parent_quest_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->parent_quest_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v7 = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    *(_DWORD *)(v3 + 48) = *v7;
    QuestComp = Player::getQuestComp(player);
    PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v3 + 64), (__int64)QuestComp, *(_DWORD *)(v3 + 48));
    if ( std::operator!=<ParentQuest>(0LL, (const std::shared_ptr<ParentQuest> *)(v3 + 64)) )
    {
      v10 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( ParentQuest::getParentQuestState(v10) == PARENT_QUEST_STATE_FINISHED )
      {
        v14 = 0;
        std::unordered_map<unsigned int,int>::emplace<unsigned int &,int>(
          &this->var_map_,
          (unsigned int *)(v3 + 48),
          &v14,
          (unsigned int *)&this->var_map_,
          v9);
      }
    }
    std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v3 + 64));
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  FinishParentQuestAndWatcher::checkAndUpdateProgress(this, param);
  result = 0;
  if ( v18 == (char *)v3 )
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

// Line 2128: range 00000000149B9C98-00000000149B9E2C
void __cdecl FinishParentQuestAndWatcher::checkAndUpdateProgress(
        FinishParentQuestAndWatcher *const this,
        const FinishParentQuestAndWatcherParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v10[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 20 parent_quest_id:2129";
  *(_QWORD *)(v2 + 16) = FinishParentQuestAndWatcher::checkAndUpdateProgress;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &param->parent_quest_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->parent_quest_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->parent_quest_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,int>,unsigned int>(
            &this->var_map_,
            (const unsigned int *)(v2 + 32)) )
      goto LABEL_11;
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  BaseWatcher::tryCorrectProgress(this, 1u);
LABEL_11:
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

// Line 2143: range 00000000149B9E2E-00000000149B9E78
int32_t __cdecl FinishParentQuestOrWatcher::tryUpdateProgressImpl(
        FinishParentQuestOrWatcher *const this,
        Player *player,
        const FinishParentQuestEvent *event,
        const FinishParentQuestOrWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->parent_quest_id_set,
         &event->parent_quest_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2152: range 00000000149B9E7A-00000000149BA0A6
int32_t __cdecl FinishParentQuestOrWatcher::refreshProgressImpl(
        FinishParentQuestOrWatcher *const this,
        Player *player,
        const FinishParentQuestOrWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int32_t result; // eax
  unsigned int *v7; // rax
  int *v8; // rdx
  PlayerQuestComp *QuestComp; // rax
  std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  uint32_t num; // [rsp+20h] [rbp-80h]
  int parent_quest_id; // [rsp+24h] [rbp-7Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 21 parent_quest_ptr:2160";
  *(_QWORD *)(v3 + 16) = FinishParentQuestOrWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( BaseWatcher::getProgress(this) )
  {
    result = 0;
  }
  else
  {
    num = 0;
    __for_range = &param->parent_quest_id_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->parent_quest_id_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->parent_quest_id_set)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v7 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      parent_quest_id = *v8;
      QuestComp = Player::getQuestComp(player);
      PlayerQuestComp::findParentQuest((const PlayerQuestComp *const)(v3 + 32), (__int64)QuestComp, parent_quest_id);
      if ( std::operator!=<ParentQuest>(0LL, (const std::shared_ptr<ParentQuest> *)(v3 + 32)) )
      {
        v10 = std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ParentQuest,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( ParentQuest::getParentQuestState(v10) == PARENT_QUEST_STATE_FINISHED )
          ++num;
      }
      std::shared_ptr<ParentQuest>::~shared_ptr((std::shared_ptr<ParentQuest> *const)(v3 + 32));
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
    BaseWatcher::addProgress(this, num);
    result = 0;
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
  return result;
};

// Line 2173: range 00000000149BA0A8-00000000149BA1ED
int32_t __cdecl GroupNotifyWatcher::tryUpdateProgressImpl(
        GroupNotifyWatcher *const this,
        Player *player,
        const GroupMarkPlayerActionEvent *event,
        const GroupNotifyWatcherParam *param)
{
  const unsigned int *v5; // r8
  const unsigned int *v6; // r9
  std::tuple<unsigned int,unsigned int,unsigned int> value; // [rsp+24h] [rbp-Ch] BYREF

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( param->city_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->city_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->city_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->city_id);
    }
    if ( event->city_id != param->city_id )
      return 0;
  }
  if ( !std::unordered_set<unsigned int>::empty(&param->area_id_set)
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->area_id_set,
          &event->group_area_id) )
  {
    return 0;
  }
  std::make_tuple<unsigned int const&,unsigned int const&,unsigned int const&>(
    (const unsigned int *)&value.std::_Tuple_impl<1,unsigned int,unsigned int>,
    &event->player_action_param1,
    &event->player_action_param2,
    &event->player_action_param3,
    v5,
    v6);
  if ( common::tools::MiscUtils::isContains<std::set<std::tuple<unsigned int,unsigned int,unsigned int>> const,std::tuple<unsigned int,unsigned int,unsigned int>>(
         &param->param_set,
         &value) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2196: range 00000000149BA1EE-00000000149BA5B9
int32_t __cdecl ElementReactionTimeLimitNumWatcher::tryUpdateProgressImpl(
        ElementReactionTimeLimitNumWatcher *const this,
        Player *player,
        const ElementReactionStatUpdateEvent *event,
        const ElementReactionTimeLimitNumWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerWatcherComp *WatcherComp; // rax
  const ElementReactionStatCollector *ElementReactionStatCollector; // rax
  int32_t result; // eax
  PlayerWatcherComp *v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rax
  std::pair<unsigned int const,unsigned int> *v12; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v13; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false>::pointer v14; // rax
  std::unordered_set<unsigned int>::size_type v15; // rcx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ElementReactionStat>,false> __y; // [rsp+38h] [rbp-98h] BYREF
  uint64_t time_ms; // [rsp+40h] [rbp-90h]
  const std::unordered_map<unsigned int,ElementReactionStat> *stat_map; // [rsp+48h] [rbp-88h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+60h] [rbp-70h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+68h] [rbp-68h] BYREF
  char v26[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 iter:2210";
  *(_QWORD *)(v4 + 16) = ElementReactionTimeLimitNumWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  WatcherComp = Player::getWatcherComp(player);
  ElementReactionStatCollector = PlayerWatcherComp::getElementReactionStatCollector(WatcherComp);
  time_ms = ElementReactionStatCollector::getTailTimeMs(ElementReactionStatCollector);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_time_ms_);
  if ( time_ms >= this->last_time_ms_ + 2000 )
  {
    v10 = Player::getWatcherComp(player);
    stat_map = &PlayerWatcherComp::getElementReactionStatCollector(v10)->stat_map;
    __for_range = &param->type_num_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&param->type_num_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&param->type_num_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v11 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      __in = *v12;
      type = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v13 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      num = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      if ( *num )
      {
        *(std::unordered_map<unsigned int,ElementReactionStat>::const_iterator *)(v4 + 32) = std::unordered_map<unsigned int,ElementReactionStat>::find(
                                                                                               stat_map,
                                                                                               type);
        __y._M_cur = std::unordered_map<unsigned int,ElementReactionStat>::end(stat_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,ElementReactionStat>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ElementReactionStat>,false> *)(v4 + 32),
               &__y) )
        {
          result = 0;
          goto LABEL_25;
        }
        v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false> *const)(v4 + 32));
        v15 = std::unordered_set<unsigned int>::size(&v14->second.trigger_set);
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(num);
        }
        if ( v15 < *num )
        {
          result = 0;
          goto LABEL_25;
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    BaseWatcher::addProgress(this, 1u);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->last_time_ms_, 1LL);
    this->last_time_ms_ = time_ms;
    result = 0;
  }
  else
  {
    result = 0;
  }
LABEL_25:
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

// Line 2228: range 00000000149BA5BA-00000000149BA985
int32_t __cdecl ElementReactionTimeLimitKillNumWatcher::tryUpdateProgressImpl(
        ElementReactionTimeLimitKillNumWatcher *const this,
        Player *player,
        const ElementReactionStatUpdateEvent *event,
        const ElementReactionTimeLimitKillNumWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerWatcherComp *WatcherComp; // rax
  const ElementReactionStatCollector *ElementReactionStatCollector; // rax
  int32_t result; // eax
  PlayerWatcherComp *v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rax
  std::pair<unsigned int const,unsigned int> *v12; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v13; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false>::pointer v14; // rax
  std::unordered_set<unsigned int>::size_type v15; // rcx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ElementReactionStat>,false> __y; // [rsp+38h] [rbp-98h] BYREF
  uint64_t time_ms; // [rsp+40h] [rbp-90h]
  const std::unordered_map<unsigned int,ElementReactionStat> *stat_map; // [rsp+48h] [rbp-88h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+60h] [rbp-70h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+68h] [rbp-68h] BYREF
  char v26[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 iter:2241";
  *(_QWORD *)(v4 + 16) = ElementReactionTimeLimitKillNumWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  WatcherComp = Player::getWatcherComp(player);
  ElementReactionStatCollector = PlayerWatcherComp::getElementReactionStatCollector(WatcherComp);
  time_ms = ElementReactionStatCollector::getTailTimeMs(ElementReactionStatCollector);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_time_ms_);
  if ( time_ms >= this->last_time_ms_ + 2000 )
  {
    v10 = Player::getWatcherComp(player);
    stat_map = &PlayerWatcherComp::getElementReactionStatCollector(v10)->stat_map;
    __for_range = &param->type_num_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&param->type_num_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&param->type_num_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v11 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      __in = *v12;
      type = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v13 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      num = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      if ( *num )
      {
        *(std::unordered_map<unsigned int,ElementReactionStat>::const_iterator *)(v4 + 32) = std::unordered_map<unsigned int,ElementReactionStat>::find(
                                                                                               stat_map,
                                                                                               type);
        __y._M_cur = std::unordered_map<unsigned int,ElementReactionStat>::end(stat_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,ElementReactionStat>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ElementReactionStat>,false> *)(v4 + 32),
               &__y) )
        {
          result = 0;
          goto LABEL_25;
        }
        v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false> *const)(v4 + 32));
        v15 = std::unordered_set<unsigned int>::size(&v14->second.kill_set);
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(num);
        }
        if ( v15 < *num )
        {
          result = 0;
          goto LABEL_25;
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    BaseWatcher::addProgress(this, 1u);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->last_time_ms_, 1LL);
    this->last_time_ms_ = time_ms;
    result = 0;
  }
  else
  {
    result = 0;
  }
LABEL_25:
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

// Line 2259: range 00000000149BA986-00000000149BAD51
int32_t __cdecl ElementReactionTimeLimitDamageNumWatcher::tryUpdateProgressImpl(
        ElementReactionTimeLimitDamageNumWatcher *const this,
        Player *player,
        const ElementReactionStatUpdateEvent *event,
        const ElementReactionTimeLimitDamageNumWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  PlayerWatcherComp *WatcherComp; // rax
  const ElementReactionStatCollector *ElementReactionStatCollector; // rax
  int32_t result; // eax
  PlayerWatcherComp *v10; // rax
  std::pair<unsigned int const,unsigned int> *v11; // rax
  std::pair<unsigned int const,unsigned int> *v12; // rdx
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *v13; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false>::pointer v14; // rax
  std::unordered_set<unsigned int>::size_type v15; // rcx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,ElementReactionStat>,false> __y; // [rsp+38h] [rbp-98h] BYREF
  uint64_t time_ms; // [rsp+40h] [rbp-90h]
  const std::unordered_map<unsigned int,ElementReactionStat> *stat_map; // [rsp+48h] [rbp-88h]
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+50h] [rbp-80h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *type; // [rsp+58h] [rbp-78h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+60h] [rbp-70h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+68h] [rbp-68h] BYREF
  char v26[96]; // [rsp+70h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 iter:2272";
  *(_QWORD *)(v4 + 16) = ElementReactionTimeLimitDamageNumWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  WatcherComp = Player::getWatcherComp(player);
  ElementReactionStatCollector = PlayerWatcherComp::getElementReactionStatCollector(WatcherComp);
  time_ms = ElementReactionStatCollector::getTailTimeMs(ElementReactionStatCollector);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_time_ms_);
  if ( time_ms >= this->last_time_ms_ + 2000 )
  {
    v10 = Player::getWatcherComp(player);
    stat_map = &PlayerWatcherComp::getElementReactionStatCollector(v10)->stat_map;
    __for_range = &param->type_num_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&param->type_num_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&param->type_num_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(&__for_begin, &__for_end) )
    {
      v11 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
      v12 = v11;
      if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v11, 8LL);
      }
      __in = *v12;
      type = std::get<0ul,unsigned int const,unsigned int>(&__in);
      v13 = std::get<1ul,unsigned int const,unsigned int>(&__in);
      num = v13;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      if ( *num )
      {
        *(std::unordered_map<unsigned int,ElementReactionStat>::const_iterator *)(v4 + 32) = std::unordered_map<unsigned int,ElementReactionStat>::find(
                                                                                               stat_map,
                                                                                               type);
        __y._M_cur = std::unordered_map<unsigned int,ElementReactionStat>::end(stat_map)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,ElementReactionStat>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,ElementReactionStat>,false> *)(v4 + 32),
               &__y) )
        {
          result = 0;
          goto LABEL_25;
        }
        v14 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,ElementReactionStat>,false,false> *const)(v4 + 32));
        v15 = std::unordered_set<unsigned int>::size(&v14->second.damage_set);
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(num);
        }
        if ( v15 < *num )
        {
          result = 0;
          goto LABEL_25;
        }
      }
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
    }
    BaseWatcher::addProgress(this, 1u);
    if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
      __asan_report_store8(&this->last_time_ms_, 1LL);
    this->last_time_ms_ = time_ms;
    result = 0;
  }
  else
  {
    result = 0;
  }
LABEL_25:
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

// Line 2290: range 00000000149BAD52-00000000149BAE3A
int32_t __cdecl AbilityStatePassTimeWatcher::tryUpdateProgressImpl(
        AbilityStatePassTimeWatcher *const this,
        Player *player,
        const AbilityStatePassTimeEvent *event,
        const AbilityStatePassTimeWatcherParam *param)
{
  uint64_t pass_time_ms; // rcx
  data::AbilityState ability_state; // rcx

  if ( *(_BYTE *)(((unsigned __int64)&event->pass_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_load8(&event->pass_time_ms);
  pass_time_ms = event->pass_time_ms;
  if ( *(_BYTE *)(((unsigned __int64)&param->pass_time_ms >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->pass_time_ms);
  if ( pass_time_ms >= param->pass_time_ms )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->ability_state >> 3) + 0x7FFF8000) )
      __asan_report_load8(&event->ability_state);
    ability_state = event->ability_state;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
      __asan_report_load8(param);
    if ( ability_state == param->ability_state )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2302: range 00000000149BAE3C-00000000149BAE71
int32_t __cdecl MaxCriticalDamageWatcher::tryUpdateProgressImpl(
        MaxCriticalDamageWatcher *const this,
        Player *player,
        const RecordMaxCriticalDamageUpdateEvent *event,
        const MaxCriticalDamageWatcherParam *param)
{
  MaxCriticalDamageWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2307: range 00000000149BAE72-00000000149BAF57
int32_t __cdecl MaxCriticalDamageWatcher::refreshProgressImpl(
        MaxCriticalDamageWatcher *const this,
        Player *player,
        const MaxCriticalDamageWatcherParam *param)
{
  PlayerWatcherComp *WatcherComp; // rax
  const RecordValue *RecordValue; // rax
  float *p_max_critical_damage; // rdx
  PlayerWatcherComp *v6; // rax
  const RecordValue *v7; // rax
  float *v8; // rdx

  WatcherComp = Player::getWatcherComp(player);
  RecordValue = PlayerWatcherComp::getRecordValue(WatcherComp);
  p_max_critical_damage = &RecordValue->max_critical_damage;
  if ( *(_BYTE *)(((unsigned __int64)RecordValue >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)RecordValue & 7) + 3) >= *(_BYTE *)(((unsigned __int64)RecordValue >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(RecordValue);
  }
  if ( *p_max_critical_damage > 0.0 )
  {
    v6 = Player::getWatcherComp(player);
    v7 = PlayerWatcherComp::getRecordValue(v6);
    v8 = &v7->max_critical_damage;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    BaseWatcher::tryCorrectProgress(this, (int)*v8);
  }
  return 0;
};

// Line 2318: range 00000000149BAF58-00000000149BAF8D
int32_t __cdecl FullSatiationTeamAvatarNumWatcher::tryUpdateProgressImpl(
        FullSatiationTeamAvatarNumWatcher *const this,
        Player *player,
        const FullSatiationEvent *event,
        const FullSatiationTeamAvatarNumWatcherParam *param)
{
  FullSatiationTeamAvatarNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2323: range 00000000149BAF8E-00000000149BAFD0
int32_t __cdecl FullSatiationTeamAvatarNumWatcher::refreshProgressImpl(
        FullSatiationTeamAvatarNumWatcher *const this,
        Player *player,
        const FullSatiationTeamAvatarNumWatcherParam *param)
{
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t FullSatiationTeamAvatarNum; // eax

  AvatarComp = Player::getAvatarComp(player);
  FullSatiationTeamAvatarNum = PlayerAvatarComp::getFullSatiationTeamAvatarNum(AvatarComp);
  BaseWatcher::tryCorrectProgress(this, FullSatiationTeamAvatarNum);
  return 0;
};

// Line 2331: range 00000000149BAFD2-00000000149BB001
int32_t __cdecl DeliverItemToSalesmanWatcher::tryUpdateProgressImpl(
        DeliverItemToSalesmanWatcher *const this,
        Player *player,
        const DeliverItemToSalesmanEvent *event,
        const DeliverItemToSalesmanWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2340: range 00000000149BB002-00000000149BB037
int32_t __cdecl MaxDashTimeWatcher::tryUpdateProgressImpl(
        MaxDashTimeWatcher *const this,
        Player *player,
        const RecordMaxDashTimeUpdateEvent *event,
        const MaxDashTimeWatcherParam *param)
{
  MaxDashTimeWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2345: range 00000000149BB038-00000000149BB0BF
int32_t __cdecl MaxDashTimeWatcher::refreshProgressImpl(
        MaxDashTimeWatcher *const this,
        Player *player,
        const MaxDashTimeWatcherParam *param)
{
  PlayerWatcherComp *WatcherComp; // rax
  const RecordValue *RecordValue; // rdx
  float *p_max_dash_time; // rax

  WatcherComp = Player::getWatcherComp(player);
  RecordValue = PlayerWatcherComp::getRecordValue(WatcherComp);
  p_max_dash_time = &RecordValue->max_dash_time;
  if ( *(_BYTE *)(((unsigned __int64)p_max_dash_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_max_dash_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_dash_time >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(p_max_dash_time);
  }
  BaseWatcher::tryCorrectProgress(this, (int)RecordValue->max_dash_time);
  return 0;
};

// Line 2354: range 00000000149BB0C0-00000000149BB0F5
int32_t __cdecl MaxFlyTimeWatcher::tryUpdateProgressImpl(
        MaxFlyTimeWatcher *const this,
        Player *player,
        const RecordMaxFlyTimeUpdateEvent *event,
        const MaxFlyTimeWatcherParam *param)
{
  MaxFlyTimeWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2359: range 00000000149BB0F6-00000000149BB17D
int32_t __cdecl MaxFlyTimeWatcher::refreshProgressImpl(
        MaxFlyTimeWatcher *const this,
        Player *player,
        const MaxFlyTimeWatcherParam *param)
{
  PlayerWatcherComp *WatcherComp; // rax
  const RecordValue *RecordValue; // rdx
  float *p_max_fly_time; // rax

  WatcherComp = Player::getWatcherComp(player);
  RecordValue = PlayerWatcherComp::getRecordValue(WatcherComp);
  p_max_fly_time = &RecordValue->max_fly_time;
  if ( *(_BYTE *)(((unsigned __int64)p_max_fly_time >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_max_fly_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_fly_time >> 3)
                                                                     + 0x7FFF8000) )
  {
    __asan_report_load4(p_max_fly_time);
  }
  BaseWatcher::tryCorrectProgress(this, (int)RecordValue->max_fly_time);
  return 0;
};

// Line 2368: range 00000000149BB17E-00000000149BB1B3
int32_t __cdecl MaxFlyMapDistanceWatcher::tryUpdateProgressImpl(
        MaxFlyMapDistanceWatcher *const this,
        Player *player,
        const RecordMaxFlyMapDistanceUpdateEvent *event,
        const MaxFlyMapDistanceWatcherParam *param)
{
  MaxFlyMapDistanceWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2373: range 00000000149BB1B4-00000000149BB29D
int32_t __cdecl MaxFlyMapDistanceWatcher::refreshProgressImpl(
        MaxFlyMapDistanceWatcher *const this,
        Player *player,
        const MaxFlyMapDistanceWatcherParam *param)
{
  PlayerWatcherComp *WatcherComp; // rax
  const RecordValue *RecordValue; // rdx
  float *p_max_fly_map_distance; // rax
  PlayerWatcherComp *v6; // rax
  const RecordValue *v7; // rdx
  float *v8; // rax

  WatcherComp = Player::getWatcherComp(player);
  RecordValue = PlayerWatcherComp::getRecordValue(WatcherComp);
  p_max_fly_map_distance = &RecordValue->max_fly_map_distance;
  if ( *(_BYTE *)(((unsigned __int64)p_max_fly_map_distance >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)p_max_fly_map_distance & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_max_fly_map_distance >> 3)
                                                                             + 0x7FFF8000) )
  {
    __asan_report_load4(p_max_fly_map_distance);
  }
  if ( RecordValue->max_fly_map_distance > 0.0 )
  {
    v6 = Player::getWatcherComp(player);
    v7 = PlayerWatcherComp::getRecordValue(v6);
    v8 = &v7->max_fly_map_distance;
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v8);
    }
    BaseWatcher::tryCorrectProgress(this, (int)v7->max_fly_map_distance);
  }
  return 0;
};

// Line 2384: range 00000000149BB29E-00000000149BB37E
int32_t __cdecl SitDownInPointWatcher::tryUpdateProgressImpl(
        SitDownInPointWatcher *const this,
        Player *player,
        const SitDownEvent *event,
        const SitDownInPointWatcherParam *param)
{
  uint32_t *p_scene_id; // rdx
  uint32_t scene_id; // ecx

  p_scene_id = &event->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_scene_id);
  }
  scene_id = event->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->scene_id);
  }
  if ( scene_id != param->scene_id )
    return 0;
  if ( getDistance(&event->pos, &param->pos) < 10.0 )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2399: range 00000000149BB380-00000000149BB433
int32_t __cdecl ElementTypeChangeWatcher::tryUpdateProgressImpl(
        ElementTypeChangeWatcher *const this,
        Player *player,
        const ElementTypeChangeEvent *event,
        const ElementTypeChangeWatcherParam *param)
{
  data::ElementType new_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->new_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->new_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->new_type);
  }
  new_type = event->new_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( new_type == param->target_element_type )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2410: range 00000000149BB434-00000000149BB4DF
int32_t __cdecl GadgetInteractableWatcher::tryUpdateProgressImpl(
        GadgetInteractableWatcher *const this,
        Player *player,
        const GadgetInteractableEvent *event,
        const GadgetInteractableWatcherParam *param)
{
  uint32_t *p_gadget_id; // rdx
  uint32_t gadget_id; // ecx

  p_gadget_id = &event->gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gadget_id);
  }
  gadget_id = event->gadget_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gadget_id == param->target_gadget_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2421: range 00000000149BB4E0-00000000149BB515
int32_t __cdecl SkilledAtRecipeWatcher::tryUpdateProgressImpl(
        SkilledAtRecipeWatcher *const this,
        Player *player,
        const SkilledAtRecipeEvent *event,
        const SkilledAtRecipeWatcherParam *param)
{
  SkilledAtRecipeWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2426: range 00000000149BB516-00000000149BB56E
int32_t __cdecl SkilledAtRecipeWatcher::refreshProgressImpl(
        SkilledAtRecipeWatcher *const this,
        Player *player,
        const SkilledAtRecipeWatcherParam *param)
{
  PlayerCookComp *CookComp; // rax
  uint32_t total_count; // [rsp+2Ch] [rbp-4h]

  CookComp = Player::getCookComp(player);
  total_count = PlayerCookComp::countMaxProficiencyRecipes(CookComp);
  if ( total_count > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, total_count);
  return 0;
};

// Line 2438: range 00000000149BB570-00000000149BB5BA
int32_t __cdecl KilledByCertainMonsterWatcher::tryUpdateProgressImpl(
        KilledByCertainMonsterWatcher *const this,
        Player *player,
        const KilledByCertainMonsterEvent *event,
        const KilledByCertainMonsterWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->describel_id_set,
         &event->describel_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2450: range 00000000149BB5BC-00000000149BB8DE
int32_t __cdecl TeleportWithCertainPortalWatcher::tryUpdateProgressImpl(
        TeleportWithCertainPortalWatcher *const this,
        Player *player,
        const TeleportWithCertainPortalEvent *event,
        const TeleportWithCertainPortalWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t Uid; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  int v10; // ecx
  uint32_t point_id; // ecx
  char v12; // al
  int32_t result; // eax
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 14 world_ptr:2451";
  *(_QWORD *)(v4 + 16) = TeleportWithCertainPortalWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v4 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      2454);
    Uid = Player::getUid(player);
    common::milog::MiLogStream::operator()(&v16, "my world nullptr for player[%u]", Uid);
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v8 = (unsigned __int64)std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(v8);
    v9 = *(_QWORD *)v8 + 72LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v8 = __asan_report_load8(*(_QWORD *)v8 + 72LL);
    v10 = (*(__int64 (__fastcall **)(unsigned __int64))v9)(v8);
    if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->scene_id);
    }
    if ( v10 != event->scene_id )
      goto LABEL_19;
    if ( *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->point_id);
    }
    point_id = event->point_id;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( point_id == param->point_id )
      v12 = 1;
    else
LABEL_19:
      v12 = 0;
    if ( v12 )
      BaseWatcher::addProgress(this, 1u);
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v4 + 32));
  result = 0;
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

// Line 2469: range 00000000149BB8E0-00000000149BB9E3
int32_t __cdecl CollectSetOfReadingsWatcher::tryUpdateProgressImpl(
        CollectSetOfReadingsWatcher *const this,
        Player *player,
        const CollectSetOfReadingsEvent *event,
        const CollectSetOfReadingsWatcherParam *param)
{
  uint32_t *p_set_id; // rdx
  uint32_t set_id; // ecx
  PlayerItemComp *ItemComp; // rcx

  p_set_id = &event->set_id;
  if ( *(_BYTE *)(((unsigned __int64)p_set_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_set_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_set_id);
  }
  set_id = event->set_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( set_id == param->set_id )
  {
    ItemComp = Player::getItemComp(player);
    if ( *(_BYTE *)(((unsigned __int64)&event->set_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->set_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->set_id);
    }
    if ( PlayerItemComp::isOnceGotAllItemsInSet(ItemComp, event->set_id) )
      BaseWatcher::tryCorrectProgress(this, 1u);
  }
  return 0;
};

// Line 2480: range 00000000149BB9E4-00000000149BBA6A
int32_t __cdecl CollectSetOfReadingsWatcher::refreshProgressImpl(
        CollectSetOfReadingsWatcher *const this,
        Player *player,
        const CollectSetOfReadingsWatcherParam *param)
{
  PlayerItemComp *ItemComp; // rcx

  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( PlayerItemComp::isOnceGotAllItemsInSet(ItemComp, param->set_id) )
    BaseWatcher::tryCorrectProgress(this, 1u);
  return 0;
};

// Line 2492: range 00000000149BBA6C-00000000149BBB20
int32_t __cdecl MpDungeonSucceedWatcher::tryUpdateProgressImpl(
        MpDungeonSucceedWatcher *const this,
        Player *player,
        const MpDungeonSucceedEvent *event,
        const MpDungeonSucceedWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( !param->dungeon_id )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->dungeon_id);
  }
  if ( event->dungeon_id == param->dungeon_id )
LABEL_7:
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2504: range 00000000149BBB22-00000000149BBBF1
int32_t __cdecl MpKillMonsterNumWatcher::tryUpdateProgressImpl(
        MpKillMonsterNumWatcher *const this,
        Player *player,
        const MpKillMonsterNumEvent *event,
        const MpKillMonsterNumWatcherParam *param)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->monster_type_id_set,
         &event->monster_type_id) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      2507);
    v4 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v7,
           (const char (*)[55])"MpKillMonsterNumWatcher add progress, monster_type_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->monster_type_id);
    common::milog::MiLogStream::~MiLogStream(&v7);
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2517: range 00000000149BBBF2-00000000149BBC3C
int32_t __cdecl MpAreaGatherTimesWatcher::tryUpdateProgressImpl(
        MpAreaGatherTimesWatcher *const this,
        Player *player,
        const MpAreaGatherTimesEvent *event,
        const MpAreaGatherTimesWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->area_id_set,
         &event->area_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2529: range 00000000149BBC3E-00000000149BBC73
int32_t __cdecl DoneTowerStarsWatcher::tryUpdateProgressImpl(
        DoneTowerStarsWatcher *const this,
        Player *player,
        const DoneTowerStarsEvent *event,
        const DoneTowerStarsWatcherParam *param)
{
  DoneTowerStarsWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 2534: range 00000000149BBC74-00000000149BBCCC
int32_t __cdecl DoneTowerStarsWatcher::refreshProgressImpl(
        DoneTowerStarsWatcher *const this,
        Player *player,
        const DoneTowerStarsWatcherParam *param)
{
  PlayerTowerComp *TowerComp; // rax
  uint32_t stars; // [rsp+2Ch] [rbp-4h]

  TowerComp = Player::getTowerComp(player);
  stars = PlayerTowerComp::queryTotalStarsOfEntrance(TowerComp);
  if ( stars > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, stars);
  return 0;
};

// Line 2547: range 00000000149BBCCE-00000000149BBE62
int32_t __cdecl DoneTowerUnhurtWatcher::tryUpdateProgressImpl(
        DoneTowerUnhurtWatcher *const this,
        Player *player,
        const DoneTowerUnhurtEvent *event,
        const DoneTowerUnhurtWatcherParam *param)
{
  uint32_t target_tower_floor_index; // ecx
  uint32_t target_tower_level_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( param->target_tower_floor_index )
  {
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    target_tower_floor_index = param->target_tower_floor_index;
    if ( *(_BYTE *)(((unsigned __int64)&event->floor_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->floor_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->floor_index);
    }
    if ( target_tower_floor_index == event->floor_index )
    {
      if ( *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&param->target_tower_level_index);
      }
      target_tower_level_index = param->target_tower_level_index;
      if ( *(_BYTE *)(((unsigned __int64)&event->level_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level_index >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->level_index);
      }
      if ( target_tower_level_index == event->level_index )
        BaseWatcher::addProgress(this, 1u);
    }
    return 0;
  }
  else
  {
    BaseWatcher::addProgress(this, 1u);
    return 0;
  }
};

// Line 2563: range 00000000149BBE64-00000000149BBFC6
int32_t __cdecl DoneTowerGadgetUnhurtWatcher::tryUpdateProgressImpl(
        DoneTowerGadgetUnhurtWatcher *const this,
        Player *player,
        const DoneTowerGadgetUnhurtEvent *event,
        const DoneTowerGadgetUnhurtWatcherParam *param)
{
  uint32_t target_tower_floor_index; // ecx
  uint32_t target_tower_level_index; // ecx

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &event->gadget_set,
         &param->target_gadget_id) )
  {
    return 0;
  }
  if ( *(_BYTE *)(((unsigned __int64)&param->target_tower_floor_index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_tower_floor_index >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&param->target_tower_floor_index);
  }
  target_tower_floor_index = param->target_tower_floor_index;
  if ( *(_BYTE *)(((unsigned __int64)&event->floor_index >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->floor_index >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->floor_index);
  }
  if ( target_tower_floor_index == event->floor_index )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->target_tower_level_index >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&param->target_tower_level_index);
    }
    target_tower_level_index = param->target_tower_level_index;
    if ( *(_BYTE *)(((unsigned __int64)&event->level_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->level_index);
    }
    if ( target_tower_level_index == event->level_index )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2578: range 00000000149BBFC8-00000000149BC1D5
int32_t __cdecl DoneDungeonWithSameElementAvatarsWatcher::tryUpdateProgressImpl(
        DoneDungeonWithSameElementAvatarsWatcher *const this,
        Player *player,
        const DoneDungeonWithSameElementAvatarsEvent *event,
        const DoneDungeonWithSameElementAvatarsWatcherParam *param)
{
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *v4; // rax
  uint32_t v5; // ecx
  uint32_t element_type_cnt; // r12d
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type v7; // ebx
  const char *v8; // rax
  std::unordered_map<data::ElementType,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-60h] BYREF
  std::unordered_map<data::ElementType,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-58h] BYREF
  const std::unordered_map<data::ElementType,unsigned int> *__for_range; // [rsp+30h] [rbp-50h]
  const std::pair<const data::ElementType,unsigned int> *v14; // [rsp+38h] [rbp-48h]
  std::tuple_element<0,const std::pair<const data::ElementType,unsigned int> >::type *element_type; // [rsp+40h] [rbp-40h]
  std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *cnt; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &event->element_count_map;
  __for_begin._M_cur = std::unordered_map<data::ElementType,unsigned int>::begin(&event->element_count_map)._M_cur;
  __for_end._M_cur = std::unordered_map<data::ElementType,unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<data::ElementType const,unsigned int>,false>(&__for_begin, &__for_end) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<data::ElementType const,unsigned int>,false,false>::operator*(&__for_begin);
    element_type = std::get<0ul,data::ElementType const,unsigned int>(v14);
    v4 = (std::tuple_element<1,const std::pair<const data::ElementType,unsigned int> >::type *)std::get<1ul,data::ElementType const,unsigned int>(v14);
    cnt = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    v5 = *cnt;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( v5 >= param->element_type_cnt )
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        2583);
      element_type_cnt = param->element_type_cnt;
      v7 = *cnt;
      if ( *(_BYTE *)(((unsigned __int64)element_type >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)element_type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)element_type >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(element_type);
      }
      v8 = data::enumValToStr(*element_type);
      common::milog::MiLogStream::operator()(&v17, "Element[%s] cnt[%u] >= config cnt[%u]", v8, v7, element_type_cnt);
      common::milog::MiLogStream::~MiLogStream(&v17);
      BaseWatcher::addProgress(this, 1u);
      return 0;
    }
    std::__detail::_Node_const_iterator<std::pair<data::ElementType const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 2594: range 00000000149BC1D6-00000000149BC205
int32_t __cdecl FlyWatcher::tryUpdateProgressImpl(
        FlyWatcher *const this,
        Player *player,
        const TimeIntervalFlyEvent *event,
        const FlyWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2602: range 00000000149BC206-00000000149BC235
int32_t __cdecl DashWatcher::tryUpdateProgressImpl(
        DashWatcher *const this,
        Player *player,
        const TimeIntervalDashEvent *event,
        const DashWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2609: range 00000000149BC236-00000000149BC265
int32_t __cdecl ClimbWatcher::tryUpdateProgressImpl(
        ClimbWatcher *const this,
        Player *player,
        const TimeIntervalClimbEvent *event,
        const ClimbWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2617: range 00000000149BC266-00000000149BC295
int32_t __cdecl CurAvatarHurtWatcher::tryUpdateProgressImpl(
        CurAvatarHurtWatcher *const this,
        Player *player,
        const TimeIntervalHurtEvent *event,
        const CurAvatarHurtWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2625: range 00000000149BC296-00000000149BC32D
int32_t __cdecl CurAvatarAbilityStateWatcher::tryUpdateProgressImpl(
        CurAvatarAbilityStateWatcher *const this,
        Player *player,
        const TimeIntervalAbilityStateEvent *event,
        const CurAvatarAbilityStateWatcherParam *param)
{
  data::AbilityState value; // [rsp+28h] [rbp-8h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  value = (unsigned __int64)param->ability_state;
  if ( common::tools::MiscUtils::isContains<std::set<data::AbilityState> const,data::AbilityState>(
         &event->ability_state_set,
         &value) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2637: range 00000000149BC32E-00000000149BC480
int32_t __cdecl GroupFlightChallengeReachPointsWatcher::tryUpdateProgressImpl(
        GroupFlightChallengeReachPointsWatcher *const this,
        Player *player,
        const GroupFlightChallengeReachPointsEvent *event,
        const GroupFlightChallengeReachPointsWatcherParam *param)
{
  uint32_t *p_group_id; // rdx
  uint32_t group_id; // ecx
  uint32_t total_points; // ebx
  GroupFlightChallengeReachPointsWatcher *v8; // rcx

  p_group_id = &event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_group_id);
  }
  group_id = event->group_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( group_id != param->group_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->total_points);
  }
  total_points = event->total_points;
  if ( total_points > BaseWatcher::getProgress(this) )
  {
    v8 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->total_points >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->total_points);
    }
    BaseWatcher::tryCorrectProgress(v8, event->total_points);
  }
  return 0;
};

// Line 2654: range 00000000149BC482-00000000149BC535
int32_t __cdecl FinishSpecifiedTypeBlossomWatcher::tryUpdateProgressImpl(
        FinishSpecifiedTypeBlossomWatcher *const this,
        Player *player,
        const FinishBlossomProgressEvent *event,
        const FinishSpecifiedTypeBlossomWatcherParam *param)
{
  uint32_t refresh_type; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->refresh_type);
  }
  refresh_type = event->refresh_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( refresh_type == param->refresh_type )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2666: range 00000000149BC536-00000000149BC8CC
int32_t __cdecl FinishBlossomGroupVariableGTWatcher::tryUpdateProgressImpl(
        FinishBlossomGroupVariableGTWatcher *const this,
        Player *player,
        const FinishBlossomProgressEvent *event,
        const FinishBlossomGroupVariableGTWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t refresh_type; // ecx
  Group *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  int32_t result; // eax
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 19 variable_value:2677 64 16 14 group_ptr:2671";
  *(_QWORD *)(v4 + 16) = FinishBlossomGroupVariableGTWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->refresh_type);
  }
  refresh_type = event->refresh_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( refresh_type == param->refresh_type )
  {
    std::weak_ptr<Group>::lock((const std::weak_ptr<Group> *const)(v4 + 64));
    if ( std::operator==<Group>(0LL, (const std::shared_ptr<Group> *)(v4 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v14,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        2674);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        &v14,
        (const char (*)[45])"FinishBlossomProgressEvent group_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v14);
    }
    else
    {
      *(_DWORD *)(v4 + 48) = 0;
      v8 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( Group::getVariableValue(v8, &param->variable_name, (int32_t *)(v4 + 48)) )
      {
        common::milog::MiLogStream::create(
          &v14,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/watcher.cpp",
          "tryUpdateProgressImpl",
          2680);
        v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
               &v14,
               (const char (*)[32])"getVariableValue failed, group:");
        v10 = std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Group,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        operator<<(v9, v10);
        common::milog::MiLogStream::~MiLogStream(&v14);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->variable_value >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&param->variable_value);
        }
        if ( param->variable_value <= *(_DWORD *)(v4 + 48) )
          BaseWatcher::addProgress(this, 1u);
      }
    }
    std::shared_ptr<Group>::~shared_ptr((std::shared_ptr<Group> *const)(v4 + 64));
  }
  result = 0;
  if ( v15 == (char *)v4 )
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

// Line 2695: range 00000000149BC8CE-00000000149BCA06
int32_t __cdecl CityReputationLevelWatcher::tryUpdateProgressImpl(
        CityReputationLevelWatcher *const this,
        Player *player,
        const CityReputationLevelup *event,
        const CityReputationLevelWatcherParam *param)
{
  uint32_t *p_city_id; // rdx
  uint32_t city_id; // ecx
  uint32_t level; // ecx

  p_city_id = &event->city_id;
  if ( *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_city_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_city_id);
  }
  city_id = event->city_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( city_id == param->city_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->level);
    }
    level = event->level;
    if ( *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->level);
    }
    if ( level >= param->level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2703: range 00000000149BCA08-00000000149BCC18
int32_t __cdecl CityReputationLevelWatcher::refreshProgressImpl(
        CityReputationLevelWatcher *const this,
        Player *player,
        const CityReputationLevelWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  PlayerReputationComp *ReputationComp; // rcx
  std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t Level; // ecx
  char v9; // al
  int32_t result; // eax
  char v12[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 24 city_reputation_ptr:2708";
  *(_QWORD *)(v3 + 16) = CityReputationLevelWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( !BaseWatcher::getProgress(this) )
  {
    ReputationComp = Player::getReputationComp(player);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    PlayerReputationComp::findCityReputationPtr(
      (PlayerReputationComp *const)(v3 + 32),
      (__int64)ReputationComp,
      param->city_id);
    if ( !std::operator!=<CityReputation>((const std::shared_ptr<CityReputation> *)(v3 + 32), 0LL) )
      goto LABEL_12;
    v7 = std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<CityReputation,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Level = CityReputation::getLevel(v7);
    if ( *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->level);
    }
    if ( Level >= param->level )
      v9 = 1;
    else
LABEL_12:
      v9 = 0;
    if ( v9 )
      BaseWatcher::addProgress(this, 1u);
    std::shared_ptr<CityReputation>::~shared_ptr((std::shared_ptr<CityReputation> *const)(v3 + 32));
  }
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

// Line 2720: range 00000000149BCC1A-00000000149BCED5
int32_t __cdecl CityReputationFinishRequestWatcher::tryUpdateProgressImpl(
        CityReputationFinishRequestWatcher *const this,
        Player *player,
        const CityReputationFinishRequest *event,
        const CityReputationFinishRequestWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  const data::ReputationExcelConfigMgrBase *v7; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  ReputationExcelConfigMgr *reputation_config_mgr; // [rsp+20h] [rbp-A0h]
  const data::ReputationRequestExcelConfig *request_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v16; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v17; // [rsp+40h] [rbp-80h] BYREF
  char v18[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 city_id:2730";
  *(_QWORD *)(v4 + 16) = CityReputationFinishRequestWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( std::unordered_set<unsigned int>::empty(&param->city_id_set) )
    goto LABEL_11;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  reputation_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16)->design_config.txt_config_mgr.reputation_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v16);
  v7 = reputation_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->request_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->request_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->request_id);
  }
  request_config_ptr = data::ReputationExcelConfigMgrBase::findReputationRequestExcelConfig(v7, event->request_id);
  if ( !request_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      2727);
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           &v17,
           (const char (*)[40])"findReputationRequestExcelConfig fails:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->request_id);
    v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" player:");
    operator<<(v10, player);
    common::milog::MiLogStream::~MiLogStream(&v17);
    result = 0;
    goto LABEL_12;
  }
  *(_DWORD *)(v4 + 32) = common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,unsigned int>>(
                           &reputation_config_mgr->group_2_city_map,
                           &request_config_ptr->group_id,
                           0);
  if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->city_id_set,
          (const unsigned int *)(v4 + 32)) )
  {
    result = 0;
  }
  else
  {
LABEL_11:
    BaseWatcher::addProgress(this, 1u);
    result = 0;
  }
LABEL_12:
  if ( v18 == (char *)v4 )
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

// Line 2744: range 00000000149BCED6-00000000149BD063
bool __cdecl BattleForMonsterDieAndWatcher::isAllFinised(
        BattleForMonsterDieAndWatcher *const this,
        const BattleForMonsterDieAndWatcherParam *param)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v5; // rax
  _DWORD *v6; // rdx
  bool result; // al
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+28h] [rbp-68h]
  char v11[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 15 monster_id:2745";
  *(_QWORD *)(v2 + 16) = BattleForMonsterDieAndWatcher::isAllFinised;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  __for_range = &param->monster_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->monster_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->monster_id_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v5 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    *(_DWORD *)(v2 + 32) = *v6;
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,int>,unsigned int>(
            &this->var_map_,
            (const unsigned int *)(v2 + 32)) )
    {
      result = 0;
      goto LABEL_12;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  result = 1;
LABEL_12:
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

// Line 2755: range 00000000149BD064-00000000149BD0EB
int32_t __cdecl BattleForMonsterDieAndWatcher::tryUpdateProgressImpl(
        BattleForMonsterDieAndWatcher *const this,
        Player *player,
        const MonsterBeKilledByHateListEvent *event,
        const BattleForMonsterDieAndWatcherParam *param)
{
  int *v4; // r8
  int v8; // [rsp+2Ch] [rbp-4h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->monster_id_set,
         &event->monster_id) )
  {
    v8 = 0;
    std::unordered_map<unsigned int,int>::emplace<unsigned int const&,int>(
      &this->var_map_,
      &event->monster_id,
      &v8,
      (const unsigned int *)&this->var_map_,
      v4);
  }
  if ( BattleForMonsterDieAndWatcher::isAllFinised(this, param) )
    BaseWatcher::tryCorrectProgress(this, 1u);
  return 0;
};

// Line 2771: range 00000000149BD0EC-00000000149BD136
int32_t __cdecl BattleForMonsterDieOrWatcher::tryUpdateProgressImpl(
        BattleForMonsterDieOrWatcher *const this,
        Player *player,
        const MonsterBeKilledByHateListEvent *event,
        const BattleForMonsterDieOrWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->monster_id_set,
         &event->monster_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2784: range 00000000149BD138-00000000149BD297
int32_t __cdecl UseEnergySkillNumTimeLimitWatcher::tryUpdateProgressImpl(
        UseEnergySkillNumTimeLimitWatcher *const this,
        Player *player,
        const SkillStatUpdateEvent *event,
        const UseEnergySkillNumTimeLimitWatcherParam *param)
{
  PlayerWatcherComp *WatcherComp; // rax
  const SkillStatCollector *SkillStatCollector; // rax
  uint32_t use_energy_skill_num; // ebx
  PlayerWatcherComp *v8; // rax
  const SkillStatCollector *v9; // rax
  uint64_t time_ms; // [rsp+28h] [rbp-18h]

  WatcherComp = Player::getWatcherComp(player);
  SkillStatCollector = PlayerWatcherComp::getSkillStatCollector(WatcherComp);
  time_ms = SkillStatCollector::getTailTimeMs(SkillStatCollector);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->last_time_ms_);
  if ( time_ms < this->last_time_ms_ + 15000 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  use_energy_skill_num = param->use_energy_skill_num;
  v8 = Player::getWatcherComp(player);
  v9 = PlayerWatcherComp::getSkillStatCollector(v8);
  if ( *(_BYTE *)(((unsigned __int64)&v9->total_energy_skill_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&v9->total_energy_skill_num >> 3) + 0x7FFF8000) <= 3 )
  {
    v9 = (const SkillStatCollector *)__asan_report_load4(&v9->total_energy_skill_num);
  }
  if ( use_energy_skill_num > v9->total_energy_skill_num )
    return 0;
  BaseWatcher::addProgress(this, 1u);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_time_ms_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->last_time_ms_, 1LL);
  this->last_time_ms_ = time_ms;
  return 0;
};

// Line 2804: range 00000000149BD298-00000000149BD34A
int32_t __cdecl ShieldSourceNumWatcher::tryUpdateProgressImpl(
        ShieldSourceNumWatcher *const this,
        Player *player,
        const ShieldSourceNumUpdateEvent *event,
        const ShieldSourceNumWatcherParam *param)
{
  uint32_t *p_source_num; // rdx
  uint32_t source_num; // ecx

  p_source_num = &event->source_num;
  if ( *(_BYTE *)(((unsigned __int64)p_source_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_source_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_source_num);
  }
  source_num = event->source_num;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( source_num >= param->source_num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2817: range 00000000149BD34C-00000000149BD484
int32_t __cdecl SpecifiedWeaponAwakenWatcher::tryUpdateProgressImpl(
        SpecifiedWeaponAwakenWatcher *const this,
        Player *player,
        const WeaponAwakenEvent *event,
        const SpecifiedWeaponAwakenWatcherParam *param)
{
  uint32_t *p_weapon_id; // rdx
  uint32_t weapon_id; // ecx
  uint32_t cur_awaken_level; // ecx

  p_weapon_id = &event->weapon_id;
  if ( *(_BYTE *)(((unsigned __int64)p_weapon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_weapon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_weapon_id);
  }
  weapon_id = event->weapon_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( weapon_id == param->weapon_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_awaken_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cur_awaken_level >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&event->cur_awaken_level);
    }
    cur_awaken_level = event->cur_awaken_level;
    if ( *(_BYTE *)(((unsigned __int64)&param->awaken_level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->awaken_level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->awaken_level);
    }
    if ( cur_awaken_level >= param->awaken_level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2825: range 00000000149BD486-00000000149BD8D3
int32_t __cdecl SpecifiedWeaponAwakenWatcher::refreshProgressImpl(
        SpecifiedWeaponAwakenWatcher *const this,
        Player *player,
        const SpecifiedWeaponAwakenWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  PlayerItemComp *ItemComp; // rcx
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  unsigned __int64 v10; // rax
  PlayerItemComp *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r14d
  std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  uint32_t AwakenLevel; // ecx
  std::set<long unsigned int>::iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::set<long unsigned int>::iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  std::set<long unsigned int> *weapon_guid_set_ptr; // [rsp+30h] [rbp-C0h]
  std::set<long unsigned int> *__for_range; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v21; // [rsp+40h] [rbp-B0h] BYREF
  char v22[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 9 guid:2832 64 16 15 weapon_ptr:2834";
  *(_QWORD *)(v3 + 16) = SpecifiedWeaponAwakenWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  ItemComp = Player::getItemComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  weapon_guid_set_ptr = PlayerItemComp::getItmeGuidSetInPack(ItemComp, param->weapon_id);
  if ( !weapon_guid_set_ptr || !std::set<unsigned long>::size(weapon_guid_set_ptr) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "refreshProgressImpl",
      2829);
    v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v21,
           (const char (*)[55])"[DRAGON_SPINE] cannot find weapon in pack, weapon_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)param);
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0;
  }
  else
  {
    __for_range = weapon_guid_set_ptr;
    __for_begin._M_node = std::set<unsigned long>::begin(weapon_guid_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned long>::end(weapon_guid_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = (unsigned __int64)std::_Rb_tree_const_iterator<unsigned long>::operator*(&__for_begin);
      if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
        v10 = __asan_report_load8(v10);
      *(_QWORD *)(v3 + 32) = *(_QWORD *)v10;
      v11 = Player::getItemComp(player);
      PlayerItemComp::findItemInPack<Weapon>((PlayerItemComp *const)(v3 + 64), (uint64_t)v11);
      if ( std::operator==<Weapon>(0LL, (const std::shared_ptr<Weapon> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/watcher/watcher.cpp",
          "refreshProgressImpl",
          2837);
        v12 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v21,
                (const char (*)[49])"[DRAGON_SPINE] cannot find weapon, weapon_guid: ");
        common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
          v12,
          (const unsigned __int64 *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream(&v21);
        v13 = 0;
      }
      else
      {
        v14 = std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Weapon,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        AwakenLevel = Weapon::getAwakenLevel(v14);
        if ( *(_BYTE *)(((unsigned __int64)&param->awaken_level >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->awaken_level >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&param->awaken_level);
        }
        if ( AwakenLevel < param->awaken_level )
        {
          v13 = 2;
        }
        else
        {
          BaseWatcher::addProgress(this, 1u);
          v13 = 1;
        }
      }
      std::shared_ptr<Weapon>::~shared_ptr((std::shared_ptr<Weapon> *const)(v3 + 64));
      if ( v13 )
      {
        if ( v13 != 2 )
          break;
      }
      std::_Rb_tree_const_iterator<unsigned long>::operator++(&__for_begin);
    }
    result = 0;
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
  return result;
};

// Line 2853: range 00000000149BD8D4-00000000149BD94D
int32_t __cdecl TowerStarsNumWatcher::tryUpdateProgressImpl(
        TowerStarsNumWatcher *const this,
        Player *player,
        const DoneTowerStarsEvent *event,
        const TowerStarsNumWatcherParam *param)
{
  if ( *(_BYTE *)(((unsigned __int64)&event->star_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->star_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->star_num);
  }
  if ( event->star_num )
    BaseWatcher::addProgress(this, event->star_num);
  return 0;
};

// Line 2865: range 00000000149BD94E-00000000149BDB0F
int32_t __cdecl FinishSpecifiedTypeBlossomClimateMeterWatcher::tryUpdateProgressImpl(
        FinishSpecifiedTypeBlossomClimateMeterWatcher *const this,
        Player *player,
        const FinishBlossomProgressEvent *event,
        const FinishSpecifiedTypeBlossomClimateMeterWatcherParam *param)
{
  uint32_t refresh_type; // ecx
  PlayerBasicComp *BasicComp; // rax
  data::JsonClimateType CurJsonClimateType; // ecx
  PlayerBasicComp *v8; // rax
  float CurClimateMeter; // xmm1_4

  if ( *(_BYTE *)(((unsigned __int64)&event->refresh_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->refresh_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->refresh_type);
  }
  refresh_type = event->refresh_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( refresh_type != param->refresh_type )
    return 0;
  BasicComp = Player::getBasicComp(player);
  CurJsonClimateType = PlayerBasicComp::getCurJsonClimateType(BasicComp);
  if ( *(_BYTE *)(((unsigned __int64)&param->climate_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->climate_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->climate_type);
  }
  if ( CurJsonClimateType == param->climate_type )
  {
    v8 = Player::getBasicComp(player);
    CurClimateMeter = PlayerBasicComp::getCurClimateMeter(v8);
    if ( *(_BYTE *)(((unsigned __int64)&param->climate_meter >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->climate_meter >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->climate_meter);
    }
    if ( (float)(int)param->climate_meter > CurClimateMeter )
      BaseWatcher::addProgress(this, 1u);
    return 0;
  }
  else
  {
    BaseWatcher::addProgress(this, 1u);
    return 0;
  }
};

// Line 2887: range 00000000149BDB10-00000000149BDC48
int32_t __cdecl OfferingLevelWatcher::tryUpdateProgressImpl(
        OfferingLevelWatcher *const this,
        Player *player,
        const OfferingLevelupEvent *event,
        const OfferingLevelWatcherParam *param)
{
  uint32_t *p_offering_id; // rdx
  uint32_t offering_id; // ecx
  uint32_t level; // ecx

  p_offering_id = &event->offering_id;
  if ( *(_BYTE *)(((unsigned __int64)p_offering_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_offering_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_offering_id);
  }
  offering_id = event->offering_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( offering_id == param->offering_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->level);
    }
    level = event->level;
    if ( *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->level);
    }
    if ( level >= param->level )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2895: range 00000000149BDC4A-00000000149BDD39
int32_t __cdecl OfferingLevelWatcher::refreshProgressImpl(
        OfferingLevelWatcher *const this,
        Player *player,
        const OfferingLevelWatcherParam *param)
{
  PlayerOfferingComp *OfferingComp; // rcx
  uint32_t OfferingLevel; // ecx

  if ( BaseWatcher::getProgress(this) )
    return 0;
  OfferingComp = Player::getOfferingComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  OfferingLevel = PlayerOfferingComp::findOfferingLevel(OfferingComp, param->offering_id);
  if ( *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->level);
  }
  if ( OfferingLevel >= param->level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2911: range 00000000149BDD3A-00000000149BDD6A
int32_t __cdecl UnlockSpecificRecipeOrWatcher::tryUpdateProgressImpl(
        UnlockSpecificRecipeOrWatcher *const this,
        Player *player,
        const UnlockRecipeEvent *event,
        const UnlockSpecificRecipeOrWatcherParam *param)
{
  return UnlockSpecificRecipeOrWatcher::refreshProgressImpl(this, player, param);
};

// Line 2915: range 00000000149BDD6C-00000000149BDE61
int32_t __cdecl UnlockSpecificRecipeOrWatcher::refreshProgressImpl(
        UnlockSpecificRecipeOrWatcher *const this,
        Player *player,
        const UnlockSpecificRecipeOrWatcherParam *param)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rdx
  PlayerCookComp *CookComp; // rax
  uint32_t count; // [rsp+20h] [rbp-20h]
  unsigned int id; // [rsp+24h] [rbp-1Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  count = 0;
  __for_range = &param->recipe_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->recipe_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v3 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    id = *v4;
    CookComp = Player::getCookComp(player);
    if ( PlayerCookComp::isRecipeUnlocked(CookComp, id) )
      ++count;
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  BaseWatcher::tryCorrectProgress(this, count);
  return 0;
};

// Line 2932: range 00000000149BDE62-00000000149BDF15
int32_t __cdecl CurAvatarHurtBySpecificAbilityWatcher::tryUpdateProgressImpl(
        CurAvatarHurtBySpecificAbilityWatcher *const this,
        Player *player,
        const TimeIntervalHurtByAbilityEvent *event,
        const CurAvatarHurtBySpecificAbilityWatcherParam *param)
{
  PlayerWatcherComp *WatcherComp; // rax
  std::unordered_set<std::string>::iterator __for_begin; // [rsp+20h] [rbp-20h] BYREF
  std::unordered_set<std::string>::iterator __for_end; // [rsp+28h] [rbp-18h] BYREF
  std::unordered_set<std::string> *__for_range; // [rsp+30h] [rbp-10h]
  const std::string *name; // [rsp+38h] [rbp-8h]

  WatcherComp = Player::getWatcherComp(player);
  __for_range = PlayerWatcherComp::getHurtAbilityNameSet[abi:cxx11](WatcherComp);
  __for_begin._M_cur = std::unordered_set<std::string>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_set<std::string>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::string,true>(&__for_begin, &__for_end) )
  {
    name = std::__detail::_Node_iterator<std::string,true,true>::operator*(&__for_begin);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>(
           &param->ability_name_set,
           name) )
    {
      BaseWatcher::addProgress(this, 1u);
    }
    std::__detail::_Node_iterator<std::string,true,true>::operator++(&__for_begin);
  }
  return 0;
};

// Line 2947: range 00000000149BDF16-00000000149BDF60
int32_t __cdecl KilledBySpecificAbilityWatcher::tryUpdateProgressImpl(
        KilledBySpecificAbilityWatcher *const this,
        Player *player,
        const KilledBySpecificAbilityEvent *event,
        const KilledBySpecificAbilityWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>(
         &param->ability_name_set,
         &event->ability_name) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 2959: range 00000000149BDF62-00000000149BDF91
int32_t __cdecl MiracleRingDeliverItemWatcher::tryUpdateProgressImpl(
        MiracleRingDeliverItemWatcher *const this,
        Player *player,
        const MiracleRingDeliverItemEvent *event,
        const MiracleRingDeliverItemWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2967: range 00000000149BDF92-00000000149BDFC1
int32_t __cdecl MiracleRingTakeRewardWatcher::tryUpdateProgressImpl(
        MiracleRingTakeRewardWatcher *const this,
        Player *player,
        const MiracleRingTakeRewardEvent *event,
        const MiracleRingTakeRewardWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 2974: range 00000000149BDFC2-00000000149BE002
bool __cdecl MainCoopSavePointAndWatcher::isAllFinished(
        MainCoopSavePointAndWatcher *const this,
        const MainCoopSavePointAndWatcherParam *param)
{
  std::unordered_set<unsigned int>::size_type v2; // rbx

  v2 = std::unordered_set<unsigned int>::size(&param->save_point_set);
  return v2 == std::unordered_map<unsigned int,int>::size(&this->var_map_);
};

// Line 2978: range 00000000149BE004-00000000149BE273
int32_t __cdecl MainCoopSavePointAndWatcher::tryUpdateProgressImpl(
        MainCoopSavePointAndWatcher *const this,
        Player *player,
        const MainCoopSavePointAndEvent *event,
        const MainCoopSavePointAndWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t main_coop_id; // ecx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  int *v10; // r8
  int32_t result; // eax
  int v14; // [rsp+24h] [rbp-7Ch] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v18[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 18 save_point_id:2981";
  *(_QWORD *)(v4 + 16) = MainCoopSavePointAndWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->main_coop_id);
  }
  main_coop_id = event->main_coop_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( main_coop_id == param->main_coop_id )
  {
    __for_range = &event->save_point_vec;
    __for_begin._M_current = std::vector<unsigned int>::begin(&event->save_point_vec)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&event->save_point_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v4 + 32) = *v9;
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &param->save_point_set,
             (const unsigned int *)(v4 + 32)) )
      {
        v14 = 0;
        std::unordered_map<unsigned int,int>::emplace<unsigned int &,int>(
          &this->var_map_,
          (unsigned int *)(v4 + 32),
          &v14,
          (unsigned int *)&this->var_map_,
          v10);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    if ( MainCoopSavePointAndWatcher::isAllFinished(this, param) )
      BaseWatcher::addProgress(this, 1u);
  }
  result = 0;
  if ( v18 == (char *)v4 )
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

// Line 2998: range 00000000149BE274-00000000149BE4A8
int32_t __cdecl MainCoopSavePointOrWatcher::tryUpdateProgressImpl(
        MainCoopSavePointOrWatcher *const this,
        Player *player,
        const MainCoopSavePointOrEvent *event,
        const MainCoopSavePointOrWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  uint32_t main_coop_id; // ecx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v8; // rax
  _DWORD *v9; // rdx
  int32_t result; // eax
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-78h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-70h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-68h]
  char v16[96]; // [rsp+40h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 18 save_point_id:3001";
  *(_QWORD *)(v4 + 16) = MainCoopSavePointOrWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->main_coop_id);
  }
  main_coop_id = event->main_coop_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( main_coop_id == param->main_coop_id )
  {
    __for_range = &param->save_point_set;
    __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->save_point_set)._M_cur;
    __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->save_point_set)._M_cur;
    while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
    {
      v8 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v4 + 32) = *v9;
      if ( common::tools::MiscUtils::isContains<unsigned int>(&event->save_point_vec, (const unsigned int *)(v4 + 32)) )
      {
        BaseWatcher::addProgress(this, 1u);
        result = 0;
        goto LABEL_17;
      }
      std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
    }
  }
  result = 0;
LABEL_17:
  if ( v16 == (char *)v4 )
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

// Line 3015: range 00000000149BE4AA-00000000149BE667
int32_t __cdecl MainCoopVarEqualWatcher::tryUpdateProgressImpl(
        MainCoopVarEqualWatcher *const this,
        Player *player,
        const MainCoopVarEqualEvent *event,
        const MainCoopVarEqualWatcherParam *param)
{
  uint32_t *p_main_coop_id; // rdx
  uint32_t main_coop_id; // ecx
  uint32_t var_key; // ecx
  int32_t var_value; // ecx

  p_main_coop_id = &event->main_coop_id;
  if ( *(_BYTE *)(((unsigned __int64)p_main_coop_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_main_coop_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_main_coop_id);
  }
  main_coop_id = event->main_coop_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( main_coop_id == param->main_coop_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->var_key >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->var_key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->var_key);
    }
    var_key = event->var_key;
    if ( *(_BYTE *)(((unsigned __int64)&param->var_key >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->var_key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->var_key);
    }
    if ( var_key == param->var_key )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->var_value >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->var_value >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->var_value);
      }
      var_value = event->var_value;
      if ( *(_BYTE *)(((unsigned __int64)&param->var_value >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->var_value >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->var_value);
      }
      if ( var_value == param->var_value )
        BaseWatcher::addProgress(this, 1u);
    }
  }
  return 0;
};

// Line 3025: range 00000000149BE668-00000000149BE6C0
int32_t __cdecl ObtainWoodTypeWatcher::refreshProgressImpl(
        ObtainWoodTypeWatcher *const this,
        Player *player,
        const ObtainWoodTypeWatcherParam *param)
{
  PlayerSceneComp *SceneComp; // rax
  uint32_t obtained_wood_type_num; // [rsp+2Ch] [rbp-4h]

  SceneComp = Player::getSceneComp(player);
  obtained_wood_type_num = PlayerSceneComp::getObtainedWoodTypeNum(SceneComp);
  if ( obtained_wood_type_num != BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, obtained_wood_type_num);
  return 0;
};

// Line 3034: range 00000000149BE6C2-00000000149BE6F2
int32_t __cdecl ObtainWoodTypeWatcher::tryUpdateProgressImpl(
        ObtainWoodTypeWatcher *const this,
        Player *player,
        const ObtainWoodEvent *event,
        const ObtainWoodTypeWatcherParam *param)
{
  return ObtainWoodTypeWatcher::refreshProgressImpl(this, player, param);
};

// Line 3040: range 00000000149BE6F4-00000000149BE75B
int32_t __cdecl ObtainWoodWatcher::tryUpdateProgressImpl(
        ObtainWoodWatcher *const this,
        Player *player,
        const ObtainWoodEvent *event,
        const ObtainWoodWatcherParam *param)
{
  ObtainWoodWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->count);
  }
  BaseWatcher::addProgress(v4, event->count);
  return 0;
};

// Line 3047: range 00000000149BE75C-00000000149BEBA5
int32_t __cdecl FinishDungeonAndChallengeRemainTimeGreaterWatcher::tryUpdateProgressImpl(
        FinishDungeonAndChallengeRemainTimeGreaterWatcher *const this,
        Player *player,
        const FinishDungeonEvent *event,
        const FinishDungeonAndChallengeRemainTimeGreaterWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t dungeon_id; // ecx
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t DungeonId; // ecx
  char v10; // al
  std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-B0h] BYREF
  char v19[144]; // [rsp+40h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 left_time:3058 64 16 14 scene_ptr:3052";
  *(_QWORD *)(v4 + 16) = FinishDungeonAndChallengeRemainTimeGreaterWatcher::tryUpdateProgressImpl;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->dungeon_id);
  }
  dungeon_id = event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( dungeon_id == param->dungeon_id )
  {
    Player::getDungeonComp(player);
    PlayerDungeonComp::getCurDungeon((PlayerDungeonComp *const)(v4 + 64));
    if ( std::operator==<DungeonScene>(0LL, (const std::shared_ptr<DungeonScene> *)(v4 + 64)) )
      goto LABEL_13;
    v8 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    DungeonId = DungeonScene::getDungeonId(v8);
    if ( *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->dungeon_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->dungeon_id);
    }
    if ( DungeonId == event->dungeon_id )
      v10 = 0;
    else
LABEL_13:
      v10 = 1;
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        3055);
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v18, (const char (*)[25])off_2552A200);
      common::milog::MiLogStream::~MiLogStream(&v18);
    }
    else
    {
      *(_DWORD *)(v4 + 48) = 0;
      v11 = std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<DungeonScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&param->challenge_index);
      }
      DungeonScene::getChallengeLeftTime(v11, param->challenge_index, (uint32_t *)(v4 + 48));
      common::milog::MiLogStream::create(
        &v18,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        3060);
      v12 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
              &v18,
              (const char (*)[80])"[MIST_TRIAL] FinishDungeonAndChallengeRemainTimeGreaterWatcher challenge_index:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &param->challenge_index);
      v14 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v13, (const char (*)[12])" left_time:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v18);
      if ( *(_BYTE *)(((unsigned __int64)&param->remain_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->remain_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&param->remain_time);
      }
      if ( param->remain_time <= *(_DWORD *)(v4 + 48) )
        BaseWatcher::addProgress(this, 1u);
    }
    std::shared_ptr<DungeonScene>::~shared_ptr((std::shared_ptr<DungeonScene> *const)(v4 + 64));
  }
  result = 0;
  if ( v19 == (char *)v4 )
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

// Line 3070: range 00000000149BEBA6-00000000149BECE4
int32_t __cdecl ActivityChannellerSlabFinishAllCampWatcher::tryUpdateProgressImpl(
        ActivityChannellerSlabFinishAllCampWatcher *const this,
        Player *player,
        const ActivityChannellerSlabFinishAllCampEvent *event,
        const ActivityChannellerSlabFinishAllCampWatcherParam *param)
{
  uint32_t schedule_id; // ecx
  uint32_t activity_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->schedule_id);
  }
  schedule_id = event->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->schedule_id);
  }
  if ( schedule_id == param->schedule_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->activity_id);
    }
    activity_id = event->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( activity_id == param->activity_id )
      ActivityChannellerSlabFinishAllCampWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 3079: range 00000000149BECE6-00000000149BEE33
int32_t __cdecl ActivityChannellerSlabFinishAllCampWatcher::refreshProgressImpl(
        ActivityChannellerSlabFinishAllCampWatcher *const this,
        Player *player,
        const ActivityChannellerSlabFinishAllCampWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isFinishAllCamp; // al
  int32_t result; // eax
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:3080";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabFinishAllCampWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isFinishAllCamp = ChannellerSlabActivity::isFinishAllCamp(v6);
    BaseWatcher::tryCorrectProgress(this, isFinishAllCamp);
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v3 + 32));
  result = 0;
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

// Line 3090: range 00000000149BEE34-00000000149BEF72
int32_t __cdecl ActivityChannellerSlabFinishAllOneoffDungeonWatcher::tryUpdateProgressImpl(
        ActivityChannellerSlabFinishAllOneoffDungeonWatcher *const this,
        Player *player,
        const ActivityChannellerSlabFinishAllOneoffDungeonEvent *event,
        const ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam *param)
{
  uint32_t schedule_id; // ecx
  uint32_t activity_id; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->schedule_id);
  }
  schedule_id = event->schedule_id;
  if ( *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->schedule_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->schedule_id);
  }
  if ( schedule_id == param->schedule_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->activity_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->activity_id);
    }
    activity_id = event->activity_id;
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(param);
    }
    if ( activity_id == param->activity_id )
      ActivityChannellerSlabFinishAllOneoffDungeonWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 3099: range 00000000149BEF74-00000000149BF0C1
int32_t __cdecl ActivityChannellerSlabFinishAllOneoffDungeonWatcher::refreshProgressImpl(
        ActivityChannellerSlabFinishAllOneoffDungeonWatcher *const this,
        Player *player,
        const ActivityChannellerSlabFinishAllOneoffDungeonWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool isFinishAllOneoffDungeon; // al
  int32_t result; // eax
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 17 activity_ptr:3100";
  *(_QWORD *)(v3 + 16) = ActivityChannellerSlabFinishAllOneoffDungeonWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getActivityComp(player);
  PlayerActivityComp::findOpenningActivity<ChannellerSlabActivity>((PlayerActivityComp *const)(v3 + 32));
  if ( std::operator!=<ChannellerSlabActivity>(0LL, (const std::shared_ptr<ChannellerSlabActivity> *)(v3 + 32)) )
  {
    v6 = std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ChannellerSlabActivity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    isFinishAllOneoffDungeon = ChannellerSlabActivity::isFinishAllOneoffDungeon(v6);
    BaseWatcher::tryCorrectProgress(this, isFinishAllOneoffDungeon);
  }
  std::shared_ptr<ChannellerSlabActivity>::~shared_ptr((std::shared_ptr<ChannellerSlabActivity> *const)(v3 + 32));
  result = 0;
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

// Line 3110: range 00000000149BF0C2-00000000149BF0F7
int32_t __cdecl HomeUnlockFurnitureWatcher::tryUpdateProgressImpl(
        HomeUnlockFurnitureWatcher *const this,
        Player *player,
        const UnlockFurnitureEvent *event,
        const HomeUnlockFurnitureWatcherParam *param)
{
  HomeUnlockFurnitureWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 3116: range 00000000149BF0F8-00000000149BF166
int32_t __cdecl HomeUnlockFurnitureWatcher::refreshProgressImpl(
        HomeUnlockFurnitureWatcher *const this,
        Player *player,
        const HomeUnlockFurnitureWatcherParam *param)
{
  PlayerHomeComp *HomeComp; // rax
  uint32_t Progress; // eax
  uint32_t unlock_count; // [rsp+2Ch] [rbp-14h]

  HomeComp = Player::getHomeComp(player);
  unlock_count = PlayerHomeComp::getUnlockFurnitureFormulaCount(HomeComp);
  if ( unlock_count > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, unlock_count - Progress);
  }
  return 0;
};

// Line 3127: range 00000000149BF168-00000000149BF197
int32_t __cdecl HomeFurnitureMakeWatcher::tryUpdateProgressImpl(
        HomeFurnitureMakeWatcher *const this,
        Player *player,
        const FurnitureMakeEvent *event,
        const HomeFurnitureMakeWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3135: range 00000000149BF198-00000000149BF243
int32_t __cdecl HomeLevelWatcher::tryUpdateProgressImpl(
        HomeLevelWatcher *const this,
        Player *player,
        const HomeLevelEvent *event,
        const HomeLevelWatcherParam *param)
{
  uint32_t *p_level; // rdx
  uint32_t level; // ecx

  p_level = &event->level;
  if ( *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_level);
  }
  level = event->level;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( level >= param->level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3144: range 00000000149BF244-00000000149BF2CC
int32_t __cdecl HomeLevelWatcher::refreshProgressImpl(
        HomeLevelWatcher *const this,
        Player *player,
        const HomeLevelWatcherParam *param)
{
  PlayerHomeComp *HomeComp; // rax
  uint32_t HomeLevel; // ecx

  HomeComp = Player::getHomeComp(player);
  HomeLevel = PlayerHomeComp::getHomeLevel(HomeComp);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( HomeLevel >= param->level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3155: range 00000000149BF2CE-00000000149BF335
int32_t __cdecl HomeCoinWatcher::tryUpdateProgressImpl(
        HomeCoinWatcher *const this,
        Player *player,
        const HomeCoinEvent *event,
        const HomeCoinWatcherParam *param)
{
  HomeCoinWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->count);
  }
  BaseWatcher::addProgress(v4, event->count);
  return 0;
};

// Line 3162: range 00000000149BF336-00000000149BF36B
int32_t __cdecl HomeComfortLevelWatcher::tryUpdateProgressImpl(
        HomeComfortLevelWatcher *const this,
        Player *player,
        const HomeArrangementFurnitureEvent *event,
        const HomeComfortLevelWatcherParam *param)
{
  HomeComfortLevelWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 3168: range 00000000149BF36C-00000000149BF3F0
int32_t __cdecl HomeComfortLevelWatcher::refreshProgressImpl(
        HomeComfortLevelWatcher *const this,
        Player *player,
        const HomeComfortLevelWatcherParam *param)
{
  PlayerHomeComp *HomeComp; // rax
  uint32_t comfort_level; // [rsp+2Ch] [rbp-4h]

  HomeComp = Player::getHomeComp(player);
  comfort_level = PlayerHomeComp::getHomeComfortLevel(HomeComp);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( comfort_level >= param->level )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3180: range 00000000149BF3F2-00000000149BF4B3
int32_t __cdecl HomeLimitedShopBuyWatcher::tryUpdateProgressImpl(
        HomeLimitedShopBuyWatcher *const this,
        Player *player,
        const HomeLimitedShopBuyEvent *event,
        const HomeLimitedShopBuyWatcherParam *param)
{
  uint32_t Uid; // ecx
  HomeLimitedShopBuyWatcher *v5; // rcx

  Uid = Player::getUid(player);
  if ( *(_BYTE *)(((unsigned __int64)&event->home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->home_uid);
  }
  if ( Uid != event->home_uid )
  {
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->buy_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->buy_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->buy_count);
    }
    BaseWatcher::addProgress(v5, event->buy_count);
  }
  return 0;
};

// Line 3190: range 00000000149BF4B4-00000000149BF4E9
int32_t __cdecl HomeFurnitureSuiteTypeWatcher::tryUpdateProgressImpl(
        HomeFurnitureSuiteTypeWatcher *const this,
        Player *player,
        const HomeArrangementFurnitureEvent *event,
        const HomeFurnitureSuiteTypeWatcherParam *param)
{
  HomeFurnitureSuiteTypeWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 3196: range 00000000149BF4EA-00000000149BF558
int32_t __cdecl HomeFurnitureSuiteTypeWatcher::refreshProgressImpl(
        HomeFurnitureSuiteTypeWatcher *const this,
        Player *player,
        const HomeFurnitureSuiteTypeWatcherParam *param)
{
  PlayerHomeComp *HomeComp; // rax
  uint32_t Progress; // eax
  uint32_t count; // [rsp+2Ch] [rbp-14h]

  HomeComp = Player::getHomeComp(player);
  count = PlayerHomeComp::getArrangementFurnitureSuiteCount(HomeComp);
  if ( count > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, count - Progress);
  }
  return 0;
};

// Line 3207: range 00000000149BF55A-00000000149BF58F
int32_t __cdecl HomeArrangementFurnitureCountWatcher::tryUpdateProgressImpl(
        HomeArrangementFurnitureCountWatcher *const this,
        Player *player,
        const HomeArrangementFurnitureEvent *event,
        const HomeArrangementFurnitureCountWatcherParam *param)
{
  HomeArrangementFurnitureCountWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 3213: range 00000000149BF590-00000000149BF72D
int32_t __cdecl HomeArrangementFurnitureCountWatcher::refreshProgressImpl(
        HomeArrangementFurnitureCountWatcher *const this,
        Player *player,
        const HomeArrangementFurnitureCountWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Home *v6; // rax
  HomeSceneComp *SceneComp; // rdx
  uint32_t Progress; // eax
  int32_t result; // eax
  uint32_t count; // [rsp+2Ch] [rbp-74h]
  char v12[112]; // [rsp+30h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 home_ptr:3214";
  *(_QWORD *)(v3 + 16) = HomeArrangementFurnitureCountWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getHomeComp(player);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    SceneComp = Home::getSceneComp(v6);
    count = HomeSceneComp::getMaxFurnitureCountByType(SceneComp, &param->furniture_type_set);
    if ( count > BaseWatcher::getProgress(this) )
    {
      Progress = BaseWatcher::getProgress(this);
      BaseWatcher::addProgress(this, count - Progress);
    }
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
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

// Line 3229: range 00000000149BF72E-00000000149BF819
int32_t __cdecl CombineItemCountWatcher::tryUpdateProgressImpl(
        CombineItemCountWatcher *const this,
        Player *player,
        const PlayerCombineEvent *event,
        const CombineItemCountWatcherParam *param)
{
  uint32_t combine_type; // ecx
  CombineItemCountWatcher *v5; // rcx

  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  combine_type = param->combine_type;
  if ( *(_BYTE *)(((unsigned __int64)&event->combine_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->combine_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->combine_type);
  }
  if ( combine_type == event->combine_type )
  {
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->combine_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->combine_count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->combine_count);
    }
    BaseWatcher::addProgress(v5, event->combine_count);
  }
  return 0;
};

// Line 3240: range 00000000149BF81A-00000000149BF89E
int32_t __cdecl HomeEnterSelfHomeWatcher::tryUpdateProgressImpl(
        HomeEnterSelfHomeWatcher *const this,
        Player *player,
        const PlayerEnterHomeEvent *event,
        const HomeEnterSelfHomeWatcherParam *param)
{
  uint32_t *p_home_uid; // rdx
  uint32_t home_uid; // ebx

  p_home_uid = &event->home_uid;
  if ( *(_BYTE *)(((unsigned __int64)p_home_uid >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_home_uid >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_home_uid);
  }
  home_uid = event->home_uid;
  if ( home_uid == Player::getUid(player) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3250: range 00000000149BF8A0-00000000149BF8D5
int32_t __cdecl HomeModuleComfortWatcher::tryUpdateProgressImpl(
        HomeModuleComfortWatcher *const this,
        Player *player,
        const HomeArrangementFurnitureEvent *event,
        const HomeModuleComfortWatcherParam *param)
{
  HomeModuleComfortWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 3256: range 00000000149BF8D6-00000000149BFB71
int32_t __cdecl HomeModuleComfortWatcher::refreshProgressImpl(
        HomeModuleComfortWatcher *const this,
        Player *player,
        const HomeModuleComfortWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  Home *v6; // rax
  HomeSceneComp *SceneComp; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t ComfortValue; // ecx
  int32_t result; // eax
  uint32_t count; // [rsp+2Ch] [rbp-A4h]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+30h] [rbp-A0h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+38h] [rbp-98h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+40h] [rbp-90h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v16; // [rsp+48h] [rbp-88h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+50h] [rbp-80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *home_module_ptr; // [rsp+58h] [rbp-78h]
  char v19[112]; // [rsp+60h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 13 home_ptr:3257";
  *(_QWORD *)(v3 + 16) = HomeModuleComfortWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getHomeComp(player);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
  {
    count = 0;
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    SceneComp = Home::getSceneComp(v6);
    __for_range = HomeSceneComp::getModuleDataMap(SceneComp);
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v16 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
      module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v16);
      home_module_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v16);
      if ( std::operator!=<HomeModuleData>(home_module_ptr, 0LL) )
      {
        v8 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)home_module_ptr);
        ComfortValue = HomeModuleData::getComfortValue(v8);
        if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(param);
        }
        if ( ComfortValue >= param->comfort_value )
          ++count;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
    }
    BaseWatcher::tryCorrectProgress(this, count);
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
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

// Line 3279: range 00000000149BFB72-00000000149BFBA1
int32_t __cdecl HomeEnterHomeRoomWatcher::tryUpdateProgressImpl(
        HomeEnterHomeRoomWatcher *const this,
        Player *player,
        const EnterHomeRoomEvent *event,
        const HomeEnterHomeRoomWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3286: range 00000000149BFBA2-00000000149BFC4D
int32_t __cdecl HomeAvatarShowInWatcher::tryUpdateProgressImpl(
        HomeAvatarShowInWatcher *const this,
        Player *player,
        const HomeAvatarShowInEvent *event,
        const HomeAvatarShowInWatcherParam *param)
{
  uint32_t *p_avatar_id; // rdx
  uint32_t avatar_id; // ecx

  p_avatar_id = &event->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_avatar_id);
  }
  avatar_id = event->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( avatar_id == param->avatar_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3296: range 00000000149BFC4E-00000000149BFCF9
int32_t __cdecl HomeAvatarEventRewardWatcher::tryUpdateProgressImpl(
        HomeAvatarEventRewardWatcher *const this,
        Player *player,
        const HomeAvatarEventRewardGetEvent *event,
        const HomeAvatarEventRewardWatcherParam *param)
{
  uint32_t *p_avatar_id; // rdx
  uint32_t avatar_id; // ecx

  p_avatar_id = &event->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_avatar_id);
  }
  avatar_id = event->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( avatar_id == param->avatar_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3306: range 00000000149BFCFA-00000000149BFDA5
int32_t __cdecl HomeAvatarTalkWatcher::tryUpdateProgressImpl(
        HomeAvatarTalkWatcher *const this,
        Player *player,
        const HomeAvatarTalkEvent *event,
        const HomeAvatarTalkWatcherParam *param)
{
  uint32_t *p_avatar_id; // rdx
  uint32_t avatar_id; // ecx

  p_avatar_id = &event->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_avatar_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_avatar_id);
  }
  avatar_id = event->avatar_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( avatar_id == param->avatar_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3316: range 00000000149BFDA6-00000000149BFDD5
int32_t __cdecl HomeAvatarAllEventRewardWatcher::tryUpdateProgressImpl(
        HomeAvatarAllEventRewardWatcher *const this,
        Player *player,
        const HomeAvatarEventRewardGetEvent *event,
        const HomeAvatarAllEventRewardWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3323: range 00000000149BFDD6-00000000149BFE05
int32_t __cdecl HomeAvatarAllTalkWatcher::tryUpdateProgressImpl(
        HomeAvatarAllTalkWatcher *const this,
        Player *player,
        const HomeAvatarTalkEvent *event,
        const HomeAvatarAllTalkWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3330: range 00000000149BFE06-00000000149BFE35
int32_t __cdecl HomeAvatarInCountWatcher::tryUpdateProgressImpl(
        HomeAvatarInCountWatcher *const this,
        Player *player,
        const HomeAvatarShowInEvent *event,
        const HomeAvatarInCountWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3337: range 00000000149BFE36-00000000149BFE65
int32_t __cdecl HomeAvatarFetterGetWatcher::tryUpdateProgressImpl(
        HomeAvatarFetterGetWatcher *const this,
        Player *player,
        const HomeAvatarFetterGetEvent *event,
        const HomeAvatarFetterGetWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3344: range 00000000149BFE66-00000000149BFE95
int32_t __cdecl AnyWeaponUpgradeNumWatcher::tryUpdateProgressImpl(
        AnyWeaponUpgradeNumWatcher *const this,
        Player *player,
        const WeaponAddExpEvent *event,
        const AnyWeaponUpgradeNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3351: range 00000000149BFE96-00000000149BFEC5
int32_t __cdecl AnyReliquaryUpgradeNumWatcher::tryUpdateProgressImpl(
        AnyReliquaryUpgradeNumWatcher *const this,
        Player *player,
        const ReliquaryAddExpEvent *event,
        const AnyReliquaryUpgradeNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3358: range 00000000149BFEC6-00000000149BFFB8
int32_t __cdecl ExhibitionAccumulableValueWatcher::tryUpdateProgressImpl(
        ExhibitionAccumulableValueWatcher *const this,
        Player *player,
        const ExhibitionAccumulableValueEvent *event,
        const ExhibitionAccumulableValueWatcherParam *param)
{
  uint32_t *p_exhibition_id; // rdx
  uint32_t exhibition_id; // ecx
  ExhibitionAccumulableValueWatcher *v7; // rcx

  p_exhibition_id = &event->exhibition_id;
  if ( *(_BYTE *)(((unsigned __int64)p_exhibition_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_exhibition_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_exhibition_id);
  }
  exhibition_id = event->exhibition_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( exhibition_id != param->exhibition_id )
    return 0;
  v7 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->add_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->add_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->add_value);
  }
  BaseWatcher::addProgress(v7, event->add_value);
  return 0;
};

// Line 3368: range 00000000149BFFBA-00000000149C0065
int32_t __cdecl ExhibitionAccumulableValueWatcher::refreshProgressImpl(
        ExhibitionAccumulableValueWatcher *const this,
        Player *player,
        const ExhibitionAccumulableValueWatcherParam *param)
{
  PlayerExhibitionComp *ExhibitionComp; // rcx
  uint32_t cur_value; // [rsp+2Ch] [rbp-4h]

  ExhibitionComp = Player::getExhibitionComp(player);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  cur_value = PlayerExhibitionComp::getExhibitionAccumulableData(ExhibitionComp, param->exhibition_id);
  if ( cur_value && !BaseWatcher::getProgress(this) )
    BaseWatcher::addProgress(this, cur_value);
  return 0;
};

// Line 3379: range 00000000149C0066-00000000149C01AC
int32_t __cdecl ExhibitionReplaceableValueSettleNumWatcher::tryUpdateProgressImpl(
        ExhibitionReplaceableValueSettleNumWatcher *const this,
        Player *player,
        const ExhibitionReplaceableValueSettleNumEvent *event,
        const ExhibitionReplaceableValueSettleNumWatcherParam *param)
{
  uint32_t *p_exhibition_id; // rdx
  uint32_t exhibition_id; // ecx
  uint64_t before_value; // rcx

  p_exhibition_id = &event->exhibition_id;
  if ( *(_BYTE *)(((unsigned __int64)p_exhibition_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_exhibition_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_exhibition_id);
  }
  exhibition_id = event->exhibition_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( exhibition_id != param->exhibition_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->before_value >> 3) + 0x7FFF8000) )
    __asan_report_load8(&event->before_value);
  before_value = event->before_value;
  if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) )
    __asan_report_load8(&param->value);
  if ( before_value < param->value )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_value >> 3) + 0x7FFF8000) )
      __asan_report_load8(&event->cur_value);
    if ( event->cur_value >= param->value )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 3394: range 00000000149C01AE-00000000149C04B2
int32_t __cdecl WeeklyBossKillWatcher::tryUpdateProgressImpl(
        WeeklyBossKillWatcher *const this,
        Player *player,
        const WeeklyBossKillEvent *event,
        const WeeklyBossKillWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::pointer v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> __y; // [rsp+28h] [rbp-98h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 8 9 iter:3401";
  *(_QWORD *)(v4 + 16) = WeeklyBossKillWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116352;
  if ( *(char *)(((unsigned __int64)&event->is_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&event->is_dungeon);
  if ( event->is_dungeon )
  {
    BaseWatcher::addProgress(this, 1u);
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      3398);
    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v15, (const char (*)[19])off_2552A380);
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = 0;
  }
  else
  {
    *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v4 + 32) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(&param->group_monsters_config_map, &event->group_id);
    __y._M_cur = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(&param->group_monsters_config_map)._M_cur;
    if ( std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v4 + 32),
           &__y)
      && (v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v4 + 32)),
          common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            &v8->second,
            &event->config_id)) )
    {
      BaseWatcher::addProgress(this, 1u);
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        3407);
      v9 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(&v15, (const char (*)[8])" GROUP:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->group_id);
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v10,
              (const char (*)[20])" MONSTER_CONFIG_ID:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->config_id);
      common::milog::MiLogStream::~MiLogStream(&v15);
      result = 0;
    }
    else
    {
      result = 0;
    }
  }
  if ( v16 == (char *)v4 )
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

// Line 3416: range 00000000149C04B4-00000000149C05AE
int32_t __cdecl GroupVariableSetValueToWatcher::tryUpdateProgressImpl(
        GroupVariableSetValueToWatcher *const this,
        Player *player,
        const GroupVariableSetValueToEvent *event,
        const GroupVariableSetValueToWatcherParam *param)
{
  int32_t value; // ecx
  char v5; // al

  if ( !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
          &param->group_id_set,
          &event->group_id)
    || !std::operator==<char>(&event->var_name, &param->var_name) )
  {
    goto LABEL_9;
  }
  if ( *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->value);
  }
  value = event->value;
  if ( *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&param->value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&param->value);
  }
  if ( value == param->value )
    v5 = 1;
  else
LABEL_9:
    v5 = 0;
  if ( v5 )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3427: range 00000000149C05B0-00000000149C079F
int32_t __cdecl KillGadgetsBySpecificSkillWatcher::tryUpdateProgressImpl(
        KillGadgetsBySpecificSkillWatcher *const this,
        Player *player,
        const KillGadgetsBySpecificSkillEvent *event,
        const KillGadgetsBySpecificSkillWatcherParam *param)
{
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream v15; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::set<unsigned int>::empty(&param->group_id_set)
    && !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
          &param->group_id_set,
          &event->group_id) )
  {
    return 0;
  }
  if ( !std::set<std::string>::empty(&param->ability_name_set)
    && !common::tools::MiscUtils::isContains<std::set<std::string> const,std::string>(
          &param->ability_name_set,
          &event->ability_name) )
  {
    return 0;
  }
  if ( std::set<unsigned int>::empty(&param->gadget_id_set)
    || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         &param->gadget_id_set,
         &event->gadget_id) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      3440);
    v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v15, (const char (*)[9])" GADGET:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->gadget_id);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" killed by ability:");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &event->ability_name);
    v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" @group:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &event->group_id);
    common::milog::MiLogStream::~MiLogStream(&v15);
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 3448: range 00000000149C07A0-00000000149C0926
int32_t __cdecl KillMonstersWithoutVehicleWatcher::tryUpdateProgressImpl(
        KillMonstersWithoutVehicleWatcher *const this,
        Player *player,
        const KillMonstersWithoutVehicleEvent *event,
        const KillMonstersWithoutVehicleWatcherParam *param)
{
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-30h] BYREF

  if ( !std::set<unsigned int>::empty(&param->group_id_set)
    && !common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
          &param->group_id_set,
          &event->group_id) )
  {
    return 0;
  }
  if ( std::set<unsigned int>::empty(&param->monster_id_set)
    || common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
         &param->monster_id_set,
         &event->monster_id) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      3457);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(&v13, (const char (*)[10])" MONSTER:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &event->monster_id);
    v9 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v8, (const char (*)[9])" @group:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->group_id);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])" killed without vehicle");
    common::milog::MiLogStream::~MiLogStream(&v13);
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 3465: range 00000000149C0928-00000000149C0957
int32_t __cdecl PlaceMiracleRingWatcher::tryUpdateProgressImpl(
        PlaceMiracleRingWatcher *const this,
        Player *player,
        const PlaceMiracleRingEvent *event,
        const PlaceMiracleRingWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3473: range 00000000149C0958-00000000149C0E29
int32_t __cdecl KillMonsterByTagWatcher::tryUpdateProgressImpl(
        KillMonsterByTagWatcher *const this,
        Player *player,
        const RoundMonsterDieEvent *event,
        const KillMonsterByTagWatcherParam *param)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  common::milog::MiLogStream *v7; // rdx
  int32_t v8; // r14d
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  bool v10; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  common::milog::MiLogStream *v18; // r14
  std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  int32_t result; // eax
  const MonsterScriptConfig *monster_script_config_ptr; // [rsp+30h] [rbp-B0h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Group> __a; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+50h] [rbp-90h] BYREF
  char v29[112]; // [rsp+70h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 16 monster_ptr:3474";
  *(_QWORD *)(v4 + 16) = KillMonsterByTagWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  std::weak_ptr<Monster>::lock((const std::weak_ptr<Monster> *const)(v4 + 32));
  if ( std::operator==<Monster>(0LL, (const std::shared_ptr<Monster> *)(v4 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      3477);
    v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v28,
           (const char (*)[25])"monster is null! player:");
    operator<<(v7, player);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v8 = -1;
  }
  else
  {
    std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    Entity::getGroup((const Entity *const)&__a);
    v10 = 1;
    if ( !std::operator==<Group>(0LL, &__a) )
    {
      v9 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      if ( Entity::getConfigId((const Entity *const)v9) )
        v10 = 0;
    }
    std::shared_ptr<Group>::~shared_ptr(&__a);
    if ( v10 )
    {
      v8 = 0;
    }
    else
    {
      v11 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
      monster_script_config_ptr = Monster::getMonsterScriptConfig(v11);
      if ( monster_script_config_ptr )
      {
        v16 = (unsigned __int64)std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16);
        v17 = *(_QWORD *)v16 + 312LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(*(_QWORD *)v16 + 312LL);
        monster_config_ptr = (const data::MonsterExcelConfig *)(*(__int64 (__fastcall **)(unsigned __int64))v17)(v16);
        if ( monster_config_ptr )
        {
          if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 &param->area_id_set,
                 &monster_script_config_ptr->area_id)
            && common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 &param->describe_id_set,
                 &monster_config_ptr->describe_id) )
          {
            BaseWatcher::addProgress(this, 1u);
          }
          v8 = 0;
        }
        else
        {
          common::milog::MiLogStream::create(
            &v28,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/watcher.cpp",
            "tryUpdateProgressImpl",
            3494);
          v18 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  &v28,
                  (const char (*)[25])"getConfig fail, monster:");
          v19 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          v20 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v18, v19);
          v21 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v20, (const char (*)[9])" player:");
          operator<<(v21, player);
          common::milog::MiLogStream::~MiLogStream(&v28);
          v8 = -1;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/watcher/watcher.cpp",
          "tryUpdateProgressImpl",
          3488);
        v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                &v28,
                (const char (*)[38])"getMonsterScriptConfig fail, mosnter:");
        v13 = std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Monster,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        v14 = common::milog::MiLogStream::operator<<<Monster,(Monster*)0>(v12, v13);
        v15 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v14, (const char (*)[9])" player:");
        operator<<(v15, player);
        common::milog::MiLogStream::~MiLogStream(&v28);
        v8 = -1;
      }
    }
  }
  std::shared_ptr<Monster>::~shared_ptr((std::shared_ptr<Monster> *const)(v4 + 32));
  result = v8;
  if ( v29 == (char *)v4 )
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

// Line 3509: range 00000000149C0E2A-00000000149C0EDC
int32_t __cdecl EnterVehicleWatcher::tryUpdateProgressImpl(
        EnterVehicleWatcher *const this,
        Player *player,
        const EnterVehicleEvent *event,
        const EnterVehicleWatcherParam *param)
{
  uint32_t *p_vehicle_type; // rdx
  uint32_t vehicle_type; // ecx

  p_vehicle_type = &event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_vehicle_type);
  }
  vehicle_type = event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( vehicle_type == param->vehicle_type )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3521: range 00000000149C0EDE-00000000149C1023
int32_t __cdecl VehicleDurationWatcher::tryUpdateProgressImpl(
        VehicleDurationWatcher *const this,
        Player *player,
        const ExitVehicleEvent *event,
        const VehicleDurationWatcherParam *param)
{
  uint32_t *p_vehicle_type; // rdx
  uint32_t vehicle_type; // ecx
  uint32_t duration; // ecx

  p_vehicle_type = &event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_vehicle_type);
  }
  vehicle_type = event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( vehicle_type != param->vehicle_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->duration);
  }
  duration = event->duration;
  if ( *(_BYTE *)(((unsigned __int64)&param->vehicle_duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->vehicle_duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->vehicle_duration);
  }
  if ( duration >= param->vehicle_duration )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3537: range 00000000149C1024-00000000149C10D6
int32_t __cdecl VehicleFriendsWatcher::tryUpdateProgressImpl(
        VehicleFriendsWatcher *const this,
        Player *player,
        const VehicleFriendsEvent *event,
        const VehicleFriendsWatcherParam *param)
{
  uint32_t *p_vehicle_type; // rdx
  uint32_t vehicle_type; // ecx

  p_vehicle_type = &event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_vehicle_type);
  }
  vehicle_type = event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( vehicle_type == param->vehicle_type )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3549: range 00000000149C10D8-00000000149C11D8
int32_t __cdecl VehicleKilledByMonsterWatcher::tryUpdateProgressImpl(
        VehicleKilledByMonsterWatcher *const this,
        Player *player,
        const VehicleKilledEvent *event,
        const VehicleKilledByMonsterWatcherParam *param)
{
  uint32_t *p_vehicle_type; // rdx
  uint32_t vehicle_type; // ecx

  p_vehicle_type = &event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_vehicle_type);
  }
  vehicle_type = event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( vehicle_type != param->vehicle_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->attacker_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->attacker_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->attacker_type);
  }
  if ( event->attacker_type == 2 )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3565: range 00000000149C11DA-00000000149C131F
int32_t __cdecl VehicleDashWatcher::tryUpdateProgressImpl(
        VehicleDashWatcher *const this,
        Player *player,
        const VehicleDashEvent *event,
        const VehicleDashWatcherParam *param)
{
  uint32_t *p_vehicle_type; // rdx
  uint32_t vehicle_type; // ecx
  uint32_t dash_time; // ecx

  p_vehicle_type = &event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_vehicle_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_vehicle_type);
  }
  vehicle_type = event->vehicle_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( vehicle_type != param->vehicle_type )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->dash_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->dash_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->dash_time);
  }
  dash_time = event->dash_time;
  if ( *(_BYTE *)(((unsigned __int64)&param->dash_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->dash_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->dash_time);
  }
  if ( dash_time >= param->dash_time )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3581: range 00000000149C1320-00000000149C134F
int32_t __cdecl HomeDoPlantWatcher::tryUpdateProgressImpl(
        HomeDoPlantWatcher *const this,
        Player *player,
        const HomeDoPlantEvent *event,
        const HomeDoPlantWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3589: range 00000000149C1350-00000000149C1644
int32_t __cdecl FinishChallengeInDurationWatcher::tryUpdateProgressImpl(
        FinishChallengeInDurationWatcher *const this,
        Player *player,
        const ChallengeFinishEvent *event,
        const FinishChallengeInDurationWatcherParam *param)
{
  uint32_t group_id; // ecx
  uint32_t duration; // ecx
  uint32_t challenge_id; // ecx
  uint32_t challenge_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_success);
  }
  if ( !event->is_success )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  group_id = param->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->group_id);
  }
  if ( group_id != event->group_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->duration);
  }
  duration = event->duration;
  if ( *(_BYTE *)(((unsigned __int64)&param->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->duration);
  }
  if ( duration > param->duration )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->challenge_id);
  }
  if ( param->challenge_id )
  {
    challenge_id = param->challenge_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->challenge_id);
    }
    if ( challenge_id == event->challenge_id )
      goto LABEL_31;
  }
  if ( *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->challenge_id);
  }
  if ( !param->challenge_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->challenge_index);
    }
    challenge_index = param->challenge_index;
    if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->challenge_index);
    }
    if ( challenge_index == event->challenge_index )
LABEL_31:
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 3612: range 00000000149C1646-00000000149C1942
int32_t __cdecl FinishChallengeLeftTimeWatcher::tryUpdateProgressImpl(
        FinishChallengeLeftTimeWatcher *const this,
        Player *player,
        const ChallengeFinishEvent *event,
        const FinishChallengeLeftTimeWatcherParam *param)
{
  uint32_t group_id; // ecx
  uint32_t left_time; // ecx
  uint32_t challenge_id; // ecx
  uint32_t challenge_index; // ecx

  if ( *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)event + 36) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_success >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&event->is_success);
  }
  if ( !event->is_success )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  group_id = param->group_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->group_id);
  }
  if ( group_id != event->group_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->left_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->left_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->left_time);
  }
  left_time = event->left_time;
  if ( *(_BYTE *)(((unsigned __int64)&param->left_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->left_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->left_time);
  }
  if ( left_time < param->left_time )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->challenge_id);
  }
  if ( param->challenge_id )
  {
    challenge_id = param->challenge_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->challenge_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->challenge_id);
    }
    if ( challenge_id == event->challenge_id )
      goto LABEL_31;
  }
  if ( *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->challenge_id);
  }
  if ( !param->challenge_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->challenge_index >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->challenge_index);
    }
    challenge_index = param->challenge_index;
    if ( *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->challenge_index >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->challenge_index);
    }
    if ( challenge_index == event->challenge_index )
LABEL_31:
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 3636: range 00000000149C1944-00000000149C1974
int32_t __cdecl UnlockSpecificForgeOrWatcher::tryUpdateProgressImpl(
        UnlockSpecificForgeOrWatcher *const this,
        Player *player,
        const UnlockForgeEvent *event,
        const UnlockSpecificForgeOrWatcherParam *param)
{
  return UnlockSpecificForgeOrWatcher::refreshProgressImpl(this, player, param);
};

// Line 3641: range 00000000149C1976-00000000149C1A6B
int32_t __cdecl UnlockSpecificForgeOrWatcher::refreshProgressImpl(
        UnlockSpecificForgeOrWatcher *const this,
        Player *player,
        const UnlockSpecificForgeOrWatcherParam *param)
{
  unsigned int *v3; // rax
  unsigned int *v4; // rdx
  PlayerForgeComp *ForgeComp; // rax
  uint32_t count; // [rsp+20h] [rbp-20h]
  unsigned int id; // [rsp+24h] [rbp-1Ch]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-18h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-10h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-8h]

  count = 0;
  __for_range = &param->forge_id_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->forge_id_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v3 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v3);
    }
    id = *v4;
    ForgeComp = Player::getForgeComp(player);
    if ( PlayerForgeComp::isForgeUnlocked(ForgeComp, id) )
      ++count;
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  BaseWatcher::tryCorrectProgress(this, count);
  return 0;
};

// Line 3657: range 00000000149C1A6C-00000000149C1C27
int32_t __cdecl UnlockSpecificAnimalCodexWatcher::tryUpdateProgressImpl(
        UnlockSpecificAnimalCodexWatcher *const this,
        Player *player,
        const UnlockCodexEvent *event,
        const UnlockSpecificAnimalCodexWatcherParam *param)
{
  uint32_t *p_codex_type; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  data::AnimalCodexCountType count_type; // ecx
  uint32_t codex_id; // [rsp+24h] [rbp-2Ch]
  const data::AnimalCodexExcelConfig *animal_codex_config_ptr; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v12[2]; // [rsp+30h] [rbp-20h] BYREF

  p_codex_type = &event->codex_type;
  if ( *(_BYTE *)(((unsigned __int64)p_codex_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_codex_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_codex_type);
  }
  if ( event->codex_type != 3 )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&event->codex_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->codex_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->codex_id);
  }
  codex_id = event->codex_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v12);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v12);
  animal_codex_config_ptr = data::CodexExcelConfigMgrBase::findAnimalCodexExcelConfig(
                              &v6->design_config.txt_config_mgr.codex_config_mgr,
                              codex_id);
  std::shared_ptr<Config>::~shared_ptr(v12);
  if ( !animal_codex_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&animal_codex_config_ptr->count_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&animal_codex_config_ptr->count_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&animal_codex_config_ptr->count_type);
  }
  count_type = animal_codex_config_ptr->count_type;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( count_type == param->codex_type )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3679: range 00000000149C1C28-00000000149C1CBE
int32_t __cdecl HomeGatherCountWatcher::tryUpdateProgressImpl(
        HomeGatherCountWatcher *const this,
        Player *player,
        const HomeGatherEvent *event,
        const HomeGatherCountWatcherParam *param)
{
  if ( *(char *)(((unsigned __int64)&param->is_check_all >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&param->is_check_all);
  if ( !param->is_check_all
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->home_gather_id_set,
          &event->gather_id) )
  {
    return 0;
  }
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3694: range 00000000149C1CC0-00000000149C1D0A
int32_t __cdecl HomeFieldGatherCountWatcher::tryUpdateProgressImpl(
        HomeFieldGatherCountWatcher *const this,
        Player *player,
        const HomeFieldGatherEvent *event,
        const HomeFieldGatherCountWatcherParam *param)
{
  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->field_furniture_id_set,
         &event->furniture_id) )
  {
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 3705: range 00000000149C1D0C-00000000149C1D41
int32_t __cdecl ArrangementFurnitureWatcher::tryUpdateProgressImpl(
        ArrangementFurnitureWatcher *const this,
        Player *player,
        const HomeArrangementFurnitureEvent *event,
        const ArrangementFurnitureWatcherParam *param)
{
  ArrangementFurnitureWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 3711: range 00000000149C1D42-00000000149C2023
int32_t __cdecl ArrangementFurnitureWatcher::refreshProgressImpl(
        ArrangementFurnitureWatcher *const this,
        Player *player,
        const ArrangementFurnitureWatcherParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  Home *v6; // rax
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  int32_t result; // eax
  uint32_t count; // [rsp+20h] [rbp-B0h]
  unsigned int furniture_id; // [rsp+24h] [rbp-ACh]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-A8h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-A0h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+38h] [rbp-98h]
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 13 home_ptr:3712 64 16 20 home_module_ptr:3716";
  *(_QWORD *)(v3 + 16) = ArrangementFurnitureWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -202178560;
  Player::getHomeComp(player);
  PlayerHomeComp::findMyHome((const PlayerHomeComp *const)(v3 + 32));
  if ( std::operator!=<Home>((const std::shared_ptr<Home> *)(v3 + 32), 0LL) )
  {
    count = 0;
    v6 = std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Home,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    Home::getSceneComp(v6);
    HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v3 + 64));
    if ( std::operator!=<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 64), 0LL) )
    {
      __for_range = &param->furniture_id_set;
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->furniture_id_set)._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->furniture_id_set)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v7 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        furniture_id = *v8;
        v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        count += HomeModuleData::getFurnitureCount(v9, furniture_id);
        std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
    }
    if ( count > BaseWatcher::getProgress(this) )
      BaseWatcher::tryCorrectProgress(this, count);
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
  }
  std::shared_ptr<Home>::~shared_ptr((std::shared_ptr<Home> *const)(v3 + 32));
  result = 0;
  if ( v17 == (char *)v3 )
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

// Line 3734: range 00000000149C2024-00000000149C223E
int32_t __cdecl GalleryFishReachScoreWatcher::tryUpdateProgressImpl(
        GalleryFishReachScoreWatcher *const this,
        Player *player,
        const GalleryFishSettleEvent *event,
        const GalleryFishReachScoreWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  unsigned int v7; // edi
  proto::FishingGallerySettleInfo *p_gallery_settle_info; // rcx
  const proto::FishingScore *v9; // rax
  uint32_t v10; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id != param->gallery_id )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->index);
  }
  if ( !param->index )
    return 0;
  v7 = proto::FishingGallerySettleInfo::fishing_score_list_size(&event->gallery_settle_info);
  if ( *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) )
  {
    v7 = (_DWORD)param + 8;
    __asan_report_load4(&param->index);
  }
  if ( v7 < param->index )
    return 0;
  p_gallery_settle_info = &event->gallery_settle_info;
  if ( *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->index >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->index);
  }
  v9 = proto::FishingGallerySettleInfo::fishing_score_list(p_gallery_settle_info, param->index - 1);
  v10 = proto::FishingScore::fishing_score(v9);
  if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&param->score);
  }
  if ( v10 >= param->score )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3756: range 00000000149C2240-00000000149C234F
int32_t __cdecl AccumulateDailyLoginWatcher::tryUpdateProgressImpl(
        AccumulateDailyLoginWatcher *const this,
        Player *player,
        const PlayerLoginEvent *event,
        const AccumulateDailyLoginWatcherParam *param)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  time_t v5; // rcx
  uint32_t *now_login_time; // rdi
  uint32_t time_offset; // [rsp+2Ch] [rbp-14h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v4->design_config.txt_config_mgr.const_value_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  v5 = time_offset;
  if ( *(_BYTE *)(((unsigned __int64)&event->now_login_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->now_login_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->now_login_time);
  }
  now_login_time = (uint32_t *)event->now_login_time;
  if ( *(_BYTE *)(((unsigned __int64)&event->last_login_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->last_login_time >> 3) + 0x7FFF8000) <= 3 )
  {
    now_login_time = &event->last_login_time;
    __asan_report_load4(&event->last_login_time);
  }
  if ( !common::tools::TimeUtils::isSameDay(event->last_login_time, (time_t)now_login_time, v5) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3765: range 00000000149C2350-00000000149C2390
int32_t __cdecl AccumulateDailyLoginWatcher::refreshProgressImpl(
        AccumulateDailyLoginWatcher *const this,
        Player *player,
        const AccumulateDailyLoginWatcherParam *param)
{
  if ( !BaseWatcher::getProgress(this) )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3776: range 00000000149C2392-00000000149C2461
int32_t __cdecl MpKillMonsterIdNumWatcher::tryUpdateProgressImpl(
        MpKillMonsterIdNumWatcher *const this,
        Player *player,
        const MpKillMonsterNumEvent *event,
        const MpKillMonsterIdNumWatcherParam *param)
{
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream v7; // [rsp+20h] [rbp-30h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->monster_id_set,
         &event->monster_id) )
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      3779);
    v4 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v7,
           (const char (*)[52])"MpKillMonsterNumIdWatcher add progress, monster_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &event->monster_id);
    common::milog::MiLogStream::~MiLogStream(&v7);
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 3788: range 00000000149C2462-00000000149C28A4
int32_t __cdecl FishingSuccNumWatcher::tryUpdateProgressImpl(
        FishingSuccNumWatcher *const this,
        Player *player,
        const FishingSuccEvent *event,
        const FishingSuccNumWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v10; // rax
  _DWORD *v11; // rdx
  bool is_has_feature; // [rsp+2Ah] [rbp-96h]
  bool is_furniture_fish; // [rsp+2Bh] [rbp-95h]
  uint32_t fish_id; // [rsp+2Ch] [rbp-94h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-90h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-88h] BYREF
  const std::unordered_set<unsigned int> *feature_set_ptr; // [rsp+40h] [rbp-80h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v21; // [rsp+50h] [rbp-70h] BYREF
  char v22[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 feature:3810";
  *(_QWORD *)(v4 + 16) = FishingSuccNumWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->fish_id);
  }
  fish_id = event->fish_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  is_furniture_fish = FishExcelConfigMgr::isFurnitureFish(&v7->design_config.txt_config_mgr.fish_config_mgr, fish_id);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( *(char *)(((unsigned __int64)param >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(param);
  if ( param->is_furniture_fish && !is_furniture_fish )
  {
    result = 0;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&param->is_in_other_world >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)param + 1) & 7) >= *(_BYTE *)(((unsigned __int64)&param->is_in_other_world >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&param->is_in_other_world);
    }
    if ( !param->is_in_other_world )
      goto LABEL_37;
    if ( *(_BYTE *)(((unsigned __int64)&event->is_in_other_world >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)event + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&event->is_in_other_world >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&event->is_in_other_world);
    }
    if ( !event->is_in_other_world )
    {
      result = 0;
    }
    else
    {
LABEL_37:
      if ( std::set<unsigned int>::empty(&param->feature_tag_set) )
      {
        BaseWatcher::addProgress(this, 1u);
        result = 0;
      }
      else
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        feature_set_ptr = FishExcelConfigMgr::findFishFeatureSet(
                            &v9->design_config.txt_config_mgr.fish_config_mgr,
                            fish_id);
        std::shared_ptr<Config>::~shared_ptr(&v21);
        if ( feature_set_ptr )
        {
          is_has_feature = 0;
          __for_range = &param->feature_tag_set;
          __for_begin._M_node = std::set<unsigned int>::begin(&param->feature_tag_set)._M_node;
          __for_end._M_node = std::set<unsigned int>::end(&param->feature_tag_set)._M_node;
          while ( std::operator!=(&__for_begin, &__for_end) )
          {
            v10 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
            v11 = v10;
            if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v10);
            }
            *(_DWORD *)(v4 + 32) = *v11;
            if ( std::unordered_set<unsigned int>::count(
                   feature_set_ptr,
                   (const std::unordered_set<unsigned int>::key_type *)(v4 + 32)) )
            {
              is_has_feature = 1;
              break;
            }
            std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
          }
          if ( is_has_feature )
            BaseWatcher::addProgress(this, 1u);
          result = 0;
        }
        else
        {
          result = 0;
        }
      }
    }
  }
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

// Line 3828: range 00000000149C28A6-00000000149C28D5
int32_t __cdecl FishingFailNumWatcher::tryUpdateProgressImpl(
        FishingFailNumWatcher *const this,
        Player *player,
        const FishingFailEvent *event,
        const FishingFailNumWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3836: range 00000000149C28D6-00000000149C2905
int32_t __cdecl FishingEmptyPoolWatcher::tryUpdateProgressImpl(
        FishingEmptyPoolWatcher *const this,
        Player *player,
        const FishingEmptyPoolEvent *event,
        const FishingEmptyPoolWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3844: range 00000000149C2906-00000000149C2935
int32_t __cdecl FishingShockFishWatcher::tryUpdateProgressImpl(
        FishingShockFishWatcher *const this,
        Player *player,
        const FishingShockEvent *event,
        const FishingShockFishWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 3852: range 00000000149C2936-00000000149C2BC5
int32_t __cdecl FishingKeepBonusWatcher::tryUpdateProgressImpl(
        FishingKeepBonusWatcher *const this,
        Player *player,
        const FishingKeepBonusEvent *event,
        const FishingKeepBonusWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  FishExcelConfigMgr *p_fish_config_mgr; // rcx
  int32_t result; // eax
  std::_Rb_tree_const_iterator<unsigned int>::reference v9; // rax
  _DWORD *v10; // rdx
  bool is_has_feature; // [rsp+2Fh] [rbp-91h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+30h] [rbp-90h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+38h] [rbp-88h] BYREF
  const std::unordered_set<unsigned int> *feature_set_ptr; // [rsp+40h] [rbp-80h]
  const std::set<unsigned int> *__for_range; // [rsp+48h] [rbp-78h]
  std::shared_ptr<Config> v18; // [rsp+50h] [rbp-70h] BYREF
  char v19[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 feature:3859";
  *(_QWORD *)(v4 + 16) = FishingKeepBonusWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v18);
  p_fish_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v18)->design_config.txt_config_mgr.fish_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->fish_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->fish_id);
  }
  feature_set_ptr = FishExcelConfigMgr::findFishFeatureSet(p_fish_config_mgr, event->fish_id);
  std::shared_ptr<Config>::~shared_ptr(&v18);
  if ( feature_set_ptr )
  {
    is_has_feature = 0;
    __for_range = &param->feature_tag_set;
    __for_begin._M_node = std::set<unsigned int>::begin(&param->feature_tag_set)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(&param->feature_tag_set)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v9 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v10 = v9;
      if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v9);
      }
      *(_DWORD *)(v4 + 32) = *v10;
      if ( std::unordered_set<unsigned int>::count(
             feature_set_ptr,
             (const std::unordered_set<unsigned int>::key_type *)(v4 + 32)) )
      {
        is_has_feature = 1;
        break;
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    if ( is_has_feature )
      BaseWatcher::addProgress(this, 1u);
    result = 0;
  }
  else
  {
    result = 0;
  }
  if ( v19 == (char *)v4 )
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

// Line 3877: range 00000000149C2BC6-00000000149C3280
int32_t __cdecl UnlockScenePointWatcher::tryUpdateProgressImpl(
        UnlockScenePointWatcher *const this,
        Player *player,
        const UnlockScenePointEvent *event,
        const UnlockScenePointWatcherParam *param)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  uint32_t scene_id; // ecx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  uint32_t v12; // esi
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  const char *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // r14
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-A9h] BYREF
  char *val; // [rsp+28h] [rbp-A8h] BYREF
  std::shared_ptr<Config> v28; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v29; // [rsp+40h] [rbp-90h] BYREF
  char v30[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 20 trans_point_ptr:3889";
  *(_QWORD *)(v4 + 16) = UnlockScenePointWatcher::tryUpdateProgressImpl;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->scene_id);
  }
  scene_id = event->scene_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( scene_id == param->scene_id )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
            &param->point_id_set,
            &event->point_id) )
    {
      common::milog::MiLogStream::create(
        &v29,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/watcher/watcher.cpp",
        "tryUpdateProgressImpl",
        3886);
      v11 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v29,
              (const char (*)[65])"UnlockScenePointWatcher scene not contains point_id, point_id = ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->point_id);
      common::milog::MiLogStream::~MiLogStream(&v29);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v28);
      v12 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v28)
          + 93080;
      if ( *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->point_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->point_id);
      }
      if ( *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->scene_id);
      }
      JsonConfigMgr::findScenePoint<data::SceneTransPoint>((const JsonConfigMgr *const)(v4 + 32), v12, event->scene_id);
      std::shared_ptr<Config>::~shared_ptr(&v28);
      if ( std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v4 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v29,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/watcher.cpp",
          "tryUpdateProgressImpl",
          3892);
        v13 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v29,
                (const char (*)[34])"findScenePoint fails, scene_id = ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &event->scene_id);
        v15 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v14, (const char (*)[14])", point_id = ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &event->point_id);
        common::milog::MiLogStream::~MiLogStream(&v29);
      }
      else
      {
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v29, "DungeonEntry", &__a);
        v16 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
        if ( *(_BYTE *)((v16 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(v16);
        v17 = *(_QWORD *)v16 + 32LL;
        if ( *(_BYTE *)((v17 >> 3) + 0x7FFF8000) )
          v16 = __asan_report_load8(*(_QWORD *)v16 + 32LL);
        v18 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))v17)(v16);
        v19 = std::operator!=<char>(v18, (const std::string *)&v29);
        std::string::~string(&v29);
        std::allocator<char>::~allocator(&__a);
        if ( v19 )
        {
          common::milog::MiLogStream::create(
            &v29,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/watcher/watcher.cpp",
            "tryUpdateProgressImpl",
            3898);
          v20 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  &v29,
                  (const char (*)[62])"UnlockScenePointWatcher getTypeName not equal, getTypeName = ");
          v21 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
          if ( *(_BYTE *)((v21 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8(v21);
          v22 = *(_QWORD *)v21 + 32LL;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v21 = __asan_report_load8(*(_QWORD *)v21 + 32LL);
          val = (char *)(*(__int64 (__fastcall **)(unsigned __int64))v22)(v21);
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v20, (const char *const *)&val);
          common::milog::MiLogStream::~MiLogStream(&v29);
        }
        else
        {
          BaseWatcher::addProgress(this, 1u);
        }
      }
      std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v4 + 32));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v29,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      3880);
    v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v29,
           (const char (*)[59])"UnlockScenePointWatcher scene not equal, event.scene_id = ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->scene_id);
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])", param.scene_id = ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &param->scene_id);
    common::milog::MiLogStream::~MiLogStream(&v29);
  }
  result = 0;
  if ( v30 == (char *)v4 )
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

// Line 3907: range 00000000149C3282-00000000149C38F5
int32_t __cdecl UnlockScenePointWatcher::refreshProgressImpl(
        UnlockScenePointWatcher *const this,
        Player *player,
        const UnlockScenePointWatcherParam *param)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rdx
  int32_t v7; // r14d
  std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  Scene *v12; // rax
  std::__detail::_Node_iterator<unsigned int,true,false>::reference v13; // rax
  _DWORD *v14; // rdx
  unsigned int v15; // eax
  char v16; // r14
  char v17; // r15
  std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  const char *v21; // rax
  uint32_t Progress; // eax
  uint32_t v23; // eax
  int32_t result; // eax
  char v25; // [rsp+17h] [rbp-119h]
  std::allocator<char> __a; // [rsp+33h] [rbp-FDh] BYREF
  uint32_t unlock_count; // [rsp+34h] [rbp-FCh]
  std::unordered_set<unsigned int>::iterator __for_begin; // [rsp+38h] [rbp-F8h] BYREF
  std::unordered_set<unsigned int>::iterator __for_end; // [rsp+40h] [rbp-F0h] BYREF
  std::unordered_set<unsigned int> *__for_range; // [rsp+48h] [rbp-E8h]
  std::shared_ptr<Config> v32; // [rsp+50h] [rbp-E0h] BYREF
  common::milog::MiLogStream v33; // [rsp+60h] [rbp-D0h] BYREF
  char v34[176]; // [rsp+80h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 scene_id:3915 48 4 13 point_id:3924 64 16 14 scene_ptr:3908 96 16 20 trans_point_ptr:3926";
  *(_QWORD *)(v3 + 16) = UnlockScenePointWatcher::refreshProgressImpl;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::findMainWorldScene((const PlayerSceneComp *const)(v3 + 64));
  if ( std::operator==<PlayerWorldScene>((const std::shared_ptr<PlayerWorldScene> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v33,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/watcher/watcher.cpp",
      "refreshProgressImpl",
      3911);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v33,
           (const char (*)[33])"findMainWorldScene fail, player:");
    operator<<(v6, player);
    common::milog::MiLogStream::~MiLogStream(&v33);
    v7 = -1;
  }
  else
  {
    v8 = std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    *(_DWORD *)(v3 + 32) = Scene::getSceneId((const Scene *const)v8);
    if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(param);
    }
    if ( param->scene_id == *(_DWORD *)(v3 + 32) )
    {
      unlock_count = 0;
      v12 = (Scene *)std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorldScene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      __for_range = Scene::getAllUnlockPoint(v12);
      __for_begin._M_cur = std::unordered_set<unsigned int>::begin(__for_range)._M_cur;
      __for_end._M_cur = std::unordered_set<unsigned int>::end(__for_range)._M_cur;
      while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
      {
        v13 = std::__detail::_Node_iterator<unsigned int,true,false>::operator*(&__for_begin);
        v14 = v13;
        if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v13);
        }
        *(_DWORD *)(v3 + 48) = *v14;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v32);
        v15 = (unsigned int)std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v32);
        JsonConfigMgr::findScenePoint<data::SceneTransPoint>(
          (const JsonConfigMgr *const)(v3 + 96),
          v15 + 93080,
          *(_DWORD *)(v3 + 32));
        std::shared_ptr<Config>::~shared_ptr(&v32);
        if ( !std::operator==<data::SceneTransPoint>((const std::shared_ptr<data::SceneTransPoint> *)(v3 + 96), 0LL) )
        {
          v16 = 0;
          v17 = 0;
          v18 = std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&v18->type >> 3) + 0x7FFF8000) <= 3 )
          {
            v18 = (std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v18->type);
          }
          if ( v18->type )
            goto LABEL_23;
          std::allocator<char>::allocator(&__a);
          v16 = 1;
          std::string::basic_string<std::allocator<char>>((std::string *const)&v33, "DungeonEntry", &__a);
          v17 = 1;
          v19 = (unsigned __int64)std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::SceneTransPoint,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          if ( *(_BYTE *)((v19 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(v19);
          v20 = *(_QWORD *)v19 + 32LL;
          if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
            v19 = __asan_report_load8(*(_QWORD *)v19 + 32LL);
          v21 = (const char *)(*(__int64 (__fastcall **)(unsigned __int64))v20)(v19);
          if ( std::operator!=<char>(v21, (const std::string *)&v33) )
LABEL_23:
            v25 = 1;
          else
            v25 = 0;
          if ( v17 )
            std::string::~string(&v33);
          if ( v16 )
            std::allocator<char>::~allocator(&__a);
          if ( !v25
            && common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
                 &param->point_id_set,
                 (const unsigned int *)(v3 + 48)) )
          {
            ++unlock_count;
          }
        }
        std::shared_ptr<data::SceneTransPoint>::~shared_ptr((std::shared_ptr<data::SceneTransPoint> *const)(v3 + 96));
        std::__detail::_Node_iterator<unsigned int,true,false>::operator++(&__for_begin);
      }
      Progress = BaseWatcher::getProgress(this);
      if ( unlock_count > Progress )
      {
        v23 = BaseWatcher::getProgress(this);
        BaseWatcher::addProgress(this, unlock_count - v23);
      }
      v7 = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/watcher/watcher.cpp",
        "refreshProgressImpl",
        3918);
      v9 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             &v33,
             (const char (*)[40])"scene_id != param.scene_id, scene_id = ");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v10,
              (const char (*)[20])", param.scene_id = ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &param->scene_id);
      common::milog::MiLogStream::~MiLogStream(&v33);
      v7 = -1;
    }
  }
  std::shared_ptr<PlayerWorldScene>::~shared_ptr((std::shared_ptr<PlayerWorldScene> *const)(v3 + 64));
  result = v7;
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

// Line 3954: range 00000000149C38F6-00000000149C3980
int32_t __cdecl ObtainItemNumWatcher::tryUpdateProgressImpl(
        ObtainItemNumWatcher *const this,
        Player *player,
        const ObtainItemEvent *event,
        const ObtainItemNumWatcherParam *param)
{
  ObtainItemNumWatcher *v4; // rcx

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->item_id_set,
         &event->item_id) )
  {
    v4 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->item_num);
    }
    BaseWatcher::addProgress(v4, event->item_num);
  }
  return 0;
};

// Line 3964: range 00000000149C3982-00000000149C3FC4
int32_t __cdecl CaptureAnimalWatcher::tryUpdateProgressImpl(
        CaptureAnimalWatcher *const this,
        Player *player,
        const CaptureSuccEvent *event,
        const CaptureAnimalWatcherParam *param)
{
  int32_t v4; // r14d
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  _DWORD *v7; // r13
  uint32_t material_id; // ecx
  PlayerWidgetComp *WidgetComp; // rsi
  uint32_t monster_id; // ecx
  std::__detail::_Node_const_iterator<unsigned int,true,false>::reference v12; // rax
  _DWORD *v13; // rdx
  int v14; // r15d
  MonsterExcelConfigMgr *p_monster_config_mgr; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int32_t result; // eax
  bool is_meet_cond; // [rsp+3Fh] [rbp-111h]
  std::unordered_set<unsigned int>::const_iterator __for_begin; // [rsp+40h] [rbp-110h] BYREF
  std::unordered_set<unsigned int>::const_iterator __for_end; // [rsp+48h] [rbp-108h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+50h] [rbp-100h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+58h] [rbp-F8h] BYREF
  const std::unordered_set<unsigned int> *__for_range; // [rsp+60h] [rbp-F0h]
  const data::MonsterExcelConfig *monster_config_ptr; // [rsp+68h] [rbp-E8h]
  std::shared_ptr<Config> v30; // [rsp+70h] [rbp-E0h] BYREF
  common::milog::MiLogStream v31; // [rsp+80h] [rbp-D0h] BYREF
  char v32[176]; // [rsp+A0h] [rbp-B0h] BYREF

  v5 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(128LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 32 4 22 param_capture_tag:3978 48 48 33 widget_monster_match_tag_set:3976";
  *(_QWORD *)(v5 + 16) = CaptureAnimalWatcher::tryUpdateProgressImpl;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = 61956;
  v7[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(param);
  }
  if ( param->material_id )
  {
    material_id = param->material_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->material_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->material_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->material_id);
    }
    if ( material_id != event->material_id )
    {
      v4 = 0;
      goto LABEL_42;
    }
  }
  if ( !std::unordered_set<unsigned int>::empty(&param->monster_id_set)
    && !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
          &param->monster_id_set,
          &event->monster_id) )
  {
    v4 = 0;
    goto LABEL_42;
  }
  if ( std::unordered_set<unsigned int>::empty(&param->capture_tag_set) )
    goto LABEL_47;
  WidgetComp = Player::getWidgetComp(player);
  if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->monster_id);
  }
  monster_id = event->monster_id;
  if ( *(_BYTE *)(((unsigned __int64)&event->material_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->material_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&event->material_id);
  }
  PlayerWidgetComp::getWidgetCaptureMonsterMatchTagsSet(
    (std::set<unsigned int> *)(v5 + 48),
    WidgetComp,
    event->material_id,
    monster_id);
  is_meet_cond = 0;
  __for_range = &param->capture_tag_set;
  __for_begin._M_cur = std::unordered_set<unsigned int>::begin(&param->capture_tag_set)._M_cur;
  __for_end._M_cur = std::unordered_set<unsigned int>::end(&param->capture_tag_set)._M_cur;
  while ( std::__detail::operator!=<unsigned int,false>(&__for_begin, &__for_end) )
  {
    v12 = std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*(&__for_begin);
    v13 = v12;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    *(_DWORD *)(v5 + 32) = *v13;
    __y._M_node = std::set<unsigned int>::end((const std::set<unsigned int> *const)(v5 + 48))._M_node;
    __x._M_node = std::set<unsigned int>::find(
                    (std::set<unsigned int> *const)(v5 + 48),
                    (const std::set<unsigned int>::key_type *)(v5 + 32))._M_node;
    if ( std::operator!=(&__x, &__y) )
    {
      is_meet_cond = 1;
      break;
    }
    std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++(&__for_begin);
  }
  if ( !is_meet_cond )
  {
    v4 = 0;
    v14 = 0;
  }
  else
  {
    v14 = 1;
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v5 + 48));
  if ( v14 == 1 )
  {
LABEL_47:
    if ( !std::unordered_set<unsigned int>::empty(&param->describe_id_set) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v30);
      p_monster_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v30)->design_config.txt_config_mgr.monster_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->monster_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&event->monster_id);
      }
      monster_config_ptr = data::MonsterExcelConfigMgrBase::findMonsterExcelConfig(
                             p_monster_config_mgr,
                             event->monster_id);
      std::shared_ptr<Config>::~shared_ptr(&v30);
      if ( !monster_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v31,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/watcher/watcher.cpp",
          "tryUpdateProgressImpl",
          3998);
        v16 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                &v31,
                (const char (*)[28])"getConfig fail, monster_id:");
        v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &event->monster_id);
        v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])" player:");
        operator<<(v18, player);
        common::milog::MiLogStream::~MiLogStream(&v31);
        v4 = -1;
        goto LABEL_42;
      }
      if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             &param->describe_id_set,
             &monster_config_ptr->describe_id) )
      {
        BaseWatcher::addProgress(this, 1u);
        v4 = 0;
        goto LABEL_42;
      }
    }
    else
    {
      BaseWatcher::addProgress(this, 1u);
    }
    v4 = 0;
  }
LABEL_42:
  result = v4;
  if ( v32 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 4016: range 00000000149C3FC6-00000000149C3FF5
int32_t __cdecl CreateCustomDungeonWatcher::tryUpdateProgressImpl(
        CreateCustomDungeonWatcher *const this,
        Player *player,
        const CreateCustomDungeonEvent *event,
        const CreateCustomDungeonWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 4023: range 00000000149C3FF6-00000000149C4025
int32_t __cdecl PublishCustomDungeonWatcher::tryUpdateProgressImpl(
        PublishCustomDungeonWatcher *const this,
        Player *player,
        const PublishCustomDungeonEvent *event,
        const PublishCustomDungeonWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 4030: range 00000000149C4026-00000000149C409B
int32_t __cdecl PlayOtherCustomDungeonWatcher::tryUpdateProgressImpl(
        PlayOtherCustomDungeonWatcher *const this,
        Player *player,
        const PlayCustomDungeonEvent *event,
        const PlayOtherCustomDungeonWatcherParam *param)
{
  bool *p_is_my_dungeon; // rdx

  p_is_my_dungeon = &event->is_my_dungeon;
  if ( *(char *)(((unsigned __int64)p_is_my_dungeon >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_my_dungeon);
  if ( !event->is_my_dungeon )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 4041: range 00000000149C409C-00000000149C4147
int32_t __cdecl FinishCustomDungeonOfficialWatcher::tryUpdateProgressImpl(
        FinishCustomDungeonOfficialWatcher *const this,
        Player *player,
        const OfficialCustomDungeonFinishEvent *event,
        const FinishCustomDungeonOfficialWatcherParam *param)
{
  uint32_t *p_dungeon_id; // rdx
  uint32_t dungeon_id; // ecx

  p_dungeon_id = &event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_dungeon_id);
  }
  dungeon_id = event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( dungeon_id == param->dungeon_id )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 4051: range 00000000149C4148-00000000149C4280
int32_t __cdecl CustomDungeonOfficialCoinWatcher::tryUpdateProgressImpl(
        CustomDungeonOfficialCoinWatcher *const this,
        Player *player,
        const CustomDungeonOfficialCoinEvent *event,
        const CustomDungeonOfficialCoinWatcherParam *param)
{
  uint32_t *p_dungeon_id; // rdx
  uint32_t dungeon_id; // ecx
  uint32_t coin_num; // ecx

  p_dungeon_id = &event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_dungeon_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_dungeon_id);
  }
  dungeon_id = event->dungeon_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( dungeon_id == param->dungeon_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->coin_num);
    }
    coin_num = event->coin_num;
    if ( *(_BYTE *)(((unsigned __int64)&param->coin_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->coin_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->coin_num);
    }
    if ( coin_num >= param->coin_num )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 4061: range 00000000149C4282-00000000149C438B
int32_t __cdecl GalleryTriathlonWatcher::tryUpdateProgressImpl(
        GalleryTriathlonWatcher *const this,
        Player *player,
        const GalleryTriathlonScoreEvent *event,
        const GalleryTriathlonWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  uint32_t Progress; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    Progress = BaseWatcher::getProgress(this);
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    if ( Progress < event->score )
      BaseWatcher::tryCorrectProgress(this, event->score);
  }
  return 0;
};

// Line 4075: range 00000000149C438C-00000000149C44B2
int32_t __cdecl CaptureEnvAnimalReachNumWatcher::tryUpdateProgressImpl(
        CaptureEnvAnimalReachNumWatcher *const this,
        Player *player,
        const EnvAnimalEvent *event,
        const CaptureEnvAnimalReachNumWatcherParam *param)
{
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-30h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->monster_id_set,
         &event->monster_id) )
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/watcher/watcher.cpp",
      "tryUpdateProgressImpl",
      4080);
    v5 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v11,
           (const char (*)[58])"CaptureEnvAnimalReachNumWatcher add progress, monster_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &event->monster_id);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])", old progress:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->progress_);
    v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])", watcher_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->watcher_id_);
    common::milog::MiLogStream::~MiLogStream(&v11);
    BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 4088: range 00000000149C44B4-00000000149C44E9
int32_t __cdecl HomeUnlockBgmCountWatcher::tryUpdateProgressImpl(
        HomeUnlockBgmCountWatcher *const this,
        Player *player,
        const HomeBgmUnlockEvent *event,
        const HomeUnlockBgmCountWatcherParam *param)
{
  HomeUnlockBgmCountWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 4094: range 00000000149C44EA-00000000149C4558
int32_t __cdecl HomeUnlockBgmCountWatcher::refreshProgressImpl(
        HomeUnlockBgmCountWatcher *const this,
        Player *player,
        const HomeUnlockBgmCountWatcherParam *param)
{
  PlayerHomeComp *HomeComp; // rax
  uint32_t Progress; // eax
  uint32_t count; // [rsp+2Ch] [rbp-14h]

  HomeComp = Player::getHomeComp(player);
  count = PlayerHomeComp::getUnlockedHomeBgmCount(HomeComp);
  if ( count > BaseWatcher::getProgress(this) )
  {
    Progress = BaseWatcher::getProgress(this);
    BaseWatcher::addProgress(this, count - Progress);
  }
  return 0;
};

// Line 4105: range 00000000149C455A-00000000149C4692
int32_t __cdecl GravenInnocenceRaceWatcher::tryUpdateProgressImpl(
        GravenInnocenceRaceWatcher *const this,
        Player *player,
        const GalleryGravenInnocenceRaceScoreEvent *event,
        const GravenInnocenceRaceWatcherParam *param)
{
  uint32_t *p_gallery_id; // rdx
  uint32_t gallery_id; // ecx
  uint32_t score; // ecx

  p_gallery_id = &event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)p_gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(p_gallery_id);
  }
  gallery_id = event->gallery_id;
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( gallery_id == param->gallery_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->score);
    }
    score = event->score;
    if ( *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&param->score);
    }
    if ( score >= param->score )
      BaseWatcher::addProgress(this, 1u);
  }
  return 0;
};

// Line 4115: range 00000000149C4694-00000000149C46C9
int32_t __cdecl GCGObtainCardWatcher::tryUpdateProgressImpl(
        GCGObtainCardWatcher *const this,
        Player *player,
        const GCGAddCardEvent *event,
        const GCGObtainCardWatcherParam *param)
{
  GCGObtainCardWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 4121: range 00000000149C46CA-00000000149C4737
int32_t __cdecl GCGObtainCardWatcher::refreshProgressImpl(
        GCGObtainCardWatcher *const this,
        Player *player,
        const GCGObtainCardWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t total_card_num; // [rsp+24h] [rbp-Ch]
  const GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  total_card_num = GCGDeckSystem::getTotalCardNum(deck_system, GCG_CARD_INVALID);
  if ( total_card_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, total_card_num);
  return 0;
};

// Line 4133: range 00000000149C4738-00000000149C479F
int32_t __cdecl GCGObtainCoinWatcher::tryUpdateProgressImpl(
        GCGObtainCoinWatcher *const this,
        Player *player,
        const GCGCoinEvent *event,
        const GCGObtainCoinWatcherParam *param)
{
  GCGObtainCoinWatcher *v4; // rdx

  v4 = this;
  if ( *(_BYTE *)(((unsigned __int64)&event->count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->count);
  }
  BaseWatcher::addProgress(v4, event->count);
  return 0;
};

// Line 4140: range 00000000149C47A0-00000000149C47D5
int32_t __cdecl GCGObtainCharacterCardWatcher::tryUpdateProgressImpl(
        GCGObtainCharacterCardWatcher *const this,
        Player *player,
        const GCGAddCardEvent *event,
        const GCGObtainCharacterCardWatcherParam *param)
{
  GCGObtainCharacterCardWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 4146: range 00000000149C47D6-00000000149C483E
int32_t __cdecl GCGObtainCharacterCardWatcher::refreshProgressImpl(
        GCGObtainCharacterCardWatcher *const this,
        Player *player,
        const GCGObtainCharacterCardWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t total_character_card_num; // [rsp+24h] [rbp-Ch]
  const GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  total_character_card_num = GCGDeckSystem::getTotalCharacterCardNum(deck_system);
  if ( total_character_card_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, total_character_card_num);
  return 0;
};

// Line 4158: range 00000000149C4840-00000000149C486F
int32_t __cdecl GCGFinishWeekChallengeWatcher::tryUpdateProgressImpl(
        GCGFinishWeekChallengeWatcher *const this,
        Player *player,
        const GCGFinishWeekChallengeEvent *event,
        const GCGFinishWeekChallengeWatcherParam *param)
{
  BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 4165: range 00000000149C4870-00000000149C492B
int32_t __cdecl GCGWorldChallengeTotalStarNumWatcher::tryUpdateProgressImpl(
        GCGWorldChallengeTotalStarNumWatcher *const this,
        Player *player,
        const GCGLevelSettleEvent *event,
        const GCGWorldChallengeTotalStarNumWatcherParam *param)
{
  bool *p_is_win; // rdx

  p_is_win = &event->is_win;
  if ( *(char *)(((unsigned __int64)p_is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_win);
  if ( event->is_win )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->business_type);
    }
    if ( event->business_type == 6 )
      GCGWorldChallengeTotalStarNumWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 4174: range 00000000149C492C-00000000149C4994
int32_t __cdecl GCGWorldChallengeTotalStarNumWatcher::refreshProgressImpl(
        GCGWorldChallengeTotalStarNumWatcher *const this,
        Player *player,
        const GCGWorldChallengeTotalStarNumWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t total_star_num; // [rsp+24h] [rbp-Ch]
  const GCGLevelChallenge *level_challenge; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  level_challenge = PlayerGCGComp::getLevelChallenge(GCGComp);
  total_star_num = GCGLevelChallenge::getWorldChallengeTotalStarNum(level_challenge);
  if ( total_star_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, total_star_num);
  return 0;
};

// Line 4186: range 00000000149C4996-00000000149C49CB
int32_t __cdecl GCGValidDeckNumWatcher::tryUpdateProgressImpl(
        GCGValidDeckNumWatcher *const this,
        Player *player,
        const GCGSaveDeckEvent *event,
        const GCGValidDeckNumWatcherParam *param)
{
  GCGValidDeckNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 4192: range 00000000149C49CC-00000000149C4A60
int32_t __cdecl GCGValidDeckNumWatcher::refreshProgressImpl(
        GCGValidDeckNumWatcher *const this,
        Player *player,
        const GCGValidDeckNumWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t valid_deck_num; // [rsp+24h] [rbp-Ch]
  const GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  valid_deck_num = GCGDeckSystem::getValidDeckNum(deck_system);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  if ( valid_deck_num >= param->valid_deck_num )
    BaseWatcher::addProgress(this, 1u);
  return 0;
};

// Line 4204: range 00000000149C4A62-00000000149C4A97
int32_t __cdecl GCGUnlockGoldFaceNumWatcher::tryUpdateProgressImpl(
        GCGUnlockGoldFaceNumWatcher *const this,
        Player *player,
        const GCGUnlockCardFaceEvent *event,
        const GCGUnlockGoldFaceNumWatcherParam *param)
{
  GCGUnlockGoldFaceNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 4210: range 00000000149C4A98-00000000149C4B05
int32_t __cdecl GCGUnlockGoldFaceNumWatcher::refreshProgressImpl(
        GCGUnlockGoldFaceNumWatcher *const this,
        Player *player,
        const GCGUnlockGoldFaceNumWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t unlock_gold_face_num; // [rsp+24h] [rbp-Ch]
  const GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  unlock_gold_face_num = GCGDeckSystem::getUnlockGoldFaceNum(deck_system, GCG_CARD_INVALID);
  if ( unlock_gold_face_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, unlock_gold_face_num);
  return 0;
};

// Line 4222: range 00000000149C4B06-00000000149C4B3B
int32_t __cdecl GCGUnlockCharacterGoldFaceNumWatcher::tryUpdateProgressImpl(
        GCGUnlockCharacterGoldFaceNumWatcher *const this,
        Player *player,
        const GCGUnlockCardFaceEvent *event,
        const GCGUnlockCharacterGoldFaceNumWatcherParam *param)
{
  GCGUnlockCharacterGoldFaceNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 4228: range 00000000149C4B3C-00000000149C4BA4
int32_t __cdecl GCGUnlockCharacterGoldFaceNumWatcher::refreshProgressImpl(
        GCGUnlockCharacterGoldFaceNumWatcher *const this,
        Player *player,
        const GCGUnlockCharacterGoldFaceNumWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t unlock_character_gold_face_num; // [rsp+24h] [rbp-Ch]
  const GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  unlock_character_gold_face_num = GCGDeckSystem::getUnlockCharacterGoldFaceNum(deck_system);
  if ( unlock_character_gold_face_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, unlock_character_gold_face_num);
  return 0;
};

// Line 4240: range 00000000149C4BA6-00000000149C4BDB
int32_t __cdecl GCGFullProficiencyCharacterNumWatcher::tryUpdateProgressImpl(
        GCGFullProficiencyCharacterNumWatcher *const this,
        Player *player,
        const GCGAddCardProficiencyEvent *event,
        const GCGFullProficiencyCharacterNumWatcherParam *param)
{
  GCGFullProficiencyCharacterNumWatcher::refreshProgressImpl(this, player, param);
  return 0;
};

// Line 4246: range 00000000149C4BDC-00000000149C4C83
int32_t __cdecl GCGFullProficiencyCharacterNumWatcher::refreshProgressImpl(
        GCGFullProficiencyCharacterNumWatcher *const this,
        Player *player,
        const GCGFullProficiencyCharacterNumWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t character_num; // [rsp+24h] [rbp-Ch]
  const GCGDeckSystem *deck_system; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  deck_system = PlayerGCGComp::getDeckSystem(GCGComp);
  if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(param);
  }
  character_num = GCGDeckSystem::getReachProficiencyCharacterNum(deck_system, param->proficiency_value);
  if ( character_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, character_num);
  return 0;
};

// Line 4258: range 00000000149C4C84-00000000149C4D3F
int32_t __cdecl GCGFinishHardCharacterChallengeWatcher::tryUpdateProgressImpl(
        GCGFinishHardCharacterChallengeWatcher *const this,
        Player *player,
        const GCGLevelSettleEvent *event,
        const GCGFinishHardCharacterChallengeWatcherParam *param)
{
  bool *p_is_win; // rdx

  p_is_win = &event->is_win;
  if ( *(char *)(((unsigned __int64)p_is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_win);
  if ( event->is_win )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->business_type);
    }
    if ( event->business_type == 4 )
      GCGFinishHardCharacterChallengeWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 4267: range 00000000149C4D40-00000000149C4DB2
int32_t __cdecl GCGFinishHardCharacterChallengeWatcher::refreshProgressImpl(
        GCGFinishHardCharacterChallengeWatcher *const this,
        Player *player,
        const GCGFinishHardCharacterChallengeWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t finish_num; // [rsp+24h] [rbp-Ch]
  const GCGTavernChallenge *tavern_challenge; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  tavern_challenge = PlayerGCGComp::getTavernChallenge(GCGComp);
  finish_num = GCGTavernChallenge::getFinishSpecifiedDifficultyCharacterChallengeNum(tavern_challenge, 1);
  if ( finish_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, finish_num);
  return 0;
};

// Line 4280: range 00000000149C4DB4-00000000149C4E6F
int32_t __cdecl GCGFinishNormalBossChallengeWatcher::tryUpdateProgressImpl(
        GCGFinishNormalBossChallengeWatcher *const this,
        Player *player,
        const GCGLevelSettleEvent *event,
        const GCGFinishNormalBossChallengeWatcherParam *param)
{
  bool *p_is_win; // rdx

  p_is_win = &event->is_win;
  if ( *(char *)(((unsigned __int64)p_is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_win);
  if ( event->is_win )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->business_type);
    }
    if ( event->business_type == 7 )
      GCGFinishNormalBossChallengeWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 4289: range 00000000149C4E70-00000000149C4EE2
int32_t __cdecl GCGFinishNormalBossChallengeWatcher::refreshProgressImpl(
        GCGFinishNormalBossChallengeWatcher *const this,
        Player *player,
        const GCGFinishNormalBossChallengeWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t finish_num; // [rsp+24h] [rbp-Ch]
  const GCGLevelChallenge *level_challenge; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  level_challenge = PlayerGCGComp::getLevelChallenge(GCGComp);
  finish_num = GCGLevelChallenge::getFinishSpecifiedDifficultyBossChallengeNum(level_challenge, 0);
  if ( finish_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, finish_num);
  return 0;
};

// Line 4302: range 00000000149C4EE4-00000000149C4F9F
int32_t __cdecl GCGFinishHardBossChallengeWatcher::tryUpdateProgressImpl(
        GCGFinishHardBossChallengeWatcher *const this,
        Player *player,
        const GCGLevelSettleEvent *event,
        const GCGFinishHardBossChallengeWatcherParam *param)
{
  bool *p_is_win; // rdx

  p_is_win = &event->is_win;
  if ( *(char *)(((unsigned __int64)p_is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_win);
  if ( event->is_win )
  {
    if ( *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->business_type >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->business_type);
    }
    if ( event->business_type == 7 )
      GCGFinishHardBossChallengeWatcher::refreshProgressImpl(this, player, param);
  }
  return 0;
};

// Line 4311: range 00000000149C4FA0-00000000149C5012
int32_t __cdecl GCGFinishHardBossChallengeWatcher::refreshProgressImpl(
        GCGFinishHardBossChallengeWatcher *const this,
        Player *player,
        const GCGFinishHardBossChallengeWatcherParam *param)
{
  PlayerGCGComp *GCGComp; // rax
  uint32_t finish_num; // [rsp+24h] [rbp-Ch]
  const GCGLevelChallenge *level_challenge; // [rsp+28h] [rbp-8h]

  GCGComp = Player::getGCGComp(player);
  level_challenge = PlayerGCGComp::getLevelChallenge(GCGComp);
  finish_num = GCGLevelChallenge::getFinishSpecifiedDifficultyBossChallengeNum(level_challenge, 1);
  if ( finish_num > BaseWatcher::getProgress(this) )
    BaseWatcher::tryCorrectProgress(this, finish_num);
  return 0;
};

// Line 4324: range 00000000149C5014-00000000149C521B
int32_t __cdecl GCGChallengeProgressWatcher::tryUpdateProgressImpl(
        GCGChallengeProgressWatcher *const this,
        Player *player,
        const GCGChallengeProgressEvent *event,
        const GCGChallengeProgressWatcherParam *param)
{
  bool *p_is_win; // rdx
  std::pair<unsigned int const,unsigned int> *v6; // rax
  std::pair<unsigned int const,unsigned int> *v7; // rdx
  GCGChallengeProgressWatcher *v8; // rcx
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *challenge_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *progress; // [rsp+40h] [rbp-10h]
  std::pair<unsigned int const,unsigned int> __in; // [rsp+48h] [rbp-8h] BYREF

  p_is_win = &event->is_win;
  if ( *(char *)(((unsigned __int64)p_is_win >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(p_is_win);
  if ( !event->is_win )
  {
    if ( *(char *)(((unsigned __int64)param >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(param);
    if ( param->is_win )
      return 0;
  }
  __for_range = &event->gcg_challenge_id_progress_map;
  __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(&event->gcg_challenge_id_progress_map)._M_node;
  __for_end._M_node = std::map<unsigned int,unsigned int>::end(&event->gcg_challenge_id_progress_map)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = (std::pair<unsigned int const,unsigned int> *)std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
    v7 = v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    __in = *v7;
    challenge_id = std::get<0ul,unsigned int const,unsigned int>(&__in);
    progress = std::get<1ul,unsigned int const,unsigned int>(&__in);
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
           &param->gcg_challenge_id_set,
           challenge_id) )
    {
      v8 = this;
      if ( *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(progress);
      }
      BaseWatcher::addProgress(v8, *progress);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 4344: range 00000000149C521C-00000000149C52CD
int32_t __cdecl BuyShopItemIdWatcher::tryUpdateProgressImpl(
        BuyShopItemIdWatcher *const this,
        Player *player,
        const PlayerBuyShopEvent *event,
        const BuyShopItemIdWatcherParam *param)
{
  BuyShopItemIdWatcher *v5; // rdx

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->shop_type_set,
         &event->shop_type)
    && common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->item_id_set,
         &event->item_id) )
  {
    v5 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->buy_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->buy_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->buy_count);
    }
    BaseWatcher::addProgress(v5, event->buy_count);
  }
  return 0;
};

// Line 4357: range 00000000149C52CE-00000000149C545A
int32_t __cdecl BuyShopGoodsCountWatcher::tryUpdateProgressImpl(
        BuyShopGoodsCountWatcher *const this,
        Player *player,
        const PlayerBuyShopEvent *event,
        const BuyShopGoodsCountWatcherParam *param)
{
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  BuyShopGoodsCountWatcher *v6; // rdx
  const data::MaterialExcelConfig *material_config_ptr; // [rsp+28h] [rbp-28h]
  std::shared_ptr<Config> v10[2]; // [rsp+30h] [rbp-20h] BYREF

  if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
         &param->shop_type_set,
         &event->shop_type) )
  {
    if ( !std::unordered_set<unsigned int>::empty(&param->material_type_set) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)v10);
      p_material_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v10)->design_config.txt_config_mgr.material_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->item_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&event->item_id);
      }
      material_config_ptr = data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                              p_material_config_mgr,
                              event->item_id);
      std::shared_ptr<Config>::~shared_ptr(v10);
      if ( !material_config_ptr )
        return 0;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,data::MaterialType>(
              &param->material_type_set,
              &material_config_ptr->material_type) )
        return 0;
    }
    v6 = this;
    if ( *(_BYTE *)(((unsigned __int64)&event->buy_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->buy_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->buy_count);
    }
    BaseWatcher::addProgress(v6, event->buy_count);
  }
  return 0;
};

// Line 4383: range 00000000149C545C-00000000149C5540
int32_t __cdecl EnterSceneNotDungeonWatcher::tryUpdateProgressImpl(
        EnterSceneNotDungeonWatcher *const this,
        Player *player,
        const PostEnterSceneEvent *event,
        const EnterSceneNotDungeonWatcherParam *param)
{
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  data::SceneType SceneTypeBySceneId; // eax
  bool v6; // bl
  std::shared_ptr<Config> v9[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v9);
  p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v9)->design_config.txt_config_mgr.scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&event->dst_scene_id);
  }
  SceneTypeBySceneId = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, event->dst_scene_id);
  v6 = !SceneExcelConfigMgr::isDungeonScene(SceneTypeBySceneId);
  std::shared_ptr<Config>::~shared_ptr(v9);
  if ( v6 )
    BaseWatcher::tryCorrectProgress(this, 1u);
  return 0;
};

// Line 4392: range 00000000149C5542-00000000149C569D
int32_t __cdecl EnterSceneNotDungeonWatcher::refreshProgressImpl(
        EnterSceneNotDungeonWatcher *const this,
        Player *player,
        const EnterSceneNotDungeonWatcherParam *param)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  data::SceneType SceneType; // eax
  int32_t result; // eax
  char v9[112]; // [rsp+20h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 scene_ptr:4393";
  *(_QWORD *)(v3 + 16) = EnterSceneNotDungeonWatcher::refreshProgressImpl;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  Player::getSceneComp(player);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 32));
  if ( std::operator!=<Scene>((const std::shared_ptr<Scene> *)(v3 + 32), 0LL) )
  {
    v6 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
    SceneType = Scene::getSceneType(v6);
    if ( !SceneExcelConfigMgr::isDungeonScene(SceneType) )
      BaseWatcher::tryCorrectProgress(this, 1u);
  }
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 32));
  result = 0;
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

// Line 4402: range 00000000149E00E9-00000000149E011B
void __cdecl GLOBAL__sub_I_merge_single_script_lib_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
  __static_initialization_and_destruction_2(1, 0xFFFF);
};

// Line 4402: range 00000000149DD372-00000000149DF9A6
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
  boost::asio::detail::posix_global_impl<boost::asio::system_context> *v11; // rsi
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  _BYTE *v16; // rcx
  _BYTE *v17; // rcx
  char v18; // dl
  __int64 v19; // rdx
  _BYTE *v20; // rcx
  _BYTE *v21; // rcx
  char v22; // dl
  __int64 v23; // rdx
  luabind::detail::class_id v24; // rax
  _BYTE *v25; // rcx
  _BYTE *v26; // rcx
  char v27; // dl
  __int64 v28; // rdx
  luabind::detail::class_id v29; // rax
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  char v32; // dl
  __int64 v33; // rdx
  luabind::detail::class_id v34; // rax
  _BYTE *v35; // rcx
  _BYTE *v36; // rcx
  char v37; // dl
  __int64 v38; // rdx
  const char *v39; // rcx
  _BYTE *v40; // rcx
  _BYTE *v41; // rcx
  char v42; // dl
  __int64 v43; // rdx
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  char v46; // dl
  __int64 v47; // rdx
  _BYTE *v48; // rcx
  _BYTE *v49; // rcx
  char v50; // dl
  __int64 v51; // rdx
  const char *v52; // rcx
  _BYTE *v53; // rcx
  _BYTE *v54; // rcx
  char v55; // dl
  __int64 v56; // rdx
  luabind::detail::class_id v57; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_script_lib.cpp");
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
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   5LL);
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  5LL);
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     5LL);
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
        misc_category = (const boost::system::error_category *)__asan_report_store8(
                                                                 &boost::asio::error::misc_category,
                                                                 5LL);
      boost::asio::error::misc_category = misc_category;
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(
        &marker_TRIGGER_COMBAT_CONFIG_COMMON,
        TRIGGER_COMBAT_CONFIG_COMMON);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_ELEMENT_VIEW, TRIGGER_ELEMENT_VIEW);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_ENTER_AIRFLOW, TRIGGER_ENTER_AIRFLOW);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_NEW_MONSTER, TRIGGER_NEW_MONSTER);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_NEW_AFFIX, TRIGGER_NEW_AFFIX);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(
        &marker_TRIGGER_CHANGE_INPUT_DEVICE_TYPE,
        TRIGGER_CHANGE_INPUT_DEVICE_TYPE);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(
        &marker_TRIGGER_PAIMON_ANGRY_VOICE_EASTER_EGG,
        TRIGGER_PAIMON_ANGRY_VOICE_EASTER_EGG);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_WIND_CRYSTAL, TRIGGER_WIND_CRYSTAL);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(
        &marker_TRIGGER_FISHING_KEEP_BONUS,
        TRIGGER_FISHING_KEEP_BONUS);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_TAKE_PHOTO, TRIGGER_TAKE_PHOTO);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_GENERAL_GADGET, TRIGGER_GENERAL_GADGET);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(
        &marker_TRIGGER_GENERAL_GADGET_OR,
        TRIGGER_GENERAL_GADGET_OR);
      WatcherFactoryMarker<ClientWatcher>::WatcherFactoryMarker(&marker_TRIGGER_GCG_SHARE_DECK, TRIGGER_GCG_SHARE_DECK);
      WatcherFactoryMarker<CombatMulticondConfigCommonWatcher>::WatcherFactoryMarker(
        &maker_CombatMulticondConfigCommonWatcher,
        TRIGGER_COMBAT_MULTICOND_CONFIG_COMMON);
      ListenEventMarker<CombatMulticondConfigCommonWatcher>::ListenEventMarker(
        &listen_maker_CombatMulticondConfigCommonWatcher,
        TRIGGER_COMBAT_MULTICOND_CONFIG_COMMON);
      WatcherFactoryMarker<ElementBallWatcher>::WatcherFactoryMarker(&maker_ElementBallWatcher, TRIGGER_ELEMENT_BALL);
      ListenEventMarker<ElementBallWatcher>::ListenEventMarker(&listen_maker_ElementBallWatcher, TRIGGER_ELEMENT_BALL);
      WatcherFactoryMarker<WorldLevelUpWatcher>::WatcherFactoryMarker(
        &maker_WorldLevelUpWatcher,
        TRIGGER_WORLD_LEVEL_UP);
      ListenEventMarker<WorldLevelUpWatcher>::ListenEventMarker(
        &listen_maker_WorldLevelUpWatcher,
        TRIGGER_WORLD_LEVEL_UP);
      WatcherFactoryMarker<DungeonEntryToBeExploredWatcher>::WatcherFactoryMarker(
        &maker_DungeonEntryToBeExploredWatcher,
        TRIGGER_DUNGEON_ENTRY_TO_BE_EXPLORED);
      ListenEventMarker<DungeonEntryToBeExploredWatcher>::ListenEventMarker(
        &listen_maker_DungeonEntryToBeExploredWatcher,
        TRIGGER_DUNGEON_ENTRY_TO_BE_EXPLORED);
      WatcherFactoryMarker<UnlockGateTempleWatcher>::WatcherFactoryMarker(
        &maker_UnlockGateTempleWatcher,
        TRIGGER_UNLOCK_GATE_TEMPLE);
      ListenEventMarker<UnlockGateTempleWatcher>::ListenEventMarker(
        &listen_maker_UnlockGateTempleWatcher,
        TRIGGER_UNLOCK_GATE_TEMPLE);
      WatcherFactoryMarker<UnlockAreaWatcher>::WatcherFactoryMarker(&maker_UnlockAreaWatcher, TRIGGER_UNLOCK_AREA);
      ListenEventMarker<UnlockAreaWatcher>::ListenEventMarker(&listen_maker_UnlockAreaWatcher, TRIGGER_UNLOCK_AREA);
      WatcherFactoryMarker<UnlockTransPointWatcher>::WatcherFactoryMarker(
        &maker_UnlockTransPointWatcher,
        TRIGGER_UNLOCK_TRANS_POINT);
      ListenEventMarker<UnlockTransPointWatcher>::ListenEventMarker(
        &listen_maker_UnlockTransPointWatcher,
        TRIGGER_UNLOCK_TRANS_POINT);
      WatcherFactoryMarker<OpenChestWithGadgetIdWatcher>::WatcherFactoryMarker(
        &maker_OpenChestWithGadgetIdWatcher,
        TRIGGER_OPEN_CHEST_WITH_GADGET_ID);
      ListenEventMarker<OpenChestWithGadgetIdWatcher>::ListenEventMarker(
        &listen_maker_OpenChestWithGadgetIdWatcher,
        TRIGGER_OPEN_CHEST_WITH_GADGET_ID);
      WatcherFactoryMarker<OpenWorldChestWatcher>::WatcherFactoryMarker(
        &maker_OpenWorldChestWatcher,
        TRIGGER_OPEN_WORLD_CHEST);
      ListenEventMarker<OpenWorldChestWatcher>::ListenEventMarker(
        &listen_maker_OpenWorldChestWatcher,
        TRIGGER_OPEN_WORLD_CHEST);
      WatcherFactoryMarker<EnterClimateAreaWatcher>::WatcherFactoryMarker(
        &maker_EnterClimateAreaWatcher,
        TRIGGER_ENTER_CLIMATE_AREA);
      ListenEventMarker<EnterClimateAreaWatcher>::ListenEventMarker(
        &listen_maker_EnterClimateAreaWatcher,
        TRIGGER_ENTER_CLIMATE_AREA);
      WatcherFactoryMarker<CityLevelUpWatcher>::WatcherFactoryMarker(&maker_CityLevelUpWatcher, TRIGGER_CITY_LEVEL_UP);
      ListenEventMarker<CityLevelUpWatcher>::ListenEventMarker(&listen_maker_CityLevelUpWatcher, TRIGGER_CITY_LEVEL_UP);
      WatcherFactoryMarker<MonsterDieWatcher>::WatcherFactoryMarker(&maker_MonsterDieWatcher, TRIGGER_MONSTER_DIE);
      ListenEventMarker<MonsterDieWatcher>::ListenEventMarker(&listen_maker_MonsterDieWatcher, TRIGGER_MONSTER_DIE);
      WatcherFactoryMarker<MonsterCategoryDieWatcher>::WatcherFactoryMarker(
        &maker_MonsterCategoryDieWatcher,
        TRIGGER_MONSTER_CATEGORY_DIE);
      ListenEventMarker<MonsterCategoryDieWatcher>::ListenEventMarker(
        &listen_maker_MonsterCategoryDieWatcher,
        TRIGGER_MONSTER_CATEGORY_DIE);
      WatcherFactoryMarker<UnlockSpecificTransPointWatcher>::WatcherFactoryMarker(
        &maker_UnlockSpecificTransPointWatcher,
        TRIGGER_UNLOCK_SPECIFIC_TRANS_POINT);
      ListenEventMarker<UnlockSpecificTransPointWatcher>::ListenEventMarker(
        &listen_maker_UnlockSpecificTransPointWatcher,
        TRIGGER_UNLOCK_SPECIFIC_TRANS_POINT);
      WatcherFactoryMarker<PlatformStartMoveWatcher>::WatcherFactoryMarker(
        &maker_PlatformStartMoveWatcher,
        TRIGGER_PLATFORM_START_MOVE);
      ListenEventMarker<PlatformStartMoveWatcher>::ListenEventMarker(
        &listen_maker_PlatformStartMoveWatcher,
        TRIGGER_PLATFORM_START_MOVE);
      WatcherFactoryMarker<WorldGatherWatcher>::WatcherFactoryMarker(&maker_WorldGatherWatcher, TRIGGER_WORLD_GATHER);
      ListenEventMarker<WorldGatherWatcher>::ListenEventMarker(&listen_maker_WorldGatherWatcher, TRIGGER_WORLD_GATHER);
      WatcherFactoryMarker<TakeGeneralRewardWatcher>::WatcherFactoryMarker(
        &maker_TakeGeneralRewardWatcher,
        TRIGGER_TAKE_GENERAL_REWARD);
      ListenEventMarker<TakeGeneralRewardWatcher>::ListenEventMarker(
        &listen_maker_TakeGeneralRewardWatcher,
        TRIGGER_TAKE_GENERAL_REWARD);
      WatcherFactoryMarker<InteractGadgetWithInteractIdWatcher>::WatcherFactoryMarker(
        &maker_InteractGadgetWithInteractIdWatcher,
        TRIGGER_INTERACT_GADGET_WITH_INTERACT_ID);
      ListenEventMarker<InteractGadgetWithInteractIdWatcher>::ListenEventMarker(
        &listen_maker_InteractGadgetWithInteractIdWatcher,
        TRIGGER_INTERACT_GADGET_WITH_INTERACT_ID);
      WatcherFactoryMarker<TakeDungeonFirstPassRewardWatcher>::WatcherFactoryMarker(
        &maker_TakeDungeonFirstPassRewardWatcher,
        TRIGGER_TAKE_DUNGEON_FIRST_PASS_REWARD);
      ListenEventMarker<TakeDungeonFirstPassRewardWatcher>::ListenEventMarker(
        &listen_maker_TakeDungeonFirstPassRewardWatcher,
        TRIGGER_TAKE_DUNGEON_FIRST_PASS_REWARD);
      WatcherFactoryMarker<ObtainAvatarWatcher>::WatcherFactoryMarker(&maker_ObtainAvatarWatcher, TRIGGER_OBTAIN_AVATAR);
      ListenEventMarker<ObtainAvatarWatcher>::ListenEventMarker(
        &listen_maker_ObtainAvatarWatcher,
        TRIGGER_OBTAIN_AVATAR);
      WatcherFactoryMarker<PlayerLevelWatcher>::WatcherFactoryMarker(&maker_PlayerLevelWatcher, TRIGGER_PLAYER_LEVEL);
      ListenEventMarker<PlayerLevelWatcher>::ListenEventMarker(&listen_maker_PlayerLevelWatcher, TRIGGER_PLAYER_LEVEL);
      WatcherFactoryMarker<AvatarUpgradeWatcher>::WatcherFactoryMarker(
        &maker_AvatarUpgradeWatcher,
        TRIGGER_AVATAR_UPGRADE);
      ListenEventMarker<AvatarUpgradeWatcher>::ListenEventMarker(
        &listen_maker_AvatarUpgradeWatcher,
        TRIGGER_AVATAR_UPGRADE);
      WatcherFactoryMarker<AvatarPromoteWatcher>::WatcherFactoryMarker(
        &maker_AvatarPromoteWatcher,
        TRIGGER_AVATAR_PROMOTE);
      ListenEventMarker<AvatarPromoteWatcher>::ListenEventMarker(
        &listen_maker_AvatarPromoteWatcher,
        TRIGGER_AVATAR_PROMOTE);
      WatcherFactoryMarker<WeaponUpgradeWatcher>::WatcherFactoryMarker(
        &maker_WeaponUpgradeWatcher,
        TRIGGER_WEAPON_UPGRADE);
      ListenEventMarker<WeaponUpgradeWatcher>::ListenEventMarker(
        &listen_maker_WeaponUpgradeWatcher,
        TRIGGER_WEAPON_UPGRADE);
      WatcherFactoryMarker<WeaponPromoteWatcher>::WatcherFactoryMarker(
        &maker_WeaponPromoteWatcher,
        TRIGGER_WEAPON_PROMOTE);
      ListenEventMarker<WeaponPromoteWatcher>::ListenEventMarker(
        &listen_maker_WeaponPromoteWatcher,
        TRIGGER_WEAPON_PROMOTE);
      WatcherFactoryMarker<ReliquaryUpgradeWatcher>::WatcherFactoryMarker(
        &maker_ReliquaryUpgradeWatcher,
        TRIGGER_RELIQUARY_UPGRADE);
      ListenEventMarker<ReliquaryUpgradeWatcher>::ListenEventMarker(
        &listen_maker_ReliquaryUpgradeWatcher,
        TRIGGER_RELIQUARY_UPGRADE);
      WatcherFactoryMarker<ReliquaryUpgradeEqualRankLevelWatcher>::WatcherFactoryMarker(
        &maker_ReliquaryUpgradeEqualRankLevelWatcher,
        TRIGGER_RELIQUARY_UPGRADE_EQUAL_RANK_LEVEL);
      ListenEventMarker<ReliquaryUpgradeEqualRankLevelWatcher>::ListenEventMarker(
        &listen_maker_ReliquaryUpgradeEqualRankLevelWatcher,
        TRIGGER_RELIQUARY_UPGRADE_EQUAL_RANK_LEVEL);
      WatcherFactoryMarker<SpecifiedWeaponUpgradeWatcher>::WatcherFactoryMarker(
        &maker_SpecifiedWeaponUpgradeWatcher,
        TRIGGER_SPECIFIED_WEAPON_UPGRADE);
      ListenEventMarker<SpecifiedWeaponUpgradeWatcher>::ListenEventMarker(
        &listen_maker_SpecifiedWeaponUpgradeWatcher,
        TRIGGER_SPECIFIED_WEAPON_UPGRADE);
      WatcherFactoryMarker<WearReliquaryWatcher>::WatcherFactoryMarker(
        &maker_WearReliquaryWatcher,
        TRIGGER_WEAR_RELIQUARY);
      ListenEventMarker<WearReliquaryWatcher>::ListenEventMarker(
        &listen_maker_WearReliquaryWatcher,
        TRIGGER_WEAR_RELIQUARY);
      WatcherFactoryMarker<UpgradeTalentWatcher>::WatcherFactoryMarker(
        &maker_UpgradeTalentWatcher,
        TRIGGER_UPGRADE_TALENT);
      ListenEventMarker<UpgradeTalentWatcher>::ListenEventMarker(
        &listen_maker_UpgradeTalentWatcher,
        TRIGGER_UPGRADE_TALENT);
      WatcherFactoryMarker<UnlockRecipeWatcher>::WatcherFactoryMarker(&maker_UnlockRecipeWatcher, TRIGGER_UNLOCK_RECIPE);
      ListenEventMarker<UnlockRecipeWatcher>::ListenEventMarker(
        &listen_maker_UnlockRecipeWatcher,
        TRIGGER_UNLOCK_RECIPE);
      WatcherFactoryMarker<ReliquarySetNumWatcher>::WatcherFactoryMarker(
        &maker_ReliquarySetNumWatcher,
        TRIGGER_RELIQUARY_SET_NUM);
      ListenEventMarker<ReliquarySetNumWatcher>::ListenEventMarker(
        &listen_maker_ReliquarySetNumWatcher,
        TRIGGER_RELIQUARY_SET_NUM);
      WatcherFactoryMarker<ObtainMaterialNumWatcher>::WatcherFactoryMarker(
        &maker_ObtainMaterialNumWatcher,
        TRIGGER_OBTAIN_MATERIAL_NUM);
      ListenEventMarker<ObtainMaterialNumWatcher>::ListenEventMarker(
        &listen_maker_ObtainMaterialNumWatcher,
        TRIGGER_OBTAIN_MATERIAL_NUM);
      WatcherFactoryMarker<PossessMaterialNumWatcher>::WatcherFactoryMarker(
        &maker_PossessMaterialNumWatcher,
        TRIGGER_POSSESS_MATERIAL_NUM);
      ListenEventMarker<PossessMaterialNumWatcher>::ListenEventMarker(
        &listen_maker_PossessMaterialNumWatcher,
        TRIGGER_POSSESS_MATERIAL_NUM);
      WatcherFactoryMarker<ObtainReliquaryNumWatcher>::WatcherFactoryMarker(
        &maker_ObtainReliquaryNumWatcher,
        TRIGGER_OBTAIN_RELIQUARY_NUM);
      ListenEventMarker<ObtainReliquaryNumWatcher>::ListenEventMarker(
        &listen_maker_ObtainReliquaryNumWatcher,
        TRIGGER_OBTAIN_RELIQUARY_NUM);
      WatcherFactoryMarker<GachaNumWatcher>::WatcherFactoryMarker(&maker_GachaNumWatcher, TRIGGER_GACHA_NUM);
      ListenEventMarker<GachaNumWatcher>::ListenEventMarker(&listen_maker_GachaNumWatcher, TRIGGER_GACHA_NUM);
      WatcherFactoryMarker<FetterMaxLevelAvatarNumWatcher>::WatcherFactoryMarker(
        &maker_FetterMaxLevelAvatarNumWatcher,
        TRIGGER_FETTER_LEVEL_AVATAR_NUM);
      ListenEventMarker<FetterMaxLevelAvatarNumWatcher>::ListenEventMarker(
        &listen_maker_FetterMaxLevelAvatarNumWatcher,
        TRIGGER_FETTER_LEVEL_AVATAR_NUM);
      WatcherFactoryMarker<AvatarPromoteExcludingPlayerWatcher>::WatcherFactoryMarker(
        &maker_AvatarPromoteExcludingPlayerWatcher,
        TRIGGER_AVATAR_PROMOTE_EXCLUDING_PLAYER);
      ListenEventMarker<AvatarPromoteExcludingPlayerWatcher>::ListenEventMarker(
        &listen_maker_AvatarPromoteExcludingPlayerWatcher,
        TRIGGER_AVATAR_PROMOTE_EXCLUDING_PLAYER);
      WatcherFactoryMarker<DailyTaskWatcher>::WatcherFactoryMarker(&maker_DailyTaskWatcher, TRIGGER_DAILY_TASK);
      ListenEventMarker<DailyTaskWatcher>::ListenEventMarker(&listen_maker_DailyTaskWatcher, TRIGGER_DAILY_TASK);
      WatcherFactoryMarker<RandTaskWatcher>::WatcherFactoryMarker(&maker_RandTaskWatcher, TRIGGER_RAND_TASK);
      ListenEventMarker<RandTaskWatcher>::ListenEventMarker(&listen_maker_RandTaskWatcher, TRIGGER_RAND_TASK);
      WatcherFactoryMarker<AvatarExpeditionWatcher>::WatcherFactoryMarker(
        &maker_AvatarExpeditionWatcher,
        TRIGGER_AVATAR_EXPEDITION);
      ListenEventMarker<AvatarExpeditionWatcher>::ListenEventMarker(
        &listen_maker_AvatarExpeditionWatcher,
        TRIGGER_AVATAR_EXPEDITION);
      WatcherFactoryMarker<FinishTowerLevelWatcher>::WatcherFactoryMarker(
        &maker_FinishTowerLevelWatcher,
        TRIGGER_FINISH_TOWER_LEVEL);
      ListenEventMarker<FinishTowerLevelWatcher>::ListenEventMarker(
        &listen_maker_FinishTowerLevelWatcher,
        TRIGGER_FINISH_TOWER_LEVEL);
      WatcherFactoryMarker<WorldBossRewardWatcher>::WatcherFactoryMarker(
        &maker_WorldBossRewardWatcher,
        TRIGGER_WORLD_BOSS_REWARD);
      ListenEventMarker<WorldBossRewardWatcher>::ListenEventMarker(
        &listen_maker_WorldBossRewardWatcher,
        TRIGGER_WORLD_BOSS_REWARD);
      WatcherFactoryMarker<FinishDungeonWatcher>::WatcherFactoryMarker(
        &maker_FinishDungeonWatcher,
        TRIGGER_FINISH_DUNGEON);
      ListenEventMarker<FinishDungeonWatcher>::ListenEventMarker(
        &listen_maker_FinishDungeonWatcher,
        TRIGGER_FINISH_DUNGEON);
      WatcherFactoryMarker<AnyRequaryUpgradeWatcher>::WatcherFactoryMarker(
        &maker_AnyRequaryUpgradeWatcher,
        TRIGGER_ANY_RELIQUARY_UPGRADE);
      ListenEventMarker<AnyRequaryUpgradeWatcher>::ListenEventMarker(
        &listen_maker_AnyRequaryUpgradeWatcher,
        TRIGGER_ANY_RELIQUARY_UPGRADE);
      WatcherFactoryMarker<StartAvatarExpeditionWatcher>::WatcherFactoryMarker(
        &maker_StartAvatarExpeditionWatcher,
        TRIGGER_START_AVATAR_EXPEDITION);
      ListenEventMarker<StartAvatarExpeditionWatcher>::ListenEventMarker(
        &listen_maker_StartAvatarExpeditionWatcher,
        TRIGGER_START_AVATAR_EXPEDITION);
      WatcherFactoryMarker<OpenBlossomChestWatcher>::WatcherFactoryMarker(
        &maker_OpenBlossomChestWatcher,
        TRIGGER_OPEN_BLOSSOM_CHEST);
      ListenEventMarker<OpenBlossomChestWatcher>::ListenEventMarker(
        &listen_maker_OpenBlossomChestWatcher,
        TRIGGER_OPEN_BLOSSOM_CHEST);
      WatcherFactoryMarker<FinishBlossomProgressWatcher>::WatcherFactoryMarker(
        &maker_FinishBlossomProgressWatcher,
        TRIGGER_FINISH_BLOSSOM_PROGRESS);
      ListenEventMarker<FinishBlossomProgressWatcher>::ListenEventMarker(
        &listen_maker_FinishBlossomProgressWatcher,
        TRIGGER_FINISH_BLOSSOM_PROGRESS);
      WatcherFactoryMarker<FinishRoutineWatcher>::WatcherFactoryMarker(
        &maker_FinishRoutineWatcher,
        TRIGGER_FINISH_ROUTINE);
      ListenEventMarker<FinishRoutineWatcher>::ListenEventMarker(
        &listen_maker_FinishRoutineWatcher,
        TRIGGER_FINISH_ROUTINE);
      WatcherFactoryMarker<ActivityExpeditionFinishWatcher>::WatcherFactoryMarker(
        &maker_ActivityExpeditionFinishWatcher,
        TRIGGER_ACTIVITY_EXPEDITION_FINISH);
      ListenEventMarker<ActivityExpeditionFinishWatcher>::ListenEventMarker(
        &listen_maker_ActivityExpeditionFinishWatcher,
        TRIGGER_ACTIVITY_EXPEDITION_FINISH);
      WatcherFactoryMarker<ActivityChannellerSlabLoopDungeonTotalScoreWatcher>::WatcherFactoryMarker(
        &maker_ActivityChannellerSlabLoopDungeonTotalScoreWatcher,
        TRIGGER_ACTIVITY_CHANNELLER_SLAB_LOOP_DUNGEON_TOTAL_SCORE);
      ListenEventMarker<ActivityChannellerSlabLoopDungeonTotalScoreWatcher>::ListenEventMarker(
        &listen_maker_ActivityChannellerSlabLoopDungeonTotalScoreWatcher,
        TRIGGER_ACTIVITY_CHANNELLER_SLAB_LOOP_DUNGEON_TOTAL_SCORE);
      WatcherFactoryMarker<DoCookWatcher>::WatcherFactoryMarker(&maker_DoCookWatcher, TRIGGER_DO_COOK);
      ListenEventMarker<DoCookWatcher>::ListenEventMarker(&listen_maker_DoCookWatcher, TRIGGER_DO_COOK);
      WatcherFactoryMarker<DoForgeWatcher>::WatcherFactoryMarker(&maker_DoForgeWatcher, TRIGGER_DO_FORGE);
      ListenEventMarker<DoForgeWatcher>::ListenEventMarker(&listen_maker_DoForgeWatcher, TRIGGER_DO_FORGE);
      WatcherFactoryMarker<DoCompoundWatcher>::WatcherFactoryMarker(&maker_DoCompoundWatcher, TRIGGER_DO_COMPOUND);
      ListenEventMarker<DoCompoundWatcher>::ListenEventMarker(&listen_maker_DoCompoundWatcher, TRIGGER_DO_COMPOUND);
      WatcherFactoryMarker<DoCombineWatcher>::WatcherFactoryMarker(&maker_DoCombineWatcher, TRIGGER_DO_COMBINE);
      ListenEventMarker<DoCombineWatcher>::ListenEventMarker(&listen_maker_DoCombineWatcher, TRIGGER_DO_COMBINE);
      WatcherFactoryMarker<BuyShopGoodsWatcher>::WatcherFactoryMarker(
        &maker_BuyShopGoodsWatcher,
        TRIGGER_BUY_SHOP_GOODS);
      ListenEventMarker<BuyShopGoodsWatcher>::ListenEventMarker(
        &listen_maker_BuyShopGoodsWatcher,
        TRIGGER_BUY_SHOP_GOODS);
      WatcherFactoryMarker<ForgeWeaponWatcher>::WatcherFactoryMarker(&maker_ForgeWeaponWatcher, TRIGGER_FORGE_WEAPON);
      ListenEventMarker<ForgeWeaponWatcher>::ListenEventMarker(&listen_maker_ForgeWeaponWatcher, TRIGGER_FORGE_WEAPON);
      WatcherFactoryMarker<BuyShopGoodsAndWatcher>::WatcherFactoryMarker(
        &maker_BuyShopGoodsAndWatcher,
        TRIGGER_BUY_SHOP_GOODS_AND);
      ListenEventMarker<BuyShopGoodsAndWatcher>::ListenEventMarker(
        &listen_maker_BuyShopGoodsAndWatcher,
        TRIGGER_BUY_SHOP_GOODS_AND);
      WatcherFactoryMarker<MpPlayBattleWinWatcher>::WatcherFactoryMarker(
        &maker_MpPlayBattleWinWatcher,
        TRIGGER_MP_PLAY_BATTLE_WIN);
      ListenEventMarker<MpPlayBattleWinWatcher>::ListenEventMarker(
        &listen_maker_MpPlayBattleWinWatcher,
        TRIGGER_MP_PLAY_BATTLE_WIN);
      WatcherFactoryMarker<KillGroupMonsterWatcher>::WatcherFactoryMarker(
        &maker_KillGroupMonsterWatcher,
        TRIGGER_KILL_GROUP_MONSTER);
      ListenEventMarker<KillGroupMonsterWatcher>::ListenEventMarker(
        &listen_maker_KillGroupMonsterWatcher,
        TRIGGER_KILL_GROUP_MONSTER);
      WatcherFactoryMarker<KillGroupSpecificMonsterWatcher>::WatcherFactoryMarker(
        &maker_KillGroupSpecificMonsterWatcher,
        TRIGGER_KILL_GROUP_SPECIFIC_MONSTER);
      ListenEventMarker<KillGroupSpecificMonsterWatcher>::ListenEventMarker(
        &listen_maker_KillGroupSpecificMonsterWatcher,
        TRIGGER_KILL_GROUP_SPECIFIC_MONSTER);
      WatcherFactoryMarker<MpPlayGroupStatisticWatcher>::WatcherFactoryMarker(
        &maker_MpPlayGroupStatisticWatcher,
        TRIGGER_MP_PLAY_GROUP_STATISTIC);
      ListenEventMarker<MpPlayGroupStatisticWatcher>::ListenEventMarker(
        &listen_maker_MpPlayGroupStatisticWatcher,
        TRIGGER_MP_PLAY_GROUP_STATISTIC);
      WatcherFactoryMarker<MpPlayReachScoreWatcher>::WatcherFactoryMarker(
        &maker_MpPlayReachScoreWatcher,
        TRIGGER_REACH_MP_PLAY_SCORE);
      ListenEventMarker<MpPlayReachScoreWatcher>::ListenEventMarker(
        &listen_maker_MpPlayReachScoreWatcher,
        TRIGGER_REACH_MP_PLAY_SCORE);
      WatcherFactoryMarker<MpPlayReachRecordWatcher>::WatcherFactoryMarker(
        &maker_MpPlayReachRecordWatcher,
        TRIGGER_REACH_MP_PLAY_RECORD);
      ListenEventMarker<MpPlayReachRecordWatcher>::ListenEventMarker(
        &listen_maker_MpPlayReachRecordWatcher,
        TRIGGER_REACH_MP_PLAY_RECORD);
      WatcherFactoryMarker<LoginWatcher>::WatcherFactoryMarker(&maker_LoginWatcher, TRIGGER_LOGIN);
      ListenEventMarker<LoginWatcher>::ListenEventMarker(&listen_maker_LoginWatcher, TRIGGER_LOGIN);
      WatcherFactoryMarker<CostMaterialWatcher>::WatcherFactoryMarker(&maker_CostMaterialWatcher, TRIGGER_COST_MATERIAL);
      ListenEventMarker<CostMaterialWatcher>::ListenEventMarker(
        &listen_maker_CostMaterialWatcher,
        TRIGGER_COST_MATERIAL);
      WatcherFactoryMarker<FinishChallengeWatcher>::WatcherFactoryMarker(
        &maker_FinishChallengeWatcher,
        TRIGGER_FINISH_CHALLENGE);
      ListenEventMarker<FinishChallengeWatcher>::ListenEventMarker(
        &listen_maker_FinishChallengeWatcher,
        TRIGGER_FINISH_CHALLENGE);
      WatcherFactoryMarker<UseItemWatcher>::WatcherFactoryMarker(&maker_UseItemWatcher, TRIGGER_USE_ITEM);
      ListenEventMarker<UseItemWatcher>::ListenEventMarker(&listen_maker_UseItemWatcher, TRIGGER_USE_ITEM);
      WatcherFactoryMarker<LevelAvatarFinishDungeonCountWatcher>::WatcherFactoryMarker(
        &maker_LevelAvatarFinishDungeonCountWatcher,
        TRIGGER_LEVEL_AVATAR_FINISH_DUNGEON_COUNT);
      ListenEventMarker<LevelAvatarFinishDungeonCountWatcher>::ListenEventMarker(
        &listen_maker_LevelAvatarFinishDungeonCountWatcher,
        TRIGGER_LEVEL_AVATAR_FINISH_DUNGEON_COUNT);
      WatcherFactoryMarker<FinishQuestAndWatcher>::WatcherFactoryMarker(
        &maker_FinishQuestAndWatcher,
        TRIGGER_FINISH_QUEST_AND);
      ListenEventMarker<FinishQuestAndWatcher>::ListenEventMarker(
        &listen_maker_FinishQuestAndWatcher,
        TRIGGER_FINISH_QUEST_AND);
      WatcherFactoryMarker<FinishQuestOrWatcher>::WatcherFactoryMarker(
        &maker_FinishQuestOrWatcher,
        TRIGGER_FINISH_QUEST_OR);
      ListenEventMarker<FinishQuestOrWatcher>::ListenEventMarker(
        &listen_maker_FinishQuestOrWatcher,
        TRIGGER_FINISH_QUEST_OR);
      WatcherFactoryMarker<DailyTaskVarEqualWatcher>::WatcherFactoryMarker(
        &maker_DailyTaskVarEqualWatcher,
        TRIGGER_DAILY_TASK_VAR_EQUAL);
      ListenEventMarker<DailyTaskVarEqualWatcher>::ListenEventMarker(
        &listen_maker_DailyTaskVarEqualWatcher,
        TRIGGER_DAILY_TASK_VAR_EQUAL);
      WatcherFactoryMarker<QuestGlobalVarEqualWatcher>::WatcherFactoryMarker(
        &maker_QuestGlobalVarEqualWatcher,
        TRIGGER_QUEST_GLOBAL_VAR_EQUAL);
      ListenEventMarker<QuestGlobalVarEqualWatcher>::ListenEventMarker(
        &listen_maker_QuestGlobalVarEqualWatcher,
        TRIGGER_QUEST_GLOBAL_VAR_EQUAL);
      WatcherFactoryMarker<TalkNumWatcher>::WatcherFactoryMarker(&maker_TalkNumWatcher, TRIGGER_TALK_NUM);
      ListenEventMarker<TalkNumWatcher>::ListenEventMarker(&listen_maker_TalkNumWatcher, TRIGGER_TALK_NUM);
      WatcherFactoryMarker<FinishParentQuestAndWatcher>::WatcherFactoryMarker(
        &maker_FinishParentQuestAndWatcher,
        TRIGGER_FINISH_PARENT_QUEST_AND);
      ListenEventMarker<FinishParentQuestAndWatcher>::ListenEventMarker(
        &listen_maker_FinishParentQuestAndWatcher,
        TRIGGER_FINISH_PARENT_QUEST_AND);
      WatcherFactoryMarker<FinishParentQuestOrWatcher>::WatcherFactoryMarker(
        &maker_FinishParentQuestOrWatcher,
        TRIGGER_FINISH_PARENT_QUEST_OR);
      ListenEventMarker<FinishParentQuestOrWatcher>::ListenEventMarker(
        &listen_maker_FinishParentQuestOrWatcher,
        TRIGGER_FINISH_PARENT_QUEST_OR);
      WatcherFactoryMarker<GroupNotifyWatcher>::WatcherFactoryMarker(&maker_GroupNotifyWatcher, TRIGGER_GROUP_NOTIFY);
      ListenEventMarker<GroupNotifyWatcher>::ListenEventMarker(&listen_maker_GroupNotifyWatcher, TRIGGER_GROUP_NOTIFY);
      WatcherFactoryMarker<ElementReactionTimeLimitNumWatcher>::WatcherFactoryMarker(
        &maker_ElementReactionTimeLimitNumWatcher,
        TRIGGER_ELEMENT_REACTION_TIMELIMIT_NUM);
      ListenEventMarker<ElementReactionTimeLimitNumWatcher>::ListenEventMarker(
        &listen_maker_ElementReactionTimeLimitNumWatcher,
        TRIGGER_ELEMENT_REACTION_TIMELIMIT_NUM);
      WatcherFactoryMarker<ElementReactionTimeLimitKillNumWatcher>::WatcherFactoryMarker(
        &maker_ElementReactionTimeLimitKillNumWatcher,
        TRIGGER_ELEMENT_REACTION_TIMELIMIT_KILL_NUM);
      ListenEventMarker<ElementReactionTimeLimitKillNumWatcher>::ListenEventMarker(
        &listen_maker_ElementReactionTimeLimitKillNumWatcher,
        TRIGGER_ELEMENT_REACTION_TIMELIMIT_KILL_NUM);
      WatcherFactoryMarker<ElementReactionTimeLimitDamageNumWatcher>::WatcherFactoryMarker(
        &maker_ElementReactionTimeLimitDamageNumWatcher,
        TRIGGER_ELEMENT_REACTION_TIMELIMIT_DAMAGE_NUM);
      ListenEventMarker<ElementReactionTimeLimitDamageNumWatcher>::ListenEventMarker(
        &listen_maker_ElementReactionTimeLimitDamageNumWatcher,
        TRIGGER_ELEMENT_REACTION_TIMELIMIT_DAMAGE_NUM);
      WatcherFactoryMarker<AbilityStatePassTimeWatcher>::WatcherFactoryMarker(
        &maker_AbilityStatePassTimeWatcher,
        TRIGGER_ABILITY_STATE_PASS_TIME);
      ListenEventMarker<AbilityStatePassTimeWatcher>::ListenEventMarker(
        &listen_maker_AbilityStatePassTimeWatcher,
        TRIGGER_ABILITY_STATE_PASS_TIME);
      WatcherFactoryMarker<MaxCriticalDamageWatcher>::WatcherFactoryMarker(
        &maker_MaxCriticalDamageWatcher,
        TRIGGER_MAX_CRITICAL_DAMAGE);
      ListenEventMarker<MaxCriticalDamageWatcher>::ListenEventMarker(
        &listen_maker_MaxCriticalDamageWatcher,
        TRIGGER_MAX_CRITICAL_DAMAGE);
      WatcherFactoryMarker<FullSatiationTeamAvatarNumWatcher>::WatcherFactoryMarker(
        &maker_FullSatiationTeamAvatarNumWatcher,
        TRIGGER_FULL_SATIATION_TEAM_AVATAR_NUM);
      ListenEventMarker<FullSatiationTeamAvatarNumWatcher>::ListenEventMarker(
        &listen_maker_FullSatiationTeamAvatarNumWatcher,
        TRIGGER_FULL_SATIATION_TEAM_AVATAR_NUM);
      WatcherFactoryMarker<DeliverItemToSalesmanWatcher>::WatcherFactoryMarker(
        &maker_DeliverItemToSalesmanWatcher,
        TRIGGER_DELIVER_ITEM_TO_SALESMAN);
      ListenEventMarker<DeliverItemToSalesmanWatcher>::ListenEventMarker(
        &listen_maker_DeliverItemToSalesmanWatcher,
        TRIGGER_DELIVER_ITEM_TO_SALESMAN);
      WatcherFactoryMarker<MaxDashTimeWatcher>::WatcherFactoryMarker(&maker_MaxDashTimeWatcher, TRIGGER_MAX_DASH_TIME);
      ListenEventMarker<MaxDashTimeWatcher>::ListenEventMarker(&listen_maker_MaxDashTimeWatcher, TRIGGER_MAX_DASH_TIME);
      WatcherFactoryMarker<MaxFlyTimeWatcher>::WatcherFactoryMarker(&maker_MaxFlyTimeWatcher, TRIGGER_MAX_FLY_TIME);
      ListenEventMarker<MaxFlyTimeWatcher>::ListenEventMarker(&listen_maker_MaxFlyTimeWatcher, TRIGGER_MAX_FLY_TIME);
      WatcherFactoryMarker<MaxFlyMapDistanceWatcher>::WatcherFactoryMarker(
        &maker_MaxFlyMapDistanceWatcher,
        TRIGGER_MAX_FLY_MAP_DISTANCE);
      ListenEventMarker<MaxFlyMapDistanceWatcher>::ListenEventMarker(
        &listen_maker_MaxFlyMapDistanceWatcher,
        TRIGGER_MAX_FLY_MAP_DISTANCE);
      WatcherFactoryMarker<SitDownInPointWatcher>::WatcherFactoryMarker(
        &maker_SitDownInPointWatcher,
        TRIGGER_SIT_DOWN_IN_POINT);
      ListenEventMarker<SitDownInPointWatcher>::ListenEventMarker(
        &listen_maker_SitDownInPointWatcher,
        TRIGGER_SIT_DOWN_IN_POINT);
      WatcherFactoryMarker<ElementTypeChangeWatcher>::WatcherFactoryMarker(
        &maker_ElementTypeChangeWatcher,
        TRIGGER_ELEMENT_TYPE_CHANGE);
      ListenEventMarker<ElementTypeChangeWatcher>::ListenEventMarker(
        &listen_maker_ElementTypeChangeWatcher,
        TRIGGER_ELEMENT_TYPE_CHANGE);
      WatcherFactoryMarker<GadgetInteractableWatcher>::WatcherFactoryMarker(
        &maker_GadgetInteractableWatcher,
        TRIGGER_GADGET_INTERACTABLE);
      ListenEventMarker<GadgetInteractableWatcher>::ListenEventMarker(
        &listen_maker_GadgetInteractableWatcher,
        TRIGGER_GADGET_INTERACTABLE);
      WatcherFactoryMarker<SkilledAtRecipeWatcher>::WatcherFactoryMarker(
        &maker_SkilledAtRecipeWatcher,
        TRIGGER_SKILLED_AT_RECIPE);
      ListenEventMarker<SkilledAtRecipeWatcher>::ListenEventMarker(
        &listen_maker_SkilledAtRecipeWatcher,
        TRIGGER_SKILLED_AT_RECIPE);
      WatcherFactoryMarker<KilledByCertainMonsterWatcher>::WatcherFactoryMarker(
        &maker_KilledByCertainMonsterWatcher,
        TRIGGER_KILLED_BY_CERTAIN_MONSTER);
      ListenEventMarker<KilledByCertainMonsterWatcher>::ListenEventMarker(
        &listen_maker_KilledByCertainMonsterWatcher,
        TRIGGER_KILLED_BY_CERTAIN_MONSTER);
      WatcherFactoryMarker<TeleportWithCertainPortalWatcher>::WatcherFactoryMarker(
        &maker_TeleportWithCertainPortalWatcher,
        TRIGGER_TELEPORT_WITH_CERTAIN_PORTAL);
      ListenEventMarker<TeleportWithCertainPortalWatcher>::ListenEventMarker(
        &listen_maker_TeleportWithCertainPortalWatcher,
        TRIGGER_TELEPORT_WITH_CERTAIN_PORTAL);
      WatcherFactoryMarker<CollectSetOfReadingsWatcher>::WatcherFactoryMarker(
        &maker_CollectSetOfReadingsWatcher,
        TRIGGER_COLLECT_SET_OF_READINGS);
      ListenEventMarker<CollectSetOfReadingsWatcher>::ListenEventMarker(
        &listen_maker_CollectSetOfReadingsWatcher,
        TRIGGER_COLLECT_SET_OF_READINGS);
      WatcherFactoryMarker<MpDungeonSucceedWatcher>::WatcherFactoryMarker(
        &maker_MpDungeonSucceedWatcher,
        TRIGGER_MP_DUNGEON_TIMES);
      ListenEventMarker<MpDungeonSucceedWatcher>::ListenEventMarker(
        &listen_maker_MpDungeonSucceedWatcher,
        TRIGGER_MP_DUNGEON_TIMES);
      WatcherFactoryMarker<MpKillMonsterNumWatcher>::WatcherFactoryMarker(
        &maker_MpKillMonsterNumWatcher,
        TRIGGER_MP_KILL_MONSTER_NUM);
      ListenEventMarker<MpKillMonsterNumWatcher>::ListenEventMarker(
        &listen_maker_MpKillMonsterNumWatcher,
        TRIGGER_MP_KILL_MONSTER_NUM);
      WatcherFactoryMarker<MpAreaGatherTimesWatcher>::WatcherFactoryMarker(
        &maker_MpAreaGatherTimesWatcher,
        TRIGGER_STEAL_FOOD_TIMES);
      ListenEventMarker<MpAreaGatherTimesWatcher>::ListenEventMarker(
        &listen_maker_MpAreaGatherTimesWatcher,
        TRIGGER_STEAL_FOOD_TIMES);
      WatcherFactoryMarker<DoneTowerStarsWatcher>::WatcherFactoryMarker(
        &maker_DoneTowerStarsWatcher,
        TRIGGER_DONE_TOWER_STARS);
      ListenEventMarker<DoneTowerStarsWatcher>::ListenEventMarker(
        &listen_maker_DoneTowerStarsWatcher,
        TRIGGER_DONE_TOWER_STARS);
      WatcherFactoryMarker<DoneTowerUnhurtWatcher>::WatcherFactoryMarker(
        &maker_DoneTowerUnhurtWatcher,
        TRIGGER_DONE_TOWER_UNHURT);
      ListenEventMarker<DoneTowerUnhurtWatcher>::ListenEventMarker(
        &listen_maker_DoneTowerUnhurtWatcher,
        TRIGGER_DONE_TOWER_UNHURT);
      WatcherFactoryMarker<DoneTowerGadgetUnhurtWatcher>::WatcherFactoryMarker(
        &maker_DoneTowerGadgetUnhurtWatcher,
        TRIGGER_DONE_TOWER_GADGET_UNHURT);
      ListenEventMarker<DoneTowerGadgetUnhurtWatcher>::ListenEventMarker(
        &listen_maker_DoneTowerGadgetUnhurtWatcher,
        TRIGGER_DONE_TOWER_GADGET_UNHURT);
      WatcherFactoryMarker<DoneDungeonWithSameElementAvatarsWatcher>::WatcherFactoryMarker(
        &maker_DoneDungeonWithSameElementAvatarsWatcher,
        TRIGGER_DONE_DUNGEON_WITH_SAME_ELEMENT_AVATARS);
      ListenEventMarker<DoneDungeonWithSameElementAvatarsWatcher>::ListenEventMarker(
        &listen_maker_DoneDungeonWithSameElementAvatarsWatcher,
        TRIGGER_DONE_DUNGEON_WITH_SAME_ELEMENT_AVATARS);
      WatcherFactoryMarker<FlyWatcher>::WatcherFactoryMarker(&maker_FlyWatcher, TRIGGER_FLY);
      ListenEventMarker<FlyWatcher>::ListenEventMarker(&listen_maker_FlyWatcher, TRIGGER_FLY);
      WatcherFactoryMarker<DashWatcher>::WatcherFactoryMarker(&maker_DashWatcher, TRIGGER_DASH);
      ListenEventMarker<DashWatcher>::ListenEventMarker(&listen_maker_DashWatcher, TRIGGER_DASH);
      WatcherFactoryMarker<ClimbWatcher>::WatcherFactoryMarker(&maker_ClimbWatcher, TRIGGER_CLIMB);
      ListenEventMarker<ClimbWatcher>::ListenEventMarker(&listen_maker_ClimbWatcher, TRIGGER_CLIMB);
      WatcherFactoryMarker<CurAvatarHurtWatcher>::WatcherFactoryMarker(
        &maker_CurAvatarHurtWatcher,
        TRIGGER_CUR_AVATAR_HURT);
      ListenEventMarker<CurAvatarHurtWatcher>::ListenEventMarker(
        &listen_maker_CurAvatarHurtWatcher,
        TRIGGER_CUR_AVATAR_HURT);
      WatcherFactoryMarker<CurAvatarAbilityStateWatcher>::WatcherFactoryMarker(
        &maker_CurAvatarAbilityStateWatcher,
        TRIGGER_CUR_AVATAR_ABILITY_STATE);
      ListenEventMarker<CurAvatarAbilityStateWatcher>::ListenEventMarker(
        &listen_maker_CurAvatarAbilityStateWatcher,
        TRIGGER_CUR_AVATAR_ABILITY_STATE);
      WatcherFactoryMarker<GroupFlightChallengeReachPointsWatcher>::WatcherFactoryMarker(
        &maker_GroupFlightChallengeReachPointsWatcher,
        TRIGGER_GROUP_FLIGHT_CHALLENGE_REACH_POINTS);
      ListenEventMarker<GroupFlightChallengeReachPointsWatcher>::ListenEventMarker(
        &listen_maker_GroupFlightChallengeReachPointsWatcher,
        TRIGGER_GROUP_FLIGHT_CHALLENGE_REACH_POINTS);
      WatcherFactoryMarker<FinishSpecifiedTypeBlossomWatcher>::WatcherFactoryMarker(
        &maker_FinishSpecifiedTypeBlossomWatcher,
        TRIGGER_FINISH_SPECIFED_TYPE_BLOSSOM_NUM);
      ListenEventMarker<FinishSpecifiedTypeBlossomWatcher>::ListenEventMarker(
        &listen_maker_FinishSpecifiedTypeBlossomWatcher,
        TRIGGER_FINISH_SPECIFED_TYPE_BLOSSOM_NUM);
      WatcherFactoryMarker<FinishBlossomGroupVariableGTWatcher>::WatcherFactoryMarker(
        &maker_FinishBlossomGroupVariableGTWatcher,
        TRIGGER_FINISH_BLOSSOM_GROUP_VARIABLE_GT);
      ListenEventMarker<FinishBlossomGroupVariableGTWatcher>::ListenEventMarker(
        &listen_maker_FinishBlossomGroupVariableGTWatcher,
        TRIGGER_FINISH_BLOSSOM_GROUP_VARIABLE_GT);
      WatcherFactoryMarker<CityReputationLevelWatcher>::WatcherFactoryMarker(
        &maker_CityReputationLevelWatcher,
        TRIGGER_CITY_REPUTATION_LEVEL);
      ListenEventMarker<CityReputationLevelWatcher>::ListenEventMarker(
        &listen_maker_CityReputationLevelWatcher,
        TRIGGER_CITY_REPUTATION_LEVEL);
      WatcherFactoryMarker<CityReputationFinishRequestWatcher>::WatcherFactoryMarker(
        &maker_CityReputationFinishRequestWatcher,
        TRIGGER_CITY_REPUTATION_FINISH_REQUEST);
      ListenEventMarker<CityReputationFinishRequestWatcher>::ListenEventMarker(
        &listen_maker_CityReputationFinishRequestWatcher,
        TRIGGER_CITY_REPUTATION_FINISH_REQUEST);
      WatcherFactoryMarker<BattleForMonsterDieAndWatcher>::WatcherFactoryMarker(
        &maker_BattleForMonsterDieAndWatcher,
        TRIGGER_BATTLE_FOR_MONSTER_DIE_AND);
      ListenEventMarker<BattleForMonsterDieAndWatcher>::ListenEventMarker(
        &listen_maker_BattleForMonsterDieAndWatcher,
        TRIGGER_BATTLE_FOR_MONSTER_DIE_AND);
      WatcherFactoryMarker<BattleForMonsterDieOrWatcher>::WatcherFactoryMarker(
        &maker_BattleForMonsterDieOrWatcher,
        TRIGGER_BATTLE_FOR_MONSTER_DIE_OR);
      ListenEventMarker<BattleForMonsterDieOrWatcher>::ListenEventMarker(
        &listen_maker_BattleForMonsterDieOrWatcher,
        TRIGGER_BATTLE_FOR_MONSTER_DIE_OR);
      WatcherFactoryMarker<UseEnergySkillNumTimeLimitWatcher>::WatcherFactoryMarker(
        &maker_UseEnergySkillNumTimeLimitWatcher,
        TRIGGER_USE_ENERGY_SKILL_NUM_TIMELIMIT);
      ListenEventMarker<UseEnergySkillNumTimeLimitWatcher>::ListenEventMarker(
        &listen_maker_UseEnergySkillNumTimeLimitWatcher,
        TRIGGER_USE_ENERGY_SKILL_NUM_TIMELIMIT);
      WatcherFactoryMarker<ShieldSourceNumWatcher>::WatcherFactoryMarker(
        &maker_ShieldSourceNumWatcher,
        TRIGGER_SHIELD_SOURCE_NUM);
      ListenEventMarker<ShieldSourceNumWatcher>::ListenEventMarker(
        &listen_maker_ShieldSourceNumWatcher,
        TRIGGER_SHIELD_SOURCE_NUM);
      WatcherFactoryMarker<SpecifiedWeaponAwakenWatcher>::WatcherFactoryMarker(
        &maker_SpecifiedWeaponAwakenWatcher,
        TRIGGER_SPECIFIED_WEAPON_AWAKEN);
      ListenEventMarker<SpecifiedWeaponAwakenWatcher>::ListenEventMarker(
        &listen_maker_SpecifiedWeaponAwakenWatcher,
        TRIGGER_SPECIFIED_WEAPON_AWAKEN);
      WatcherFactoryMarker<TowerStarsNumWatcher>::WatcherFactoryMarker(
        &maker_TowerStarsNumWatcher,
        TRIGGER_TOWER_STARS_NUM);
      ListenEventMarker<TowerStarsNumWatcher>::ListenEventMarker(
        &listen_maker_TowerStarsNumWatcher,
        TRIGGER_TOWER_STARS_NUM);
      WatcherFactoryMarker<FinishSpecifiedTypeBlossomClimateMeterWatcher>::WatcherFactoryMarker(
        &maker_FinishSpecifiedTypeBlossomClimateMeterWatcher,
        TRIGGER_FINISH_SPECIFED_TYPE_BLOSSOM_CLIMATE_METER);
      ListenEventMarker<FinishSpecifiedTypeBlossomClimateMeterWatcher>::ListenEventMarker(
        &listen_maker_FinishSpecifiedTypeBlossomClimateMeterWatcher,
        TRIGGER_FINISH_SPECIFED_TYPE_BLOSSOM_CLIMATE_METER);
      WatcherFactoryMarker<OfferingLevelWatcher>::WatcherFactoryMarker(
        &maker_OfferingLevelWatcher,
        TRIGGER_OFFERING_LEVEL);
      ListenEventMarker<OfferingLevelWatcher>::ListenEventMarker(
        &listen_maker_OfferingLevelWatcher,
        TRIGGER_OFFERING_LEVEL);
      WatcherFactoryMarker<UnlockSpecificRecipeOrWatcher>::WatcherFactoryMarker(
        &maker_UnlockSpecificRecipeOrWatcher,
        TRIGGER_UNLOCK_SPECIFIC_RECIPE_OR);
      ListenEventMarker<UnlockSpecificRecipeOrWatcher>::ListenEventMarker(
        &listen_maker_UnlockSpecificRecipeOrWatcher,
        TRIGGER_UNLOCK_SPECIFIC_RECIPE_OR);
      WatcherFactoryMarker<CurAvatarHurtBySpecificAbilityWatcher>::WatcherFactoryMarker(
        &maker_CurAvatarHurtBySpecificAbilityWatcher,
        TRIGGER_CUR_AVATAR_HURT_BY_SPECIFIC_ABILITY);
      ListenEventMarker<CurAvatarHurtBySpecificAbilityWatcher>::ListenEventMarker(
        &listen_maker_CurAvatarHurtBySpecificAbilityWatcher,
        TRIGGER_CUR_AVATAR_HURT_BY_SPECIFIC_ABILITY);
      WatcherFactoryMarker<KilledBySpecificAbilityWatcher>::WatcherFactoryMarker(
        &maker_KilledBySpecificAbilityWatcher,
        TRIGGER_KILLED_BY_SPECIFIC_ABILITY);
      ListenEventMarker<KilledBySpecificAbilityWatcher>::ListenEventMarker(
        &listen_maker_KilledBySpecificAbilityWatcher,
        TRIGGER_KILLED_BY_SPECIFIC_ABILITY);
      WatcherFactoryMarker<MiracleRingDeliverItemWatcher>::WatcherFactoryMarker(
        &maker_MiracleRingDeliverItemWatcher,
        TRIGGER_MIRACLE_RING_DELIVER_ITEM);
      ListenEventMarker<MiracleRingDeliverItemWatcher>::ListenEventMarker(
        &listen_maker_MiracleRingDeliverItemWatcher,
        TRIGGER_MIRACLE_RING_DELIVER_ITEM);
      WatcherFactoryMarker<MiracleRingTakeRewardWatcher>::WatcherFactoryMarker(
        &maker_MiracleRingTakeRewardWatcher,
        TRIGGER_MIRACLE_RING_TAKE_REWARD);
      ListenEventMarker<MiracleRingTakeRewardWatcher>::ListenEventMarker(
        &listen_maker_MiracleRingTakeRewardWatcher,
        TRIGGER_MIRACLE_RING_TAKE_REWARD);
      WatcherFactoryMarker<MainCoopSavePointAndWatcher>::WatcherFactoryMarker(
        &maker_MainCoopSavePointAndWatcher,
        TRIGGER_MAIN_COOP_SAVE_POINT_AND);
      ListenEventMarker<MainCoopSavePointAndWatcher>::ListenEventMarker(
        &listen_maker_MainCoopSavePointAndWatcher,
        TRIGGER_MAIN_COOP_SAVE_POINT_AND);
      WatcherFactoryMarker<MainCoopSavePointOrWatcher>::WatcherFactoryMarker(
        &maker_MainCoopSavePointOrWatcher,
        TRIGGER_MAIN_COOP_SAVE_POINT_OR);
      ListenEventMarker<MainCoopSavePointOrWatcher>::ListenEventMarker(
        &listen_maker_MainCoopSavePointOrWatcher,
        TRIGGER_MAIN_COOP_SAVE_POINT_OR);
      WatcherFactoryMarker<MainCoopVarEqualWatcher>::WatcherFactoryMarker(
        &maker_MainCoopVarEqualWatcher,
        TRIGGER_MAIN_COOP_VAR_EQUAL);
      ListenEventMarker<MainCoopVarEqualWatcher>::ListenEventMarker(
        &listen_maker_MainCoopVarEqualWatcher,
        TRIGGER_MAIN_COOP_VAR_EQUAL);
      WatcherFactoryMarker<ObtainWoodTypeWatcher>::WatcherFactoryMarker(
        &maker_ObtainWoodTypeWatcher,
        TRIGGER_OBTAIN_WOOD_TYPE);
      ListenEventMarker<ObtainWoodTypeWatcher>::ListenEventMarker(
        &listen_maker_ObtainWoodTypeWatcher,
        TRIGGER_OBTAIN_WOOD_TYPE);
      WatcherFactoryMarker<ObtainWoodWatcher>::WatcherFactoryMarker(&maker_ObtainWoodWatcher, TRIGGER_OBTAIN_WOOD_COUNT);
      ListenEventMarker<ObtainWoodWatcher>::ListenEventMarker(
        &listen_maker_ObtainWoodWatcher,
        TRIGGER_OBTAIN_WOOD_COUNT);
      WatcherFactoryMarker<FinishDungeonAndChallengeRemainTimeGreaterWatcher>::WatcherFactoryMarker(
        &maker_FinishDungeonAndChallengeRemainTimeGreaterWatcher,
        TRIGGER_FINISH_DUNGEON_AND_CHALLENGE_REMAIN_TIME_GREATER_THAN);
      ListenEventMarker<FinishDungeonAndChallengeRemainTimeGreaterWatcher>::ListenEventMarker(
        &listen_maker_FinishDungeonAndChallengeRemainTimeGreaterWatcher,
        TRIGGER_FINISH_DUNGEON_AND_CHALLENGE_REMAIN_TIME_GREATER_THAN);
      WatcherFactoryMarker<ActivityChannellerSlabFinishAllCampWatcher>::WatcherFactoryMarker(
        &maker_ActivityChannellerSlabFinishAllCampWatcher,
        TRIGGER_ACTIVITY_CHANNELLER_SLAB_FINISH_ALL_CAMP);
      ListenEventMarker<ActivityChannellerSlabFinishAllCampWatcher>::ListenEventMarker(
        &listen_maker_ActivityChannellerSlabFinishAllCampWatcher,
        TRIGGER_ACTIVITY_CHANNELLER_SLAB_FINISH_ALL_CAMP);
      WatcherFactoryMarker<ActivityChannellerSlabFinishAllOneoffDungeonWatcher>::WatcherFactoryMarker(
        &maker_ActivityChannellerSlabFinishAllOneoffDungeonWatcher,
        TRIGGER_ACTIVITY_CHANNELLER_SLAB_FINISH_ALL_ONEOFF_DUNGEON);
      ListenEventMarker<ActivityChannellerSlabFinishAllOneoffDungeonWatcher>::ListenEventMarker(
        &listen_maker_ActivityChannellerSlabFinishAllOneoffDungeonWatcher,
        TRIGGER_ACTIVITY_CHANNELLER_SLAB_FINISH_ALL_ONEOFF_DUNGEON);
      WatcherFactoryMarker<HomeUnlockFurnitureWatcher>::WatcherFactoryMarker(
        &maker_HomeUnlockFurnitureWatcher,
        TRIGGER_UNLOCK_FURNITURE_COUNT);
      ListenEventMarker<HomeUnlockFurnitureWatcher>::ListenEventMarker(
        &listen_maker_HomeUnlockFurnitureWatcher,
        TRIGGER_UNLOCK_FURNITURE_COUNT);
      WatcherFactoryMarker<HomeFurnitureMakeWatcher>::WatcherFactoryMarker(
        &maker_HomeFurnitureMakeWatcher,
        TRIGGER_FURNITURE_MAKE);
      ListenEventMarker<HomeFurnitureMakeWatcher>::ListenEventMarker(
        &listen_maker_HomeFurnitureMakeWatcher,
        TRIGGER_FURNITURE_MAKE);
      WatcherFactoryMarker<HomeLevelWatcher>::WatcherFactoryMarker(&maker_HomeLevelWatcher, TRIGGER_HOME_LEVEL);
      ListenEventMarker<HomeLevelWatcher>::ListenEventMarker(&listen_maker_HomeLevelWatcher, TRIGGER_HOME_LEVEL);
      WatcherFactoryMarker<HomeCoinWatcher>::WatcherFactoryMarker(&maker_HomeCoinWatcher, TRIGGER_HOME_COIN);
      ListenEventMarker<HomeCoinWatcher>::ListenEventMarker(&listen_maker_HomeCoinWatcher, TRIGGER_HOME_COIN);
      WatcherFactoryMarker<HomeComfortLevelWatcher>::WatcherFactoryMarker(
        &maker_HomeComfortLevelWatcher,
        TRIGGER_HOME_COMFORT_LEVEL);
      ListenEventMarker<HomeComfortLevelWatcher>::ListenEventMarker(
        &listen_maker_HomeComfortLevelWatcher,
        TRIGGER_HOME_COMFORT_LEVEL);
      WatcherFactoryMarker<HomeLimitedShopBuyWatcher>::WatcherFactoryMarker(
        &maker_HomeLimitedShopBuyWatcher,
        TRIGGER_HOME_LIMITED_SHOP_BUY);
      ListenEventMarker<HomeLimitedShopBuyWatcher>::ListenEventMarker(
        &listen_maker_HomeLimitedShopBuyWatcher,
        TRIGGER_HOME_LIMITED_SHOP_BUY);
      WatcherFactoryMarker<HomeFurnitureSuiteTypeWatcher>::WatcherFactoryMarker(
        &maker_HomeFurnitureSuiteTypeWatcher,
        TRIGGER_FURNITURE_SUITE_TYPE);
      ListenEventMarker<HomeFurnitureSuiteTypeWatcher>::ListenEventMarker(
        &listen_maker_HomeFurnitureSuiteTypeWatcher,
        TRIGGER_FURNITURE_SUITE_TYPE);
      WatcherFactoryMarker<HomeArrangementFurnitureCountWatcher>::WatcherFactoryMarker(
        &maker_HomeArrangementFurnitureCountWatcher,
        TRIGGER_ARRANGEMENT_FURNITURE_COUNT);
      ListenEventMarker<HomeArrangementFurnitureCountWatcher>::ListenEventMarker(
        &listen_maker_HomeArrangementFurnitureCountWatcher,
        TRIGGER_ARRANGEMENT_FURNITURE_COUNT);
      WatcherFactoryMarker<CombineItemCountWatcher>::WatcherFactoryMarker(
        &maker_CombineItemCountWatcher,
        TRIGGER_COMBINE_ITEM);
      ListenEventMarker<CombineItemCountWatcher>::ListenEventMarker(
        &listen_maker_CombineItemCountWatcher,
        TRIGGER_COMBINE_ITEM);
      WatcherFactoryMarker<HomeEnterSelfHomeWatcher>::WatcherFactoryMarker(
        &maker_HomeEnterSelfHomeWatcher,
        TRIGGER_ENTER_SELF_HOME);
      ListenEventMarker<HomeEnterSelfHomeWatcher>::ListenEventMarker(
        &listen_maker_HomeEnterSelfHomeWatcher,
        TRIGGER_ENTER_SELF_HOME);
      WatcherFactoryMarker<HomeModuleComfortWatcher>::WatcherFactoryMarker(
        &maker_HomeModuleComfortWatcher,
        TRIGGER_HOME_MODULE_COMFORT_VALUE);
      ListenEventMarker<HomeModuleComfortWatcher>::ListenEventMarker(
        &listen_maker_HomeModuleComfortWatcher,
        TRIGGER_HOME_MODULE_COMFORT_VALUE);
      WatcherFactoryMarker<HomeEnterHomeRoomWatcher>::WatcherFactoryMarker(
        &maker_HomeEnterHomeRoomWatcher,
        TRIGGER_HOME_ENTER_ROOM);
      ListenEventMarker<HomeEnterHomeRoomWatcher>::ListenEventMarker(
        &listen_maker_HomeEnterHomeRoomWatcher,
        TRIGGER_HOME_ENTER_ROOM);
      WatcherFactoryMarker<HomeAvatarShowInWatcher>::WatcherFactoryMarker(
        &maker_HomeAvatarShowInWatcher,
        TRIGGER_HOME_AVATAR_IN);
      ListenEventMarker<HomeAvatarShowInWatcher>::ListenEventMarker(
        &listen_maker_HomeAvatarShowInWatcher,
        TRIGGER_HOME_AVATAR_IN);
      WatcherFactoryMarker<HomeAvatarEventRewardWatcher>::WatcherFactoryMarker(
        &maker_HomeAvatarEventRewardWatcher,
        TRIGGER_HOME_AVATAR_REWARD_EVENT_COUNT);
      ListenEventMarker<HomeAvatarEventRewardWatcher>::ListenEventMarker(
        &listen_maker_HomeAvatarEventRewardWatcher,
        TRIGGER_HOME_AVATAR_REWARD_EVENT_COUNT);
      WatcherFactoryMarker<HomeAvatarTalkWatcher>::WatcherFactoryMarker(
        &maker_HomeAvatarTalkWatcher,
        TRIGGER_HOME_AVATAR_TALK_FINISH_COUNT);
      ListenEventMarker<HomeAvatarTalkWatcher>::ListenEventMarker(
        &listen_maker_HomeAvatarTalkWatcher,
        TRIGGER_HOME_AVATAR_TALK_FINISH_COUNT);
      WatcherFactoryMarker<HomeAvatarAllEventRewardWatcher>::WatcherFactoryMarker(
        &maker_HomeAvatarAllEventRewardWatcher,
        TRIGGER_HOME_AVATAR_REWARD_EVENT_ALL_COUNT);
      ListenEventMarker<HomeAvatarAllEventRewardWatcher>::ListenEventMarker(
        &listen_maker_HomeAvatarAllEventRewardWatcher,
        TRIGGER_HOME_AVATAR_REWARD_EVENT_ALL_COUNT);
      WatcherFactoryMarker<HomeAvatarAllTalkWatcher>::WatcherFactoryMarker(
        &maker_HomeAvatarAllTalkWatcher,
        TRIGGER_HOME_AVATAR_TALK_FINISH_ALL_COUNT);
      ListenEventMarker<HomeAvatarAllTalkWatcher>::ListenEventMarker(
        &listen_maker_HomeAvatarAllTalkWatcher,
        TRIGGER_HOME_AVATAR_TALK_FINISH_ALL_COUNT);
      WatcherFactoryMarker<HomeAvatarInCountWatcher>::WatcherFactoryMarker(
        &maker_HomeAvatarInCountWatcher,
        TRIGGER_HOME_AVATAR_IN_COUNT);
      ListenEventMarker<HomeAvatarInCountWatcher>::ListenEventMarker(
        &listen_maker_HomeAvatarInCountWatcher,
        TRIGGER_HOME_AVATAR_IN_COUNT);
      WatcherFactoryMarker<HomeAvatarFetterGetWatcher>::WatcherFactoryMarker(
        &maker_HomeAvatarFetterGetWatcher,
        TRIGGER_HOME_AVATAR_FETTER_GET);
      ListenEventMarker<HomeAvatarFetterGetWatcher>::ListenEventMarker(
        &listen_maker_HomeAvatarFetterGetWatcher,
        TRIGGER_HOME_AVATAR_FETTER_GET);
      WatcherFactoryMarker<AnyWeaponUpgradeNumWatcher>::WatcherFactoryMarker(
        &maker_AnyWeaponUpgradeNumWatcher,
        TRIGGER_ANY_WEAPON_UPGRADE_NUM);
      ListenEventMarker<AnyWeaponUpgradeNumWatcher>::ListenEventMarker(
        &listen_maker_AnyWeaponUpgradeNumWatcher,
        TRIGGER_ANY_WEAPON_UPGRADE_NUM);
      WatcherFactoryMarker<AnyReliquaryUpgradeNumWatcher>::WatcherFactoryMarker(
        &maker_AnyReliquaryUpgradeNumWatcher,
        TRIGGER_ANY_RELIQUARY_UPGRADE_NUM);
      ListenEventMarker<AnyReliquaryUpgradeNumWatcher>::ListenEventMarker(
        &listen_maker_AnyReliquaryUpgradeNumWatcher,
        TRIGGER_ANY_RELIQUARY_UPGRADE_NUM);
      WatcherFactoryMarker<ExhibitionAccumulableValueWatcher>::WatcherFactoryMarker(
        &maker_ExhibitionAccumulableValueWatcher,
        TRIGGER_EXHIBITION_ACCUMULABLE_VALUE);
      ListenEventMarker<ExhibitionAccumulableValueWatcher>::ListenEventMarker(
        &listen_maker_ExhibitionAccumulableValueWatcher,
        TRIGGER_EXHIBITION_ACCUMULABLE_VALUE);
      WatcherFactoryMarker<ExhibitionReplaceableValueSettleNumWatcher>::WatcherFactoryMarker(
        &maker_ExhibitionReplaceableValueSettleNumWatcher,
        TRIGGER_EXHIBITION_REPLACEABLE_VALUE_SETTLE_NUM);
      ListenEventMarker<ExhibitionReplaceableValueSettleNumWatcher>::ListenEventMarker(
        &listen_maker_ExhibitionReplaceableValueSettleNumWatcher,
        TRIGGER_EXHIBITION_REPLACEABLE_VALUE_SETTLE_NUM);
      WatcherFactoryMarker<WeeklyBossKillWatcher>::WatcherFactoryMarker(
        &maker_WeeklyBossKillWatcher,
        TRIGGER_WEEKLY_BOSS_KILL);
      ListenEventMarker<WeeklyBossKillWatcher>::ListenEventMarker(
        &listen_maker_WeeklyBossKillWatcher,
        TRIGGER_WEEKLY_BOSS_KILL);
      WatcherFactoryMarker<GroupVariableSetValueToWatcher>::WatcherFactoryMarker(
        &maker_GroupVariableSetValueToWatcher,
        TRIGGER_GROUP_VARIABLE_SET_VALUE_TO);
      ListenEventMarker<GroupVariableSetValueToWatcher>::ListenEventMarker(
        &listen_maker_GroupVariableSetValueToWatcher,
        TRIGGER_GROUP_VARIABLE_SET_VALUE_TO);
      WatcherFactoryMarker<KillGadgetsBySpecificSkillWatcher>::WatcherFactoryMarker(
        &maker_KillGadgetsBySpecificSkillWatcher,
        TRIGGER_KILL_GADGETS_BY_SPECIFIC_SKILL);
      ListenEventMarker<KillGadgetsBySpecificSkillWatcher>::ListenEventMarker(
        &listen_maker_KillGadgetsBySpecificSkillWatcher,
        TRIGGER_KILL_GADGETS_BY_SPECIFIC_SKILL);
      WatcherFactoryMarker<KillMonstersWithoutVehicleWatcher>::WatcherFactoryMarker(
        &maker_KillMonstersWithoutVehicleWatcher,
        TRIGGER_KILL_MONSTERS_WITHOUT_VEHICLE);
      ListenEventMarker<KillMonstersWithoutVehicleWatcher>::ListenEventMarker(
        &listen_maker_KillMonstersWithoutVehicleWatcher,
        TRIGGER_KILL_MONSTERS_WITHOUT_VEHICLE);
      WatcherFactoryMarker<PlaceMiracleRingWatcher>::WatcherFactoryMarker(
        &maker_PlaceMiracleRingWatcher,
        TRIGGER_PLACE_MIRACLE_RING);
      ListenEventMarker<PlaceMiracleRingWatcher>::ListenEventMarker(
        &listen_maker_PlaceMiracleRingWatcher,
        TRIGGER_PLACE_MIRACLE_RING);
      WatcherFactoryMarker<KillMonsterByTagWatcher>::WatcherFactoryMarker(
        &maker_KillMonsterByTagWatcher,
        TRIGGER_KILL_MONSTER_IN_AREA);
      ListenEventMarker<KillMonsterByTagWatcher>::ListenEventMarker(
        &listen_maker_KillMonsterByTagWatcher,
        TRIGGER_KILL_MONSTER_IN_AREA);
      WatcherFactoryMarker<EnterVehicleWatcher>::WatcherFactoryMarker(&maker_EnterVehicleWatcher, TRIGGER_ENTER_VEHICLE);
      ListenEventMarker<EnterVehicleWatcher>::ListenEventMarker(
        &listen_maker_EnterVehicleWatcher,
        TRIGGER_ENTER_VEHICLE);
      WatcherFactoryMarker<VehicleDurationWatcher>::WatcherFactoryMarker(
        &maker_VehicleDurationWatcher,
        TRIGGER_VEHICLE_DURATION);
      ListenEventMarker<VehicleDurationWatcher>::ListenEventMarker(
        &listen_maker_VehicleDurationWatcher,
        TRIGGER_VEHICLE_DURATION);
      WatcherFactoryMarker<VehicleFriendsWatcher>::WatcherFactoryMarker(
        &maker_VehicleFriendsWatcher,
        TRIGGER_VEHICLE_FRIENDS);
      ListenEventMarker<VehicleFriendsWatcher>::ListenEventMarker(
        &listen_maker_VehicleFriendsWatcher,
        TRIGGER_VEHICLE_FRIENDS);
      WatcherFactoryMarker<VehicleKilledByMonsterWatcher>::WatcherFactoryMarker(
        &maker_VehicleKilledByMonsterWatcher,
        TRIGGER_VEHICLE_KILLED_BY_MONSTER);
      ListenEventMarker<VehicleKilledByMonsterWatcher>::ListenEventMarker(
        &listen_maker_VehicleKilledByMonsterWatcher,
        TRIGGER_VEHICLE_KILLED_BY_MONSTER);
      WatcherFactoryMarker<VehicleDashWatcher>::WatcherFactoryMarker(&maker_VehicleDashWatcher, TRIGGER_VEHICLE_DASH);
      ListenEventMarker<VehicleDashWatcher>::ListenEventMarker(&listen_maker_VehicleDashWatcher, TRIGGER_VEHICLE_DASH);
      WatcherFactoryMarker<HomeDoPlantWatcher>::WatcherFactoryMarker(&maker_HomeDoPlantWatcher, TRIGGER_HOME_DO_PLANT);
      ListenEventMarker<HomeDoPlantWatcher>::ListenEventMarker(&listen_maker_HomeDoPlantWatcher, TRIGGER_HOME_DO_PLANT);
      WatcherFactoryMarker<FinishChallengeInDurationWatcher>::WatcherFactoryMarker(
        &maker_FinishChallengeInDurationWatcher,
        TRIGGER_FINISH_CHALLENGE_IN_DURATION);
      ListenEventMarker<FinishChallengeInDurationWatcher>::ListenEventMarker(
        &listen_maker_FinishChallengeInDurationWatcher,
        TRIGGER_FINISH_CHALLENGE_IN_DURATION);
      WatcherFactoryMarker<FinishChallengeLeftTimeWatcher>::WatcherFactoryMarker(
        &maker_FinishChallengeLeftTimeWatcher,
        TRIGGER_FINISH_CHALLENGE_LEFT_TIME);
      ListenEventMarker<FinishChallengeLeftTimeWatcher>::ListenEventMarker(
        &listen_maker_FinishChallengeLeftTimeWatcher,
        TRIGGER_FINISH_CHALLENGE_LEFT_TIME);
      WatcherFactoryMarker<UnlockSpecificForgeOrWatcher>::WatcherFactoryMarker(
        &maker_UnlockSpecificForgeOrWatcher,
        TRIGGER_UNLOCK_SPECIFIC_FORGE_OR);
      ListenEventMarker<UnlockSpecificForgeOrWatcher>::ListenEventMarker(
        &listen_maker_UnlockSpecificForgeOrWatcher,
        TRIGGER_UNLOCK_SPECIFIC_FORGE_OR);
      WatcherFactoryMarker<UnlockSpecificAnimalCodexWatcher>::WatcherFactoryMarker(
        &maker_UnlockSpecificAnimalCodexWatcher,
        TRIGGER_UNLOCK_SPECIFIC_ANIMAL_CODEX);
      ListenEventMarker<UnlockSpecificAnimalCodexWatcher>::ListenEventMarker(
        &listen_maker_UnlockSpecificAnimalCodexWatcher,
        TRIGGER_UNLOCK_SPECIFIC_ANIMAL_CODEX);
      WatcherFactoryMarker<HomeGatherCountWatcher>::WatcherFactoryMarker(
        &maker_HomeGatherCountWatcher,
        TRIGGER_HOME_GATHER_COUNT);
      ListenEventMarker<HomeGatherCountWatcher>::ListenEventMarker(
        &listen_maker_HomeGatherCountWatcher,
        TRIGGER_HOME_GATHER_COUNT);
      WatcherFactoryMarker<HomeFieldGatherCountWatcher>::WatcherFactoryMarker(
        &maker_HomeFieldGatherCountWatcher,
        TRIGGER_HOME_FIELD_GATHER_COUNT);
      ListenEventMarker<HomeFieldGatherCountWatcher>::ListenEventMarker(
        &listen_maker_HomeFieldGatherCountWatcher,
        TRIGGER_HOME_FIELD_GATHER_COUNT);
      WatcherFactoryMarker<ArrangementFurnitureWatcher>::WatcherFactoryMarker(
        &maker_ArrangementFurnitureWatcher,
        TRIGGER_ARRANGEMENT_FURNITURE);
      ListenEventMarker<ArrangementFurnitureWatcher>::ListenEventMarker(
        &listen_maker_ArrangementFurnitureWatcher,
        TRIGGER_ARRANGEMENT_FURNITURE);
      WatcherFactoryMarker<GalleryFishReachScoreWatcher>::WatcherFactoryMarker(
        &maker_GalleryFishReachScoreWatcher,
        TRIGGER_GALLERY_FISH_REACH_SCORE);
      ListenEventMarker<GalleryFishReachScoreWatcher>::ListenEventMarker(
        &listen_maker_GalleryFishReachScoreWatcher,
        TRIGGER_GALLERY_FISH_REACH_SCORE);
      WatcherFactoryMarker<AccumulateDailyLoginWatcher>::WatcherFactoryMarker(
        &maker_AccumulateDailyLoginWatcher,
        TRIGGER_ACCUMULATE_DAILY_LOGIN);
      ListenEventMarker<AccumulateDailyLoginWatcher>::ListenEventMarker(
        &listen_maker_AccumulateDailyLoginWatcher,
        TRIGGER_ACCUMULATE_DAILY_LOGIN);
      WatcherFactoryMarker<MpKillMonsterIdNumWatcher>::WatcherFactoryMarker(
        &maker_MpKillMonsterIdNumWatcher,
        TRIGGER_MP_KILL_MONSTER_ID_NUM);
      ListenEventMarker<MpKillMonsterIdNumWatcher>::ListenEventMarker(
        &listen_maker_MpKillMonsterIdNumWatcher,
        TRIGGER_MP_KILL_MONSTER_ID_NUM);
      WatcherFactoryMarker<FishingSuccNumWatcher>::WatcherFactoryMarker(
        &maker_FishingSuccNumWatcher,
        TRIGGER_FISHING_SUCC_NUM);
      ListenEventMarker<FishingSuccNumWatcher>::ListenEventMarker(
        &listen_maker_FishingSuccNumWatcher,
        TRIGGER_FISHING_SUCC_NUM);
      WatcherFactoryMarker<FishingFailNumWatcher>::WatcherFactoryMarker(
        &maker_FishingFailNumWatcher,
        TRIGGER_FISHING_FAIL_NUM);
      ListenEventMarker<FishingFailNumWatcher>::ListenEventMarker(
        &listen_maker_FishingFailNumWatcher,
        TRIGGER_FISHING_FAIL_NUM);
      WatcherFactoryMarker<FishingEmptyPoolWatcher>::WatcherFactoryMarker(
        &maker_FishingEmptyPoolWatcher,
        TRIGGER_EMPTY_FISH_POOL);
      ListenEventMarker<FishingEmptyPoolWatcher>::ListenEventMarker(
        &listen_maker_FishingEmptyPoolWatcher,
        TRIGGER_EMPTY_FISH_POOL);
      WatcherFactoryMarker<FishingShockFishWatcher>::WatcherFactoryMarker(
        &maker_FishingShockFishWatcher,
        TRIGGER_SHOCK_FISH_NUM);
      ListenEventMarker<FishingShockFishWatcher>::ListenEventMarker(
        &listen_maker_FishingShockFishWatcher,
        TRIGGER_SHOCK_FISH_NUM);
      WatcherFactoryMarker<FishingKeepBonusWatcher>::WatcherFactoryMarker(
        &maker_FishingKeepBonusWatcher,
        TRIGGER_FISHING_KEEP_BONUS);
      ListenEventMarker<FishingKeepBonusWatcher>::ListenEventMarker(
        &listen_maker_FishingKeepBonusWatcher,
        TRIGGER_FISHING_KEEP_BONUS);
      WatcherFactoryMarker<UnlockScenePointWatcher>::WatcherFactoryMarker(
        &maker_UnlockScenePointWatcher,
        TRIGGER_UNLOCK_SCENE_POINT);
      ListenEventMarker<UnlockScenePointWatcher>::ListenEventMarker(
        &listen_maker_UnlockScenePointWatcher,
        TRIGGER_UNLOCK_SCENE_POINT);
      WatcherFactoryMarker<ObtainItemNumWatcher>::WatcherFactoryMarker(
        &maker_ObtainItemNumWatcher,
        TRIGGER_OBTAIN_ITEM_NUM);
      ListenEventMarker<ObtainItemNumWatcher>::ListenEventMarker(
        &listen_maker_ObtainItemNumWatcher,
        TRIGGER_OBTAIN_ITEM_NUM);
      WatcherFactoryMarker<CaptureAnimalWatcher>::WatcherFactoryMarker(
        &maker_CaptureAnimalWatcher,
        TRIGGER_CAPTURE_ANIMAL);
      ListenEventMarker<CaptureAnimalWatcher>::ListenEventMarker(
        &listen_maker_CaptureAnimalWatcher,
        TRIGGER_CAPTURE_ANIMAL);
      WatcherFactoryMarker<CreateCustomDungeonWatcher>::WatcherFactoryMarker(
        &maker_CreateCustomDungeonWatcher,
        TRIGGER_CREATE_CUSTOM_DUNGEON);
      ListenEventMarker<CreateCustomDungeonWatcher>::ListenEventMarker(
        &listen_maker_CreateCustomDungeonWatcher,
        TRIGGER_CREATE_CUSTOM_DUNGEON);
      WatcherFactoryMarker<PublishCustomDungeonWatcher>::WatcherFactoryMarker(
        &maker_PublishCustomDungeonWatcher,
        TRIGGER_PUBLISH_CUSTOM_DUNGEON);
      ListenEventMarker<PublishCustomDungeonWatcher>::ListenEventMarker(
        &listen_maker_PublishCustomDungeonWatcher,
        TRIGGER_PUBLISH_CUSTOM_DUNGEON);
      WatcherFactoryMarker<PlayOtherCustomDungeonWatcher>::WatcherFactoryMarker(
        &maker_PlayOtherCustomDungeonWatcher,
        TRIGGER_PLAY_OTHER_CUSTOM_DUNGEON);
      ListenEventMarker<PlayOtherCustomDungeonWatcher>::ListenEventMarker(
        &listen_maker_PlayOtherCustomDungeonWatcher,
        TRIGGER_PLAY_OTHER_CUSTOM_DUNGEON);
      WatcherFactoryMarker<FinishCustomDungeonOfficialWatcher>::WatcherFactoryMarker(
        &maker_FinishCustomDungeonOfficialWatcher,
        TRIGGER_FINISH_CUSTOM_DUNGEON_OFFICIAL);
      ListenEventMarker<FinishCustomDungeonOfficialWatcher>::ListenEventMarker(
        &listen_maker_FinishCustomDungeonOfficialWatcher,
        TRIGGER_FINISH_CUSTOM_DUNGEON_OFFICIAL);
      WatcherFactoryMarker<CustomDungeonOfficialCoinWatcher>::WatcherFactoryMarker(
        &maker_CustomDungeonOfficialCoinWatcher,
        TRIGGER_CUSTOM_DUNGEON_OFFICIAL_COIN);
      ListenEventMarker<CustomDungeonOfficialCoinWatcher>::ListenEventMarker(
        &listen_maker_CustomDungeonOfficialCoinWatcher,
        TRIGGER_CUSTOM_DUNGEON_OFFICIAL_COIN);
      WatcherFactoryMarker<GalleryTriathlonWatcher>::WatcherFactoryMarker(
        &maker_GalleryTriathlonWatcher,
        TRIGGER_GALLERY_TRIATHLON_REACH_SCORE);
      ListenEventMarker<GalleryTriathlonWatcher>::ListenEventMarker(
        &listen_maker_GalleryTriathlonWatcher,
        TRIGGER_GALLERY_TRIATHLON_REACH_SCORE);
      WatcherFactoryMarker<CaptureEnvAnimalReachNumWatcher>::WatcherFactoryMarker(
        &maker_CaptureEnvAnimalReachNumWatcher,
        TRIGGER_CAPTURE_ENV_ANIMAL_REACH_NUM);
      ListenEventMarker<CaptureEnvAnimalReachNumWatcher>::ListenEventMarker(
        &listen_maker_CaptureEnvAnimalReachNumWatcher,
        TRIGGER_CAPTURE_ENV_ANIMAL_REACH_NUM);
      WatcherFactoryMarker<HomeUnlockBgmCountWatcher>::WatcherFactoryMarker(
        &maker_HomeUnlockBgmCountWatcher,
        TRIGGER_HOME_UNLOCK_BGM_COUNT);
      ListenEventMarker<HomeUnlockBgmCountWatcher>::ListenEventMarker(
        &listen_maker_HomeUnlockBgmCountWatcher,
        TRIGGER_HOME_UNLOCK_BGM_COUNT);
      WatcherFactoryMarker<GravenInnocenceRaceWatcher>::WatcherFactoryMarker(
        &maker_GravenInnocenceRaceWatcher,
        TRIGGER_GRAVEN_INNOCENCE_RACE_REACH_SCORE);
      ListenEventMarker<GravenInnocenceRaceWatcher>::ListenEventMarker(
        &listen_maker_GravenInnocenceRaceWatcher,
        TRIGGER_GRAVEN_INNOCENCE_RACE_REACH_SCORE);
      WatcherFactoryMarker<GCGObtainCardWatcher>::WatcherFactoryMarker(
        &maker_GCGObtainCardWatcher,
        TRIGGER_GCG_OBTAIN_CARD);
      ListenEventMarker<GCGObtainCardWatcher>::ListenEventMarker(
        &listen_maker_GCGObtainCardWatcher,
        TRIGGER_GCG_OBTAIN_CARD);
      WatcherFactoryMarker<GCGObtainCoinWatcher>::WatcherFactoryMarker(
        &maker_GCGObtainCoinWatcher,
        TRIGGER_GCG_OBTAIN_COIN);
      ListenEventMarker<GCGObtainCoinWatcher>::ListenEventMarker(
        &listen_maker_GCGObtainCoinWatcher,
        TRIGGER_GCG_OBTAIN_COIN);
      WatcherFactoryMarker<GCGObtainCharacterCardWatcher>::WatcherFactoryMarker(
        &maker_GCGObtainCharacterCardWatcher,
        TRIGGER_GCG_OBTAIN_CHARACTER_CARD);
      ListenEventMarker<GCGObtainCharacterCardWatcher>::ListenEventMarker(
        &listen_maker_GCGObtainCharacterCardWatcher,
        TRIGGER_GCG_OBTAIN_CHARACTER_CARD);
      WatcherFactoryMarker<GCGFinishWeekChallengeWatcher>::WatcherFactoryMarker(
        &maker_GCGFinishWeekChallengeWatcher,
        TRIGGER_GCG_FINISH_WEEK_CHALLENGE);
      ListenEventMarker<GCGFinishWeekChallengeWatcher>::ListenEventMarker(
        &listen_maker_GCGFinishWeekChallengeWatcher,
        TRIGGER_GCG_FINISH_WEEK_CHALLENGE);
      WatcherFactoryMarker<GCGWorldChallengeTotalStarNumWatcher>::WatcherFactoryMarker(
        &maker_GCGWorldChallengeTotalStarNumWatcher,
        TRIGGER_GCG_WORLD_CHALLENGE_TOTAL_STAR_NUM);
      ListenEventMarker<GCGWorldChallengeTotalStarNumWatcher>::ListenEventMarker(
        &listen_maker_GCGWorldChallengeTotalStarNumWatcher,
        TRIGGER_GCG_WORLD_CHALLENGE_TOTAL_STAR_NUM);
      WatcherFactoryMarker<GCGValidDeckNumWatcher>::WatcherFactoryMarker(
        &maker_GCGValidDeckNumWatcher,
        TRIGGER_GCG_VALID_DECK_NUM);
      ListenEventMarker<GCGValidDeckNumWatcher>::ListenEventMarker(
        &listen_maker_GCGValidDeckNumWatcher,
        TRIGGER_GCG_VALID_DECK_NUM);
      WatcherFactoryMarker<GCGUnlockGoldFaceNumWatcher>::WatcherFactoryMarker(
        &maker_GCGUnlockGoldFaceNumWatcher,
        TRIGGER_GCG_UNLOCK_GOLD_FACE_NUM);
      ListenEventMarker<GCGUnlockGoldFaceNumWatcher>::ListenEventMarker(
        &listen_maker_GCGUnlockGoldFaceNumWatcher,
        TRIGGER_GCG_UNLOCK_GOLD_FACE_NUM);
      WatcherFactoryMarker<GCGUnlockCharacterGoldFaceNumWatcher>::WatcherFactoryMarker(
        &maker_GCGUnlockCharacterGoldFaceNumWatcher,
        TRIGGER_GCG_UNLOCK_CHARACTER_GOLD_FACE_NUM);
      ListenEventMarker<GCGUnlockCharacterGoldFaceNumWatcher>::ListenEventMarker(
        &listen_maker_GCGUnlockCharacterGoldFaceNumWatcher,
        TRIGGER_GCG_UNLOCK_CHARACTER_GOLD_FACE_NUM);
      WatcherFactoryMarker<GCGFullProficiencyCharacterNumWatcher>::WatcherFactoryMarker(
        &maker_GCGFullProficiencyCharacterNumWatcher,
        TRIGGER_GCG_FULL_PROFICIENCY_CHARACTER_NUM);
      ListenEventMarker<GCGFullProficiencyCharacterNumWatcher>::ListenEventMarker(
        &listen_maker_GCGFullProficiencyCharacterNumWatcher,
        TRIGGER_GCG_FULL_PROFICIENCY_CHARACTER_NUM);
      WatcherFactoryMarker<GCGFinishHardCharacterChallengeWatcher>::WatcherFactoryMarker(
        &maker_GCGFinishHardCharacterChallengeWatcher,
        TRIGGER_GCG_FINISH_HARD_CHARACTER_CHALLENGE);
      ListenEventMarker<GCGFinishHardCharacterChallengeWatcher>::ListenEventMarker(
        &listen_maker_GCGFinishHardCharacterChallengeWatcher,
        TRIGGER_GCG_FINISH_HARD_CHARACTER_CHALLENGE);
      WatcherFactoryMarker<GCGFinishNormalBossChallengeWatcher>::WatcherFactoryMarker(
        &maker_GCGFinishNormalBossChallengeWatcher,
        TRIGGER_GCG_FINISH_NORMAL_BOSS_CHALLENGE);
      ListenEventMarker<GCGFinishNormalBossChallengeWatcher>::ListenEventMarker(
        &listen_maker_GCGFinishNormalBossChallengeWatcher,
        TRIGGER_GCG_FINISH_NORMAL_BOSS_CHALLENGE);
      WatcherFactoryMarker<GCGFinishHardBossChallengeWatcher>::WatcherFactoryMarker(
        &maker_GCGFinishHardBossChallengeWatcher,
        TRIGGER_GCG_FINISH_HARD_BOSS_CHALLENGE);
      ListenEventMarker<GCGFinishHardBossChallengeWatcher>::ListenEventMarker(
        &listen_maker_GCGFinishHardBossChallengeWatcher,
        TRIGGER_GCG_FINISH_HARD_BOSS_CHALLENGE);
      WatcherFactoryMarker<GCGChallengeProgressWatcher>::WatcherFactoryMarker(
        &maker_GCGChallengeProgressWatcher,
        TRIGGER_GCG_CHALLENGE_PROGRESS);
      ListenEventMarker<GCGChallengeProgressWatcher>::ListenEventMarker(
        &listen_maker_GCGChallengeProgressWatcher,
        TRIGGER_GCG_CHALLENGE_PROGRESS);
      WatcherFactoryMarker<BuyShopItemIdWatcher>::WatcherFactoryMarker(
        &maker_BuyShopItemIdWatcher,
        TRIGGER_BUY_SHOP_ITEM_ID);
      ListenEventMarker<BuyShopItemIdWatcher>::ListenEventMarker(
        &listen_maker_BuyShopItemIdWatcher,
        TRIGGER_BUY_SHOP_ITEM_ID);
      WatcherFactoryMarker<BuyShopGoodsCountWatcher>::WatcherFactoryMarker(
        &maker_BuyShopGoodsCountWatcher,
        TRIGGER_BUY_SHOP_GOODS_COUNT);
      ListenEventMarker<BuyShopGoodsCountWatcher>::ListenEventMarker(
        &listen_maker_BuyShopGoodsCountWatcher,
        TRIGGER_BUY_SHOP_GOODS_COUNT);
      WatcherFactoryMarker<EnterSceneNotDungeonWatcher>::WatcherFactoryMarker(
        &maker_EnterSceneNotDungeonWatcher,
        TRIGGER_ENTER_SCENE_NOT_DUNGEON);
      v11 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)3320;
      ListenEventMarker<EnterSceneNotDungeonWatcher>::ListenEventMarker(
        &listen_maker_EnterSceneNotDungeonWatcher,
        TRIGGER_ENTER_SCENE_NOT_DUNGEON);
      v12 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v11,
            v15);
        *v13 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v11 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v16 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v16 )
      {
        v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v18 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v18 != 0;
        v19 = (v18 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v18);
        if ( (_BYTE)v19 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v11,
            v19);
        *v17 = 1;
        v11 = &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v20 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
      }
      if ( !*v20 )
      {
        v21 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
        v22 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v22 != 0;
        v23 = (v22 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= v22);
        if ( (_BYTE)v23 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id, v11, v23);
        *v21 = 1;
        v11 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&`typeinfo for'ScriptContext;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext);
        v24 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
          v24 = __asan_report_store8(
                  &luabind::detail::registered_class<ScriptContext>::id,
                  &`typeinfo for'ScriptContext);
        luabind::detail::registered_class<ScriptContext>::id = v24;
      }
      v25 = &`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id);
      }
      if ( !*v25 )
      {
        v26 = &`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id;
        v27 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v27 != 0;
        v28 = (v27 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id & 7) >= v27);
        if ( (_BYTE)v28 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<luabind::detail::null_type>::id,
            v11,
            v28);
        *v26 = 1;
        v11 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&`typeinfo for'luabind::detail::null_type;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'luabind::detail::null_type);
        v29 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<luabind::detail::null_type>::id >> 3)
                      + 0x7FFF8000) )
          v29 = __asan_report_store8(
                  &luabind::detail::registered_class<luabind::detail::null_type>::id,
                  &`typeinfo for'luabind::detail::null_type);
        luabind::detail::registered_class<luabind::detail::null_type>::id = v29;
      }
      v30 = &`guard variable for'luabind::detail::registered_class<ScriptLib>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptLib>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptLib>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptLib>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptLib>::id);
      }
      if ( !*v30 )
      {
        v31 = &`guard variable for'luabind::detail::registered_class<ScriptLib>::id;
        v32 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptLib>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v32 != 0;
        v33 = (v32 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptLib>::id & 7) >= v32);
        if ( (_BYTE)v33 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptLib>::id, v11, v33);
        *v31 = 1;
        v11 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&`typeinfo for'ScriptLib;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptLib);
        v34 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptLib>::id >> 3) + 0x7FFF8000) )
          v34 = __asan_report_store8(&luabind::detail::registered_class<ScriptLib>::id, &`typeinfo for'ScriptLib);
        luabind::detail::registered_class<ScriptLib>::id = v34;
      }
      v35 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v35 )
      {
        v36 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v37 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v37 != 0;
        v38 = (v37 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v37);
        if ( (_BYTE)v38 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v11,
            v38);
        *v36 = 1;
        v39 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v11);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v39;
      }
      v40 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v40 )
      {
        v41 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v42 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v42 != 0;
        v43 = (v42 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v42);
        if ( (_BYTE)v43 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v11,
            v43);
        *v41 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v11 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v44 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v44 )
      {
        v45 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v46 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v46 != 0;
        v47 = (v46 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v46);
        if ( (_BYTE)v47 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v11,
            v47);
        *v45 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v11 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v48 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v48 )
      {
        v49 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v50 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v50 != 0;
        v51 = (v50 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v50);
        if ( (_BYTE)v51 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v11,
            v51);
        *v49 = 1;
        v52 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v11);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v52;
      }
      v53 = &`guard variable for'luabind::detail::registered_class<Event>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Event>::id);
      }
      if ( !*v53 )
      {
        v54 = &`guard variable for'luabind::detail::registered_class<Event>::id;
        v55 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v11) = v55 != 0;
        v56 = (v55 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id & 7) >= v55);
        if ( (_BYTE)v56 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Event>::id, v11, v56);
        *v54 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Event);
        v57 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
          v57 = __asan_report_store8(&luabind::detail::registered_class<Event>::id, &`typeinfo for'Event);
        luabind::detail::registered_class<Event>::id = v57;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 4402: range 00000000149DF9A7-00000000149DFEFB
// local variable allocation has failed, the output may be wrong!
void __cdecl __static_initialization_and_destruction_1(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  char v4; // dl
  __int64 v5; // rdx
  luabind::detail::class_id v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  char v9; // dl
  __int64 v10; // rdx
  luabind::detail::class_id v11; // rax
  _BYTE *v12; // rcx
  _BYTE *v13; // rcx
  char v14; // dl
  __int64 v15; // rdx
  luabind::detail::class_id v16; // rax
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  char v19; // dl
  __int64 v20; // rdx
  luabind::detail::class_id v21; // rax
  _BYTE *v22; // rcx
  _BYTE *v23; // rcx
  char v24; // dl
  __int64 v25; // rdx
  luabind::detail::class_id v26; // rax
  _BYTE *v27; // rcx
  _BYTE *v28; // rcx
  char v29; // dl
  __int64 v30; // rdx
  luabind::detail::class_id v31; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_script_lib.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id;
        v4 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v4 != 0;
        v5 = (v4 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id & 7) >= v4);
        if ( (_BYTE)v5 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<ScriptContext const*>::id,
            *(_QWORD *)&__priority,
            v5);
        *v3 = 1;
        *(_QWORD *)&__priority = &`typeinfo for'ScriptContext const*;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext const*);
        v6 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext const*>::id >> 3)
                      + 0x7FFF8000) )
          v6 = __asan_report_store8(
                 &luabind::detail::registered_class<ScriptContext const*>::id,
                 &`typeinfo for'ScriptContext const*);
        luabind::detail::registered_class<ScriptContext const*>::id = v6;
      }
      v7 = &`guard variable for'luabind::detail::registered_class<Event *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Event *>::id);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'luabind::detail::registered_class<Event *>::id;
        v9 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v9 != 0;
        v10 = (v9 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id & 7) >= v9);
        if ( (_BYTE)v10 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<Event *>::id,
            *(_QWORD *)&__priority,
            v10);
        *v8 = 1;
        *(_QWORD *)&__priority = &`typeinfo for'Event *;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Event *);
        v11 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Event *>::id >> 3) + 0x7FFF8000) )
          v11 = __asan_report_store8(&luabind::detail::registered_class<Event *>::id, &`typeinfo for'Event *);
        luabind::detail::registered_class<Event *>::id = v11;
      }
      v12 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
      }
      if ( !*v12 )
      {
        v13 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
        v14 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(__priority) = v14 != 0;
        v15 = (v14 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= v14);
        if ( (_BYTE)v15 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id,
            *(_QWORD *)&__priority,
            v15);
        *v13 = 1;
        *(_QWORD *)&__priority = &`typeinfo for'ScriptContext *;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext *);
        v16 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(
                  &luabind::detail::registered_class<ScriptContext *>::id,
                  &`typeinfo for'ScriptContext *);
        luabind::detail::registered_class<ScriptContext *>::id = v16;
      }
      v17 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id);
      }
      if ( !*v17 )
      {
        v18 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id;
        v19 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(__priority) = v19 != 0;
        v20 = (v19 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id & 7) >= v19);
        if ( (_BYTE)v20 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id,
            *(_QWORD *)&__priority,
            v20);
        *v18 = 1;
        *(_QWORD *)&__priority = &`typeinfo for'std::auto_ptr<ScriptLib>;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::auto_ptr<ScriptLib>);
        v21 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id >> 3)
                      + 0x7FFF8000) )
          v21 = __asan_report_store8(
                  &luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id,
                  &`typeinfo for'std::auto_ptr<ScriptLib>);
        luabind::detail::registered_class<std::auto_ptr<ScriptLib>>::id = v21;
      }
      v22 = &`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id);
      }
      if ( !*v22 )
      {
        v23 = &`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id;
        v24 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(__priority) = v24 != 0;
        v25 = (v24 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id & 7) >= v24);
        if ( (_BYTE)v25 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<std::set<unsigned int>>::id,
            *(_QWORD *)&__priority,
            v25);
        *v23 = 1;
        *(_QWORD *)&__priority = &`typeinfo for'std::set<unsigned int>;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::set<unsigned int>);
        v26 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::set<unsigned int>>::id >> 3)
                      + 0x7FFF8000) )
          v26 = __asan_report_store8(
                  &luabind::detail::registered_class<std::set<unsigned int>>::id,
                  &`typeinfo for'std::set<unsigned int>);
        luabind::detail::registered_class<std::set<unsigned int>>::id = v26;
      }
      v27 = &`guard variable for'luabind::detail::registered_class<Vector3>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Vector3>::id);
      }
      if ( !*v27 )
      {
        v28 = &`guard variable for'luabind::detail::registered_class<Vector3>::id;
        v29 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(__priority) = v29 != 0;
        v30 = (v29 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Vector3>::id & 7) >= v29);
        if ( (_BYTE)v30 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<Vector3>::id,
            *(_QWORD *)&__priority,
            v30);
        *v28 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Vector3);
        v31 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Vector3>::id >> 3) + 0x7FFF8000) )
          v31 = __asan_report_store8(&luabind::detail::registered_class<Vector3>::id, &`typeinfo for'Vector3);
        luabind::detail::registered_class<Vector3>::id = v31;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 4402: range 00000000149DFEFC-00000000149E00E8
// local variable allocation has failed, the output may be wrong!
void __cdecl __static_initialization_and_destruction_2(int __initialize_p, int __priority)
{
  _BYTE *v2; // rcx
  _BYTE *v3; // rcx
  char v4; // dl
  __int64 v5; // rdx
  luabind::detail::class_id v6; // rax
  _BYTE *v7; // rcx
  _BYTE *v8; // rcx
  char v9; // dl
  __int64 v10; // rdx
  luabind::detail::class_id v11; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_script_lib.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id;
        v4 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v4 != 0;
        v5 = (v4 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id & 7) >= v4);
        if ( (_BYTE)v5 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<std::auto_ptr<Vector3>>::id,
            *(_QWORD *)&__priority,
            v5);
        *v3 = 1;
        *(_QWORD *)&__priority = &`typeinfo for'std::auto_ptr<Vector3>;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::auto_ptr<Vector3>);
        v6 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::auto_ptr<Vector3>>::id >> 3)
                      + 0x7FFF8000) )
          v6 = __asan_report_store8(
                 &luabind::detail::registered_class<std::auto_ptr<Vector3>>::id,
                 &`typeinfo for'std::auto_ptr<Vector3>);
        luabind::detail::registered_class<std::auto_ptr<Vector3>>::id = v6;
      }
      v7 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id;
        v9 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v9 != 0;
        v10 = (v9 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id & 7) >= v9);
        if ( (_BYTE)v10 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id,
            *(_QWORD *)&__priority,
            v10);
        *v8 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'std::auto_ptr<std::set<unsigned int>>);
        v11 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id >> 3)
                      + 0x7FFF8000) )
          v11 = __asan_report_store8(
                  &luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id,
                  &`typeinfo for'std::auto_ptr<std::set<unsigned int>>);
        luabind::detail::registered_class<std::auto_ptr<std::set<unsigned int>>>::id = v11;
      }
    }
    __asan_after_dynamic_init();
  }
};
