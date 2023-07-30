// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/region_search/player_region_search_comp.cpp

// Line 23: range 0000000015C915B8-0000000015C9180F
int32_t __cdecl PlayerRegionSearchComp::fromBin(PlayerRegionSearchComp *const this, const proto::PlayerDataBin *proto)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  RegionSearchPlay *v5; // rax
  std::shared_ptr<RegionSearchPlay> *v6; // rax
  int32_t result; // eax
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type __k; // [rsp+14h] [rbp-9Ch] BYREF
  google::protobuf::RepeatedPtrField<proto::RegionSearchPlayBin>::const_iterator __for_begin; // [rsp+18h] [rbp-98h] BYREF
  google::protobuf::RepeatedPtrField<proto::RegionSearchPlayBin>::const_iterator __for_end; // [rsp+20h] [rbp-90h] BYREF
  const proto::PlayerRegionSearchCompBin *proto_comp; // [rsp+28h] [rbp-88h]
  const google::protobuf::RepeatedPtrField<proto::RegionSearchPlayBin> *__for_range; // [rsp+30h] [rbp-80h]
  const proto::RegionSearchPlayBin *play_proto; // [rsp+38h] [rbp-78h]
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 11 play_ptr:27";
  *(_QWORD *)(v2 + 16) = PlayerRegionSearchComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  proto_comp = proto::PlayerDataBin::region_search_bin(proto);
  __for_range = proto::PlayerRegionSearchCompBin::play_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::RegionSearchPlayBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::RegionSearchPlayBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchPlayBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    play_proto = google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchPlayBin const>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    common::tools::perf::make_shared<RegionSearchPlay,Player &>((Player *)(v2 + 32), this->player_);
    if ( !std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v2 + 32)) )
    {
      v5 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      RegionSearchPlay::fromBin(v5, play_proto);
      __k = proto::RegionSearchPlayBin::id(play_proto);
      v6 = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::operator[](&this->play_map_, &__k);
      std::shared_ptr<RegionSearchPlay>::operator=(v6, (const std::shared_ptr<RegionSearchPlay> *)(v2 + 32));
    }
    std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v2 + 32));
    google::protobuf::internal::RepeatedPtrIterator<proto::RegionSearchPlayBin const>::operator++(&__for_begin);
  }
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

