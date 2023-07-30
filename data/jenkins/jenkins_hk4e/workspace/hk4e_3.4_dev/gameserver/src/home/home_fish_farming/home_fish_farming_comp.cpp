// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_fish_farming/home_fish_farming_comp.cpp

// Line 28: range 00000000145D7D1E-00000000145D80F4
int32_t __cdecl HomeFishFarmingComp::fromBin(HomeFishFarmingComp *const this, const proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  HomeModuleFishFarmingData *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r12
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleFishFarmingBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModuleFishFarmingBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const proto::HomeFishFarmingBin *home_fish_farming_bin; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::HomeModuleFishFarmingBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::HomeModuleFishFarmingBin *module_fish_farming_bin; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 module_id:33";
  *(_QWORD *)(v2 + 16) = HomeFishFarmingComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::clear(&this->module_fish_farming_data_map_);
  home_fish_farming_bin = proto::HomeDataBin::fish_farming_bin(home_data_bin);
  __for_range = proto::HomeFishFarmingBin::module_fish_farming_bin_list(home_fish_farming_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleFishFarmingBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModuleFishFarmingBin>::end(__for_range).it_;
  while ( 1 )
  {
    if ( !google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleFishFarmingBin const>::operator!=(
            &__for_begin,
            &__for_end) )
    {
      result = 0;
      goto LABEL_16;
    }
    module_fish_farming_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleFishFarmingBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::HomeModuleFishFarmingBin::module_id(module_fish_farming_bin);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeModuleFishFarmingData>,unsigned int>(
            &this->module_fish_farming_data_map_,
            (const unsigned int *)(v2 + 32)) )
      break;
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
      "fromBin",
      36);
    v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
           &v19,
           (const char (*)[41])"[HOME_FISH_FARMING] duplicate module_id:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
LABEL_14:
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeModuleFishFarmingBin const>::operator++(&__for_begin);
  }
  v8 = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
         &this->module_fish_farming_data_map_,
         (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v2 + 32));
  if ( !HomeModuleFishFarmingData::fromBin(v8, module_fish_farming_bin) )
    goto LABEL_14;
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
    "fromBin",
    41);
  v9 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
         &v19,
         (const char (*)[74])"[HOME_FISH_FARMING] module_fish_farming_data.fromBin() failed, module_id:");
  v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 32));
  v11 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v10, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
  common::milog::MiLogStream::~MiLogStream(&v19);
  result = -1;
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

// Line 49: range 00000000145D80F6-00000000145D8318
int32_t __cdecl HomeFishFarmingComp::toBin(HomeFishFarmingComp *const this, proto::HomeDataBin *home_data_bin)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::HomeFishFarmingBin *home_fish_farming_bin; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,HomeModuleFishFarmingData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,HomeModuleFishFarmingData> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeModuleFishFarmingData> >::type *module_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeModuleFishFarmingData> >::type *module_fish_farming_data; // [rsp+50h] [rbp-40h]
  proto::HomeModuleFishFarmingBin *module_fish_farming_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  home_fish_farming_bin = proto::HomeDataBin::mutable_fish_farming_bin(home_data_bin);
  __for_range = &this->module_fish_farming_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::begin(&this->module_fish_farming_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::end(&this->module_fish_farming_data_map_)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,HomeModuleFishFarmingData>,false>(
            &__for_begin,
            &__for_end) )
      return 0;
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFishFarmingData>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,HomeModuleFishFarmingData>(v11);
    module_fish_farming_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeModuleFishFarmingData> >::type *)std::get<1ul,unsigned int const,HomeModuleFishFarmingData>(v11);
    module_fish_farming_bin = proto::HomeFishFarmingBin::add_module_fish_farming_bin_list(home_fish_farming_bin);
    if ( HomeModuleFishFarmingData::toBin(module_fish_farming_data, module_fish_farming_bin) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeModuleFishFarmingBin::set_module_id(module_fish_farming_bin, *module_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFishFarmingData>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
    "toBin",
    56);
  v2 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
         &v15,
         (const char (*)[73])"[HOME_FISH_FARMING] module_fish_farming_data.toBin() failed, module_id: ");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, module_id);
  v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v15);
  return -1;
};

// Line 65: range 00000000145D831A-00000000145D8338
int32_t __cdecl HomeFishFarmingComp::init(HomeFishFarmingComp *const this)
{
  HomeFishFarmingComp::initFishFarmingData(this);
  return 0;
};

