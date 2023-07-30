// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/buff/buff_comp.cpp

// Line 23: range 0000000015555480-000000001555560C
int32_t __cdecl BuffComp::tryRecoverAllBuff(BuffComp *const this)
{
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  Buff *v3; // rax
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  uint64_t player_time_ms; // [rsp+28h] [rbp-28h]
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Buff> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-8h]

  if ( *(char *)(((unsigned __int64)&this->is_buff_recovered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_buff_recovered_);
  if ( this->is_buff_recovered_ )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  player_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(__in);
    buff_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(__in);
    v2 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
    if ( !Buff::isFromTeam(v2) )
    {
      v3 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      Buff::recover(v3, player_time_ms);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_buff_recovered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_buff_recovered_);
  this->is_buff_recovered_ = 1;
  return 0;
};

// Line 42: range 000000001555560E-0000000015555751
int32_t __cdecl BuffComp::onDisconnect(BuffComp *const this)
{
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  Buff *v2; // rax
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+18h] [rbp-38h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+20h] [rbp-30h] BYREF
  uint64_t player_time_ms; // [rsp+28h] [rbp-28h]
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+30h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<Buff> > *__in; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  player_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(__in);
    buff_ptr = std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(__in);
    v1 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
    if ( !Buff::isFromTeam(v1) )
    {
      v2 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      Buff::pause(v2, player_time_ms);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)&this->is_buff_recovered_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_buff_recovered_);
  this->is_buff_recovered_ = 0;
  return 0;
};

// Line 57: range 0000000015555752-0000000015556120
int32_t __cdecl BuffComp::fromBin(BuffComp *const this, const proto::AvatarBin *bin)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  Buff *v6; // rax
  common::milog::MiLogStream *v7; // rax
  Buff *v8; // rax
  common::milog::MiLogStream *v9; // rax
  bool v10; // r14
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rcx
  int32_t result; // eax
  common::milog::MiLogStream *v14; // rax
  Buff *v15; // rax
  common::milog::MiLogStream *v16; // rax
  Buff *v17; // rax
  common::milog::MiLogStream *v18; // rax
  bool v19; // r14
  common::milog::MiLogStream *v20; // rcx
  bool is_has_old_buffbin; // [rsp+1Fh] [rbp-141h]
  google::protobuf::RepeatedPtrField<proto::AvatarBuffBin>::const_iterator __for_begin_0; // [rsp+20h] [rbp-140h] BYREF
  google::protobuf::RepeatedPtrField<proto::AvatarBuffBin>::const_iterator __for_end_0; // [rsp+28h] [rbp-138h] BYREF
  const google::protobuf::Map<unsigned int,proto::AvatarBuffBin> *buff_map; // [rsp+30h] [rbp-130h]
  const google::protobuf::Map<unsigned int,proto::AvatarBuffBin> *__for_range; // [rsp+38h] [rbp-128h]
  const google::protobuf::RepeatedPtrField<proto::AvatarBuffBin> *buff_list; // [rsp+40h] [rbp-120h]
  const google::protobuf::RepeatedPtrField<proto::AvatarBuffBin> *__for_range_0; // [rsp+48h] [rbp-118h]
  const proto::AvatarBuffBin *buff_bin; // [rsp+50h] [rbp-110h]
  const unsigned int *p_buff_id; // [rsp+58h] [rbp-108h]
  std::shared_ptr<Buff> p_buff_ptr; // [rsp+60h] [rbp-100h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarBuffBin>::const_iterator __for_begin; // [rsp+70h] [rbp-F0h] BYREF
  google::protobuf::Map<unsigned int,proto::AvatarBuffBin>::const_iterator __for_end; // [rsp+90h] [rbp-D0h] BYREF
  common::milog::MiLogStream v33; // [rsp+B0h] [rbp-B0h] BYREF
  char v34[144]; // [rsp+D0h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 buff_id:96 64 16 11 buff_ptr:97";
  *(_QWORD *)(v2 + 16) = BuffComp::fromBin;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202178560;
  std::multimap<unsigned int,std::shared_ptr<Buff>>::clear(&this->buff_mmap_);
  buff_map = proto::AvatarBin::buff_map(bin);
  is_has_old_buffbin = 0;
  __for_range = buff_map;
  google::protobuf::Map<unsigned int,proto::AvatarBuffBin>::begin(&__for_begin, buff_map);
  google::protobuf::Map<unsigned int,proto::AvatarBuffBin>::end(&__for_end, buff_map);
  while ( google::protobuf::operator!=(&__for_begin, &__for_end) )
  {
    p_buff_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::AvatarBuffBin>::const_iterator::operator*(&__for_begin);
    is_has_old_buffbin = 1;
    common::tools::perf::make_shared<Buff,unsigned int const&>((const unsigned int *)(v2 + 64), p_buff_id);
    if ( std::operator==<Buff>((const std::shared_ptr<Buff> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/buff_comp.cpp",
        "fromBin",
        68);
      v5 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v33,
             (const char (*)[27])"buff_ptr is null, buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, p_buff_id);
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      v6 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( Buff::init(v6) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/buff_comp.cpp",
          "fromBin",
          73);
        v7 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v33,
               (const char (*)[25])"buff init fail, buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, p_buff_id);
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        v8 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( Buff::fromBin(v8, (const proto::AvatarBuffBin *)(p_buff_id + 2)) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "fromBin",
            78);
          v9 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                 &v33,
                 (const char (*)[24])"fromBin fails, buff_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, p_buff_id);
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          std::shared_ptr<Buff>::shared_ptr(&p_buff_ptr, (const std::shared_ptr<Buff> *)(v2 + 64));
          v10 = BuffComp::internalAddBuff(this, &p_buff_ptr) != 0;
          std::shared_ptr<Buff>::~shared_ptr(&p_buff_ptr);
          if ( v10 )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/buff/buff_comp.cpp",
              "fromBin",
              83);
            v11 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v33,
                    (const char (*)[30])"internalAddBuff fail. avatar:");
            if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->avatar_);
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v11, this->avatar_);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
        }
      }
    }
    std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 64));
    google::protobuf::Map<unsigned int,proto::AvatarBuffBin>::const_iterator::operator++(&__for_begin);
  }
  buff_list = proto::AvatarBin::buff_list(bin);
  __for_range_0 = buff_list;
  __for_begin_0.it_ = google::protobuf::RepeatedPtrField<proto::AvatarBuffBin>::begin(buff_list).it_;
  __for_end_0.it_ = google::protobuf::RepeatedPtrField<proto::AvatarBuffBin>::end(buff_list).it_;
  while ( 1 )
  {
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::AvatarBuffBin const>::operator!=(
            &__for_begin_0,
            &__for_end_0) )
    {
      result = 0;
      goto LABEL_35;
    }
    buff_bin = google::protobuf::internal::RepeatedPtrIterator<proto::AvatarBuffBin const>::operator*(&__for_begin_0);
    if ( is_has_old_buffbin )
      break;
    *(_DWORD *)(v2 + 48) = proto::AvatarBuffBin::buff_id(buff_bin);
    common::tools::perf::make_shared<Buff,unsigned int &>((unsigned int *)(v2 + 64), (unsigned int *)(v2 + 48));
    if ( std::operator==<Buff>((const std::shared_ptr<Buff> *)(v2 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v33,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/buff_comp.cpp",
        "fromBin",
        100);
      v14 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v33,
              (const char (*)[27])"buff_ptr is null, buff_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v33);
    }
    else
    {
      v15 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( Buff::init(v15) )
      {
        common::milog::MiLogStream::create(
          &v33,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/buff_comp.cpp",
          "fromBin",
          105);
        v16 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v33,
                (const char (*)[25])"buff init fail, buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream(&v33);
      }
      else
      {
        v17 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        if ( Buff::fromBin(v17, buff_bin) )
        {
          common::milog::MiLogStream::create(
            &v33,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "fromBin",
            110);
          v18 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  &v33,
                  (const char (*)[24])"fromBin fails, buff_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v2 + 48));
          common::milog::MiLogStream::~MiLogStream(&v33);
        }
        else
        {
          std::shared_ptr<Buff>::shared_ptr(&p_buff_ptr, (const std::shared_ptr<Buff> *)(v2 + 64));
          v19 = BuffComp::internalAddBuff(this, &p_buff_ptr) != 0;
          std::shared_ptr<Buff>::~shared_ptr(&p_buff_ptr);
          if ( v19 )
          {
            common::milog::MiLogStream::create(
              &v33,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/buff/buff_comp.cpp",
              "fromBin",
              115);
            v20 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                    &v33,
                    (const char (*)[30])"internalAddBuff fail. avatar:");
            if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->avatar_);
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
            common::milog::MiLogStream::~MiLogStream(&v33);
          }
        }
      }
    }
    std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 64));
    google::protobuf::internal::RepeatedPtrIterator<proto::AvatarBuffBin const>::operator++(&__for_begin_0);
  }
  common::milog::MiLogStream::create(
    &v33,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/buff/buff_comp.cpp",
    "fromBin",
    93);
  v12 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(&v33, (const char (*)[38])off_257F78C0);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v12, this->avatar_);
  common::milog::MiLogStream::~MiLogStream(&v33);
  result = -1;