// Line 39: range 0000000015C91810-0000000015C918FE
int32_t __cdecl PlayerRegionSearchComp::toBin(PlayerRegionSearchComp *const this, proto::PlayerDataBin *proto)
{
  std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  proto::RegionSearchPlayBin *v3; // rax
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_begin; // [rsp+18h] [rbp-48h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_end; // [rsp+20h] [rbp-40h] BYREF
  proto::PlayerRegionSearchCompBin *proto_comp; // [rsp+28h] [rbp-38h]
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > *v9; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *_; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *play_ptr; // [rsp+48h] [rbp-18h]

  proto_comp = proto::PlayerDataBin::mutable_region_search_bin(proto);
  __for_range = &this->play_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::begin(&this->play_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v9 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(v9);
    play_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(v9);
    if ( !std::operator==<RegionSearchPlay>(0LL, play_ptr) )
    {
      v2 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      v3 = proto::PlayerRegionSearchCompBin::add_play_list(proto_comp);
      RegionSearchPlay::toBin(v2, v3);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 53: range 0000000015C91900-0000000015C919DF
int32_t __cdecl PlayerRegionSearchComp::onLogin(PlayerRegionSearchComp *const this, bool is_new_player)
{
  RegionSearchPlay *v2; // rax
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  PlayerRegionSearchComp::refresh(this);
  __for_range = &this->play_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::begin(&this->play_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    if ( !std::operator==<RegionSearchPlay>(0LL, play_ptr) )
    {
      v2 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      RegionSearchPlay::onLogin(v2);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator++(&__for_begin);
  }
  PlayerRegionSearchComp::tryStartTimer(this);
  return 0;
};

// Line 68: range 0000000015C919E0-0000000015C91AA2
int32_t __cdecl PlayerRegionSearchComp::onLogout(PlayerRegionSearchComp *const this)
{
  RegionSearchPlay *v1; // rax
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->play_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::begin(&this->play_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    if ( !std::operator==<RegionSearchPlay>(0LL, play_ptr) )
    {
      v1 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      RegionSearchPlay::onLogout(v1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 81: range 0000000015C91AA4-0000000015C91C28
int32_t __cdecl PlayerRegionSearchComp::notifyAllData(PlayerRegionSearchComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  int32_t v4; // r14d
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
  *(_QWORD *)(v1 + 8) = "1 48 48 9 notify:82";
  *(_QWORD *)(v1 + 16) = PlayerRegionSearchComp::notifyAllData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::RegionSearchNotify::RegionSearchNotify((proto::RegionSearchNotify *const)(v1 + 48));
  PlayerRegionSearchComp::toClient(this, (proto::RegionSearchNotify *)(v1 + 48));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v4 = Player::sendProto(this->player_, (const google::protobuf::Message *)(v1 + 48));
  proto::RegionSearchNotify::~RegionSearchNotify((proto::RegionSearchNotify *const)(v1 + 48));
  result = v4;
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

// Line 88: range 0000000015C91C2A-0000000015C91D49
void __cdecl PlayerRegionSearchComp::toClient(PlayerRegionSearchComp *const this, proto::RegionSearchNotify *notify)
{
  std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rbx
  proto::RegionSearchInfo *v3; // rax
  uint32_t Uid; // edx
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_begin; // [rsp+10h] [rbp-40h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_end; // [rsp+18h] [rbp-38h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *__for_range; // [rsp+20h] [rbp-30h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > *__in; // [rsp+28h] [rbp-28h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *_; // [rsp+30h] [rbp-20h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *play_ptr; // [rsp+38h] [rbp-18h]

  __for_range = &this->play_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::begin(&this->play_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    if ( !std::operator==<RegionSearchPlay>(0LL, play_ptr) )
    {
      v2 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      v3 = proto::RegionSearchNotify::add_region_search_list(notify);
      RegionSearchPlay::toClient(v2, v3);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  proto::RegionSearchNotify::set_uid(notify, Uid);
};

// Line 101: range 0000000015C91D4A-0000000015C9235A
__int64 __fastcall PlayerRegionSearchComp::addRegionSearchPlay(
        PlayerRegionSearchComp *const this,
        uint32_t id,
        const RegionSearchSource *source)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int v11; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  std::shared_ptr<RegionSearchPlay> *v16; // rax
  RegionSearchPlay *v17; // rax
  RegionSearchPlay *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+24h] [rbp-CCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __x; // [rsp+28h] [rbp-C8h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+30h] [rbp-C0h] BYREF
  const data::RegionSearchExcelConfig *play_config_ptr; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v28; // [rsp+40h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+60h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 id:100 64 16 12 play_ptr:114";
  *(_QWORD *)(v3 + 16) = PlayerRegionSearchComp::addRegionSearchPlay;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = id;
  __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  __x._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                  &this->play_map_,
                  (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v3 + 48))._M_node;
  if ( std::operator!=(&__x, &__y) )
  {
    common::milog::MiLogStream::create(
      &v28,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/player_region_search_comp.cpp",
      "addRegionSearchPlay",
      104);
    v6 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v28,
           (const char (*)[25])"[REGION_SEARCH] play_id=");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    v8 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
           v7,
           (const char (*)[26])" exists, now source_type:");
    v9 = common::milog::MiLogStream::operator<<<RegionSearchSource::SourceType,(RegionSearchSource::SourceType*)0>(
           v8,
           (const RegionSearchSource::SourceType *)source);
    v10 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])" param:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &source->param);
    common::milog::MiLogStream::~MiLogStream(&v28);
    v11 = -1;
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v3 + 64));
    v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    play_config_ptr = data::ActivityRegionSearchMgrBase::findRegionSearchExcelConfig(
                        &v12->design_config.txt_config_mgr.region_search_config_mgr,
                        *(_DWORD *)(v3 + 48));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
    if ( play_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      common::tools::perf::make_shared<RegionSearchPlay,Player &>((Player *)(v3 + 64), this->player_);
      if ( std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/region_search/player_region_search_comp.cpp",
          "addRegionSearchPlay",
          117);
        v15 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                &v28,
                (const char (*)[41])"[REGION_SEARCH] make shared failed, uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
        v11 = -1;
      }
      else
      {
        v16 = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::operator[](
                &this->play_map_,
                (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v3 + 48));
        std::shared_ptr<RegionSearchPlay>::operator=(v16, (const std::shared_ptr<RegionSearchPlay> *)(v3 + 64));
        v17 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        RegionSearchPlay::init(v17, *(_DWORD *)(v3 + 48), source);
        v18 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        RegionSearchPlay::refresh(v18);
        common::milog::MiLogStream::create(
          &v28,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/region_search/player_region_search_comp.cpp",
          "addRegionSearchPlay",
          123);
        v19 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v28,
                (const char (*)[26])"[REGION_SEARCH] add play:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v19,
                (const unsigned int *)(v3 + 48));
        v21 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v20, (const char (*)[6])" uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &val);
        common::milog::MiLogStream::~MiLogStream(&v28);
        PlayerRegionSearchComp::tryStartTimer(this);
        PlayerRegionSearchComp::notifyToAllPlayer(this);
        v11 = 0;
      }
      std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 64));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v28,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/region_search/player_region_search_comp.cpp",
        "addRegionSearchPlay",
        111);
      v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v28,
              (const char (*)[25])"[REGION_SEARCH] play_id=");
      v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v14, (const char (*)[18])" config not found");
      common::milog::MiLogStream::~MiLogStream(&v28);
      v11 = -1;
    }
  }
  result = v11;
  if ( v29 == (char *)v3 )
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