// Line 71: range 00000000145D833A-00000000145D84C3
void __cdecl HomeFishFarmingComp::initFishFarmingData(HomeFishFarmingComp *const this)
{
  HomeSceneComp *SceneComp; // rax
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>>::iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_begin_0; // [rsp+28h] [rbp-58h] BYREF
  std::map<unsigned int,HomeSceneData>::iterator __for_end_0; // [rsp+30h] [rbp-50h] BYREF
  std::map<unsigned int,std::shared_ptr<HomeModuleData>> *__for_range; // [rsp+38h] [rbp-48h]
  const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > *v7; // [rsp+40h] [rbp-40h]
  std::tuple_element<0,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_id; // [rsp+48h] [rbp-38h]
  std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *module_data_ptr; // [rsp+50h] [rbp-30h]
  HomeModuleFishFarmingData *module_fish_farming_data; // [rsp+58h] [rbp-28h]
  std::map<unsigned int,HomeSceneData> *__for_range_0; // [rsp+60h] [rbp-20h]
  const std::pair<unsigned int const,HomeSceneData> *v12; // [rsp+68h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeSceneData> >::type *scene_id; // [rsp+70h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *scene_data; // [rsp+78h] [rbp-8h]

  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = Home::getSceneComp(this->home_);
  __for_range = HomeSceneComp::getModuleDataMap(SceneComp);
  __for_begin._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::begin(__for_range)._M_node;
  __for_end._M_node = std::map<unsigned int,std::shared_ptr<HomeModuleData>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    v7 = std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v7);
    module_data_ptr = (std::tuple_element<1,const std::pair<unsigned int const,std::shared_ptr<HomeModuleData> > >::type *)std::get<1ul,unsigned int const,std::shared_ptr<HomeModuleData>>(v7);
    module_fish_farming_data = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
                                 &this->module_fish_farming_data_map_,
                                 module_id);
    __for_range_0 = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr)->scene_data_map;
    __for_begin_0._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range_0)._M_node;
    __for_end_0._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin_0);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v12);
      scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v12);
      HomeModuleFishFarmingData::fromData(module_fish_farming_data, &scene_data->arrangement_data);
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
};

// Line 83: range 00000000145D84C4-00000000145D8B13
void __fastcall HomeFishFarmingComp::onUpdateArrangementInfo(
        HomeFishFarmingComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  HomeModuleData *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::mapped_type *v13; // rax
  HomeModuleFishFarmingData *v14; // rax
  Player *v15; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  uint32_t v17; // r14d
  Player *v18; // rax
  unsigned int val; // [rsp+1Ch] [rbp-194h] BYREF
  proto_log::FishpondType fishpond_type; // [rsp+20h] [rbp-190h]
  data::SceneType scene_type; // [rsp+24h] [rbp-18Ch]
  HomeSceneData *home_scene_data_ptr; // [rsp+28h] [rbp-188h]
  std::shared_ptr<Config> v24; // [rsp+30h] [rbp-180h] BYREF
  common::milog::MiLogStream v25; // [rsp+40h] [rbp-170h] BYREF
  char v26[336]; // [rsp+60h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 module_id:82 64 4 11 scene_id:82 80 16 18 module_data_ptr:84 112 16 14 player_ptr:101 "
                        "144 112 27 module_fish_farming_data:98";
  *(_QWORD *)(v3 + 16) = HomeFishFarmingComp::onUpdateArrangementInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862728] = -202116109;
  *(_DWORD *)(v3 + 48) = module_id;
  *(_DWORD *)(v3 + 64) = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(this->home_);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 80), SceneComp);
  if ( std::operator==<HomeModuleData>((const std::shared_ptr<HomeModuleData> *)(v3 + 80), 0LL) )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
      "onUpdateArrangementInfo",
      87);
    v7 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
           &v25,
           (const char (*)[55])"[HOME_FISH_FARMING] getHomeModuleData fail, module_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v25);
    goto LABEL_23;
  }
  v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 80));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v10, *(_DWORD *)(v3 + 64));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v25,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
      "onUpdateArrangementInfo",
      93);
    v11 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v25,
            (const char (*)[55])"[HOME_FISH_FARMING] findHomeSceneData fail, scene_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  v13 = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
          &this->module_fish_farming_data_map_,
          (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v3 + 48));
  HomeModuleFishFarmingData::HomeModuleFishFarmingData((HomeModuleFishFarmingData *const)(v3 + 144), v13);
  v14 = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
          &this->module_fish_farming_data_map_,
          (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v3 + 48));
  HomeModuleFishFarmingData::fromData(v14, &home_scene_data_ptr->arrangement_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v3 + 112));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v3 + 112), 0LL) )
  {
    v15 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    HomeFishFarmingComp::notifyCurFishFarmingData(this, v15);
    fishpond_type = FISHPOND_TYPE_NONE;
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v24);
    v16 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v24);
    scene_type = SceneExcelConfigMgr::getSceneTypeBySceneId(
                   &v16->design_config.txt_config_mgr.scene_config_mgr,
                   *(_DWORD *)(v3 + 64));
    std::shared_ptr<Config>::~shared_ptr(&v24);
    if ( scene_type == SCENE_HOME_ROOM )
    {
      fishpond_type = FISHPOND_TYPE_HOME_ROOM;
    }
    else if ( scene_type == SCENE_HOME_WORLD )
    {
      fishpond_type = FISHPOND_TYPE_HOME_WORLD;
    }
    v17 = *(_DWORD *)(v3 + 48);
    v18 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 112));
    HomeFishFarmingComp::logFishFarmingChange(
      this,
      v18,
      v17,
      (const HomeModuleFishFarmingData *)(v3 + 144),
      FISH_FARMING_CHANGE_RECYCLE_FISHPOND,
      fishpond_type);
  }
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v3 + 112));
  HomeModuleFishFarmingData::~HomeModuleFishFarmingData((HomeModuleFishFarmingData *const)(v3 + 144));