LABEL_35:
  if ( v34 == (char *)v2 )
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

// Line 124: range 0000000015556122-000000001555633B
int32_t __cdecl BuffComp::toBin(const BuffComp *const this, proto::AvatarBin *bin)
{
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+10h] [rbp-70h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+18h] [rbp-68h] BYREF
  uint64_t player_time_ms; // [rsp+20h] [rbp-60h]
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v13; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+40h] [rbp-40h]
  proto::AvatarBuffBin *buff_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v17; // [rsp+50h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  player_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v13);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v13);
    if ( !std::operator==<Buff>(buff_ptr, 0LL) )
    {
      v2 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      if ( Buff::getIsPersistent(v2) )
      {
        v3 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
        if ( !Buff::isExpired(v3, player_time_ms) )
        {
          v4 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
          if ( !Buff::isFromTeam(v4) )
          {
            buff_bin = proto::AvatarBin::add_buff_list(bin);
            v6 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
            if ( Buff::toBin(v6, player_time_ms, buff_bin) )
            {
              common::milog::MiLogStream::create(
                &v17,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/buff/buff_comp.cpp",
                "toBin",
                135);
              v7 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                     &v17,
                     (const char (*)[22])"toBin fails, buff_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, buff_id);
              common::milog::MiLogStream::~MiLogStream(&v17);
              return -1;
            }
          }
        }
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 144: range 000000001555633C-000000001555634E
int32_t __cdecl BuffComp::toSnapshot(const BuffComp *const this, proto::AvatarSnapshotBin *a2)
{
  return 0;
};

// Line 150: range 0000000015556350-0000000015556384
int32_t __cdecl BuffComp::toClient(const BuffComp *const this, proto::SceneAvatarInfo *avatar_info)
{
  google::protobuf::RepeatedPtrField<proto::ServerBuff> *v2; // rdx

  v2 = proto::SceneAvatarInfo::mutable_server_buff_list(avatar_info);
  return BuffComp::toClient(this, v2);
};

// Line 157: range 0000000015556386-000000001555656F
int32_t __cdecl BuffComp::toClient(const BuffComp *const this, ProtoServerBuffList *server_buff_list)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rbx
  proto::ServerBuff *v6; // r12
  uint64_t Guid; // rax
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+10h] [rbp-60h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+18h] [rbp-58h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+20h] [rbp-50h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v12; // [rsp+28h] [rbp-48h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+30h] [rbp-40h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+38h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+40h] [rbp-30h] BYREF

  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v12);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v12);
    if ( std::operator==<Buff>(0LL, buff_ptr) )
    {
      common::milog::MiLogStream::create(
        &v15,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/buff_comp.cpp",
        "toClient",
        162);
      v2 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v15,
             (const char (*)[27])"buff_ptr is null, buff_id:");
      v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, buff_id);
      v4 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v3, (const char (*)[9])" avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->avatar_);
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v4, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v15);
    }
    else
    {
      v5 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      v6 = google::protobuf::RepeatedPtrField<proto::ServerBuff>::Add(server_buff_list);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->avatar_);
      Guid = Avatar::getGuid(this->avatar_);
      Buff::toClient(v5, Guid, v6);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 172: range 0000000015556570-000000001555663F
bool __fastcall BuffComp::isHasBuff(const BuffComp *const this, uint32_t buff_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 buff_id:171";
  *(_QWORD *)(v2 + 16) = BuffComp::isHasBuff;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = buff_id;
  result = common::tools::MiscUtils::isContains<std::multimap<unsigned int,std::shared_ptr<Buff>> const,unsigned int>(
             &this->buff_mmap_,
             (const unsigned int *)(v2 + 32));
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

// Line 178: range 0000000015556640-0000000015556805
__int64 __fastcall BuffComp::isHasBuff(const BuffComp *const this, uint32_t buff_id, uint32_t buff_uid)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v7; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  __int64 result; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 11 buff_id:177 64 8 8 iter:180 96 16 13 iter_pair:179";
  *(_QWORD *)(v3 + 16) = BuffComp::isHasBuff;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = buff_id;
  *(std::pair<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >,std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > > *)(v3 + 96) = std::multimap<unsigned int,std::shared_ptr<Buff>>::equal_range(&this->buff_mmap_, (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v3 + 48));
  *(_QWORD *)(v3 + 64) = *(_QWORD *)(v3 + 96);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v3 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v3 + 104)) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
    if ( std::operator!=<Buff>(0LL, &v6->second) )
    {
      v7 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
      v8 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v7->second);
      if ( buff_uid == Buff::getBuffUid(v8) )
      {
        result = 1LL;
        goto LABEL_14;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
  }
  result = 0LL;
LABEL_14:
  if ( v12 == (char *)v3 )
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

