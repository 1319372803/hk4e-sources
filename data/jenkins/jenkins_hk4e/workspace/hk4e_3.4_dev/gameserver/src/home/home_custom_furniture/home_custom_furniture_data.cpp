// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/home/home_custom_furniture/home_custom_furniture_data.cpp

// Line 22: range 00000000145D624C-00000000145D6319
int32_t __cdecl HomeCustomFurnitureNodeData::fromBin(
        HomeCustomFurnitureNodeData *const this,
        const proto::HomeCustomFurnitureNodeInfoBin *bin)
{
  int32_t v2; // edx
  uint32_t v3; // ecx
  const std::string *v4; // rax

  v2 = proto::HomeCustomFurnitureNodeInfoBin::parent_index(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = v2;
  v3 = proto::HomeCustomFurnitureNodeInfoBin::furniture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v3;
  v4 = proto::HomeCustomFurnitureNodeInfoBin::slot_identifier[abi:cxx11](bin);
  std::string::operator=(&this->slot_identifier, v4);
  return 0;
};

// Line 30: range 00000000145D631A-00000000145D63DA
int32_t __cdecl HomeCustomFurnitureNodeData::toBin(
        const HomeCustomFurnitureNodeData *const this,
        proto::HomeCustomFurnitureNodeInfoBin *bin)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeCustomFurnitureNodeInfoBin::set_parent_index(bin, this->parent_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeCustomFurnitureNodeInfoBin::set_furniture_id(bin, this->furniture_id);
  proto::HomeCustomFurnitureNodeInfoBin::set_slot_identifier(bin, &this->slot_identifier);
  return 0;
};

// Line 38: range 00000000145D63DC-00000000145D64A9
int32_t __cdecl HomeCustomFurnitureNodeData::fromClient(
        HomeCustomFurnitureNodeData *const this,
        const proto::CustomCommonNodeInfo *proto)
{
  int32_t v2; // edx
  uint32_t v3; // ecx
  const std::string *v4; // rax

  v2 = proto::CustomCommonNodeInfo::parent_index(proto);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->parent_index = v2;
  v3 = proto::CustomCommonNodeInfo::config_id(proto);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v3;
  v4 = proto::CustomCommonNodeInfo::slot_identifier[abi:cxx11](proto);
  std::string::operator=(&this->slot_identifier, v4);
  return 0;
};

// Line 46: range 00000000145D64AA-00000000145D656A
int32_t __cdecl HomeCustomFurnitureNodeData::toClient(
        const HomeCustomFurnitureNodeData *const this,
        proto::CustomCommonNodeInfo *proto)
{
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::CustomCommonNodeInfo::set_parent_index(proto, this->parent_index);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::CustomCommonNodeInfo::set_config_id(proto, this->furniture_id);
  proto::CustomCommonNodeInfo::set_slot_identifier(proto, &this->slot_identifier);
  return 0;
};

// Line 54: range 00000000145D656C-00000000145D66BF
int32_t __cdecl HomeOneCustomFurnitureData::fromBin(
        HomeOneCustomFurnitureData *const this,
        const proto::HomeOneCustomFurnitureBin *bin)
{
  uint32_t v2; // edx
  uint32_t v3; // ecx
  uint32_t v4; // edx
  const google::protobuf::RepeatedPtrField<proto::HomeCustomFurnitureNodeInfoBin> *v5; // rax

  v2 = proto::HomeOneCustomFurnitureBin::scene_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(this);
  }
  this->scene_id = v2;
  v3 = proto::HomeOneCustomFurnitureBin::guid(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_store4(&this->guid);
  }
  this->guid = v3;
  v4 = proto::HomeOneCustomFurnitureBin::furniture_id(bin);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->furniture_id);
  }
  this->furniture_id = v4;
  std::vector<HomeCustomFurnitureNodeData>::clear(&this->sub_furniture_vec);
  v5 = proto::HomeOneCustomFurnitureBin::sub_furniture_list(bin);
  common::tools::MiscUtils::repeatedToVector<HomeCustomFurnitureNodeData,proto::HomeCustomFurnitureNodeInfoBin,int (HomeCustomFurnitureNodeData::*)(proto::HomeCustomFurnitureNodeInfoBin const&)>(
    v5,
    &this->sub_furniture_vec,
    (int (*)(HomeCustomFurnitureNodeData *, const proto::HomeCustomFurnitureNodeInfoBin *))HomeCustomFurnitureNodeData::fromBin);
  HomeOneCustomFurnitureData::checkAndInitSubFurnitureData(this);
  return 0;
};