LABEL_23:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 80));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 123: range 00000000145D8B14-00000000145D90CC
void __fastcall HomeFishFarmingComp::onChangeRoomScene(
        HomeFishFarmingComp *const this,
        uint32_t module_id,
        uint32_t old_room_scene_id,
        uint32_t new_room_scene_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  HomeModuleData *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::mapped_type *v14; // rax
  uint32_t v15; // r14d
  Player *v16; // rax
  unsigned int val; // [rsp+2Ch] [rbp-184h] BYREF
  const HomeSceneData *home_scene_data_ptr; // [rsp+30h] [rbp-180h]
  HomeModuleFishFarmingData *module_fish_farming_data; // [rsp+38h] [rbp-178h]
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-170h] BYREF
  char v23[336]; // [rsp+60h] [rbp-150h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_3(288LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "5 48 4 13 module_id:122 64 4 21 new_room_scene_id:122 80 16 19 module_data_ptr:124 112 16 14 pla"
                        "yer_ptr:144 144 112 32 tmp_module_fish_farming_data:137";
  *(_QWORD *)(v4 + 16) = HomeFishFarmingComp::onChangeRoomScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = 61956;
  v6[536862723] = 62194;
  v6[536862724] = 62194;
  v6[536862728] = -202116109;
  *(_DWORD *)(v4 + 48) = module_id;
  *(_DWORD *)(v4 + 64) = new_room_scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(this->home_);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 80), SceneComp);
  if ( std::operator==<HomeModuleData>(0LL, (const std::shared_ptr<HomeModuleData> *)(v4 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
      "onChangeRoomScene",
      127);
    v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v22,
           (const char (*)[56])"[HOME_PICTURE_FRAME] getHomeModuleData fail, module_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    goto LABEL_19;
  }
  v11 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 80));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v11, *(_DWORD *)(v4 + 64));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
      "onChangeRoomScene",
      133);
    v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v22,
            (const char (*)[56])"[HOME_PICTURE_FRAME] findHomeSceneData fail, scene_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 64));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  v14 = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
          &this->module_fish_farming_data_map_,
          (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v4 + 48));
  HomeModuleFishFarmingData::HomeModuleFishFarmingData((HomeModuleFishFarmingData *const)(v4 + 144), v14);
  module_fish_farming_data = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
                               &this->module_fish_farming_data_map_,
                               (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v4 + 48));
  HomeModuleFishFarmingData::deleteDataBySceneId(module_fish_farming_data, old_room_scene_id);
  HomeModuleFishFarmingData::fromData(module_fish_farming_data, &home_scene_data_ptr->arrangement_data);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::findOwnerPlayer((Home *const)(v4 + 112));
  if ( std::operator!=<Player>((const std::shared_ptr<Player> *)(v4 + 112), 0LL) )
  {
    v15 = *(_DWORD *)(v4 + 48);
    v16 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator*((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 112));
    HomeFishFarmingComp::logFishFarmingChange(
      this,
      v16,
      v15,
      (const HomeModuleFishFarmingData *)(v4 + 144),
      FISH_FARMING_CHANGE_RECYCLE_MAIN_HOUSE,
      FISHPOND_TYPE_HOME_ROOM);
  }
  HomeFishFarmingComp::notifyCurFishFarmingDataToAll(this);
  std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v4 + 112));
  HomeModuleFishFarmingData::~HomeModuleFishFarmingData((HomeModuleFishFarmingData *const)(v4 + 144));
LABEL_19:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 80));
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8020) = -168430091;
  }
};

