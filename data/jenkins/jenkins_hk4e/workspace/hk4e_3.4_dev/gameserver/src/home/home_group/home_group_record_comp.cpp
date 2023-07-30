// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_group/home_group_record_comp.cpp

// Line 21: range 00000000145DE238-00000000145DE7B0
int32_t __cdecl HomeGroupRecordComp::fromBin(HomeGroupRecordComp *const this, const proto::HomeDataBin *home_data_bin)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  bool v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // r14
  int32_t result; // eax
  unsigned int val; // [rsp+24h] [rbp-FCh] BYREF
  const proto::HomeGroupRecordCompBin *group_record_comp_bin; // [rsp+28h] [rbp-F8h]
  const google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin> *__for_range; // [rsp+30h] [rbp-F0h]
  const unsigned int *p_group_id; // [rsp+38h] [rbp-E8h]
  HomeGroupRecordComp v21; // [rsp+40h] [rbp-E0h] BYREF
  common::milog::MiLogStream v22; // [rsp+90h] [rbp-90h] BYREF
  char v23[112]; // [rsp+B0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 18 base_record_ptr:25";
  *(_QWORD *)(v3 + 16) = HomeGroupRecordComp::fromBin;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  group_record_comp_bin = proto::HomeDataBin::group_record_bin(home_data_bin);
  __for_range = proto::HomeGroupRecordCompBin::group_record_map_bin(group_record_comp_bin);
  google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::begin(
    (google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator *)&v21._M_weak_this._M_refcount,
    __for_range);
  google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::end(
    (google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator *)&v21.group_record_map_._M_t._M_impl._M_header._M_parent,
    __for_range);
  while ( google::protobuf::operator!=(
            (const google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator *)&v21._M_weak_this._M_refcount,
            (const google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator *)&v21.group_record_map_._M_t._M_impl._M_header._M_parent) )
  {
    p_group_id = (const unsigned int *)google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator::operator*((const google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator *const)&v21._M_weak_this._M_refcount);
    if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HomeGroupRecordComp::findBaseHomeGroupRecord((const HomeGroupRecordComp *const)(v3 + 32), (uint32_t)this);
    if ( !std::operator==<BaseHomeGroupRecord>(0LL, (const std::shared_ptr<BaseHomeGroupRecord> *)(v3 + 32)) )
      goto LABEL_35;
    if ( *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)p_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    HomeGroupRecordComp::createRecord(&v21, (uint32_t)this);
    std::shared_ptr<BaseHomeGroupRecord>::operator=(
      (std::shared_ptr<BaseHomeGroupRecord> *const)(v3 + 32),
      (std::shared_ptr<BaseHomeGroupRecord> *)&v21);
    std::shared_ptr<BaseHomeGroupRecord>::~shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)&v21);
    std::shared_ptr<BaseHomeGroupRecord>::shared_ptr(
      (std::shared_ptr<BaseHomeGroupRecord> *const)&v21,
      (const std::shared_ptr<BaseHomeGroupRecord> *)(v3 + 32));
    v6 = HomeGroupRecordComp::insertRecordPtr(this, (BaseHomeGroupRecordPtr *)&v21) != 0;
    std::shared_ptr<BaseHomeGroupRecord>::~shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)&v21);
    if ( v6 )
    {
      common::milog::MiLogStream::create(
        &v22,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_group/home_group_record_comp.cpp",
        "fromBin",
        31);
      v7 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             &v22,
             (const char (*)[32])"insertRecordPtr fail. group_id:");
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, p_group_id);
      v9 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v8, (const char (*)[13])", owner_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
      common::milog::MiLogStream::~MiLogStream(&v22);
      v10 = 0;
    }
    else
    {
LABEL_35:
      if ( std::operator==<BaseHomeGroupRecord>(0LL, (const std::shared_ptr<BaseHomeGroupRecord> *)(v3 + 32)) )
      {
        v10 = 0;
      }
      else
      {
        v11 = (unsigned __int64)std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8();
        v12 = *(_QWORD *)v11 + 16LL;
        if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
          v11 = __asan_report_load8();
        if ( (*(unsigned int (__fastcall **)(unsigned __int64, const unsigned int *))v12)(v11, p_group_id + 2) )
        {
          common::milog::MiLogStream::create(
            &v22,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/home/home_group/home_group_record_comp.cpp",
            "fromBin",
            41);
          v13 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  &v22,
                  (const char (*)[37])"group record fromBin fail. group_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, p_group_id);
          v15 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v14, (const char (*)[13])", owner_uid:");
          if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          val = Home::getHomeUid(this->home_);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, &val);
          common::milog::MiLogStream::~MiLogStream(&v22);
          v2 = -1;
          v10 = 1;
        }
        else
        {
          v10 = 2;
        }
      }
    }
    std::shared_ptr<BaseHomeGroupRecord>::~shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)(v3 + 32));
    if ( v10 && v10 != 2 )
      goto LABEL_30;
    google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator::operator++((google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::const_iterator *const)&v21._M_weak_this._M_refcount);
  }
  v2 = 0;
