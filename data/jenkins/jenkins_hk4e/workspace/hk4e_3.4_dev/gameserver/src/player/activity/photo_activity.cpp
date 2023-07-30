// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/photo_activity.cpp

// Line 21: range 0000000016C03C8A-0000000016C03DD2
void __cdecl PhotoPosData::fromBin(PhotoPosData *const this, const proto::PhotoPosBin *bin)
{
  uint32_t v2; // ecx
  bool is_open; // cl
  bool is_view; // cl
  bool is_finish; // cl

  v2 = proto::PhotoPosBin::pos_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->pos_id = v2;
  is_open = proto::PhotoPosBin::is_open(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_open);
  }
  this->is_open = is_open;
  is_view = proto::PhotoPosBin::is_view(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_view);
  }
  this->is_view = is_view;
  is_finish = proto::PhotoPosBin::is_finish(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_finish);
  }
  this->is_finish = is_finish;
};

// Line 29: range 0000000016C03DD4-0000000016C03F24
void __cdecl PhotoPosData::toBin(const PhotoPosData *const this, proto::PhotoPosBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PhotoPosBin::set_pos_id(bin, this->pos_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::PhotoPosBin::set_is_open(bin, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_view);
  }
  proto::PhotoPosBin::set_is_view(bin, this->is_view);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_finish >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_finish);
  }
  proto::PhotoPosBin::set_is_finish(bin, this->is_finish);
};

// Line 37: range 0000000016C03F26-0000000016C04025
void __cdecl PhotoPosData::toClient(const PhotoPosData *const this, proto::PhotoPosData *photo_pos_data)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::PhotoPosData::set_pos_id(photo_pos_data, this->pos_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 5) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_open >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_open);
  }
  proto::PhotoPosData::set_is_open(photo_pos_data, this->is_open);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_view >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_view);
  }
  proto::PhotoPosData::set_is_view(photo_pos_data, this->is_view);
};