// Line 156: range 00000000145D90CE-00000000145D922F
void __cdecl HomeFishFarmingComp::notifyCurFishFarmingData(HomeFishFarmingComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::RepeatedPtrField<proto::HomeFishFarmingInfo> *v5; // rdx
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:157";
  *(_QWORD *)(v2 + 16) = HomeFishFarmingComp::notifyCurFishFarmingData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::HomeFishFarmingInfoNotify::HomeFishFarmingInfoNotify((proto::HomeFishFarmingInfoNotify *const)(v2 + 48));
  v5 = proto::HomeFishFarmingInfoNotify::mutable_fish_farming_info_list((proto::HomeFishFarmingInfoNotify *const)(v2 + 48));
  HomeFishFarmingComp::fillCurFishFarmingData(this, v5);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::HomeFishFarmingInfoNotify::~HomeFishFarmingInfoNotify((proto::HomeFishFarmingInfoNotify *const)(v2 + 48));
  if ( v6 == (char *)v2 )
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

// Line 163: range 00000000145D9230-00000000145D93BB
void __cdecl HomeFishFarmingComp::notifyCurFishFarmingDataToAll(HomeFishFarmingComp *const this)
{
  proto::HomeFishFarmingInfoNotify *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedPtrField<proto::HomeFishFarmingInfo> *v4; // rdx
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (proto::HomeFishFarmingInfoNotify *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (proto::HomeFishFarmingInfoNotify *)v2;
  }
  v1->_vptr_MessageLite = (int (**)(...))1102416563;
  v1->_internal_metadata_.ptr_ = "1 48 48 10 notify:164";
  v1->fish_farming_info_list_.arena_ = (google::protobuf::Arena *)HomeFishFarmingComp::notifyCurFishFarmingDataToAll;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::HomeFishFarmingInfoNotify::HomeFishFarmingInfoNotify(v1 + 1);
  v4 = proto::HomeFishFarmingInfoNotify::mutable_fish_farming_info_list(v1 + 1);
  HomeFishFarmingComp::fillCurFishFarmingData(this, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::notifyAllPlayer<proto::HomeFishFarmingInfoNotify>(this->home_, v1 + 1, 0);
  proto::HomeFishFarmingInfoNotify::~HomeFishFarmingInfoNotify(v1 + 1);
  if ( v5 == (char *)v1 )
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

// Line 170: range 00000000145D93BC-00000000145D9471
void __cdecl HomeFishFarmingComp::fillCurFishFarmingData(
        HomeFishFarmingComp *const this,
        google::protobuf::RepeatedPtrField<proto::HomeFishFarmingInfo> *fish_farming_info_list)
{
  proto::HomeFishFarmingInfo *v2; // rax
  std::unordered_map<unsigned int,HomeFishFarmingData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,HomeFishFarmingData> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFishFarmingData> >::type *guid; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *fish_farming_data; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<unsigned int,HomeFishFarmingData> *)HomeFishFarmingComp::getCurModuleFishFarmingData(this);
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFishFarmingData>,false>(&__for_begin, &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeFishFarmingData>(v6);
    fish_farming_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *)std::get<1ul,unsigned int const,HomeFishFarmingData>(v6);
    v2 = google::protobuf::RepeatedPtrField<proto::HomeFishFarmingInfo>::Add(fish_farming_info_list);
    HomeFishFarmingData::toClient(fish_farming_data, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator++(&__for_begin);
  }
};

// Line 178: range 00000000145D9472-00000000145D95D3
void __cdecl HomeFishFarmingComp::notifyScenePointFishFarmingData(HomeFishFarmingComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingInfo> *v5; // rdx
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:179";
  *(_QWORD *)(v2 + 16) = HomeFishFarmingComp::notifyScenePointFishFarmingData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::HomeScenePointFishFarmingInfoNotify::HomeScenePointFishFarmingInfoNotify((proto::HomeScenePointFishFarmingInfoNotify *const)(v2 + 48));
  v5 = proto::HomeScenePointFishFarmingInfoNotify::mutable_fish_farming_info_list((proto::HomeScenePointFishFarmingInfoNotify *const)(v2 + 48));
  HomeFishFarmingComp::fillScenePointFishFarmingData(this, v5);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::HomeScenePointFishFarmingInfoNotify::~HomeScenePointFishFarmingInfoNotify((proto::HomeScenePointFishFarmingInfoNotify *const)(v2 + 48));
  if ( v6 == (char *)v2 )
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

// Line 185: range 00000000145D95D4-00000000145D968D
void __cdecl HomeFishFarmingComp::fillScenePointFishFarmingData(
        HomeFishFarmingComp *const this,
        google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingInfo> *fish_farming_info_list)
{
  proto::HomeScenePointFishFarmingInfo *v2; // rax
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > >::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > >::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > > *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *key_pair; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *fish_farming_data; // [rsp+38h] [rbp-8h]

  __for_range = &HomeFishFarmingComp::getCurModuleFishFarmingData(this)->scene_point_fish_farming_data_map;
  __for_begin._M_cur = std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator*(&__for_begin);
    key_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v6);
    fish_farming_data = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v6);
    v2 = google::protobuf::RepeatedPtrField<proto::HomeScenePointFishFarmingInfo>::Add(fish_farming_info_list);
    HomeScenePointFishFarmingData::toClient(fish_farming_data, v2);
    std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator++(&__for_begin);
  }
};

// Line 193: range 00000000145D968E-00000000145D9791
HomeModuleFishFarmingData *__cdecl HomeFishFarmingComp::getCurModuleFishFarmingData(HomeFishFarmingComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  HomeModuleFishFarmingData *result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 cur_module_id:194";
  *(_QWORD *)(v1 + 16) = HomeFishFarmingComp::getCurModuleFishFarmingData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 32) = Home::getCurModuleId(this->home_);
  result = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
             &this->module_fish_farming_data_map_,
             (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v1 + 32));
  if ( v5 == (char *)v1 )
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

