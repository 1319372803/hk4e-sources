// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_picture_frame/home_picture_frame_comp.cpp

// Line 29: range 0000000016875DC4-0000000016876098
int32_t __cdecl HomePictureFrameComp::fromBin(
        HomePictureFrameComp *const this,
        const proto::HomeDataBin *home_data_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // r14
  HomeModulePictureFrameData *v8; // rax
  int32_t result; // eax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModulePictureFrameBin>::const_iterator __for_begin; // [rsp+18h] [rbp-B8h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeModulePictureFrameBin>::const_iterator __for_end; // [rsp+20h] [rbp-B0h] BYREF
  const proto::HomePictureFrameBin *home_picture_frame_bin; // [rsp+28h] [rbp-A8h]
  const google::protobuf::RepeatedPtrField<proto::HomeModulePictureFrameBin> *__for_range; // [rsp+30h] [rbp-A0h]
  const proto::HomeModulePictureFrameBin *module_picture_frame_bin; // [rsp+38h] [rbp-98h]
  common::milog::MiLogStream v16; // [rsp+40h] [rbp-90h] BYREF
  char v17[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 module_id:34";
  *(_QWORD *)(v2 + 16) = HomePictureFrameComp::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::unordered_map<unsigned int,HomeModulePictureFrameData>::clear(&this->module_picture_frame_data_map_);
  home_picture_frame_bin = proto::HomeDataBin::picture_frame_bin(home_data_bin);
  __for_range = proto::HomePictureFrameBin::module_picture_frame_bin_list(home_picture_frame_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeModulePictureFrameBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeModulePictureFrameBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeModulePictureFrameBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    module_picture_frame_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeModulePictureFrameBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::HomeModulePictureFrameBin::module_id(module_picture_frame_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeModulePictureFrameData>,unsigned int>(
           &this->module_picture_frame_data_map_,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v16,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
        "fromBin",
        37);
      v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
             &v16,
             (const char (*)[42])"[HOME_PICTURE_FRAME] duplicate module_id:");
      v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
      v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
      common::milog::MiLogStream::~MiLogStream(&v16);
    }
    else
    {
      v8 = std::unordered_map<unsigned int,HomeModulePictureFrameData>::operator[](
             &this->module_picture_frame_data_map_,
             (const std::unordered_map<unsigned int,HomeModulePictureFrameData>::key_type *)(v2 + 32));
      HomeModulePictureFrameData::fromBin(v8, module_picture_frame_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeModulePictureFrameBin const>::operator++(&__for_begin);
  }
  result = 0;
  if ( v17 == (char *)v2 )
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

// Line 46: range 000000001687609A-00000000168762BC
int32_t __cdecl HomePictureFrameComp::toBin(HomePictureFrameComp *const this, proto::HomeDataBin *home_data_bin)
{
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rbx
  unsigned int val; // [rsp+1Ch] [rbp-74h] BYREF
  std::unordered_map<unsigned int,HomeModulePictureFrameData>::iterator __for_begin; // [rsp+20h] [rbp-70h] BYREF
  std::unordered_map<unsigned int,HomeModulePictureFrameData>::iterator __for_end; // [rsp+28h] [rbp-68h] BYREF
  proto::HomePictureFrameBin *home_picture_frame_bin; // [rsp+30h] [rbp-60h]
  std::unordered_map<unsigned int,HomeModulePictureFrameData> *__for_range; // [rsp+38h] [rbp-58h]
  const std::pair<unsigned int const,HomeModulePictureFrameData> *v11; // [rsp+40h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeModulePictureFrameData> >::type *module_id; // [rsp+48h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeModulePictureFrameData> >::type *module_picture_frame_data; // [rsp+50h] [rbp-40h]
  proto::HomeModulePictureFrameBin *module_picture_frame_bin; // [rsp+58h] [rbp-38h]
  common::milog::MiLogStream v15; // [rsp+60h] [rbp-30h] BYREF

  home_picture_frame_bin = proto::HomeDataBin::mutable_picture_frame_bin(home_data_bin);
  __for_range = &this->module_picture_frame_data_map_;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeModulePictureFrameData>::begin(&this->module_picture_frame_data_map_)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeModulePictureFrameData>::end(&this->module_picture_frame_data_map_)._M_cur;
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,HomeModulePictureFrameData>,false>(
            &__for_begin,
            &__for_end) )
      return 0;
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModulePictureFrameData>,false,false>::operator*(&__for_begin);
    module_id = std::get<0ul,unsigned int const,HomeModulePictureFrameData>(v11);
    module_picture_frame_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeModulePictureFrameData> >::type *)std::get<1ul,unsigned int const,HomeModulePictureFrameData>(v11);
    module_picture_frame_bin = proto::HomePictureFrameBin::add_module_picture_frame_bin_list(home_picture_frame_bin);
    if ( HomeModulePictureFrameData::toBin(module_picture_frame_data, module_picture_frame_bin) )
      break;
    if ( *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)module_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)module_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    proto::HomeModulePictureFrameBin::set_module_id(module_picture_frame_bin, *module_id);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeModulePictureFrameData>,false,false>::operator++(&__for_begin);
  }
  common::milog::MiLogStream::create(
    &v15,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
    "toBin",
    53);
  v2 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
         &v15,
         (const char (*)[75])"[HOME_PICTURE_FRAME] module_picture_frame_data.toBin() failed, module_id: ");
  v3 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, module_id);
  v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" home_uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  val = Home::getHomeUid(this->home_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
  common::milog::MiLogStream::~MiLogStream(&v15);
  return -1;
};