LABEL_30:
  result = v2;
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

// Line 49: range 00000000145DE7B2-00000000145DE9A7
int32_t __cdecl HomeGroupRecordComp::toBin(HomeGroupRecordComp *const this, proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdx
  common::milog::MiLogStream *v4; // rax
  std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::iterator __for_begin; // [rsp+18h] [rbp-78h] BYREF
  std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::iterator __for_end; // [rsp+20h] [rbp-70h] BYREF
  proto::HomeGroupRecordCompBin *group_record_comp_bin; // [rsp+28h] [rbp-68h]
  google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin> *group_record_map_bin; // [rsp+30h] [rbp-60h]
  std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::type *group_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::type *group_record_ptr; // [rsp+50h] [rbp-40h]
  proto::HomeGroupRecordBin *group_record_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  group_record_comp_bin = proto::HomeDataBin::mutable_group_record_bin(home_data_bin);
  group_record_map_bin = proto::HomeGroupRecordCompBin::mutable_group_record_map_bin(group_record_comp_bin);
  __for_range = &this->group_record_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::begin(&this->group_record_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::end(&this->group_record_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord>>>::operator*(&__for_begin);
    group_id = std::get<0ul,unsigned int const,std::shared_ptr<BaseHomeGroupRecord>>(v11);
    group_record_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<BaseHomeGroupRecord>>(v11);
    if ( !std::operator==<BaseHomeGroupRecord>(group_record_ptr, 0LL) )
    {
      group_record_bin = google::protobuf::Map<unsigned int,proto::HomeGroupRecordBin>::operator[](
                           group_record_map_bin,
                           group_id);
      v2 = (unsigned __int64)std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)group_record_ptr);
      if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      v3 = *(_QWORD *)v2 + 24LL;
      if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
        v2 = __asan_report_load8();
      if ( (*(unsigned int (__fastcall **)(unsigned __int64, proto::HomeGroupRecordBin *))v3)(v2, group_record_bin) )
      {
        common::milog::MiLogStream::create(
          &v15,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/home/home_group/home_group_record_comp.cpp",
          "toBin",
          61);
        v4 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
               &v15,
               (const char (*)[41])"group_record_ptr to bin error, group_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, group_id);
        common::milog::MiLogStream::~MiLogStream(&v15);
        return -1;
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord>>>::operator++(&__for_begin);
  }
  return 0;
};

// Line 69: range 00000000145DE9A8-00000000145DEB30
const HomeGroupRecordComp *__fastcall HomeGroupRecordComp::findBaseHomeGroupRecord(
        const HomeGroupRecordComp *const this,
        __int64 group_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 11 group_id:68 64 8 7 iter:70";
  *(_QWORD *)(v3 + 16) = HomeGroupRecordComp::findBaseHomeGroupRecord;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::find(
                                                                                                (const std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>> *const)(group_id + 32),
                                                                                                (const std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::end((const std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>> *const)(group_id + 32))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::_Self *)(v3 + 64),
         &__y) )
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > > *const)(v3 + 64));
    std::shared_ptr<BaseHomeGroupRecord>::shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)this, &v6->second);
  }
  else
  {
    std::shared_ptr<BaseHomeGroupRecord>::shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)this, 0LL);
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