// Line 192: range 0000000015556806-0000000015557590
__int64 __fastcall BuffComp::addBuff(BuffComp *const this, uint32_t buff_id, uint32_t buff_time)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  Avatar *avatar; // rdx
  Avatar *v7; // rax
  unsigned __int64 v8; // rax
  common::milog::MiLogStream *v9; // rcx
  unsigned int v10; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  data::BuffStackType stack_type; // eax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v17; // rax
  Buff *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rcx
  common::milog::MiLogStream *v21; // rax
  uint32_t v22; // edx
  Buff *v23; // rax
  common::milog::MiLogStream *v24; // rax
  Buff *v25; // r14
  Player *v26; // rax
  PlayerAvatarComp *AvatarComp; // rax
  uint32_t NextServerBuffUid; // eax
  Buff *v29; // rcx
  Buff *v30; // r14
  uint64_t Guid; // rax
  Buff *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rcx
  bool v35; // r14
  common::milog::MiLogStream *v36; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self __y; // [rsp+18h] [rbp-128h] BYREF
  const data::BuffExcelConfig *buff_config_ptr; // [rsp+20h] [rbp-120h]
  uint64_t player_time_ms; // [rsp+28h] [rbp-118h]
  common::milog::MiLogStream v42; // [rsp+30h] [rbp-110h] BYREF
  char v43[240]; // [rsp+50h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v43;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 11 buff_id:191 64 8 6 it:234 96 16 14 player_ptr:193 128 16 12 buff_ptr:261 160 16 12 buff_ptr:237";
  *(_QWORD *)(v3 + 16) = BuffComp::addBuff;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -219021312;
  v5[536862724] = -219021312;
  v5[536862725] = -202178560;
  *(_DWORD *)(v3 + 48) = buff_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  avatar = this->avatar_;
  v7 = avatar;
  if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
    v7 = (Avatar *)__asan_report_load8(this->avatar_);
  v8 = *(_QWORD *)v7->baseclass_0 + 152LL;
  if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
    v8 = __asan_report_load8(v8);
  (*(void (__fastcall **)(unsigned __int64, Avatar *))v8)(v3 + 96, avatar);
  if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v3 + 96)) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff_comp.cpp",
      "addBuff",
      196);
    v9 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v42,
           (const char (*)[25])"getPlayer fail, avatar_:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v9, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v10 = -1;
    goto LABEL_67;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 160));
  v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  buff_config_ptr = data::BuffExcelConfigMgrBase::findBuffExcelConfig(
                      &v11->design_config.txt_config_mgr.buff_config_mgr,
                      *(_DWORD *)(v3 + 48));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 160));
  if ( !buff_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff_comp.cpp",
      "addBuff",
      202);
    v12 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            &v42,
            (const char (*)[36])"findBuffExcelConfig fails, buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v42);
    v10 = -1;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->server_buff_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)buff_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->server_buff_type >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&buff_config_ptr->server_buff_type);
  }
  if ( buff_config_ptr->server_buff_type != SERVER_BUFF_AVATAR )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/buff/buff_comp.cpp",
      "addBuff",
      207);
    v13 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            &v42,
            (const char (*)[26])"invalid server_buff_type:");
    v14 = common::milog::MiLogStream::operator<<<data::ServerBuffType,(data::ServerBuffType*)0>(
            v13,
            &buff_config_ptr->server_buff_type);
    v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])", buff_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v42);
    v10 = -1;
    goto LABEL_67;
  }
  if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)buff_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3)
                                                                   + 0x7FFF8000) )
  {
    __asan_report_load4(&buff_config_ptr->time);
  }
  if ( buff_config_ptr->time >= 0.0 )
  {
    if ( !buff_time )
    {
      if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)buff_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->time >> 3)
                                                                       + 0x7FFF8000) )
      {
        __asan_report_load4(&buff_config_ptr->time);
      }
      buff_time = (int)(float)(1000.0 * buff_config_ptr->time);
    }
  }
  else
  {
    buff_time = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  player_time_ms = Avatar::getPlayerTimeMs(this->avatar_);
  if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->stack_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->stack_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&buff_config_ptr->stack_type);
  }
  stack_type = buff_config_ptr->stack_type;
  if ( stack_type == BUFF_STACK )
  {
LABEL_47:
    v22 = *(_DWORD *)(v3 + 48);
    if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&buff_config_ptr->group_id);
    }
    BuffComp::delAllBuffByGroupId(this, buff_config_ptr->group_id, v22);
    common::tools::perf::make_shared<Buff,unsigned int &>((unsigned int *)(v3 + 128), (unsigned int *)(v3 + 48));
    if ( std::operator==<Buff>((const std::shared_ptr<Buff> *)(v3 + 128), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v42,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/buff_comp.cpp",
        "addBuff",
        264);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(&v42, (const char (*)[17])"buff_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v42);
      v10 = -1;
    }
    else
    {
      v23 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
      if ( Buff::init(v23) )
      {
        common::milog::MiLogStream::create(
          &v42,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/buff_comp.cpp",
          "addBuff",
          269);
        v24 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                &v42,
                (const char (*)[25])"buff init fail, buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream(&v42);
        v10 = -1;
      }
      else
      {
        v25 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        v26 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
        AvatarComp = Player::getAvatarComp(v26);
        NextServerBuffUid = PlayerAvatarComp::getNextServerBuffUid(AvatarComp);
        Buff::setBuffUid(v25, NextServerBuffUid);
        v29 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->server_buff_type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)buff_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&buff_config_ptr->server_buff_type >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&buff_config_ptr->server_buff_type);
        }
        Buff::setBuffType(v29, buff_config_ptr->server_buff_type);
        v30 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->avatar_);
        Guid = Avatar::getGuid(this->avatar_);
        Buff::addOnAddedAvatar(v30, Guid);
        v32 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 128));
        if ( (unsigned int)Buff::start(v32, buff_time, player_time_ms) )
        {
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "addBuff",
            277);
          v33 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                  &v42,
                  (const char (*)[22])"start fails, buff_id:");
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v33,
                  (const unsigned int *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->avatar_);
        }
        else
        {
          std::shared_ptr<Buff>::shared_ptr(
            (std::shared_ptr<Buff> *const)(v3 + 160),
            (const std::shared_ptr<Buff> *)(v3 + 128));
          v35 = BuffComp::addBuff(this, (BuffPtr *)(v3 + 160)) != 0;
          std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v3 + 160));
          if ( !v35 )
          {
            BuffComp::onMsTimer(this, player_time_ms);
            v10 = 0;
            goto LABEL_66;
          }
          common::milog::MiLogStream::create(
            &v42,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "addBuff",
            282);
          v36 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(&v42, (const char (*)[25])off_257F7CC0);
          v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v36,
                  (const unsigned int *)(v3 + 48));
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->avatar_);
        }
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v34, this->avatar_);
        common::milog::MiLogStream::~MiLogStream(&v42);
        v10 = -1;
      }
    }
LABEL_66:
    std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v3 + 128));
    goto LABEL_67;
  }
  if ( stack_type > BUFF_STACK )
  {
LABEL_46:
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff_comp.cpp",
      "addBuff",
      254);
    v21 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            &v42,
            (const char (*)[24])"unsupported stack_type:");
    common::milog::MiLogStream::operator<<<data::BuffStackType,(data::BuffStackType*)0>(
      v21,
      &buff_config_ptr->stack_type);
    common::milog::MiLogStream::~MiLogStream(&v42);
    goto LABEL_47;
  }
  if ( stack_type == BUFF_REFRESH )
  {
    if ( BuffComp::isHasBuff(this, *(_DWORD *)(v3 + 48)) )
      BuffComp::delBuff(this, *(_DWORD *)(v3 + 48));
    goto LABEL_47;
  }
  if ( stack_type != BUFF_EXTEND )
    goto LABEL_46;
  *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v3 + 64) = std::multimap<unsigned int,std::shared_ptr<Buff>>::find(
                                                                                &this->buff_mmap_,
                                                                                (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v3 + 48));
  __y._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  if ( !std::operator!=(
          (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v3 + 64),
          &__y) )
    goto LABEL_47;
  v17 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v3 + 64));
  std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)(v3 + 160), &v17->second);
  v18 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 160));
  if ( Buff::extend(v18, buff_time) )
  {
    common::milog::MiLogStream::create(
      &v42,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff_comp.cpp",
      "addBuff",
      240);
    v19 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            &v42,
            (const char (*)[27])"extendTime fails, buff_id:");
    v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v3 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v20, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v42);
    v10 = -1;
  }
  else
  {
    v10 = 0;
  }
  std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v3 + 160));
LABEL_67:
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 96));
  result = v10;
  if ( v43 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 291: range 0000000015557592-0000000015557847
int32_t __cdecl BuffComp::addBuff(BuffComp *const this, BuffPtr *p_buff_ptr)
{
  common::milog::MiLogStream *v2; // rcx
  bool v4; // bl
  common::milog::MiLogStream *v5; // rcx
  common::milog::MiLogStream *v6; // rbx
  Buff *v7; // rdx
  unsigned __int64 val; // [rsp+18h] [rbp-48h] BYREF
  std::shared_ptr<Buff> v9; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v10; // [rsp+30h] [rbp-30h] BYREF

  if ( std::operator==<Buff>(p_buff_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff_comp.cpp",
      "addBuff",
      294);
    v2 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v10,
           (const char (*)[29])"buff_ptr is nullptr, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v2, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
  else
  {
    std::shared_ptr<Buff>::shared_ptr(&v9, p_buff_ptr);
    v4 = BuffComp::internalAddBuff(this, &v9) != 0;
    std::shared_ptr<Buff>::~shared_ptr(&v9);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/buff_comp.cpp",
        "addBuff",
        299);
      v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             &v10,
             (const char (*)[30])"internalAddBuff fail. avatar:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->avatar_);
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/buff/buff_comp.cpp",
        "addBuff",
        302);
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v10, (const char (*)[11])off_257F7D40);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->avatar_);
      val = Avatar::getGuid(this->avatar_);
      common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v10);
      v7 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
      return BuffComp::notifyBuffAdd(this, v7);
    }
  }
};

