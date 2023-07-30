// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/activity/bounce_conjuring_activity.cpp

// Line 25: range 0000000017947A0C-0000000017947ABF
int32_t __cdecl BounceConjuringChapterData::fromBin(
        BounceConjuringChapterData *const this,
        const proto::BounceConjuringChapterBin *proto)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx

  v2 = proto::BounceConjuringChapterBin::chapter_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->chapter_id = v2;
  v3 = proto::BounceConjuringChapterBin::best_score(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->best_score);
  }
  this->best_score = v3;
  return 0;
};

// Line 32: range 0000000017947AC0-0000000017947B71
int32_t __cdecl BounceConjuringChapterData::toBin(
        const BounceConjuringChapterData *const this,
        proto::BounceConjuringChapterBin *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringChapterBin::set_chapter_id(proto, this->chapter_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringChapterBin::set_best_score(proto, this->best_score);
  return 0;
};

// Line 39: range 0000000017947B72-0000000017947C7E
void __cdecl BounceConjuringChapterData::toClient(
        const BounceConjuringChapterData *const this,
        const BounceConjuringActivity *bounce_conjuring_activity,
        proto::BounceConjuringChapterInfo *proto)
{
  google::protobuf::uint32 ChapterOpenTime; // edx

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringChapterInfo::set_chapter_id(proto, this->chapter_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->best_score >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringChapterInfo::set_best_score(proto, this->best_score);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  ChapterOpenTime = BounceConjuringActivity::getChapterOpenTime(bounce_conjuring_activity, this->chapter_id);
  proto::BounceConjuringChapterInfo::set_open_time(proto, ChapterOpenTime);
};

// Line 46: range 0000000017947C80-0000000017947D3B
int32_t __cdecl BounceConjuringActivity::init(BounceConjuringActivity *const this)
{
  unsigned __int64 v1; // rax
  char v2; // al

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(BounceConjuringActivity *const))v1)(this) || BaseActivity::isSettled(this) )
LABEL_8:
    v2 = 1;
  else
    v2 = 0;
  if ( !v2 )
    BounceConjuringActivity::registerObserver(this);
  return 0;
};

// Line 57: range 0000000017947D3C-0000000017947EB1
int32_t __cdecl BounceConjuringActivity::fromScheduleBin(
        BounceConjuringActivity *const this,
        const proto::ActivityScheduleBin *bin)
{
  bool is_content_closed; // dl
  uint32_t v3; // ecx
  std::map<unsigned int,BounceConjuringChapterData>::key_type __k; // [rsp+1Ch] [rbp-44h] BYREF
  google::protobuf::RepeatedPtrField<proto::BounceConjuringChapterBin>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  google::protobuf::RepeatedPtrField<proto::BounceConjuringChapterBin>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const proto::BounceConjuringScheduleBin *proto_bounce_conjuring_bin; // [rsp+30h] [rbp-30h]
  const google::protobuf::RepeatedPtrField<proto::BounceConjuringChapterBin> *__for_range; // [rsp+38h] [rbp-28h]
  const proto::BounceConjuringChapterBin *proto_chapter_bin; // [rsp+40h] [rbp-20h]
  BounceConjuringChapterData *chapter_data; // [rsp+48h] [rbp-18h]

  proto_bounce_conjuring_bin = proto::ActivityScheduleBin::bounce_conjuring_bin(bin);
  __for_range = proto::BounceConjuringScheduleBin::chapter_list(proto_bounce_conjuring_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::BounceConjuringChapterBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::BounceConjuringChapterBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::BounceConjuringChapterBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    proto_chapter_bin = google::protobuf::internal::RepeatedPtrIterator<proto::BounceConjuringChapterBin const>::operator*(&__for_begin);
    __k = proto::BounceConjuringChapterBin::chapter_id(proto_chapter_bin);
    chapter_data = std::map<unsigned int,BounceConjuringChapterData>::operator[](&this->chapter_map_, &__k);
    BounceConjuringChapterData::fromBin(chapter_data, proto_chapter_bin);
    google::protobuf::internal::RepeatedPtrIterator<proto::BounceConjuringChapterBin const>::operator++(&__for_begin);
  }
  is_content_closed = proto::BounceConjuringScheduleBin::is_content_closed(proto_bounce_conjuring_bin);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = is_content_closed;
  v3 = proto::BounceConjuringScheduleBin::coin(proto_bounce_conjuring_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->coin_);
  }
  this->coin_ = v3;
  return 0;
};

// Line 71: range 0000000017947EB2-0000000017948024
int32_t __cdecl BounceConjuringActivity::toScheduleBin(
        const BounceConjuringActivity *const this,
        proto::ActivityScheduleBin *bin)
{
  std::map<unsigned int,BounceConjuringChapterData>::const_iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,BounceConjuringChapterData>::const_iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  proto::BounceConjuringScheduleBin *proto_bounce_conjuring_bin; // [rsp+20h] [rbp-30h]
  const std::map<unsigned int,BounceConjuringChapterData> *__for_range; // [rsp+28h] [rbp-28h]
  const std::pair<unsigned int const,BounceConjuringChapterData> *v7; // [rsp+30h] [rbp-20h]
  std::tuple_element<0,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *_; // [rsp+38h] [rbp-18h]
  std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *chapter_data; // [rsp+40h] [rbp-10h]
  proto::BounceConjuringChapterBin *proto_chapter_bin; // [rsp+48h] [rbp-8h]

  proto_bounce_conjuring_bin = proto::ActivityScheduleBin::mutable_bounce_conjuring_bin(bin);
  __for_range = &this->chapter_map_;
  __for_begin._M_node = std::map<unsigned int,BounceConjuringChapterData>::begin(&this->chapter_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BounceConjuringChapterData>::end(&this->chapter_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BounceConjuringChapterData>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,BounceConjuringChapterData>(v7);
    chapter_data = (std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *)std::get<1ul,unsigned int const,BounceConjuringChapterData>(v7);
    proto_chapter_bin = proto::BounceConjuringScheduleBin::add_chapter_list(proto_bounce_conjuring_bin);
    BounceConjuringChapterData::toBin(chapter_data, proto_chapter_bin);
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,BounceConjuringChapterData>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  proto::BounceConjuringScheduleBin::set_is_content_closed(proto_bounce_conjuring_bin, this->is_content_closed_);
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::BounceConjuringScheduleBin::set_coin(proto_bounce_conjuring_bin, this->coin_);
  return 0;
};

// Line 85: range 0000000017948026-0000000017948270
int32_t __cdecl BounceConjuringActivity::toClient(
        BounceConjuringActivity *const this,
        proto::ActivityInfo *activity_info)
{
  common::milog::MiLogStream *v2; // rbx
  uint32_t ContentCloseTime; // eax
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::map<unsigned int,BounceConjuringChapterData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::map<unsigned int,BounceConjuringChapterData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::BounceConjuringActivityDetailInfo *bounce_conjuring_info; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,BounceConjuringChapterData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,BounceConjuringChapterData> *v10; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *_; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *chapter_data; // [rsp+50h] [rbp-40h]
  proto::BounceConjuringChapterInfo *chapter_info; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v14; // [rsp+60h] [rbp-30h] BYREF

  if ( BaseActivity::toClient(this, activity_info) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "toClient",
      88);
    v2 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v14,
           (const char (*)[56])"[BOUNCE_CONJURING] BaseActivity::toClient failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    return -1;
  }
  else
  {
    bounce_conjuring_info = proto::ActivityInfo::mutable_bounce_conjuring_info(activity_info);
    __for_range = &this->chapter_map_;
    __for_begin._M_node = std::map<unsigned int,BounceConjuringChapterData>::begin(&this->chapter_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,BounceConjuringChapterData>::end(&this->chapter_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData>>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,BounceConjuringChapterData>(v10);
      chapter_data = (std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *)std::get<1ul,unsigned int const,BounceConjuringChapterData>(v10);
      chapter_info = proto::BounceConjuringActivityDetailInfo::add_chapter_info_list(bounce_conjuring_info);
      BounceConjuringChapterData::toClient(chapter_data, this, chapter_info);
      std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData>>::operator++(&__for_begin);
    }
    ContentCloseTime = BounceConjuringActivity::getContentCloseTime(this);
    proto::BounceConjuringActivityDetailInfo::set_content_close_time(bounce_conjuring_info, ContentCloseTime);
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_content_closed_);
    proto::BounceConjuringActivityDetailInfo::set_is_content_closed(bounce_conjuring_info, this->is_content_closed_);
    return 0;
  }
};

// Line 105: range 0000000017948272-0000000017948324
void __cdecl BounceConjuringActivity::onLogin(BounceConjuringActivity *const this)
{
  unsigned __int64 v1; // rax
  char v2; // al

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(BounceConjuringActivity *const))v1)(this) || BaseActivity::isSettled(this) )
LABEL_8:
    v2 = 1;
  else
    v2 = 0;
  if ( !v2 )
    BaseActivity::onLogin(this);
};