// Line 66: range 00000000145D66C0-00000000145D67F2
int32_t __cdecl HomeOneCustomFurnitureData::toBin(
        const HomeOneCustomFurnitureData *const this,
        proto::HomeOneCustomFurnitureBin *bin)
{
  google::protobuf::RepeatedPtrField<proto::HomeCustomFurnitureNodeInfoBin> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeOneCustomFurnitureBin::set_scene_id(bin, this->scene_id);
  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeOneCustomFurnitureBin::set_guid(bin, this->guid);
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  proto::HomeOneCustomFurnitureBin::set_furniture_id(bin, this->furniture_id);
  v2 = proto::HomeOneCustomFurnitureBin::mutable_sub_furniture_list(bin);
  common::tools::MiscUtils::vectorToRepeated<HomeCustomFurnitureNodeData,proto::HomeCustomFurnitureNodeInfoBin,int (HomeCustomFurnitureNodeData::*)(proto::HomeCustomFurnitureNodeInfoBin&)const>(
    &this->sub_furniture_vec,
    v2,
    (int (*)(const HomeCustomFurnitureNodeData *, proto::HomeCustomFurnitureNodeInfoBin *))HomeCustomFurnitureNodeData::toBin);
  return 0;
};

// Line 75: range 00000000145D67F4-00000000145D6AED
int32_t __cdecl HomeOneCustomFurnitureData::fromClient(
        HomeOneCustomFurnitureData *const this,
        const proto::HomeCustomFurnitureInfo *proto,
        const std::map<unsigned int,unsigned int> *furniture_count_map,
        const std::unordered_map<unsigned int,unsigned int> *pass_part_item_count_map)
{
  uint32_t guid; // ebx
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v9; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type v10; // ebx
  std::map<unsigned int,unsigned int>::mapped_type *v11; // rax
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rdx
  unsigned int val; // [rsp+2Ch] [rbp-74h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_begin; // [rsp+30h] [rbp-70h] BYREF
  std::map<unsigned int,unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-68h] BYREF
  const std::map<unsigned int,unsigned int> *__for_range; // [rsp+40h] [rbp-60h]
  const std::pair<unsigned int const,unsigned int> *v19; // [rsp+48h] [rbp-58h]
  std::tuple_element<0,const std::pair<unsigned int const,unsigned int> >::type *furniture_id; // [rsp+50h] [rbp-50h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+58h] [rbp-48h]
  common::milog::MiLogStream v22; // [rsp+60h] [rbp-40h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  guid = this->guid;
  if ( guid == proto::HomeCustomFurnitureInfo::guid(proto) )
  {
    std::vector<HomeCustomFurnitureNodeData>::clear(&this->sub_furniture_vec);
    v9 = proto::HomeCustomFurnitureInfo::sub_furniture_list(proto);
    common::tools::MiscUtils::repeatedToVector<HomeCustomFurnitureNodeData,proto::CustomCommonNodeInfo,int (HomeCustomFurnitureNodeData::*)(proto::CustomCommonNodeInfo const&)>(
      v9,
      &this->sub_furniture_vec,
      (int (*)(HomeCustomFurnitureNodeData *, const proto::CustomCommonNodeInfo *))HomeCustomFurnitureNodeData::fromClient);
    std::map<unsigned int,unsigned int>::clear(&this->used_sub_furniture_count_map);
    __for_range = furniture_count_map;
    __for_begin._M_node = std::map<unsigned int,unsigned int>::begin(furniture_count_map)._M_node;
    __for_end._M_node = std::map<unsigned int,unsigned int>::end(furniture_count_map)._M_node;
    while ( std::operator!=(&__for_begin, &__for_end) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*(&__for_begin);
      furniture_id = std::get<0ul,unsigned int const,unsigned int>(v19);
      count = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v19);
      if ( *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)count & 7) + 3) >= *(_BYTE *)(((unsigned __int64)count >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      v10 = *count;
      v11 = std::map<unsigned int,unsigned int>::operator[](&this->used_sub_furniture_count_map, furniture_id);
      v12 = v11;
      if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v11);
      }
      *v12 = v10;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++(&__for_begin);
    }
    std::unordered_map<unsigned int,unsigned int>::operator=(
      &this->used_pass_part_item_count_map,
      pass_part_item_count_map);
    return 0;
  }
  else
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/home/home_custom_furniture/home_custom_furniture_data.cpp",
      "fromClient",
      79);
    v5 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
           &v22,
           (const char (*)[51])"[HOME_CUSTOM_FURNITURE] guid not same, data guid: ");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->guid);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v6, (const char (*)[11])" req guid:");
    val = proto::HomeCustomFurnitureInfo::guid(proto);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v22);
    return -1;
  }
};