// Line 307: range 0000000015557848-000000001555867D
int32_t __cdecl BuffComp::internalAddBuff(BuffComp *const this, BuffPtr *p_buff_ptr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rcx
  int32_t v6; // r14d
  Avatar *avatar; // rdx
  Avatar *v8; // rax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rcx
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  Player *v15; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  std::shared_ptr<Buff> *v22; // r8
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rcx
  Buff *v27; // r15
  uint32_t v28; // r14d
  uint64_t Guid; // rax
  common::milog::MiLogStream *v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  __int64 v36; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v37; // rax
  uint32_t BuffId; // eax
  __int64 v39; // rax
  common::milog::MiLogStream *v40; // r14
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rcx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // r14
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rcx
  int32_t result; // eax
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+28h] [rbp-2F8h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+30h] [rbp-2F0h] BYREF
  const data::BuffExcelConfig *buff_config_ptr; // [rsp+38h] [rbp-2E8h]
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+40h] [rbp-2E0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v55; // [rsp+48h] [rbp-2D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+50h] [rbp-2D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *map_item_buff_ptr; // [rsp+58h] [rbp-2C8h]
  std::shared_ptr<Config> v58; // [rsp+60h] [rbp-2C0h] BYREF
  common::milog::MiLogStream v59; // [rsp+70h] [rbp-2B0h] BYREF
  common::milog::MiLogStream v60; // [rsp+90h] [rbp-290h] BYREF
  char v61[624]; // [rsp+B0h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v61;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 11 buff_id:319 48 4 25 instanced_modifier_id:343 64 4 14 buff_count:365 80 16 14 player_p"
                        "tr:313 112 392 6 ss:355";
  *(_QWORD *)(v2 + 16) = BuffComp::internalAddBuff;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = 61956;
  v4[536862723] = 62194;
  v4[536862735] = -218103808;
  v4[536862736] = -202116109;
  v4[536862737] = -202116109;
  if ( std::operator==<Buff>(p_buff_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v60,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff_comp.cpp",
      "internalAddBuff",
      310);
    v5 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
           &v60,
           (const char (*)[29])"buff_ptr is nullptr, avatar:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v5, this->avatar_);
    common::milog::MiLogStream::~MiLogStream(&v60);
    v6 = -1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    avatar = this->avatar_;
    v8 = avatar;
    if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
      v8 = (Avatar *)__asan_report_load8(this->avatar_);
    v9 = *(_QWORD *)v8->baseclass_0 + 152LL;
    if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
      v9 = __asan_report_load8(v9);
    (*(void (__fastcall **)(unsigned __int64, Avatar *))v9)(v2 + 80, avatar);
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v2 + 80)) )
    {
      common::milog::MiLogStream::create(
        &v60,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/buff/buff_comp.cpp",
        "internalAddBuff",
        316);
      v10 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
              &v60,
              (const char (*)[25])"getPlayer fail, avatar_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->avatar_);
      common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
      common::milog::MiLogStream::~MiLogStream(&v60);
      v6 = -1;
    }
    else
    {
      v11 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
      *(_DWORD *)(v2 + 32) = Buff::getBuffId(v11);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v58);
      v12 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v58);
      buff_config_ptr = data::BuffExcelConfigMgrBase::findBuffExcelConfig(
                          &v12->design_config.txt_config_mgr.buff_config_mgr,
                          *(_DWORD *)(v2 + 32));
      std::shared_ptr<Config>::~shared_ptr(&v58);
      if ( buff_config_ptr )
      {
        v14 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
        if ( Buff::isFromTeam(v14)
          && (v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 80)),
              AvatarComp = Player::getAvatarComp(v15),
              *(_DWORD *)(v2 + 48) = PlayerAvatarComp::getTeamBuffCount(AvatarComp, *(_DWORD *)(v2 + 32)),
              *(_DWORD *)(v2 + 64) = std::multimap<unsigned int,std::shared_ptr<Buff>>::count(
                                       &this->buff_mmap_,
                                       (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v2 + 32)),
              *(_DWORD *)(v2 + 64) >= *(_DWORD *)(v2 + 48)) )
        {
          common::milog::MiLogStream::create(
            &v60,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "internalAddBuff",
            333);
          v17 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  &v60,
                  (const char (*)[33])"buff count error.teambuff count:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v2 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v18,
                  (const char (*)[14])", buff count:");
          v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v19,
                  (const unsigned int *)(v2 + 64));
          v21 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v20, (const char (*)[11])", buff_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v2 + 32));
          common::milog::MiLogStream::~MiLogStream(&v60);
          v6 = 0;
        }
        else
        {
          __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
          __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::find(
                                  &this->buff_mmap_,
                                  (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v2 + 32))._M_node;
          if ( !std::operator!=(&__for_begin, &__for_end) )
            goto LABEL_28;
          if ( *(_BYTE *)(((unsigned __int64)&buff_config_ptr->stack_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&buff_config_ptr->stack_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&buff_config_ptr->stack_type);
          }
          if ( buff_config_ptr->stack_type == BUFF_STACK )
LABEL_28:
            v23 = 0;
          else
            v23 = 1;
          if ( v23 )
          {
            common::milog::MiLogStream::create(
              &v60,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/buff/buff_comp.cpp",
              "internalAddBuff",
              339);
            v24 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(&v60, (const char (*)[9])"buff_id:");
            v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v24,
                    (const unsigned int *)(v2 + 32));
            v26 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                    v25,
                    (const char (*)[25])" has been added, avatar:");
            if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
              __asan_report_load8(&this->avatar_);
            common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v26, this->avatar_);
            common::milog::MiLogStream::~MiLogStream(&v60);
            v6 = 0;
          }
          else
          {
            std::multimap<unsigned int,std::shared_ptr<Buff>>::emplace<unsigned int &,std::shared_ptr<Buff>&>(
              &this->buff_mmap_,
              (unsigned int *)(v2 + 32),
              p_buff_ptr,
              (unsigned int *)&this->buff_mmap_,
              v22);
            *(_DWORD *)(v2 + 48) = BuffComp::getSmallestUnusedServerModifierId(this);
            if ( *(_DWORD *)(v2 + 48) )
            {
              v27 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
              v28 = *(_DWORD *)(v2 + 48);
              if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->avatar_);
              Guid = Avatar::getGuid(this->avatar_);
              Buff::setModifierIdByAvatarGuid(v27, Guid, v28);
              common::milog::MiLogStream::create(
                &v60,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/buff/buff_comp.cpp",
                "internalAddBuff",
                351);
              v30 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
                      &v60,
                      (const char (*)[20])"internal add buff, ");
              if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                __asan_report_load8(&this->avatar_);
              __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)Avatar::getGuid(this->avatar_);
              v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                      v30,
                      (const unsigned __int64 *)&__for_end);
              v32 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                      v31,
                      (const char (*)[11])", buff_id:");
              v33 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_buff_ptr);
              *(_DWORD *)(v2 + 64) = Buff::getBuffId(v33);
              v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v32,
                      (const unsigned int *)(v2 + 64));
              v35 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                      v34,
                      (const char (*)[13])"modifier_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v35,
                (const unsigned int *)(v2 + 48));
              common::milog::MiLogStream::~MiLogStream(&v60);
              if ( std::multimap<unsigned int,std::shared_ptr<Buff>>::size(&this->buff_mmap_) > 0x14 )
              {
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 112);
                __for_range = &this->buff_mmap_;
                __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
                __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(__for_range)._M_node;
                while ( std::operator!=(&__for_begin, &__for_end) )
                {
                  v55 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
                  buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v55);
                  map_item_buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v55);
                  if ( std::operator!=<Buff>(map_item_buff_ptr, 0LL) )
                  {
                    v36 = std::operator<<<std::char_traits<char>>(v2 + 128, "buff_id:");
                    v37 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)map_item_buff_ptr);
                    BuffId = Buff::getBuffId(v37);
                    v39 = std::ostream::operator<<(v36, BuffId);
                    std::operator<<<std::char_traits<char>>(v39, "\n");
                  }
                  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
                }
                common::milog::MiLogStream::create(
                  &v59,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/buff/buff_comp.cpp",
                  "internalAddBuff",
                  363);
                v40 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
                        &v59,
                        (const char (*)[22])off_257F8080);
                __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::multimap<unsigned int,std::shared_ptr<Buff>>::size(&this->buff_mmap_);
                v41 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
                        v40,
                        (const unsigned __int64 *)&__for_end);
                v42 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v41,
                        (const char (*)[10])", avatar:");
                if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->avatar_);
                v43 = common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v42, this->avatar_);
                v44 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v43, (const char (*)[9])"\n buffs:");
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(&v60, v2 + 112);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v44, (const std::string *)&v60);
                std::string::~string(&v60);
                common::milog::MiLogStream::~MiLogStream(&v59);
                std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 112);
              }
              *(_DWORD *)(v2 + 64) = std::multimap<unsigned int,std::shared_ptr<Buff>>::count(
                                       &this->buff_mmap_,
                                       (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v2 + 32));
              if ( *(_DWORD *)(v2 + 64) > 3u )
              {
                common::milog::MiLogStream::create(
                  &v60,
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/buff/buff_comp.cpp",
                  "internalAddBuff",
                  369);
                v45 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        &v60,
                        (const char (*)[24])off_257F8140);
                v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v45,
                        (const unsigned int *)(v2 + 32));
                v47 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v46, (const char (*)[9])", count:");
                v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v2 + 64));
                v49 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(
                        v48,
                        (const char (*)[10])", avatar:");
                if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
                  __asan_report_load8(&this->avatar_);
                common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v49, this->avatar_);
                common::milog::MiLogStream::~MiLogStream(&v60);
              }
              v6 = 0;
            }
            else
            {
              common::milog::MiLogStream::create(
                &v60,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/buff/buff_comp.cpp",
                "internalAddBuff",
                346);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v60,
                (const char (*)[40])"getSmallestUnusedServerModifierId fails");
              common::milog::MiLogStream::~MiLogStream(&v60);
              v6 = -1;
            }
          }
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v60,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/buff_comp.cpp",
          "internalAddBuff",
          323);
        v13 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                &v60,
                (const char (*)[36])"findBuffExcelConfig fails, buff_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream(&v60);
        v6 = -1;
      }
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v2 + 80));
  }
  result = v6;
  if ( v61 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
  return result;
};