// Line 115: range 0000000017948326-00000000179484D6
void __cdecl BounceConjuringActivity::onPreStart(BounceConjuringActivity *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t v2; // ecx
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  const std::map<unsigned int,data::BounceConjuringChapterExcelConfig> *__for_range; // [rsp+28h] [rbp-38h]
  const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> *v6; // [rsp+30h] [rbp-30h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *chapter_id; // [rsp+38h] [rbp-28h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *_; // [rsp+40h] [rbp-20h]
  BounceConjuringChapterData *chapter_data; // [rsp+48h] [rbp-18h]
  std::shared_ptr<Config> v10; // [rsp+50h] [rbp-10h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  __for_range = ActivityBounceConjuringExcelConfigMgr::getChapterConfigMap(&v1->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v10);
  __for_begin._M_node = std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>>::operator*(&__for_begin);
    chapter_id = std::get<0ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v6);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v6);
    chapter_data = std::map<unsigned int,BounceConjuringChapterData>::operator[](&this->chapter_map_, chapter_id);
    if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v2 = *chapter_id;
    if ( *(_BYTE *)(((unsigned __int64)chapter_data >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_data >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(chapter_data);
    }
    chapter_data->chapter_id = v2;
    if ( *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chapter_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_store4(&chapter_data->best_score);
    }
    chapter_data->best_score = 0;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>>::operator++(&__for_begin);
  }
};

// Line 125: range 00000000179484D8-00000000179484F2
void __cdecl BounceConjuringActivity::onStart(BounceConjuringActivity *const this)
{
  BounceConjuringActivity::registerObserver(this);
};

// Line 130: range 00000000179484F4-0000000017948532
void __cdecl BounceConjuringActivity::onSettle(BounceConjuringActivity *const this)
{
  BounceConjuringActivity::closeContent(this);
  BounceConjuringActivity::unregisterObserver(this);
  BaseActivity::delWatchers(this);
  BounceConjuringActivity::delAllChapterWatcher(this);
};

// Line 138: range 0000000017948534-000000001794870A
void __cdecl BounceConjuringActivity::onClear(BounceConjuringActivity *const this)
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
  *(_QWORD *)(v1 + 8) = "1 32 8 14 sub_reason:145";
  *(_QWORD *)(v1 + 16) = BounceConjuringActivity::onClear;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116352;
  BaseActivity::delWatchers(this);
  BounceConjuringActivity::delAllChapterWatcher(this);
  std::map<unsigned int,BounceConjuringChapterData>::clear(&this->chapter_map_);
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_content_closed_);
  this->is_content_closed_ = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  if ( this->coin_ )
  {
    SubItemReason::SubItemReason((SubItemReason *const)(v1 + 32), ACTION_REASON_ACTIVITY_EXPIRE_ITEM);
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    BounceConjuringActivity::subCoin(this, this->coin_, (const SubItemReason *)(v1 + 32), 0);
  }
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

// Line 151: range 000000001794870C-0000000017948B54
int32_t __cdecl BounceConjuringActivity::execAction(
        BounceConjuringActivity *const this,
        const data::NewActivityExec *action_exec)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  data::NewActivityActionType type; // eax
  common::milog::MiLogStream *v6; // r13
  common::milog::MiLogStream *v7; // rax
  const std::string *v8; // rax
  common::milog::MiLogStream *v9; // r13
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  unsigned int Uid; // [rsp+14h] [rbp-9Ch] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-98h] BYREF
  common::milog::MiLogStream v18; // [rsp+20h] [rbp-90h] BYREF
  char v19[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 chapter_id:161";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::execAction;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&action_exec->type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  type = action_exec->type;
  if ( type != NEW_ACTIVITY_ACTION_OPEN_BOUNCE_CONJURING_STAGE )
  {
    if ( type != NEW_ACTIVITY_ACTION_CLOSE_BOUNCE_CONJURING_CONTENT )
    {
      result = BaseActivity::execAction(this, action_exec);
      goto LABEL_20;
    }
    BounceConjuringActivity::closeContent(this);
    goto LABEL_19;
  }
  if ( !std::vector<std::string>::size(&action_exec->param) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "execAction",
      158);
    v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
           &v18,
           (const char (*)[38])"[BOUNCE_CONJURING] action param size ");
    val = std::vector<std::string>::size(&action_exec->param);
    v7 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])off_262413A0);
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
    goto LABEL_20;
  }
  *(_DWORD *)(v2 + 32) = 0;
  v8 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
  if ( common::tools::StringUtils::strToNum<unsigned int>(v8, (unsigned int *)(v2 + 32), 1) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "execAction",
      164);
    v9 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v18,
           (const char (*)[29])"[BOUNCE_CONJURING] strToNum ");
    v10 = std::vector<std::string>::operator[](&action_exec->param, 0LL);
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v11, (const char (*)[8])" failed");
    common::milog::MiLogStream::~MiLogStream(&v18);
    result = -1;
    goto LABEL_20;
  }
  if ( !BounceConjuringActivity::addChapterWatcher(this, *(_DWORD *)(v2 + 32)) )
  {
    BaseActivity::notifyClientData(this, 0);
LABEL_19:
    result = 0;
    goto LABEL_20;
  }
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/activity/bounce_conjuring_activity.cpp",
    "execAction",
    169);
  v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
          &v18,
          (const char (*)[51])"[BOUNCE_CONJURING] addChapterWatcher failed, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Uid = Player::getUid(this->player_);
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &Uid);
  v14 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v13, (const char (*)[15])" ,chapter_id: ");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
  common::milog::MiLogStream::~MiLogStream(&v18);
  result = -1;
LABEL_20:
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