// Line 130: range 0000000015C9235C-0000000015C9276E
void __fastcall PlayerRegionSearchComp::delRegionSearchPlay(PlayerRegionSearchComp *const this, uint32_t id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  RegionSearchPlay *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+18h] [rbp-D8h] BYREF
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-D0h] BYREF
  char v17[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 6 id:129 64 8 8 iter:131 96 16 12 play_ptr:137";
  *(_QWORD *)(v2 + 16) = PlayerRegionSearchComp::delRegionSearchPlay;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = id;
  *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                                                                                       &this->play_map_,
                                                                                       (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self *)(v2 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/region_search/player_region_search_comp.cpp",
      "delRegionSearchPlay",
      134);
    v5 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v16,
           (const char (*)[25])"[REGION_SEARCH] play_id=");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" not exists");
    common::milog::MiLogStream::~MiLogStream(&v16);
  }
  else
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > > *const)(v2 + 64));
    std::shared_ptr<RegionSearchPlay>::shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v2 + 96), &v7->second);
    if ( std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/region_search/player_region_search_comp.cpp",
        "delRegionSearchPlay",
        140);
      v8 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             &v16,
             (const char (*)[25])"[REGION_SEARCH] play_id=");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])" not exists");
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v10 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      RegionSearchPlay::close(v10);
      std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::erase[abi:cxx11](
        &this->play_map_,
        *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator *)(v2 + 64));
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/player/region_search/player_region_search_comp.cpp",
        "delRegionSearchPlay",
        145);
      v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v16,
              (const char (*)[26])"[REGION_SEARCH] del play:");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v2 + 48));
      v13 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v12, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
      PlayerRegionSearchComp::notifyToAllPlayer(this);
    }
    std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v2 + 96));
  }
  if ( v17 == (char *)v2 )
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

