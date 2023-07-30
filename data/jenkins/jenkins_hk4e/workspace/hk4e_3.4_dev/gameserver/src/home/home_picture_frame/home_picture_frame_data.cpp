// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_picture_frame/home_picture_frame_data.cpp

// Line 21: range 0000000016877900-0000000016877A55
int32_t __cdecl HomeOnePictureFrameData::fromBin(
        HomeOnePictureFrameData *const this,
        const proto::HomeOnePictureFrameBin *bin)
{
  uint32_t v2; // ecx
  uint32_t v3; // ecx
  uint32_t v4; // ecx
  uint32_t v5; // ecx

  v2 = proto::HomeOnePictureFrameBin::guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(this);
  }
  this->guid = v2;
  v3 = proto::HomeOnePictureFrameBin::furniture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v3;
  v4 = proto::HomeOnePictureFrameBin::scene_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->scene_id);
  }
  this->scene_id = v4;
  v5 = proto::HomeOnePictureFrameBin::picture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->picture_id);
  }
  this->picture_id = v5;
  return 0;
};

// Line 30: range 0000000016877A56-0000000016877BA7
int32_t __cdecl HomeOnePictureFrameData::toBin(
        const HomeOnePictureFrameData *const this,
        proto::HomeOnePictureFrameBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeOnePictureFrameBin::set_guid(bin, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeOnePictureFrameBin::set_furniture_id(bin, this->furniture_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->scene_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeOnePictureFrameBin::set_scene_id(bin, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeOnePictureFrameBin::set_picture_id(bin, this->picture_id);
  return 0;
};

// Line 39: range 0000000016877BA8-0000000016877D1D
int32_t __cdecl HomeOnePictureFrameData::fromClient(
        HomeOnePictureFrameData *const this,
        const proto::HomePictureFrameInfo *proto)
{
  uint32_t guid; // ebx
  common::milog::MiLogStream *v3; // rdx
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rbx
  uint32_t v7; // ecx
  unsigned int val; // [rsp+1Ch] [rbp-34h] BYREF
  common::milog::MiLogStream v9; // [rsp+20h] [rbp-30h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  guid = this->guid;
  if ( guid == proto::HomePictureFrameInfo::guid(proto) )
  {
    v7 = proto::HomePictureFrameInfo::picture_id(proto);
    if ( *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->picture_id);
    }
    this->picture_id = v7;
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_picture_frame/home_picture_frame_data.cpp",
      "fromClient",
      42);
    v3 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
           &v9,
           (const char (*)[48])"[HOME_PICTURE_FRAME] guid not same, data guid: ");
    v4 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &this->guid);
    v5 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v4, (const char (*)[11])" req guid:");
    val = proto::HomePictureFrameInfo::guid(proto);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v9);
    return -1;
  }
};