// Line 187: range 0000000017948B56-0000000017948C0B
void __cdecl BounceConjuringActivity::fillActivityCoinInfo(
        BounceConjuringActivity *const this,
        google::protobuf::Map<unsigned int,unsigned int> *activity_coin_map)
{
  uint32_t coin; // ebx
  unsigned int *v3; // rax
  uint32_t *v4; // rdx
  google::protobuf::Map<unsigned int,unsigned int>::key_type key[5]; // [rsp+1Ch] [rbp-14h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  coin = this->coin_;
  key[0] = 126;
  v3 = google::protobuf::Map<unsigned int,unsigned int>::operator[](activity_coin_map, key);
  v4 = v3;
  if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(v3);
  }
  *v4 = coin;
};

// Line 192: range 0000000017948C0C-0000000017948CA7
bool __cdecl BounceConjuringActivity::isContainsWatcher(BounceConjuringActivity *const this, uint32_t watcher_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  bool isContainsWatcher; // bl
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  isContainsWatcher = ActivityBounceConjuringExcelConfigMgr::isContainsWatcher(
                        &v2->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr,
                        watcher_id);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return isContainsWatcher || BaseActivity::isContainsWatcher(this, watcher_id);
};

// Line 201: range 0000000017948CA8-000000001794905E
int32_t __cdecl BounceConjuringActivity::fillWatcherProtoList(
        BounceConjuringActivity *const this,
        google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo> *proto_info_list)
{
  ActivityBounceConjuringExcelConfigMgr *p_activity_bounce_conjuring_config_mgr; // rcx
  common::milog::MiLogStream *v3; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  proto::ActivityWatcherInfo *v7; // rax
  unsigned int watcher_id; // [rsp+14h] [rbp-9Ch]
  std::map<unsigned int,BounceConjuringChapterData>::iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  std::map<unsigned int,BounceConjuringChapterData>::iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+28h] [rbp-88h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+30h] [rbp-80h] BYREF
  std::map<unsigned int,BounceConjuringChapterData> *__for_range; // [rsp+38h] [rbp-78h]
  const std::pair<unsigned int const,BounceConjuringChapterData> *v14; // [rsp+40h] [rbp-70h]
  std::tuple_element<0,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *chapter_id; // [rsp+48h] [rbp-68h]
  std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *chapter_data; // [rsp+50h] [rbp-60h]
  const data::BounceConjuringChapterExcelConfig *chapter_config_ptr; // [rsp+58h] [rbp-58h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-50h]
  const data::NewActivityWatcherConfig *watcher_config_ptr; // [rsp+68h] [rbp-48h]
  std::shared_ptr<Config> v20; // [rsp+70h] [rbp-40h] BYREF
  common::milog::MiLogStream v21; // [rsp+80h] [rbp-30h] BYREF

  __for_range = &this->chapter_map_;
  __for_begin._M_node = std::map<unsigned int,BounceConjuringChapterData>::begin(&this->chapter_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,BounceConjuringChapterData>::end(&this->chapter_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData>>::operator*(&__for_begin);
    chapter_id = std::get<0ul,unsigned int const,BounceConjuringChapterData>(v14);
    chapter_data = (std::tuple_element<1,const std::pair<unsigned int const,BounceConjuringChapterData> >::type *)std::get<1ul,unsigned int const,BounceConjuringChapterData>(v14);
    if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( BounceConjuringActivity::isChapterOpen(this, *chapter_id) )
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v20);
      p_activity_bounce_conjuring_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20)->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)chapter_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)chapter_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      chapter_config_ptr = ActivityBounceConjuringExcelConfigMgr::findChapterConfigByChapterId(
                             p_activity_bounce_conjuring_config_mgr,
                             *chapter_id);
      std::shared_ptr<Config>::~shared_ptr(&v20);
      if ( !chapter_config_ptr )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bounce_conjuring_activity.cpp",
          "fillWatcherProtoList",
          209);
        v3 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
               &v21,
               (const char (*)[69])"[BOUNCE_CONJURING] findChapterConfigByChapterId failed, chapter_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, chapter_id);
        common::milog::MiLogStream::~MiLogStream(&v21);
        return -1;
      }
      __for_range_0 = &chapter_config_ptr->watcher_id_list;
      __for_begin_0._M_current = std::vector<unsigned int>::begin(&chapter_config_ptr->watcher_id_list)._M_current;
      __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
      {
        v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
        if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        watcher_id = *v5;
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v20);
        v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v20);
        watcher_config_ptr = data::NewActivityExcelConfigMgrBase::findNewActivityWatcherConfig(
                               &v6->design_config.txt_config_mgr.new_activity_config_mgr,
                               watcher_id);
        std::shared_ptr<Config>::~shared_ptr(&v20);
        if ( watcher_config_ptr )
        {
          v7 = google::protobuf::RepeatedPtrField<proto::ActivityWatcherInfo>::Add(proto_info_list);
          BaseActivity::fillWatcherProto(this, v7, watcher_config_ptr);
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData>>::operator++(&__for_begin);
  }
  BaseActivity::fillWatcherProtoList(this, proto_info_list);
  return 0;
};

// Line 229: range 0000000017949060-000000001794940C
void __cdecl BounceConjuringActivity::registerObserver(BounceConjuringActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<BounceConjuringActivity> *EventComp; // [rsp+10h] [rbp-D0h]
  std::weak_ptr<BounceConjuringActivity> *p_this_wtr; // [rsp+20h] [rbp-C0h]
  std::weak_ptr<Observer> __r; // [rsp+30h] [rbp-B0h] BYREF
  std::enable_shared_from_this<BaseActivity> v7; // [rsp+40h] [rbp-A0h] BYREF
  char v8[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 12 this_ptr:230 64 16 12 this_wtr:231";
  *(_QWORD *)(v1 + 16) = BounceConjuringActivity::registerObserver;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  std::enable_shared_from_this<BaseActivity>::shared_from_this(&v7);
  std::dynamic_pointer_cast<BounceConjuringActivity,BaseActivity>((const std::shared_ptr<BaseActivity> *)(v1 + 32));
  std::shared_ptr<BaseActivity>::~shared_ptr((std::shared_ptr<BaseActivity> *const)&v7);
  std::weak_ptr<BounceConjuringActivity>::weak_ptr<BounceConjuringActivity,void>(
    (std::weak_ptr<BounceConjuringActivity> *const)(v1 + 64),
    (const std::shared_ptr<BounceConjuringActivity> *)(v1 + 32));
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_start_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    p_this_wtr = (std::weak_ptr<BounceConjuringActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<BounceConjuringActivity>::weak_ptr(
      (std::weak_ptr<BounceConjuringActivity> *const)&v7,
      (const std::weak_ptr<BounceConjuringActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<BounceConjuringActivity,GalleryBounceConjuringStartEvent>(
      (PlayerEventComp *const)&__r,
      p_this_wtr,
      (void (*)(BounceConjuringActivity *, const GalleryBounceConjuringStartEvent *))&v7);
    std::weak_ptr<Observer>::operator=(&this->gallery_start_obs_wtr_, &__r);
    std::weak_ptr<Observer>::~weak_ptr(&__r);
    std::weak_ptr<BounceConjuringActivity>::~weak_ptr((std::weak_ptr<BounceConjuringActivity> *const)&v7);
  }
  if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_settle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = (std::weak_ptr<BounceConjuringActivity> *)Player::getEventComp(this->player_);
    std::weak_ptr<BounceConjuringActivity>::weak_ptr(
      (std::weak_ptr<BounceConjuringActivity> *const)&__r,
      (const std::weak_ptr<BounceConjuringActivity> *)(v1 + 64));
    PlayerEventComp::registerObserver<BounceConjuringActivity,GalleryBounceConjuringSettleEvent>(
      (PlayerEventComp *const)&v7,
      EventComp,
      (void (*)(BounceConjuringActivity *, const GalleryBounceConjuringSettleEvent *))&__r);
    std::weak_ptr<Observer>::operator=(&this->gallery_settle_obs_wtr_, (std::weak_ptr<Observer> *)&v7);
    std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v7);
    std::weak_ptr<BounceConjuringActivity>::~weak_ptr((std::weak_ptr<BounceConjuringActivity> *const)&__r);
  }
  std::weak_ptr<BounceConjuringActivity>::~weak_ptr((std::weak_ptr<BounceConjuringActivity> *const)(v1 + 64));
  std::shared_ptr<BounceConjuringActivity>::~shared_ptr((std::shared_ptr<BounceConjuringActivity> *const)(v1 + 32));
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
};

// Line 243: range 000000001794940E-000000001794950C
void __cdecl BounceConjuringActivity::unregisterObserver(BounceConjuringActivity *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_start_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->gallery_start_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->gallery_start_obs_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->gallery_settle_obs_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->gallery_settle_obs_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->gallery_settle_obs_wtr_);
  }
};