// Line 199: range 00000000145D9792-00000000145D98F3
HomeFishFarmingData *__fastcall HomeFishFarmingComp::getFishFarmingData(
        HomeFishFarmingComp *const this,
        uint32_t fishpond_guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeFishFarmingData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false> __y; // [rsp+10h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData> *fish_farming_data_map; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 17 fishpond_guid:198 64 8 8 iter:201";
  *(_QWORD *)(v2 + 16) = HomeFishFarmingComp::getFishFarmingData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = fishpond_guid;
  fish_farming_data_map = (std::unordered_map<unsigned int,HomeFishFarmingData> *)HomeFishFarmingComp::getCurModuleFishFarmingData(this);
  *(std::unordered_map<unsigned int,HomeFishFarmingData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeFishFarmingData>::find(
                                                                                   fish_farming_data_map,
                                                                                   (const std::unordered_map<unsigned int,HomeFishFarmingData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(fish_farming_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeFishFarmingData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)(v2 + 64))->second;
  }
  if ( v8 == (char *)v2 )
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

// Line 210: range 00000000145D98F4-00000000145D9A47
HomeModuleFishFarmingData *__fastcall HomeFishFarmingComp::getModuleFishFarmingData(
        HomeFishFarmingComp *const this,
        uint32_t module_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeModuleFishFarmingData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeModuleFishFarmingData>,false> __y; // [rsp+18h] [rbp-88h] BYREF
  char v7[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 13 module_id:209 64 8 8 iter:211";
  *(_QWORD *)(v2 + 16) = HomeFishFarmingComp::getModuleFishFarmingData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = module_id;
  *(std::unordered_map<unsigned int,HomeModuleFishFarmingData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::find(
                                                                                         &this->module_fish_farming_data_map_,
                                                                                         (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,HomeModuleFishFarmingData>::end(&this->module_fish_farming_data_map_)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeModuleFishFarmingData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeModuleFishFarmingData>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFishFarmingData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModuleFishFarmingData>,false,false> *const)(v2 + 64))->second;
  }
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
  return result;
};

// Line 220: range 00000000145D9A48-00000000145D9A66
void __cdecl HomeFishFarmingComp::resetFishFarmingByGm(HomeFishFarmingComp *const this)
{
  std::unordered_map<unsigned int,HomeModuleFishFarmingData>::clear(&this->module_fish_farming_data_map_);
};

// Line 225: range 00000000145D9A68-00000000145DA855
void __fastcall HomeFishFarmingComp::logFishFarmingChange(
        HomeFishFarmingComp *const this,
        Player *player,
        uint32_t module_id,
        const HomeModuleFishFarmingData *pre_data,
        int reason,
        proto_log::FishpondType fishpond_type)
{
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  _DWORD *v8; // r12
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v12; // ecx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v13; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v15; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v16; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v17; // rdx
  std::map<unsigned int,unsigned int>::mapped_type *v18; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v19; // ecx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v20; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v21; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v22; // r14d
  std::map<unsigned int,unsigned int>::mapped_type *v23; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v24; // rdx
  common::milog::MiLogStream *v25; // r14
  common::milog::MiLogStream *v26; // r14
  common::milog::MiLogStream *v27; // r14
  unsigned int val; // [rsp+30h] [rbp-2B0h] BYREF
  uint32_t recycle_fish_reason_1; // [rsp+34h] [rbp-2ACh]
  uint32_t recycle_fish_reason_0; // [rsp+38h] [rbp-2A8h]
  uint32_t recycle_fish_reason; // [rsp+3Ch] [rbp-2A4h]
  std::unordered_map<unsigned int,HomeFishFarmingData>::const_iterator __for_begin; // [rsp+40h] [rbp-2A0h] BYREF
  std::unordered_map<unsigned int,HomeFishFarmingData>::const_iterator __for_end; // [rsp+48h] [rbp-298h] BYREF
  const std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > > *__for_range_1; // [rsp+50h] [rbp-290h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> > > *__for_range_2; // [rsp+58h] [rbp-288h]
  const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> *v40; // [rsp+60h] [rbp-280h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *__2; // [rsp+68h] [rbp-278h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *fish_farming_data_2; // [rsp+70h] [rbp-270h]
  const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> *v43; // [rsp+78h] [rbp-268h]
  std::tuple_element<0,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *__1; // [rsp+80h] [rbp-260h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *fish_farming_data_1; // [rsp+88h] [rbp-258h]
  const std::unordered_map<unsigned int,HomeFishFarmingData> *__for_range; // [rsp+90h] [rbp-250h]
  std::unordered_map<unsigned int,HomeFishFarmingData> *__for_range_0; // [rsp+98h] [rbp-248h]
  const std::pair<unsigned int const,HomeFishFarmingData> *v48; // [rsp+A0h] [rbp-240h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFishFarmingData> >::type *__0; // [rsp+A8h] [rbp-238h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *fish_farming_data_0; // [rsp+B0h] [rbp-230h]
  const std::pair<unsigned int const,HomeFishFarmingData> *v51; // [rsp+B8h] [rbp-228h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeFishFarmingData> >::type *_; // [rsp+C0h] [rbp-220h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *fish_farming_data; // [rsp+C8h] [rbp-218h]
  std::map<unsigned int,unsigned int> *__for_range_3; // [rsp+D0h] [rbp-210h]
  std::map<unsigned int,unsigned int> *__for_range_4; // [rsp+D8h] [rbp-208h]
  const std::pair<unsigned int const,unsigned int> *v56; // [rsp+E0h] [rbp-200h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id_0; // [rsp+E8h] [rbp-1F8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count_0; // [rsp+F0h] [rbp-1F0h]
  const std::pair<unsigned int const,unsigned int> *v59; // [rsp+F8h] [rbp-1E8h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id; // [rsp+100h] [rbp-1E0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+108h] [rbp-1D8h]
  common::milog::MiLogStream v62; // [rsp+110h] [rbp-1D0h] BYREF
  char v63[432]; // [rsp+130h] [rbp-1B0h] BYREF

  v6 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_3(384LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "6 32 4 13 module_id:224 48 4 17 fishpond_type:224 64 48 25 pre_fish_id_count_map:227 144 48 25 c"
                        "ur_fish_id_count_map:229 224 48 27 place_fish_id_count_map:265 304 48 29 recycle_fish_id_count_map:266";
  *(_QWORD *)(v6 + 16) = HomeFishFarmingComp::logFishFarmingChange;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234556924;
  v8[536862723] = -219021312;
  v8[536862724] = 62194;
  v8[536862726] = -218959118;
  v8[536862728] = -219021312;
  v8[536862729] = 62194;
  v8[536862731] = -202116109;
  *(_DWORD *)(v6 + 32) = module_id;
  *(_DWORD *)(v6 + 48) = fishpond_type;
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 64));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 144));
  v9 = *(_DWORD *)(v6 + 48);
  if ( v9 > 2 )
  {
    if ( v9 != 3 )
      goto LABEL_21;
    __for_range_1 = &pre_data->scene_point_fish_farming_data_map;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::begin(&pre_data->scene_point_fish_farming_data_map)._M_cur;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::end(&pre_data->scene_point_fish_farming_data_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_end) )
    {
      v43 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
      __1 = std::get<0ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v43);
      fish_farming_data_1 = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v43);
      HomeFishDataBase::fillFishIdCountMap(fish_farming_data_1, (std::map<unsigned int,unsigned int> *)(v6 + 64));
      std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
    }
    __for_range_2 = &std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
                       &this->module_fish_farming_data_map_,
                       (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v6 + 32))->scene_point_fish_farming_data_map;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::begin(__for_range_2)._M_cur;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::unordered_map<std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>>>::end(__for_range_2)._M_cur;
    while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true>(
              (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_begin,
              (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,true> *)&__for_end) )
    {
      v40 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
      __2 = std::get<0ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v40);
      fish_farming_data_2 = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,HomeScenePointFishFarmingData>(v40);
      HomeFishDataBase::fillFishIdCountMap(fish_farming_data_2, (std::map<unsigned int,unsigned int> *)(v6 + 144));
      std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,HomeScenePointFishFarmingData>,false,true> *const)&__for_begin);
    }
  }
  else
  {
    if ( v9 <= 0 )
    {
LABEL_21:
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
        "logFishFarmingChange",
        259);
      v10 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v62,
              (const char (*)[26])"unsupport fishpond type: ");
      common::milog::MiLogStream::operator<<<proto_log::FishpondType,(proto_log::FishpondType*)0>(
        v10,
        (const proto_log::FishpondType *)(v6 + 48));
      common::milog::MiLogStream::~MiLogStream(&v62);
      goto LABEL_22;
    }
    __for_range = &pre_data->fish_farming_data_map;
    __for_begin._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::begin(&pre_data->fish_farming_data_map)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(&pre_data->fish_farming_data_map)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFishFarmingData>,false>(&__for_begin, &__for_end) )
    {
      v51 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator*(&__for_begin);
      _ = std::get<0ul,unsigned int const,HomeFishFarmingData>(v51);
      fish_farming_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *)std::get<1ul,unsigned int const,HomeFishFarmingData>(v51);
      HomeFishDataBase::fillFishIdCountMap(fish_farming_data, (std::map<unsigned int,unsigned int> *)(v6 + 64));
      std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator++(&__for_begin);
    }
    __for_range_0 = (std::unordered_map<unsigned int,HomeFishFarmingData> *)std::unordered_map<unsigned int,HomeModuleFishFarmingData>::operator[](
                                                                              &this->module_fish_farming_data_map_,
                                                                              (const std::unordered_map<unsigned int,HomeModuleFishFarmingData>::key_type *)(v6 + 32));
    __for_begin._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::begin(__for_range_0)._M_cur;
    __for_end._M_cur = std::unordered_map<unsigned int,HomeFishFarmingData>::end(__for_range_0)._M_cur;
    while ( std::__detail::operator!=<std::pair<unsigned int const,HomeFishFarmingData>,false>(&__for_begin, &__for_end) )
    {
      v48 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)&__for_begin);
      __0 = std::get<0ul,unsigned int const,HomeFishFarmingData>(v48);
      fish_farming_data_0 = (std::tuple_element<1,const std::pair<unsigned int const,HomeFishFarmingData> >::type *)std::get<1ul,unsigned int const,HomeFishFarmingData>(v48);
      HomeFishDataBase::fillFishIdCountMap(fish_farming_data_0, (std::map<unsigned int,unsigned int> *)(v6 + 144));
      std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,HomeFishFarmingData>,false,false> *const)&__for_begin);
    }
  }