// Line 62: range 00000000168762BE-00000000168762DC
int32_t __cdecl HomePictureFrameComp::init(HomePictureFrameComp *const this)
{
  HomePictureFrameComp::initPictureFrameData(this);
  return 0;
};

// Line 68: range 00000000168762DE-0000000016876467
void __cdecl HomePictureFrameComp::initPictureFrameData(HomePictureFrameComp *const this)
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
  HomeModulePictureFrameData *module_picture_frame_data; // [rsp+58h] [rbp-28h]
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
    module_picture_frame_data = std::unordered_map<unsigned int,HomeModulePictureFrameData>::operator[](
                                  &this->module_picture_frame_data_map_,
                                  module_id);
    __for_range_0 = &std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)module_data_ptr)->scene_data_map;
    __for_begin_0._M_node = std::map<unsigned int,HomeSceneData>::begin(__for_range_0)._M_node;
    __for_end_0._M_node = std::map<unsigned int,HomeSceneData>::end(__for_range_0)._M_node;
    while ( std::operator!=(&__for_begin_0, &__for_end_0) )
    {
      v12 = std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator*(&__for_begin_0);
      scene_id = std::get<0ul,unsigned int const,HomeSceneData>(v12);
      scene_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeSceneData> >::type *)std::get<1ul,unsigned int const,HomeSceneData>(v12);
      HomeModulePictureFrameData::refreshData(module_picture_frame_data, &scene_data->arrangement_data);
      std::_Rb_tree_iterator<std::pair<unsigned int const,HomeSceneData>>::operator++(&__for_begin_0);
    }
    std::_Rb_tree_iterator<std::pair<unsigned int const,std::shared_ptr<HomeModuleData>>>::operator++(&__for_begin);
  }
};

// Line 80: range 0000000016876468-000000001687656E
void __fastcall HomePictureFrameComp::refreshPictureFrameData(
        HomePictureFrameComp *const this,
        uint32_t module_id,
        const HomeSceneArrangementData *data)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::unordered_map<unsigned int,HomeModulePictureFrameData>::mapped_type *module_picture_frame_data; // [rsp+28h] [rbp-68h]
  char v8[96]; // [rsp+30h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 12 module_id:79";
  *(_QWORD *)(v3 + 16) = HomePictureFrameComp::refreshPictureFrameData;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = module_id;
  module_picture_frame_data = std::unordered_map<unsigned int,HomeModulePictureFrameData>::operator[](
                                &this->module_picture_frame_data_map_,
                                (const std::unordered_map<unsigned int,HomeModulePictureFrameData>::key_type *)(v3 + 32));
  if ( HomeModulePictureFrameData::refreshData(module_picture_frame_data, data) )
    HomePictureFrameComp::notifyCurPictureFrameDataToAll(this);
  if ( v8 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 91: range 0000000016876570-0000000016876937
void __fastcall HomePictureFrameComp::onUpdateArrangementInfo(
        HomePictureFrameComp *const this,
        uint32_t module_id,
        uint32_t scene_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  HomeModuleData *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  unsigned int val; // [rsp+14h] [rbp-BCh] BYREF
  const HomeSceneData *home_scene_data_ptr; // [rsp+18h] [rbp-B8h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-B0h] BYREF
  char v17[144]; // [rsp+40h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 12 module_id:90 48 4 11 scene_id:90 64 16 18 module_data_ptr:92";
  *(_QWORD *)(v3 + 16) = HomePictureFrameComp::onUpdateArrangementInfo;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202178560;
  *(_DWORD *)(v3 + 32) = module_id;
  *(_DWORD *)(v3 + 48) = scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(this->home_);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v3 + 64), SceneComp);
  if ( std::operator==<HomeModuleData>(0LL, (const std::shared_ptr<HomeModuleData> *)(v3 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
      "onUpdateArrangementInfo",
      95);
    v7 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v16,
           (const char (*)[56])"[HOME_PICTURE_FRAME] getHomeModuleData fail, module_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 32));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v16);
    goto LABEL_15;
  }
  v10 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 64));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v10, *(_DWORD *)(v3 + 48));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v16,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
      "onUpdateArrangementInfo",
      101);
    v11 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v16,
            (const char (*)[56])"[HOME_PICTURE_FRAME] findHomeSceneData fail, scene_id: ");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v3 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  HomePictureFrameComp::refreshPictureFrameData(this, *(_DWORD *)(v3 + 32), &home_scene_data_ptr->arrangement_data);