// Line 258: range 000000001794950E-0000000017949A96
// local variable allocation has failed, the output may be wrong!
void __cdecl BounceConjuringActivity::onGalleryStartEvent(
        BounceConjuringActivity *const this,
        const GalleryBounceConjuringStartEvent *event)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  ActivityBounceConjuringExcelConfigMgr *p_activity_bounce_conjuring_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  PlayerExhibitionComp *v10; // rax
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringStart,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  Player *v14; // r14
  std::string eventa; // [rsp+0h] [rbp-110h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+20h] [rbp-F0h] BYREF
  std::shared_ptr<google::protobuf::Message> v17; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+60h] [rbp-B0h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 1 10 holder:271 48 4 14 chapter_id:259 64 8 8 iter:260 96 16 11 log_ptr:272";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::onGalleryStartEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v17);
  p_activity_bounce_conjuring_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v17)->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)(eventa._M_dataplus._M_p + 24) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = ActivityBounceConjuringExcelConfigMgr::findChapterIdByGalleryId(
                           p_activity_bounce_conjuring_config_mgr,
                           *((_DWORD *)eventa._M_dataplus._M_p + 6));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&v17);
  *(std::map<unsigned int,BounceConjuringChapterData>::iterator *)(v2 + 64) = std::map<unsigned int,BounceConjuringChapterData>::find(
                                                                                (std::map<unsigned int,BounceConjuringChapterData> *const)(eventa._M_string_length + 936),
                                                                                (const std::map<unsigned int,BounceConjuringChapterData>::key_type *)(v2 + 48));
  *((std::map<unsigned int,BounceConjuringChapterData>::iterator *)&eventa._anon_0._M_allocated_capacity + 1) = std::map<unsigned int,BounceConjuringChapterData>::end((std::map<unsigned int,BounceConjuringChapterData> *const)(eventa._M_string_length + 936));
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData> >::_Self *)&eventa._anon_0._M_allocated_capacity
       + 1) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "onGalleryStartEvent",
      263);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v18,
           (const char (*)[52])"[BOUNCE_CONJURING] chapter_id invalid, chapter_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" ,gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v8,
      (const unsigned int *)eventa._M_dataplus._M_p + 6);
    common::milog::MiLogStream::~MiLogStream(&v18);
  }
  else
  {
    if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ExhibitionComp = Player::getExhibitionComp(*(Player *const *)(eventa._M_string_length + 24));
    if ( *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((eventa._M_string_length + 32) >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HIDWORD(eventa._anon_0._M_allocated_capacity) = PlayerExhibitionComp::getSeriesIdByActivityId(
                                                      ExhibitionComp,
                                                      *(_DWORD *)(eventa._M_string_length + 32));
    if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v10 = Player::getExhibitionComp(*(Player *const *)(eventa._M_string_length + 24));
    PlayerExhibitionComp::clearSeriesExhibitionReplaceableData(v10, HIDWORD(eventa._anon_0._M_allocated_capacity));
    if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(*(Player *const *)(eventa._M_string_length + 24));
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v18, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xD8Eu, eventa);
    std::string::~string(&v18);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyBounceConjuringStart>();
    v12 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyBounceConjuringStart::set_chapter_id(v12, *(_DWORD *)(v2 + 48));
    v13 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringStart,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringStart,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_log::PlayerLogBodyBounceConjuringStart::set_transaction(v13, (const std::string *)eventa._M_dataplus._M_p + 1);
    if ( *(_BYTE *)(((eventa._M_string_length + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v14 = *(Player **)(eventa._M_string_length + 24);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&v17, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBounceConjuringStart,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyBounceConjuringStart> *)(v2 + 96));
    Player::printStatLog(v14, &p_body_ptr, &v17, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&v17);
    std::shared_ptr<proto_log::PlayerLogBodyBounceConjuringStart>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBounceConjuringStart> *const)(v2 + 96));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
  }
  if ( v19 == (char *)v2 )
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

// Line 279: range 0000000017949A98-000000001794AA5E
void __cdecl BounceConjuringActivity::onGallerySettleEvent(
        BounceConjuringActivity *const this,
        const GalleryBounceConjuringSettleEvent *event)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  ActivityBounceConjuringExcelConfigMgr *p_activity_bounce_conjuring_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  uint32_t best_score; // ecx
  std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rcx
  std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  PlayerExhibitionComp *ExhibitionComp; // rcx
  GameserverService *v15; // rax
  uint32_t v16; // ecx
  Player *v17; // rax
  PlayerExhibitionComp *v18; // rax
  proto::BounceConjuringGallerySettleInfo *v19; // rax
  Player *player; // r14
  uint32_t total_score; // ecx
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v24; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v26; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v28; // r14
  float v29; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v30; // r14
  google::protobuf::uint32 v31; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v32; // r14
  google::protobuf::uint32 v33; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v34; // r14
  google::protobuf::uint32 v35; // eax
  std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v36; // rax
  Player *v37; // r14
  std::string eventa; // [rsp+0h] [rbp-290h]
  const GalleryBounceConjuringSettleEvent *eventb; // [rsp+0h] [rbp-290h]
  BounceConjuringActivity *thisa; // [rsp+8h] [rbp-288h]
  std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::key_type __k; // [rsp+20h] [rbp-270h] BYREF
  uint32_t series_id; // [rsp+24h] [rbp-26Ch]
  std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::iterator __for_begin; // [rsp+28h] [rbp-268h] BYREF
  std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::iterator __for_end; // [rsp+30h] [rbp-260h] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_begin_0; // [rsp+38h] [rbp-258h] BYREF
  std::vector<ExhibitonCardParam>::iterator __for_end_0; // [rsp+40h] [rbp-250h] BYREF
  BounceConjuringChapterData *chapter_data; // [rsp+48h] [rbp-248h]
  google::protobuf::Map<unsigned int,proto::BounceConjuringGallerySettleInfo> *proto_settle_info_map; // [rsp+50h] [rbp-240h]
  std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo> *__for_range; // [rsp+58h] [rbp-238h]
  const proto::BounceConjuringGallerySettleInfo *player_settle_info; // [rsp+60h] [rbp-230h]
  const google::protobuf::Map<unsigned int,unsigned int> *__for_range_1; // [rsp+68h] [rbp-228h]
  const unsigned int *p_gadget_id; // [rsp+70h] [rbp-220h]
  proto_log::BounceConjuringCatchGadgetInfo *catch_gadget_info; // [rsp+78h] [rbp-218h]
  std::pair<unsigned int const,proto::BounceConjuringGallerySettleInfo> *__in; // [rsp+80h] [rbp-210h]
  std::tuple_element<0,std::pair<unsigned int const,proto::BounceConjuringGallerySettleInfo> >::type *uid; // [rsp+88h] [rbp-208h]
  std::tuple_element<1,std::pair<unsigned int const,proto::BounceConjuringGallerySettleInfo> >::type *settle_info; // [rsp+90h] [rbp-200h]
  std::vector<ExhibitonCardParam> *__for_range_0; // [rsp+98h] [rbp-1F8h]
  const ExhibitonCardParam *param; // [rsp+A0h] [rbp-1F0h]
  proto::ExhibitionDisplayInfo *card_info; // [rsp+A8h] [rbp-1E8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+B0h] [rbp-1E0h] BYREF
  google::protobuf::Map<unsigned int,unsigned int>::const_iterator __for_begin_1; // [rsp+C0h] [rbp-1D0h] BYREF
  common::milog::MiLogStream v62; // [rsp+E0h] [rbp-1B0h] BYREF
  char v63[400]; // [rsp+100h] [rbp-190h] BYREF

  eventa._M_string_length = (std::string::size_type)this;
  eventa._M_dataplus._M_p = (std::string::pointer)event;
  v2 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 10 holder:322 48 4 14 chapter_id:280 64 8 8 iter:281 96 16 14 notify_ptr:289 128 16 11 lo"
                        "g_ptr:323 160 16 14 player_ptr:299 192 24 18 card_param_vec:303 256 56 26 player_settle_info_map:296";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::onGallerySettleEvent;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -234881024;
  v4[536862727] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 160));
  p_activity_bounce_conjuring_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160))->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&event->gallery_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v2 + 48) = ActivityBounceConjuringExcelConfigMgr::findChapterIdByGalleryId(
                           p_activity_bounce_conjuring_config_mgr,
                           event->gallery_id);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 160));
  *(std::map<unsigned int,BounceConjuringChapterData>::iterator *)(v2 + 64) = std::map<unsigned int,BounceConjuringChapterData>::find(
                                                                                &this->chapter_map_,
                                                                                (const std::map<unsigned int,BounceConjuringChapterData>::key_type *)(v2 + 48));
  __for_end_0._M_current = (ExhibitonCardParam *)std::map<unsigned int,BounceConjuringChapterData>::end(&this->chapter_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,BounceConjuringChapterData> >::_Self *)&__for_end_0) )
  {
    common::milog::MiLogStream::create(
      &v62,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "onGallerySettleEvent",
      284);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v62,
           (const char (*)[52])"[BOUNCE_CONJURING] chapter_id invalid, chapter_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" ,gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &event->gallery_id);
    common::milog::MiLogStream::~MiLogStream(&v62);
  }
  else
  {
    chapter_data = std::map<unsigned int,BounceConjuringChapterData>::operator[](
                     &this->chapter_map_,
                     (const std::map<unsigned int,BounceConjuringChapterData>::key_type *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chapter_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    best_score = chapter_data->best_score;
    if ( *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    eventa._anon_0._M_local_buf[15] = best_score < event->total_score;
    common::tools::perf::make_shared<proto::BounceConjuringSettleNotify>();
    v10 = std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::BounceConjuringSettleNotify::set_chapter_id(v10, *(_DWORD *)(v2 + 48));
    v11 = std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::BounceConjuringSettleNotify::set_total_score(v11, event->total_score);
    v12 = std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto::BounceConjuringSettleNotify::set_is_new_record(v12, eventa._anon_0._M_local_buf[15]);
    v13 = std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto::BounceConjuringSettleNotify,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    proto_settle_info_map = proto::BounceConjuringSettleNotify::mutable_settle_info_map(v13);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    ExhibitionComp = Player::getExhibitionComp(this->player_);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    series_id = PlayerExhibitionComp::getSeriesIdByActivityId(ExhibitionComp, this->activity_id_);
    std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::unordered_map(
      (std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo> *const)(v2 + 256),
      &event->player_settle_info_map);
    __for_range = (std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo> *)(v2 + 256);
    __for_begin._M_cur = std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::begin((std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo> *const)(v2 + 256))._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::end(__for_range)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,proto::BounceConjuringGallerySettleInfo>,false>(
              &__for_begin,
              &__for_end) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,proto::BounceConjuringGallerySettleInfo>,false,false>::operator*(&__for_begin);
      uid = std::get<0ul,unsigned int const,proto::BounceConjuringGallerySettleInfo>(__in);
      settle_info = std::get<1ul,unsigned int const,proto::BounceConjuringGallerySettleInfo>(__in);
      v15 = ServiceBox::findService<GameserverService>();
      v16 = (unsigned int)GameserverService::getGameThreadLocal(v15) + 16;
      if ( *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)uid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)uid >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      PlayerMgr::findOnlinePlayer((PlayerMgr *const)(v2 + 160), v16);
      if ( std::operator!=<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 160)) )
      {
        v17 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        v18 = Player::getExhibitionComp(v17);
        PlayerExhibitionComp::getSettleCardVec((std::vector<ExhibitonCardParam> *)(v2 + 192), v18, series_id);
        __for_range_0 = (std::vector<ExhibitonCardParam> *)(v2 + 192);
        __for_begin_0._M_current = std::vector<ExhibitonCardParam>::begin((std::vector<ExhibitonCardParam> *const)(v2 + 192))._M_current;
        __for_end_0._M_current = std::vector<ExhibitonCardParam>::end(__for_range_0)._M_current;
        while ( __gnu_cxx::operator!=<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>(
                  &__for_begin_0,
                  &__for_end_0) )
        {
          param = __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator*(&__for_begin_0);
          card_info = proto::BounceConjuringGallerySettleInfo::add_card_list(settle_info);
          if ( *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)param & 7) + 3) >= *(_BYTE *)(((unsigned __int64)param >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ExhibitionDisplayInfo::set_id(card_info, param->card_id);
          if ( *(_BYTE *)(((unsigned __int64)&param->card_param >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)param + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&param->card_param >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::ExhibitionDisplayInfo::set_param(card_info, param->card_param);
          __gnu_cxx::__normal_iterator<ExhibitonCardParam *,std::vector<ExhibitonCardParam>>::operator++(&__for_begin_0);
        }
        std::vector<ExhibitonCardParam>::~vector((std::vector<ExhibitonCardParam> *const)(v2 + 192));
      }
      v19 = google::protobuf::Map<unsigned int,proto::BounceConjuringGallerySettleInfo>::operator[](
              proto_settle_info_map,
              uid);
      proto::BounceConjuringGallerySettleInfo::operator=(v19, settle_info);
      std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 160));
      std::__detail::_Node_iterator<std::pair<unsigned int const,proto::BounceConjuringGallerySettleInfo>,false,false>::operator++(&__for_begin);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    player = this->player_;
    std::dynamic_pointer_cast<google::protobuf::Message const,proto::BounceConjuringSettleNotify>((const std::shared_ptr<proto::BounceConjuringSettleNotify> *)(v2 + 160));
    Player::sendMessage(player, (common::minet::ConstMessagePtr *)(v2 + 160), 0LL);
    std::shared_ptr<google::protobuf::Message const>::~shared_ptr((std::shared_ptr<const google::protobuf::Message> *const)(v2 + 160));
    if ( eventa._anon_0._M_local_buf[15] )
    {
      if ( *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&event->total_score >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      total_score = event->total_score;
      if ( *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)chapter_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3)
                                                                   + 0x7FFF8000) )
      {
        __asan_report_store4(&chapter_data->best_score);
      }
      chapter_data->best_score = total_score;
      BaseActivity::notifyClientData(this, 0);
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    BasicComp = Player::getBasicComp(this->player_);
    PlayerBasicComp::getNextTransNo[abi:cxx11]((std::string *)&v62, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32), 0xD8Fu, eventa);
    std::string::~string(&v62);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyBounceConjuringSettle>();
    v23 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto_log::PlayerLogBodyBounceConjuringSettle::set_chapter_id(v23, *(_DWORD *)(v2 + 48));
    v24 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    proto_log::PlayerLogBodyBounceConjuringSettle::set_transaction(v24, &eventb->transaction);
    v25 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&eventb->total_score >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&eventb->total_score >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyBounceConjuringSettle::set_score(v25, eventb->total_score);
    v26 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)chapter_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&chapter_data->best_score >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyBounceConjuringSettle::set_best_score(v26, chapter_data->best_score);
    v27 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    if ( *(_BYTE *)(((unsigned __int64)&eventb->total_destroyed_machine_count >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)eventb + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&eventb->total_destroyed_machine_count >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto_log::PlayerLogBodyBounceConjuringSettle::set_destroyed_machine_count(
      v27,
      eventb->total_destroyed_machine_count);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    __k = Player::getUid(thisa->player_);
    player_settle_info = std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::operator[](
                           (std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo> *const)(v2 + 256),
                           &__k);
    v28 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v29 = proto::BounceConjuringGallerySettleInfo::damage(player_settle_info);
    proto_log::PlayerLogBodyBounceConjuringSettle::set_damage(v28, v29);
    v30 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v31 = proto::BounceConjuringGallerySettleInfo::normal_hit_count(player_settle_info);
    proto_log::PlayerLogBodyBounceConjuringSettle::set_normal_hit_count(v30, v31);
    v32 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v33 = proto::BounceConjuringGallerySettleInfo::perfect_hit_count(player_settle_info);
    proto_log::PlayerLogBodyBounceConjuringSettle::set_perfect_hit_count(v32, v33);
    v34 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
    v35 = proto::BounceConjuringGallerySettleInfo::fever_count(player_settle_info);
    proto_log::PlayerLogBodyBounceConjuringSettle::set_fever_count(v34, v35);
    __for_range_1 = proto::BounceConjuringGallerySettleInfo::gadget_count_map(player_settle_info);
    google::protobuf::Map<unsigned int,unsigned int>::begin(&__for_begin_1, __for_range_1);
    google::protobuf::Map<unsigned int,unsigned int>::end(
      (google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v2 + 192),
      __for_range_1);
    while ( google::protobuf::operator!=(
              &__for_begin_1,
              (const google::protobuf::Map<unsigned int,unsigned int>::const_iterator *)(v2 + 192)) )
    {
      p_gadget_id = (const unsigned int *)google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator*(&__for_begin_1);
      v36 = std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyBounceConjuringSettle,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      catch_gadget_info = proto_log::PlayerLogBodyBounceConjuringSettle::add_gadget_info_list(v36);
      if ( *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)p_gadget_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_gadget_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::BounceConjuringCatchGadgetInfo::set_gadget_id(catch_gadget_info, *p_gadget_id);
      if ( *(_BYTE *)(((unsigned __int64)(p_gadget_id + 1) >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)p_gadget_id + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)(p_gadget_id + 1) >> 3)
                                                                  + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::BounceConjuringCatchGadgetInfo::set_count(catch_gadget_info, p_gadget_id[1]);
      google::protobuf::Map<unsigned int,unsigned int>::const_iterator::operator++(&__for_begin_1);
    }
    if ( *(_BYTE *)(((unsigned __int64)&thisa->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v37 = thisa->player_;
    std::shared_ptr<google::protobuf::Message>::shared_ptr(
      (std::shared_ptr<google::protobuf::Message> *const)(v2 + 160),
      0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyBounceConjuringSettle,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyBounceConjuringSettle> *)(v2 + 128));
    Player::printStatLog(v37, &p_body_ptr, (MessagePtr *)(v2 + 160), 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)(v2 + 160));
    std::shared_ptr<proto_log::PlayerLogBodyBounceConjuringSettle>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyBounceConjuringSettle> *const)(v2 + 128));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 32));
    std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo>::~unordered_map((std::unordered_map<unsigned int,proto::BounceConjuringGallerySettleInfo> *const)(v2 + 256));
    std::shared_ptr<proto::BounceConjuringSettleNotify>::~shared_ptr((std::shared_ptr<proto::BounceConjuringSettleNotify> *const)(v2 + 96));
  }
  if ( v63 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
};