// Line 150: range 0000000015C92770-0000000015C929AA
bool __cdecl PlayerRegionSearchComp::refresh(PlayerRegionSearchComp *const this)
{
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  RegionSearchPlay *v4; // rax
  bool result; // al
  bool need_notify; // [rsp+1Fh] [rbp-E1h]
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_begin; // [rsp+20h] [rbp-E0h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_end; // [rsp+28h] [rbp-D8h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *__for_range; // [rsp+30h] [rbp-D0h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > *__in; // [rsp+38h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *_; // [rsp+40h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *play_ptr; // [rsp+48h] [rbp-B8h]
  char v13[176]; // [rsp+50h] [rbp-B0h] BYREF

  v1 = (std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 12 play_map:152";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)PlayerRegionSearchComp::refresh;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  need_notify = 0;
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::map(v1 + 1, &this->play_map_);
  __for_range = v1 + 1;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::begin(v1 + 1)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(v1 + 1)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    if ( !std::operator==<RegionSearchPlay>(0LL, play_ptr) )
    {
      v4 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      need_notify = (need_notify | RegionSearchPlay::refresh(v4)) != 0;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator++(&__for_begin);
  }
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::~map(v1 + 1);
  result = need_notify;
  if ( v13 == (char *)v1 )
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

// Line 165: range 0000000015C929AC-0000000015C92CA5
void __cdecl PlayerRegionSearchComp::notifyToAllPlayer(PlayerRegionSearchComp *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  common::milog::MiLogStream *v4; // r14
  World *v5; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::shared_ptr<PlayerWorld> __r; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-F0h] BYREF
  char v9[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 16 13 world_ptr:166 80 48 10 notify:172";
  *(_QWORD *)(v1 + 16) = PlayerRegionSearchComp::notifyToAllPlayer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862722] = 62194;
  v3[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)&__r);
  std::shared_ptr<World>::shared_ptr<PlayerWorld,void>((std::shared_ptr<World> *const)(v1 + 48), &__r);
  std::shared_ptr<PlayerWorld>::~shared_ptr(&__r);
  if ( std::operator==<World>(0LL, (const std::shared_ptr<World> *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/player_region_search_comp.cpp",
      "notifyToAllPlayer",
      169);
    v4 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(&v8, (const char (*)[26])off_259C25C0);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    proto::RegionSearchNotify::RegionSearchNotify((proto::RegionSearchNotify *const)(v1 + 80));
    PlayerRegionSearchComp::toClient(this, (proto::RegionSearchNotify *)(v1 + 80));
    v5 = std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<World,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 48));
    World::notifyAllPlayer<proto::RegionSearchNotify>(v5, (const proto::RegionSearchNotify *)(v1 + 80), 0);
    proto::RegionSearchNotify::~RegionSearchNotify((proto::RegionSearchNotify *const)(v1 + 80));
  }
  std::shared_ptr<World>::~shared_ptr((std::shared_ptr<World> *const)(v1 + 48));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
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

// Line 178: range 0000000015C92CA6-0000000015C92CCC
void __cdecl PlayerRegionSearchComp::onDailyRefresh(PlayerRegionSearchComp *const this)
{
  PlayerRegionSearchComp::refresh(this);
  PlayerRegionSearchComp::notifyToAllPlayer(this);
};

// Line 184: range 0000000015C92CCE-0000000015C9310B
__int64 __fastcall PlayerRegionSearchComp::addSearchProgress(
        PlayerRegionSearchComp *const this,
        uint32_t region_id,
        uint32_t progress_add)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rax
  _DWORD *v12; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::pointer v13; // rax
  RegionSearchPlay *v14; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  const std::set<unsigned int> *play_set_ptr; // [rsp+30h] [rbp-E0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
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
  *(_QWORD *)(v3 + 8) = "4 32 4 11 play_id:192 48 4 13 region_id:183 64 8 8 iter:194 96 16 12 play_ptr:199";
  *(_QWORD *)(v3 + 16) = PlayerRegionSearchComp::addSearchProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = region_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  play_set_ptr = RegionSearchExcelConfigMgr::findPlaySetByRegion(
                   &v6->design_config.txt_config_mgr.region_search_config_mgr,
                   *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( play_set_ptr )
  {
    __for_range = play_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(play_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(play_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v3 + 32) = *v12;
      *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                                                                                           &this->play_map_,
                                                                                           (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v3 + 32));
      __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self *)(v3 + 64),
              &__y) )
      {
        v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > > *const)(v3 + 64));
        std::shared_ptr<RegionSearchPlay>::shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96), &v13->second);
        if ( !std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v3 + 96)) )
        {
          v14 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          RegionSearchPlay::addSearchProgress(v14, *(_DWORD *)(v3 + 48), progress_add);
        }
        std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96));
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    PlayerRegionSearchComp::notifyToAllPlayer(this);
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/player_region_search_comp.cpp",
      "addSearchProgress",
      189);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v21, (const char (*)[11])"region_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           v8,
           (const char (*)[27])" get play set failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
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