// Line 97: range 00000000145D6AEE-00000000145D6B95
int32_t __cdecl HomeOneCustomFurnitureData::toClient(
        const HomeOneCustomFurnitureData *const this,
        proto::HomeCustomFurnitureInfo *proto)
{
  google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *v2; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->guid >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4();
  }
  proto::HomeCustomFurnitureInfo::set_guid(proto, this->guid);
  v2 = proto::HomeCustomFurnitureInfo::mutable_sub_furniture_list(proto);
  common::tools::MiscUtils::vectorToRepeated<HomeCustomFurnitureNodeData,proto::CustomCommonNodeInfo,int (HomeCustomFurnitureNodeData::*)(proto::CustomCommonNodeInfo&)const>(
    &this->sub_furniture_vec,
    v2,
    (int (*)(const HomeCustomFurnitureNodeData *, proto::CustomCommonNodeInfo *))HomeCustomFurnitureNodeData::toClient);
  return 0;
};

// Line 104: range 00000000145D6B96-00000000145D6FE9
int32_t __cdecl HomeOneCustomFurnitureData::checkAndInitSubFurnitureData(HomeOneCustomFurnitureData *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // rbx
  int32_t v4; // r14d
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  uint32_t gadget_id; // [rsp+14h] [rbp-10Ch]
  HomeWorldExcelConfigMgr *home_config_mgr; // [rsp+18h] [rbp-108h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-F0h] BYREF
  char v14[208]; // [rsp+50h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 24 22 sub_furniture_list:113 96 24 12 node_vec:118";
  *(_QWORD *)(v1 + 16) = HomeOneCustomFurnitureData::checkAndInitSubFurnitureData;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234881024;
  v3[536862722] = -218959118;
  v3[536862723] = -218103808;
  v3[536862724] = -202116109;
  std::map<unsigned int,unsigned int>::clear(&this->used_sub_furniture_count_map);
  std::unordered_map<unsigned int,unsigned int>::clear(&this->used_pass_part_item_count_map);
  if ( std::vector<HomeCustomFurnitureNodeData>::empty(&this->sub_furniture_vec) )
  {
    v4 = 0;
  }
  else
  {
    google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::RepeatedPtrField((google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *const)(v1 + 32));
    common::tools::MiscUtils::vectorToRepeated<HomeCustomFurnitureNodeData,proto::CustomCommonNodeInfo,int (HomeCustomFurnitureNodeData::*)(proto::CustomCommonNodeInfo&)const>(
      &this->sub_furniture_vec,
      (google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *)(v1 + 32),
      (int (*)(const HomeCustomFurnitureNodeData *, proto::CustomCommonNodeInfo *))HomeCustomFurnitureNodeData::toClient);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12)->design_config.txt_config_mgr.home_config_mgr;
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->furniture_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    gadget_id = HomeWorldExcelConfigMgr::getFurnitureGadgetId(home_config_mgr, this->furniture_id);
    std::vector<std::shared_ptr<CustomCommonNodeData>>::vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v1 + 96));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    JsonConfigMgr::convertCustomTreeInfo(
      &v5->design_config.json_config_mgr,
      gadget_id,
      (const google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *)(v1 + 32),
      (std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v1 + 96));
    std::shared_ptr<Config>::~shared_ptr(&v12);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    v7 = JsonConfigMgr::checkCustomTreeInfo(
           &v6->design_config.json_config_mgr,
           (const std::vector<std::shared_ptr<CustomCommonNodeData>> *)(v1 + 96),
           &this->used_sub_furniture_count_map,
           &this->used_pass_part_item_count_map) != 0;
    std::shared_ptr<Config>::~shared_ptr(&v12);
    if ( v7 )
    {
      common::milog::MiLogStream::create(
        &v13,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/home/home_custom_furniture/home_custom_furniture_data.cpp",
        "checkAndInitSubFurnitureData",
        123);
      v8 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
             &v13,
             (const char (*)[68])"[HOME_CUSTOM_FURNITURE] check custom furniture fail, furniture_id: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->furniture_id);
      common::milog::MiLogStream::~MiLogStream(&v13);
      std::vector<HomeCustomFurnitureNodeData>::clear(&this->sub_furniture_vec);
      std::map<unsigned int,unsigned int>::clear(&this->used_sub_furniture_count_map);
      std::unordered_map<unsigned int,unsigned int>::clear(&this->used_pass_part_item_count_map);
      v4 = -1;
    }
    else
    {
      v4 = 0;
    }
    std::vector<std::shared_ptr<CustomCommonNodeData>>::~vector((std::vector<std::shared_ptr<CustomCommonNodeData>> *const)(v1 + 96));
    google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo>::~RepeatedPtrField((google::protobuf::RepeatedPtrField<proto::CustomCommonNodeInfo> *const)(v1 + 32));
  }
  result = v4;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
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