// Line 344: range 000000001794AA60-000000001794AB65
uint32_t __cdecl BounceConjuringActivity::getContentCloseTime(const BounceConjuringActivity *const this)
{
  ActivityBounceConjuringExcelConfigMgr *p_activity_bounce_conjuring_config_mgr; // rcx
  uint32_t v2; // ecx
  uint32_t BeginTimeByOpenDay; // ebx
  std::shared_ptr<Config> v5[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  p_activity_bounce_conjuring_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5)->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->activity_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  v2 = ActivityBounceConjuringExcelConfigMgr::getActivityStayTime(
         p_activity_bounce_conjuring_config_mgr,
         this->activity_id_)
     + 1;
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  BeginTimeByOpenDay = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, v2);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return BeginTimeByOpenDay;
};

// Line 349: range 000000001794AB66-000000001794AC0B
void __cdecl BounceConjuringActivity::closeContent(BounceConjuringActivity *const this)
{
  if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_content_closed_);
  if ( !this->is_content_closed_ )
  {
    if ( *(char *)(((unsigned __int64)&this->is_content_closed_ >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_content_closed_);
    this->is_content_closed_ = 1;
    BaseActivity::notifyClientData(this, 0);
  }
};

// Line 360: range 000000001794AC0C-000000001794AE72
uint32_t __fastcall BounceConjuringActivity::getChapterOpenTime(
        const BounceConjuringActivity *const this,
        uint32_t chapter_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  uint32_t result; // eax
  uint32_t open_day; // ecx
  const data::BounceConjuringChapterExcelConfig *chapter_config_ptr; // [rsp+18h] [rbp-98h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 chapter_id:359";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::getChapterOpenTime;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = chapter_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v10);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v10);
  chapter_config_ptr = ActivityBounceConjuringExcelConfigMgr::findChapterConfigByChapterId(
                         &v5->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr,
                         *(_DWORD *)(v2 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v10);
  if ( chapter_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->open_day >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&chapter_config_ptr->open_day >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    open_day = chapter_config_ptr->open_day;
    if ( *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_id_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = BaseActivity::getBeginTimeByOpenDay(this->schedule_id_, open_day);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v11,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "getChapterOpenTime",
      364);
    v6 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v11,
           (const char (*)[69])"[BOUNCE_CONJURING] findChapterConfigByChapterId failed, chapter_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v11);
    result = 0;
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

// Line 372: range 000000001794AE74-000000001794AF38
bool __cdecl BounceConjuringActivity::isChapterOpen(const BounceConjuringActivity *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // rax
  char v3; // al
  time_t Now; // rbx

  if ( !BaseActivity::isOpening(this, 0) )
    goto LABEL_7;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(this->_vptr_DescribalBase + 17);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  if ( (*(unsigned __int8 (__fastcall **)(const BounceConjuringActivity *const))v2)(this) )
LABEL_7:
    v3 = 1;
  else
    v3 = 0;
  if ( v3 )
    return 0;
  Now = common::tools::TimeUtils::getNow();
  return Now > BounceConjuringActivity::getChapterOpenTime(this, chapter_id);
};

// Line 382: range 000000001794AF3A-000000001794B7A2
__int64 __fastcall BounceConjuringActivity::addChapterWatcher(BounceConjuringActivity *const this, uint32_t chapter_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  __int64 result; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v8; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  uint32_t WatcherComp; // eax
  bool v18; // r14
  PlayerWatcherComp *v19; // rax
  bool v20; // r14
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  std::vector<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_end; // [rsp+20h] [rbp-E0h] BYREF
  const data::BounceConjuringChapterExcelConfig *chapter_config_ptr; // [rsp+28h] [rbp-D8h]
  const std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-D0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+38h] [rbp-C8h]
  std::shared_ptr<Config> v29; // [rsp+40h] [rbp-C0h] BYREF
  common::milog::MiLogStream v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31[144]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 14 watcher_id:390 64 4 14 chapter_id:381";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::addChapterWatcher;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 64) = chapter_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v29);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
  chapter_config_ptr = ActivityBounceConjuringExcelConfigMgr::findChapterConfigByChapterId(
                         &v5->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr,
                         *(_DWORD *)(v2 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v29);
  if ( !chapter_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "addChapterWatcher",
      386);
    v6 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v30,
           (const char (*)[69])"[BOUNCE_CONJURING] findChapterConfigByChapterId failed, chapter_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v30);
    result = 0xFFFFFFFFLL;
    goto LABEL_33;
  }
  __for_range = &chapter_config_ptr->watcher_id_list;
  __for_begin._M_current = std::vector<unsigned int>::begin(&chapter_config_ptr->watcher_id_list)._M_current;
  __for_end._M_current = std::vector<unsigned int>::end(&chapter_config_ptr->watcher_id_list)._M_current;
  while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin, &__for_end) )
  {
    v8 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v8;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v29);
    v9 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v29);
    watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                           &v9->design_config.txt_config_mgr.watcher_config_mgr,
                           *(_DWORD *)(v2 + 48));
    std::shared_ptr<Config>::~shared_ptr(&v29);
    if ( !watcher_config_ptr )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/activity/bounce_conjuring_activity.cpp",
        "addChapterWatcher",
        395);
      v10 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
              &v30,
              (const char (*)[41])"[BOUNCE_CONJURING] findWatcherConfig id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])" failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_30:
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v30);
      goto LABEL_31;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->finished_watcher_id_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/bounce_conjuring_activity.cpp",
        "addChapterWatcher",
        401);
      v13 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v30,
              (const char (*)[31])"[BOUNCE_CONJURING] watcher_id:");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              v14,
              (const char (*)[25])" already finished, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_30;
    }
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
           &this->taken_watcher_id_set_,
           (const unsigned int *)(v2 + 48)) )
    {
      common::milog::MiLogStream::create(
        &v30,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/activity/bounce_conjuring_activity.cpp",
        "addChapterWatcher",
        407);
      v15 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              &v30,
              (const char (*)[31])"[BOUNCE_CONJURING] watcher_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v2 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v16,
              (const char (*)[20])" taken reward, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_30;
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
    PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v29, WatcherComp);
    v18 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v29);
    std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v29);
    if ( !v18 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v19 = Player::getWatcherComp(this->player_);
      PlayerWatcherComp::addWatcher(
        (PlayerWatcherComp *const)&v29,
        (const WatcherConfig *)v19,
        (uint32_t)watcher_config_ptr);
      v20 = std::operator==<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v29);
      std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v29);
      if ( v20 )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bounce_conjuring_activity.cpp",
          "addChapterWatcher",
          418);
        v21 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                &v30,
                (const char (*)[34])"[BOUNCE_CONJURING] addWatcher id:");
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                (const unsigned int *)(v2 + 48));
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v22, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        goto LABEL_30;
      }
    }