// Line 211: range 0000000015C9310C-0000000015C9353A
__int64 __fastcall PlayerRegionSearchComp::addRecycleProgress(
        PlayerRegionSearchComp *const this,
        uint32_t region_id,
        uint32_t progress_add)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 result; // rax
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rax
  _DWORD *v12; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::pointer v13; // rax
  RegionSearchPlay *v14; // rax
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  const std::set<unsigned int> *play_set_ptr; // [rsp+30h] [rbp-E0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
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
  *(_QWORD *)(v3 + 8) = "4 32 4 11 play_id:219 48 4 13 region_id:210 64 8 8 iter:221 96 16 12 play_ptr:226";
  *(_QWORD *)(v3 + 16) = PlayerRegionSearchComp::addRecycleProgress;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = region_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 96));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
  play_set_ptr = RegionSearchExcelConfigMgr::findPlaySetByRegion(
                   &v6->design_config.txt_config_mgr.region_search_config_mgr,
                   *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 96));
  if ( play_set_ptr )
  {
    __for_range = play_set_ptr;
    __for_begin._M_node = std::set<unsigned int>::begin(play_set_ptr)._M_node;
    __for_end._M_node = std::set<unsigned int>::end(play_set_ptr)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v11);
      }
      *(_DWORD *)(v3 + 32) = *v12;
      *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                                                                                           &this->play_map_,
                                                                                           (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v3 + 32));
      __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
      if ( !std::operator==(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self *)(v3 + 64),
              &__y) )
      {
        v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > > *const)(v3 + 64));
        std::shared_ptr<RegionSearchPlay>::shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96), &v13->second);
        if ( !std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v3 + 96)) )
        {
          v14 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
          RegionSearchPlay::addRecycleProgress(v14, *(_DWORD *)(v3 + 48), progress_add);
        }
        std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96));
      }
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
    }
    result = 0LL;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/player_region_search_comp.cpp",
      "addRecycleProgress",
      216);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v21, (const char (*)[11])"region_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
           v8,
           (const char (*)[27])" get play set failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v3 + 32) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v21);
    result = 0xFFFFFFFFLL;
  }
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