// Line 376: range 000000001555867E-0000000015558BB8
__int64 __fastcall BuffComp::delBuff(BuffComp *const this, uint32_t buff_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rcx
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  Buff *v18; // rax
  Buff *v19; // r14
  uint64_t Guid; // rax
  unsigned int BuffId; // [rsp+10h] [rbp-100h] BYREF
  unsigned int InstancedModifierId; // [rsp+14h] [rbp-FCh] BYREF
  unsigned __int64 val; // [rsp+18h] [rbp-F8h] BYREF
  common::milog::MiLogStream v24; // [rsp+20h] [rbp-F0h] BYREF
  char v25[208]; // [rsp+40h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 4 11 buff_id:375 64 8 8 iter:384 96 16 13 iter_pair:377 128 16 12 buff_ptr:386";
  *(_QWORD *)(v2 + 16) = BuffComp::delBuff;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  *(_DWORD *)(v2 + 48) = buff_id;
  *(std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >,std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > > *)(v2 + 96) = std::multimap<unsigned int,std::shared_ptr<Buff>>::equal_range(&this->buff_mmap_, (const std::multimap<unsigned int,std::shared_ptr<Buff>>::key_type *)(v2 + 48));
  if ( std::operator==(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 96),
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 104)) )
  {
    common::milog::MiLogStream::create(
      &v24,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/buff/buff_comp.cpp",
      "delBuff",
      380);
    v5 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v24, (const char (*)[20])off_257F8260);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream(&v24);
    result = 0LL;
  }
  else
  {
    *(_QWORD *)(v2 + 64) = *(_QWORD *)(v2 + 96);
    while ( std::operator!=(
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 64),
              (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 104)) )
    {
      v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v2 + 64));
      std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)(v2 + 128), &v7->second);
      *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 64) = std::multimap<unsigned int,std::shared_ptr<Buff>>::erase[abi:cxx11](
                                                                                    &this->buff_mmap_,
                                                                                    *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 64));
      if ( std::operator==<Buff>(0LL, (const std::shared_ptr<Buff> *)(v2 + 128)) )
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/buff/buff_comp.cpp",
          "delBuff",
          390);
        v8 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v24,
               (const char (*)[27])"buff_ptr is null, buff_id:");
        v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v2 + 48));
        v10 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v9, (const char (*)[9])" avatar:");
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->avatar_);
        common::milog::MiLogStream::operator<<<Avatar,(Avatar*)0>(v10, this->avatar_);
        common::milog::MiLogStream::~MiLogStream(&v24);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v24,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/buff/buff_comp.cpp",
          "delBuff",
          394);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v24, (const char (*)[16])off_257F82A0);
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->avatar_);
        val = Avatar::getGuid(this->avatar_);
        v12 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(v11, &val);
        v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])", buff_id:");
        v14 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        BuffId = Buff::getBuffId(v14);
        v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &BuffId);
        v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])", modifier_id:");
        v17 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        InstancedModifierId = Buff::getInstancedModifierId(v17);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &InstancedModifierId);
        common::milog::MiLogStream::~MiLogStream(&v24);
        v18 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        BuffComp::notifyBuffDel(this, v18);
        v19 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->avatar_);
        Guid = Avatar::getGuid(this->avatar_);
        Buff::setModifierIdByAvatarGuid(v19, Guid, 0);
      }
      std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 128));
    }
    result = 0LL;
  }
  if ( v25 == (char *)v2 )
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
  return result;
};