LABEL_31:
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin);
  }
  result = 0LL;
LABEL_33:
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

// Line 427: range 000000001794B7A4-000000001794BD50
int32_t __cdecl BounceConjuringActivity::delAllChapterWatcher(BounceConjuringActivity *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >::reference v5; // rdx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  uint32_t WatcherComp; // eax
  bool v11; // r14
  PlayerWatcherComp *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::const_iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::vector<unsigned int>::const_iterator __for_begin_0; // [rsp+30h] [rbp-E0h] BYREF
  std::vector<unsigned int>::const_iterator __for_end_0; // [rsp+38h] [rbp-D8h] BYREF
  const std::map<unsigned int,data::BounceConjuringChapterExcelConfig> *__for_range; // [rsp+40h] [rbp-D0h]
  const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> *v22; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *_; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *excel_config; // [rsp+58h] [rbp-B8h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+60h] [rbp-B0h]
  const data::WatcherConfig *watcher_config_ptr; // [rsp+68h] [rbp-A8h]
  std::shared_ptr<Config> v27; // [rsp+70h] [rbp-A0h] BYREF
  common::milog::MiLogStream v28; // [rsp+80h] [rbp-90h] BYREF
  char v29[112]; // [rsp+A0h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 14 watcher_id:430";
  *(_QWORD *)(v1 + 16) = BounceConjuringActivity::delAllChapterWatcher;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v27);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
  __for_range = ActivityBounceConjuringExcelConfigMgr::getChapterConfigMap(&v4->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v27);
  __for_begin._M_node = std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,data::BounceConjuringChapterExcelConfig>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v22 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v22);
    excel_config = (std::tuple_element<1,const std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig> >::type *)std::get<1ul,unsigned int const,data::BounceConjuringChapterExcelConfig>(v22);
    __for_range_0 = &excel_config->watcher_id_list;
    __for_begin_0._M_current = std::vector<unsigned int>::begin(&excel_config->watcher_id_list)._M_current;
    __for_end_0._M_current = std::vector<unsigned int>::end(__for_range_0)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(&__for_begin_0, &__for_end_0) )
    {
      v5 = __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      *(_DWORD *)(v1 + 32) = *v5;
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v27);
      v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v27);
      watcher_config_ptr = WatcherExcelConfigMgr::findWatcherConfig(
                             &v6->design_config.txt_config_mgr.watcher_config_mgr,
                             *(_DWORD *)(v1 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v27);
      if ( watcher_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        WatcherComp = (unsigned int)Player::getWatcherComp(this->player_);
        PlayerWatcherComp::findWatcher((PlayerWatcherComp *const)&v27, WatcherComp);
        v11 = std::operator!=<BaseWatcher>(0LL, (const std::shared_ptr<BaseWatcher> *)&v27);
        std::shared_ptr<BaseWatcher>::~shared_ptr((std::shared_ptr<BaseWatcher> *const)&v27);
        if ( v11 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v12 = Player::getWatcherComp(this->player_);
          PlayerWatcherComp::delWatcher(v12, *(_DWORD *)(v1 + 32));
        }
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/activity/bounce_conjuring_activity.cpp",
          "delAllChapterWatcher",
          444);
        v13 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                &v28,
                (const char (*)[33])"[BOUNCE_CONJURING] del watcher: ");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v1 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v14, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      else
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/activity/bounce_conjuring_activity.cpp",
          "delAllChapterWatcher",
          435);
        v7 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v28,
               (const char (*)[41])"[BOUNCE_CONJURING] findWatcherConfig id:");
        v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
        v9 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v8, (const char (*)[14])" failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
      }
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v28);
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,data::BounceConjuringChapterExcelConfig>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v29 == (char *)v1 )
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