// Line 133: range 00000000145D6FEA-00000000145D70FF
void __cdecl HomeOneCustomFurnitureData::getSubFurnitureMap(
        const HomeOneCustomFurnitureData *const this,
        std::map<std::string,unsigned int> *sub_furniture_map)
{
  uint32_t furniture_id; // ebx
  std::map<std::string,unsigned int>::mapped_type *v3; // rax
  uint32_t *v4; // rdx
  std::vector<HomeCustomFurnitureNodeData>::const_iterator __for_begin; // [rsp+10h] [rbp-30h] BYREF
  std::vector<HomeCustomFurnitureNodeData>::const_iterator __for_end; // [rsp+18h] [rbp-28h] BYREF
  const std::vector<HomeCustomFurnitureNodeData> *__for_range; // [rsp+20h] [rbp-20h]
  const HomeCustomFurnitureNodeData *sub_furniture_node; // [rsp+28h] [rbp-18h]

  __for_range = &this->sub_furniture_vec;
  __for_begin._M_current = std::vector<HomeCustomFurnitureNodeData>::begin(&this->sub_furniture_vec)._M_current;
  __for_end._M_current = std::vector<HomeCustomFurnitureNodeData>::end(&this->sub_furniture_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeCustomFurnitureNodeData const*,std::vector<HomeCustomFurnitureNodeData>>(
            &__for_begin,
            &__for_end) )
  {
    sub_furniture_node = __gnu_cxx::__normal_iterator<HomeCustomFurnitureNodeData const*,std::vector<HomeCustomFurnitureNodeData>>::operator*(&__for_begin);
    if ( *(_BYTE *)(((unsigned __int64)&sub_furniture_node->furniture_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)sub_furniture_node + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sub_furniture_node->furniture_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4();
    }
    furniture_id = sub_furniture_node->furniture_id;
    v3 = std::map<std::string,unsigned int>::operator[](sub_furniture_map, &sub_furniture_node->slot_identifier);
    v4 = v3;
    if ( *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v3 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v3 >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(v3);
    }
    *v4 = furniture_id;
    __gnu_cxx::__normal_iterator<HomeCustomFurnitureNodeData const*,std::vector<HomeCustomFurnitureNodeData>>::operator++(&__for_begin);
  }
};

// Line 141: range 00000000145D7100-00000000145D718A
void __cdecl HomeOneCustomFurnitureData::getSubFurnitureIds(
        const HomeOneCustomFurnitureData *const this,
        std::vector<unsigned int> *sub_furniture_id_vec)
{
  std::vector<HomeCustomFurnitureNodeData>::const_iterator __for_begin; // [rsp+10h] [rbp-20h] BYREF
  std::vector<HomeCustomFurnitureNodeData>::const_iterator __for_end; // [rsp+18h] [rbp-18h] BYREF
  const std::vector<HomeCustomFurnitureNodeData> *__for_range; // [rsp+20h] [rbp-10h]
  const HomeCustomFurnitureNodeData *sub_furniture_node; // [rsp+28h] [rbp-8h]

  __for_range = &this->sub_furniture_vec;
  __for_begin._M_current = std::vector<HomeCustomFurnitureNodeData>::begin(&this->sub_furniture_vec)._M_current;
  __for_end._M_current = std::vector<HomeCustomFurnitureNodeData>::end(&this->sub_furniture_vec)._M_current;
  while ( __gnu_cxx::operator!=<HomeCustomFurnitureNodeData const*,std::vector<HomeCustomFurnitureNodeData>>(
            &__for_begin,
            &__for_end) )
  {
    sub_furniture_node = __gnu_cxx::__normal_iterator<HomeCustomFurnitureNodeData const*,std::vector<HomeCustomFurnitureNodeData>>::operator*(&__for_begin);
    std::vector<unsigned int>::push_back(sub_furniture_id_vec, &sub_furniture_node->furniture_id);
    __gnu_cxx::__normal_iterator<HomeCustomFurnitureNodeData const*,std::vector<HomeCustomFurnitureNodeData>>::operator++(&__for_begin);
  }
};

// Line 149: range 00000000145D718C-00000000145D73C5
int32_t __cdecl HomeModuleCustomFurnitureData::fromBin(
        HomeModuleCustomFurnitureData *const this,
        const proto::HomeModuleCustomFurnitureBin *module_custom_furniture_bin)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  HomeOneCustomFurnitureData *v6; // rax
  int32_t result; // eax
  google::protobuf::RepeatedPtrField<proto::HomeOneCustomFurnitureBin>::const_iterator __for_begin; // [rsp+10h] [rbp-A0h] BYREF
  google::protobuf::RepeatedPtrField<proto::HomeOneCustomFurnitureBin>::const_iterator __for_end; // [rsp+18h] [rbp-98h] BYREF
  const google::protobuf::RepeatedPtrField<proto::HomeOneCustomFurnitureBin> *__for_range; // [rsp+20h] [rbp-90h]
  const proto::HomeOneCustomFurnitureBin *custom_furniture_bin; // [rsp+28h] [rbp-88h]
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
  *(_QWORD *)(v2 + 8) = "1 32 4 8 guid:153";
  *(_QWORD *)(v2 + 16) = HomeModuleCustomFurnitureData::fromBin;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::clear(&this->custom_furniture_data_map);
  __for_range = proto::HomeModuleCustomFurnitureBin::custom_furniture_bin_list(module_custom_furniture_bin);
  __for_begin.it_ = google::protobuf::RepeatedPtrField<proto::HomeOneCustomFurnitureBin>::begin(__for_range).it_;
  __for_end.it_ = google::protobuf::RepeatedPtrField<proto::HomeOneCustomFurnitureBin>::end(__for_range).it_;
  while ( google::protobuf::internal::RepeatedPtrIterator<proto::HomeOneCustomFurnitureBin const>::operator!=(
            &__for_begin,
            &__for_end) )
  {
    custom_furniture_bin = google::protobuf::internal::RepeatedPtrIterator<proto::HomeOneCustomFurnitureBin const>::operator*(&__for_begin);
    *(_DWORD *)(v2 + 32) = proto::HomeOneCustomFurnitureBin::guid(custom_furniture_bin);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,HomeOneCustomFurnitureData>,unsigned int>(
           &this->custom_furniture_data_map,
           (const unsigned int *)(v2 + 32)) )
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_custom_furniture/home_custom_furniture_data.cpp",
        "fromBin",
        156);
      v5 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v12,
             (const char (*)[41])"[HOME_CUSTOM_FURNITURE] duplicate guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream(&v12);
    }
    else
    {
      v6 = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::operator[](
             &this->custom_furniture_data_map,
             (const std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::key_type *)(v2 + 32));
      HomeOneCustomFurnitureData::fromBin(v6, custom_furniture_bin);
    }
    google::protobuf::internal::RepeatedPtrIterator<proto::HomeOneCustomFurnitureBin const>::operator++(&__for_begin);
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