// Line 79: range 00000000145DEB32-00000000145DEE23
HomeGroupRecordComp *__fastcall HomeGroupRecordComp::createRecord(
        HomeGroupRecordComp *const this,
        const HomeGroupRecordComp *group_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  int group_record_type; // [rsp+2Ch] [rbp-C4h]
  std::shared_ptr<RacingHomeGroupRecord> __r; // [rsp+30h] [rbp-C0h] BYREF
  std::shared_ptr<BalloonHomeGroupRecord> v11; // [rsp+40h] [rbp-B0h] BYREF
  std::shared_ptr<StakeHomeGroupRecord> v12; // [rsp+50h] [rbp-A0h] BYREF
  std::shared_ptr<SeekFurnitureHomeGroupRecord> v13; // [rsp+60h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+70h] [rbp-80h] BYREF
  char v15[96]; // [rsp+90h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 group_id:78";
  *(_QWORD *)(v3 + 16) = HomeGroupRecordComp::createRecord;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = a3;
  std::shared_ptr<BaseHomeGroupRecord>::shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)this, 0LL);
  group_record_type = HomeGroupRecordComp::getRecordTypeByGroupId(group_id, *(_DWORD *)(v3 + 32));
  if ( group_record_type == 4 )
  {
    common::tools::perf::make_shared<SeekFurnitureHomeGroupRecord,unsigned int &>(
      (unsigned int *)&v13,
      (unsigned int *)(v3 + 32));
    std::shared_ptr<BaseHomeGroupRecord>::operator=<SeekFurnitureHomeGroupRecord>(
      (std::shared_ptr<BaseHomeGroupRecord> *const)this,
      &v13);
    std::shared_ptr<SeekFurnitureHomeGroupRecord>::~shared_ptr(&v13);
  }
  else
  {
    if ( group_record_type <= 4 )
    {
      switch ( group_record_type )
      {
        case 3:
          common::tools::perf::make_shared<StakeHomeGroupRecord,unsigned int &>(
            (unsigned int *)&v12,
            (unsigned int *)(v3 + 32));
          std::shared_ptr<BaseHomeGroupRecord>::operator=<StakeHomeGroupRecord>(
            (std::shared_ptr<BaseHomeGroupRecord> *const)this,
            &v12);
          std::shared_ptr<StakeHomeGroupRecord>::~shared_ptr(&v12);
          goto LABEL_15;
        case 1:
          common::tools::perf::make_shared<RacingHomeGroupRecord,unsigned int &>(
            (unsigned int *)&__r,
            (unsigned int *)(v3 + 32));
          std::shared_ptr<BaseHomeGroupRecord>::operator=<RacingHomeGroupRecord>(
            (std::shared_ptr<BaseHomeGroupRecord> *const)this,
            &__r);
          std::shared_ptr<RacingHomeGroupRecord>::~shared_ptr(&__r);
          goto LABEL_15;
        case 2:
          common::tools::perf::make_shared<BalloonHomeGroupRecord,unsigned int &>(
            (unsigned int *)&v11,
            (unsigned int *)(v3 + 32));
          std::shared_ptr<BaseHomeGroupRecord>::operator=<BalloonHomeGroupRecord>(
            (std::shared_ptr<BaseHomeGroupRecord> *const)this,
            &v11);
          std::shared_ptr<BalloonHomeGroupRecord>::~shared_ptr(&v11);
          goto LABEL_15;
      }
    }
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_group/home_group_record_comp.cpp",
      "createRecord",
      106);
    v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v14,
           (const char (*)[41])"create home group record fail. group_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v14);
  }
LABEL_15:
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return this;
};