// Line 452: range 000000001794BD52-000000001794C00E
__int64 __fastcall BounceConjuringActivity::getBestScoreByGalleryId(
        const BounceConjuringActivity *const this,
        uint32_t gallery_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,BounceConjuringChapterData> >::pointer v10; // rdx
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,BounceConjuringChapterData> >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-B0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-A0h] BYREF
  char v14[128]; // [rsp+50h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 4 14 chapter_id:453 48 4 14 gallery_id:451 64 8 8 iter:454";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::getBestScoreByGalleryId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = gallery_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v12);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
  *(_DWORD *)(v2 + 32) = ActivityBounceConjuringExcelConfigMgr::findChapterIdByGalleryId(
                           &v5->design_config.txt_config_mgr.activity_bounce_conjuring_config_mgr,
                           *(_DWORD *)(v2 + 48));
  std::shared_ptr<Config>::~shared_ptr(&v12);
  *(std::map<unsigned int,BounceConjuringChapterData>::const_iterator *)(v2 + 64) = std::map<unsigned int,BounceConjuringChapterData>::find(
                                                                                      &this->chapter_map_,
                                                                                      (const std::map<unsigned int,BounceConjuringChapterData>::key_type *)(v2 + 32));
  __y._M_node = std::map<unsigned int,BounceConjuringChapterData>::end(&this->chapter_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BounceConjuringChapterData> >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "getBestScoreByGalleryId",
      457);
    v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
           &v13,
           (const char (*)[52])"[BOUNCE_CONJURING] chapter_id invalid, chapter_id: ");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v2 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v7, (const char (*)[15])" ,gallery_id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = 0LL;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,BounceConjuringChapterData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,BounceConjuringChapterData> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v10->second.best_score >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v10 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->second.best_score >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    result = v10->second.best_score;
  }
  if ( v14 == (char *)v2 )
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