// Line 165: range 00000000145D73C6-00000000145D7514
int32_t __cdecl HomeModuleCustomFurnitureData::toBin(
        const HomeModuleCustomFurnitureData *const this,
        proto::HomeModuleCustomFurnitureBin *module_custom_furniture_bin)
{
  common::milog::MiLogStream *v2; // rax
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_begin; // [rsp+18h] [rbp-68h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_end; // [rsp+20h] [rbp-60h] BYREF
  const std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *__for_range; // [rsp+28h] [rbp-58h]
  const std::pair<unsigned int const,HomeOneCustomFurnitureData> *v7; // [rsp+30h] [rbp-50h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *guid; // [rsp+38h] [rbp-48h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *custom_furniture_data; // [rsp+40h] [rbp-40h]
  proto::HomeOneCustomFurnitureBin *custom_furniture_bin; // [rsp+48h] [rbp-38h]
  common::milog::MiLogStream v11; // [rsp+50h] [rbp-30h] BYREF

  __for_range = &this->custom_furniture_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::begin(&this->custom_furniture_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(&this->custom_furniture_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeOneCustomFurnitureData>(v7);
    custom_furniture_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeOneCustomFurnitureData>(v7);
    custom_furniture_bin = proto::HomeModuleCustomFurnitureBin::add_custom_furniture_bin_list(module_custom_furniture_bin);
    if ( HomeOneCustomFurnitureData::toBin(custom_furniture_data, custom_furniture_bin) )
    {
      common::milog::MiLogStream::create(
        &v11,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/home/home_custom_furniture/home_custom_furniture_data.cpp",
        "toBin",
        171);
      v2 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
             &v11,
             (const char (*)[67])"[HOME_CUSTOM_FURNITURE] custom furniture data toBin failed, guid: ");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v2, guid);
      common::milog::MiLogStream::~MiLogStream(&v11);
      return -1;
    }
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  return 0;
};