LABEL_15:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v3 + 64));
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
};

// Line 108: range 0000000016876938-0000000016876D4A
void __fastcall HomePictureFrameComp::onChangeRoomScene(
        HomePictureFrameComp *const this,
        uint32_t module_id,
        uint32_t old_room_scene_id,
        uint32_t new_room_scene_id)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  uint32_t SceneComp; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  HomeModuleData *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  unsigned int val; // [rsp+2Ch] [rbp-C4h] BYREF
  const HomeSceneData *home_scene_data_ptr; // [rsp+30h] [rbp-C0h]
  HomeModulePictureFrameData *module_picture_frame_data; // [rsp+38h] [rbp-B8h]
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-B0h] BYREF
  char v20[144]; // [rsp+60h] [rbp-90h] BYREF

  v4 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 32 4 13 module_id:107 48 4 21 new_room_scene_id:107 64 16 19 module_data_ptr:109";
  *(_QWORD *)(v4 + 16) = HomePictureFrameComp::onChangeRoomScene;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -202178560;
  *(_DWORD *)(v4 + 32) = module_id;
  *(_DWORD *)(v4 + 48) = new_room_scene_id;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  SceneComp = (unsigned int)Home::getSceneComp(this->home_);
  HomeSceneComp::getHomeModuleData((const HomeSceneComp *const)(v4 + 64), SceneComp);
  if ( std::operator==<HomeModuleData>(0LL, (const std::shared_ptr<HomeModuleData> *)(v4 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
      "onChangeRoomScene",
      112);
    v8 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v19,
           (const char (*)[56])"[HOME_PICTURE_FRAME] getHomeModuleData fail, module_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v9, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
LABEL_9:
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    goto LABEL_15;
  }
  v11 = std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<HomeModuleData,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v4 + 64));
  home_scene_data_ptr = HomeModuleData::findHomeSceneData(v11, *(_DWORD *)(v4 + 48));
  if ( !home_scene_data_ptr )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
      "onChangeRoomScene",
      118);
    v12 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
            &v19,
            (const char (*)[56])"[HOME_PICTURE_FRAME] findHomeSceneData fail, scene_id: ");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v4 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    goto LABEL_9;
  }
  module_picture_frame_data = std::unordered_map<unsigned int,HomeModulePictureFrameData>::operator[](
                                &this->module_picture_frame_data_map_,
                                (const std::unordered_map<unsigned int,HomeModulePictureFrameData>::key_type *)(v4 + 32));
  HomeModulePictureFrameData::deleteDataBySceneId(module_picture_frame_data, old_room_scene_id);
  HomeModulePictureFrameData::refreshData(module_picture_frame_data, &home_scene_data_ptr->arrangement_data);
  HomePictureFrameComp::notifyCurPictureFrameDataToAll(this);
LABEL_15:
  std::shared_ptr<HomeModuleData>::~shared_ptr((std::shared_ptr<HomeModuleData> *const)(v4 + 64));
  if ( v20 == (char *)v4 )
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

// Line 130: range 0000000016876D4C-0000000016876EAD
void __cdecl HomePictureFrameComp::notifyCurPictureFrameData(HomePictureFrameComp *const this, Player *player)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  google::protobuf::RepeatedPtrField<proto::HomePictureFrameInfo> *v5; // rdx
  char v6[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 48 48 10 notify:131";
  *(_QWORD *)(v2 + 16) = HomePictureFrameComp::notifyCurPictureFrameData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862723] = -202116109;
  proto::HomePictureFrameInfoNotify::HomePictureFrameInfoNotify((proto::HomePictureFrameInfoNotify *const)(v2 + 48));
  v5 = proto::HomePictureFrameInfoNotify::mutable_picture_frame_info_list((proto::HomePictureFrameInfoNotify *const)(v2 + 48));
  HomePictureFrameComp::fillCurPictureFrameData(this, v5);
  Player::sendProto(player, (const google::protobuf::Message *)(v2 + 48));
  proto::HomePictureFrameInfoNotify::~HomePictureFrameInfoNotify((proto::HomePictureFrameInfoNotify *const)(v2 + 48));
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