// Line 45: range 0000000016C04026-0000000016C04289
int32_t __cdecl PhotoActivity::fromScheduleBin(PhotoActivity *const this, const proto::ActivityScheduleBin *bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::unordered_map<unsigned int,PhotoPosData>::mapped_type *v5; // rax
  _QWORD *v6; // rdx
  bool is_content_closed; // dl
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::PhotoPosBin>::const_iterator __for_begin; // [rsp+18h] [rbp-88h] BYREF
  google::protobuf::RepeatedPtrField<proto::PhotoPosBin>::const_iterator __for_end; // [rsp+20h] [rbp-80h] BYREF
  const proto::PhotoScheduleBin *schedule_bin; // [rsp+28h] [rbp-78h]
  const google::protobuf::RepeatedPtrField<proto::PhotoPosBin> *__for_range; // [rsp+30h] [rbp-70h]
  const proto::PhotoPosBin *pos_data_bin; // [rsp+38h] [rbp-68h]
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 11 pos_data:49";
  *(_QWORD *)(v2 + 16) = PhotoActivity::fromScheduleBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  schedule_bin = proto::ActivityScheduleBin::photo_bin(bin);
  __for_range = proto::PhotoScheduleBin::photo_pos_bin_list(schedule_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::PhotoPosBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::PhotoPosBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::PhotoPosBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    pos_data_bin = google::protobuf::internal::RepeatedPtrIterator<proto::PhotoPosBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = 0;
    *(_BYTE *)(v2 + 36) = 0;
    *(_BYTE *)(v2 + 37) = 0;
    *(_BYTE *)(v2 + 38) = 0;
    PhotoPosData::fromBin((PhotoPosData *const)(v2 + 32), pos_data_bin);
    v5 = std::unordered_map<unsigned int,PhotoPosData>::operator[](
           &this->photo_pos_data_map_,
           (const std::unordered_map<unsigned int,PhotoPosData>::key_type *)(v2 + 32));
    v6 = v5;
    if ( ((unsigned __int8)v5 & 7) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)(((unsigned __int64)(&v5->is_finish + 1) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v5 + 7) & 7) >= *(_BYTE *)(((unsigned __int64)(&v5->is_finish + 1) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5, 8LL);
    }
    *v6 = *(_QWORD *)(v2 + 32);
    google::protobuf::internal::RepeatedPtrIterator<proto::PhotoPosBin const>::operator++(&__for_begin);
  }
  is_content_closed = proto::PhotoScheduleBin::is_content_closed(schedule_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
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

// Line 58: range 0000000016C0428A-0000000016C043A7
int32_t __cdecl PhotoActivity::toScheduleBin(const PhotoActivity *const this, proto::ActivityScheduleBin *bin)
{
  std::unordered_map<unsigned int,PhotoPosData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,PhotoPosData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::PhotoScheduleBin *schedule_bin; // [rsp+20h] [rbp-30h]
  const std::unordered_map<unsigned int,PhotoPosData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,PhotoPosData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,PhotoPosData> >::type *pos_id; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,PhotoPosData> >::type *pos_data; // [rsp+40h] [rbp-10h]
  proto::PhotoPosBin *pos_bin; // [rsp+48h] [rbp-8h]

  schedule_bin = proto::ActivityScheduleBin::mutable_photo_bin(bin);
  __for_range = &this->photo_pos_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,PhotoPosData>::begin(&this->photo_pos_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,PhotoPosData>::end(&this->photo_pos_data_map_)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,PhotoPosData>,false>(&__for_begin, &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::operator*(&__for_begin);
    pos_id = std::get<0ul,unsigned int const,PhotoPosData>(v7);
    pos_data = (std::tuple_element<1,const std::pair<unsigned int const,PhotoPosData> >::type *)std::get<1ul,unsigned int const,PhotoPosData>(v7);
    pos_bin = proto::PhotoScheduleBin::add_photo_pos_bin_list(schedule_bin);
    PhotoPosData::toBin(pos_data, pos_bin);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::PhotoScheduleBin::set_is_content_closed(schedule_bin, this->is_content_closed_);
  return 0;
};

// Line 70: range 0000000016C043A8-0000000016C049AC
int32_t __cdecl PhotoActivity::toClient(PhotoActivity *const this, proto::ActivityInfo *activity_info)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  int32_t result; // eax
  ActivityPhotographExcelConfigMgr *p_activity_photograph_config_mgr; // rcx
  common::milog::MiLogStream *v10; // rax
  uint32_t open_day; // ecx
  uint32_t BeginTimeByOpenDay; // eax
  ActivityPhotographExcelConfigMgr *v13; // rcx
  proto::Vector *v14; // rax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::unordered_map<unsigned int,PhotoPosData>::iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::unordered_map<unsigned int,PhotoPosData>::iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  proto::PhotoActivityDetailInfo *info; // [rsp+28h] [rbp-D8h]
  std::unordered_map<unsigned int,PhotoPosData> *__for_range; // [rsp+30h] [rbp-D0h]
  const std::pair<unsigned int const,PhotoPosData> *v20; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,PhotoPosData> >::type *pos_id; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,PhotoPosData> >::type *pos_data; // [rsp+48h] [rbp-B8h]
  proto::PhotoPosData *client_pos_data; // [rsp+50h] [rbp-B0h]
  const data::ActivityPhotographPosExcelConfig *pos_config_ptr; // [rsp+58h] [rbp-A8h]
  std::shared_ptr<Config> v25; // [rsp+60h] [rbp-A0h] BYREF
  std::shared_ptr<Config> v26; // [rsp+70h] [rbp-90h] BYREF
  common::milog::MiLogStream v27; // [rsp+80h] [rbp-80h] BYREF
  char v28[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 12 9 center:90";
  *(_QWORD *)(v2 + 16) = PhotoActivity::toClient;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202177536;
  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/photo_activity.cpp",
      "toClient",
      73);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v27,
           (const char (*)[51])"[PHOTO] BaseActivity::toClient fails, schedule_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->schedule_id_);
    v7 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v6, (const char (*)[6])" uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = -1;
  }
  else
  {
    info = proto::ActivityInfo::mutable_photo_info(activity_info);
    __for_range = &this->photo_pos_data_map_;
    __for_begin._M_cur = std::unordered_map<unsigned int,PhotoPosData>::begin(&this->photo_pos_data_map_)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,PhotoPosData>::end(&this->photo_pos_data_map_)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,PhotoPosData>,false>(&__for_begin, &__for_end) )
    {
      v20 = std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::operator*(&__for_begin);
      pos_id = std::get<0ul,unsigned int const,PhotoPosData>(v20);
      pos_data = (std::tuple_element<1,const std::pair<unsigned int const,PhotoPosData> >::type *)std::get<1ul,unsigned int const,PhotoPosData>(v20);
      client_pos_data = proto::PhotoActivityDetailInfo::add_photo_pos_data_list(info);
      PhotoPosData::toClient(pos_data, client_pos_data);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v25);
      p_activity_photograph_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25)->design_config.txt_config_mgr.activity_photograph_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)pos_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      pos_config_ptr = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(
                         p_activity_photograph_config_mgr,
                         *pos_id);
      std::shared_ptr<Config>::~shared_ptr(&v25);
      if ( !pos_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/photo_activity.cpp",
          "toClient",
          85);
        v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v27,
                (const char (*)[30])"[PHOTO] pos_id not invaild : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, pos_id);
        common::milog::MiLogStream::~MiLogStream(&v27);
        result = -1;
        goto LABEL_24;
      }
      if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&pos_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      open_day = pos_config_ptr->open_day;
      if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
      proto::PhotoPosData::set_open_time(client_pos_data, BeginTimeByOpenDay);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      v13 = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.activity_photograph_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)pos_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(Vector3 *)(v2 + 32) = ActivityPhotographExcelConfigMgr::findCenterByPosId(v13, *pos_id);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      v14 = proto::PhotoPosData::mutable_center(client_pos_data);
      Vector3::toClient((const Vector3 *const)(v2 + 32), v14);
      std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::operator++(&__for_begin);
    }
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::PhotoActivityDetailInfo::set_is_content_closed(info, this->is_content_closed_);
    result = 0;
  }
LABEL_24:
  if ( v28 == (char *)v2 )
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

// Line 98: range 0000000016C049AE-0000000016C04A0B
int32_t __cdecl PhotoActivity::init(PhotoActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    PhotoActivity::registerObserver(this);
  return 0;
};