// Line 237: range 0000000015C9353C-0000000015C93A54
int32_t __cdecl PlayerRegionSearchComp::onSearchRegionChange(
        PlayerRegionSearchComp *const this,
        const proto::RegionSearchChangeRegionNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerSceneComp *SceneComp; // rax
  int32_t result; // eax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::_Rb_tree_const_iterator<unsigned int>::reference v11; // rax
  _DWORD *v12; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::pointer v13; // rax
  RegionSearchPlay *v14; // rax
  unsigned __int64 v15; // rax
  bool need_notify; // [rsp+17h] [rbp-F9h]
  std::set<unsigned int>::iterator __for_begin; // [rsp+18h] [rbp-F8h] BYREF
  std::set<unsigned int>::iterator __for_end; // [rsp+20h] [rbp-F0h] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  const std::set<unsigned int> *play_set_ptr; // [rsp+30h] [rbp-E0h]
  const std::set<unsigned int> *__for_range; // [rsp+38h] [rbp-D8h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-D0h] BYREF
  char v23[176]; // [rsp+60h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 13 region_id:243 48 4 11 play_id:250 64 8 8 iter:252 96 16 12 play_ptr:257";
  *(_QWORD *)(v2 + 16) = PlayerRegionSearchComp::onSearchRegionChange;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
  {
    result = 0;
  }
  else
  {
    need_notify = 0;
    *(_DWORD *)(v2 + 32) = proto::RegionSearchChangeRegionNotify::region_id(notify);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)(v2 + 96));
    v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    play_set_ptr = RegionSearchExcelConfigMgr::findPlaySetByRegion(
                     &v7->design_config.txt_config_mgr.region_search_config_mgr,
                     *(_DWORD *)(v2 + 32));
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 96));
    if ( play_set_ptr )
    {
      __for_range = play_set_ptr;
      __for_begin._M_node = std::set<unsigned int>::begin(play_set_ptr)._M_node;
      __for_end._M_node = std::set<unsigned int>::end(play_set_ptr)._M_node;
      while ( std::operator!=(&__for_begin, &__for_end) )
      {
        v11 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin);
        v12 = v11;
        if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v11);
        }
        *(_DWORD *)(v2 + 48) = *v12;
        *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                                                                                             &this->play_map_,
                                                                                             (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v2 + 48));
        __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
        if ( !std::operator==(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self *)(v2 + 64),
                &__y) )
        {
          v13 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > > *const)(v2 + 64));
          std::shared_ptr<RegionSearchPlay>::shared_ptr(
            (std::shared_ptr<RegionSearchPlay> *const)(v2 + 96),
            &v13->second);
          if ( !std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v2 + 96)) )
          {
            v14 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            need_notify = (need_notify | RegionSearchPlay::onEnterRegion(v14, *(_DWORD *)(v2 + 32))) != 0;
          }
          std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v2 + 96));
        }
        std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin);
      }
      PlayerRegionSearchComp::refreshAbilityGroup(this);
      if ( need_notify )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v15 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
        if ( *(_BYTE *)((v15 >> 3) + 0x7FFF8000) )
          v15 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
        (*(void (__fastcall **)(PlayerRegionSearchComp *const))v15)(this);
      }
      result = 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/region_search/player_region_search_comp.cpp",
        "onSearchRegionChange",
        247);
      v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v22, (const char (*)[11])"region_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 32));
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v9,
              (const char (*)[27])" get play set failed, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      *(_DWORD *)(v2 + 48) = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v22);
      result = -1;
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
  return result;
};