// Line 179: range 00000000145D7516-00000000145D7C03
void __cdecl HomeModuleCustomFurnitureData::fromData(
        HomeModuleCustomFurnitureData *const this,
        const HomeSceneArrangementData *data,
        std::set<unsigned int> *update_guid_set,
        std::set<unsigned int> *delete_guid_set)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  HomeWorldExcelConfigMgr *p_home_config_mgr; // rcx
  uint32_t furniture_id; // ecx
  uint32_t v9; // ecx
  uint32_t v10; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  data::SpeicalFurnitureType furniture_speical_type; // [rsp+24h] [rbp-10Ch]
  std::map<unsigned int,HomeBlockData>::const_iterator __for_begin_0; // [rsp+28h] [rbp-108h] BYREF
  std::map<unsigned int,HomeBlockData>::const_iterator __for_end_0; // [rsp+30h] [rbp-100h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::iterator __for_begin; // [rsp+38h] [rbp-F8h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::iterator __for_end; // [rsp+40h] [rbp-F0h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *__for_range; // [rsp+48h] [rbp-E8h]
  const std::map<unsigned int,HomeBlockData> *__for_range_0; // [rsp+50h] [rbp-E0h]
  const std::pair<unsigned int const,HomeBlockData> *v25; // [rsp+58h] [rbp-D8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeBlockData> >::type *block_id; // [rsp+60h] [rbp-D0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *block_data; // [rsp+68h] [rbp-C8h]
  const std::vector<HomeFurnitureData> *__for_range_1; // [rsp+70h] [rbp-C0h]
  const HomeFurnitureData *furniture; // [rsp+78h] [rbp-B8h]
  HomeOneCustomFurnitureData *custom_furniture_data_0; // [rsp+80h] [rbp-B0h]
  const std::pair<unsigned int const,HomeOneCustomFurnitureData> *v31; // [rsp+88h] [rbp-A8h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *guid; // [rsp+90h] [rbp-A0h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *custom_furniture_data; // [rsp+98h] [rbp-98h]
  std::shared_ptr<Config> v34; // [rsp+A0h] [rbp-90h] BYREF
  common::milog::MiLogStream v35; // [rsp+B0h] [rbp-80h] BYREF
  char v36[96]; // [rsp+D0h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 12 scene_id:180";
  *(_QWORD *)(v4 + 16) = HomeModuleCustomFurnitureData::fromData;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)data >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4();
  }
  *(_DWORD *)(v4 + 32) = data->scene_id;
  __for_range = &this->custom_furniture_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::begin(&this->custom_furniture_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(&this->custom_furniture_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v31 = std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeOneCustomFurnitureData>(v31);
    custom_furniture_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeOneCustomFurnitureData>(v31);
    if ( *(_BYTE *)(((unsigned __int64)custom_furniture_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)custom_furniture_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( custom_furniture_data->scene_id == *(_DWORD *)(v4 + 32) )
      std::set<unsigned int>::insert(delete_guid_set, guid);
    std::__detail::_Node_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  __for_range_0 = &data->block_data_map;
  __for_begin_0._M_node = std::map<unsigned int,HomeBlockData>::begin(&data->block_data_map)._M_node;
  __for_end_0._M_node = std::map<unsigned int,HomeBlockData>::end(__for_range_0)._M_node;
  while ( std::operator!=(&__for_begin_0, &__for_end_0) )
  {
    v25 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator*(&__for_begin_0);
    block_id = std::get<0ul,unsigned int const,HomeBlockData>(v25);
    block_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeBlockData> >::type *)std::get<1ul,unsigned int const,HomeBlockData>(v25);
    __for_range_1 = &block_data->deploy_furniure_vec;
    __for_begin._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>::__node_type *)std::vector<HomeFurnitureData>::begin(&block_data->deploy_furniure_vec)._M_current;
    __for_end._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>::__node_type *)std::vector<HomeFurnitureData>::end(__for_range_1)._M_current;
    while ( __gnu_cxx::operator!=<HomeFurnitureData const*,std::vector<HomeFurnitureData>>(
              (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_begin,
              (const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *)&__for_end) )
    {
      furniture = __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator*((const __gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v34);
      p_home_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr.home_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4();
      }
      furniture_speical_type = HomeWorldExcelConfigMgr::getFurnitureSpeicalType(
                                 p_home_config_mgr,
                                 furniture->furniture_id);
      std::shared_ptr<Config>::~shared_ptr(&v34);
      if ( furniture_speical_type == CustomBaseFurnitrue )
      {
        std::set<unsigned int>::erase(delete_guid_set, &furniture->guid);
        custom_furniture_data_0 = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::operator[](
                                    &this->custom_furniture_data_map,
                                    &furniture->guid);
        if ( *(_BYTE *)(((unsigned __int64)&custom_furniture_data_0->furniture_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&custom_furniture_data_0->furniture_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4();
        }
        furniture_id = custom_furniture_data_0->furniture_id;
        if ( *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)furniture & 7) + 3) >= *(_BYTE *)(((unsigned __int64)furniture >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4();
        }
        if ( furniture_id != furniture->furniture_id )
        {
          std::set<unsigned int>::insert(update_guid_set, &furniture->guid);
          v9 = *(_DWORD *)(v4 + 32);
          if ( *(_BYTE *)(((unsigned __int64)custom_furniture_data_0 >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)custom_furniture_data_0 >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(custom_furniture_data_0);
          }
          custom_furniture_data_0->scene_id = v9;
          if ( *(_BYTE *)(((unsigned __int64)&furniture->guid >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)furniture + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&furniture->guid >> 3)
                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4();
          }
          v10 = furniture->guid;
          if ( *(_BYTE *)(((unsigned __int64)&custom_furniture_data_0->guid >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)custom_furniture_data_0 + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&custom_furniture_data_0->guid >> 3)
                                                                                  + 0x7FFF8000) )
          {
            __asan_report_store4(&custom_furniture_data_0->guid);
          }
          custom_furniture_data_0->guid = v10;
          custom_furniture_data_0->furniture_id = furniture->furniture_id;
          std::vector<HomeCustomFurnitureNodeData>::clear(&custom_furniture_data_0->sub_furniture_vec);
          std::map<unsigned int,unsigned int>::clear(&custom_furniture_data_0->used_sub_furniture_count_map);
          std::unordered_map<unsigned int,unsigned int>::clear(&custom_furniture_data_0->used_pass_part_item_count_map);
          common::milog::MiLogStream::create(
            &v35,
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/home/home_custom_furniture/home_custom_furniture_data.cpp",
            "fromData",
            210);
          v11 = common::milog::MiLogStream::operator<<<char [102],(char *[102])0>(
                  &v35,
                  (const char (*)[102])"[HOME_CUSTOM_FURNITURE] HomeModuleCustomFurnitureData.fromData, add new custom fu"
                                       "rniture data, guid: ");
          v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &furniture->guid);
          v13 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(
                  v12,
                  (const char (*)[15])" furniture_id:");
          v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &furniture->furniture_id);
          v15 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v14, (const char (*)[11])" scene_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v4 + 32));
          common::milog::MiLogStream::~MiLogStream(&v35);
        }
      }
      __gnu_cxx::__normal_iterator<HomeFurnitureData const*,std::vector<HomeFurnitureData>>::operator++((__gnu_cxx::__normal_iterator<const HomeFurnitureData*,std::vector<HomeFurnitureData> > *const)&__for_begin);
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,HomeBlockData>>::operator++(&__for_begin_0);
  }
  if ( v36 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 219: range 00000000145D7C04-00000000145D7D1C
std::set<unsigned int> *__cdecl HomeModuleCustomFurnitureData::getCustomFurnitureGuids(
        std::set<unsigned int> *retstr,
        const HomeModuleCustomFurnitureData *const this,
        uint32_t scene_id)
{
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_begin; // [rsp+20h] [rbp-40h] BYREF
  std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::const_iterator __for_end; // [rsp+28h] [rbp-38h] BYREF
  const std::unordered_map<unsigned int,HomeOneCustomFurnitureData> *__for_range; // [rsp+30h] [rbp-30h]
  const std::pair<unsigned int const,HomeOneCustomFurnitureData> *v8; // [rsp+38h] [rbp-28h]
  std::tuple_element<0,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *guid; // [rsp+40h] [rbp-20h]
  std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *custom_furniture_data; // [rsp+48h] [rbp-18h]

  std::set<unsigned int>::set(retstr);
  __for_range = &this->custom_furniture_data_map;
  __for_begin._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::begin(&this->custom_furniture_data_map)._M_cur;
  __for_end._M_cur = std::unordered_map<unsigned int,HomeOneCustomFurnitureData>::end(&this->custom_furniture_data_map)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false>(
            &__for_begin,
            &__for_end) )
  {
    v8 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator*(&__for_begin);
    guid = std::get<0ul,unsigned int const,HomeOneCustomFurnitureData>(v8);
    custom_furniture_data = (std::tuple_element<1,const std::pair<unsigned int const,HomeOneCustomFurnitureData> >::type *)std::get<1ul,unsigned int const,HomeOneCustomFurnitureData>(v8);
    if ( *(_BYTE *)(((unsigned __int64)custom_furniture_data >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)custom_furniture_data >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4();
    }
    if ( scene_id == custom_furniture_data->scene_id )
      std::set<unsigned int>::insert(retstr, guid);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,HomeOneCustomFurnitureData>,false,false>::operator++(&__for_begin);
  }
  return retstr;
};