// Line 108: range 0000000016C04A0C-0000000016C04ED1
void __cdecl PhotoActivity::onPreStart(PhotoActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  ActivityPhotographExcelConfigMgr *p_activity_photograph_config_mgr; // rcx
  common::milog::MiLogStream *v5; // rax
  PhotoPosData *v6; // rax
  const unsigned int *v7; // rcx
  PhotoPosData *v8; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>,bool> v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r12
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+20h] [rbp-D0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+28h] [rbp-C8h] BYREF
  const data::ActivityPhotographExcelConfig *photo_conf; // [rsp+30h] [rbp-C0h]
  const std::vector<unsigned int> *pos_id_list; // [rsp+38h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range; // [rsp+40h] [rbp-B0h]
  const unsigned int *pos_id; // [rsp+48h] [rbp-A8h]
  std::shared_ptr<Config> v19; // [rsp+50h] [rbp-A0h] BYREF
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
  *(_QWORD *)(v1 + 8) = "1 32 8 12 pos_data:120";
  *(_QWORD *)(v1 + 16) = PhotoActivity::onPreStart;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v19);
  p_activity_photograph_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v19)->design_config.txt_config_mgr.activity_photograph_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  photo_conf = ActivityPhotographExcelConfigMgr::findPhotographConfigByActivityId(
                 p_activity_photograph_config_mgr,
                 this->activity_id_);
  std::shared_ptr<Config>::~shared_ptr(&v19);
  if ( photo_conf )
  {
    std::unordered_map<unsigned int,PhotoPosData>::clear(&this->photo_pos_data_map_);
    pos_id_list = &photo_conf->photo_pos_id_list;
    __for_range = &photo_conf->photo_pos_id_list;
    __for_begin._M_current = std::vector<unsigned int>::begin(&photo_conf->photo_pos_id_list)._M_current;
    __for_end._M_current = std::vector<unsigned int>::end(&photo_conf->photo_pos_id_list)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      pos_id = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
      *(_DWORD *)(v1 + 32) = 0;
      *(_BYTE *)(v1 + 36) = 0;
      *(_BYTE *)(v1 + 37) = 0;
      *(_BYTE *)(v1 + 38) = 0;
      if ( *(_BYTE *)(((unsigned __int64)pos_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)pos_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)pos_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *pos_id;
      *(_BYTE *)(v1 + 37) = 0;
      *(_BYTE *)(v1 + 36) = 0;
      *(_BYTE *)(v1 + 38) = 0;
      v6 = std::move<PhotoPosData &>((PhotoPosData *)(v1 + 32));
      v9 = std::unordered_map<unsigned int,PhotoPosData>::emplace<unsigned int const&,PhotoPosData>(
             &this->photo_pos_data_map_,
             pos_id,
             v6,
             v7,
             v8);
      if ( !v9.second )
      {
        common::milog::MiLogStream::create(
          &v20,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/player/activity/photo_activity.cpp",
          "onPreStart",
          128);
        v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                &v20,
                (const char (*)[27])"[PHOTO] duplicated pos_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, pos_id);
        common::milog::MiLogStream::~MiLogStream(&v20);
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/photo_activity.cpp",
      "onPreStart",
      131);
    v11 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            &v20,
            (const char (*)[25])"[PHOTO] onPreStart, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v20,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/photo_activity.cpp",
      "onPreStart",
      113);
    v5 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
           &v20,
           (const char (*)[32])"[PHOTO] photo_conf not found : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->activity_id_);
    common::milog::MiLogStream::~MiLogStream(&v20);
  }
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

// Line 135: range 0000000016C04ED2-0000000016C04EEC
void __cdecl PhotoActivity::onStart(PhotoActivity *const this)
{
  PhotoActivity::registerObserver(this);
};

// Line 140: range 0000000016C04EEE-0000000016C04F14
void __cdecl PhotoActivity::onSettle(PhotoActivity *const this)
{
  PhotoActivity::closeContent(this);
  PhotoActivity::unregisterObserver(this);
};

// Line 146: range 0000000016C04F16-0000000016C04F6F
void __cdecl PhotoActivity::onDailyRefresh(PhotoActivity *const this)
{
  if ( BaseActivity::isOpening(this, 0) && !BaseActivity::isSettled(this) )
    BaseActivity::notifyClientData(this, 0);
};

// Line 155: range 0000000016C04F70-0000000016C04FD0
void __cdecl PhotoActivity::onClear(PhotoActivity *const this)
{
  std::unordered_map<unsigned int,PhotoPosData>::clear(&this->photo_pos_data_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
};

// Line 161: range 0000000016C04FD2-0000000016C05112
void __cdecl PhotoActivity::registerObserver(PhotoActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  char v4[128]; // [rsp+10h] [rbp-80h] BYREF

  v1 = (unsigned __int64)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:162 64 16 12 this_wtr:163";
  *(_QWORD *)(v1 + 16) = PhotoActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this((std::enable_shared_from_this<BaseActivity> *const)(v1 + 64));
  std::dynamic_pointer_cast<PhotoActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)(v1 + 64));
  std::weak_ptr<PhotoActivity>::weak_ptr<PhotoActivity,void>(
    (std::weak_ptr<PhotoActivity> *const)(v1 + 64),
    (const std::shared_ptr<PhotoActivity> *)(v1 + 32));
  std::weak_ptr<PhotoActivity>::~weak_ptr((std::weak_ptr<PhotoActivity> *const)(v1 + 64));
  std::shared_ptr<PhotoActivity>::~shared_ptr((std::shared_ptr<PhotoActivity> *const)(v1 + 32));
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

// Line 167: range 0000000016C05114-0000000016C05218
void __cdecl PhotoActivity::unregisterObserver(PhotoActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<std::type_index,std::weak_ptr<Observer>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<const std::type_index,std::weak_ptr<Observer> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<const std::type_index,std::weak_ptr<Observer> > >::type *obs_wtr; // [rsp+38h] [rbp-8h]

  __for_range = &this->event_observer_map_;
  __for_begin._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::begin(&this->event_observer_map_)._M_node;
  __for_end._M_node = std::map<std::type_index,std::weak_ptr<Observer>>::end(&this->event_observer_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator*(&__for_begin);
    _ = std::get<0ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    obs_wtr = std::get<1ul,std::type_index const,std::weak_ptr<Observer>>(__in);
    if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(obs_wtr) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      EventComp = Player::getEventComp(this->player_);
      PlayerEventComp::unregisterObserver(EventComp, obs_wtr);
    }
    std::_Rb_tree_iterator<std::pair<std::type_index const,std::weak_ptr<Observer>>>::operator++(&__for_begin);
  }
  std::map<std::type_index,std::weak_ptr<Observer>>::clear(&this->event_observer_map_);
};

// Line 179: range 0000000016C0521A-0000000016C05373
void __cdecl PhotoActivity::closeContent(PhotoActivity *const this)
{
  PlayerGroupLinkComp *GroupLinkComp; // rdi
  uint32_t schedule_id; // edx

  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GroupLinkComp = Player::getGroupLinkComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      GroupLinkComp = (PlayerGroupLinkComp *)&this->schedule_id_;
      __asan_report_load4();
    }
    schedule_id = this->schedule_id_;
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      GroupLinkComp = (PlayerGroupLinkComp *)&this->activity_id_;
      __asan_report_load4();
    }
    PlayerGroupLinkComp::unregisterGroupBundleByActivity(GroupLinkComp, this->activity_id_, schedule_id, 1);
  }
};