// Line 275: range 0000000015C93B4C-0000000015C93DF0
void __cdecl PlayerRegionSearchComp::refreshAbilityGroup(PlayerRegionSearchComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r13
  common::milog::MiLogStream *v4; // r14
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // r14
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-90h] BYREF
  char v9[112]; // [rsp+40h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 13 world_ptr:276";
  *(_QWORD *)(v1 + 16) = PlayerRegionSearchComp::refreshAbilityGroup;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Player::getSceneComp(this->player_);
  PlayerSceneComp::getMyPlayerWorld((const PlayerSceneComp *const)(v1 + 32));
  if ( std::operator==<PlayerWorld>(0LL, (const std::shared_ptr<PlayerWorld> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/region_search/player_region_search_comp.cpp",
      "refreshAbilityGroup",
      279);
    v4 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v8, (const char (*)[24])off_259C7380);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
  else
  {
    v5 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( World::getPlayerCount(v5) )
    {
      v6 = std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<PlayerWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
      std::function<ForeachPolicy ()(Player &)>::function<PlayerRegionSearchComp::refreshAbilityGroup(void)::{lambda(Player &)#1},void,void>(
        (std::function<ForeachPolicy(Player&)> *const)&v8,
        (PlayerRegionSearchComp::refreshAbilityGroup::<lambda(Player&)>)this);
      World::foreachPlayer(v6, (std::function<ForeachPolicy(Player&)> *)&v8);
      std::function<ForeachPolicy ()(Player &)>::~function((std::function<ForeachPolicy(Player&)> *const)&v8);
    }
  }
  std::shared_ptr<PlayerWorld>::~shared_ptr((std::shared_ptr<PlayerWorld> *const)(v1 + 32));
  if ( v9 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 286: range 0000000015C93A56-0000000015C93B4A
ForeachPolicy __cdecl PlayerRegionSearchComp::refreshAbilityGroup(void)::{lambda(Player &)#1}::operator()(
        const PlayerRegionSearchComp::refreshAbilityGroup::<lambda(Player&)> *const __closure,
        Player *player)
{
  RegionSearchPlay *v2; // rdx
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  __for_range = &__closure->__this->play_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    if ( !std::operator==<RegionSearchPlay>(0LL, play_ptr) )
    {
      v2 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      RegionSearchPlay::refreshAbilityGroup(v2, player);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 301: range 0000000015C93DF2-0000000015C93FE8
__int64 __fastcall PlayerRegionSearchComp::isRegionSearchFinish(
        const PlayerRegionSearchComp *const this,
        uint32_t play_id,
        uint32_t search_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  unsigned int v6; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::pointer v7; // rax
  std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  unsigned int v9; // eax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  char v13[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 play_id:300 64 8 8 iter:302 96 16 12 play_ptr:307";
  *(_QWORD *)(v3 + 16) = PlayerRegionSearchComp::isRegionSearchFinish;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = play_id;
  *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                                                                                             &this->play_map_,
                                                                                             (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = 0;
  }
  else
  {
    v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > > *const)(v3 + 64));
    std::shared_ptr<RegionSearchPlay>::shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96), &v7->second);
    if ( std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v3 + 96)) )
    {
      v6 = 0;
    }
    else
    {
      v8 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      LOBYTE(v9) = RegionSearchPlay::isSearchFinish(v8, search_id);
      v6 = v9;
    }
    std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96));
  }
  result = v6;
  if ( v13 == (char *)v3 )
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

// Line 316: range 0000000015C93FEA-0000000015C941CF
__int64 __fastcall PlayerRegionSearchComp::isPlayFinish(const PlayerRegionSearchComp *const this, uint32_t play_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned int v5; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::pointer v6; // rax
  std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  unsigned int v8; // eax
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+18h] [rbp-B8h] BYREF
  char v11[176]; // [rsp+20h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 11 play_id:315 64 8 8 iter:317 96 16 12 play_ptr:322";
  *(_QWORD *)(v2 + 16) = PlayerRegionSearchComp::isPlayFinish;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202178560;
  *(_DWORD *)(v2 + 48) = play_id;
  *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::const_iterator *)(v2 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                                                                                             &this->play_map_,
                                                                                             (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v2 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self *)(v2 + 64),
         &__y) )
  {
    v5 = 0;
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > > *const)(v2 + 64));
    std::shared_ptr<RegionSearchPlay>::shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v2 + 96), &v6->second);
    if ( std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v2 + 96)) )
    {
      v5 = 0;
    }
    else
    {
      v7 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      LOBYTE(v8) = RegionSearchPlay::isFinish(v7);
      v5 = v8;
    }
    std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v2 + 96));
  }
  result = v5;
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