// Line 114: range 00000000145DEE24-00000000145DEFE9
__int64 __fastcall HomeGroupRecordComp::clearHomeGroupRecord(HomeGroupRecordComp *const this, uint32_t group_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r13
  __int64 result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-80h] BYREF
  char v11[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:113";
  *(_QWORD *)(v2 + 16) = HomeGroupRecordComp::clearHomeGroupRecord;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = group_id;
  std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::erase(
    &this->group_record_map_,
    (const std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::key_type *)(v2 + 32));
  common::milog::MiLogStream::create(
    &v10,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_group/home_group_record_comp.cpp",
    "clearHomeGroupRecord",
    116);
  v5 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
         &v10,
         (const char (*)[37])"[HOME_GROUP_RECORD] delete group_id:");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
  v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
  common::milog::MiLogStream::~MiLogStream(&v10);
  result = 0LL;
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

// Line 121: range 00000000145DEFEA-00000000145DF125
data::GroupRecordType __cdecl HomeGroupRecordComp::getRecordTypeByGroupId(
        const HomeGroupRecordComp *const this,
        uint32_t group_id)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v3; // rax
  uint32_t furniture_id; // [rsp+14h] [rbp-2Ch]
  const data::HomeWorldFurnitureExcelConfig *home_furniture_config_ptr; // [rsp+18h] [rbp-28h]
  std::shared_ptr<Config> v7[2]; // [rsp+20h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
  furniture_id = JsonConfigMgr::getFurnitureIdByGroupId(&v2->design_config.json_config_mgr, group_id);
  std::shared_ptr<Config>::~shared_ptr(v7);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v7);
  v3 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v7);
  home_furniture_config_ptr = data::HomeWorldExcelConfigMgrBase::findHomeWorldFurnitureExcelConfig(
                                &v3->design_config.txt_config_mgr.home_config_mgr,
                                furniture_id);
  std::shared_ptr<Config>::~shared_ptr(v7);
  if ( !home_furniture_config_ptr )
    return 0;
  if ( *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->group_record_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)home_furniture_config_ptr - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&home_furniture_config_ptr->group_record_type >> 3)
                                                                             + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  return home_furniture_config_ptr->group_record_type;
};

// Line 132: range 00000000145DF126-00000000145DF43C
int32_t __cdecl HomeGroupRecordComp::insertRecordPtr(
        HomeGroupRecordComp *const this,
        BaseHomeGroupRecordPtr *p_base_record_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int32_t result; // eax
  std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  std::shared_ptr<BaseHomeGroupRecord> *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r13
  unsigned int val; // [rsp+1Ch] [rbp-84h] BYREF
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-80h] BYREF
  char v14[96]; // [rsp+40h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 group_id:138";
  *(_QWORD *)(v2 + 16) = HomeGroupRecordComp::insertRecordPtr;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( std::operator==<BaseHomeGroupRecord>(p_base_record_ptr, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/home_group_record_comp.cpp",
      "insertRecordPtr",
      135);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      &v13,
      (const char (*)[46])"insertRecord fail. base_record_ptr is nullptr");
    common::milog::MiLogStream::~MiLogStream(&v13);
    result = -1;
  }
  else
  {
    v6 = std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_base_record_ptr);
    *(_DWORD *)(v2 + 32) = BaseHomeGroupRecord::getGroupId(v6);
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>,unsigned int>(
           &this->group_record_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_group/home_group_record_comp.cpp",
        "insertRecordPtr",
        141);
      v7 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             &v13,
             (const char (*)[53])"insertRecord fail. group_id already exist. group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = -1;
    }
    else
    {
      v8 = std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::operator[](
             &this->group_record_map_,
             (const std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::key_type *)(v2 + 32));
      std::shared_ptr<BaseHomeGroupRecord>::operator=(v8, p_base_record_ptr);
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_group/home_group_record_comp.cpp",
        "insertRecordPtr",
        145);
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
             &v13,
             (const char (*)[34])"[HOME_GROUP_RECORD] add group_id:");
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
      v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
      common::milog::MiLogStream::~MiLogStream(&v13);
      result = 0;
    }
  }
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

