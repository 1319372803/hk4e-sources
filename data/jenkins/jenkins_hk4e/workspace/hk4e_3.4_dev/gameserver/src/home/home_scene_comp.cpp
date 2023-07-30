// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_scene_comp.cpp

// Line 32: range 00000000145A97D4-00000000145A99B1
void __cdecl HomeSceneComp::HomeSceneComp(HomeSceneComp *const this, Home *home)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  int (**v5)(...); // rdx
  std::shared_ptr<HomeWorld> __r; // [rsp+10h] [rbp-70h] BYREF
  char v7[96]; // [rsp+20h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 11 world_id:35";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::HomeSceneComp;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HomeCompBase::HomeCompBase(this, home);
  v5 = (int (**)(...))(&`vtable for'HomeSceneComp + 2);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store8(this);
  this->_vptr_HomeCompBase = v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_module_id_);
  }
  this->cur_module_id_ = 0;
  std::shared_ptr<HomeWorld>::shared_ptr(&this->home_world_ptr_);
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::map(&this->home_module_data_map_);
  *(_DWORD *)(v2 + 32) = HomeWorld::getDefaultHomeWorldId();
  common::tools::perf::make_shared<HomeWorld,unsigned int &,Home &>(
    (unsigned int *)&__r,
    (Home *)(v2 + 32),
    (unsigned int *)home,
    (Home *)(v2 + 32));
  std::shared_ptr<HomeWorld>::operator=(&this->home_world_ptr_, &__r);
  std::shared_ptr<HomeWorld>::~shared_ptr(&__r);
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

// Line 41: range 00000000145A99B2-00000000145AA2D8
int32_t __cdecl HomeSceneComp::fromBin(HomeSceneComp *const this, const proto::HomeDataBin *home_data_bin)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t v6; // edx
  common::milog::MiLogStream *v7; // r14
  int v8; // r15d
  HomeModuleData *v9; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::shared_ptr<HomeModuleData> *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >,bool> v12; // rax
  common::milog::MiLogStream *v13; // r15
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r15
  FeatureSwitchMgr *p_feature_switch_mgr; // rcx
  bool isHomeModuleClosed; // r14
  __int64 HomeUid; // rcx
  uint32_t v20; // esi
  common::milog::MiLogStream *v21; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+28h] [rbp-E8h] BYREF
  uint32_t new_module_id; // [rsp+2Ch] [rbp-E4h]
  google::protobuf::RepeatedPtrField<proto::HomeModuleBin>::const_iterator __for_begin; // [rsp+30h] [rbp-E0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleBin>::const_iterator __for_end; // [rsp+38h] [rbp-D8h] BYREF
  const proto::HomeSceneCompBin *proto_comp; // [rsp+40h] [rbp-D0h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleBin> *__for_range; // [rsp+48h] [rbp-C8h]
  HomeWorld *home_world; // [rsp+50h] [rbp-C0h]
  const proto::HomeModuleBin *home_world_bin; // [rsp+58h] [rbp-B8h]
  common::milog::MiLogStream v32; // [rsp+60h] [rbp-B0h] BYREF
  char v33[144]; // [rsp+80h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 6 ret:44 64 16 23 home_module_data_ptr:49";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::fromBin;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202178560;
  proto_comp = proto::HomeDataBin::scene_bin(home_data_bin);
  *(_DWORD *)(v3 + 48) = 0;
  v6 = proto::HomeSceneCompBin::cur_module_id(proto_comp);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->cur_module_id_);
  }
  this->cur_module_id_ = v6;
  __for_range = proto::HomeSceneCompBin::module_bin_list(proto_comp);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    home_world_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleBin const>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    common::tools::perf::make_shared<HomeModuleData,Home &>((Home *)(v3 + 64), this->home_);
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 64), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "fromBin",
        52);
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v32,
             (const char (*)[42])"MAKE_SHARED<HomeModuleData> failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
LABEL_13:
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
      v2 = -1;
      v8 = 0;
      goto LABEL_23;
    }
    v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( HomeModuleData::fromBin(v9, home_world_bin) )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "fromBin",
        57);
      v7 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
             &v32,
             (const char (*)[46])"home_module_data_ptr->fromBin() failed, uid: ");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      goto LABEL_13;
    }
    v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    v12 = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::emplace<unsigned int &,std::shared_ptr<HomeModuleData>&>(
            &this->home_module_data_map_,
            &v10->module_id,
            (std::shared_ptr<HomeModuleData> *)(v3 + 64),
            &v10->module_id,
            v11);
    if ( !v12.second )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "fromBin",
        62);
      v13 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              &v32,
              (const char (*)[43])"home_module_data already exists. module_id");
      v14 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &v14->module_id);
      v16 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &val);
      common::milog::MiLogStream::~MiLogStream(&v32);
    }
    v8 = 1;
LABEL_23:
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
    if ( v8 != 1 )
      goto LABEL_41;
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleBin const>::operator++(&__for_begin);
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 64));
  p_feature_switch_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64))->feature_switch_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  isHomeModuleClosed = FeatureSwitchMgr::isHomeModuleClosed(p_feature_switch_mgr, this->cur_module_id_);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 64));
  if ( isHomeModuleClosed )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_scene_comp.cpp",
      "fromBin",
      67);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    common::milog::MiLogStream::operator()(
      &v32,
      "[FEATURE_SWITCH] cur_module_id:%u is feature closed. home_uid:%u",
      this->cur_module_id_,
      HomeUid);
    common::milog::MiLogStream::~MiLogStream(&v32);
    new_module_id = HomeSceneComp::getOneNotClosedModuleId(this);
    if ( new_module_id )
    {
      common::milog::MiLogStream::create(
        &v32,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/home/home_scene_comp.cpp",
        "fromBin",
        72);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      v20 = Home::getHomeUid(this->home_);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      common::milog::MiLogStream::operator()(
        &v32,
        "because cur_module is closed. home change cur_module from %u to %u, home_uid:%u",
        this->cur_module_id_,
        new_module_id,
        v20);
      common::milog::MiLogStream::~MiLogStream(&v32);
      HomeSceneComp::setCurModuleId(this, new_module_id);
    }
  }
  home_world = HomeSceneComp::getHomeWorld(this);
  *(_DWORD *)(v3 + 48) = HomeWorld::fromBin(home_world, home_data_bin);
  if ( *(_DWORD *)(v3 + 48) )
  {
    common::milog::MiLogStream::create(
      &v32,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "fromBin",
      81);
    v21 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            &v32,
            (const char (*)[32])"home_world.fromBin failed. ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v21, (const int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v32);
    v2 = *(_DWORD *)(v3 + 48);
  }
  else
  {
    v2 = 0;
  }
LABEL_41:
  result = v2;
  if ( v33 == (char *)v3 )
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

// Line 89: range 00000000145AA2DA-00000000145AA691
int32_t __cdecl HomeSceneComp::toBin(HomeSceneComp *const this, proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // r12
  unsigned int val; // [rsp+14h] [rbp-CCh] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  proto::HomeSceneCompBin *proto_comp; // [rsp+28h] [rbp-B8h]
  HomeWorld *home_world; // [rsp+30h] [rbp-B0h]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+38h] [rbp-A8h]
  std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *__in; // [rsp+40h] [rbp-A0h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+48h] [rbp-98h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *home_module_data_ptr; // [rsp+50h] [rbp-90h]
  proto::HomeModuleBin *home_module_bin; // [rsp+58h] [rbp-88h]
  common::milog::MiLogStream v19; // [rsp+60h] [rbp-80h] BYREF
  char v20[96]; // [rsp+80h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 6 ret:90";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::toBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = 0;
  proto_comp = proto::HomeDataBin::mutable_scene_bin(home_data_bin);
  home_world = HomeSceneComp::getHomeWorld(this);
  *(_DWORD *)(v2 + 32) = HomeWorld::toBin(home_world, home_data_bin);
  if ( *(_DWORD *)(v2 + 32) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "toBin",
      97);
    v5 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
           &v19,
           (const char (*)[30])"home_world.toBin failed. ret:");
    common::milog::MiLogStream::operator<<<int,(int *)0>(v5, (const int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = *(_DWORD *)(v2 + 32);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    proto::HomeSceneCompBin::set_cur_module_id(proto_comp, this->cur_module_id_);
    __for_range = &this->home_module_data_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin, &__for_end) )
      {
        result = 0;
        goto LABEL_16;
      }
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
      module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
      home_module_data_ptr = std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
      home_module_bin = proto::HomeSceneCompBin::add_module_bin_list(proto_comp);
      v7 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)home_module_data_ptr);
      if ( HomeModuleData::toBin(v7, home_module_bin) )
        break;
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
    }
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "toBin",
      106);
    v8 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
           &v19,
           (const char (*)[44])"home_module_data_ptr->toBin() failed, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = -1;
  }
LABEL_16:
  if ( v20 == (char *)v2 )
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

// Line 114: range 00000000145AA692-00000000145AB43E
int32_t __cdecl HomeSceneComp::toSnapshotBin(HomeSceneComp *const this, proto::HomeSnapshotBin *snapshot_bin)
{
  std::map<unsigned int,unsigned int> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
  proto::HomeNpcBin *v11; // rax
  proto::HomeFurnitureSuiteBin *v12; // rax
  const HomeFurnitureData *v13; // r14
  proto::HomeFurnitureBin *v14; // rax
  Vector3 *p_djinn_pos; // r14
  proto::VectorBin *v16; // rax
  Vector3 *p_spawn_pos; // r14
  proto::VectorBin *v18; // rax
  Vector3 *v19; // r14
  proto::VectorBin *v20; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+1Ch] [rbp-254h] BYREF
  uint32_t world_scene_id; // [rsp+20h] [rbp-250h]
  uint32_t cur_room_scene_id; // [rsp+24h] [rbp-24Ch]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+28h] [rbp-248h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+30h] [rbp-240h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_begin_0; // [rsp+38h] [rbp-238h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end_0; // [rsp+40h] [rbp-230h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin_1; // [rsp+48h] [rbp-228h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end_1; // [rsp+50h] [rbp-220h] BYREF
  std::vector<HomeNpcData>::const_iterator __for_begin_2; // [rsp+58h] [rbp-218h] BYREF
  std::vector<HomeNpcData>::const_iterator __for_end_2; // [rsp+60h] [rbp-210h] BYREF
  std::vector<HomeFurnitureSuiteData>::const_iterator __for_begin_3; // [rsp+68h] [rbp-208h] BYREF
  std::vector<HomeFurnitureSuiteData>::const_iterator __for_end_3; // [rsp+70h] [rbp-200h] BYREF
  std::map<unsigned int,HomeTransferData>::const_iterator __for_begin_4; // [rsp+78h] [rbp-1F8h] BYREF
  std::map<unsigned int,HomeTransferData>::const_iterator __for_end_4; // [rsp+80h] [rbp-1F0h] BYREF
  std::vector<HomeMarkPointFurnitureData>::const_iterator __for_begin_5; // [rsp+88h] [rbp-1E8h] BYREF
  std::vector<HomeMarkPointFurnitureData>::const_iterator __for_end_5; // [rsp+90h] [rbp-1E0h] BYREF
  proto::HomeSceneCompSnapshotBin *scene_comp_bin; // [rsp+98h] [rbp-1D8h]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+A0h] [rbp-1D0h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v42; // [rsp+A8h] [rbp-1C8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+B0h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+B8h] [rbp-1B8h]
  proto::HomeModuleSnapshotBin *module_bin; // [rsp+C0h] [rbp-1B0h]
  std::map<unsigned int,HomeSceneData> *__for_range_0; // [rsp+C8h] [rbp-1A8h]
  std::map<unsigned int,unsigned int> *__for_range_6; // [rsp+D0h] [rbp-1A0h]
  const std::pair<unsigned int const,unsigned int> *v48; // [rsp+D8h] [rbp-198h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+E0h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *arrange_count; // [rsp+E8h] [rbp-188h]
  proto::Uint32PairBin *count_pair; // [rsp+F0h] [rbp-180h]
  const std::pair<unsigned int const,HomeSceneData> *v52; // [rsp+F8h] [rbp-178h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+100h] [rbp-170h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+108h] [rbp-168h]
  proto::HomeSceneSnapshotBin *scene_bin; // [rsp+110h] [rbp-160h]
  const HomeSceneArrangementData *arrangement_data; // [rsp+118h] [rbp-158h]
  const std::map<unsigned int,HomeBlockData> *__for_range_1; // [rsp+120h] [rbp-150h]
  const std::map<unsigned int,HomeTransferData> *__for_range_4; // [rsp+128h] [rbp-148h]
  const std::vector<HomeMarkPointFurnitureData> *__for_range_5; // [rsp+130h] [rbp-140h]
  const HomeMarkPointFurnitureData *mark_point_data; // [rsp+138h] [rbp-138h]
  proto::HomeMarkPointFurnitureDataBin *mark_point_bin; // [rsp+140h] [rbp-130h]
  const std::pair<unsigned int const,HomeTransferData> *v62; // [rsp+148h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeTransferData> >::type *guid; // [rsp+150h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeTransferData> >::type *transfer_data; // [rsp+158h] [rbp-118h]
  proto::HomeTransferSnapShotBin *transfer_bin; // [rsp+160h] [rbp-110h]
  const std::pair<unsigned int const,HomeBlockData> *v66; // [rsp+168h] [rbp-108h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+170h] [rbp-100h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+178h] [rbp-F8h]
  const std::vector<HomeNpcData> *__for_range_2; // [rsp+180h] [rbp-F0h]
  const std::vector<HomeFurnitureSuiteData> *__for_range_3; // [rsp+188h] [rbp-E8h]
  const HomeFurnitureSuiteData *suite; // [rsp+190h] [rbp-E0h]
  const HomeNpcData *npc; // [rsp+198h] [rbp-D8h]
  common::milog::MiLogStream v73; // [rsp+1A0h] [rbp-D0h] BYREF
  char v74[176]; // [rsp+1C0h] [rbp-B0h] BYREF

  v2 = (std::map<unsigned int,unsigned int> *)v74;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = (std::map<unsigned int,unsigned int> *)v3;
  }
  *(_QWORD *)v2->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v2->_M_t._M_impl._M_header._M_color = "1 48 48 31 furniture_arrange_count_map:175";
  v2->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)HomeSceneComp::toSnapshotBin;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  scene_comp_bin = proto::HomeSnapshotBin::mutable_scene_snapshot(snapshot_bin);
  proto::HomeSceneCompSnapshotBin::Clear(scene_comp_bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeSceneCompSnapshotBin::set_cur_module_id(scene_comp_bin, this->cur_module_id_);
  __for_range = &this->home_module_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v42 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v42);
    module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v42);
    if ( std::operator==<HomeModuleData>(module_data_ptr, 0LL) )
    {
      common::milog::MiLogStream::create(
        &v73,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "toSnapshotBin",
        122);
      v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
             &v73,
             (const char (*)[36])"module_data_ptr is null. module_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, module_id);
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v73);
    }
    else
    {
      v8 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
      world_scene_id = HomeModuleData::getWorldSceneId(v8);
      v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
      cur_room_scene_id = HomeModuleData::getCurRoomSceneId(v9);
      module_bin = proto::HomeSceneCompSnapshotBin::add_module_bin_list(scene_comp_bin);
      v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
      if ( *(_BYTE *)(((unsigned __int64)&v10->module_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)v10 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v10->module_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeModuleSnapshotBin::set_module_id(module_bin, v10->module_id);
      proto::HomeModuleSnapshotBin::set_cur_room_scene_id(module_bin, cur_room_scene_id);
      __for_range_0 = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr)->scene_data_map;
      __for_begin_0._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range_0)._M_node;
      __for_end_0._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v52 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin_0);
        scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v52);
        scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v52);
        scene_bin = proto::HomeModuleSnapshotBin::add_scene_bin_list(module_bin);
        if ( *(_BYTE *)(((unsigned __int64)scene_data >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)scene_data >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        proto::HomeSceneSnapshotBin::set_scene_id(scene_bin, scene_data->scene_id);
        arrangement_data = &scene_data->arrangement_data;
        __for_range_1 = &scene_data->arrangement_data.block_data_map;
        __for_begin_1._M_node = std::map<unsigned int,HomeBlockData>::begin(&scene_data->arrangement_data.block_data_map)._M_node;
        __for_end_1._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin_1, &__for_end_1) )
        {
          v66 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_1);
          block_id = std::get<0ul,unsigned int const,HomeBlockData>(v66);
          block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v66);
          __for_range_2 = &block_data->deploy_npc_vec;
          __for_begin_2._M_current = std::vector<HomeNpcData>::begin(&block_data->deploy_npc_vec)._M_current;
          __for_end_2._M_current = std::vector<HomeNpcData>::end(__for_range_2)._M_current;
          while ( __gnu_cxx::operator!=<HomeNpcData const*,std::vector<HomeNpcData>>(&__for_begin_2, &__for_end_2) )
          {
            npc = __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator*(&__for_begin_2);
            v11 = proto::HomeSceneSnapshotBin::add_deploy_npc_list(scene_bin);
            HomeNpcData::toBin(npc, v11);
            __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator++(&__for_begin_2);
          }
          __for_range_3 = &block_data->furniure_suite_vec;
          __for_begin_3._M_current = std::vector<HomeFurnitureSuiteData>::begin(&block_data->furniure_suite_vec)._M_current;
          __for_end_3._M_current = std::vector<HomeFurnitureSuiteData>::end(__for_range_3)._M_current;
          while ( __gnu_cxx::operator!=<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>(
                    &__for_begin_3,
                    &__for_end_3) )
          {
            suite = __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator*(&__for_begin_3);
            v12 = proto::HomeSceneSnapshotBin::add_furniture_suite_list(scene_bin);
            HomeFurnitureSuiteData::toBin(suite, v12);
            __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator++(&__for_begin_3);
          }
          if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          if ( world_scene_id == *scene_id )
          {
            if ( *(_BYTE *)(((unsigned __int64)&block_data->comfort_value >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&block_data->comfort_value >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            proto::HomeModuleSnapshotBin::add_world_scene_block_comfort_value_list(
              module_bin,
              block_data->comfort_value);
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_1);
        }
        if ( std::optional<HomeFurnitureData>::has_value(&arrangement_data->main_house) )
        {
          v13 = std::optional<HomeFurnitureData>::value(&arrangement_data->main_house);
          v14 = proto::HomeSceneSnapshotBin::mutable_main_house(scene_bin);
          HomeFurnitureData::toBin(v13, v14);
          p_djinn_pos = &arrangement_data->djinn_pos;
          v16 = proto::HomeSceneSnapshotBin::mutable_djinn_pos(scene_bin);
          Vector3::toBin(p_djinn_pos, v16);
        }
        if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( cur_room_scene_id == *scene_id )
        {
          if ( *(_BYTE *)(((unsigned __int64)&arrangement_data->comfort_value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&arrangement_data->comfort_value >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::HomeModuleSnapshotBin::set_room_scene_comfort_value(module_bin, arrangement_data->comfort_value);
        }
        __for_range_4 = &arrangement_data->scene_transfer_map;
        __for_begin_4._M_node = std::map<unsigned int,HomeTransferData>::begin(&arrangement_data->scene_transfer_map)._M_node;
        __for_end_4._M_node = std::map<unsigned int,HomeTransferData>::end(__for_range_4)._M_node;
        while ( std::operator!=(&__for_begin_4, &__for_end_4) )
        {
          v62 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeTransferData>>::operator*(&__for_begin_4);
          guid = std::get<0ul,unsigned int const,HomeTransferData>(v62);
          transfer_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeTransferData> >::type *)std::get<1ul,unsigned int const,HomeTransferData>(v62);
          transfer_bin = proto::HomeSceneSnapshotBin::add_transfer_bin_list(scene_bin);
          if ( *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)guid & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guid >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::HomeTransferSnapShotBin::set_furniture_guid(transfer_bin, *guid);
          if ( *(_BYTE *)(((unsigned __int64)&transfer_data->furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)transfer_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&transfer_data->furniture_id >> 3)
                                                                        + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::HomeTransferSnapShotBin::set_furniture_id(transfer_bin, transfer_data->furniture_id);
          p_spawn_pos = &transfer_data->spawn_pos;
          v18 = proto::HomeTransferSnapShotBin::mutable_spawn_pos(transfer_bin);
          Vector3::toBin(p_spawn_pos, v18);
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeTransferData>>::operator++(&__for_begin_4);
        }
        __for_range_5 = &arrangement_data->normal_mark_point_vec;
        __for_begin_5._M_current = std::vector<HomeMarkPointFurnitureData>::begin(&arrangement_data->normal_mark_point_vec)._M_current;
        __for_end_5._M_current = std::vector<HomeMarkPointFurnitureData>::end(__for_range_5)._M_current;
        while ( __gnu_cxx::operator!=<HomeMarkPointFurnitureData const*,std::vector<HomeMarkPointFurnitureData>>(
                  &__for_begin_5,
                  &__for_end_5) )
        {
          mark_point_data = __gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData const*,std::vector<HomeMarkPointFurnitureData>>::operator*(&__for_begin_5);
          mark_point_bin = proto::HomeSceneSnapshotBin::add_normal_mark_point_list(scene_bin);
          if ( *(_BYTE *)(((unsigned __int64)mark_point_data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)mark_point_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)mark_point_data >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::HomeMarkPointFurnitureDataBin::set_guid(mark_point_bin, mark_point_data->guid);
          if ( *(_BYTE *)(((unsigned __int64)&mark_point_data->furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)mark_point_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&mark_point_data->furniture_id >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::HomeMarkPointFurnitureDataBin::set_furniture_id(mark_point_bin, mark_point_data->furniture_id);
          v19 = &mark_point_data->spawn_pos;
          v20 = proto::HomeMarkPointFurnitureDataBin::mutable_pos(mark_point_bin);
          Vector3::toBin(v19, v20);
          __gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData const*,std::vector<HomeMarkPointFurnitureData>>::operator++(&__for_begin_5);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin_0);
      }
      v21 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
      HomeModuleData::getFurnitureArrangeCountMap(v2 + 1, v21);
      __for_range_6 = v2 + 1;
      __for_begin_5._M_current = (const HomeMarkPointFurnitureData *)std::map<unsigned int,unsigned int>::begin(v2 + 1)._M_node;
      __for_end_5._M_current = (const HomeMarkPointFurnitureData *)std::map<unsigned int,unsigned int>::end(__for_range_6)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin_5,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end_5) )
      {
        v48 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_5);
        furniture_id = std::get<0ul,unsigned int const,unsigned int>(v48);
        arrange_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v48);
        count_pair = proto::HomeModuleSnapshotBin::add_furniture_arrange_count_list(module_bin);
        if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::Uint32PairBin::set_key(count_pair, *furniture_id);
        if ( *(_BYTE *)(((unsigned __int64)arrange_count >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)arrange_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)arrange_count >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto::Uint32PairBin::set_value(count_pair, *arrange_count);
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin_5);
      }
      std::map<unsigned int,unsigned int>::~map(v2 + 1);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
  result = 0;
  if ( v74 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2->_M_t._M_impl.gap0 = 1172321806LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 188: range 00000000145AB440-00000000145AB587
int32_t __cdecl HomeSceneComp::init(HomeSceneComp *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  HomeWorld *home_world; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  home_world = HomeSceneComp::getHomeWorld(this);
  if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(home_world->_vptr_World + 3);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(HomeWorld *))v1)(home_world) )
    return 0;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/home/home_scene_comp.cpp",
    "init",
    192);
  v2 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
         &v6,
         (const char (*)[24])"world init fails, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 201: range 00000000145AB588-00000000145AB6CF
int32_t __cdecl HomeSceneComp::start(HomeSceneComp *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  HomeWorld *home_world; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  home_world = HomeSceneComp::getHomeWorld(this);
  if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(home_world->_vptr_World + 4);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  if ( !(*(unsigned int (__fastcall **)(HomeWorld *))v1)(home_world) )
    return 0;
  common::milog::MiLogStream::create(
    &v6,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/home/home_scene_comp.cpp",
    "start",
    205);
  v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
         &v6,
         (const char (*)[25])"world start fails, uid: ");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
  common::milog::MiLogStream::~MiLogStream(&v6);
  return -1;
};

// Line 212: range 00000000145AB6D0-00000000145AB810
int32_t __cdecl HomeSceneComp::onStop(HomeSceneComp *const this)
{
  unsigned __int64 v1; // rax
  common::milog::MiLogStream *v2; // rbx
  unsigned int val; // [rsp+14h] [rbp-3Ch] BYREF
  HomeWorld *home_world; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v6; // [rsp+20h] [rbp-30h] BYREF

  home_world = HomeSceneComp::getHomeWorld(this);
  if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v1 = (unsigned __int64)(home_world->_vptr_World + 5);
  if ( *(_BYTE *)((v1 >> 3) + 0x7FFF8000) )
    v1 = __asan_report_load8();
  if ( (*(unsigned int (__fastcall **)(HomeWorld *))v1)(home_world) )
  {
    common::milog::MiLogStream::create(
      &v6,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_scene_comp.cpp",
      "onStop",
      216);
    v2 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
           &v6,
           (const char (*)[25])"world onStop fails, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, &val);
    common::milog::MiLogStream::~MiLogStream(&v6);
  }
  return 0;
};

// Line 222: range 00000000145AB812-00000000145AB81C
void __cdecl HomeSceneComp::onDailyRefresh(HomeSceneComp *const this)
{
  ;
};

// Line 226: range 00000000145AB81E-00000000145AB8C1
void __cdecl HomeSceneComp::resetByGm(HomeSceneComp *const this)
{
  HomeModuleData *v1; // rax
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+20h] [rbp-20h]
  std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *__in; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+38h] [rbp-8h]

  __for_range = &this->home_module_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
    module_data_ptr = std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
    v1 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
    HomeModuleData::resetByGm(v1);
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
};

// Line 234: range 00000000145AB8C2-00000000145ABB9A
uint32_t __cdecl HomeSceneComp::getOneNotClosedModuleId(HomeSceneComp *const this)
{
  std::set<unsigned int> *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  uint32_t v5; // r14d
  uint32_t result; // eax
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+10h] [rbp-100h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+18h] [rbp-F8h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __x; // [rsp+20h] [rbp-F0h] BYREF
  std::_Rb_tree_const_iterator<unsigned int>::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+30h] [rbp-E0h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v12; // [rsp+38h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+40h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+48h] [rbp-C8h]
  std::shared_ptr<Config> v15; // [rsp+50h] [rbp-C0h] BYREF
  char v16[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (std::set<unsigned int> *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (std::set<unsigned int> *)v2;
  }
  *(_QWORD *)v1->_M_t._M_impl.gap0 = 1102416563LL;
  *(_QWORD *)&v1->_M_t._M_impl._M_header._M_color = "1 48 48 29 closed_home_module_id_set:235";
  v1->_M_t._M_impl._M_header._M_parent = (std::_Rb_tree_node_base::_Base_ptr)HomeSceneComp::getOneNotClosedModuleId;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v15);
  v4 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v15);
  FeatureSwitchMgr::getAllClosedHomeModule(v1 + 1, &v4->feature_switch_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v15);
  __for_range = &this->home_module_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
  while ( 1 )
  {
    if ( !std::operator!=(&__for_begin, &__for_end) )
    {
      v5 = 0;
      goto LABEL_12;
    }
    v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v12);
    module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v12);
    __y._M_node = std::set<unsigned int>::end(v1 + 1)._M_node;
    __x._M_node = std::set<unsigned int>::find(v1 + 1, module_id)._M_node;
    if ( std::operator==(&__x, &__y) )
      break;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
  if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  v5 = *module_id;
LABEL_12:
  std::set<unsigned int>::~set(v1 + 1);
  result = v5;
  if ( v16 == (char *)v1 )
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

// Line 247: range 00000000145ABB9C-00000000145ABD24
const HomeSceneComp *__fastcall HomeSceneComp::getHomeModuleData(
        const HomeSceneComp *const this,
        __int64 module_id,
        int a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::pointer v6; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::_Self __y; // [rsp+28h] [rbp-88h] BYREF
  char v10[128]; // [rsp+30h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 13 module_id:246 64 8 8 iter:248";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::getHomeModuleData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116352;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<HomeModuleData>>::const_iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::find(
                                                                                           (const std::map<unsigned int,std::shared_ptr<HomeModuleData>> *const)(module_id + 56),
                                                                                           (const std::map<unsigned int,std::shared_ptr<HomeModuleData>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end((const std::map<unsigned int,std::shared_ptr<HomeModuleData>> *const)(module_id + 56))._M_node;
  if ( std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::_Self *)(v3 + 64),
         &__y) )
  {
    std::shared_ptr<HomeModuleData>::shared_ptr((std::shared_ptr<HomeModuleData> *const)this, 0LL);
  }
  else
  {
    v6 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > > *const)(v3 + 64));
    std::shared_ptr<HomeModuleData>::shared_ptr((std::shared_ptr<HomeModuleData> *const)this, &v6->second);
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

// Line 257: range 00000000145ABD26-00000000145ABD80
HomeModuleDataPtr __cdecl HomeSceneComp::getCurHomeModuleData(HomeSceneComp *const this)
{
  const HomeSceneComp *v1; // rsi
  int CurModuleId; // esi
  HomeModuleDataPtr result; // rax
  HomeSceneComp *thisa; // [rsp+0h] [rbp-10h]

  thisa = (HomeSceneComp *)v1;
  CurModuleId = HomeSceneComp::getCurModuleId(v1);
  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16(this);
  HomeSceneComp::getHomeModuleData(this, (__int64)thisa, CurModuleId);
  result._M_ptr = (std::__shared_ptr<HomeModuleData,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 262: range 00000000145ABD82-00000000145AC256
HomeSceneComp *__fastcall HomeSceneComp::createHomeModuleData(HomeSceneComp *const this, __int64 module_id, int a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  HomeModuleData *v10; // rax
  std::shared_ptr<HomeModuleData> *v11; // r8
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+24h] [rbp-DCh] BYREF
  std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::_Self __y; // [rsp+28h] [rbp-D8h] BYREF
  common::milog::MiLogStream v18; // [rsp+30h] [rbp-D0h] BYREF
  char v19[176]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 13 module_id:261 64 8 8 iter:263 96 16 24 home_module_data_ptr:270";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::createHomeModuleData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202178560;
  *(_DWORD *)(v3 + 48) = a3;
  *(std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator *)(v3 + 64) = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::find(
                                                                                     (std::map<unsigned int,std::shared_ptr<HomeModuleData>> *const)(module_id + 56),
                                                                                     (const std::map<unsigned int,std::shared_ptr<HomeModuleData>>::key_type *)(v3 + 48));
  __y._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end((std::map<unsigned int,std::shared_ptr<HomeModuleData>> *const)(module_id + 56))._M_node;
  if ( std::operator!=(
         (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::_Self *)(v3 + 64),
         &__y) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "createHomeModuleData",
      266);
    v6 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v18,
           (const char (*)[37])"world_data already exist. module_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v18);
    std::shared_ptr<HomeModuleData>::shared_ptr((std::shared_ptr<HomeModuleData> *const)this, 0LL);
    goto LABEL_18;
  }
  if ( *(_BYTE *)(((unsigned __int64)(module_id + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  common::tools::perf::make_shared<HomeModuleData,Home &,unsigned int &>(
    (Home *)(v3 + 96),
    *(unsigned int **)(module_id + 24),
    (Home *)(v3 + 48),
    *(unsigned int **)(module_id + 24));
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "createHomeModuleData",
      273);
    v7 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v18,
           (const char (*)[47])"MAKE_SHARED<HomeModuleData> failed, module_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)(module_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  else
  {
    v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 96));
    if ( !HomeModuleData::onCreate(v10) )
    {
      std::map<unsigned int,std::shared_ptr<HomeModuleData>>::emplace<unsigned int &,std::shared_ptr<HomeModuleData>&>(
        (std::map<unsigned int,std::shared_ptr<HomeModuleData>> *const)(module_id + 56),
        (unsigned int *)(v3 + 48),
        (std::shared_ptr<HomeModuleData> *)(v3 + 96),
        (unsigned int *)(module_id + 56),
        v11);
      std::shared_ptr<HomeModuleData>::shared_ptr(
        (std::shared_ptr<HomeModuleData> *const)this,
        (std::shared_ptr<HomeModuleData> *)(v3 + 96));
      goto LABEL_17;
    }
    common::milog::MiLogStream::create(
      &v18,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "createHomeModuleData",
      279);
    v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            &v18,
            (const char (*)[50])"home_module_data_ptr->onCreate failed, module_id:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])" uid: ");
    if ( *(_BYTE *)(((unsigned __int64)(module_id + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8();
  }
  val = Home::getHomeUid(*(const Home *const *)(module_id + 24));
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
  common::milog::MiLogStream::~MiLogStream(&v18);
  std::shared_ptr<HomeModuleData>::shared_ptr((std::shared_ptr<HomeModuleData> *const)this, 0LL);
LABEL_17:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 96));
LABEL_18:
  if ( v19 == (char *)v3 )
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
  return this;
};

// Line 287: range 00000000145AC258-00000000145AC5A8
__int64 __fastcall HomeSceneComp::changeCurModule(HomeSceneComp *const this, uint32_t new_module_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  __int64 result; // rax
  uint32_t HomeUid; // eax
  HomePlantComp *PlantComp; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  uint32_t old_module_id; // [rsp+20h] [rbp-A0h]
  int32_t ret; // [rsp+24h] [rbp-9Ch]
  HomeWorld *home_world; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v15; // [rsp+30h] [rbp-90h] BYREF
  char v16[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 new_module_id:286";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::changeCurModule;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = new_module_id;
  old_module_id = HomeSceneComp::getCurModuleId(this);
  home_world = HomeSceneComp::getHomeWorld(this);
  ret = HomeWorld::onChangeModule(home_world, old_module_id, *(_DWORD *)(v2 + 32));
  if ( ret )
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "changeCurModule",
      293);
    v5 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v15,
           (const char (*)[33])"onChangeModule failed. home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v6, (const char (*)[16])" new_module_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 32));
    common::milog::MiLogStream::~MiLogStream(&v15);
    result = (unsigned int)ret;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v15,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/home/home_scene_comp.cpp",
      "changeCurModule",
      296);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator()(
      &v15,
      "home change cur_module from %u to %u, home_uid:%u",
      old_module_id,
      *(unsigned int *)(v2 + 32),
      HomeUid);
    common::milog::MiLogStream::~MiLogStream(&v15);
    HomeSceneComp::setCurModuleId(this, *(_DWORD *)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    PlantComp = Home::getPlantComp(this->home_);
    HomePlantComp::onChangeModule(PlantComp, old_module_id, *(_DWORD *)(v2 + 32));
    result = 0LL;
  }
  if ( v16 == (char *)v2 )
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

// Line 305: range 00000000145AC5AA-00000000145AC867
void __cdecl HomeSceneComp::onCurModuleIdClosed(HomeSceneComp *const this)
{
  uint32_t HomeUid; // eax
  unsigned __int64 v2; // rax
  uint32_t v3; // eax
  uint32_t v4; // eax
  uint32_t cur_module_id; // [rsp+10h] [rbp-40h]
  uint32_t new_module_id; // [rsp+14h] [rbp-3Ch]
  HomeWorld *home_world; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v8; // [rsp+20h] [rbp-30h] BYREF

  cur_module_id = HomeSceneComp::getCurModuleId(this);
  common::milog::MiLogStream::create(
    &v8,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/home/home_scene_comp.cpp",
    "onCurModuleIdClosed",
    307);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  HomeUid = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator()(
    &v8,
    "because cur_module is closed. kick all player in home world, cur_module:%u home_uid:%u",
    cur_module_id,
    HomeUid);
  common::milog::MiLogStream::~MiLogStream(&v8);
  home_world = HomeSceneComp::getHomeWorld(this);
  if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(home_world->_vptr_World + 15);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(HomeWorld *, __int64, __int64))v2)(home_world, 6LL, 1LL);
  new_module_id = HomeSceneComp::getOneNotClosedModuleId(this);
  if ( new_module_id )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/home/home_scene_comp.cpp",
      "onCurModuleIdClosed",
      314);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v3 = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator()(
      &v8,
      "because cur_module is closed. home change cur_module from %u to %u, home_uid:%u",
      cur_module_id,
      new_module_id,
      v3);
    common::milog::MiLogStream::~MiLogStream(&v8);
    HomeSceneComp::changeCurModule(this, new_module_id);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_scene_comp.cpp",
      "onCurModuleIdClosed",
      320);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    v4 = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator()(&v8, off_25410EE0, cur_module_id, v4);
    common::milog::MiLogStream::~MiLogStream(&v8);
  }
};

// Line 325: range 00000000145AC868-00000000145AC945
void __cdecl HomeSceneComp::onEditModeChange(HomeSceneComp *const this)
{
  HomeBasicComp *BasicComp; // rax
  unsigned __int64 v2; // rax
  bool is_in_edit_mode; // [rsp+17h] [rbp-9h]
  HomeWorld *home_world; // [rsp+18h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  BasicComp = Home::getBasicComp(this->home_);
  is_in_edit_mode = HomeBasicComp::getIsInEditMode(BasicComp);
  home_world = HomeSceneComp::getHomeWorld(this);
  if ( *(_BYTE *)(((unsigned __int64)home_world >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  v2 = (unsigned __int64)(home_world->_vptr_World + 15);
  if ( *(_BYTE *)((v2 >> 3) + 0x7FFF8000) )
    v2 = __asan_report_load8();
  (*(void (__fastcall **)(HomeWorld *, __int64, _QWORD))v2)(home_world, 4LL, 0LL);
  if ( !is_in_edit_mode )
    HomeWorld::refreshArrangement(home_world, is_in_edit_mode);
};

// Line 337: range 00000000145AC946-00000000145AD8C9
void __fastcall HomeSceneComp::onHomeLevelChange(HomeSceneComp *const this, uint32_t old_level, uint32_t new_level)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *v10; // r14
  std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> *v11; // rax
  std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>::mapped_type *v12; // rax
  unsigned __int64 v13; // rax
  uint32_t v14; // ecx
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type v15; // edi
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type v16; // esi
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *v17; // r14
  std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> *v18; // rax
  std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>::mapped_type *v19; // rax
  unsigned __int64 v20; // rax
  common::milog::MiLogStream *v21; // rax
  Player *v22; // rax
  bool *p_is_unlocked; // rax
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData*> >::type v24; // edi
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > >::type v25; // esi
  Home *home; // r14
  Player *v27; // rax
  bool is_has_block_be_unlock; // [rsp+1Fh] [rbp-231h]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+20h] [rbp-230h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+28h] [rbp-228h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_begin_0; // [rsp+30h] [rbp-220h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end_0; // [rsp+38h] [rbp-218h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_begin_1; // [rsp+40h] [rbp-210h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end_1; // [rsp+48h] [rbp-208h] BYREF
  const data::HomeworldLevelExcelConfig *new_level_config; // [rsp+50h] [rbp-200h]
  HomeWorld *home_world; // [rsp+58h] [rbp-1F8h]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+60h] [rbp-1F0h]
  PlayerHomeComp *owner_player_home_comp; // [rsp+68h] [rbp-1E8h]
  std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>> *__for_range_2; // [rsp+70h] [rbp-1E0h]
  std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> > *v42; // [rsp+78h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> > >::type *module_id_0; // [rsp+80h] [rbp-1D0h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> > >::type *scene_map; // [rsp+88h] [rbp-1C8h]
  PlayerHomeModule *player_home_module; // [rsp+90h] [rbp-1C0h]
  std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> *__for_range_3; // [rsp+98h] [rbp-1B8h]
  std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > *v47; // [rsp+A0h] [rbp-1B0h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > >::type *scene_id_0; // [rsp+A8h] [rbp-1A8h]
  std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > >::type *block_map; // [rsp+B0h] [rbp-1A0h]
  PlayerHomeScene *player_home_scene; // [rsp+B8h] [rbp-198h]
  std::map<unsigned int,HomeBlockData*> *__for_range_4; // [rsp+C0h] [rbp-190h]
  std::pair<unsigned int const,HomeBlockData*> *v52; // [rsp+C8h] [rbp-188h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData*> >::type *block_id_0; // [rsp+D0h] [rbp-180h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData*> >::type *block_data_ptr; // [rsp+D8h] [rbp-178h]
  PlayerHomeBlock *player_home_block; // [rsp+E0h] [rbp-170h]
  std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *__in; // [rsp+E8h] [rbp-168h]
  std::tuple_element<0,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+F0h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+F8h] [rbp-158h]
  std::map<unsigned int,HomeSceneData> *__for_range_0; // [rsp+100h] [rbp-150h]
  std::pair<unsigned int const,HomeSceneData> *v60; // [rsp+108h] [rbp-148h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+110h] [rbp-140h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+118h] [rbp-138h]
  std::map<unsigned int,HomeBlockData> *__for_range_1; // [rsp+120h] [rbp-130h]
  std::pair<unsigned int const,HomeBlockData> *v64; // [rsp+128h] [rbp-128h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+130h] [rbp-120h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+138h] [rbp-118h]
  common::milog::MiLogStream v67; // [rsp+140h] [rbp-110h] BYREF
  char v68[240]; // [rsp+160h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v68;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 48 4 12 home_uid:338 64 4 13 new_level:336 80 16 20 owner_player_ptr:382 112 48 22 unlocked_block_map:348";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::onHomeLevelChange;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 64) = new_level;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v3 + 48) = Home::getHomeUid(this->home_);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v3 + 80));
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  new_level_config = data::HomeWorldExcelConfigMgrBase::findHomeworldLevelExcelConfig(
                       &v6->design_config.txt_config_mgr.home_config_mgr,
                       *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v3 + 80));
  if ( new_level_config )
  {
    home_world = HomeSceneComp::getHomeWorld(this);
    std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>::map((std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>> *const)(v3 + 112));
    __for_range = &this->home_module_data_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
      module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
      module_data_ptr = std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(__in);
      __for_range_0 = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr)->scene_data_map;
      __for_begin_0._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range_0)._M_node;
      __for_end_0._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v60 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin_0);
        scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v60);
        scene_data = std::get<1ul,unsigned int const,HomeSceneData>(v60);
        is_has_block_be_unlock = 0;
        __for_range_1 = &scene_data->arrangement_data.block_data_map;
        __for_begin_1._M_node = std::map<unsigned int,HomeBlockData>::begin(&scene_data->arrangement_data.block_data_map)._M_node;
        __for_end_1._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_1)._M_node;
        while ( std::operator!=(&__for_begin_1, &__for_end_1) )
        {
          v64 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_1);
          block_id = std::get<0ul,unsigned int const,HomeBlockData>(v64);
          block_data = std::get<1ul,unsigned int const,HomeBlockData>(v64);
          if ( *(char *)(((unsigned __int64)&block_data->is_unlocked >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&block_data->is_unlocked);
          if ( block_data->is_unlocked )
          {
            v10 = block_data;
            v11 = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>::operator[](
                    (std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>> *const)(v3 + 112),
                    module_id);
            v12 = std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>::operator[](v11, scene_id);
            v13 = (unsigned __int64)std::map<unsigned int,HomeBlockData *>::operator[](v12, block_id);
            if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
              v13 = __asan_report_store8(v13);
            *(_QWORD *)v13 = v10;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            v14 = *block_id;
            if ( *(_BYTE *)(((unsigned __int64)&new_level_config->outdoor_unlock_block_count >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)new_level_config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&new_level_config->outdoor_unlock_block_count >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            if ( v14 <= new_level_config->outdoor_unlock_block_count )
            {
              common::milog::MiLogStream::create(
                &v67,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/home/home_scene_comp.cpp",
                "onHomeLevelChange",
                368);
              if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              v15 = *block_id;
              if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3)
                                                                           + 0x7FFF8000) )
              {
                v15 = (unsigned int)scene_id;
                __asan_report_load4();
              }
              v16 = *scene_id;
              if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3)
                                                                            + 0x7FFF8000) )
              {
                v15 = (unsigned int)module_id;
                __asan_report_load4();
              }
              common::milog::MiLogStream::operator()(
                &v67,
                "unlock block. home_uid:%u module_id:%u scene_id:%u block_id:%u",
                *(unsigned int *)(v3 + 48),
                *module_id,
                v16,
                v15);
              common::milog::MiLogStream::~MiLogStream(&v67);
              if ( *(char *)(((unsigned __int64)&block_data->is_unlocked >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&block_data->is_unlocked);
              block_data->is_unlocked = 1;
              HomeBlockData::onDataChanged(block_data);
              v17 = block_data;
              v18 = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>::operator[](
                      (std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>> *const)(v3 + 112),
                      module_id);
              v19 = std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>::operator[](v18, scene_id);
              v20 = (unsigned __int64)std::map<unsigned int,HomeBlockData *>::operator[](v19, block_id);
              if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
                v20 = __asan_report_store8(v20);
              *(_QWORD *)v20 = v17;
              is_has_block_be_unlock = 1;
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_1);
        }
        if ( is_has_block_be_unlock )
          HomeSceneArrangementData::onDataChanged(&scene_data->arrangement_data);
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin_0);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
    }
    World::findPlayerPtr((World *const)(v3 + 80), (uint32_t)home_world);
    if ( std::operator==<Player>((const std::shared_ptr<Player> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v67,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "onHomeLevelChange",
        385);
      v21 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              &v67,
              (const char (*)[37])"owner_player_ptr not find. home_uid:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream(&v67);
    }
    else
    {
      v22 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      owner_player_home_comp = Player::getHomeComp(v22);
      __for_range_2 = (std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>> *)(v3 + 112);
      __for_begin._M_node = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>::begin((std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>> *const)(v3 + 112))._M_node;
      __for_end._M_node = std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>::end(__for_range_2)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> > >::_Self *)&__for_begin,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> > >::_Self *)&__for_end) )
      {
        v42 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> > > *const)&__for_begin);
        module_id_0 = std::get<0ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>(v42);
        scene_map = std::get<1ul,unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>(v42);
        if ( *(_BYTE *)(((unsigned __int64)module_id_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)module_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id_0 >> 3)
                                                                        + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        player_home_module = PlayerHomeComp::getHomeModule(owner_player_home_comp, *module_id_0);
        __for_range_3 = scene_map;
        __for_begin_0._M_node = std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>::begin(scene_map)._M_node;
        __for_end_0._M_node = std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>::end(__for_range_3)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > >::_Self *)&__for_begin_0,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > >::_Self *)&__for_end_0) )
        {
          v47 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,HomeBlockData *>>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > > *const)&__for_begin_0);
          scene_id_0 = std::get<0ul,unsigned int const,std::map<unsigned int,HomeBlockData *>>(v47);
          block_map = std::get<1ul,unsigned int const,std::map<unsigned int,HomeBlockData *>>(v47);
          if ( *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)scene_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3)
                                                                         + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          player_home_scene = PlayerHomeModule::getScene(player_home_module, *scene_id_0);
          if ( *(char *)(((unsigned __int64)&player_home_scene->is_unlocked >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&player_home_scene->is_unlocked);
          if ( player_home_scene->is_unlocked )
          {
            __for_range_4 = block_map;
            __for_begin_1._M_node = std::map<unsigned int,HomeBlockData *>::begin(block_map)._M_node;
            __for_end_1._M_node = std::map<unsigned int,HomeBlockData *>::end(__for_range_4)._M_node;
            while ( std::operator!=(
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData*> >::_Self *)&__for_begin_1,
                      (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData*> >::_Self *)&__for_end_1) )
            {
              v52 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData *>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData*> > *const)&__for_begin_1);
              block_id_0 = std::get<0ul,unsigned int const,HomeBlockData *>(v52);
              block_data_ptr = std::get<1ul,unsigned int const,HomeBlockData *>(v52);
              if ( *(_BYTE *)(((unsigned __int64)block_id_0 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)block_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id_0 >> 3)
                                                                             + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              player_home_block = PlayerHomeScene::getBlock(player_home_scene, *block_id_0);
              p_is_unlocked = &player_home_block->is_unlocked;
              if ( *(_BYTE *)(((unsigned __int64)p_is_unlocked >> 3) + 0x7FFF8000) != 0
                && ((unsigned __int8)p_is_unlocked & 7) >= *(_BYTE *)(((unsigned __int64)p_is_unlocked >> 3) + 0x7FFF8000) )
              {
                __asan_report_load1(p_is_unlocked);
              }
              if ( !player_home_block->is_unlocked )
              {
                if ( *(_BYTE *)(((unsigned __int64)&player_home_block->is_unlocked >> 3) + 0x7FFF8000) != 0
                  && (((unsigned __int8)player_home_block + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&player_home_block->is_unlocked >> 3)
                                                                                + 0x7FFF8000) )
                {
                  __asan_report_store1(&player_home_block->is_unlocked);
                }
                player_home_block->is_unlocked = 1;
                if ( *(_BYTE *)(((unsigned __int64)block_data_ptr >> 3) + 0x7FFF8000) )
                  __asan_report_load8();
                PlayerHomeComp::addHomeBlockDefaultFurniture(owner_player_home_comp, *block_data_ptr);
                common::milog::MiLogStream::create(
                  &v67,
                  &common::milog::MiLogDefault::default_log_obj_,
                  1u,
                  "./src/home/home_scene_comp.cpp",
                  "onHomeLevelChange",
                  411);
                if ( *(_BYTE *)(((unsigned __int64)block_id_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)block_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id_0 >> 3)
                                                                               + 0x7FFF8000) )
                {
                  __asan_report_load4();
                }
                v24 = *block_id_0;
                if ( *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)scene_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id_0 >> 3)
                                                                               + 0x7FFF8000) )
                {
                  v24 = (unsigned int)scene_id_0;
                  __asan_report_load4();
                }
                v25 = *scene_id_0;
                if ( *(_BYTE *)(((unsigned __int64)module_id_0 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)module_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id_0 >> 3)
                                                                                + 0x7FFF8000) )
                {
                  v24 = (unsigned int)module_id_0;
                  __asan_report_load4();
                }
                common::milog::MiLogStream::operator()(
                  &v67,
                  "addHomeBlockDefaultFurniture. home_uid:%u module_id:%u scene_id:%u block_id:%u",
                  *(unsigned int *)(v3 + 48),
                  *module_id_0,
                  v25,
                  v24);
                common::milog::MiLogStream::~MiLogStream(&v67);
              }
              std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData *>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData*> > *const)&__for_begin_1);
            }
          }
          std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,HomeBlockData *>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,HomeBlockData*> > > *const)&__for_begin_0);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>> > > *const)&__for_begin);
      }
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      home = this->home_;
      v27 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      Home::notifyHomeComfortInfo(home, v27);
    }
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 80));
    std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData *>>>::~map((std::map<unsigned int,std::map<unsigned int,std::map<unsigned int,HomeBlockData*>>> *const)(v3 + 112));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v67,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "onHomeLevelChange",
      342);
    v7 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
           &v67,
           (const char (*)[37])"new_level_config is null. new_level:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" home_uid:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v67);
  }
  if ( v68 == (char *)v3 )
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
};

// Line 420: range 00000000145AD8CA-00000000145ADA9F
uint32_t __cdecl HomeSceneComp::getMaxModuleComfortValue(HomeSceneComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v4; // rax
  const unsigned int *v5; // rdx
  uint32_t result; // eax
  unsigned int __b; // [rsp+1Ch] [rbp-94h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+20h] [rbp-90h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+28h] [rbp-88h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+30h] [rbp-80h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v11; // [rsp+38h] [rbp-78h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+40h] [rbp-70h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+48h] [rbp-68h]
  char v14[96]; // [rsp+50h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 10 result:421";
  *(_QWORD *)(v1 + 16) = HomeSceneComp::getMaxModuleComfortValue;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  *(_DWORD *)(v1 + 32) = 0;
  __for_range = &this->home_module_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v11 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v11);
    module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v11);
    v4 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
    __b = HomeModuleData::getComfortValue(v4);
    v5 = std::max<unsigned int>((const unsigned int *)(v1 + 32), &__b);
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v1 + 32) = *v5;
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
  result = *(_DWORD *)(v1 + 32);
  if ( v14 == (char *)v1 )
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

// Line 430: range 00000000145ADAA0-00000000145ADB2E
uint32_t __cdecl HomeSceneComp::getComfortLevel(HomeSceneComp *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v1; // rax
  uint32_t ComfortLevelByValue; // ebx
  uint32_t max_module_comfort_value; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v5[2]; // [rsp+20h] [rbp-20h] BYREF

  max_module_comfort_value = HomeSceneComp::getMaxModuleComfortValue(this);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v5);
  v1 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v5);
  ComfortLevelByValue = HomeWorldExcelConfigMgr::getComfortLevelByValue(
                          &v1->design_config.txt_config_mgr.home_config_mgr,
                          max_module_comfort_value);
  std::shared_ptr<Config>::~shared_ptr(v5);
  return ComfortLevelByValue;
};

// Line 436: range 00000000145ADB30-00000000145ADD21
uint32_t __cdecl HomeSceneComp::getModuleComfortValue(HomeSceneComp *const this, uint32_t module_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t HomeUid; // eax
  uint32_t ComfortValue; // r14d
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  uint32_t result; // eax
  common::milog::MiLogStream v9; // [rsp+10h] [rbp-90h] BYREF
  char v10[112]; // [rsp+30h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 module_data_ptr:437";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::getModuleComfortValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v2 + 32), (__int64)this, module_id);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v2 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_scene_comp.cpp",
      "getModuleComfortValue",
      440);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator()(&v9, "module_id:%u not find. home_uid:%u", module_id, HomeUid);
    common::milog::MiLogStream::~MiLogStream(&v9);
    ComfortValue = 0;
  }
  else
  {
    v7 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    ComfortValue = HomeModuleData::getComfortValue(v7);
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v2 + 32));
  result = ComfortValue;
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

// Line 448: range 00000000145ADD22-00000000145AE162
int32_t __cdecl HomeSceneComp::setComfortValueByGm(
        HomeSceneComp *const this,
        uint32_t module_id,
        uint32_t block_id,
        uint32_t comfort_value)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r13
  int32_t v7; // r14d
  HomeModuleData *v8; // rax
  HomeModuleData *v9; // rax
  int32_t result; // eax
  HomeSceneData *world_scene_data_ptr; // [rsp+28h] [rbp-A8h]
  HomeBlockData *block_data_ptr; // [rsp+30h] [rbp-A0h]
  HomeSceneData *room_scene_data_ptr; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v4 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 16 19 module_data_ptr:449";
  *(_QWORD *)(v4 + 16) = HomeSceneComp::setComfortValueByGm;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202178560;
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 32), (__int64)this, module_id);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v4 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "setComfortValueByGm",
      452);
    common::milog::MiLogStream::operator()(&v16, "module_id:%u is invalid", module_id);
    common::milog::MiLogStream::~MiLogStream(&v16);
    v7 = -1;
    goto LABEL_20;
  }
  if ( block_id )
  {
    v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    world_scene_data_ptr = HomeModuleData::findWorldHomeSceneData(v9);
    if ( !world_scene_data_ptr )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "setComfortValueByGm",
        472);
      common::milog::MiLogStream::operator()(&v16, "world_scene_data_ptr is null.");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v7 = -1;
      goto LABEL_20;
    }
    block_data_ptr = HomeSceneArrangementData::findHomeBlockData(&world_scene_data_ptr->arrangement_data, block_id);
    if ( !block_data_ptr )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "setComfortValueByGm",
        479);
      common::milog::MiLogStream::operator()(&v16, "block_data_ptr is null");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v7 = -1;
      goto LABEL_20;
    }
    if ( *(_BYTE *)(((unsigned __int64)&block_data_ptr->comfort_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&block_data_ptr->comfort_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&block_data_ptr->comfort_value);
    }
    block_data_ptr->comfort_value = comfort_value;
  }
  else
  {
    v8 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 32));
    room_scene_data_ptr = HomeModuleData::findRoomHomeSceneData(v8);
    if ( !room_scene_data_ptr )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "setComfortValueByGm",
        461);
      common::milog::MiLogStream::operator()(&v16, "room_scene_data_ptr is null.");
      common::milog::MiLogStream::~MiLogStream(&v16);
      v7 = -1;
      goto LABEL_20;
    }
    if ( *(_BYTE *)(((unsigned __int64)&room_scene_data_ptr->arrangement_data.comfort_value >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&room_scene_data_ptr->arrangement_data.comfort_value >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&room_scene_data_ptr->arrangement_data.comfort_value);
    }
    room_scene_data_ptr->arrangement_data.comfort_value = comfort_value;
  }
  v7 = 0;
LABEL_20:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 32));
  result = v7;
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

// Line 490: range 00000000145AE164-00000000145AF240
void __cdecl HomeSceneComp::makeFurnitureArrangementLog(
        HomeSceneComp *const this,
        uint32_t module_id,
        uint32_t scene_id,
        proto_log::FurnitureArrangementLog *log)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  HomeModuleData *v7; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v8; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v9; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v12; // rax
  __gnu_cxx::__normal_iterator<int const*,std::vector<int> >::reference v13; // rdx
  int32_t furniture_index; // [rsp+2Ch] [rbp-304h]
  std::map<unsigned int,HomeBlockData>::iterator __for_begin_0; // [rsp+30h] [rbp-300h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end_0; // [rsp+38h] [rbp-2F8h] BYREF
  std::vector<HomeFurnitureCustomSuiteData>::const_iterator __for_begin_1; // [rsp+40h] [rbp-2F0h] BYREF
  std::vector<HomeFurnitureCustomSuiteData>::const_iterator __for_end_1; // [rsp+48h] [rbp-2E8h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_begin; // [rsp+50h] [rbp-2E0h] BYREF
  std::vector<HomeFurnitureData>::iterator __for_end; // [rsp+58h] [rbp-2D8h] BYREF
  HomeSceneData *scene_data_ptr; // [rsp+60h] [rbp-2D0h]
  HomeSceneArrangementData *arrangement_data; // [rsp+68h] [rbp-2C8h]
  std::vector<HomeFurnitureData> *__for_range; // [rsp+70h] [rbp-2C0h]
  std::vector<HomeFurnitureData> *__for_range_0; // [rsp+78h] [rbp-2B8h]
  proto_log::FurnitureArrangementBlockLog *block_log; // [rsp+80h] [rbp-2B0h]
  std::map<unsigned int,unsigned int> *__for_range_1; // [rsp+88h] [rbp-2A8h]
  const std::pair<unsigned int const,unsigned int> *v30; // [rsp+90h] [rbp-2A0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+98h] [rbp-298h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *furniture_count; // [rsp+A0h] [rbp-290h]
  proto_log::FurnitureArrangementFurnitureLog *furniture_log; // [rsp+A8h] [rbp-288h]
  std::map<unsigned int,HomeBlockData> *__for_range_2; // [rsp+B0h] [rbp-280h]
  const std::pair<unsigned int const,HomeBlockData> *v35; // [rsp+B8h] [rbp-278h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+C0h] [rbp-270h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+C8h] [rbp-268h]
  proto_log::FurnitureArrangementBlockLog *block_log_0; // [rsp+D0h] [rbp-260h]
  const std::vector<HomeFurnitureData> *__for_range_3; // [rsp+D8h] [rbp-258h]
  const std::vector<HomeFurnitureData> *__for_range_4; // [rsp+E0h] [rbp-250h]
  std::map<unsigned int,unsigned int> *__for_range_5; // [rsp+E8h] [rbp-248h]
  const std::vector<HomeFurnitureSuiteData> *__for_range_6; // [rsp+F0h] [rbp-240h]
  std::map<unsigned int,unsigned int> *__for_range_7; // [rsp+F8h] [rbp-238h]
  const std::vector<HomeNpcData> *__for_range_8; // [rsp+100h] [rbp-230h]
  const std::vector<HomeFurnitureCustomSuiteData> *__for_range_9; // [rsp+108h] [rbp-228h]
  const HomeFurnitureCustomSuiteData *custom_suite_data; // [rsp+110h] [rbp-220h]
  proto_log::FurnitureArrangementCustomSuiteLog *custom_suite_log; // [rsp+118h] [rbp-218h]
  const std::vector<int> *__for_range_10; // [rsp+120h] [rbp-210h]
  const HomeFurnitureData *furniture_3; // [rsp+128h] [rbp-208h]
  const HomeNpcData *npc; // [rsp+130h] [rbp-200h]
  const std::pair<unsigned int const,unsigned int> *v51; // [rsp+138h] [rbp-1F8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *suite_id; // [rsp+140h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *suite_count; // [rsp+148h] [rbp-1E8h]
  proto_log::FurnitureArrangementFurnitureSuiteLog *suite_log; // [rsp+150h] [rbp-1E0h]
  const HomeFurnitureSuiteData *suite; // [rsp+158h] [rbp-1D8h]
  const std::pair<unsigned int const,unsigned int> *v56; // [rsp+160h] [rbp-1D0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id_0; // [rsp+168h] [rbp-1C8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *furniture_count_0; // [rsp+170h] [rbp-1C0h]
  proto_log::FurnitureArrangementFurnitureLog *furniture_log_0; // [rsp+178h] [rbp-1B8h]
  const HomeFurnitureData *furniture_2; // [rsp+180h] [rbp-1B0h]
  const HomeFurnitureData *furniture_1; // [rsp+188h] [rbp-1A8h]
  const HomeFurnitureData *furniture_0; // [rsp+190h] [rbp-1A0h]
  const HomeFurnitureData *furniture; // [rsp+198h] [rbp-198h]
  common::milog::MiLogStream v64; // [rsp+1A0h] [rbp-190h] BYREF
  char v65[368]; // [rsp+1C0h] [rbp-170h] BYREF

  v4 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(320LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "4 48 16 19 module_data_ptr:491 80 48 33 block0_furniture_id_count_map:508 160 48 32 block_furnit"
                        "ure_id_count_map:533 240 48 38 block_furniture_suite_id_count_map:549";
  *(_QWORD *)(v4 + 16) = HomeSceneComp::makeFurnitureArrangementLog;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = 61937;
  v6[536862722] = 62194;
  v6[536862724] = -218959118;
  v6[536862726] = -219021312;
  v6[536862727] = 62194;
  v6[536862729] = -202116109;
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 48), (__int64)this, module_id);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v4 + 48), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v64,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "makeFurnitureArrangementLog",
      494);
    common::milog::MiLogStream::operator()(&v64, "module_id:%u is invalid", module_id);
    common::milog::MiLogStream::~MiLogStream(&v64);
  }
  else
  {
    v7 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 48));
    scene_data_ptr = HomeModuleData::findHomeSceneData(v7, scene_id);
    if ( scene_data_ptr )
    {
      arrangement_data = &scene_data_ptr->arrangement_data;
      proto_log::FurnitureArrangementLog::set_scene_id(log, scene_id);
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 80));
      __for_range = &scene_data_ptr->arrangement_data.door_vec;
      __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&scene_data_ptr->arrangement_data.door_vec)._M_current;
      __for_end._M_current = std::vector<HomeFurnitureData>::end(&scene_data_ptr->arrangement_data.door_vec)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
      {
        furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
        v8 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v4 + 80),
               &furniture->furniture_id);
        if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v8;
        __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
      }
      __for_range_0 = &arrangement_data->stair_vec;
      __for_begin._M_current = std::vector<HomeFurnitureData>::begin(&arrangement_data->stair_vec)._M_current;
      __for_end._M_current = std::vector<HomeFurnitureData>::end(__for_range_0)._M_current;
      while ( __gnu_cxx::operator!=<HomeFurnitureData *,std::vector<HomeFurnitureData>>(&__for_begin, &__for_end) )
      {
        furniture_0 = __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator*(&__for_begin);
        v9 = std::map<unsigned int,unsigned int>::operator[](
               (std::map<unsigned int,unsigned int> *const)(v4 + 80),
               &furniture_0->furniture_id);
        if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        ++*v9;
        __gnu_cxx::__normal_iterator<HomeFurnitureData *,std::vector<HomeFurnitureData>>::operator++(&__for_begin);
      }
      if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v4 + 80)) )
      {
        block_log = proto_log::FurnitureArrangementLog::add_block_log(log);
        proto_log::FurnitureArrangementBlockLog::set_block_id(block_log, 0);
        __for_range_1 = (std::map<unsigned int,unsigned int> *)(v4 + 80);
        __for_begin._M_current = (HomeFurnitureData *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v4 + 80))._M_node;
        __for_end._M_current = (HomeFurnitureData *)std::map<unsigned int,unsigned int>::end(__for_range_1)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
        {
          v30 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          furniture_id = std::get<0ul,unsigned int const,unsigned int>(v30);
          furniture_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v30);
          furniture_log = proto_log::FurnitureArrangementBlockLog::add_furniture_log(block_log);
          if ( *(_BYTE *)(((unsigned __int64)furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)furniture_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id >> 3)
                                                                           + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::FurnitureArrangementFurnitureLog::set_furniture_id(furniture_log, *furniture_id);
          if ( *(_BYTE *)(((unsigned __int64)furniture_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)furniture_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_count >> 3)
                                                                              + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::FurnitureArrangementFurnitureLog::set_furniture_count(furniture_log, *furniture_count);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        }
      }
      __for_range_2 = &arrangement_data->block_data_map;
      __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&arrangement_data->block_data_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_2)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v35 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
        block_id = std::get<0ul,unsigned int const,HomeBlockData>(v35);
        block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v35);
        block_log_0 = proto_log::FurnitureArrangementLog::add_block_log(log);
        if ( *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)block_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)block_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        proto_log::FurnitureArrangementBlockLog::set_block_id(block_log_0, *block_id);
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 160));
        __for_range_3 = &block_data->persistent_furniture_vec;
        __for_begin._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureData>::begin(&block_data->persistent_furniture_vec)._M_current;
        __for_end._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureData>::end(__for_range_3)._M_current;
        while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_end) )
        {
          furniture_1 = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
          v10 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v4 + 160),
                  &furniture_1->furniture_id);
          if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++*v10;
          __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
        }
        __for_range_4 = &block_data->deploy_furniure_vec;
        __for_begin._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
        __for_end._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureData>::end(__for_range_4)._M_current;
        while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_end) )
        {
          furniture_2 = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
          v11 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v4 + 160),
                  &furniture_2->furniture_id);
          if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++*v11;
          __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
        }
        __for_range_5 = (std::map<unsigned int,unsigned int> *)(v4 + 160);
        __for_begin._M_current = (HomeFurnitureData *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v4 + 160))._M_node;
        __for_end._M_current = (HomeFurnitureData *)std::map<unsigned int,unsigned int>::end(__for_range_5)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
        {
          v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          furniture_id_0 = std::get<0ul,unsigned int const,unsigned int>(v56);
          furniture_count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v56);
          furniture_log_0 = proto_log::FurnitureArrangementBlockLog::add_furniture_log(block_log_0);
          if ( *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)furniture_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_id_0 >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::FurnitureArrangementFurnitureLog::set_furniture_id(furniture_log_0, *furniture_id_0);
          if ( *(_BYTE *)(((unsigned __int64)furniture_count_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)furniture_count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_count_0 >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::FurnitureArrangementFurnitureLog::set_furniture_count(furniture_log_0, *furniture_count_0);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        }
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v4 + 240));
        __for_range_6 = &block_data->furniure_suite_vec;
        __for_begin._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureSuiteData>::begin(&block_data->furniure_suite_vec)._M_current;
        __for_end._M_current = (HomeFurnitureData *)std::vector<HomeFurnitureSuiteData>::end(__for_range_6)._M_current;
        while ( __gnu_cxx::operator!=<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>(
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_end) )
        {
          suite = __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin);
          v12 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v4 + 240),
                  &suite->suite_id);
          if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          ++*v12;
          __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin);
        }
        __for_range_7 = (std::map<unsigned int,unsigned int> *)(v4 + 240);
        __for_begin._M_current = (HomeFurnitureData *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v4 + 240))._M_node;
        __for_end._M_current = (HomeFurnitureData *)std::map<unsigned int,unsigned int>::end(__for_range_7)._M_node;
        while ( std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
        {
          v51 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
          suite_id = std::get<0ul,unsigned int const,unsigned int>(v51);
          suite_count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v51);
          suite_log = proto_log::FurnitureArrangementBlockLog::add_furniture_suite_log(block_log_0);
          if ( *(_BYTE *)(((unsigned __int64)suite_id >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)suite_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)suite_id >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::FurnitureArrangementFurnitureSuiteLog::set_suite_id(suite_log, *suite_id);
          if ( *(_BYTE *)(((unsigned __int64)suite_count >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)suite_count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)suite_count >> 3)
                                                                          + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::FurnitureArrangementFurnitureSuiteLog::set_suite_count(suite_log, *suite_count);
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
        }
        __for_range_8 = &block_data->deploy_npc_vec;
        __for_begin._M_current = (HomeFurnitureData *)std::vector<HomeNpcData>::begin(&block_data->deploy_npc_vec)._M_current;
        __for_end._M_current = (HomeFurnitureData *)std::vector<HomeNpcData>::end(__for_range_8)._M_current;
        while ( __gnu_cxx::operator!=<HomeNpcData const*,std::vector<HomeNpcData>>(
                  (const __gnu_cxx::__normal_iterator<const HomeNpcData*,std::vector<HomeNpcData> > *)&__for_begin,
                  (const __gnu_cxx::__normal_iterator<const HomeNpcData*,std::vector<HomeNpcData> > *)&__for_end) )
        {
          npc = __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeNpcData*,std::vector<HomeNpcData> > *const)&__for_begin);
          if ( *(_BYTE *)(((unsigned __int64)npc >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)npc & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto_log::FurnitureArrangementBlockLog::add_avatar_id_list(block_log_0, npc->avatar_id);
          __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator++((__gnu_cxx::__normal_iterator<const HomeNpcData*,std::vector<HomeNpcData> > *const)&__for_begin);
        }
        __for_range_9 = &block_data->furniture_custom_suite_vec;
        __for_begin_1._M_current = std::vector<HomeFurnitureCustomSuiteData>::begin(&block_data->furniture_custom_suite_vec)._M_current;
        __for_end_1._M_current = std::vector<HomeFurnitureCustomSuiteData>::end(__for_range_9)._M_current;
        while ( __gnu_cxx::operator!=<HomeFurnitureCustomSuiteData const*,std::vector<HomeFurnitureCustomSuiteData>>(
                  &__for_begin_1,
                  &__for_end_1) )
        {
          custom_suite_data = __gnu_cxx::__normal_iterator<HomeFurnitureCustomSuiteData const*,std::vector<HomeFurnitureCustomSuiteData>>::operator*(&__for_begin_1);
          custom_suite_log = proto_log::FurnitureArrangementLog::add_custom_suite_log(log);
          __for_range_10 = &custom_suite_data->included_furniture_index_vec;
          __for_begin._M_current = (HomeFurnitureData *)std::vector<int>::begin(&custom_suite_data->included_furniture_index_vec)._M_current;
          __for_end._M_current = (HomeFurnitureData *)std::vector<int>::end(__for_range_10)._M_current;
          while ( __gnu_cxx::operator!=<int const*,std::vector<int>>(
                    (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_begin,
                    (const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *)&__for_end) )
          {
            v13 = __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator*((const __gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_begin);
            if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4();
            }
            furniture_index = *v13;
            if ( *v13 >= 0 && furniture_index < std::vector<HomeFurnitureData>::size(&block_data->deploy_furniure_vec) )
            {
              furniture_3 = std::vector<HomeFurnitureData>::operator[](
                              &block_data->deploy_furniure_vec,
                              furniture_index);
              if ( *(_BYTE *)(((unsigned __int64)furniture_3 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)furniture_3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture_3 >> 3)
                                                                              + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              proto_log::FurnitureArrangementCustomSuiteLog::add_furniture_id_list(
                custom_suite_log,
                furniture_3->furniture_id);
            }
            __gnu_cxx::__normal_iterator<int const*,std::vector<int>>::operator++((__gnu_cxx::__normal_iterator<int const*,std::vector<int> > *const)&__for_begin);
          }
          __gnu_cxx::__normal_iterator<HomeFurnitureCustomSuiteData const*,std::vector<HomeFurnitureCustomSuiteData>>::operator++(&__for_begin_1);
        }
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 240));
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 160));
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v4 + 80));
    }
    else
    {
      common::milog::MiLogStream::create(
        &v64,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "makeFurnitureArrangementLog",
        501);
      common::milog::MiLogStream::operator()(&v64, "scene_data_ptr is null. scene_id:%u", scene_id);
      common::milog::MiLogStream::~MiLogStream(&v64);
    }
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 48));
  if ( v65 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 580: range 00000000145AF242-00000000145AF532
uint32_t __cdecl HomeSceneComp::getMaxFurnitureCountByType(
        const HomeSceneComp *const this,
        const std::set<unsigned int> *furniture_type_set)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::_Rb_tree_const_iterator<unsigned int>::reference v5; // rdx
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  const unsigned int *v7; // rdx
  uint32_t result; // eax
  uint32_t furniture_type; // [rsp+14h] [rbp-CCh]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::const_iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::const_iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::set<unsigned int>::iterator __for_begin_0; // [rsp+28h] [rbp-B8h] BYREF
  std::set<unsigned int>::iterator __for_end_0; // [rsp+30h] [rbp-B0h] BYREF
  const std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+38h] [rbp-A8h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v15; // [rsp+40h] [rbp-A0h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+48h] [rbp-98h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+50h] [rbp-90h]
  const std::set<unsigned int> *__for_range_0; // [rsp+58h] [rbp-88h]
  char v19[128]; // [rsp+60h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 10 result:581 64 4 9 count:584";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::getMaxFurnitureCountByType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116348;
  *(_DWORD *)(v2 + 48) = 0;
  __for_range = &this->home_module_data_map_;
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v15);
    module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v15);
    *(_DWORD *)(v2 + 64) = 0;
    __for_range_0 = furniture_type_set;
    __for_begin_0._M_node = std::set<unsigned int>::begin(furniture_type_set)._M_node;
    __for_end_0._M_node = std::set<unsigned int>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v5 = std::_Rb_tree_const_iterator<unsigned int>::operator*(&__for_begin_0);
      if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      furniture_type = *v5;
      v6 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
      *(_DWORD *)(v2 + 64) += HomeModuleData::getFurnitureCountByType(v6, furniture_type);
      std::_Rb_tree_const_iterator<unsigned int>::operator++(&__for_begin_0);
    }
    v7 = std::max<unsigned int>((const unsigned int *)(v2 + 48), (const unsigned int *)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 48) = *v7;
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
  result = *(_DWORD *)(v2 + 48);
  if ( v19 == (char *)v2 )
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

// Line 595: range 00000000145AF534-00000000145AFC4D
__int64 __fastcall HomeSceneComp::getTransferScenePoint(
        HomeSceneComp *const this,
        uint32_t guid,
        unsigned __int64 point_scene_id,
        unsigned __int64 block_id,
        Vector3 *pos,
        Vector3 *rot)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  _DWORD *v8; // r13
  int CurModuleId; // eax
  uint32_t v10; // r14d
  uint32_t HomeUid; // eax
  unsigned int v12; // r14d
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeTransferData> >::pointer v13; // rax
  uint32_t v14; // ecx
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type v15; // ecx
  common::milog::MiLogStream *v16; // rax
  __int64 result; // rax
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+30h] [rbp-110h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+38h] [rbp-108h] BYREF
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeTransferData> >::_Self __y; // [rsp+40h] [rbp-100h] BYREF
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+48h] [rbp-F8h]
  const std::pair<unsigned int const,HomeSceneData> *v26; // [rsp+50h] [rbp-F0h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+58h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+60h] [rbp-E0h]
  const HomeTransferData *transfer_data; // [rsp+68h] [rbp-D8h]
  common::milog::MiLogStream v30; // [rsp+70h] [rbp-D0h] BYREF
  char v31[176]; // [rsp+90h] [rbp-B0h] BYREF

  v6 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_1(128LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "3 48 4 8 guid:594 64 8 17 transfer_iter:604 96 16 19 module_data_ptr:596";
  *(_QWORD *)(v6 + 16) = HomeSceneComp::getTransferScenePoint;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556943;
  v8[536862722] = -218959360;
  v8[536862723] = -202178560;
  *(_DWORD *)(v6 + 48) = guid;
  CurModuleId = HomeSceneComp::getCurModuleId(this);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v6 + 96), (__int64)this, CurModuleId);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v6 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v30,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_scene_comp.cpp",
      "getTransferScenePoint",
      599);
    v10 = HomeSceneComp::getCurModuleId(this);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator()(&v30, "module_data not exist. home_uid:%u module_id:%u", HomeUid, v10);
    common::milog::MiLogStream::~MiLogStream(&v30);
    v12 = -1;
  }
  else
  {
    __for_range = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v6 + 96))->scene_data_map;
    __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range)._M_node;
    while ( 1 )
    {
      if ( !std::operator!=(&__for_begin, &__for_end) )
      {
        common::milog::MiLogStream::create(
          &v30,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_scene_comp.cpp",
          "getTransferScenePoint",
          615);
        v16 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                &v30,
                (const char (*)[35])"getTransferScenePoint fail. guid: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v6 + 48));
        common::milog::MiLogStream::~MiLogStream(&v30);
        v12 = -1;
        goto LABEL_30;
      }
      v26 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v26);
      scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v26);
      *(std::map<unsigned int,HomeTransferData>::const_iterator *)(v6 + 64) = std::map<unsigned int,HomeTransferData>::find(
                                                                                &scene_data->arrangement_data.scene_transfer_map,
                                                                                (const std::map<unsigned int,HomeTransferData>::key_type *)(v6 + 48));
      __y._M_node = std::map<unsigned int,HomeTransferData>::end(&scene_data->arrangement_data.scene_transfer_map)._M_node;
      if ( std::operator!=(
             (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeTransferData> >::_Self *)(v6 + 64),
             &__y) )
      {
        break;
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
    }
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeTransferData>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeTransferData> > *const)(v6 + 64));
    transfer_data = &v13->second;
    if ( *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v13 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v13->second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v14 = transfer_data->block_id;
    if ( *(_BYTE *)((block_id >> 3) + 0x7FFF8000) != 0
      && (char)((block_id & 7) + 3) >= *(_BYTE *)((block_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(block_id);
    }
    *(_DWORD *)block_id = v14;
    if ( ((unsigned __int8)pos & 7) >= *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)pos + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&pos->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(pos, 12LL);
    }
    if ( (((unsigned __int8)transfer_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_pos >> 3)
                                                                + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_pos >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)transfer_data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_pos.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load_n(&transfer_data->spawn_pos, 12LL);
    }
    *pos = transfer_data->spawn_pos;
    if ( ((unsigned __int8)rot & 7) >= *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)rot + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&rot->z + 3) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(rot, 12LL);
    }
    if ( (((unsigned __int8)transfer_data + 20) & 7) >= *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_rot >> 3)
                                                                 + 0x7FFF8000)
      && *(_BYTE *)(((unsigned __int64)&transfer_data->spawn_rot >> 3) + 0x7FFF8000) != 0
      || *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)transfer_data + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&transfer_data->spawn_rot.z + 3) >> 3)
                                                                 + 0x7FFF8000) )
    {
      __asan_report_load_n(&transfer_data->spawn_rot, 12LL);
    }
    *rot = transfer_data->spawn_rot;
    if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v15 = *scene_id;
    if ( *(_BYTE *)((point_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((point_scene_id & 7) + 3) >= *(_BYTE *)((point_scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(point_scene_id);
    }
    *(_DWORD *)point_scene_id = v15;
    v12 = 0;
  }
LABEL_30:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v6 + 96));
  result = v12;
  if ( v31 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 620: range 00000000145AFC4E-00000000145B0049
void __cdecl HomeSceneComp::restoreDefaultsArrangementByMuip(
        HomeSceneComp *const this,
        bool is_all_module,
        const std::vector<unsigned int> *module_id_vec)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  HomeModuleData *v6; // rax
  unsigned int *v7; // rdx
  uint32_t HomeUid; // eax
  HomeModuleData *v9; // rax
  HomeSceneComp *SceneComp; // rax
  HomeWorld *HomeWorld; // rax
  unsigned int module_id_0; // [rsp+24h] [rbp-CCh]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+28h] [rbp-C8h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+30h] [rbp-C0h] BYREF
  const std::vector<unsigned int> *__for_range_0; // [rsp+38h] [rbp-B8h]
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+40h] [rbp-B0h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v18; // [rsp+48h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+50h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+58h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+60h] [rbp-90h] BYREF
  char v22[112]; // [rsp+80h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 module_data_ptr:632";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::restoreDefaultsArrangementByMuip;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  if ( is_all_module )
  {
    __for_range = &this->home_module_data_map_;
    __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(&this->home_module_data_map_)._M_node;
    __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(&this->home_module_data_map_)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v18 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
      module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v18);
      module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v18);
      v6 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr);
      HomeModuleData::toDefaultsSettings(v6);
      std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
    }
  }
  else
  {
    __for_range_0 = module_id_vec;
    __for_begin._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::_Base_ptr)std::vector<unsigned int>::begin(module_id_vec)._M_current;
    __for_end._M_node = (std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::_Base_ptr)std::vector<unsigned int>::end(module_id_vec)._M_current;
    while ( __gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)&__for_end) )
    {
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      module_id_0 = *v7;
      HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 32), (__int64)this, *v7);
      if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 32), 0LL) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_scene_comp.cpp",
          "restoreDefaultsArrangementByMuip",
          635);
        if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        HomeUid = Home::getHomeUid(this->home_);
        common::milog::MiLogStream::operator()(
          &v21,
          "module_data not exist. home_uid:%u module_id:%u",
          HomeUid,
          module_id_0);
        common::milog::MiLogStream::~MiLogStream(&v21);
      }
      else
      {
        v9 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32));
        HomeModuleData::toDefaultsSettings(v9);
      }
      std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 32));
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)&__for_begin);
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Home::getSceneComp(this->home_);
  HomeWorld = HomeSceneComp::getHomeWorld(SceneComp);
  HomeWorld::refreshArrangement(HomeWorld, 0);
  if ( v22 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 646: range 00000000145B004A-00000000145B0723
void __fastcall HomeSceneComp::restoreDefaultsSceneArrangementByMuip(
        HomeSceneComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  HomeModuleData *v11; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  unsigned int v13; // r14d
  uint32_t HomeUid; // eax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t cur_room_scene_id; // ecx
  char v18; // al
  HomeModuleData *v19; // rax
  HomeModuleData *v20; // rsi
  HomeSceneComp *SceneComp; // rax
  HomeWorld *HomeWorld; // rax
  unsigned int val; // [rsp+1Ch] [rbp-C4h] BYREF
  HomeSceneData *scene_data_ptr; // [rsp+20h] [rbp-C0h]
  const data::HomeworldModuleExcelConfig *config_ptr; // [rsp+28h] [rbp-B8h]
  common::milog::MiLogStream v27; // [rsp+30h] [rbp-B0h] BYREF
  char v28[144]; // [rsp+50h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 module_id:645 48 4 12 scene_id:645 64 16 19 module_data_ptr:647";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::restoreDefaultsSceneArrangementByMuip;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = module_id;
  *(_DWORD *)(v3 + 48) = scene_id;
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 64), (__int64)this, *(_DWORD *)(v3 + 32));
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 64), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "restoreDefaultsSceneArrangementByMuip",
      650);
    v6 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v27,
           (const char (*)[34])"module_data not exist. home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_7:
    val = Home::getHomeUid(this->home_);
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    v8 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v7, (const char (*)[12])" module_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_37;
  }
  v11 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  scene_data_ptr = HomeModuleData::findHomeSceneData(v11, *(_DWORD *)(v3 + 48));
  if ( !scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "restoreDefaultsSceneArrangementByMuip",
      656);
    v6 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
           &v27,
           (const char (*)[33])"scene_data not exist. home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_7;
  }
  v12 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  config_ptr = HomeModuleData::getConfig(v12);
  if ( config_ptr )
  {
    v15 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v15->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v15->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( v15->cur_room_scene_id == *(_DWORD *)(v3 + 48) )
      goto LABEL_25;
    v16 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v16->cur_room_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v16->cur_room_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    cur_room_scene_id = v16->cur_room_scene_id;
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_ptr->default_room_scene_id >> 3)
                                                                + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( cur_room_scene_id == config_ptr->default_room_scene_id )
LABEL_25:
      v18 = 0;
    else
      v18 = 1;
    if ( v18 )
    {
      v19 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      HomeModuleData::toDefaultsSettings(v19);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v20 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      HomeSceneData::toDefaultsSettings(scene_data_ptr, this->home_, v20);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      Home::onUpdateArrangementInfo(this->home_, *(_DWORD *)(v3 + 32), *(_DWORD *)(v3 + 48));
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    SceneComp = Home::getSceneComp(this->home_);
    HomeWorld = HomeSceneComp::getHomeWorld(SceneComp);
    HomeWorld::refreshArrangement(HomeWorld, 0);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "restoreDefaultsSceneArrangementByMuip",
      662);
    v13 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator()(&v27, "getConfig return null. home_uid:%u module_id:%u", HomeUid, v13);
    common::milog::MiLogStream::~MiLogStream(&v27);
  }
LABEL_37:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
  if ( v28 == (char *)v3 )
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

// Line 680: range 00000000145B0724-00000000145B0B2D
std::map<unsigned int,std::set<unsigned int>> *__cdecl HomeSceneComp::getUnlockBlockID(
        std::map<unsigned int,std::set<unsigned int>> *retstr,
        HomeSceneComp *const this,
        uint32_t module_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  uint32_t HomeUid; // eax
  std::set<unsigned int> *v7; // rax
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+20h] [rbp-F0h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_begin_0; // [rsp+30h] [rbp-E0h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end_0; // [rsp+38h] [rbp-D8h] BYREF
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+40h] [rbp-D0h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+48h] [rbp-C8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+50h] [rbp-C0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+58h] [rbp-B8h]
  std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+60h] [rbp-B0h]
  std::pair<unsigned int const,HomeBlockData> *v19; // [rsp+68h] [rbp-A8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+70h] [rbp-A0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+78h] [rbp-98h]
  common::milog::MiLogStream v22; // [rsp+80h] [rbp-90h] BYREF
  char v23[112]; // [rsp+A0h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 19 module_data_ptr:684";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::getUnlockBlockID;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  std::map<unsigned int,std::set<unsigned int>>::map(retstr);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 32), (__int64)this, module_id);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 32), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/home/home_scene_comp.cpp",
      "getUnlockBlockID",
      687);
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    HomeUid = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator()(&v22, "module_data not exist. home_uid:%u module_id:%u", HomeUid, module_id);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    __for_range = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->scene_data_map;
    __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(__in);
      scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
      __for_range_0 = &scene_data->arrangement_data.block_data_map;
      __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&scene_data->arrangement_data.block_data_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v19 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
        block_id = std::get<0ul,unsigned int const,HomeBlockData>(v19);
        block_data = std::get<1ul,unsigned int const,HomeBlockData>(v19);
        if ( *(char *)(((unsigned __int64)&block_data->is_unlocked >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&block_data->is_unlocked);
        if ( block_data->is_unlocked )
        {
          v7 = std::map<unsigned int,std::set<unsigned int>>::operator[](retstr, scene_id);
          std::set<unsigned int>::insert(v7, block_id);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 32));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 706: range 00000000145B0B2E-00000000145B0DF9
_BOOL8 __fastcall HomeSceneComp::isHomeBlockUnlocked(
        const HomeSceneComp *const this,
        int module_id,
        uint32_t scene_id,
        uint32_t block_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  _BOOL4 is_unlocked; // r14d
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::pointer v8; // rax
  _BOOL8 result; // rax
  std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self __y; // [rsp+28h] [rbp-E8h] BYREF
  std::map<unsigned int,HomeSceneData> *scene_data_map; // [rsp+30h] [rbp-E0h]
  std::map<unsigned int,HomeBlockData> *block_data_map; // [rsp+38h] [rbp-D8h]
  char v15[208]; // [rsp+40h] [rbp-D0h] BYREF

  v4 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(160LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 32 4 12 scene_id:705 48 4 12 block_id:705 64 8 14 scene_iter:713 96 8 14 block_iter:719 128 16"
                        " 19 module_data_ptr:707";
  *(_QWORD *)(v4 + 16) = HomeSceneComp::isHomeBlockUnlocked;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -202178560;
  *(_DWORD *)(v4 + 32) = scene_id;
  *(_DWORD *)(v4 + 48) = block_id;
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 128), (__int64)this, module_id);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v4 + 128), 0LL) )
  {
    is_unlocked = 0;
  }
  else
  {
    scene_data_map = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 128))->scene_data_map;
    *(std::map<unsigned int,HomeSceneData>::iterator *)(v4 + 64) = std::map<unsigned int,HomeSceneData>::find(
                                                                     scene_data_map,
                                                                     (const std::map<unsigned int,HomeSceneData>::key_type *)(v4 + 32));
    __y._M_node = std::map<unsigned int,HomeSceneData>::end(scene_data_map)._M_node;
    if ( std::operator==(
           (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> >::_Self *)(v4 + 64),
           &__y) )
    {
      is_unlocked = 0;
    }
    else
    {
      block_data_map = &std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData> > *const)(v4 + 64))->second.arrangement_data.block_data_map;
      *(std::map<unsigned int,HomeBlockData>::iterator *)(v4 + 96) = std::map<unsigned int,HomeBlockData>::find(
                                                                       block_data_map,
                                                                       (const std::map<unsigned int,HomeBlockData>::key_type *)(v4 + 48));
      __y._M_node = std::map<unsigned int,HomeBlockData>::end(block_data_map)._M_node;
      if ( std::operator==(
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self *)(v4 + 96),
             (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::_Self *)&__y) )
      {
        is_unlocked = 0;
      }
      else
      {
        v8 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator->((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> > *const)(v4 + 96));
        if ( *(char *)(((unsigned __int64)&v8->second.is_unlocked >> 3) + 0x7FFF8000) < 0 )
          v8 = (std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData> >::pointer)__asan_report_load1(&v8->second.is_unlocked);
        is_unlocked = v8->second.is_unlocked;
      }
    }
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 128));
  result = is_unlocked;
  if ( v15 == (char *)v4 )
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

// Line 728: range 00000000145B0EA0-00000000145B2024
void __cdecl HomeSceneComp::fillHomeMarkPointNotify(HomeSceneComp *const this, proto::HomeMarkPointNotify *notify)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  uint32_t v9; // r15d
  uint32_t v10; // r14d
  proto::HomeMarkPointFurnitureData *v11; // rax
  const Vector3 *p_spawn_pos; // rdi
  uint32_t v13; // r15d
  uint32_t v14; // r14d
  proto::HomeMarkPointFurnitureData *v15; // rax
  HomeFurnitureData *v16; // rdx
  HomeFurnitureData *n; // rax
  HomeFurnitureData *v18; // rdx
  proto::HomeMarkPointFurnitureData *v19; // rax
  proto::Vector *v20; // rax
  LuaConfigMgr *p_lua_config_mgr; // rcx
  common::milog::MiLogStream *v22; // rax
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  bool v24; // r14
  Vector3 *p_born_pos; // r14
  proto::Vector *v26; // rax
  proto::HomeMarkPointFurnitureData *v27; // rax
  const Vector3 *pos; // [rsp+8h] [rbp-248h]
  const Vector3 *posa; // [rsp+8h] [rbp-248h]
  unsigned int val; // [rsp+20h] [rbp-230h] BYREF
  unsigned int CurModuleId; // [rsp+24h] [rbp-22Ch] BYREF
  uint32_t suite_furnitue_id; // [rsp+28h] [rbp-228h]
  uint32_t furniture_id_0; // [rsp+2Ch] [rbp-224h]
  uint32_t guid_1; // [rsp+30h] [rbp-220h]
  uint32_t guid_2; // [rsp+34h] [rbp-21Ch]
  uint32_t furniture_id_1; // [rsp+38h] [rbp-218h]
  uint32_t avatar_id; // [rsp+3Ch] [rbp-214h]
  uint32_t guid; // [rsp+40h] [rbp-210h]
  uint32_t furniture_id; // [rsp+44h] [rbp-20Ch]
  std::map<unsigned int,HomeSceneData>::iterator __for_begin; // [rsp+48h] [rbp-208h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end; // [rsp+50h] [rbp-200h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_begin_0; // [rsp+58h] [rbp-1F8h] BYREF
  std::map<unsigned int,HomeBlockData>::iterator __for_end_0; // [rsp+60h] [rbp-1F0h] BYREF
  std::vector<HomeNpcData>::const_iterator __for_begin_1; // [rsp+68h] [rbp-1E8h] BYREF
  std::vector<HomeNpcData>::const_iterator __for_end_1; // [rsp+70h] [rbp-1E0h] BYREF
  const HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+78h] [rbp-1D8h]
  std::map<unsigned int,HomeSceneData> *__for_range; // [rsp+80h] [rbp-1D0h]
  std::pair<unsigned int const,HomeSceneData> *__in; // [rsp+88h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+90h] [rbp-1C0h]
  std::tuple_element<1,std::pair<unsigned int const,HomeSceneData> >::type *home_scene_data; // [rsp+98h] [rbp-1B8h]
  HomeSceneArrangementData *arrangement_data; // [rsp+A0h] [rbp-1B0h]
  proto::HomeMarkPointSceneData *mark_point_data; // [rsp+A8h] [rbp-1A8h]
  std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+B0h] [rbp-1A0h]
  std::map<unsigned int,HomeTransferData> *__for_range_4; // [rsp+B8h] [rbp-198h]
  std::optional<HomeFurnitureData> *main_house; // [rsp+C0h] [rbp-190h]
  const SceneScriptConfig *scene_config_ptr; // [rsp+C8h] [rbp-188h]
  std::vector<HomeMarkPointFurnitureData> *__for_range_5; // [rsp+D0h] [rbp-180h]
  const HomeMarkPointFurnitureData *normal_mark_point_data; // [rsp+D8h] [rbp-178h]
  const std::pair<unsigned int const,HomeTransferData> *v60; // [rsp+E0h] [rbp-170h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeTransferData> >::type *guid_0; // [rsp+E8h] [rbp-168h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeTransferData> >::type *transfer_data; // [rsp+F0h] [rbp-160h]
  const std::pair<unsigned int const,HomeBlockData> *v63; // [rsp+F8h] [rbp-158h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+100h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+108h] [rbp-148h]
  const std::vector<HomeNpcData> *__for_range_1; // [rsp+110h] [rbp-140h]
  const std::vector<HomeBlockFieldData> *__for_range_2; // [rsp+118h] [rbp-138h]
  const std::vector<HomeFurnitureSuiteData> *__for_range_3; // [rsp+120h] [rbp-130h]
  const HomeFurnitureSuiteData *suite_data; // [rsp+128h] [rbp-128h]
  proto::HomeMarkPointFurnitureData *mark_furniture_proto_0; // [rsp+130h] [rbp-120h]
  proto::HomeMarkPointSuiteData *suite_extra_data; // [rsp+138h] [rbp-118h]
  const HomeBlockFieldData *field_data; // [rsp+140h] [rbp-110h]
  const HomeNpcData *npc_data; // [rsp+148h] [rbp-108h]
  proto::HomeMarkPointFurnitureData *mark_furniture_proto; // [rsp+150h] [rbp-100h]
  proto::HomeMarkPointNPCData *npc_extra_data; // [rsp+158h] [rbp-F8h]
  std::shared_ptr<Config> v76; // [rsp+160h] [rbp-F0h] BYREF
  std::shared_ptr<Config> v77; // [rsp+170h] [rbp-E0h] BYREF
  common::milog::MiLogStream v78; // [rsp+180h] [rbp-D0h] BYREF
  char v79[176]; // [rsp+1A0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v79;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 28 set_mark_furniture_proto:736 64 12 7 pos:815 96 16 19 module_data_ptr:729";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::fillHomeMarkPointNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -219020288;
  v4[536862723] = -202178560;
  HomeSceneComp::getCurHomeModuleData((HomeSceneComp *const)(v2 + 96));
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v2 + 96), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v78,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "fillHomeMarkPointNotify",
      732);
    v5 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
           &v78,
           (const char (*)[34])"module data not exist. home_uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    v7 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v6, (const char (*)[12])" module_id:");
    CurModuleId = HomeSceneComp::getCurModuleId(this);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &CurModuleId);
    common::milog::MiLogStream::~MiLogStream(&v78);
  }
  else
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v76);
    home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v76)->design_config.txt_config_mgr.home_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v76);
    *(_QWORD *)(v2 + 32) = home_config_mgr;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v77);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77);
    suite_furnitue_id = ConstValueExcelConfigMgr::getHomeSuiteFurnitureID(&v8->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v77);
    __for_range = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96))->scene_data_map;
    __for_begin._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range)._M_node;
    __for_end._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      __in = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(__in);
      home_scene_data = std::get<1ul,unsigned int const,HomeSceneData>(__in);
      arrangement_data = &home_scene_data->arrangement_data;
      mark_point_data = proto::HomeMarkPointNotify::add_mark_point_data_list(notify);
      if ( *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->cur_module_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4();
      }
      proto::HomeMarkPointSceneData::set_module_id(mark_point_data, this->cur_module_id_);
      if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto::HomeMarkPointSceneData::set_scene_id(mark_point_data, *scene_id);
      __for_range_0 = &arrangement_data->block_data_map;
      __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&arrangement_data->block_data_map)._M_node;
      __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
      while ( std::operator!=(&__for_begin_0, &__for_end_0) )
      {
        v63 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
        block_id = std::get<0ul,unsigned int const,HomeBlockData>(v63);
        block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v63);
        __for_range_1 = &block_data->deploy_npc_vec;
        __for_begin_1._M_current = std::vector<HomeNpcData>::begin(&block_data->deploy_npc_vec)._M_current;
        __for_end_1._M_current = std::vector<HomeNpcData>::end(__for_range_1)._M_current;
        while ( __gnu_cxx::operator!=<HomeNpcData const*,std::vector<HomeNpcData>>(&__for_begin_1, &__for_end_1) )
        {
          npc_data = __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator*(&__for_begin_1);
          if ( *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)npc_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)npc_data >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          avatar_id = npc_data->avatar_id;
          guid = 0;
          furniture_id = HomeWorldExcelConfigMgr::getFurnitureIdByAvatarId(home_config_mgr, avatar_id);
          mark_furniture_proto = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
          HomeSceneComp::fillHomeMarkPointNotify(proto::HomeMarkPointNotify &)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
            (const HomeSceneComp::fillHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v2 + 32),
            mark_furniture_proto,
            0,
            furniture_id,
            &npc_data->spawn_pos);
          npc_extra_data = proto::HomeMarkPointFurnitureData::mutable_npc_data(mark_furniture_proto);
          proto::HomeMarkPointNPCData::set_avatar_id(npc_extra_data, avatar_id);
          if ( *(_BYTE *)(((unsigned __int64)&npc_data->costume_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)npc_data + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&npc_data->costume_id >> 3)
                                                                    + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          proto::HomeMarkPointNPCData::set_costume_id(npc_extra_data, npc_data->costume_id);
          __gnu_cxx::__normal_iterator<HomeNpcData const*,std::vector<HomeNpcData>>::operator++(&__for_begin_1);
        }
        __for_range_2 = &block_data->deploy_field_vec;
        __for_begin_1._M_current = (const HomeNpcData *)std::vector<HomeBlockFieldData>::begin(&block_data->deploy_field_vec)._M_current;
        __for_end_1._M_current = (const HomeNpcData *)std::vector<HomeBlockFieldData>::end(__for_range_2)._M_current;
        while ( __gnu_cxx::operator!=<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>(
                  (const __gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *)&__for_begin_1,
                  (const __gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *)&__for_end_1) )
        {
          field_data = __gnu_cxx::__normal_iterator<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *const)&__for_begin_1);
          pos = &field_data->spawn_pos;
          if ( *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)field_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&field_data->furniture_id >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v9 = field_data->furniture_id;
          if ( *(_BYTE *)(((unsigned __int64)field_data >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)field_data >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v10 = field_data->guid;
          v11 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
          HomeSceneComp::fillHomeMarkPointNotify(proto::HomeMarkPointNotify &)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
            (const HomeSceneComp::fillHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v2 + 32),
            v11,
            v10,
            v9,
            pos);
          __gnu_cxx::__normal_iterator<HomeBlockFieldData const*,std::vector<HomeBlockFieldData>>::operator++((__gnu_cxx::__normal_iterator<const HomeBlockFieldData*,std::vector<HomeBlockFieldData> > *const)&__for_begin_1);
        }
        __for_range_3 = &block_data->furniure_suite_vec;
        __for_begin_1._M_current = (const HomeNpcData *)std::vector<HomeFurnitureSuiteData>::begin(&block_data->furniure_suite_vec)._M_current;
        __for_end_1._M_current = (const HomeNpcData *)std::vector<HomeFurnitureSuiteData>::end(__for_range_3)._M_current;
        while ( __gnu_cxx::operator!=<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>(
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_begin_1,
                  (const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *)&__for_end_1) )
        {
          suite_data = __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin_1);
          mark_furniture_proto_0 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
          p_spawn_pos = &suite_data->spawn_pos;
          if ( *(_BYTE *)(((unsigned __int64)&suite_data->guid >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&suite_data->guid >> 3) + 0x7FFF8000) <= 3 )
          {
            p_spawn_pos = (const Vector3 *)&suite_data->guid;
            __asan_report_load4();
          }
          HomeSceneComp::fillHomeMarkPointNotify(proto::HomeMarkPointNotify &)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
            (const HomeSceneComp::fillHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v2 + 32),
            mark_furniture_proto_0,
            suite_data->guid,
            suite_furnitue_id,
            p_spawn_pos);
          suite_extra_data = proto::HomeMarkPointFurnitureData::mutable_suite_data(mark_furniture_proto_0);
          if ( *(_BYTE *)(((unsigned __int64)suite_data >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)suite_data >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          proto::HomeMarkPointSuiteData::set_suite_id(suite_extra_data, suite_data->suite_id);
          __gnu_cxx::__normal_iterator<HomeFurnitureSuiteData const*,std::vector<HomeFurnitureSuiteData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureSuiteData*,std::vector<HomeFurnitureSuiteData> > *const)&__for_begin_1);
        }
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
      }
      __for_range_4 = &arrangement_data->scene_transfer_map;
      __for_begin_1._M_current = (const HomeNpcData *)std::map<unsigned int,HomeTransferData>::begin(&arrangement_data->scene_transfer_map)._M_node;
      __for_end_1._M_current = (const HomeNpcData *)std::map<unsigned int,HomeTransferData>::end(__for_range_4)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTransferData> >::_Self *)&__for_begin_1,
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTransferData> >::_Self *)&__for_end_1) )
      {
        v60 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTransferData>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTransferData> > *const)&__for_begin_1);
        guid_0 = std::get<0ul,unsigned int const,HomeTransferData>(v60);
        transfer_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeTransferData> >::type *)std::get<1ul,unsigned int const,HomeTransferData>(v60);
        posa = &transfer_data->spawn_pos;
        if ( *(_BYTE *)(((unsigned __int64)&transfer_data->furniture_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)transfer_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&transfer_data->furniture_id >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v13 = transfer_data->furniture_id;
        if ( *(_BYTE *)(((unsigned __int64)guid_0 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)guid_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)guid_0 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        v14 = *guid_0;
        v15 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
        HomeSceneComp::fillHomeMarkPointNotify(proto::HomeMarkPointNotify &)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
          (const HomeSceneComp::fillHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v2 + 32),
          v15,
          v14,
          v13,
          posa);
        std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTransferData>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,HomeTransferData> > *const)&__for_begin_1);
      }
      if ( std::optional<HomeFurnitureData>::has_value(&arrangement_data->main_house) )
      {
        main_house = &arrangement_data->main_house;
        v16 = std::optional<HomeFurnitureData>::operator->(&arrangement_data->main_house);
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        furniture_id_0 = v16->furniture_id;
        n = std::optional<HomeFurnitureData>::operator->(main_house);
        if ( (((unsigned __int8)n + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&n->spawn_pos >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&n->spawn_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&n->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)n + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&n->spawn_pos.z + 3) >> 3) + 0x7FFF8000) )
        {
          n = (HomeFurnitureData *)__asan_report_load_n(&n->spawn_pos, 12LL);
        }
        *(_QWORD *)(v2 + 64) = *(_QWORD *)&n->spawn_pos.x;
        *(float *)(v2 + 72) = n->spawn_pos.z;
        v18 = std::optional<HomeFurnitureData>::operator->(main_house);
        if ( *(_BYTE *)(((unsigned __int64)&v18->guid >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)v18 + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v18->guid >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        guid_1 = v18->guid;
        v19 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
        HomeSceneComp::fillHomeMarkPointNotify(proto::HomeMarkPointNotify &)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
          (const HomeSceneComp::fillHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v2 + 32),
          v19,
          guid_1,
          furniture_id_0,
          (const Vector3 *)(v2 + 64));
      }
      if ( (((unsigned __int8)arrangement_data - 52) & 7) >= *(_BYTE *)(((unsigned __int64)&arrangement_data->djinn_pos >> 3)
                                                                      + 0x7FFF8000)
        && *(_BYTE *)(((unsigned __int64)&arrangement_data->djinn_pos >> 3) + 0x7FFF8000) != 0
        || *(_BYTE *)((((unsigned __int64)&arrangement_data->djinn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)arrangement_data - 41) & 7) >= *(_BYTE *)((((unsigned __int64)&arrangement_data->djinn_pos.z
                                                                        + 3) >> 3)
                                                                      + 0x7FFF8000) )
      {
        __asan_report_load_n(&arrangement_data->djinn_pos, 12LL);
      }
      *(Vector3 *)(v2 + 64) = arrangement_data->djinn_pos;
      v20 = proto::HomeMarkPointSceneData::mutable_teapot_spirit_pos(mark_point_data);
      Vector3::toClient((const Vector3 *const)(v2 + 64), v20);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v77);
      p_lua_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77)->design_config.lua_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      scene_config_ptr = LuaConfigMgr::findSceneScriptConfig(p_lua_config_mgr, *scene_id);
      std::shared_ptr<Config>::~shared_ptr(&v77);
      if ( scene_config_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v77);
        p_scene_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v77)->design_config.txt_config_mgr.scene_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&scene_config_ptr->scene_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&scene_config_ptr->scene_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        v24 = SceneExcelConfigMgr::getSceneTypeBySceneId(p_scene_config_mgr, scene_config_ptr->scene_id) == SCENE_HOME_WORLD;
        std::shared_ptr<Config>::~shared_ptr(&v77);
        if ( v24 )
        {
          p_born_pos = &scene_config_ptr->born_pos;
          v26 = proto::HomeMarkPointSceneData::mutable_safe_point_pos(mark_point_data);
          Vector3::toClient(p_born_pos, v26);
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          &v78,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_scene_comp.cpp",
          "fillHomeMarkPointNotify",
          803);
        v22 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                &v78,
                (const char (*)[40])"home_scene config not found, scene_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, scene_id);
        common::milog::MiLogStream::~MiLogStream(&v78);
      }
      __for_range_5 = &arrangement_data->normal_mark_point_vec;
      __for_begin_1._M_current = (const HomeNpcData *)std::vector<HomeMarkPointFurnitureData>::begin(&arrangement_data->normal_mark_point_vec)._M_current;
      __for_end_1._M_current = (const HomeNpcData *)std::vector<HomeMarkPointFurnitureData>::end(__for_range_5)._M_current;
      while ( __gnu_cxx::operator!=<HomeMarkPointFurnitureData *,std::vector<HomeMarkPointFurnitureData>>(
                (const __gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData*,std::vector<HomeMarkPointFurnitureData> > *)&__for_begin_1,
                (const __gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData*,std::vector<HomeMarkPointFurnitureData> > *)&__for_end_1) )
      {
        normal_mark_point_data = __gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData *,std::vector<HomeMarkPointFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData*,std::vector<HomeMarkPointFurnitureData> > *const)&__for_begin_1);
        if ( *(_BYTE *)(((unsigned __int64)normal_mark_point_data >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)normal_mark_point_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)normal_mark_point_data >> 3)
                                                                                   + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        guid_2 = normal_mark_point_data->guid;
        if ( *(_BYTE *)(((unsigned __int64)&normal_mark_point_data->furniture_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)normal_mark_point_data + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&normal_mark_point_data->furniture_id >> 3)
                                                                               + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        furniture_id_1 = normal_mark_point_data->furniture_id;
        if ( (((unsigned __int8)normal_mark_point_data + 8) & 7) >= *(_BYTE *)(((unsigned __int64)&normal_mark_point_data->spawn_pos >> 3)
                                                                             + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)&normal_mark_point_data->spawn_pos >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&normal_mark_point_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)normal_mark_point_data + 19) & 7) >= *(_BYTE *)((((unsigned __int64)&normal_mark_point_data->spawn_pos.z
                                                                                + 3) >> 3)
                                                                              + 0x7FFF8000) )
        {
          __asan_report_load_n(&normal_mark_point_data->spawn_pos, 12LL);
        }
        *(Vector3 *)(v2 + 64) = normal_mark_point_data->spawn_pos;
        v27 = proto::HomeMarkPointSceneData::add_furniture_list(mark_point_data);
        HomeSceneComp::fillHomeMarkPointNotify(proto::HomeMarkPointNotify &)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
          (const HomeSceneComp::fillHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const)(v2 + 32),
          v27,
          guid_2,
          furniture_id_1,
          (const Vector3 *)(v2 + 64));
        __gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData *,std::vector<HomeMarkPointFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<HomeMarkPointFurnitureData*,std::vector<HomeMarkPointFurnitureData> > *const)&__for_begin_1);
      }
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v2 + 96));
  if ( v79 == (char *)v2 )
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

// Line 736: range 00000000145B0DFA-00000000145B0E9F
void __cdecl HomeSceneComp::fillHomeMarkPointNotify(proto::HomeMarkPointNotify &)::{lambda(proto::HomeMarkPointFurnitureData &,unsigned int,unsigned int,Vector3 const&)#1}::operator()(
        const HomeSceneComp::fillHomeMarkPointNotify::<lambda(proto::HomeMarkPointFurnitureData&, uint32_t, uint32_t, const Vector3&)> *const __closure,
        proto::HomeMarkPointFurnitureData *proto,
        uint32_t guid,
        uint32_t furniture_id,
        const Vector3 *pos)
{
  google::protobuf::uint32 FurnitureSpeicalType; // edx
  proto::Vector *v6; // rdx

  proto::HomeMarkPointFurnitureData::set_guid(proto, guid);
  proto::HomeMarkPointFurnitureData::set_furniture_id(proto, furniture_id);
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  FurnitureSpeicalType = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(__closure->__home_config_mgr, furniture_id);
  proto::HomeMarkPointFurnitureData::set_furniture_type(proto, FurnitureSpeicalType);
  v6 = proto::HomeMarkPointFurnitureData::mutable_pos(proto);
  Vector3::toClient(pos, v6);
};

// Line 822: range 00000000145B2026-00000000145B217C
void __cdecl HomeSceneComp::sendHomeMarkPointNotify(HomeSceneComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:823";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::sendHomeMarkPointNotify;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::HomeMarkPointNotify::HomeMarkPointNotify((proto::HomeMarkPointNotify *const)(v2 + 48));
  HomeSceneComp::fillHomeMarkPointNotify(this, (proto::HomeMarkPointNotify *)(v2 + 48));
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::HomeMarkPointNotify::~HomeMarkPointNotify((proto::HomeMarkPointNotify *const)(v2 + 48));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 829: range 00000000145B217E-00000000145B22FE
void __cdecl HomeSceneComp::sendAllPlayerHomeMarkPointNotify(HomeSceneComp *const this)
{
  proto::HomeMarkPointNotify *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  char v4[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (proto::HomeMarkPointNotify *)v4;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (proto::HomeMarkPointNotify *)v2;
  }
  v1->_vptr_MessageLite = (int (**)(...))1102416563;
  v1->_internal_metadata_.ptr_ = "1 48 48 10 notify:830";
  v1->mark_point_data_list_.arena_ = (google::protobuf::Arena *)HomeSceneComp::sendAllPlayerHomeMarkPointNotify;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::HomeMarkPointNotify::HomeMarkPointNotify(v1 + 1);
  HomeSceneComp::fillHomeMarkPointNotify(this, v1 + 1);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::notifyAllPlayer<proto::HomeMarkPointNotify>(this->home_, v1 + 1, 0);
  proto::HomeMarkPointNotify::~HomeMarkPointNotify(v1 + 1);
  if ( v4 == (char *)v1 )
  {
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    v1->_vptr_MessageLite = (int (**)(...))1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 836: range 00000000145B2300-00000000145B34A5
__int64 __fastcall HomeSceneComp::updateHomeGroupData(HomeSceneComp *const this, uint32_t scene_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  unsigned int v8; // r14d
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  HomeModuleData *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  Scene *v16; // rax
  SceneBlockGroupComp *BlockGroupComp; // rax
  std::vector<HomeFurnitureData>::size_type group_furniture_index; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  std::vector<HomeFurnitureData> *p_deploy_furniure_vec; // rcx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v32; // rdx
  Transform *v33; // rax
  Scene *v34; // rax
  SceneBlockGroupComp *v35; // rax
  __int64 result; // rax
  int32_t ret; // [rsp+10h] [rbp-2A0h]
  int home_module_id; // [rsp+14h] [rbp-29Ch]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin; // [rsp+18h] [rbp-298h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end; // [rsp+20h] [rbp-290h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_begin_0; // [rsp+28h] [rbp-288h] BYREF
  std::vector<HomeFurnitureGroupData>::const_iterator __for_end_0; // [rsp+30h] [rbp-280h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_begin_1; // [rsp+38h] [rbp-278h] BYREF
  std::vector<HomeFurnitureData>::const_iterator __for_end_1; // [rsp+40h] [rbp-270h] BYREF
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> __y; // [rsp+48h] [rbp-268h] BYREF
  HomeSceneData *home_scene_data_ptr; // [rsp+50h] [rbp-260h]
  const JsonConfigMgr *json_config_mgr; // [rsp+58h] [rbp-258h]
  const HomeSceneArrangementData *arrangement_data; // [rsp+60h] [rbp-250h]
  const std::map<unsigned int,HomeBlockData> *__for_range; // [rsp+68h] [rbp-248h]
  const std::pair<unsigned int const,HomeBlockData> *v50; // [rsp+70h] [rbp-240h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+78h] [rbp-238h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *home_block_data; // [rsp+80h] [rbp-230h]
  const std::vector<HomeFurnitureGroupData> *__for_range_0; // [rsp+88h] [rbp-228h]
  const HomeFurnitureGroupData *furniture_group_data; // [rsp+90h] [rbp-220h]
  const HomeFurnitureData *group_root_furniture_data; // [rsp+98h] [rbp-218h]
  const FurnitureGroupJsonConfig *furniture_group_json_config_ptr; // [rsp+A0h] [rbp-210h]
  const std::unordered_map<unsigned int,unsigned int> *scene_group_map; // [rsp+A8h] [rbp-208h]
  const std::unordered_map<unsigned int,unsigned int> *furniture_group_config_map; // [rsp+B0h] [rbp-200h]
  const std::vector<HomeFurnitureData> *__for_range_1; // [rsp+B8h] [rbp-1F8h]
  const HomeFurnitureData *virtual_furniure_data; // [rsp+C0h] [rbp-1F0h]
  Transform *entity_transform; // [rsp+C8h] [rbp-1E8h]
  std::shared_ptr<Config> v62; // [rsp+D0h] [rbp-1E0h] BYREF
  common::milog::MiLogStream v63; // [rsp+E0h] [rbp-1D0h] BYREF
  char v64[432]; // [rsp+100h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v64;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 4 22 group_furniture_id:882 48 4 12 group_id:899 64 4 13 config_id:913 80 4 12 scene_id:83"
                        "5 96 8 8 iter:892 128 8 8 iter:906 160 16 13 scene_ptr:844 192 16 23 cur_module_data_ptr:851 224"
                        " 24 28 virtual_center_transform:871 288 56 24 entity_transform_map:872";
  *(_QWORD *)(v2 + 16) = HomeSceneComp::updateHomeGroupData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -234881024;
  v4[536862728] = -218959118;
  v4[536862730] = -218103808;
  v4[536862731] = -202116109;
  *(_DWORD *)(v2 + 80) = scene_id;
  ret = 0;
  if ( !std::operator==<HomeWorld>(&this->home_world_ptr_, 0LL) )
  {
    v9 = (unsigned int)std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_world_ptr_);
    World::findScene((World *const)(v2 + 160), v9);
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v2 + 160), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_scene_comp.cpp",
        "updateHomeGroupData",
        847);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v63,
              (const char (*)[47])"home_world_ptr_->findScene() failed. scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v2 + 80));
      common::milog::MiLogStream::~MiLogStream(&v63);
      v8 = -1;
LABEL_61:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 160));
      goto LABEL_62;
    }
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
    home_module_id = Scene::getOwnHomeModuleId(v11);
    HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v2 + 192), (__int64)this, home_module_id);
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v2 + 192), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "updateHomeGroupData",
        854);
      v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v63,
              (const char (*)[50])"[HOME_GROUP] getCurHomeModuleData fail, home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v13 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 192));
      home_scene_data_ptr = HomeModuleData::findHomeSceneData(v13, *(_DWORD *)(v2 + 80));
      if ( home_scene_data_ptr )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v62);
        json_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v62)->design_config.json_config_mgr;
        std::shared_ptr<Config>::~shared_ptr(&v62);
        v16 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
        BlockGroupComp = Scene::getBlockGroupComp(v16);
        SceneBlockGroupComp::clearAllOverrideGroupParam(BlockGroupComp);
        arrangement_data = &home_scene_data_ptr->arrangement_data;
        __for_range = &home_scene_data_ptr->arrangement_data.block_data_map;
        __for_begin._M_node = std::map<unsigned int,HomeBlockData>::begin(&home_scene_data_ptr->arrangement_data.block_data_map)._M_node;
        __for_end._M_node = std::map<unsigned int,HomeBlockData>::end(&home_scene_data_ptr->arrangement_data.block_data_map)._M_node;
        while ( std::operator!=(&__for_begin, &__for_end) )
        {
          v50 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin);
          block_id = std::get<0ul,unsigned int const,HomeBlockData>(v50);
          home_block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v50);
          __for_range_0 = &home_block_data->deploy_furniture_group_vec;
          __for_begin_0._M_current = std::vector<HomeFurnitureGroupData>::begin(&home_block_data->deploy_furniture_group_vec)._M_current;
          __for_end_0._M_current = std::vector<HomeFurnitureGroupData>::end(__for_range_0)._M_current;
          while ( __gnu_cxx::operator!=<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>(
                    &__for_begin_0,
                    &__for_end_0) )
          {
            furniture_group_data = __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator*(&__for_begin_0);
            Transform::Transform((Transform *const)(v2 + 224));
            std::unordered_map<unsigned int,Transform>::unordered_map((std::unordered_map<unsigned int,Transform> *const)(v2 + 288));
            if ( *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4();
            }
            group_furniture_index = furniture_group_data->group_furniture_index;
            if ( group_furniture_index < std::vector<HomeFurnitureData>::size(&home_block_data->deploy_furniure_vec) )
            {
              p_deploy_furniure_vec = &home_block_data->deploy_furniure_vec;
              if ( *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)furniture_group_data >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4();
              }
              group_root_furniture_data = std::vector<HomeFurnitureData>::operator[](
                                            p_deploy_furniure_vec,
                                            furniture_group_data->group_furniture_index);
              if ( *(_BYTE *)(((unsigned __int64)group_root_furniture_data >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)group_root_furniture_data & 7) + 3) >= *(_BYTE *)(((unsigned __int64)group_root_furniture_data >> 3)
                                                                                            + 0x7FFF8000) )
              {
                __asan_report_load4();
              }
              *(_DWORD *)(v2 + 32) = group_root_furniture_data->furniture_id;
              furniture_group_json_config_ptr = JsonConfigMgr::findFurnitureGroupConfig(
                                                  json_config_mgr,
                                                  *(_DWORD *)(v2 + 32));
              if ( furniture_group_json_config_ptr )
              {
                scene_group_map = &furniture_group_json_config_ptr->scene_group_map;
                furniture_group_config_map = &furniture_group_json_config_ptr->furniture_group_config_map;
                *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                                &furniture_group_json_config_ptr->scene_group_map,
                                                                                                (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 80));
                __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(scene_group_map)._M_cur;
                if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                       (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96),
                       &__y) )
                {
                  common::milog::MiLogStream::create(
                    &v63,
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/home/home_scene_comp.cpp",
                    "updateHomeGroupData",
                    895);
                  v23 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                          &v63,
                          (const char (*)[36])"cannot find group_id. furniture_id:");
                  v24 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v23,
                          (const unsigned int *)(v2 + 32));
                  v25 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                          v24,
                          (const char (*)[12])", scene_id:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v25,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream(&v63);
                  ret = -1;
                }
                else
                {
                  v26 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 96));
                  if ( *(_BYTE *)(((unsigned __int64)&v26->second >> 3) + 0x7FFF8000) != 0
                    && (char)((((_BYTE)v26 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v26->second >> 3)
                                                                      + 0x7FFF8000) )
                  {
                    __asan_report_load4();
                  }
                  *(_DWORD *)(v2 + 48) = v26->second;
                  if ( (((unsigned __int8)group_root_furniture_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&group_root_furniture_data->spawn_pos >> 3)
                                                                                          + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)&group_root_furniture_data->spawn_pos >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&group_root_furniture_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)group_root_furniture_data + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&group_root_furniture_data->spawn_pos.z
                                                                                             + 3) >> 3)
                                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load_n(&group_root_furniture_data->spawn_pos, 12LL);
                  }
                  *(Vector3 *)(v2 + 224) = group_root_furniture_data->spawn_pos;
                  if ( (((unsigned __int8)group_root_furniture_data + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&group_root_furniture_data->spawn_rot >> 3)
                                                                                           + 0x7FFF8000)
                    && *(_BYTE *)(((unsigned __int64)&group_root_furniture_data->spawn_rot >> 3) + 0x7FFF8000) != 0
                    || *(_BYTE *)((((unsigned __int64)&group_root_furniture_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
                    && (((unsigned __int8)group_root_furniture_data + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&group_root_furniture_data->spawn_rot.z
                                                                                             + 3) >> 3)
                                                                                           + 0x7FFF8000) )
                  {
                    __asan_report_load_n(&group_root_furniture_data->spawn_rot, 12LL);
                  }
                  *(Vector3 *)(v2 + 236) = group_root_furniture_data->spawn_rot;
                  __for_range_1 = &furniture_group_data->virtual_furniure_vec;
                  __for_begin_1._M_current = std::vector<HomeFurnitureData>::begin(&furniture_group_data->virtual_furniure_vec)._M_current;
                  __for_end_1._M_current = std::vector<HomeFurnitureData>::end(__for_range_1)._M_current;
                  while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
                            &__for_begin_1,
                            &__for_end_1) )
                  {
                    virtual_furniure_data = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*(&__for_begin_1);
                    *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 128) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                                     furniture_group_config_map,
                                                                                                     &virtual_furniure_data->furniture_id);
                    __y._M_cur = std::unordered_map<unsigned int,unsigned int>::end(furniture_group_config_map)._M_cur;
                    if ( std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
                           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 128),
                           &__y) )
                    {
                      common::milog::MiLogStream::create(
                        &v63,
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/home/home_scene_comp.cpp",
                        "updateHomeGroupData",
                        909);
                      v27 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                              &v63,
                              (const char (*)[37])"cannot find config_id. furniture_id:");
                      v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v27,
                              &virtual_furniure_data->furniture_id);
                      v29 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v28,
                              (const char (*)[12])", group_id:");
                      v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                              v29,
                              (const unsigned int *)(v2 + 48));
                      v31 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                              v30,
                              (const char (*)[12])", scene_id:");
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v31,
                        (const unsigned int *)(v2 + 80));
                      common::milog::MiLogStream::~MiLogStream(&v63);
                      ret = -1;
                    }
                    else
                    {
                      v32 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 128));
                      if ( *(_BYTE *)(((unsigned __int64)&v32->second >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)v32 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v32->second >> 3)
                                                                          + 0x7FFF8000) )
                      {
                        __asan_report_load4();
                      }
                      *(_DWORD *)(v2 + 64) = v32->second;
                      v33 = std::unordered_map<unsigned int,Transform>::operator[](
                              (std::unordered_map<unsigned int,Transform> *const)(v2 + 288),
                              (const std::unordered_map<unsigned int,Transform>::key_type *)(v2 + 64));
                      entity_transform = v33;
                      if ( ((unsigned __int8)v33 & 7) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000)
                        && *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
                        || *(_BYTE *)((((unsigned __int64)&v33->position.z + 3) >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)v33 + 11) & 7) >= *(_BYTE *)((((unsigned __int64)&v33->position.z + 3) >> 3)
                                                                         + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v33, 12LL);
                      }
                      if ( (((unsigned __int8)virtual_furniure_data + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&virtual_furniure_data->spawn_pos >> 3)
                                                                                          + 0x7FFF8000)
                        && *(_BYTE *)(((unsigned __int64)&virtual_furniure_data->spawn_pos >> 3) + 0x7FFF8000) != 0
                        || *(_BYTE *)((((unsigned __int64)&virtual_furniure_data->spawn_pos.z + 3) >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)virtual_furniure_data + 15) & 7) >= *(_BYTE *)((((unsigned __int64)&virtual_furniure_data->spawn_pos.z
                                                                                             + 3) >> 3)
                                                                                           + 0x7FFF8000) )
                      {
                        __asan_report_load_n(&virtual_furniure_data->spawn_pos, 12LL);
                      }
                      entity_transform->position = virtual_furniure_data->spawn_pos;
                      if ( (((unsigned __int8)entity_transform + 12) & 7) >= *(_BYTE *)(((unsigned __int64)&entity_transform->rotation >> 3)
                                                                                      + 0x7FFF8000)
                        && *(_BYTE *)(((unsigned __int64)&entity_transform->rotation >> 3) + 0x7FFF8000) != 0
                        || *(_BYTE *)((((unsigned __int64)&entity_transform->rotation.z + 3) >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)entity_transform + 23) & 7) >= *(_BYTE *)((((unsigned __int64)&entity_transform->rotation.z
                                                                                        + 3) >> 3)
                                                                                      + 0x7FFF8000) )
                      {
                        __asan_report_store_n(&entity_transform->rotation, 12LL);
                      }
                      if ( (((unsigned __int8)virtual_furniure_data + 16) & 7) >= *(_BYTE *)(((unsigned __int64)&virtual_furniure_data->spawn_rot >> 3)
                                                                                           + 0x7FFF8000)
                        && *(_BYTE *)(((unsigned __int64)&virtual_furniure_data->spawn_rot >> 3) + 0x7FFF8000) != 0
                        || *(_BYTE *)((((unsigned __int64)&virtual_furniure_data->spawn_rot.z + 3) >> 3) + 0x7FFF8000) != 0
                        && (((unsigned __int8)virtual_furniure_data + 27) & 7) >= *(_BYTE *)((((unsigned __int64)&virtual_furniure_data->spawn_rot.z
                                                                                             + 3) >> 3)
                                                                                           + 0x7FFF8000) )
                      {
                        __asan_report_load_n(&virtual_furniure_data->spawn_rot, 12LL);
                      }
                      entity_transform->rotation = virtual_furniure_data->spawn_rot;
                    }
                    __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++(&__for_begin_1);
                  }
                  v34 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 160));
                  v35 = Scene::getBlockGroupComp(v34);
                  SceneBlockGroupComp::overrideGroupParam(
                    v35,
                    *(_DWORD *)(v2 + 48),
                    (const Transform *)(v2 + 224),
                    (const std::unordered_map<unsigned int,Transform> *)(v2 + 288));
                }
              }
              else
              {
                common::milog::MiLogStream::create(
                  &v63,
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/home/home_scene_comp.cpp",
                  "updateHomeGroupData",
                  886);
                v22 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                        &v63,
                        (const char (*)[52])"findHomeGroupConfig() return nullptr. furniture_id:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v22,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream(&v63);
                ret = -1;
              }
            }
            else
            {
              common::milog::MiLogStream::create(
                &v63,
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/home/home_scene_comp.cpp",
                "updateHomeGroupData",
                877);
              v19 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                      &v63,
                      (const char (*)[24])"group_furniture_index: ");
              v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v19,
                      &furniture_group_data->group_furniture_index);
              common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(v20, (const char (*)[18])off_2540E0C0);
              common::milog::MiLogStream::~MiLogStream(&v63);
              ret = -1;
            }
            std::unordered_map<unsigned int,Transform>::~unordered_map((std::unordered_map<unsigned int,Transform> *const)(v2 + 288));
            __gnu_cxx::__normal_iterator<HomeFurnitureGroupData const*,std::vector<HomeFurnitureGroupData>>::operator++(&__for_begin_0);
          }
          std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin);
        }
        v8 = ret;
        goto LABEL_60;
      }
      common::milog::MiLogStream::create(
        &v63,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "updateHomeGroupData",
        860);
      v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v63,
              (const char (*)[48])"[HOME_GROUP] findHomeSceneData fail, scene_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 80));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    *(_DWORD *)(v2 + 64) = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v2 + 64));
    common::milog::MiLogStream::~MiLogStream(&v63);
    v8 = -1;
LABEL_60:
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v2 + 192));
    goto LABEL_61;
  }
  common::milog::MiLogStream::create(
    &v63,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_scene_comp.cpp",
    "updateHomeGroupData",
    841);
  v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v63,
         (const char (*)[52])"[HOME_GROUP] home_world_ptr_ is nullptr, scene_id: ");
  v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 80));
  v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v2 + 64) = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 64));
  common::milog::MiLogStream::~MiLogStream(&v63);
  v8 = -1;
LABEL_62:
  result = v8;
  if ( v64 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
  }
  return result;
};

// Line 926: range 00000000145B34A6-00000000145B3B63
std::set<unsigned int> *__fastcall HomeSceneComp::getHomeGroupSet(
        std::set<unsigned int> *retstr,
        HomeSceneComp *const this,
        uint32_t scene_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  uint32_t v9; // eax
  common::milog::MiLogStream *v10; // rax
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // r14
  HomeModuleData *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::map<unsigned int,unsigned int> *p_group_furniture_map; // rsi
  unsigned int val; // [rsp+28h] [rbp-128h] BYREF
  uint32_t home_module_id; // [rsp+2Ch] [rbp-124h]
  HomeSceneData *home_scene_data_ptr; // [rsp+30h] [rbp-120h]
  const HomeSceneArrangementData *arrangement_data; // [rsp+38h] [rbp-118h]
  common::milog::MiLogStream v23; // [rsp+40h] [rbp-110h] BYREF
  char v24[240]; // [rsp+60h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 12 scene_id:925 48 16 13 scene_ptr:933 80 16 23 cur_module_data_ptr:940 112 48 13 empty_set:927";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::getHomeGroupSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862725] = -202116109;
  *(_DWORD *)(v3 + 32) = scene_id;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 112));
  if ( !std::operator==<HomeWorld>(&this->home_world_ptr_, 0LL) )
  {
    v9 = (unsigned int)std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_world_ptr_);
    World::findScene((World *const)(v3 + 48), v9);
    if ( std::operator==<Scene>((const std::shared_ptr<Scene> *)(v3 + 48), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_scene_comp.cpp",
        "getHomeGroupSet",
        936);
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              &v23,
              (const char (*)[47])"home_world_ptr_->findScene() failed. scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      common::milog::MiLogStream::~MiLogStream(&v23);
      std::set<unsigned int>::set(retstr, (std::set<unsigned int> *)(v3 + 112));
LABEL_22:
      std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v3 + 48));
      goto LABEL_23;
    }
    v11 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 48));
    home_module_id = Scene::getOwnHomeModuleId(v11);
    HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 80), (__int64)this, home_module_id);
    if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 80), 0LL) )
    {
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "getHomeGroupSet",
        943);
      v12 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              &v23,
              (const char (*)[50])"[HOME_GROUP] getCurHomeModuleData fail, home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    else
    {
      v13 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
      home_scene_data_ptr = HomeModuleData::findHomeSceneData(v13, *(_DWORD *)(v3 + 32));
      if ( home_scene_data_ptr )
      {
        arrangement_data = &home_scene_data_ptr->arrangement_data;
        p_group_furniture_map = &home_scene_data_ptr->arrangement_data.group_furniture_map;
        if ( *(char *)(((unsigned __int64)retstr >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)retstr + 47) & 7) >= *(_BYTE *)((((unsigned __int64)&retstr->_M_t._M_impl._M_node_count
                                                                + 7) >> 3)
                                                              + 0x7FFF8000) )
        {
          p_group_furniture_map = (std::map<unsigned int,unsigned int> *)48;
          __asan_report_store_n(retstr, 48LL);
        }
        common::tools::MiscUtils::getAllMapKeysSet<std::map<unsigned int,unsigned int>>(retstr, p_group_furniture_map);
        goto LABEL_21;
      }
      common::milog::MiLogStream::create(
        &v23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_scene_comp.cpp",
        "getHomeGroupSet",
        949);
      v14 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              &v23,
              (const char (*)[48])"[HOME_GROUP] findHomeSceneData fail, scene_id: ");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v15, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
    }
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &val);
    common::milog::MiLogStream::~MiLogStream(&v23);
    std::set<unsigned int>::set(retstr, (std::set<unsigned int> *)(v3 + 112));
LABEL_21:
    std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 80));
    goto LABEL_22;
  }
  common::milog::MiLogStream::create(
    &v23,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_scene_comp.cpp",
    "getHomeGroupSet",
    930);
  v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v23,
         (const char (*)[52])"[HOME_GROUP] home_world_ptr_ is nullptr, scene_id: ");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v23);
  std::set<unsigned int>::set(retstr, (std::set<unsigned int> *)(v3 + 112));
LABEL_23:
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 112));
  if ( v24 == (char *)v3 )
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
  return retstr;
};

// Line 957: range 00000000145B3B64-00000000145B3C61
void __cdecl HomeSceneComp::checkSilentUpdate(HomeSceneComp *const this)
{
  common::milog::MiLogStream *v1; // rbx
  std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v4; // [rsp+20h] [rbp-30h] BYREF

  if ( std::operator==<HomeWorld>(&this->home_world_ptr_, 0LL) )
  {
    common::milog::MiLogStream::create(
      &v4,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_scene_comp.cpp",
      "checkSilentUpdate",
      960);
    v1 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           &v4,
           (const char (*)[28])"world_ptr is nullptr, uid: ");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &val);
    common::milog::MiLogStream::~MiLogStream(&v4);
  }
  else
  {
    v2 = std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeWorld,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->home_world_ptr_);
    World::checkSilentUpdate(v2);
  }
};

// Line 968: range 00000000145B3C62-00000000145B3E5F
const HomeSceneArrangementData *__fastcall HomeSceneComp::findSceneArrangementData(
        const HomeSceneComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  const HomeSceneArrangementData *p_arrangement_data; // r14
  std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  const HomeSceneArrangementData *result; // rax
  common::tools::transcribe_cv_t_4 *scene_data_ptr; // [rsp+18h] [rbp-A8h]
  std::shared_ptr<HomeModuleData> v11; // [rsp+20h] [rbp-A0h] BYREF
  char v12[144]; // [rsp+30h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 13 module_id:967 48 4 12 scene_id:967 64 16 19 module_data_ptr:969";
  *(_QWORD *)(v3 + 16) = HomeSceneComp::findSceneArrangementData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = module_id;
  *(_DWORD *)(v3 + 48) = scene_id;
  std::shared_ptr<HomeModuleData>::shared_ptr(&v11, 0LL);
  common::tools::MiscUtils::findMapWithDefaultValue<std::map<unsigned int,std::shared_ptr<HomeModuleData>>>(
    (const std::map<unsigned int,std::shared_ptr<HomeModuleData>> *)(v3 + 64),
    (const std::map<unsigned int,std::shared_ptr<HomeModuleData>>::key_type *)&this->home_module_data_map_,
    (std::map<unsigned int,std::shared_ptr<HomeModuleData>>::mapped_type *)(v3 + 32));
  std::shared_ptr<HomeModuleData>::~shared_ptr(&v11);
  if ( std::operator==<HomeModuleData>(0LL, (const std::shared_ptr<HomeModuleData> *)(v3 + 64)) )
  {
    p_arrangement_data = 0LL;
  }
  else
  {
    v7 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
    scene_data_ptr = common::tools::MiscUtils::findMapValuePointer<std::map<unsigned int,HomeSceneData>>(
                       &v7->scene_data_map,
                       (const std::map<unsigned int,HomeSceneData>::key_type *)(v3 + 48));
    if ( scene_data_ptr )
      p_arrangement_data = &scene_data_ptr->arrangement_data;
    else
      p_arrangement_data = 0LL;
  }
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
  result = p_arrangement_data;
  if ( v12 == (char *)v3 )
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