// Line 331: range 0000000015C941D0-0000000015C94544
void __cdecl PlayerRegionSearchComp::onTakeRegionSearchReward(
        PlayerRegionSearchComp *const this,
        const proto::TakeRegionSearchRewardReq *req,
        proto::TakeRegionSearchRewardRsp *rsp_0)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::pointer v8; // rax
  RegionSearchPlay *v9; // rax
  unsigned __int64 v10; // rax
  uint32_t search_id; // [rsp+20h] [rbp-E0h]
  int32_t ret; // [rsp+24h] [rbp-DCh]
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-D0h] BYREF
  char v16[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 play_id:333 64 8 8 iter:337 96 16 12 play_ptr:343";
  *(_QWORD *)(v3 + 16) = PlayerRegionSearchComp::onTakeRegionSearchReward;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  proto::TakeRegionSearchRewardRsp::set_retcode(rsp_0, -1);
  *(_DWORD *)(v3 + 48) = proto::TakeRegionSearchRewardReq::id(req);
  search_id = proto::TakeRegionSearchRewardReq::search_id(req);
  proto::TakeRegionSearchRewardRsp::set_id(rsp_0, *(_DWORD *)(v3 + 48));
  proto::TakeRegionSearchRewardRsp::set_search_id(rsp_0, search_id);
  *(std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::find(
                                                                                       &this->play_map_,
                                                                                       (const std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/region_search/player_region_search_comp.cpp",
      "onTakeRegionSearchReward",
      340);
    v6 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v15, (const char (*)[9])"play_id:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" not found");
    common::milog::MiLogStream::~MiLogStream(&v15);
  }
  else
  {
    v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > > *const)(v3 + 64));
    std::shared_ptr<RegionSearchPlay>::shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96), &v8->second);
    if ( !std::operator==<RegionSearchPlay>(0LL, (const std::shared_ptr<RegionSearchPlay> *)(v3 + 96)) )
    {
      v9 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
      ret = RegionSearchPlay::takeSearchReward(v9, search_id);
      proto::TakeRegionSearchRewardRsp::set_retcode(rsp_0, ret);
      if ( !ret )
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v10 = (unsigned __int64)(this->_vptr_PlayerCompBase + 10);
        if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
          v10 = __asan_report_load8(this->_vptr_PlayerCompBase + 10);
        (*(void (__fastcall **)(PlayerRegionSearchComp *const))v10)(this);
      }
    }
    std::shared_ptr<RegionSearchPlay>::~shared_ptr((std::shared_ptr<RegionSearchPlay> *const)(v3 + 96));
  }
  if ( v16 == (char *)v3 )
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

// Line 357: range 0000000015C94546-0000000015C94614
bool __cdecl PlayerRegionSearchComp::hasOngoingPlay(PlayerRegionSearchComp *const this)
{
  std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<RegionSearchPlay>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay> > >::type *play_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->play_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::begin(&this->play_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<RegionSearchPlay>>::end(&this->play_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    play_ptr = std::get<1ul,unsigned int const,std::shared_ptr<RegionSearchPlay>>(__in);
    if ( !std::operator==<RegionSearchPlay>(0LL, play_ptr) )
    {
      v1 = std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<RegionSearchPlay,(__gnu_cxx::_Lock_policy)2,false,false> *const)play_ptr);
      if ( !RegionSearchPlay::isFinish(v1) )
        return 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<RegionSearchPlay>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 373: range 0000000015C94616-0000000015C94705
void __cdecl PlayerRegionSearchComp::tryStartTimer(PlayerRegionSearchComp *const this)
{
  common::milog::MiLogStream v1; // [rsp+10h] [rbp-30h] BYREF

  if ( PlayerRegionSearchComp::hasOngoingPlay(this) )
  {
    if ( common::tools::MiTimer::isActive(&this->play_timer_) )
      common::tools::MiTimer::cancel(&this->play_timer_);
    if ( PlayerUnixTimer::startS(
           &this->play_timer_,
           3u,
           0,
           "./src/player/region_search/player_region_search_comp.cpp",
           "tryStartTimer",
           384) )
    {
      common::milog::MiLogStream::create(
        &v1,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/region_search/player_region_search_comp.cpp",
        "tryStartTimer",
        386);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        &v1,
        (const char (*)[35])"[REGION_SEARCH] start timer failed");
      common::milog::MiLogStream::~MiLogStream(&v1);
    }
  }
};

// Line 393: range 0000000015C94706-0000000015C94730
void __cdecl PlayerRegionSearchComp::onTimer(PlayerRegionSearchComp *const this, uint64_t a2)
{
  PlayerRegionSearchComp::refreshAbilityGroup(this);
  PlayerRegionSearchComp::tryStartTimer(this);
};