// Line 464: range 000000001794C010-000000001794C283
__int64 __fastcall BounceConjuringActivity::checkAddCoin(const BounceConjuringActivity *const this, uint32_t add_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 add_num:463";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::checkAddCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = add_num;
  if ( *(_DWORD *)(v2 + 32) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( this->coin_ && *(_DWORD *)(v2 + 32) + this->coin_ < *(_DWORD *)(v2 + 32) )
      goto LABEL_14;
  }
  if ( *(_DWORD *)(v2 + 32) )
    goto LABEL_15;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
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
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "checkAddCoin",
      467);
    v5 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
           &v9,
           (const char (*)[45])"[BOUNCE_CONJURING] coin over flow, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->coin_);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" ,add num: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9180LL;
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

// Line 474: range 000000001794C284-000000001794C454
__int64 __fastcall BounceConjuringActivity::checkSubCoin(const BounceConjuringActivity *const this, uint32_t sub_num)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 11 sub_num:473";
  *(_QWORD *)(v2 + 16) = BounceConjuringActivity::checkSubCoin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = sub_num;
  if ( *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coin_ >> 3) + 0x7FFF8000) )
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
      "./src/player/activity/bounce_conjuring_activity.cpp",
      "checkSubCoin",
      477);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           &v9,
           (const char (*)[46])"[BOUNCE_CONJURING] coin not enough, cur num: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->coin_);
    v7 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v6, (const char (*)[10])off_262431E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v9);
    result = 9181LL;
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

// Line 484: range 000000001794C456-000000001794C841
int32_t __cdecl BounceConjuringActivity::addCoin(
        BounceConjuringActivity *const this,
        uint32_t add_num,
        const ActionReason *reason,
        bool is_notify)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  int32_t v7; // r14d
  PlayerBasicComp *BasicComp; // rax
  SelectType v9; // ecx
  PlayerItemComp *ItemComp; // rdi
  data::ItemLimitType vptr_PlayerCompBase_high; // ecx
  uint32_t vptr_PlayerCompBase; // r10d
  int32_t result; // eax
  std::string v14; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  unsigned int add_numa; // [rsp+14h] [rbp-ACh]
  BounceConjuringActivity *thisa; // [rsp+18h] [rbp-A8h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:491";
  *(_QWORD *)(v4 + 16) = BounceConjuringActivity::addCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = BounceConjuringActivity::checkAddCoin(this, add_num);
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
      && (char)((((_BYTE)thisa - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin = thisa->coin_;
    v9 = SAFE_ADD<unsigned int,unsigned int>(old_coin, add_numa);
    if ( *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)thisa - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&thisa->coin_);
    }
    thisa->coin_ = v9;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
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
      && (char)((((_BYTE)thisa - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_BOUNCE_CONJURING_COIN,
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

// Line 504: range 000000001794C842-000000001794CB95
int32_t __cdecl BounceConjuringActivity::subCoin(
        BounceConjuringActivity *const this,
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
  uint32_t vptr_PlayerCompBase; // r8d
  int32_t result; // eax
  std::string v12; // [rsp+0h] [rbp-C0h]
  PlayerItemComp *reasona; // [rsp+8h] [rbp-B8h]
  bool is_notifya; // [rsp+10h] [rbp-B0h]
  uint32_t sub_numa; // [rsp+14h] [rbp-ACh]
  BounceConjuringActivity *thisa; // [rsp+18h] [rbp-A8h]
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
  *(_QWORD *)(v4 + 8) = "1 32 1 22 log_context_holder:511";
  *(_QWORD *)(v4 + 16) = BounceConjuringActivity::subCoin;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116351;
  ret = BounceConjuringActivity::checkSubCoin(this, sub_num);
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
      && (char)((((_BYTE)thisa - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    old_coin = thisa->coin_;
    thisa->coin_ = old_coin - sub_numa;
    if ( is_notifya )
      BaseActivity::notifyActivityCoinInfo(thisa);
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
      && (char)((((_BYTE)thisa - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->coin_ >> 3) + 0x7FFF8000) )
    {
      ItemComp = (PlayerItemComp *)&thisa->coin_;
      __asan_report_load4();
    }
    PlayerItemComp::logPlayerAddCoin(
      ItemComp,
      ITEM_VIRTUAL_BOUNCE_CONJURING_COIN,
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