// Line 189: range 0000000016C05374-0000000016C057C1
bool __cdecl PhotoActivity::checkCondIsMeet(PhotoActivity *const this, const data::NewActivityCond *cond)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  bool result; // al
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v9; // rdx
  common::milog::MiLogStream *v10; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::pointer v11; // rdx
  bool *p_is_finish; // rax
  std::vector<int>::const_iterator __for_begin; // [rsp+10h] [rbp-C0h] BYREF
  std::vector<int>::const_iterator __for_end; // [rsp+18h] [rbp-B8h] BYREF
  unsigned __int64 val; // [rsp+20h] [rbp-B0h] BYREF
  const std::vector<int> *__for_range; // [rsp+28h] [rbp-A8h]
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-A0h] BYREF
  char v18[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 pos_id:199 64 8 8 iter:202";
  *(_QWORD *)(v2 + 16) = PhotoActivity::checkCondIsMeet;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&cond->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  if ( cond->type == NEW_ACTIVITY_COND_FINISH_PHOTO_POS_ID )
  {
    if ( std::vector<int>::size(&cond->param) )
    {
      __for_range = &cond->param;
      __for_begin._M_current = std::vector<int>::begin(&cond->param)._M_current;
      __for_end._M_current = std::vector<int>::end(&cond->param)._M_current;
      while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(&__for_begin, &__for_end) )
      {
        v9 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*(&__for_begin);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        *(_DWORD *)(v2 + 48) = *v9;
        *(std::unordered_map<unsigned int,PhotoPosData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,PhotoPosData>::find(
                                                                                  &this->photo_pos_data_map_,
                                                                                  (const std::unordered_map<unsigned int,PhotoPosData>::key_type *)(v2 + 48));
        val = (unsigned __int64)std::unordered_map<unsigned int,PhotoPosData>::end(&this->photo_pos_data_map_)._M_cur;
        if ( std::__detail::operator==<std::pair<unsigned int const,PhotoPosData>,false>(
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PhotoPosData>,false> *)(v2 + 64),
               (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PhotoPosData>,false> *)&val) )
        {
          common::milog::MiLogStream::create(
            &v17,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/photo_activity.cpp",
            "checkCondIsMeet",
            205);
          v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                  &v17,
                  (const char (*)[30])"[PHOTO] pos_id not invaild : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v17);
          result = 0;
          goto LABEL_22;
        }
        v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false> *const)(v2 + 64));
        p_is_finish = &v11->second.is_finish;
        if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_finish);
        }
        if ( !v11->second.is_finish )
        {
          result = 0;
          goto LABEL_22;
        }
        __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++(&__for_begin);
      }
      result = 1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/player/activity/photo_activity.cpp",
        "checkCondIsMeet",
        196);
      v5 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             &v17,
             (const char (*)[19])"[HACHI]cond_type: ");
      v6 = common::milog::MiLogStream::operator<<<data::NewActivityCondType,(data::NewActivityCondType*)0>(
             v5,
             &cond->type);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v6,
             (const char (*)[21])" param num invalid: ");
      val = std::vector<int>::size(&cond->param);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v17);
      result = 0;
    }
  }
  else
  {
    result = BaseActivity::checkCondIsMeet(this, cond);
  }
LABEL_22:
  if ( v18 == (char *)v2 )
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

// Line 222: range 0000000016C057C2-0000000016C06036
int32_t __cdecl PhotoActivity::execAction(PhotoActivity *const this, const data::NewActivityExec *action_exec)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v7; // rbx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // r15d
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v11; // rdx
  common::milog::MiLogStream *v12; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::pointer v13; // rdx
  bool *p_is_open; // rax
  common::milog::MiLogStream *v15; // rbx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // r15d
  uint32_t *v19; // rdx
  int32_t result; // eax
  std::vector<unsigned int>::iterator __for_begin; // [rsp+28h] [rbp-118h] BYREF
  std::vector<unsigned int>::iterator __for_end; // [rsp+30h] [rbp-110h] BYREF
  std::vector<unsigned int>::iterator __for_end_0; // [rsp+38h] [rbp-108h] BYREF
  std::vector<unsigned int> *__for_range_0; // [rsp+40h] [rbp-100h]
  std::vector<unsigned int> *__for_range; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v26; // [rsp+50h] [rbp-F0h] BYREF
  char v27[208]; // [rsp+70h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 10 pos_id:244 64 8 8 iter:247 96 24 14 pos_id_vec:265";
  *(_QWORD *)(v3 + 16) = PhotoActivity::execAction;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218103808;
  v5[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type == NEW_ACTIVITY_ACTION_CLOSE_PHOTO_POS_ID )
  {
    if ( !std::vector<std::string>::size(&action_exec->param) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/photo_activity.cpp",
        "execAction",
        262);
      v15 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              &v26,
              (const char (*)[19])"action param size ");
      __for_end_0._M_current = (unsigned int *)std::vector<std::string>::size(&action_exec->param);
      v16 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v15,
              (const unsigned __int64 *)&__for_end_0);
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])off_25EFA1C0);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v2 = -1;
      goto LABEL_42;
    }
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
    if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
           &action_exec->param,
           (std::vector<unsigned int> *)(v3 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v26,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/photo_activity.cpp",
        "execAction",
        268);
      v17 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
              &v26,
              (const char (*)[24])"strVecToNumVec falied: ");
      common::milog::MiLogStream::operator<<<std::string>(v17, &action_exec->param);
      common::milog::MiLogStream::~MiLogStream(&v26);
      v2 = -1;
      v18 = 0;
    }
    else
    {
      __for_range_0 = (std::vector<unsigned int> *)(v3 + 96);
      *(std::vector<unsigned int>::iterator *)(v3 + 64) = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96));
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 64),
                &__for_end_0) )
      {
        v19 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        PhotoActivity::unregisterBundleByPos(this, *v19);
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 64));
      }
      BaseActivity::notifyClientData(this, 0);
      v18 = 1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
    if ( !v18 )
      goto LABEL_42;