// Line 137: range 0000000016876EAE-0000000016877039
void __cdecl HomePictureFrameComp::notifyCurPictureFrameDataToAll(HomePictureFrameComp *const this)
{
  proto::HomePictureFrameInfoNotify *v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  google::protobuf::RepeatedPtrField<proto::HomePictureFrameInfo> *v4; // rdx
  char v5[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (proto::HomePictureFrameInfoNotify *)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = (proto::HomePictureFrameInfoNotify *)v2;
  }
  v1->_vptr_MessageLite = (int (**)(...))1102416563;
  v1->_internal_metadata_.ptr_ = "1 48 48 10 notify:138";
  v1->picture_frame_info_list_.arena_ = (google::protobuf::Arena *)HomePictureFrameComp::notifyCurPictureFrameDataToAll;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = 61937;
  v3[536862723] = -202116109;
  proto::HomePictureFrameInfoNotify::HomePictureFrameInfoNotify(v1 + 1);
  v4 = proto::HomePictureFrameInfoNotify::mutable_picture_frame_info_list(v1 + 1);
  HomePictureFrameComp::fillCurPictureFrameData(this, v4);
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  Home::notifyAllPlayer<proto::HomePictureFrameInfoNotify>(this->home_, v1 + 1, 0);
  proto::HomePictureFrameInfoNotify::~HomePictureFrameInfoNotify(v1 + 1);
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

// Line 144: range 000000001687703A-00000000168770EF
void __cdecl HomePictureFrameComp::fillCurPictureFrameData(
        HomePictureFrameComp *const this,
        google::protobuf::RepeatedPtrField<proto::HomePictureFrameInfo> *picture_frame_info_list)
{
  proto::HomePictureFrameInfo *v2; // rax
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  std::unordered_map<unsigned int,HomeOnePictureFrameData> *__for_range; // [rsp+20h] [rbp-20h]
  const std::pair<unsigned int const,HomeOnePictureFrameData> *v6; // [rsp+28h] [rbp-18h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *_; // [rsp+30h] [rbp-10h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *picture_frame_data; // [rsp+38h] [rbp-8h]

  __for_range = (std::unordered_map<unsigned int,HomeOnePictureFrameData> *)HomePictureFrameComp::getCurModulePictureFrameData(this);
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::begin(__for_range)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOnePictureFrameData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v6 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator*(&__for_begin);
    _ = std::get<0ul,unsigned int const,HomeOnePictureFrameData>(v6);
    picture_frame_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *)std::get<1ul,unsigned int const,HomeOnePictureFrameData>(v6);
    v2 = google::protobuf::RepeatedPtrField<proto::HomePictureFrameInfo>::Add(picture_frame_info_list);
    HomeOnePictureFrameData::toClient(picture_frame_data, v2);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator++(&__for_begin);
  }
};

// Line 152: range 00000000168770F0-00000000168771F3
HomeModulePictureFrameData *__cdecl HomePictureFrameComp::getCurModulePictureFrameData(
        HomePictureFrameComp *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  HomeModulePictureFrameData *result; // rax
  char v5[96]; // [rsp+10h] [rbp-60h] BYREF

  v1 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 4 17 cur_module_id:153";
  *(_QWORD *)(v1 + 16) = HomePictureFrameComp::getCurModulePictureFrameData;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
    __asan_report_load8();
  *(_DWORD *)(v1 + 32) = Home::getCurModuleId(this->home_);
  result = std::unordered_map<unsigned int,HomeModulePictureFrameData>::operator[](
             &this->module_picture_frame_data_map_,
             (const std::unordered_map<unsigned int,HomeModulePictureFrameData>::key_type *)(v1 + 32));
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

// Line 158: range 00000000168771F4-0000000016877355
HomeOnePictureFrameData *__fastcall HomePictureFrameComp::getPictureFrameData(
        HomePictureFrameComp *const this,
        uint32_t guid)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r12
  HomeOnePictureFrameData *result; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false> __y; // [rsp+10h] [rbp-90h] BYREF
  std::unordered_map<unsigned int,HomeOnePictureFrameData> *picture_frame_data_map; // [rsp+18h] [rbp-88h]
  char v8[128]; // [rsp+20h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 8 guid:157 64 8 8 iter:160";
  *(_QWORD *)(v2 + 16) = HomePictureFrameComp::getPictureFrameData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = guid;
  picture_frame_data_map = (std::unordered_map<unsigned int,HomeOnePictureFrameData> *)HomePictureFrameComp::getCurModulePictureFrameData(this);
  *(std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeOnePictureFrameData>::find(
                                                                                       picture_frame_data_map,
                                                                                       (const std::unordered_map<unsigned int,HomeOnePictureFrameData>::key_type *)(v2 + 48));
  __y._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::end(picture_frame_data_map)._M_cur;
  if ( std::__detail::operator==<std::pair<unsigned int const,HomeOnePictureFrameData>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false> *)(v2 + 64),
         &__y) )
  {
    result = 0LL;
  }
  else
  {
    result = &std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false> *const)(v2 + 64))->second;
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