// Line 50: range 0000000016877D1E-0000000016877DCF
int32_t __cdecl HomeOnePictureFrameData::toClient(
        const HomeOnePictureFrameData *const this,
        proto::HomePictureFrameInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomePictureFrameInfo::set_guid(proto, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->picture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomePictureFrameInfo::set_picture_id(proto, this->picture_id);
  return 0;
};

// Line 57: range 0000000016877DD0-0000000016878009
int32_t __cdecl HomeModulePictureFrameData::fromBin(
        HomeModulePictureFrameData *const this,
        const proto::HomeModulePictureFrameBin *module_picture_frame_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  HomeOnePictureFrameData *v6; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeOnePictureFrameBin>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeOnePictureFrameBin>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeOnePictureFrameBin> *__for_range; // [rsp+20h] [rbp-90h]
  const proto::HomeOnePictureFrameBin *picture_frame_bin; // [rsp+28h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 7 guid:61";
  *(_QWORD *)(v2 + 16) = HomeModulePictureFrameData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::clear(&this->picture_frame_data_map);
  __for_range = proto::HomeModulePictureFrameBin::picture_frame_bin_list(module_picture_frame_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeOnePictureFrameBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeOnePictureFrameBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeOnePictureFrameBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    picture_frame_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeOnePictureFrameBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::HomeOnePictureFrameBin::guid(picture_frame_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeOnePictureFrameData>,unsigned int>(
           &this->picture_frame_data_map,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_picture_frame/home_picture_frame_data.cpp",
        "fromBin",
        64);
      v5 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v12,
             (const char (*)[38])"[HOME_PICTURE_FRAME] duplicate guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v6 = std::unordered_map<unsigned int,HomeOnePictureFrameData>::operator[](
             &this->picture_frame_data_map,
             (const std::unordered_map<unsigned int,HomeOnePictureFrameData>::key_type *)(v2 + 32));
      HomeOnePictureFrameData::fromBin(v6, picture_frame_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeOnePictureFrameBin const>::operator++(&__for_begin);
  }
  result = 0;
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

// Line 73: range 000000001687800A-0000000016878158
int32_t __cdecl HomeModulePictureFrameData::toBin(
        const HomeModulePictureFrameData *const this,
        proto::HomeModulePictureFrameBin *module_picture_frame_bin)
{
  common::milog::MiLogStream *v2; // rax
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,HomeOnePictureFrameData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,HomeOnePictureFrameData> *v7; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *guid; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *picture_frame_data; // [rsp+40h] [rbp-40h]
  proto::HomeOnePictureFrameBin *picture_frame_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->picture_frame_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::begin(&this->picture_frame_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::end(&this->picture_frame_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOnePictureFrameData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeOnePictureFrameData>(v7);
    picture_frame_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *)std::get<1ul,unsigned int const,HomeOnePictureFrameData>(v7);
    picture_frame_bin = proto::HomeModulePictureFrameBin::add_picture_frame_bin_list(module_picture_frame_bin);
    if ( HomeOnePictureFrameData::toBin(picture_frame_data, picture_frame_bin) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_picture_frame/home_picture_frame_data.cpp",
        "toBin",
        79);
      v2 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
             &v11,
             (const char (*)[61])"[HOME_PICTURE_FRAME] picture frame data toBin failed, guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, guid);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 87: range 000000001687815A-0000000016878A78
bool __cdecl HomeModulePictureFrameData::refreshData(
        HomeModulePictureFrameData *const this,
        const HomeSceneArrangementData *data)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  uint32_t scene_id; // ecx
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  uint32_t furniture_id; // ecx
  uint32_t v8; // ecx
  uint32_t v9; // ecx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  bool result; // al
  bool is_changed; // [rsp+1Bh] [rbp-165h]
  data::SpeicalFurnitureType furniture_speical_type; // [rsp+1Ch] [rbp-164h]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin_0; // [rsp+20h] [rbp-160h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end_0; // [rsp+28h] [rbp-158h] BYREF
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator __for_begin; // [rsp+30h] [rbp-150h] BYREF
  std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator __for_end; // [rsp+38h] [rbp-148h] BYREF
  std::unordered_map<unsigned int,HomeOnePictureFrameData> *__for_range; // [rsp+40h] [rbp-140h]
  const std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+48h] [rbp-138h]
  std::set<unsigned int> *__for_range_2; // [rsp+50h] [rbp-130h]
  const std::pair<unsigned int const,HomeBlockData> *v29; // [rsp+58h] [rbp-128h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+60h] [rbp-120h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+68h] [rbp-118h]
  const std::vector<HomeFurnitureData> *__for_range_1; // [rsp+70h] [rbp-110h]
  const HomeFurnitureData *furniture; // [rsp+78h] [rbp-108h]
  HomeOnePictureFrameData *picture_frame_data_0; // [rsp+80h] [rbp-100h]
  const std::pair<unsigned int const,HomeOnePictureFrameData> *v35; // [rsp+88h] [rbp-F8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *guid; // [rsp+90h] [rbp-F0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *picture_frame_data; // [rsp+98h] [rbp-E8h]
  std::shared_ptr<Config> v38; // [rsp+A0h] [rbp-E0h] BYREF
  common::milog::MiLogStream v39; // [rsp+B0h] [rbp-D0h] BYREF
  char v40[176]; // [rsp+D0h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 4 8 guid:120 48 48 18 guid_delete_set:88";
  *(_QWORD *)(v2 + 16) = HomeModulePictureFrameData::refreshData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61956;
  v4[536862723] = -202116109;
  std::set<unsigned int>::set((std::set<unsigned int> *const)(v2 + 48));
  __for_range = &this->picture_frame_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::begin(&this->picture_frame_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::end(&this->picture_frame_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOnePictureFrameData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeOnePictureFrameData>(v35);
    picture_frame_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOnePictureFrameData> >::type *)std::get<1ul,unsigned int const,HomeOnePictureFrameData>(v35);
    if ( *(_BYTE *)(((unsigned __int64)&picture_frame_data->scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)picture_frame_data + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&picture_frame_data->scene_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    scene_id = picture_frame_data->scene_id;
    if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( scene_id == data->scene_id )
      std::set<unsigned int>::insert((std::set<unsigned int> *const)(v2 + 48), guid);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator++(&__for_begin);
  }
  is_changed = 0;
  __for_range_0 = &data->block_data_map;
  __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&data->block_data_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v29 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v29);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v29);
    __for_range_1 = &block_data->deploy_furniure_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false>::__node_type *)std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false>::__node_type *)std::vector<HomeFurnitureData>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
              (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_end) )
    {
      furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v38);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v38)->design_config.txt_config_mgr.home_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      furniture_speical_type = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(
                                 p_home_config_mgr,
                                 furniture->furniture_id);
      std::shared_ptr<Config>::~shared_ptr(&v38);
      if ( furniture_speical_type == CoopPictureFrame )
      {
        std::set<unsigned int>::erase((std::set<unsigned int> *const)(v2 + 48), &furniture->guid);
        picture_frame_data_0 = std::unordered_map<unsigned int,HomeOnePictureFrameData>::operator[](
                                 &this->picture_frame_data_map,
                                 &furniture->guid);
        if ( *(_BYTE *)(((unsigned __int64)&picture_frame_data_0->furniture_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)picture_frame_data_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&picture_frame_data_0->furniture_id >> 3)
                                                                             + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        furniture_id = picture_frame_data_0->furniture_id;
        if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( furniture_id != furniture->furniture_id )
        {
          is_changed = 1;
          if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4();
          }
          v8 = data->scene_id;
          if ( *(_BYTE *)(((unsigned __int64)&picture_frame_data_0->scene_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)picture_frame_data_0 + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&picture_frame_data_0->scene_id >> 3)
                                                                               + 0x7FFF8000) )
          {
            __asan_report_store4(&picture_frame_data_0->scene_id);
          }
          picture_frame_data_0->scene_id = v8;
          if ( *(_BYTE *)(((unsigned __int64)&furniture->guid >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)furniture + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture->guid >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v9 = furniture->guid;
          if ( *(_BYTE *)(((unsigned __int64)picture_frame_data_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)picture_frame_data_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)picture_frame_data_0 >> 3)
                                                                                   + 0x7FFF8000) )
          {
            __asan_report_store4(picture_frame_data_0);
          }
          picture_frame_data_0->guid = v9;
          picture_frame_data_0->furniture_id = furniture->furniture_id;
          if ( *(_BYTE *)(((unsigned __int64)&picture_frame_data_0->picture_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)picture_frame_data_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&picture_frame_data_0->picture_id >> 3)
                                                                                + 0x7FFF8000) )
          {
            __asan_report_store4(&picture_frame_data_0->picture_id);
          }
          picture_frame_data_0->picture_id = 0;
          common::milog::MiLogStream::create(
            &v39,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_picture_frame/home_picture_frame_data.cpp",
            "refreshData",
            114);
          v10 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                  &v39,
                  (const char (*)[56])"[HOME_PICTURE_FRAME] add new picture frame data, guid: ");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &furniture->guid);
          v12 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v11,
                  (const char (*)[15])" furniture_id:");
          v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &furniture->furniture_id);
          v14 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &data->scene_id);
          common::milog::MiLogStream::~MiLogStream(&v39);
        }
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
  }
  __for_range_2 = (std::set<unsigned int> *)(v2 + 48);
  __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false>::__node_type *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v2 + 48))._M_node;
  __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false>::__node_type *)std::set<unsigned int>::end(__for_range_2)._M_node;
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
  {
    v15 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    *(_DWORD *)(v2 + 32) = *v15;
    is_changed = 1;
    std::unordered_map<unsigned int,HomeOnePictureFrameData>::erase(
      &this->picture_frame_data_map,
      (const std::unordered_map<unsigned int,HomeOnePictureFrameData>::key_type *)(v2 + 32));
    common::milog::MiLogStream::create(
      &v39,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/home/home_picture_frame/home_picture_frame_data.cpp",
      "refreshData",
      124);
    v16 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            &v39,
            (const char (*)[55])"[HOME_PICTURE_FRAME] delete picture frame data, guid: ");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v2 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" scene_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &data->scene_id);
    common::milog::MiLogStream::~MiLogStream(&v39);
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
  }
  std::set<unsigned int>::~set((std::set<unsigned int> *const)(v2 + 48));
  result = is_changed;
  if ( v40 == (char *)v2 )
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
  return result;
};