// Line 150: range 00000000145DF43E-00000000145DFCD7
__int64 __fastcall HomeGroupRecordComp::addRecord(
        HomeGroupRecordComp *const this,
        uint32_t group_id,
        Player *player,
        BaseHomePlaySettleInfoPtr *p_settle_info_ptr,
        BaseHomePlayRankInfoPtr *p_rank_info_ptr)
{
  unsigned int v5; // r14d
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  int v13; // r15d
  bool v14; // r15
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::pointer v18; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rbx
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::pointer v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // r14
  unsigned __int64 v28; // rax
  unsigned int (__fastcall *v29)(std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, unsigned __int64, std::shared_ptr<BaseHomeGroupRecord> *); // r15
  bool v30; // r14
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // r14
  __int64 result; // rax
  unsigned int val; // [rsp+34h] [rbp-10Ch] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::_Self __y; // [rsp+38h] [rbp-108h] BYREF
  std::shared_ptr<BaseHomeGroupRecord> p_base_record_ptr; // [rsp+40h] [rbp-100h] BYREF
  common::milog::MiLogStream v41; // [rsp+50h] [rbp-F0h] BYREF
  char v42[208]; // [rsp+70h] [rbp-D0h] BYREF

  v6 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_2(160LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "4 48 4 12 group_id:149 64 8 8 iter:170 96 16 14 record_ptr:176 128 16 19 base_record_ptr:158";
  *(_QWORD *)(v6 + 16) = HomeGroupRecordComp::addRecord;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -219021312;
  v8[536862724] = -202178560;
  *(_DWORD *)(v6 + 48) = group_id;
  if ( std::operator==<BaseHomePlaySettleInfo>(0LL, p_settle_info_ptr) )
  {
    common::milog::MiLogStream::create(
      &v41,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_group/home_group_record_comp.cpp",
      "addRecord",
      153);
    v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           &v41,
           (const char (*)[39])"settle_info_ptr is nullptr, group id: ");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v6 + 48));
    common::milog::MiLogStream::~MiLogStream(&v41);
    v5 = -1;
  }
  else
  {
    if ( common::tools::MiscUtils::isContains<std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>,unsigned int>(
           &this->group_record_map_,
           (const unsigned int *)(v6 + 48)) )
    {
      goto LABEL_13;
    }
    HomeGroupRecordComp::createRecord((HomeGroupRecordComp *const)(v6 + 128), this, *(_DWORD *)(v6 + 48));
    if ( std::operator==<BaseHomeGroupRecord>(0LL, (const std::shared_ptr<BaseHomeGroupRecord> *)(v6 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v41,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_group/home_group_record_comp.cpp",
        "addRecord",
        161);
      v10 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              &v41,
              (const char (*)[30])"create record fail. group_id:");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v6 + 48));
      v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", player uid:");
      val = Player::getUid(player);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
      common::milog::MiLogStream::~MiLogStream(&v41);
      v5 = -1;
      v13 = 0;
    }
    else
    {
      std::shared_ptr<BaseHomeGroupRecord>::shared_ptr(
        &p_base_record_ptr,
        (const std::shared_ptr<BaseHomeGroupRecord> *)(v6 + 128));
      v14 = HomeGroupRecordComp::insertRecordPtr(this, &p_base_record_ptr) != 0;
      std::shared_ptr<BaseHomeGroupRecord>::~shared_ptr(&p_base_record_ptr);
      if ( v14 )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_group/home_group_record_comp.cpp",
          "addRecord",
          166);
        v15 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                &v41,
                (const char (*)[32])"insertRecordPtr fail. group_id:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v6 + 48));
        v17 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v16, (const char (*)[14])", player uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v5 = -1;
        v13 = 0;
      }
      else
      {
        v13 = 1;
      }
    }
    std::shared_ptr<BaseHomeGroupRecord>::~shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)(v6 + 128));
    if ( v13 == 1 )
    {
LABEL_13:
      *(std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::iterator *)(v6 + 64) = std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::find(
                                                                                              &this->group_record_map_,
                                                                                              (const std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::key_type *)(v6 + 48));
      __y._M_node = std::map<unsigned int,std::shared_ptr<BaseHomeGroupRecord>>::end(&this->group_record_map_)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > >::_Self *)(v6 + 64),
             &__y)
        || (v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > > *const)(v6 + 64)),
            std::operator==<BaseHomeGroupRecord>(&v18->second, 0LL)) )
      {
        common::milog::MiLogStream::create(
          &v41,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_group/home_group_record_comp.cpp",
          "addRecord",
          173);
        v20 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                &v41,
                (const char (*)[26])"addRecord fail. group_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v6 + 48));
        v22 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v21, (const char (*)[14])", player uid:");
        val = Player::getUid(player);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v41);
        v5 = -1;
      }
      else
      {
        v23 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord>>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<BaseHomeGroupRecord> > > *const)(v6 + 64));
        std::shared_ptr<BaseHomeGroupRecord>::shared_ptr(
          (std::shared_ptr<BaseHomeGroupRecord> *const)(v6 + 96),
          &v23->second);
        if ( std::operator==<BaseHomeGroupRecord>((const std::shared_ptr<BaseHomeGroupRecord> *)(v6 + 96), 0LL) )
        {
          common::milog::MiLogStream::create(
            &v41,
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/home/home_group/home_group_record_comp.cpp",
            "addRecord",
            179);
          v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  &v41,
                  (const char (*)[45])"addRecord fail. record is nullptr. group_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v6 + 48));
          v26 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v25,
                  (const char (*)[14])", player uid:");
          val = Player::getUid(player);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
          common::milog::MiLogStream::~MiLogStream(&v41);
          v5 = -1;
        }
        else
        {
          v27 = std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96));
          if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
            __asan_report_load8();
          v28 = (unsigned __int64)(v27->_vptr_BaseHomeGroupRecord + 5);
          if ( *(_BYTE *)((v28 >> 3) + 0x7FFF8000) )
            v28 = __asan_report_load8();
          v29 = *(unsigned int (__fastcall **)(std::__shared_ptr_access<BaseHomeGroupRecord,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *, Player *, unsigned __int64, std::shared_ptr<BaseHomeGroupRecord> *))v28;
          std::shared_ptr<BaseHomePlayRankInfo>::shared_ptr(
            (std::shared_ptr<BaseHomePlayRankInfo> *const)&p_base_record_ptr,
            p_rank_info_ptr);
          std::shared_ptr<BaseHomePlaySettleInfo>::shared_ptr(
            (std::shared_ptr<BaseHomePlaySettleInfo> *const)(v6 + 128),
            p_settle_info_ptr);
          v30 = v29(v27, player, v6 + 128, &p_base_record_ptr) != 0;
          std::shared_ptr<BaseHomePlaySettleInfo>::~shared_ptr((std::shared_ptr<BaseHomePlaySettleInfo> *const)(v6 + 128));
          std::shared_ptr<BaseHomePlayRankInfo>::~shared_ptr((std::shared_ptr<BaseHomePlayRankInfo> *const)&p_base_record_ptr);
          if ( v30 )
          {
            common::milog::MiLogStream::create(
              &v41,
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/home/home_group/home_group_record_comp.cpp",
              "addRecord",
              184);
            v31 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    &v41,
                    (const char (*)[26])"addRecord fail. group_id:");
            v32 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v31,
                    (const unsigned int *)(v6 + 48));
            v33 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v32,
                    (const char (*)[14])", player uid:");
            val = Player::getUid(player);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, &val);
            common::milog::MiLogStream::~MiLogStream(&v41);
            v5 = -1;
          }
          else
          {
            v5 = 0;
          }
        }
        std::shared_ptr<BaseHomeGroupRecord>::~shared_ptr((std::shared_ptr<BaseHomeGroupRecord> *const)(v6 + 96));
      }
    }
  }
  result = v5;
  if ( v42 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};