LABEL_41:
    v2 = 0;
    goto LABEL_42;
  }
  if ( type > NEW_ACTIVITY_ACTION_CLOSE_PHOTO_POS_ID )
  {
LABEL_40:
    v2 = BaseActivity::execAction(this, action_exec);
    goto LABEL_42;
  }
  if ( type == NEW_ACTIVITY_ACTION_CLOSE_PHOTO_CONTENT )
  {
    PhotoActivity::closeContent(this);
    BaseActivity::notifyClientData(this, 0);
    goto LABEL_41;
  }
  if ( type != NEW_ACTIVITY_ACTION_OPEN_PHOTO_POS_ID )
    goto LABEL_40;
  if ( !std::vector<std::string>::size(&action_exec->param) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/photo_activity.cpp",
      "execAction",
      235);
    v7 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(&v26, (const char (*)[19])"action param size ");
    __for_end_0._M_current = (unsigned int *)std::vector<std::string>::size(&action_exec->param);
    v8 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
           v7,
           (const unsigned __int64 *)&__for_end_0);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v8, (const char (*)[12])off_25EFA1C0);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v2 = -1;
    goto LABEL_42;
  }
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 96));
  if ( common::tools::StringUtils::strVecToNumVec<unsigned int>(
         &action_exec->param,
         (std::vector<unsigned int> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/photo_activity.cpp",
      "execAction",
      241);
    v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v26,
           (const char (*)[24])"strVecToNumVec falied: ");
    common::milog::MiLogStream::operator<<<std::string>(v9, &action_exec->param);
    common::milog::MiLogStream::~MiLogStream(&v26);
    v2 = -1;
    v10 = 0;
  }
  else
  {
    __for_range = (std::vector<unsigned int> *)(v3 + 96);
    __for_begin._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    __for_end._M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v3 + 96))._M_current;
    while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(&__for_begin, &__for_end) )
    {
      v11 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*(&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v3 + 48) = *v11;
      *(std::unordered_map<unsigned int,PhotoPosData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,PhotoPosData>::find(
                                                                                &this->photo_pos_data_map_,
                                                                                (const std::unordered_map<unsigned int,PhotoPosData>::key_type *)(v3 + 48));
      __for_end_0._M_current = (unsigned int *)std::unordered_map<unsigned int,PhotoPosData>::end(&this->photo_pos_data_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,PhotoPosData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PhotoPosData>,false> *)(v3 + 64),
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PhotoPosData>,false> *)&__for_end_0) )
      {
        common::milog::MiLogStream::create(
          &v26,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/photo_activity.cpp",
          "execAction",
          250);
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v26,
                (const char (*)[30])"[PHOTO] pos_id not invaild : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v26);
        v2 = -1;
        v10 = 0;
        goto LABEL_26;
      }
      v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false> *const)(v3 + 64));
      p_is_open = &v13->second.is_open;
      if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
        && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(p_is_open);
      }
      v13->second.is_open = 1;
      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++(&__for_begin);
    }
    BaseActivity::notifyClientData(this, 0);
    v10 = 1;
  }
LABEL_26:
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 96));
  if ( v10 )
    goto LABEL_41;
LABEL_42:
  result = v2;
  if ( v27 == (char *)v3 )
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

// Line 286: range 0000000016C06038-0000000016C0637D
int32_t __fastcall PhotoActivity::registerBundleByPos(PhotoActivity *const this, uint32_t pos_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  PlayerGroupLinkComp *GroupLinkComp; // rcx
  PlayerGroupLinkComp *p_activity_id; // rdi
  uint32_t activity_id; // ecx
  const data::ActivityPhotographPosExcelConfig *pos_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 pos_id:285";
  *(_QWORD *)(v2 + 16) = PhotoActivity::registerBundleByPos;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = pos_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  pos_config_ptr = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(
                     &v5->design_config.txt_config_mgr.activity_photograph_config_mgr,
                     *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( pos_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GroupLinkComp = Player::getGroupLinkComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( PlayerGroupLinkComp::isGroupBundleRegistered(GroupLinkComp, pos_config_ptr->group_link_id) )
    {
      result = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      p_activity_id = Player::getGroupLinkComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        p_activity_id = (PlayerGroupLinkComp *)&this->activity_id_;
        __asan_report_load4();
      }
      activity_id = this->activity_id_;
      if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        p_activity_id = (PlayerGroupLinkComp *)&pos_config_ptr->group_link_id;
        __asan_report_load4();
      }
      result = PlayerGroupLinkComp::registerGroupBundle(p_activity_id, pos_config_ptr->group_link_id, activity_id);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/photo_activity.cpp",
      "registerBundleByPos",
      290);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v14,
           (const char (*)[30])"[PHOTO] pos_id not invaild : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = -1;
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
  return result;
};

// Line 303: range 0000000016C0637E-0000000016C0668A
int32_t __fastcall PhotoActivity::unregisterBundleByPos(PhotoActivity *const this, uint32_t pos_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  PlayerGroupLinkComp *GroupLinkComp; // rcx
  PlayerGroupLinkComp *v9; // rcx
  const data::ActivityPhotographPosExcelConfig *pos_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-80h] BYREF
  char v13[96]; // [rsp+50h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 pos_id:302";
  *(_QWORD *)(v2 + 16) = PhotoActivity::unregisterBundleByPos;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = pos_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  pos_config_ptr = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(
                     &v5->design_config.txt_config_mgr.activity_photograph_config_mgr,
                     *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( pos_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    GroupLinkComp = Player::getGroupLinkComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)pos_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3)
                                                                    + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( !PlayerGroupLinkComp::isGroupBundleRegistered(GroupLinkComp, pos_config_ptr->group_link_id) )
    {
      result = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v9 = Player::getGroupLinkComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)pos_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      result = PlayerGroupLinkComp::unregisterGroupBundle(v9, pos_config_ptr->group_link_id, 1);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/photo_activity.cpp",
      "unregisterBundleByPos",
      307);
    v6 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v12,
           (const char (*)[30])"[PHOTO] pos_id not invaild : ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v12);
    result = -1;
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