// Line 404: range 0000000015558BBA-0000000015558F03
void __cdecl BuffComp::delAllBuffByGroupId(BuffComp *const this, uint32_t group_id, uint32_t except_buff_id)
{
  std::set<unsigned int> *v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  unsigned int *v7; // rax
  uint32_t *v8; // rdx
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+28h] [rbp-C8h]
  std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v14; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-A8h]
  char v17[160]; // [rsp+50h] [rbp-A0h] BYREF

  v3 = (std::set<unsigned int> *)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = (std::set<unsigned int> *)v4;
  }
  *(_QWORD *)v3->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v3->_M_t._M_impl._M_header._M_color = "1 48 48 22 to_del_buff_id_set:410";
  v3->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BuffComp::delAllBuffByGroupId;
  v5 = (_DWORD *)((unsigned __int64)v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862723] = -202116109;
  if ( group_id )
  {
    std::set<unsigned int>::set(v3 + 1);
    __for_range = &this->buff_mmap_;
    __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
    __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v14 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
      buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v14);
      buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v14);
      if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(buff_id);
      }
      if ( except_buff_id != *buff_id )
      {
        v6 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
        if ( group_id == Buff::getGroupId(v6) )
          std::set<unsigned int>::insert(v3 + 1, buff_id);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
    }
    __for_range_0 = v3 + 1;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::begin(v3 + 1)._M_node;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
              (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
    {
      v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      v8 = v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      BuffComp::delBuff(this, *v8);
      std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    }
    std::set<unsigned int>::~set(v3 + 1);
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v3->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 430: range 0000000015558F04-000000001555913F
int32_t __cdecl BuffComp::notifyBuffAdd(BuffComp *const this, Buff *buff)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint64_t Guid; // rax
  proto::ServerBuff *v6; // r14
  uint64_t v7; // rcx
  int32_t result; // eax
  char v9[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 10 notify:431";
  *(_QWORD *)(v2 + 16) = BuffComp::notifyBuffAdd;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  proto::ServerBuffChangeNotify::ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
  proto::ServerBuffChangeNotify::set_server_buff_change_type(
    (proto::ServerBuffChangeNotify *const)(v2 + 32),
    ServerBuffChangeNotify_ServerBuffChangeType_ADD_SERVER_BUFF);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  Guid = Avatar::getGuid(this->avatar_);
  proto::ServerBuffChangeNotify::add_avatar_guid_list((proto::ServerBuffChangeNotify *const)(v2 + 32), Guid);
  v6 = proto::ServerBuffChangeNotify::add_server_buff_list((proto::ServerBuffChangeNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  v7 = Avatar::getGuid(this->avatar_);
  Buff::toClient(buff, v7, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  Entity::notifySelf<proto::ServerBuffChangeNotify>(
    (Entity *const)this->avatar_,
    (proto::ServerBuffChangeNotify *)(v2 + 32));
  proto::ServerBuffChangeNotify::~ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 442: range 0000000015559140-000000001555937B
int32_t __cdecl BuffComp::notifyBuffDel(BuffComp *const this, Buff *buff)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  uint64_t Guid; // rax
  proto::ServerBuff *v6; // r14
  uint64_t v7; // rcx
  int32_t result; // eax
  char v9[208]; // [rsp+10h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 96 10 notify:443";
  *(_QWORD *)(v2 + 16) = BuffComp::notifyBuffDel;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450896) = -202116109;
  proto::ServerBuffChangeNotify::ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
  proto::ServerBuffChangeNotify::set_server_buff_change_type(
    (proto::ServerBuffChangeNotify *const)(v2 + 32),
    ServerBuffChangeNotify_ServerBuffChangeType_DEL_SERVER_BUFF);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  Guid = Avatar::getGuid(this->avatar_);
  proto::ServerBuffChangeNotify::add_avatar_guid_list((proto::ServerBuffChangeNotify *const)(v2 + 32), Guid);
  v6 = proto::ServerBuffChangeNotify::add_server_buff_list((proto::ServerBuffChangeNotify *const)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  v7 = Avatar::getGuid(this->avatar_);
  Buff::toClient(buff, v7, v6);
  if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->avatar_);
  Entity::notifySelf<proto::ServerBuffChangeNotify>(
    (Entity *const)this->avatar_,
    (proto::ServerBuffChangeNotify *)(v2 + 32));
  proto::ServerBuffChangeNotify::~ServerBuffChangeNotify((proto::ServerBuffChangeNotify *const)(v2 + 32));
  result = 0;
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 454: range 000000001555937C-00000000155595A6
void __cdecl BuffComp::onMsTimer(BuffComp *const this, uint64_t player_time_ms)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::pointer v5; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  Buff *v8; // rdx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self __y; // [rsp+18h] [rbp-88h] BYREF
  char v10[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 6 it:455 64 16 12 buff_ptr:457";
  *(_QWORD *)(v2 + 16) = BuffComp::onMsTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202178560;
  *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 32) = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_);
  while ( 1 )
  {
    __y._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
    if ( !std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Self *)(v2 + 32),
            &__y) )
      break;
    v5 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v2 + 32));
    std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)(v2 + 64), &v5->second);
    if ( std::operator==<Buff>((const std::shared_ptr<Buff> *)(v2 + 64), 0LL)
      || (v6 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64)),
          Buff::isExpired(v6, player_time_ms)) )
    {
      *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 32) = std::multimap<unsigned int,std::shared_ptr<Buff>>::erase[abi:cxx11](
                                                                                    &this->buff_mmap_,
                                                                                    *(std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator *)(v2 + 32));
      if ( std::operator!=<Buff>((const std::shared_ptr<Buff> *)(v2 + 64), 0LL) )
      {
        v8 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        BuffComp::notifyBuffDel(this, v8);
      }
    }
    else
    {
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > > *const)(v2 + 32));
    }
    std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 64));
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
};

// Line 475: range 00000000155595A8-0000000015559862
void __cdecl BuffComp::delAllBuffs(BuffComp *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  unsigned int *v4; // rax
  uint32_t *v5; // rdx
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_begin; // [rsp+18h] [rbp-D8h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::iterator __for_end; // [rsp+20h] [rbp-D0h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+28h] [rbp-C8h]
  std::set<unsigned int> *__for_range_0; // [rsp+30h] [rbp-C0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v10; // [rsp+38h] [rbp-B8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+40h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+48h] [rbp-A8h]
  char v13[160]; // [rsp+50h] [rbp-A0h] BYREF

  v1 = (std::set<unsigned int> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 22 to_del_buff_id_set:476";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)BuffComp::delAllBuffs;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  std::set<unsigned int>::set(v1 + 1);
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v10);
    _ = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v10);
    std::set<unsigned int>::insert(v1 + 1, buff_id);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  __for_range_0 = v1 + 1;
  __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::begin(v1 + 1)._M_node;
  __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<Buff> > >::_Base_ptr)std::set<unsigned int>::end(__for_range_0)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v4 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    v5 = v4;
    if ( *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v4 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v4 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v4);
    }
    BuffComp::delBuff(this, *v5);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  std::set<unsigned int>::~set(v1 + 1);
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
};

// Line 489: range 0000000015559864-0000000015559BA1
uint32_t __cdecl BuffComp::getSmallestUnusedServerModifierId(const BuffComp *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // r14
  uint64_t Guid; // rax
  uint32_t v6; // r14d
  uint32_t result; // eax
  uint32_t used_server_modifier_id_count; // [rsp+1Ch] [rbp-124h]
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+20h] [rbp-120h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+28h] [rbp-118h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+30h] [rbp-110h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v12; // [rsp+38h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+40h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-F8h]
  common::milog::MiLogStream v15; // [rsp+50h] [rbp-F0h] BYREF
  char v16[208]; // [rsp+70h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 4 5 i:499 64 56 31 used_server_modifier_id_set:490";
  *(_QWORD *)(v1 + 16) = BuffComp::getSmallestUnusedServerModifierId;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::unordered_set<unsigned int>::unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v12 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v12);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v12);
    if ( std::operator!=<Buff>(0LL, buff_ptr) )
    {
      v4 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->avatar_);
      Guid = Avatar::getGuid(this->avatar_);
      *(_DWORD *)(v1 + 48) = Buff::getModifierIdByAvatarGuid(v4, Guid);
      std::unordered_set<unsigned int>::insert(
        (std::unordered_set<unsigned int> *const)(v1 + 64),
        (std::unordered_set<unsigned int>::value_type *)(v1 + 48));
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  used_server_modifier_id_count = std::unordered_set<unsigned int>::size((const std::unordered_set<unsigned int> *const)(v1 + 64));
  for ( *(_DWORD *)(v1 + 48) = 1; used_server_modifier_id_count + 1 >= *(_DWORD *)(v1 + 48); ++*(_DWORD *)(v1 + 48) )
  {
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<unsigned int>,unsigned int>(
            (std::unordered_set<unsigned int> *)(v1 + 64),
            (const unsigned int *)(v1 + 48)) )
    {
      v6 = *(_DWORD *)(v1 + 48);
      goto LABEL_17;
    }
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/buff/buff_comp.cpp",
    "getSmallestUnusedServerModifierId",
    506);
  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
    &v15,
    (const char (*)[40])"getSmallestUnusedServerModifierId fails");
  common::milog::MiLogStream::~MiLogStream(&v15);
  v6 = 0;
LABEL_17:
  std::unordered_set<unsigned int>::~unordered_set((std::unordered_set<unsigned int> *const)(v1 + 64));
  result = v6;
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF800C) = 0LL;
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