// Line 169: range 0000000016877356-00000000168778FE
__int64 __fastcall HomePictureFrameComp::checkPictureValid(
        HomePictureFrameComp *const this,
        Player *player,
        uint32_t picture_id)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  __int64 result; // rax
  PlayerAvatarComp *AvatarComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r12
  PlayerCoopComp *CoopComp; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r12
  unsigned int val; // [rsp+24h] [rbp-BCh] BYREF
  const data::CoopCGExcelConfig *cg_config_ptr; // [rsp+28h] [rbp-B8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-B0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-A0h] BYREF
  char v28[128]; // [rsp+60h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 22 player_gender_type:176 64 4 14 picture_id:168";
  *(_QWORD *)(v3 + 16) = HomePictureFrameComp::checkPictureValid;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = picture_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  cg_config_ptr = data::CoopExcelConfigMgrBase::findCoopCGExcelConfig(
                    &v6->design_config.txt_config_mgr.coop_config_mgr,
                    *(_DWORD *)(v3 + 64));
  std::shared_ptr<Config>::~shared_ptr(&v26);
  if ( cg_config_ptr )
  {
    AvatarComp = Player::getAvatarComp(player);
    *(_DWORD *)(v3 + 48) = PlayerAvatarComp::getPlayerGenderType(AvatarComp);
    if ( *(_BYTE *)(((unsigned __int64)&cg_config_ptr->cg_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cg_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cg_config_ptr->cg_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( cg_config_ptr->cg_type == CG_MALE && *(_DWORD *)(v3 + 48) != 1 )
      goto LABEL_16;
    if ( *(_BYTE *)(((unsigned __int64)&cg_config_ptr->cg_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)cg_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cg_config_ptr->cg_type >> 3)
                                                                   + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( cg_config_ptr->cg_type != CG_FEMALE || *(_DWORD *)(v3 + 48) == 2 )
    {
      CoopComp = Player::getCoopComp(player);
      if ( !PlayerCoopComp::isCoopCgUnlock(CoopComp, *(_DWORD *)(v3 + 64)) )
      {
        common::milog::MiLogStream::create(
          &v27,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
          "checkPictureValid",
          186);
        v20 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                &v27,
                (const char (*)[48])"[HOME_PICTURE_FRAME] coop cg not unlock, cg_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v3 + 64));
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" home_uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
          __asan_report_load8();
        val = Home::getHomeUid(this->home_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &val);
        common::milog::MiLogStream::~MiLogStream(&v27);
        result = 9784LL;
      }
      else
      {
        result = 0LL;
      }
    }
    else
    {
LABEL_16:
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
        "checkPictureValid",
        180);
      v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              &v27,
              (const char (*)[28])"[HOME_PICTURE_FRAME] cg_id:");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      v14 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v13, (const char (*)[10])" cg_type:");
      v15 = common::milog::MiLogStream::operator<<<data::CoopCGType,(data::CoopCGType*)0>(v14, &cg_config_ptr->cg_type);
      v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              v15,
              (const char (*)[21])" player_gender_type:");
      v17 = common::milog::MiLogStream::operator<<<PlayerGenderType,(PlayerGenderType*)0>(
              v16,
              (const PlayerGenderType *)(v3 + 48));
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" home_uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
        __asan_report_load8();
      val = Home::getHomeUid(this->home_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &val);
      common::milog::MiLogStream::~MiLogStream(&v27);
      result = 9783LL;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_picture_frame/home_picture_frame_comp.cpp",
      "checkPictureValid",
      173);
    v7 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
           &v27,
           (const char (*)[58])"[HOME_PICTURE_FRAME] findCoopCGExcelConfig failed, cg_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v3 + 64));
    v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" home_uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->home_ >> 3) + 0x7FFF8000) )
      __asan_report_load8();
    val = Home::getHomeUid(this->home_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v27);
    result = 0xFFFFFFFFLL;
  }
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
  return result;
};