// Line 320: range 0000000016C0668C-0000000016C07176
__int64 __fastcall PhotoActivity::preCheck(PhotoActivity *const this, uint32_t pos_id, bool is_view)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char v6; // al
  unsigned int v7; // r14d
  PlayerSceneComp *SceneComp; // rax
  char v9; // al
  PlayerSceneComp *v10; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  uint32_t SceneId; // ecx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::pointer v22; // rax
  bool *p_is_open; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-10Ch] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,PhotoPosData>,false> __y; // [rsp+18h] [rbp-108h] BYREF
  const data::ActivityPhotographPosExcelConfig *pos_config_ptr; // [rsp+20h] [rbp-100h]
  PhotoPosData *pos_data; // [rsp+28h] [rbp-F8h]
  common::milog::MiLogStream v32; // [rsp+30h] [rbp-F0h] BYREF
  char v33[208]; // [rsp+50h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 10 pos_id:319 64 8 8 iter:371 96 16 13 scene_ptr:340 128 16 14 avatar_ptr:363";
  *(_QWORD *)(v3 + 16) = PhotoActivity::preCheck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -202178560;
  *(_DWORD *)(v3 + 48) = pos_id;
  if ( !BaseActivity::isOpening(this, 0) || BaseActivity::isSettled(this) )
    goto LABEL_9;
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( this->is_content_closed_ )
LABEL_9:
    v6 = 1;
  else
    v6 = 0;
  if ( v6 )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/photo_activity.cpp",
      "preCheck",
      324);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      &v32,
      (const char (*)[32])"[PHOTO] activity is not opening");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v7 = 860;
    goto LABEL_54;
  }
  if ( is_view )
    goto LABEL_18;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    v9 = 1;
  else
LABEL_18:
    v9 = 0;
  if ( v9 )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/photo_activity.cpp",
      "preCheck",
      330);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      &v32,
      (const char (*)[33])"[PHOTO] player not in self scene");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v7 = 512;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v10 = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInTransfer(v10) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/activity/photo_activity.cpp",
      "preCheck",
      336);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      &v32,
      (const char (*)[28])"[PHOTO] player in transfer.");
    common::milog::MiLogStream::~MiLogStream(&v32);
    v7 = 170;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v3 + 96));
  if ( !std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 96), 0LL) )
  {
    if ( !is_view )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)(v3 + 128));
      v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      pos_config_ptr = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(
                         &v11->design_config.txt_config_mgr.activity_photograph_config_mgr,
                         *(_DWORD *)(v3 + 48));
      std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 128));
      if ( !pos_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/photo_activity.cpp",
          "preCheck",
          352);
        v12 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v32,
                (const char (*)[30])"[PHOTO] pos_id not invaild : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v7 = -1;
        goto LABEL_53;
      }
      v13 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      SceneId = Scene::getSceneId(v13);
      if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&pos_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      if ( SceneId != pos_config_ptr->scene_id )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/photo_activity.cpp",
          "preCheck",
          358);
        v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                &v32,
                (const char (*)[29])"[PHOTO] player not in scene:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &pos_config_ptr->scene_id);
        v17 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v16, (const char (*)[13])", cur scene:");
        v18 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        val = Scene::getSceneId(v18);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" pos_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v7 = 531;
        goto LABEL_53;
      }
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getCurAvatar((const PlayerAvatarComp *const)(v3 + 128));
    if ( std::operator==<Avatar>((const std::shared_ptr<Avatar> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/photo_activity.cpp",
        "preCheck",
        366);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        &v32,
        (const char (*)[33])"[PHOTO] getCurAvatar is nullptr.");
      common::milog::MiLogStream::~MiLogStream(&v32);
      v7 = 103;
    }
    else
    {
      *(std::unordered_map<unsigned int,PhotoPosData>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,PhotoPosData>::find(
                                                                                &this->photo_pos_data_map_,
                                                                                (const std::unordered_map<unsigned int,PhotoPosData>::key_type *)(v3 + 48));
      __y._M_cur = std::unordered_map<unsigned int,PhotoPosData>::end(&this->photo_pos_data_map_)._M_cur;
      if ( std::__detail::operator==<std::pair<unsigned int const,PhotoPosData>,false>(
             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,PhotoPosData>,false> *)(v3 + 64),
             &__y) )
      {
        common::milog::MiLogStream::create(
          &v32,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/photo_activity.cpp",
          "preCheck",
          374);
        v21 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                &v32,
                (const char (*)[30])"[PHOTO] pos_id not invaild : ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v32);
        v7 = -1;
      }
      else
      {
        v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,PhotoPosData>,false,false> *const)(v3 + 64));
        pos_data = &v22->second;
        p_is_open = &v22->second.is_open;
        if ( *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) != 0
          && ((unsigned __int8)p_is_open & 7) >= *(_BYTE *)(((unsigned __int64)p_is_open >> 3) + 0x7FFF8000) )
        {
          __asan_report_load1(p_is_open);
        }
        if ( !pos_data->is_open )
        {
          common::milog::MiLogStream::create(
            &v32,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/player/activity/photo_activity.cpp",
            "preCheck",
            381);
          v24 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  &v32,
                  (const char (*)[27])"[PHOTO] pos_id not open : ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream(&v32);
          v7 = -1;
        }
        else
        {
          if ( !is_view )
            goto LABEL_51;
          if ( *(_BYTE *)(((unsigned __int64)&pos_data->is_view >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)pos_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&pos_data->is_view >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_load1(&pos_data->is_view);
          }
          if ( pos_data->is_view )
          {
            common::milog::MiLogStream::create(
              &v32,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/player/activity/photo_activity.cpp",
              "preCheck",
              386);
            v25 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    &v32,
                    (const char (*)[31])"[PHOTO] pos_id already view : ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v32);
            v7 = -1;
          }
          else
          {
LABEL_51:
            v7 = 0;
          }
        }
      }
    }
    std::shared_ptr<Avatar>::~shared_ptr((std::shared_ptr<Avatar> *const)(v3 + 128));
    goto LABEL_53;
  }
  common::milog::MiLogStream::create(
    &v32,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/activity/photo_activity.cpp",
    "preCheck",
    343);
  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
    &v32,
    (const char (*)[29])"[PHOTO] player not on scene.");
  common::milog::MiLogStream::~MiLogStream(&v32);
  v7 = 103;
