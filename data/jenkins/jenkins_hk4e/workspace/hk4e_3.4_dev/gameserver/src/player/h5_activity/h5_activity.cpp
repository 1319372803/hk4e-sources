// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/h5_activity/h5_activity.cpp

// Line 26: range 000000001664ADC4-000000001664AF6A
void __cdecl H5Activity::H5Activity(H5Activity *const this, Player *player, uint32_t h5_schedule_id)
{
  int (**v3)(...); // rdx
  __int64 v4; // rsi
  __int64 v5; // rdx

  common::milog::DescribalBase::DescribalBase(this);
  v3 = (int (**)(...))(&`vtable for'H5Activity + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this, player);
  this->_vptr_DescribalBase = v3;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_store8(&this->player_, player);
  this->player_ = player;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->h5_schedule_id_, player, &this->h5_schedule_id_);
  }
  this->h5_schedule_id_ = h5_schedule_id;
  v4 = (((_BYTE)this + 20) & 7u) + 3;
  v5 = (*(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000));
  if ( (_BYTE)v5 )
    __asan_report_store4(&this->h5_activity_id_, v4, v5);
  this->h5_activity_id_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->last_refresh_time_, v4, &this->last_refresh_time_);
  }
  this->last_refresh_time_ = 0;
  std::unordered_set<unsigned int>::unordered_set(&this->finished_h5_activity_watcher_set_);
  std::unordered_map<unsigned int,unsigned int>::unordered_map(&this->h5_activity_watcher_progress_map_);
  if ( *(char *)(((unsigned __int64)&this->is_finish_watcher_logged_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_finish_watcher_logged_, v4, &this->is_finish_watcher_logged_);
  this->is_finish_watcher_logged_ = 0;
};

// Line 33: range 000000001664AF6C-000000001664B1F4
std::string *__cdecl H5Activity::getDesc[abi:cxx11](std::string *retstr, const H5Activity *const this)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v5; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v6; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v7; // rcx
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v8; // rax
  common::tools::StringStream<common::tools::FixedBuffer<4096> > *v9; // r14
  unsigned int Uid; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 5 os:34";
  *(_QWORD *)(v2 + 16) = H5Activity::getDesc[abi:cxx11];
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::StringStream((common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32));
  v5 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(
         (common::tools::StringStream<common::tools::FixedBuffer<4096> > *const)(v2 + 32),
         "[h5_schedule_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->h5_schedule_id_);
  }
  v6 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v5, this->h5_schedule_id_);
  v7 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v6, " h5_activity_id:");
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->h5_activity_id_);
  }
  v8 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v7, this->h5_activity_id_);
  v9 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v8, " uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v11 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v9, Uid);
  common::tools::StringStream<common::tools::FixedBuffer<4096>>::operator<<(v11, "]");
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

// Line 43: range 000000001664B1F6-000000001664B3F0
void __cdecl H5Activity::fromBin(H5Activity *const this, const proto::H5ActivityBin *bin)
{
  __int64 v2; // rdx
  char v3; // al
  __int64 refresh_time; // rdx
  char v5; // al
  const google::protobuf::RepeatedField<unsigned int> *v6; // rax
  google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin>::const_iterator *p_for_end; // rsi
  google::protobuf::uint32 v8; // ebx
  std::unordered_map<unsigned int,unsigned int>::key_type *p_k; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v10; // rax
  google::protobuf::uint32 *v11; // rdx
  char v12; // cl
  unsigned int v13; // eax
  __int64 v14; // rdx
  char v15; // al
  const proto::H5ActivityBin *bina; // [rsp+0h] [rbp-50h]
  std::unordered_map<unsigned int,unsigned int>::key_type __k; // [rsp+1Ch] [rbp-34h] BYREF
  google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin> *__for_range; // [rsp+30h] [rbp-20h]
  const proto::H5ActivityWatcherBin *h5_activity_watcher_bin; // [rsp+38h] [rbp-18h]

  bina = bin;
  v2 = proto::H5ActivityBin::h5_activity_schedule_id(bin);
  v3 = *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000);
  if ( v3 != 0 && v3 <= 3 )
  {
    LOBYTE(bin) = v3 != 0;
    __asan_report_store4(&this->h5_schedule_id_, bin, v2);
  }
  this->h5_schedule_id_ = v2;
  refresh_time = proto::H5ActivityBin::last_refresh_time(bina);
  v5 = *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000);
  if ( v5 != 0 && v5 <= 3 )
  {
    LOBYTE(bin) = v5 != 0;
    __asan_report_store4(&this->last_refresh_time_, bin, refresh_time);
  }
  this->last_refresh_time_ = refresh_time;
  v6 = proto::H5ActivityBin::finished_h5_activity_watcher_list(bina);
  common::tools::MiscUtils::setFromRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->finished_h5_activity_watcher_set_,
    v6);
  __for_range = proto::H5ActivityBin::h5_activity_watcher_list(bina);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::H5ActivityWatcherBin>::end(__for_range).it_;
  while ( 1 )
  {
    p_for_end = &__for_end;
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityWatcherBin const>::operator!=(
            &__for_begin,
            &__for_end) )
      break;
    h5_activity_watcher_bin = google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityWatcherBin const>::operator*(&__for_begin);
    v8 = proto::H5ActivityWatcherBin::progress(h5_activity_watcher_bin);
    __k = proto::H5ActivityWatcherBin::h5_activity_watcher_id(h5_activity_watcher_bin);
    p_k = &__k;
    v10 = std::unordered_map<unsigned int,unsigned int>::operator[](&this->h5_activity_watcher_progress_map_, &__k);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(p_k) = v12 != 0;
      __asan_report_store4(v10, p_k, v10);
    }
    *v11 = v8;
    google::protobuf::internal::RepeatedPtrIterator<proto::H5ActivityWatcherBin const>::operator++(&__for_begin);
  }
  LOBYTE(v13) = proto::H5ActivityBin::is_finish_watcher_logged(bina);
  v14 = v13;
  v15 = *(_BYTE *)(((unsigned __int64)&this->is_finish_watcher_logged_ >> 3) + 0x7FFF8000);
  if ( v15 < 0 )
  {
    LOBYTE(p_for_end) = v15 != 0;
    __asan_report_store1(&this->is_finish_watcher_logged_, p_for_end, v14);
  }
  this->is_finish_watcher_logged_ = v14;
};

// Line 55: range 000000001664B3F2-000000001664B93D
void __cdecl H5Activity::toBin(const H5Activity *const this, proto::H5ActivityBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  std::pair<unsigned int const,unsigned int> *v6; // rax
  const unsigned int **v7; // rdx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rax
  _DWORD *v9; // rdx
  std::unordered_map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-A8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+20h] [rbp-A0h] BYREF
  const std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+28h] [rbp-98h]
  const data::H5ActivityExcelConfig *h5_activity_config_ptr; // [rsp+30h] [rbp-90h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-88h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *h5_activity_watcher_id; // [rsp+40h] [rbp-80h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *progress; // [rsp+48h] [rbp-78h]
  proto::H5ActivityWatcherBin *h5_activity_watcher_bin; // [rsp+50h] [rbp-70h]
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+58h] [rbp-68h] BYREF
  char v20[96]; // [rsp+60h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 watcher_id:71";
  *(_QWORD *)(v2 + 16) = H5Activity::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->h5_schedule_id_);
  }
  proto::H5ActivityBin::set_h5_activity_schedule_id(bin, this->h5_schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  proto::H5ActivityBin::set_last_refresh_time(bin, this->last_refresh_time_);
  v5 = proto::H5ActivityBin::mutable_finished_h5_activity_watcher_list(bin);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->finished_h5_activity_watcher_set_,
    v5);
  __for_range = &this->h5_activity_watcher_progress_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,unsigned int>::begin(&this->h5_activity_watcher_progress_map_)._M_cur;
  __for_begin_0._M_current = (const unsigned int *)std::unordered_map<unsigned int,unsigned int>::end(&this->h5_activity_watcher_progress_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            &__for_begin,
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)&__for_begin_0) )
  {
    v6 = (std::pair<unsigned int const,unsigned int> *)std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*(&__for_begin);
    v7 = (const unsigned int **)v6;
    if ( ((unsigned __int8)v6 & 7) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v6 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v6->second + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v6, 8LL);
    }
    __for_end._M_current = *v7;
    h5_activity_watcher_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
    progress = std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)&__for_end);
    h5_activity_watcher_bin = proto::H5ActivityBin::add_h5_activity_watcher_list(bin);
    if ( *(_BYTE *)(((unsigned __int64)h5_activity_watcher_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)h5_activity_watcher_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)h5_activity_watcher_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(h5_activity_watcher_id);
    }
    proto::H5ActivityWatcherBin::set_h5_activity_watcher_id(h5_activity_watcher_bin, *h5_activity_watcher_id);
    if ( *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)progress & 7) + 3) >= *(_BYTE *)(((unsigned __int64)progress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(progress);
    }
    proto::H5ActivityWatcherBin::set_progress(h5_activity_watcher_bin, *progress);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_finish_watcher_logged_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_finish_watcher_logged_);
  proto::H5ActivityBin::set_is_finish_watcher_logged(bin, this->is_finish_watcher_logged_);
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->h5_activity_id_);
  }
  proto::H5ActivityBin::set_h5_activity_id(bin, this->h5_activity_id_);
  h5_activity_config_ptr = H5Activity::findH5ActivityExcelConfig(this);
  if ( h5_activity_config_ptr )
  {
    __for_range_0 = &h5_activity_config_ptr->h5_activity_watcher_id_list;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end) )
    {
      v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      *(_DWORD *)(v2 + 32) = *v9;
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              &this->finished_h5_activity_watcher_set_,
              (const unsigned int *)(v2 + 32))
        && !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,unsigned int> const,unsigned int>(
              &this->h5_activity_watcher_progress_map_,
              (const unsigned int *)(v2 + 32)) )
      {
        proto::H5ActivityBin::add_unaccept_h5_activity_watcher_list(bin, *(_DWORD *)(v2 + 32));
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
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
};

// Line 83: range 000000001664B93E-000000001664BA7B
int32_t __cdecl H5Activity::init(H5Activity *const this)
{
  common::milog::MiLogStream *v1; // rax
  __int64 v3; // rsi
  uint32_t h5_activity_id; // ecx
  char v5; // dl
  __int64 v6; // rdx
  const data::H5ActivityScheduleConfig *h5_schedule_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  h5_schedule_config_ptr = H5Activity::findH5ActivityScheduleConfig(this);
  if ( h5_schedule_config_ptr )
  {
    v3 = (((_BYTE)h5_schedule_config_ptr + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->h5_activity_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)h5_schedule_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->h5_activity_id >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&h5_schedule_config_ptr->h5_activity_id);
    }
    h5_activity_id = h5_schedule_config_ptr->h5_activity_id;
    v5 = *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000);
    LOBYTE(v3) = v5 != 0;
    v6 = (v5 != 0) & (unsigned __int8)((char)((((_BYTE)this + 20) & 7) + 3) >= v5);
    if ( (_BYTE)v6 )
      __asan_report_store4(&this->h5_activity_id_, v3, v6);
    this->h5_activity_id_ = h5_activity_id;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/h5_activity/h5_activity.cpp",
      "init",
      87);
    v1 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v8,
           (const char (*)[51])"findH5ActivityScheduleConfig fail, h5_schedule_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->h5_schedule_id_);
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
};

// Line 95: range 000000001664BA7C-000000001664BD7D
void __cdecl H5Activity::toClient(const H5Activity *const this, proto::H5ActivityInfo *proto_h5_activity_info)
{
  common::milog::MiLogStream *v2; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  bool isInternalServer; // bl
  const data::H5ActivityScheduleConfig *h5_schedule_config_ptr; // [rsp+18h] [rbp-48h]
  std::shared_ptr<Config> v6; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v7; // [rsp+30h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->h5_schedule_id_);
  }
  proto::H5ActivityInfo::set_h5_schedule_id(proto_h5_activity_info, this->h5_schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->h5_activity_id_);
  }
  proto::H5ActivityInfo::set_h5_activity_id(proto_h5_activity_info, this->h5_activity_id_);
  h5_schedule_config_ptr = H5Activity::findH5ActivityScheduleConfig(this);
  if ( h5_schedule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&h5_schedule_config_ptr->begin_time);
    }
    proto::H5ActivityInfo::set_begin_time(proto_h5_activity_info, h5_schedule_config_ptr->begin_time);
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->end_time >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)h5_schedule_config_ptr + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->end_time >> 3)
                                                                             + 0x7FFF8000) )
    {
      __asan_report_load4(&h5_schedule_config_ptr->end_time);
    }
    proto::H5ActivityInfo::set_end_time(proto_h5_activity_info, h5_schedule_config_ptr->end_time);
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->content_close_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->content_close_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&h5_schedule_config_ptr->content_close_time);
    }
    proto::H5ActivityInfo::set_content_close_time(proto_h5_activity_info, h5_schedule_config_ptr->content_close_time);
    proto::H5ActivityInfo::set_prefab_path(proto_h5_activity_info, &h5_schedule_config_ptr->prefab_path);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v6);
    v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6);
    isInternalServer = Config::isInternalServer(v3);
    std::shared_ptr<Config>::~shared_ptr(&v6);
    if ( isInternalServer )
      proto::H5ActivityInfo::set_url(proto_h5_activity_info, &h5_schedule_config_ptr->url_cn);
    else
      proto::H5ActivityInfo::set_url(proto_h5_activity_info, &h5_schedule_config_ptr->url_os);
    if ( *(char *)(((unsigned __int64)&h5_schedule_config_ptr->is_entrance_open >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&h5_schedule_config_ptr->is_entrance_open);
    proto::H5ActivityInfo::set_is_entrance_open(proto_h5_activity_info, h5_schedule_config_ptr->is_entrance_open);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v7,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/h5_activity/h5_activity.cpp",
      "toClient",
      101);
    v2 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v7,
           (const char (*)[36])"findH5ActivityScheduleConfig fail. ");
    common::milog::MiLogStream::operator<<<H5Activity,(H5Activity*)0>(v2, this);
    common::milog::MiLogStream::~MiLogStream(&v7);
  }
};

// Line 122: range 000000001664BD7E-000000001664BE37
const data::H5ActivityScheduleConfig *__cdecl H5Activity::findH5ActivityScheduleConfig(const H5Activity *const this)
{
  data::DbH5ActivityConfigMgr *p_h5_activity_config_mgr; // rcx
  const data::H5ActivityScheduleConfig *H5ActivityScheduleConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_h5_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.db_config_mgr.db_local_config_mgr.h5_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->h5_schedule_id_);
  }
  H5ActivityScheduleConfig = data::DbH5ActivityConfigMgr::findH5ActivityScheduleConfig(
                               p_h5_activity_config_mgr,
                               this->h5_schedule_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return H5ActivityScheduleConfig;
};

// Line 127: range 000000001664BE38-000000001664BEF9
const data::H5ActivityExcelConfig *__cdecl H5Activity::findH5ActivityExcelConfig(const H5Activity *const this)
{
  H5ActivityExcelConfigMgr *p_h5_activity_config_mgr; // rcx
  const data::H5ActivityExcelConfig *H5ActivityExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_h5_activity_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.h5_activity_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->h5_activity_id_);
  }
  H5ActivityExcelConfig = data::H5ActivityExcelConfigMgrBase::findH5ActivityExcelConfig(
                            p_h5_activity_config_mgr,
                            this->h5_activity_id_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return H5ActivityExcelConfig;
};

// Line 132: range 000000001664BEFA-000000001664CB76
void __cdecl H5Activity::refreshH5Activity(H5Activity *const this, uint32_t now)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  time_t v9; // rdx
  time_t v10; // rcx
  time_t v11; // rsi
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v12; // rax
  _DWORD *v13; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  PlayerH5ActivityComp *H5ActivityComp; // rdi
  bool v19; // al
  uint32_t v20; // eax
  bool v21; // r14
  PlayerWatcherComp *v22; // rax
  char v23; // r14
  uint32_t v24; // eax
  char v25; // r15
  uint32_t v26; // r14d
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v27; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v28; // rax
  _DWORD *v29; // rdx
  uint32_t WatcherComp; // eax
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rcx
  PlayerWatcherComp *v38; // rax
  bool is_different_day; // [rsp+21h] [rbp-EFh]
  bool is_cond_satisfied; // [rsp+22h] [rbp-EEh]
  bool is_need_refresh; // [rsp+23h] [rbp-EDh]
  uint32_t time_offset; // [rsp+24h] [rbp-ECh]
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-E0h] BYREF
  const data::H5ActivityExcelConfig *h5_activity_config_ptr; // [rsp+38h] [rbp-D8h]
  const data::H5ActivityScheduleConfig *h5_schedule_config_ptr; // [rsp+40h] [rbp-D0h]
  const std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-C8h]
  const data::H5ActivityWatcherExcelConfig *h5_watcher_config_ptr; // [rsp+50h] [rbp-C0h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v52; // [rsp+60h] [rbp-B0h] BYREF
  char v53[144]; // [rsp+80h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 watcher_id:175 48 4 18 record_progres:180 64 16 15 watcher_ptr:177";
  *(_QWORD *)(v2 + 16) = H5Activity::refreshH5Activity;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202178560;
  h5_activity_config_ptr = H5Activity::findH5ActivityExcelConfig(this);
  h5_schedule_config_ptr = H5Activity::findH5ActivityScheduleConfig(this);
  if ( h5_activity_config_ptr && h5_schedule_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->begin_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&h5_schedule_config_ptr->begin_time);
    }
    if ( now < h5_schedule_config_ptr->begin_time )
      goto LABEL_61;
    if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->content_close_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->content_close_time >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&h5_schedule_config_ptr->content_close_time);
    }
    if ( now >= h5_schedule_config_ptr->content_close_time )
    {
LABEL_61:
      __for_range_0 = &h5_activity_config_ptr->h5_activity_watcher_id_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v28 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v29 = v28;
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v28);
        }
        *(_DWORD *)(v2 + 32) = *v29;
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), WatcherComp);
        if ( std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
        {
          *(_DWORD *)(v2 + 48) = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
                                   &this->h5_activity_watcher_progress_map_,
                                   (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32),
                                   0);
          v31 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          if ( BaseWatcher::getProgress(v31) != *(_DWORD *)(v2 + 48) )
          {
            common::milog::MiLogStream::create(
              &v52,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/player/h5_activity/h5_activity.cpp",
              "refreshH5Activity",
              183);
            v32 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    &v52,
                    (const char (*)[37])"watcher progress not match, watcher:");
            v33 = std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<BaseWatcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
            v34 = common::milog::MiLogStream::operator<<<BaseWatcher,(BaseWatcher*)0>(v32, v33);
            v35 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    v34,
                    (const char (*)[17])" record_progres:");
            v36 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v35,
                    (const unsigned int *)(v2 + 48));
            v37 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v36, (const char (*)[9])" player:");
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            operator<<(v37, this->player_);
            common::milog::MiLogStream::~MiLogStream(&v52);
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v38 = Player::getWatcherComp(this->player_);
          PlayerWatcherComp::delWatcher(v38, *(_DWORD *)(v2 + 32));
        }
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->content_close_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&h5_schedule_config_ptr->content_close_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&h5_schedule_config_ptr->content_close_time);
      }
      if ( now >= h5_schedule_config_ptr->content_close_time )
        H5Activity::tryLogFinishWatcherAfterContentClose(this);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v2 + 64));
      v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      time_offset = ConstValueExcelConfigMgr::getTimeOffsetSec(&v8->design_config.txt_config_mgr.const_value_config_mgr);
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
      v9 = time_offset;
      v10 = now;
      if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->last_refresh_time_);
      }
      v11 = v10;
      is_different_day = !common::tools::TimeUtils::isSameDay(this->last_refresh_time_, v10, v9);
      if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->last_refresh_time_, v11, &this->last_refresh_time_);
      }
      this->last_refresh_time_ = now;
      __for_range = &h5_activity_config_ptr->h5_activity_watcher_id_list;
      __for_begin._M_current = std::vector<unsigned int>::begin(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
      __for_end._M_current = std::vector<unsigned int>::end(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
      {
        v12 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
        v13 = v12;
        if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v12);
        }
        *(_DWORD *)(v2 + 48) = *v13;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)(v2 + 64));
        v14 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        h5_watcher_config_ptr = data::H5ActivityExcelConfigMgrBase::findH5ActivityWatcherExcelConfig(
                                  &v14->design_config.txt_config_mgr.h5_activity_config_mgr,
                                  *(_DWORD *)(v2 + 48));
        std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 64));
        if ( h5_watcher_config_ptr )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          H5ActivityComp = Player::getH5ActivityComp(this->player_);
          is_cond_satisfied = PlayerH5ActivityComp::checkH5ActivityConds(
                                H5ActivityComp,
                                this,
                                &h5_watcher_config_ptr->cond_comb,
                                &h5_watcher_config_ptr->cond_list);
          if ( *(char *)(((unsigned __int64)&h5_watcher_config_ptr->is_daily_refresh >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&h5_watcher_config_ptr->is_daily_refresh);
          v19 = h5_watcher_config_ptr->is_daily_refresh && is_different_day;
          is_need_refresh = v19;
          if ( !is_cond_satisfied || v19 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v20 = (unsigned int)Player::getWatcherComp(this->player_);
            PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), v20);
            v21 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64));
            std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
            if ( v21 )
            {
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              v22 = Player::getWatcherComp(this->player_);
              PlayerWatcherComp::delWatcher(v22, *(_DWORD *)(v2 + 48));
            }
            if ( is_need_refresh )
            {
              std::unordered_set<unsigned int>::erase(
                &this->finished_h5_activity_watcher_set_,
                (const std::unordered_set<unsigned int>::key_type *)(v2 + 48));
              std::unordered_map<unsigned int,unsigned int>::erase(
                &this->h5_activity_watcher_progress_map_,
                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
            }
          }
          v23 = 0;
          if ( !is_cond_satisfied
            || common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                 &this->finished_h5_activity_watcher_set_,
                 (const unsigned int *)(v2 + 48)) )
          {
            goto LABEL_51;
          }
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v24 = (unsigned int)Player::getWatcherComp(this->player_);
          PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)(v2 + 64), v24);
          v23 = 1;
          if ( std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)(v2 + 64)) )
            v25 = 1;
          else
LABEL_51:
            v25 = 0;
          if ( v23 )
            std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
          if ( v25 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            v26 = (unsigned int)Player::getWatcherComp(this->player_);
            v27 = std::unordered_map<unsigned int,unsigned int>::operator[](
                    &this->h5_activity_watcher_progress_map_,
                    (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
            if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v27);
            }
            PlayerWatcherComp::addWatcher((PlayerWatcherComp *const)(v2 + 64), v26, *(_DWORD *)(v2 + 48));
            std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)(v2 + 64));
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            &v52,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/player/h5_activity/h5_activity.cpp",
            "refreshH5Activity",
            150);
          v15 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  &v52,
                  (const char (*)[51])"findH5ActivityWatcherExcelConfig fail, watcher_id:");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v2 + 48));
          v17 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          operator<<(v17, this->player_);
          common::milog::MiLogStream::~MiLogStream(&v52);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
      }
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v52,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/h5_activity/h5_activity.cpp",
      "refreshH5Activity",
      137);
    v5 = common::milog::MiLogStream::operator<<<char [80],(char *[80])0>(
           &v52,
           (const char (*)[80])"findH5ActivityScheduleConfig or findH5ActivityExcelConfig fail, h5_schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->h5_schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v52);
  }
  if ( v53 == (char *)v2 )
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

// Line 196: range 000000001664CB78-000000001664D581
void __cdecl H5Activity::recordWatcherProgressBeforeContentClose(
        H5Activity *const this,
        const WatcherProgressUpdateEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rcx
  time_t Now; // rcx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  PlayerWatcherComp *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t cur_progress; // r14d
  uint32_t *p_watcher_id; // rsi
  std::unordered_map<unsigned int,unsigned int>::mapped_type *v19; // rax
  uint32_t *v20; // rdx
  char v21; // cl
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  PlayerBasicComp *BasicComp; // rax
  PlayerWatcherComp *WatcherComp; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rcx
  Player *player; // r14
  std::string eventa; // [rsp+0h] [rbp-F0h]
  const WatcherProgressUpdateEvent *eventb; // [rsp+0h] [rbp-F0h]
  H5Activity *thisa; // [rsp+8h] [rbp-E8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-D0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+30h] [rbp-C0h] BYREF
  common::milog::MiLogStream v38; // [rsp+40h] [rbp-B0h] BYREF
  char v39[144]; // [rsp+60h] [rbp-90h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:218 64 16 11 log_ptr:222";
  *(_QWORD *)(v2 + 16) = H5Activity::recordWatcherProgressBeforeContentClose;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  *(&eventa._anon_0._M_allocated_capacity + 1) = (std::string::size_type)H5Activity::findH5ActivityScheduleConfig(this);
  if ( !*(&eventa._anon_0._M_allocated_capacity + 1) )
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/h5_activity/h5_activity.cpp",
      "recordWatcherProgressBeforeContentClose",
      200);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v38,
           (const char (*)[51])"findH5ActivityScheduleConfig fail, h5_schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->h5_schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v6, (const char (*)[9])" player:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    operator<<(v7, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v38);
    goto LABEL_42;
  }
  Now = common::tools::TimeUtils::getNow();
  if ( *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 112) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((*(&eventa._anon_0._M_allocated_capacity + 1) + 112) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(*(&eventa._anon_0._M_allocated_capacity + 1) + 112);
  }
  if ( Now < *(unsigned int *)(*(&eventa._anon_0._M_allocated_capacity + 1) + 112) )
  {
    if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
           &this->finished_h5_activity_watcher_set_,
           &event->watcher_id) )
    {
      common::milog::MiLogStream::create(
        &v38,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/h5_activity/h5_activity.cpp",
        "recordWatcherProgressBeforeContentClose",
        211);
      v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              &v38,
              (const char (*)[49])"H5Activity watcher already finished, watcher_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &event->watcher_id);
      v7 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v16, (const char (*)[9])" player:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_7;
    }
    if ( *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)event + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&event->cur_progress >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&event->cur_progress);
    }
    cur_progress = event->cur_progress;
    p_watcher_id = &event->watcher_id;
    v19 = std::unordered_map<unsigned int,unsigned int>::operator[](
            &this->h5_activity_watcher_progress_map_,
            (const std::unordered_map<unsigned int,unsigned int>::key_type *)eventa._M_dataplus._M_p + 6);
    v20 = v19;
    v21 = *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000);
    if ( v21 != 0 && (char)(((unsigned __int8)v19 & 7) + 3) >= v21 )
    {
      LOBYTE(p_watcher_id) = v21 != 0;
      __asan_report_store4(v19, p_watcher_id, v19);
    }
    *v20 = cur_progress;
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/h5_activity/h5_activity.cpp",
      "recordWatcherProgressBeforeContentClose",
      215);
    v22 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
            &v38,
            (const char (*)[41])"update h5_activity progress, watcher_id:");
    v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v22,
            (const unsigned int *)eventa._M_dataplus._M_p + 6);
    v24 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v23, (const char (*)[11])" progress:");
    v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v24,
            (const unsigned int *)eventa._M_dataplus._M_p + 7);
    v26 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v25, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<H5Activity,(H5Activity*)0>(v26, this);
    common::milog::MiLogStream::~MiLogStream(&v38);
    if ( *(char *)(((unsigned __int64)(eventa._M_dataplus._M_p + 32) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(eventa._M_dataplus._M_p + 32);
    if ( eventa._M_dataplus._M_p[32] )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      BasicComp = Player::getBasicComp(this->player_);
      PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v38, BasicComp);
      StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xA32u, eventa);
      std::string::~string(&v38);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      WatcherComp = Player::getWatcherComp(thisa->player_);
      if ( *(_BYTE *)(((unsigned __int64)&eventb->watcher_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&eventb->watcher_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&eventb->watcher_id);
      }
      PlayerWatcherComp::delWatcher(WatcherComp, eventb->watcher_id);
      std::unordered_set<unsigned int>::insert(&thisa->finished_h5_activity_watcher_set_, &eventb->watcher_id);
      std::unordered_map<unsigned int,unsigned int>::erase(
        &thisa->h5_activity_watcher_progress_map_,
        &eventb->watcher_id);
      common::tools::perf::make_shared<proto_log::PlayerLogBodyFinishH5Watcher>();
      v29 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->h5_activity_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)thisa + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->h5_activity_id_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&thisa->h5_activity_id_);
      }
      proto_log::PlayerLogBodyFinishH5Watcher::set_h5_activity_id(v29, thisa->h5_activity_id_);
      v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&thisa->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&thisa->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&thisa->h5_schedule_id_);
      }
      proto_log::PlayerLogBodyFinishH5Watcher::set_h5_schedule_id(v30, thisa->h5_schedule_id_);
      v31 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishH5Watcher,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&eventb->watcher_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&eventb->watcher_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&eventb->watcher_id);
      }
      proto_log::PlayerLogBodyFinishH5Watcher::set_watcher_id(v31, eventb->watcher_id);
      if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      player = thisa->player_;
      std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
      std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFinishH5Watcher,void>(
        &p_body_ptr,
        (const std::shared_ptr<proto_log::PlayerLogBodyFinishH5Watcher> *)(v2 + 64));
      Player::printStatLog(player, &p_body_ptr, &p_body_ext_ptr, 0xEu);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
      std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
      std::shared_ptr<proto_log::PlayerLogBodyFinishH5Watcher>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFinishH5Watcher> *const)(v2 + 64));
      StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v38,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/h5_activity/h5_activity.cpp",
      "recordWatcherProgressBeforeContentClose",
      205);
    v9 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v38,
           (const char (*)[62])"ignore watcher progress after content_close_time. watcher_id:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &event->watcher_id);
    v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" progress:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &event->cur_progress);
    v13 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v12, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<H5Activity,(H5Activity*)0>(v13, this);
    common::milog::MiLogStream::~MiLogStream(&v38);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = Player::getWatcherComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->watcher_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->watcher_id);
    }
    PlayerWatcherComp::delWatcher(v14, event->watcher_id);
  }
LABEL_42:
  if ( v39 == (char *)v2 )
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

// Line 231: range 000000001664D582-000000001664DA5B
int32_t __cdecl H5Activity::getPlayerMemH5ActivityData(
        const H5Activity *const this,
        proto::PlayerMemH5ActivityData *player_mem_h5_activity_data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  google::protobuf::RepeatedField<unsigned int> *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v10; // rax
  _DWORD *v11; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v12; // rdx
  unsigned int *p_second; // rax
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+10h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+18h] [rbp-C8h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+20h] [rbp-C0h] BYREF
  const data::H5ActivityExcelConfig *h5_activity_config_ptr; // [rsp+28h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-B0h]
  proto::PlayerMemH5AcitivityWatcherData *proto_h5_activity_watcher; // [rsp+38h] [rbp-A8h]
  common::milog::MiLogStream v20; // [rsp+40h] [rbp-A0h] BYREF
  char v21[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:242 64 8 8 iter:248";
  *(_QWORD *)(v2 + 16) = H5Activity::getPlayerMemH5ActivityData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->h5_schedule_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->h5_schedule_id_);
  }
  proto::PlayerMemH5ActivityData::set_h5_schedule_id(player_mem_h5_activity_data, this->h5_schedule_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->h5_activity_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->h5_activity_id_);
  }
  proto::PlayerMemH5ActivityData::set_h5_activity_id(player_mem_h5_activity_data, this->h5_activity_id_);
  if ( *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->last_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->last_refresh_time_);
  }
  proto::PlayerMemH5ActivityData::set_last_refresh_time(player_mem_h5_activity_data, this->last_refresh_time_);
  v5 = proto::PlayerMemH5ActivityData::mutable_finished_h5_activity_watcher_list(player_mem_h5_activity_data);
  common::tools::MiscUtils::setToRepeated<std::unordered_set<unsigned int>,unsigned int>(
    &this->finished_h5_activity_watcher_set_,
    v5);
  h5_activity_config_ptr = H5Activity::findH5ActivityExcelConfig(this);
  if ( h5_activity_config_ptr )
  {
    __for_range = &h5_activity_config_ptr->h5_activity_watcher_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
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
      if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
              &this->finished_h5_activity_watcher_set_,
              (const unsigned int *)(v2 + 48)) )
      {
        *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                        &this->h5_activity_watcher_progress_map_,
                                                                                        (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
        __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(&this->h5_activity_watcher_progress_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
               &__y) )
        {
          proto::PlayerMemH5ActivityData::add_unaccept_h5_activity_watcher_list(
            player_mem_h5_activity_data,
            *(_DWORD *)(v2 + 48));
        }
        else
        {
          proto_h5_activity_watcher = proto::PlayerMemH5ActivityData::add_h5_activity_watcher_list(player_mem_h5_activity_data);
          proto::PlayerMemH5AcitivityWatcherData::set_h5_activity_watcher_id(
            proto_h5_activity_watcher,
            *(_DWORD *)(v2 + 48));
          v12 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
          p_second = &v12->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          proto::PlayerMemH5AcitivityWatcherData::set_progress(proto_h5_activity_watcher, v12->second);
        }
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    result = 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/player/h5_activity/h5_activity.cpp",
      "getPlayerMemH5ActivityData",
      239);
    v6 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v20,
           (const char (*)[48])"findH5ActivityExcelConfig fail, h5_schedule_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->h5_schedule_id_);
    v8 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v7, (const char (*)[2])" ");
    common::milog::MiLogStream::operator<<<H5Activity,(H5Activity*)0>(v8, this);
    common::milog::MiLogStream::~MiLogStream(&v20);
    result = 5;
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

// Line 264: range 000000001664DA5C-000000001664E11F
// local variable allocation has failed, the output may be wrong!
void __cdecl H5Activity::tryLogFinishWatcherAfterContentClose(H5Activity *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v7; // rax
  _DWORD *v8; // rdx
  std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  Player *v13; // r14
  std::string v14; // [rsp+0h] [rbp-140h] OVERLAPPED BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-120h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+28h] [rbp-118h] BYREF
  const data::H5ActivityExcelConfig *h5_activity_config_ptr; // [rsp+30h] [rbp-110h]
  const std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-108h]
  proto_log::H5ActivityWatcherLog *watcher_log; // [rsp+40h] [rbp-100h]
  const data::H5ActivityWatcherExcelConfig *watcher_config_ptr; // [rsp+48h] [rbp-F8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+50h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v22; // [rsp+60h] [rbp-E0h] BYREF
  std::string v23; // [rsp+70h] [rbp-D0h] BYREF
  char v24[176]; // [rsp+90h] [rbp-B0h] BYREF

  v14._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 1 10 holder:269 48 4 14 watcher_id:276 64 8 8 iter:280 96 16 11 log_ptr:270";
  *(_QWORD *)(v1 + 16) = H5Activity::tryLogFinishWatcherAfterContentClose;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -218959360;
  v3[536862723] = -202178560;
  if ( *(char *)(((v14._M_string_length + 144) >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(v14._M_string_length + 144);
  if ( !*(_BYTE *)(v14._M_string_length + 144) )
  {
    if ( *(_BYTE *)(((v14._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(v14._M_string_length + 8));
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32), 0xA33u, v14);
    std::string::~string(&v23);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish>();
    v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v14._M_string_length + 20) >> 3) + 0x7FFF8000) != 0
      && (char)(((LOBYTE(v14._M_string_length) + 20) & 7) + 3) >= *(_BYTE *)(((v14._M_string_length + 20) >> 3)
                                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(v14._M_string_length + 20);
    }
    proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish::set_h5_activity_id(v5, *(_DWORD *)(v14._M_string_length + 20));
    v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
    if ( *(_BYTE *)(((v14._M_string_length + 16) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((v14._M_string_length + 16) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(v14._M_string_length + 16);
    }
    proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish::set_h5_schedule_id(v6, *(_DWORD *)(v14._M_string_length + 16));
    h5_activity_config_ptr = H5Activity::findH5ActivityExcelConfig((const H5Activity *const)v14._M_string_length);
    if ( h5_activity_config_ptr )
    {
      __for_range = &h5_activity_config_ptr->h5_activity_watcher_id_list;
      *((std::vector<unsigned int>::const_iterator *)&v14._anon_0._M_allocated_capacity + 1) = std::vector<unsigned int>::begin(&h5_activity_config_ptr->h5_activity_watcher_id_list);
      __for_end._M_current = std::vector<unsigned int>::end(&h5_activity_config_ptr->h5_activity_watcher_id_list)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&v14._anon_0._M_allocated_capacity
              + 1,
                &__for_end) )
      {
        v7 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(
               (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&v14._anon_0._M_allocated_capacity
             + 1);
        v8 = v7;
        if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v7);
        }
        *(_DWORD *)(v1 + 48) = *v8;
        v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
        watcher_log = proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish::add_watcher_list(v9);
        proto_log::H5ActivityWatcherLog::set_watcher_id(watcher_log, *(_DWORD *)(v1 + 48));
        *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v1 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  (std::unordered_map<unsigned int,unsigned int> *const)(v14._M_string_length + 88),
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v1 + 48));
        __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end((std::unordered_map<unsigned int,unsigned int> *const)(v14._M_string_length + 88))._M_cur;
        if ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v1 + 64),
               &__y) )
        {
          v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v1 + 64));
          p_second = &v10->second;
          if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(p_second);
          }
          proto_log::H5ActivityWatcherLog::set_progress(watcher_log, v10->second);
        }
        else if ( common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
                    (std::unordered_set<unsigned int> *)(v14._M_string_length + 32),
                    (const unsigned int *)(v1 + 48)) )
        {
          ServiceBox::findService<GameserverService>();
          GameserverService::getConfig((GameserverService *const)&v22);
          v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v22);
          watcher_config_ptr = data::H5ActivityExcelConfigMgrBase::findH5ActivityWatcherExcelConfig(
                                 &v12->design_config.txt_config_mgr.h5_activity_config_mgr,
                                 *(_DWORD *)(v1 + 48));
          std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v22);
          if ( watcher_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&watcher_config_ptr->progress >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&watcher_config_ptr->progress);
            }
            proto_log::H5ActivityWatcherLog::set_progress(watcher_log, watcher_config_ptr->progress);
          }
        }
        else
        {
          proto_log::H5ActivityWatcherLog::set_progress(watcher_log, 0);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&v14._anon_0._M_allocated_capacity
        + 1);
      }
    }
    if ( *(_BYTE *)(((v14._M_string_length + 8) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v13 = *(Player **)(v14._M_string_length + 8);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v22, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish> *)(v1 + 96));
    Player::printStatLog(v13, &p_body_ptr, &v22, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v22);
    if ( *(char *)(((v14._M_string_length + 144) >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(v14._M_string_length + 144, &p_body_ptr, v14._M_string_length + 144);
    *(_BYTE *)(v14._M_string_length + 144) = 1;
    std::shared_ptr<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyH5WatcherOnH5ActivityFinish> *const)(v1 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 32));
  }
  if ( v24 == (char *)v1 )
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

// Line 301: range 0000000016658D45-0000000016658D68
void __cdecl GLOBAL__sub_I_merge_merge_crucible_activity_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
  __static_initialization_and_destruction_1(1, 0xFFFF);
};

// Line 301: range 0000000016658370-0000000016658B57
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  const boost::system::error_category **v2; // rdi
  const boost::system::error_category *system_category; // rax
  const boost::system::error_category *netdb_category; // rax
  const boost::system::error_category *addrinfo_category; // rax
  __int64 misc_category; // rax
  const std::_V2::error_category *v7; // rax
  const std::_V2::error_category *v8; // rax
  const std::_V2::error_category *v9; // rax
  const std::_V2::error_category *v10; // rax
  const std::_V2::error_category *v11; // rax
  boost::asio::detail::posix_global_impl<boost::asio::system_context> *v12; // rsi
  _BYTE *v13; // rcx
  _BYTE *v14; // rcx
  char v15; // dl
  __int64 v16; // rdx
  _BYTE *v17; // rcx
  _BYTE *v18; // rcx
  char v19; // dl
  __int64 v20; // rdx
  _BYTE *v21; // rcx
  _BYTE *v22; // rcx
  char v23; // dl
  __int64 v24; // rdx
  const char *v25; // rcx
  _BYTE *v26; // rcx
  _BYTE *v27; // rcx
  char v28; // dl
  __int64 v29; // rdx
  _BYTE *v30; // rcx
  _BYTE *v31; // rcx
  char v32; // dl
  __int64 v33; // rdx
  _BYTE *v34; // rcx
  _BYTE *v35; // rcx
  char v36; // dl
  __int64 v37; // rdx
  const char *v38; // rcx
  _BYTE *v39; // rcx
  _BYTE *v40; // rcx
  char v41; // dl
  __int64 v42; // rdx
  luabind::detail::class_id v43; // rax
  _BYTE *v44; // rcx
  _BYTE *v45; // rcx
  char v46; // dl
  __int64 v47; // rdx
  luabind::detail::class_id v48; // rax
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_crucible_activity.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      boost::none_t::none_t((boost::none_t *const)&boost::none, (boost::none_t::init_tag)&std::__ioinit);
      boost::optional_ns::in_place_init_t::in_place_init_t(
        (boost::optional_ns::in_place_init_t *const)&boost::optional_ns::in_place_init,
        (boost::optional_ns::in_place_init_t::init_tag)&std::__ioinit);
      v2 = (const boost::system::error_category **)&boost::optional_ns::in_place_init_if;
      boost::optional_ns::in_place_init_if_t::in_place_init_if_t(
        (boost::optional_ns::in_place_init_if_t *const)&boost::optional_ns::in_place_init_if,
        (boost::optional_ns::in_place_init_if_t::init_tag)&std::__ioinit);
      system_category = boost::asio::error::get_system_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::system_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::system_category;
        system_category = (const boost::system::error_category *)__asan_report_store8(
                                                                   &boost::asio::error::system_category,
                                                                   &std::__ioinit);
      }
      boost::asio::error::system_category = system_category;
      netdb_category = boost::asio::error::get_netdb_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::netdb_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::netdb_category;
        netdb_category = (const boost::system::error_category *)__asan_report_store8(
                                                                  &boost::asio::error::netdb_category,
                                                                  &std::__ioinit);
      }
      boost::asio::error::netdb_category = netdb_category;
      addrinfo_category = boost::asio::error::get_addrinfo_category();
      if ( *(_BYTE *)(((unsigned __int64)&boost::asio::error::addrinfo_category >> 3) + 0x7FFF8000) )
      {
        v2 = &boost::asio::error::addrinfo_category;
        addrinfo_category = (const boost::system::error_category *)__asan_report_store8(
                                                                     &boost::asio::error::addrinfo_category,
                                                                     &std::__ioinit);
      }
      boost::asio::error::addrinfo_category = addrinfo_category;
      misc_category = (__int64)boost::asio::error::get_misc_category();
      if ( *(_BYTE *)(((unsigned __int64)boost::asio::error::misc_category >> 3) + 0x7FFF8000) )
      {
        v2 = (const boost::system::error_category **)boost::asio::error::misc_category;
        misc_category = __asan_report_store8(boost::asio::error::misc_category, &std::__ioinit);
      }
      boost::asio::error::misc_category[0] = misc_category;
      v7 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)v2);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_span_context_error, 1, v7);
      v8 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_span_context_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::invalid_carrier_error, 2, v8);
      v9 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::invalid_carrier_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::span_context_corrupted_error, 3, v9);
      v10 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::span_context_corrupted_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::key_not_found_error, 4, v10);
      v11 = (const std::_V2::error_category *)opentracing::v3::propagation_error_category((opentracing::v3 *)&opentracing::v3::key_not_found_error);
      std::error_code::error_code((std::error_code *const)&opentracing::v3::lookup_key_not_supported_error, 5, v11);
      VisionContext::VisionContext(&VisionContext::meet_context, VISION_MEET);
      v12 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)5;
      VisionContext::VisionContext(&VisionContext::miss_context, VISION_MISS);
      v13 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
      }
      if ( !*v13 )
      {
        v14 = &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        v15 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v15 != 0;
        v16 = (v15 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_ & 7) >= v15);
        if ( (_BYTE)v16 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
            v12,
            v16);
        *v14 = 1;
        boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::tss_ptr(&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_);
        v12 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::tss_ptr<boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::context>::~tss_ptr,
          &boost::asio::detail::call_stack<boost::asio::detail::thread_context,boost::asio::detail::thread_info_base>::top_,
          &_dso_handle);
      }
      v17 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_);
      }
      if ( !*v17 )
      {
        v18 = &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        v19 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v19 != 0;
        v20 = (v19 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_ & 7) >= v19);
        if ( (_BYTE)v20 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
            v12,
            v20);
        *v18 = 1;
        v12 = &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::posix_global_impl<boost::asio::system_context>::~posix_global_impl,
          &boost::asio::detail::posix_global_impl<boost::asio::system_context>::instance_,
          &_dso_handle);
      }
      v21 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero);
      }
      if ( !*v21 )
      {
        v22 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v23 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v23 != 0;
        v24 = (v23 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v23);
        if ( (_BYTE)v24 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v12,
            v24);
        *v22 = 1;
        v25 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v12);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v25;
      }
      v26 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
      }
      if ( !*v26 )
      {
        v27 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        v28 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v28 != 0;
        v29 = (v28 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id & 7) >= v28);
        if ( (_BYTE)v29 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
            v12,
            v29);
        *v27 = 1;
        boost::asio::detail::service_id<boost::asio::detail::scheduler>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id);
        v12 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::scheduler>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::scheduler>::id,
          &_dso_handle);
      }
      v30 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
      }
      if ( !*v30 )
      {
        v31 = &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        v32 = *(_BYTE *)(((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v32 != 0;
        v33 = (v32 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id & 7) >= v32);
        if ( (_BYTE)v33 )
          __asan_report_store1(
            &`guard variable for'boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
            v12,
            v33);
        *v31 = 1;
        boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::service_id(&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id);
        v12 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id;
        __cxa_atexit(
          (void (__fastcall *)(void *))boost::asio::detail::service_id<boost::asio::detail::epoll_reactor>::~service_id,
          &boost::asio::detail::execution_context_service_base<boost::asio::detail::epoll_reactor>::id,
          &_dso_handle);
      }
      v34 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero);
      }
      if ( !*v34 )
      {
        v35 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero;
        v36 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v36 != 0;
        v37 = (v36 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero & 7) >= v36);
        if ( (_BYTE)v37 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero,
            v12,
            v37);
        *v35 = 1;
        v38 = common::tools::StringStream<common::tools::FixedBuffer<4096>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero, v12);
        common::tools::StringStream<common::tools::FixedBuffer<4096>>::zero = v38;
      }
      v39 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id);
      }
      if ( !*v39 )
      {
        v40 = &`guard variable for'luabind::detail::registered_class<ScriptContext>::id;
        v41 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v41 != 0;
        v42 = (v41 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext>::id & 7) >= v41);
        if ( (_BYTE)v42 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<ScriptContext>::id, v12, v42);
        *v40 = 1;
        v12 = (boost::asio::detail::posix_global_impl<boost::asio::system_context> *)&`typeinfo for'ScriptContext;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext);
        v43 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext>::id >> 3) + 0x7FFF8000) )
          v43 = __asan_report_store8(
                  &luabind::detail::registered_class<ScriptContext>::id,
                  &`typeinfo for'ScriptContext);
        luabind::detail::registered_class<ScriptContext>::id = v43;
      }
      v44 = &`guard variable for'luabind::detail::registered_class<Event>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Event>::id);
      }
      if ( !*v44 )
      {
        v45 = &`guard variable for'luabind::detail::registered_class<Event>::id;
        v46 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id >> 3)
                       + 0x7FFF8000);
        LOBYTE(v12) = v46 != 0;
        v47 = (v46 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event>::id & 7) >= v46);
        if ( (_BYTE)v47 )
          __asan_report_store1(&`guard variable for'luabind::detail::registered_class<Event>::id, v12, v47);
        *v45 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Event);
        v48 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Event>::id >> 3) + 0x7FFF8000) )
          v48 = __asan_report_store8(&luabind::detail::registered_class<Event>::id, &`typeinfo for'Event);
        luabind::detail::registered_class<Event>::id = v48;
      }
    }
    __asan_after_dynamic_init();
  }
};

// Line 301: range 0000000016658B58-0000000016658D44
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
  luabind::type_id cls; // [rsp+18h] [rbp-8h] BYREF

  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_merge_crucible_activity.cpp");
    if ( __priority == 0xFFFF )
    {
      v2 = &`guard variable for'luabind::detail::registered_class<Event *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<Event *>::id);
      }
      if ( !*v2 )
      {
        v3 = &`guard variable for'luabind::detail::registered_class<Event *>::id;
        v4 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v4 != 0;
        v5 = (v4 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<Event *>::id & 7) >= v4);
        if ( (_BYTE)v5 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<Event *>::id,
            *(_QWORD *)&__priority,
            v5);
        *v3 = 1;
        *(_QWORD *)&__priority = &`typeinfo for'Event *;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'Event *);
        v6 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<Event *>::id >> 3) + 0x7FFF8000) )
          v6 = __asan_report_store8(&luabind::detail::registered_class<Event *>::id, &`typeinfo for'Event *);
        luabind::detail::registered_class<Event *>::id = v6;
      }
      v7 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
      if ( *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                    + 0x7FFF8000) != 0
        && (char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id);
      }
      if ( !*v7 )
      {
        v8 = &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id;
        v9 = *(_BYTE *)(((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id >> 3)
                      + 0x7FFF8000);
        LOBYTE(__priority) = v9 != 0;
        v10 = (v9 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'luabind::detail::registered_class<ScriptContext *>::id & 7) >= v9);
        if ( (_BYTE)v10 )
          __asan_report_store1(
            &`guard variable for'luabind::detail::registered_class<ScriptContext *>::id,
            *(_QWORD *)&__priority,
            v10);
        *v8 = 1;
        luabind::type_id::type_id(&cls, (const std::type_info *)&`typeinfo for'ScriptContext *);
        v11 = luabind::detail::allocate_class_id(&cls);
        if ( *(_BYTE *)(((unsigned __int64)&luabind::detail::registered_class<ScriptContext *>::id >> 3) + 0x7FFF8000) )
          v11 = __asan_report_store8(
                  &luabind::detail::registered_class<ScriptContext *>::id,
                  &`typeinfo for'ScriptContext *);
        luabind::detail::registered_class<ScriptContext *>::id = v11;
      }
    }
    __asan_after_dynamic_init();
  }
};