// Line 511: range 0000000015559BA2-0000000015559D0E
uint32_t __cdecl BuffComp::getInstancedModifierIdByBuffUid(const BuffComp *const this, uint32_t buff_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // r14
  uint64_t Guid; // rax
  uint32_t ModifierIdByAvatarGuid; // r14d
  uint32_t result; // eax
  char v9[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 buff_ptr:512";
  *(_QWORD *)(v2 + 16) = BuffComp::getInstancedModifierIdByBuffUid;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  BuffComp::findBuffByBuffUid((const BuffComp *const)(v2 + 32), (uint32_t)this);
  if ( std::operator!=<Buff>((const std::shared_ptr<Buff> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    Guid = Avatar::getGuid(this->avatar_);
    ModifierIdByAvatarGuid = Buff::getModifierIdByAvatarGuid(v5, Guid);
  }
  else
  {
    ModifierIdByAvatarGuid = 0;
  }
  std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 32));
  result = ModifierIdByAvatarGuid;
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

// Line 521: range 0000000015559D10-000000001555A886
void __fastcall BuffComp::debugCheckServerModifierConsistent(
        const BuffComp *const this,
        const std::vector<std::shared_ptr<ActorModifier>> *modifier_vec,
        uint32_t ability_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::vector<std::shared_ptr<ActorModifier>>::size_type v6; // r14
  const std::shared_ptr<ActorModifier> *v7; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t SbuffUid; // eax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  Avatar *avatar; // rdx
  unsigned __int64 *v21; // rax
  unsigned __int64 v22; // rax
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r14
  uint64_t Guid; // rax
  std::vector<std::shared_ptr<ActorModifier>>::size_type v25; // r14
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r14
  Avatar *v36; // rdx
  unsigned __int64 *v37; // rax
  unsigned __int64 v38; // rax
  const std::shared_ptr<ActorModifier> *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r14
  Avatar *v49; // rdx
  unsigned __int64 *v50; // rax
  unsigned __int64 v51; // rax
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v52; // rax
  uint32_t v53; // r14d
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v54; // rax
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // r14
  std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // rax
  common::milog::MiLogStream *v64; // rax
  unsigned __int64 *v65; // rax
  unsigned int val; // [rsp+24h] [rbp-10Ch] BYREF
  unsigned int BuffUid; // [rsp+28h] [rbp-108h] BYREF
  uint32_t i; // [rsp+2Ch] [rbp-104h]
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+30h] [rbp-100h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+38h] [rbp-F8h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+40h] [rbp-F0h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v73; // [rsp+48h] [rbp-E8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+50h] [rbp-E0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+58h] [rbp-D8h]
  common::milog::MiLogStream v76; // [rsp+60h] [rbp-D0h] BYREF
  std::string v77; // [rsp+80h] [rbp-B0h] BYREF
  char v78[144]; // [rsp+A0h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v78;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 15 modifier_id:540 48 4 14 ability_id:520 64 16 16 modifier_ptr:548";
  *(_QWORD *)(v3 + 16) = BuffComp::debugCheckServerModifierConsistent;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 48) = ability_id;
  for ( i = 0; ; ++i )
  {
    v6 = i;
    if ( v6 >= std::vector<std::shared_ptr<ActorModifier>>::size(modifier_vec) )
      break;
    v7 = std::vector<std::shared_ptr<ActorModifier>>::operator[](modifier_vec, i);
    std::shared_ptr<ActorModifier>::shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64), v7);
    if ( std::operator!=<ActorModifier>(0LL, (const std::shared_ptr<ActorModifier> *)(v3 + 64)) )
    {
      v8 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      SbuffUid = ActorModifier::getSbuffUid(v8);
      *(_DWORD *)(v3 + 32) = BuffComp::getInstancedModifierIdByBuffUid(this, SbuffUid);
      if ( *(_DWORD *)(v3 + 32) )
      {
        if ( i != *(_DWORD *)(v3 + 32) - 1 )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "debugCheckServerModifierConsistent",
            531);
          v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  &v76,
                  (const char (*)[52])"serverbuff modifier not consistent. serverbuff_uid:");
          v11 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          val = ActorModifier::getSbuffUid(v11);
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v12,
                  (const char (*)[15])" modifier_id: ");
          BuffUid = i + 1;
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &BuffUid);
          v15 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v14,
                  (const char (*)[24])"buff_comp modifier_id: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  (const unsigned int *)(v3 + 32));
          v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v16,
                  (const char (*)[14])", ability_id:");
          v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v17,
                  (const unsigned int *)(v3 + 48));
          v19 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v18, (const char (*)[10])", entity:");
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->avatar_);
          avatar = this->avatar_;
          v21 = (unsigned __int64 *)avatar;
          if ( *(_BYTE *)(((unsigned __int64)avatar >> 3) + 0x7FFF8000) )
            v21 = (unsigned __int64 *)__asan_report_load8(this->avatar_);
          v22 = *v21;
          if ( *(_BYTE *)((v22 >> 3) + 0x7FFF8000) )
            v22 = __asan_report_load8(v22);
          (*(void (__fastcall **)(std::string *, Avatar *))v22)(&v77, avatar);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v19, &v77);
          std::string::~string(&v77);
          common::milog::MiLogStream::~MiLogStream(&v76);
        }
      }
    }
    std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64));
  }
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v73 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v73);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v73);
    if ( !std::operator!=<Buff>(0LL, buff_ptr) )
      goto LABEL_51;
    v23 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    Guid = Avatar::getGuid(this->avatar_);
    *(_DWORD *)(v3 + 32) = Buff::getModifierIdByAvatarGuid(v23, Guid);
    if ( *(_DWORD *)(v3 + 32) )
    {
      v25 = *(unsigned int *)(v3 + 32);
      if ( v25 <= std::vector<std::shared_ptr<ActorModifier>>::size(modifier_vec) )
      {
        v39 = std::vector<std::shared_ptr<ActorModifier>>::operator[](
                modifier_vec,
                (unsigned int)(*(_DWORD *)(v3 + 32) - 1));
        std::shared_ptr<ActorModifier>::shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64), v39);
        if ( std::operator==<ActorModifier>((const std::shared_ptr<ActorModifier> *)(v3 + 64), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "debugCheckServerModifierConsistent",
            551);
          v40 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v76,
                  (const char (*)[49])"serverbuff modifier not consistent. modifier_id:");
          v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v40,
                  (const unsigned int *)(v3 + 32));
          v42 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  v41,
                  (const char (*)[33])" ability_comp modifier not exsit");
          v43 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v42,
                  (const char (*)[27])"buff_comp serverbuff_uid: ");
          v44 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
          BuffUid = Buff::getBuffUid(v44);
          v45 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, &BuffUid);
          v46 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v45,
                  (const char (*)[14])", ability_id:");
          v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v46,
                  (const unsigned int *)(v3 + 48));
          v48 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v47, (const char (*)[10])", entity:");
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->avatar_);
          v49 = this->avatar_;
          v50 = (unsigned __int64 *)v49;
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
            v50 = (unsigned __int64 *)__asan_report_load8(this->avatar_);
          v51 = *v50;
          if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
            v51 = __asan_report_load8(v51);
          goto LABEL_49;
        }
        v52 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
        v53 = ActorModifier::getSbuffUid(v52);
        v54 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
        if ( v53 != Buff::getBuffUid(v54) )
        {
          common::milog::MiLogStream::create(
            &v76,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/buff/buff_comp.cpp",
            "debugCheckServerModifierConsistent",
            556);
          v55 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  &v76,
                  (const char (*)[49])"serverbuff modifier not consistent. modifier_id:");
          v56 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v55,
                  (const unsigned int *)(v3 + 32));
          v57 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v56,
                  (const char (*)[18])" serverbuff_uid: ");
          v58 = std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<ActorModifier,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
          val = ActorModifier::getSbuffUid(v58);
          v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &val);
          v60 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  v59,
                  (const char (*)[27])"buff_comp serverbuff_uid: ");
          v61 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
          BuffUid = Buff::getBuffUid(v61);
          v62 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &BuffUid);
          v63 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v62,
                  (const char (*)[14])", ability_id:");
          v64 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v63,
                  (const unsigned int *)(v3 + 48));
          v48 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v64, (const char (*)[10])", entity:");
          if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
            __asan_report_load8(&this->avatar_);
          v49 = this->avatar_;
          v65 = (unsigned __int64 *)v49;
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
            v65 = (unsigned __int64 *)__asan_report_load8(this->avatar_);
          v51 = *v65;
          if ( *(_BYTE *)((v51 >> 3) + 0x7FFF8000) )
            v51 = __asan_report_load8(v51);