LABEL_53:
  std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 96));
LABEL_54:
  result = v7;
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

// Line 393: range 0000000016C07178-0000000016C072E7
__int64 __fastcall PhotoActivity::viewPhotoByPosId(PhotoActivity *const this, uint32_t pos_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __int64 result; // rax
  std::unordered_map<unsigned int,PhotoPosData>::mapped_type *v6; // rdx
  bool *p_is_view; // rax
  unsigned int ret; // [rsp+1Ch] [rbp-64h]
  char v9[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 10 pos_id:392";
  *(_QWORD *)(v2 + 16) = PhotoActivity::viewPhotoByPosId;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = pos_id;
  ret = PhotoActivity::preCheck(this, *(_DWORD *)(v2 + 32), 1);
  if ( ret )
  {
    result = ret;
  }
  else
  {
    v6 = std::unordered_map<unsigned int,PhotoPosData>::operator[](
           &this->photo_pos_data_map_,
           (const std::unordered_map<unsigned int,PhotoPosData>::key_type *)(v2 + 32));
    p_is_view = &v6->is_view;
    if ( *(_BYTE *)(((unsigned __int64)p_is_view >> 3) + 0x7FFF8000) != 0
      && ((unsigned __int8)p_is_view & 7) >= *(_BYTE *)(((unsigned __int64)p_is_view >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(p_is_view);
    }
    v6->is_view = 1;
    PhotoActivity::registerBundleByPos(this, *(_DWORD *)(v2 + 32));
    BaseActivity::updateAllConds(this);
    BaseActivity::notifyClientData(this, 0);
    result = 0LL;
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
  return result;
};

// Line 409: range 0000000016C072E8-0000000016C07D85
__int64 __fastcall PhotoActivity::finishPhotoByPosId(
        PhotoActivity *const this,
        uint32_t pos_id,
        bool is_succ,
        int32_t check_root_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  unsigned int v7; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // rax
  Scene *v10; // rax
  uint32_t GalleryComp; // ecx
  BaseGallery *v12; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  std::__shared_ptr_access<PhotoGallery,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  bool *p_is_finish; // rax
  PlayerEventComp *EventComp; // r14
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  int32_t gallery_id; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rdx
  int32_t *p_param1; // rax
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  uint32_t Uid; // r14d
  std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v29; // rdx
  uint32_t *p_uid; // rax
  __int64 result; // rax
  bool is_first_finish; // [rsp+23h] [rbp-11Dh]
  int32_t ret; // [rsp+24h] [rbp-11Ch]
  const data::ActivityPhotographPosExcelConfig *pos_config_ptr; // [rsp+28h] [rbp-118h]
  PhotoPosData *pos_data; // [rsp+30h] [rbp-110h]
  PlayerGroupLinkComp *group_link_comp; // [rsp+38h] [rbp-108h]
  std::shared_ptr<Config> v39; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v40; // [rsp+50h] [rbp-F0h] BYREF
  char v41[208]; // [rsp+70h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v41;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 4 10 pos_id:408 64 16 13 scene_ptr:422 96 16 15 gallery_ptr:428 128 16 13 event_ptr:459";
  *(_QWORD *)(v4 + 16) = PhotoActivity::finishPhotoByPosId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -219021312;
  v6[536862723] = -219021312;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 48) = pos_id;
  ret = PhotoActivity::preCheck(this, *(_DWORD *)(v4 + 48), 0);
  if ( ret )
  {
    v7 = ret;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v39);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v39);
    pos_config_ptr = data::ActivityPhotographExcelConfigMgrBase::findActivityPhotographPosExcelConfig(
                       &v8->design_config.txt_config_mgr.activity_photograph_config_mgr,
                       *(_DWORD *)(v4 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v39);
    if ( pos_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Player::getSceneComp(this->player_);
      PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v4 + 64));
      if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v4 + 64), 0LL) )
      {
        v7 = 103;
      }
      else
      {
        v10 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
        GalleryComp = (unsigned int)Scene::getGalleryComp(v10);
        if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&pos_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        SceneGalleryComp::findGallery<PhotoGallery>((SceneGalleryComp *const)(v4 + 96), GalleryComp);
        if ( std::operator==<PhotoGallery>(0LL, (const std::shared_ptr<PhotoGallery> *)(v4 + 96))
          || (v12 = (BaseGallery *)std::__shared_ptr_access<PhotoGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PhotoGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96)),
              !BaseGallery::isStart(v12)) )
        {
          common::milog::MiLogStream::create(
            &v40,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/player/activity/photo_activity.cpp",
            "finishPhotoByPosId",
            432);
          v14 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  &v40,
                  (const char (*)[38])"[PHOTO] findGallery fail, gallery_id:");
          v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &pos_config_ptr->gallery_id);
          v16 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" activity:");
          common::milog::MiLogStream::operator<<<PhotoActivity,(PhotoActivity*)0>(v16, this);
          common::milog::MiLogStream::~MiLogStream(&v40);
          v7 = -1;
        }
        else
        {
          v17 = std::__shared_ptr_access<PhotoGallery,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PhotoGallery,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 96));
          PhotoGallery::addPhotoTime(v17, is_succ);
          if ( !is_succ )
          {
            v7 = 0;
          }
          else
          {
            is_first_finish = 0;
            pos_data = std::unordered_map<unsigned int,PhotoPosData>::operator[](
                         &this->photo_pos_data_map_,
                         (const std::unordered_map<unsigned int,PhotoPosData>::key_type *)(v4 + 48));
            p_is_finish = &pos_data->is_finish;
            if ( *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) != 0
              && ((unsigned __int8)p_is_finish & 7) >= *(_BYTE *)(((unsigned __int64)p_is_finish >> 3) + 0x7FFF8000) )
            {
              __asan_report_load1(p_is_finish);
            }
            if ( !pos_data->is_finish )
            {
              is_first_finish = 1;
              if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                __asan_report_load8();
              EventComp = Player::getEventComp(this->player_);
              common::tools::perf::make_shared<PhotoFinishPosEvent,unsigned int &>(
                (unsigned int *)(v4 + 128),
                (unsigned int *)(v4 + 48));
              std::shared_ptr<BaseEvent>::shared_ptr<PhotoFinishPosEvent,void>(
                (std::shared_ptr<BaseEvent> *const)&v39,
                (std::shared_ptr<PhotoFinishPosEvent> *)(v4 + 128));
              PlayerEventComp::notifyEvent(EventComp, (BaseEventPtr *)&v39);
              std::shared_ptr<BaseEvent>::~shared_ptr((std::shared_ptr<BaseEvent> *const)&v39);
              std::shared_ptr<PhotoFinishPosEvent>::~shared_ptr((std::shared_ptr<PhotoFinishPosEvent> *const)(v4 + 128));
            }
            if ( *(_BYTE *)(((unsigned __int64)&pos_data->is_finish >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)pos_data + 6) & 7) >= *(_BYTE *)(((unsigned __int64)&pos_data->is_finish >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store1(&pos_data->is_finish);
            }
            pos_data->is_finish = 1;
            if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
              __asan_report_load8();
            group_link_comp = Player::getGroupLinkComp(this->player_);
            if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)pos_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3)
                                                                            + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( !PlayerGroupLinkComp::isGroupBundleRegistered(group_link_comp, pos_config_ptr->group_link_id) )
            {
              common::milog::MiLogStream::create(
                &v40,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/player/activity/photo_activity.cpp",
                "finishPhotoByPosId",
                455);
              v20 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                      &v40,
                      (const char (*)[28])"[PHOTO] unregister pos_id: ");
              v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v20,
                      (const unsigned int *)(v4 + 48));
              v22 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                      v21,
                      (const char (*)[18])", group_link_id: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                &pos_config_ptr->group_link_id);
              common::milog::MiLogStream::~MiLogStream(&v40);
              v7 = -1;
            }
            else
            {
              EventUtil::createEvent((std::shared_ptr<Event> *)(v4 + 128), 107);
              if ( std::operator==<Event>(0LL, (const std::shared_ptr<Event> *)(v4 + 128)) )
              {
                common::milog::MiLogStream::create(
                  &v40,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/player/activity/photo_activity.cpp",
                  "finishPhotoByPosId",
                  462);
                v23 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        &v40,
                        (const char (*)[28])"[PHOTO] event_ptr nullptr, ");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v23,
                  (const unsigned int *)(v4 + 48));
                common::milog::MiLogStream::~MiLogStream(&v40);
                v7 = -1;
              }
              else
              {
                if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->gallery_id >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&pos_config_ptr->gallery_id >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4();
                }
                gallery_id = pos_config_ptr->gallery_id;
                v25 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                p_param1 = &v25->param1;
                if ( *(_BYTE *)(((unsigned __int64)p_param1 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_param1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_param1 >> 3)
                                                                             + 0x7FFF8000) )
                {
                  __asan_report_store4(p_param1);
                }
                v25->param1 = gallery_id;
                v27 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&v27->param2 >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&v27->param2 >> 3) + 0x7FFF8000) <= 3 )
                {
                  v27 = (std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_store4(&v27->param2);
                }
                v27->param2 = check_root_id;
                if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                Uid = Player::getUid(this->player_);
                v29 = std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Event,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128));
                p_uid = &v29->uid;
                if ( *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)p_uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_uid >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store4(p_uid);
                }
                v29->uid = Uid;
                std::shared_ptr<Event>::shared_ptr(
                  (std::shared_ptr<Event> *const)&v39,
                  (const std::shared_ptr<Event> *)(v4 + 128));
                if ( *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)pos_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&pos_config_ptr->group_link_id >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                PlayerGroupLinkComp::broadcastActiveGroupLuaEvent(
                  group_link_comp,
                  pos_config_ptr->group_link_id,
                  (EventPtr *)&v39);
                std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)&v39);
                if ( is_first_finish )
                {
                  BaseActivity::updateAllConds(this);
                  BaseActivity::notifyClientData(this, 0);
                }
                v7 = 0;
              }
              std::shared_ptr<Event>::~shared_ptr((std::shared_ptr<Event> *const)(v4 + 128));
            }
          }
        }
        std::shared_ptr<PhotoGallery>::~shared_ptr((std::shared_ptr<PhotoGallery> *const)(v4 + 96));
      }
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v4 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v40,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/photo_activity.cpp",
        "finishPhotoByPosId",
        418);
      v9 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v40,
             (const char (*)[30])"[PHOTO] pos_id not invaild : ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream(&v40);
      v7 = -1;
    }
  }
  result = v7;
  if ( v41 == (char *)v4 )
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