LABEL_22:
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 224));
  std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v6 + 304));
  __for_range_3 = (std::map<unsigned int,unsigned int> *)(v6 + 144);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v6 + 144))._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::map<unsigned int,unsigned int>::end(__for_range_3)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v59 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    fish_id = std::get<0ul,unsigned int const,unsigned int>(v59);
    count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v59);
    v11 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v6 + 64),
            fish_id);
    if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v12 = *v11;
    if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v12 < *count )
    {
      v13 = *count;
      v14 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v6 + 64),
              fish_id);
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v15 = v13 - *v14;
      v16 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v6 + 224),
              fish_id);
      v17 = v16;
      if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v16);
      }
      *v17 = v15;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  __for_range_4 = (std::map<unsigned int,unsigned int> *)(v6 + 64);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::map<unsigned int,unsigned int>::begin((std::map<unsigned int,unsigned int> *const)(v6 + 64))._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeFishFarmingData>,false>::__node_type *)std::map<unsigned int,unsigned int>::end(__for_range_4)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_begin,
            (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)&__for_end) )
  {
    v56 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
    fish_id_0 = std::get<0ul,unsigned int const,unsigned int>(v56);
    count_0 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v56);
    v18 = std::map<unsigned int,unsigned int>::operator[](
            (std::map<unsigned int,unsigned int> *const)(v6 + 144),
            fish_id_0);
    if ( *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v18 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v18 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    v19 = *v18;
    if ( *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)count_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v19 < *count_0 )
    {
      v20 = *count_0;
      v21 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v6 + 144),
              fish_id_0);
      if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v22 = v20 - *v21;
      v23 = std::map<unsigned int,unsigned int>::operator[](
              (std::map<unsigned int,unsigned int> *const)(v6 + 304),
              fish_id_0);
      v24 = v23;
      if ( *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v23 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v23 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v23);
      }
      *v24 = v22;
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)&__for_begin);
  }
  if ( reason == 2 )
  {
    if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v6 + 224)) )
    {
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
        "logFishFarmingChange",
        307);
      v26 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
              &v62,
              (const char (*)[73])"[HOME_FISH_FARMING] recycle main house can not place new fish, home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &val);
      common::milog::MiLogStream::~MiLogStream(&v62);
    }
    recycle_fish_reason_1 = 3;
    HomeFishFarmingComp::logFishpondRecycleFish(
      this,
      player,
      (const std::map<unsigned int,unsigned int> *)(v6 + 304),
      3u,
      *(proto_log::FishpondType *)(v6 + 48));
  }
  else
  {
    if ( reason > 2 )
      goto LABEL_64;
    if ( !reason )
    {
      recycle_fish_reason = 1;
      HomeFishFarmingComp::logFishpondRecycleFish(
        this,
        player,
        (const std::map<unsigned int,unsigned int> *)(v6 + 304),
        1u,
        *(proto_log::FishpondType *)(v6 + 48));
      HomeFishFarmingComp::logFishpondPlaceFish(
        this,
        player,
        (const std::map<unsigned int,unsigned int> *)(v6 + 224),
        *(proto_log::FishpondType *)(v6 + 48));
      goto LABEL_67;
    }
    if ( reason == 1 )
    {
      if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)(v6 + 224)) )
      {
        common::milog::MiLogStream::create(
          &v62,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
          "logFishFarmingChange",
          296);
        v25 = common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
                &v62,
                (const char (*)[71])"[HOME_FISH_FARMING] recycle fishpond can not place new fish, home_uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Home::getHomeUid(this->home_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &val);
        common::milog::MiLogStream::~MiLogStream(&v62);
      }
      recycle_fish_reason_0 = 2;
      HomeFishFarmingComp::logFishpondRecycleFish(
        this,
        player,
        (const std::map<unsigned int,unsigned int> *)(v6 + 304),
        2u,
        *(proto_log::FishpondType *)(v6 + 48));
    }
    else
    {
LABEL_64:
      common::milog::MiLogStream::create(
        &v62,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_fish_farming/home_fish_farming_comp.cpp",
        "logFishFarmingChange",
        314);
      v27 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
              &v62,
              (const char (*)[65])"[HOME_FISH_FARMING] unknown fish farming change reson, home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &val);
      common::milog::MiLogStream::~MiLogStream(&v62);
    }
  }