LABEL_49:
          (*(void (__fastcall **)(std::string *, Avatar *))v51)(&v77, v49);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v48, &v77);
          std::string::~string(&v77);
          common::milog::MiLogStream::~MiLogStream(&v76);
        }
        std::shared_ptr<ActorModifier>::~shared_ptr((std::shared_ptr<ActorModifier> *const)(v3 + 64));
        goto LABEL_51;
      }
    }
    common::milog::MiLogStream::create(
      &v76,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/buff/buff_comp.cpp",
      "debugCheckServerModifierConsistent",
      543);
    v27 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            &v76,
            (const char (*)[49])"serverbuff modifier not consistent. modifier_id:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, (const unsigned int *)(v3 + 32));
    v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            v28,
            (const char (*)[33])" ability_comp modifier not exsit");
    v30 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v29,
            (const char (*)[27])"buff_comp serverbuff_uid: ");
    v31 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
    BuffUid = Buff::getBuffUid(v31);
    v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, &BuffUid);
    v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v32, (const char (*)[14])", ability_id:");
    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, (const unsigned int *)(v3 + 48));
    v35 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v34, (const char (*)[10])", entity:");
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    v36 = this->avatar_;
    v37 = (unsigned __int64 *)v36;
    if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      v37 = (unsigned __int64 *)__asan_report_load8(this->avatar_);
    v38 = *v37;
    if ( *(_BYTE *)((v38 >> 3) + 0x7FFF8000) )
      v38 = __asan_report_load8(v38);
    (*(void (__fastcall **)(std::string *, Avatar *))v38)(&v77, v36);
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v35, &v77);
    std::string::~string(&v77);
    common::milog::MiLogStream::~MiLogStream(&v76);
LABEL_51:
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  if ( v78 == (char *)v3 )
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

// Line 567: range 000000001555A888-000000001555A98C
// local variable allocation has failed, the output may be wrong!
BuffPtr __cdecl BuffComp::findBuffByBuffUid(const BuffComp *const this, uint32_t server_buff_uid)
{
  uint32_t v2; // edx
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  BuffPtr result; // rax
  uint32_t server_buff_uida; // [rsp+Ch] [rbp-44h]
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+20h] [rbp-30h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+28h] [rbp-28h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+30h] [rbp-20h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v10; // [rsp+38h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *_; // [rsp+40h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+48h] [rbp-8h]

  server_buff_uida = v2;
  __for_range = (const std::multimap<unsigned int,std::shared_ptr<Buff>> *)(*(_QWORD *)&server_buff_uid + 24LL);
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin((const std::multimap<unsigned int,std::shared_ptr<Buff>> *const)(*(_QWORD *)&server_buff_uid + 24LL))._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end((const std::multimap<unsigned int,std::shared_ptr<Buff>> *const)(*(_QWORD *)&server_buff_uid + 24LL))._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v10);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v10);
    if ( std::operator!=<Buff>(0LL, buff_ptr) )
    {
      v3 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      if ( server_buff_uida == Buff::getBuffUid(v3) )
      {
        std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)this, buff_ptr);
        goto LABEL_11;
      }
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  std::shared_ptr<Buff>::shared_ptr((std::shared_ptr<Buff> *const)this, 0LL);
LABEL_11:
  result._M_ptr = (std::__shared_ptr<Buff,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 579: range 000000001555A98E-000000001555AAF5
int32_t __cdecl BuffComp::tryRecordModifierAdded(BuffComp *const this, uint32_t server_buff_uid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  Buff *v5; // r14
  uint64_t Guid; // rax
  int32_t result; // eax
  char v8[112]; // [rsp+10h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 12 buff_ptr:580";
  *(_QWORD *)(v2 + 16) = BuffComp::tryRecordModifierAdded;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  BuffComp::findBuffByBuffUid((const BuffComp *const)(v2 + 32), (uint32_t)this);
  if ( std::operator!=<Buff>((const std::shared_ptr<Buff> *)(v2 + 32), 0LL) )
  {
    v5 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->avatar_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->avatar_);
    Guid = Avatar::getGuid(this->avatar_);
    Buff::recordModifierAdded(v5, Guid);
  }
  std::shared_ptr<Buff>::~shared_ptr((std::shared_ptr<Buff> *const)(v2 + 32));
  result = 0;
  if ( v8 == (char *)v2 )
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

// Line 591: range 000000001555AAF6-000000001555AEF9
std::string *__cdecl BuffComp::getBuffInfoByGm[abi:cxx11](std::string *retstr, const BuffComp *const this)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r14
  std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t BuffUid; // eax
  __int64 v10; // rax
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_begin; // [rsp+10h] [rbp-280h] BYREF
  std::multimap<unsigned int,std::shared_ptr<Buff>>::const_iterator __for_end; // [rsp+18h] [rbp-278h] BYREF
  const std::multimap<unsigned int,std::shared_ptr<Buff>> *__for_range; // [rsp+20h] [rbp-270h]
  const std::pair<unsigned int const,std::shared_ptr<Buff> > *v15; // [rsp+28h] [rbp-268h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_id; // [rsp+30h] [rbp-260h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *buff_ptr; // [rsp+38h] [rbp-258h]
  common::milog::MiLogStream v18; // [rsp+40h] [rbp-250h] BYREF
  char v19[560]; // [rsp+60h] [rbp-230h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 392 6 ss:592";
  *(_QWORD *)(v2 + 16) = BuffComp::getBuffInfoByGm[abi:cxx11];
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
  v4[536862735] = -202116109;
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::basic_stringstream(v2 + 48);
  __for_range = &this->buff_mmap_;
  __for_begin._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::begin(&this->buff_mmap_)._M_node;
  __for_end._M_node = std::multimap<unsigned int,std::shared_ptr<Buff>>::end(&this->buff_mmap_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator*(&__for_begin);
    buff_id = std::get<0ul,unsigned int const,std::shared_ptr<Buff>>(v15);
    buff_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<Buff> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<Buff>>(v15);
    if ( std::operator!=<Buff>(buff_ptr, 0LL) )
    {
      v5 = std::operator<<<std::char_traits<char>>(v2 + 64, "buff_id:");
      if ( *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)buff_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)buff_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(buff_id);
      }
      v6 = std::ostream::operator<<(v5, *buff_id);
      v7 = std::operator<<<std::char_traits<char>>(v6, ", buff_uid:");
      v8 = std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Buff,(__gnu_cxx::_Lock_policy)2,false,false> *const)buff_ptr);
      BuffUid = Buff::getBuffUid(v8);
      v10 = std::ostream::operator<<(v7, BuffUid);
      std::operator<<<std::char_traits<char>>(v10, "\n");
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<Buff>>>::operator++(&__for_begin);
  }
  if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)retstr + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_anon_0._M_allocated_capacity + 15) >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store_n(retstr, 32LL);
  }
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::str(retstr, v2 + 48);
  common::milog::MiLogStream::create(
    &v18,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/buff/buff_comp.cpp",
    "getBuffInfoByGm",
    601);
  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(&v18, retstr);
  common::milog::MiLogStream::~MiLogStream(&v18);
  std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>>::~basic_stringstream(v2 + 48);
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return retstr;
};