// Line 130: range 0000000016878A7A-0000000016878CEE
void __fastcall HomeModulePictureFrameData::deleteDataBySceneId(
        HomeModulePictureFrameData *const this,
        uint32_t scene_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::pointer v5; // rdx
  common::milog::MiLogStream *v6; // r14
  std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::pointer v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false> __y; // [rsp+18h] [rbp-B8h] BYREF
  common::milog::MiLogStream v11; // [rsp+20h] [rbp-B0h] BYREF
  char v12[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 scene_id:129 64 8 8 iter:131";
  *(_QWORD *)(v2 + 16) = HomeModulePictureFrameData::deleteDataBySceneId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -202116352;
  *(_DWORD *)(v2 + 48) = scene_id;
  *(std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeOnePictureFrameData>::begin(&this->picture_frame_data_map);
  while ( 1 )
  {
    __y._M_cur = std::unordered_map<unsigned int,HomeOnePictureFrameData>::end(&this->picture_frame_data_map)._M_cur;
    if ( !std::__detail::operator!=<std::pair<unsigned int const,HomeOnePictureFrameData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOnePictureFrameData>,false> *)(v2 + 64),
            &__y) )
      break;
    v5 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v5->second.scene_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)v5 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&v5->second.scene_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    if ( v5->second.scene_id == *(_DWORD *)(v2 + 48) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        1u,
        "./src/home/home_picture_frame/home_picture_frame_data.cpp",
        "deleteDataBySceneId",
        135);
      v6 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
             &v11,
             (const char (*)[55])"[HOME_PICTURE_FRAME] delete picture frame data, guid: ");
      v7 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false> *const)(v2 + 64));
      v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &v7->first);
      v9 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v8, (const char (*)[11])" scene_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
      common::milog::MiLogStream::~MiLogStream(&v11);
      *(std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,HomeOnePictureFrameData>::erase(
                                                                                           &this->picture_frame_data_map,
                                                                                           *(std::unordered_map<unsigned int,HomeOnePictureFrameData>::iterator *)(v2 + 64));
    }
    else
    {
      std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOnePictureFrameData>,false,false> *const)(v2 + 64));
    }
  }
  if ( v12 == (char *)v2 )
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