LABEL_67:
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 304));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 224));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 144));
  std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v6 + 64));
  if ( v63 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF800C) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 320: range 00000000145DA856-00000000145DAC41
void __cdecl HomeFishFarmingComp::logFishpondPlaceFish(
        HomeFishFarmingComp *const this,
        Player *player,
        const std::map<unsigned int,unsigned int> *fish_id_count_map,
        proto_log::FishpondType fishpond_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondPlaceFish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondPlaceFish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::string v10; // [rsp+0h] [rbp-120h]
  google::protobuf::uint32 fishpond_typea; // [rsp+4h] [rbp-11Ch]
  const std::map<unsigned int,unsigned int> *fish_id_count_mapa; // [rsp+8h] [rbp-118h]
  Player *playera; // [rsp+10h] [rbp-110h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,unsigned int> *v17; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+50h] [rbp-D0h]
  proto_log::HomeFishItemLog *fish_log; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-C0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+70h] [rbp-B0h] BYREF
  std::string v23; // [rsp+80h] [rbp-A0h] BYREF
  char v24[128]; // [rsp+A0h] [rbp-80h] BYREF

  *(&v10._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  v10._anon_0._M_allocated_capacity = (std::string::size_type)player;
  v10._M_string_length = (std::string::size_type)fish_id_count_map;
  HIDWORD(v10._M_dataplus._M_p) = fishpond_type;
  v4 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 1 22 log_context_holder:326 64 16 11 log_ptr:328";
  *(_QWORD *)(v4 + 16) = HomeFishFarmingComp::logFishpondPlaceFish;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234753551;
  v6[536862722] = -202178560;
  if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)v10._M_string_length) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v23, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48), 0xCEDu, v10);
    std::string::~string(&v23);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeFishpondPlaceFish>();
    __for_range = fish_id_count_mapa;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(fish_id_count_mapa)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(fish_id_count_mapa)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v17 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      fish_id = std::get<0ul,unsigned int const,unsigned int>(v17);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v17);
      v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondPlaceFish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondPlaceFish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
      fish_log = proto_log::PlayerLogBodyHomeFishpondPlaceFish::add_fish_log(v8);
      if ( *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fish_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::HomeFishItemLog::set_fish_id(fish_log, *fish_id);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::HomeFishItemLog::set_count(fish_log, *count);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondPlaceFish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondPlaceFish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
    proto_log::PlayerLogBodyHomeFishpondPlaceFish::set_fishpond_type(v9, fishpond_typea);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeFishpondPlaceFish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHomeFishpondPlaceFish> *)(v4 + 64));
    Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHomeFishpondPlaceFish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeFishpondPlaceFish> *const)(v4 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v4 + 48));
  }
  if ( v24 == (char *)v4 )
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
};

// Line 340: range 00000000145DAC42-00000000145DB052
void __cdecl HomeFishFarmingComp::logFishpondRecycleFish(
        HomeFishFarmingComp *const this,
        Player *player,
        const std::map<unsigned int,unsigned int> *fish_id_count_map,
        uint32_t reason,
        proto_log::FishpondType fishpond_type)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  _DWORD *v7; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  std::string fishpond_typea; // [rsp+0h] [rbp-120h]
  google::protobuf::uint32 fishpond_typeb; // [rsp+0h] [rbp-120h]
  google::protobuf::uint32 reasona; // [rsp+4h] [rbp-11Ch]
  const std::map<unsigned int,unsigned int> *fish_id_count_mapa; // [rsp+8h] [rbp-118h]
  Player *playera; // [rsp+10h] [rbp-110h]
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+38h] [rbp-E8h]
  const std::pair<unsigned int const,unsigned int> *v20; // [rsp+40h] [rbp-E0h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *fish_id; // [rsp+48h] [rbp-D8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+50h] [rbp-D0h]
  proto_log::HomeFishItemLog *fish_log; // [rsp+58h] [rbp-C8h]
  std::shared_ptr<google::protobuf::Message> p_body_ptr; // [rsp+60h] [rbp-C0h] BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+70h] [rbp-B0h] BYREF
  std::string v26; // [rsp+80h] [rbp-A0h] BYREF
  char v27[128]; // [rsp+A0h] [rbp-80h] BYREF

  *(&fishpond_typea._anon_0._M_allocated_capacity + 1) = (std::string::size_type)this;
  fishpond_typea._anon_0._M_allocated_capacity = (std::string::size_type)player;
  fishpond_typea._M_string_length = (std::string::size_type)fish_id_count_map;
  HIDWORD(fishpond_typea._M_dataplus._M_p) = reason;
  LODWORD(fishpond_typea._M_dataplus._M_p) = fishpond_type;
  v5 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_1(96LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "2 48 1 22 log_context_holder:346 64 16 11 log_ptr:348";
  *(_QWORD *)(v5 + 16) = HomeFishFarmingComp::logFishpondRecycleFish;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234753551;
  v7[536862722] = -202178560;
  if ( !std::map<unsigned int,unsigned int>::empty((const std::map<unsigned int,unsigned int> *const)fishpond_typea._M_string_length) )
  {
    BasicComp = Player::getBasicComp(player);
    PlayerBasicComp::getNextTransNo[abi:cxx11](&v26, BasicComp);
    StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48), 0xCEEu, fishpond_typea);
    std::string::~string(&v26);
    common::tools::perf::make_shared<proto_log::PlayerLogBodyHomeFishpondRecycleFish>();
    v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyHomeFishpondRecycleFish::set_reason(v9, reasona);
    __for_range = fish_id_count_mapa;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(fish_id_count_mapa)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(fish_id_count_mapa)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v20 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      fish_id = std::get<0ul,unsigned int const,unsigned int>(v20);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v20);
      v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
      fish_log = proto_log::PlayerLogBodyHomeFishpondRecycleFish::add_fish_log(v10);
      if ( *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)fish_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)fish_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::HomeFishItemLog::set_fish_id(fish_log, *fish_id);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      proto_log::HomeFishItemLog::set_count(fish_log, *count);
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    v11 = std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyHomeFishpondRecycleFish,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v5 + 64));
    proto_log::PlayerLogBodyHomeFishpondRecycleFish::set_fishpond_type(v11, fishpond_typeb);
    std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
    std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyHomeFishpondRecycleFish,void>(
      &p_body_ptr,
      (const std::shared_ptr<proto_log::PlayerLogBodyHomeFishpondRecycleFish> *)(v5 + 64));
    Player::printStatLog(playera, &p_body_ptr, &p_body_ext_ptr, 0xEu);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ptr);
    std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
    std::shared_ptr<proto_log::PlayerLogBodyHomeFishpondRecycleFish>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyHomeFishpondRecycleFish> *const)(v5 + 64));
    StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v5 + 48));
  }
  if ( v27 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8008) = -168430091;
  }
};
